/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:09:30 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/15 20:23:02 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/scanner_inner.h"

bool	in_error_recovery(const bool *valid_symbols);
void	reset(t_scanner *scanner);
bool	advance_word(t_lexer *lexer, t_string *unquoted_word);
t_u32	serialize(t_scanner *scanner, t_u8 *buffer);
void	deserialize(t_scanner *scanner, const t_u8 *buffer, t_u32 length);
bool	scan_bare_dollar(t_lexer *lexer);
bool	scan_double_hash(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols);
bool	scan_concat(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols);
bool	scan_heredoc_end(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols);
bool	scan_advance_words(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols);
bool	scan_literals(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols);
bool	scan(t_scanner *scanner, t_lexer *lexer, const bool *valid_symbols);
void	*tree_sitter_sh_external_scanner_create(void);
bool	tree_sitter_sh_external_scanner_scan(void *payload, t_lexer *lexer,
		const bool *valid_symbols);
t_u32	tree_sitter_sh_external_scanner_serialize(void *payload, t_u8 *state);
void	tree_sitter_sh_external_scanner_deserialize(void *payload,
		const t_u8 *state, t_u32 length);
void	tree_sitter_sh_external_scanner_destroy(void *payload);

bool	scan_bare_dollar(t_lexer *lexer)
{
	while (me_isspace(lexer->data.lookahead) && lexer->data.lookahead != '\n'
		&& !lexer->data.eof((void *)lexer))
		lexer->data.advance((void *)lexer, true);
	if (lexer->data.lookahead == '$')
	{
		lexer->data.advance((void *)lexer, false);
		lexer->data.result_symbol = BARE_DOLLAR;
		lexer->data.mark_end((void *)lexer);
		return (me_isspace(lexer->data.lookahead)
			|| lexer->data.eof((void *)lexer) || lexer->data.lookahead == '\"');
	}
	return (false);
}

bool	scan_double_hash(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols)
{
	(void)(scanner);
	(void)(lexer);
	(void)(valid_symbols);
	if (valid_symbols[IMMEDIATE_DOUBLE_HASH]
		&& !(valid_symbols[ERROR_RECOVERY]))
	{
		if (lexer->data.lookahead == '#')
		{
			lexer->data.mark_end((void *)lexer);
			lexer->data.advance((void *)lexer, false);
			if (lexer->data.lookahead == '#')
			{
				lexer->data.advance((void *)lexer, false);
				if (lexer->data.lookahead != '}')
				{
					lexer->data.result_symbol = IMMEDIATE_DOUBLE_HASH;
					lexer->data.mark_end((void *)lexer);
					return (true);
				}
			}
		}
	}
	return (false);
}
