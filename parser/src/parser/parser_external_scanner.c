/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_external_scanner.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:44:11 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/11 16:44:49 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/parser_inner.h"

void ts_parser__external_scanner_create(TSParser *self)
{
	self->external_scanner_payload = self->language->external_scanner.create();
}

void ts_parser__external_scanner_destroy(TSParser *self)
{
	if (self->external_scanner_payload != NULL)
	{
		self->language->external_scanner.destroy(self->external_scanner_payload);
		self->external_scanner_payload = NULL;
	}
}

t_u32 ts_parser__external_scanner_serialize(TSParser *self)
{
	t_u32 length;

	length = self->language->external_scanner.serialize(self->external_scanner_payload, self->lexer.debug_buffer);
	if (length > TREE_SITTER_SERIALIZATION_BUFFER_SIZE)
		me_abort("assertion failed in " __FILE__ " `length > "
				 "TREE_SITTER_SERIALIZATION_BUFFER_SIZE`");
	return length;
}

void ts_parser__external_scanner_deserialize(TSParser *self, t_subtree external_token)
{
	const t_u8 *data;
	t_u32		length;

	data = NULL;
	length = 0;
	if (external_token)
	{
		data = ts_external_scanner_state_data(&external_token->external_scanner_state);
		length = external_token->external_scanner_state.length;
		printf("HERE\n");
	}
	self->language->external_scanner.deserialize(self->external_scanner_payload, data, length);
}

bool ts_parser__external_scanner_scan(TSParser *self, TSStateId external_lex_state)
{
	const bool *valid_external_tokens;

	valid_external_tokens = ts_language_enabled_external_tokens(self->language, external_lex_state);
	return self->language->external_scanner.scan(self->external_scanner_payload, &self->lexer.data, valid_external_tokens);
}
