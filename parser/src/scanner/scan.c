/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:09:30 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/19 23:48:40 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

bool	scan_bare_dollar(t_lexer *lexer)
{
	while (me_isspace(lexer->funcs.lookahead) && lexer->funcs.lookahead != '\n'
		&& !lexer->funcs.eof((void *)lexer))
		lexer->funcs.advance((void *)lexer, true);
	if (lexer->funcs.lookahead == '$')
	{
		lexer->funcs.advance((void *)lexer, false);
		lexer->funcs.result_symbol = BARE_DOLLAR;
		lexer->funcs.mark_end((void *)lexer);
		return (me_isspace(lexer->funcs.lookahead) \
		|| lexer->funcs.eof((void *)lexer) || lexer->funcs.lookahead == '\"');
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
		if (lexer->funcs.lookahead == '#')
		{
			lexer->funcs.mark_end((void *)lexer);
			lexer->funcs.advance((void *)lexer, false);
			if (lexer->funcs.lookahead == '#')
			{
				lexer->funcs.advance((void *)lexer, false);
				if (lexer->funcs.lookahead != '}')
				{
					lexer->funcs.result_symbol = IMMEDIATE_DOUBLE_HASH;
					lexer->funcs.mark_end((void *)lexer);
					return (true);
				}
			}
		}
	}
	return (false);
}
