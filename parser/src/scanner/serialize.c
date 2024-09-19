/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:08:04 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/19 23:53:51 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "parser/inner/scanner_inner.h"

bool	in_error_recovery(const bool *valid_symbols);
void	reset(t_scanner *scanner);
bool	advance_word(t_lexer *lexer, t_string *unquoted_word);
t_u32	serialize(t_scanner *scanner, t_u8 *buffer);
void	deserialize(t_scanner *scanner, const t_u8 *buffer, t_u32 length);
bool	scan_bare_dollar(t_lexer *lexer);
bool	scan_double_hash(t_scanner *scanner, t_lexer *lexer, \
		const bool *valid_symbols);
bool	scan_concat(t_scanner *scanner, t_lexer *lexer, \
		const bool *valid_symbols);
bool	scan_heredoc_end(t_scanner *scanner, t_lexer *lexer, \
		const bool *valid_symbols);
bool	scan_advance_words(t_scanner *scanner, t_lexer *lexer, \
		const bool *valid_symbols);
bool	scan_literals(t_scanner *scanner, t_lexer *lexer, \
		const bool *valid_symbols);
bool	scan(t_scanner *scanner, t_lexer *lexer, const bool *valid_symbols);
void	*tree_sitter_sh_external_scanner_create(void);
bool	tree_sitter_sh_external_scanner_scan(void *payload, t_lexer *lexer, \
		const bool *valid_symbols);
t_u32	tree_sitter_sh_external_scanner_serialize(void *payload, t_u8 *state);
void	tree_sitter_sh_external_scanner_deserialize(void *payload, \
		const t_u8 *state, t_u32 length);
void	tree_sitter_sh_external_scanner_destroy(void *payload);

bool	advance_word(t_lexer *lexer, t_string *unquoted_word)
{
	bool	empty;
	t_i32	quote;

	empty = true;
	quote = 0;
	if (lexer->funcs.lookahead == '\'' || lexer->funcs.lookahead == '"')
	{
		quote = lexer->funcs.lookahead;
		lexer->funcs.advance((void *)lexer, false);
	}
	while (lexer->funcs.lookahead && !((quote && \
			(lexer->funcs.lookahead == quote \
			|| lexer->funcs.lookahead == '\r' \
			|| lexer->funcs.lookahead == '\n')) || (!quote \
			&& me_isspace(lexer->funcs.lookahead))))
	{
		if (lexer->funcs.lookahead == '\\')
		{
			lexer->funcs.advance((void *)lexer, false);
			if (!lexer->funcs.lookahead)
				return (false);
		}
		empty = false;
		string_push_char(unquoted_word, lexer->funcs.lookahead);
		lexer->funcs.advance((void *)lexer, false);
	}
	string_push_char(unquoted_word, '\0');
	if (quote && lexer->funcs.lookahead == quote)
		lexer->funcs.advance((void *)lexer, false);
	return (!empty);
}

t_u32	serialize(t_scanner *scanner, t_u8 *buffer)
{
	t_u32		size;

	size = 0;
	buffer[size++] = (char)scanner->last_glob_paren_depth;
	buffer[size++] = (char)scanner->ext_was_in_double_quote;
	buffer[size++] = (char)scanner->ext_saw_outside_quote;
	return (size);
}

void	deserialize(t_scanner *scanner, const t_u8 *buffer, t_u32 length)
{
	t_u32		size;

	if (length == 0)
		mem_set_zero(scanner, sizeof(*scanner));
	else
	{
		size = 0;
		scanner->last_glob_paren_depth = buffer[size++];
		scanner->ext_was_in_double_quote = buffer[size++];
		scanner->ext_saw_outside_quote = buffer[size++];
		if (!(size == length))
			me_abort("assertion failed: size == length");
	}
}
