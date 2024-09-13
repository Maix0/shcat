/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_lex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:54:24 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/13 13:54:46 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/parser_inner.h"

t_subtree	ts_parser__lex(TSParser *self, t_stack_version version,
		TSStateId parse_state)
{
	Length		current_position;
	Length		error_end_position;
	Length		error_start_position;
	Length		padding;
	Length		size;
	Length		start_position;
	TSLexMode	lex_mode;
	TSSymbol	symbol;
	bool		called_get_column;
	bool		error_mode;
	bool		external_scanner_state_changed;
	bool		found_external_token;
	bool		found_token;
	bool		is_keyword;
	bool		skipped_error;
	t_i32		first_error_character;
	t_subtree	external_token;
	t_subtree	result;
	t_u32		end_byte;
	t_u32		external_scanner_state_len;
	t_u32		lookahead_bytes;
	t_u32		lookahead_end_byte;

	lex_mode = self->language->lex_modes[parse_state];
	if (lex_mode.lex_state == (t_u16)-1)
		return (NULL);
	start_position = ts_stack_position(self->stack, version);
	external_token = ts_stack_last_external_token(self->stack, version);
	found_external_token = false;
	error_mode = parse_state == ERROR_STATE;
	skipped_error = false;
	called_get_column = false;
	first_error_character = 0;
	error_start_position = length_zero();
	error_end_position = length_zero();
	lookahead_end_byte = 0;
	external_scanner_state_len = 0;
	external_scanner_state_changed = false;
	ts_lexer_reset(&self->lexer, start_position);
	while (true)
	{
		found_token = false;
		current_position = self->lexer.current_position;
		if (lex_mode.external_lex_state != 0)
		{
			ts_lexer_start(&self->lexer);
			ts_parser__external_scanner_deserialize(self, external_token);
			found_token = ts_parser__external_scanner_scan(self,
					lex_mode.external_lex_state);
			if (self->has_scanner_error)
				return (NULL);
			ts_lexer_finish(&self->lexer, &lookahead_end_byte);
			if (found_token)
			{
				external_scanner_state_len = ts_parser__external_scanner_serialize(self);
				external_scanner_state_changed = !ts_external_scanner_state_eq(ts_subtree_external_scanner_state(external_token),
						self->lexer.debug_buffer, external_scanner_state_len);
				if (self->lexer.token_end_position.bytes <= current_position.bytes
					&& (error_mode
						|| !ts_stack_has_advanced_since_error(self->stack,
							version)) && !external_scanner_state_changed)
					found_token = false;
			}
			if (found_token)
			{
				found_external_token = true;
				called_get_column = self->lexer.did_get_column;
				break ;
			}
			ts_lexer_reset(&self->lexer, current_position);
		}
		ts_lexer_start(&self->lexer);
		found_token = self->language->lex_fn(&self->lexer.data,
				lex_mode.lex_state);
		ts_lexer_finish(&self->lexer, &lookahead_end_byte);
		if (found_token)
			break ;
		if (!error_mode)
		{
			error_mode = true;
			lex_mode = self->language->lex_modes[ERROR_STATE];
			ts_lexer_reset(&self->lexer, start_position);
			continue ;
		}
		if (!skipped_error)
		{
			skipped_error = true;
			error_start_position = self->lexer.token_start_position;
			error_end_position = self->lexer.token_start_position;
			first_error_character = self->lexer.data.lookahead;
		}
		if (self->lexer.current_position.bytes == error_end_position.bytes)
		{
			if (self->lexer.data.eof(&self->lexer.data))
			{
				self->lexer.data.result_symbol = ts_builtin_sym_error;
				break ;
			}
			self->lexer.data.advance(&self->lexer.data, false);
		}
		error_end_position = self->lexer.current_position;
	}
	if (skipped_error)
	{
		padding = length_sub(error_start_position, start_position);
		size = length_sub(error_end_position, error_start_position);
		lookahead_bytes = lookahead_end_byte - error_end_position.bytes;
		result = ts_subtree_new_error(first_error_character, padding, size,
				lookahead_bytes, parse_state, self->language);
	}
	else
	{
		is_keyword = false;
		symbol = self->lexer.data.result_symbol;
		padding = length_sub(self->lexer.token_start_position, start_position);
		size = length_sub(self->lexer.token_end_position,
				self->lexer.token_start_position);
		lookahead_bytes = lookahead_end_byte
			- self->lexer.token_end_position.bytes;
		if (found_external_token)
		{
			symbol = self->language->external_scanner.symbol_map[symbol];
		}
		else if (symbol == self->language->keyword_capture_token && symbol != 0)
		{
			end_byte = self->lexer.token_end_position.bytes;
			ts_lexer_reset(&self->lexer, self->lexer.token_start_position);
			ts_lexer_start(&self->lexer);
			is_keyword = self->language->keyword_lex_fn(&self->lexer.data, 0);
			if (is_keyword && self->lexer.token_end_position.bytes == end_byte
				&& ts_language_has_actions(self->language, parse_state,
					self->lexer.data.result_symbol))
			{
				symbol = self->lexer.data.result_symbol;
			}
		}
		result = ts_subtree_new_leaf(symbol, padding, size, lookahead_bytes,
				parse_state, found_external_token, called_get_column,
				is_keyword, self->language);
		if (found_external_token)
		{
			ts_external_scanner_state_init(&result->external_scanner_state,
				self->lexer.debug_buffer, external_scanner_state_len);
			result->has_external_scanner_state_change = external_scanner_state_changed;
		}
	}
	return (result);
}
