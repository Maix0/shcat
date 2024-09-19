/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree_sitter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:10:31 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/19 23:54:39 by rparodi          ###   ########.fr       */
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

void	*tree_sitter_sh_external_scanner_create(void)
{
	t_scanner	*scanner;

	scanner = mem_alloc(sizeof(*scanner));
	return (scanner);
}

bool	tree_sitter_sh_external_scanner_scan(void *payload, t_lexer *lexer,
		const bool *valid_symbols)
{
	t_scanner	*scanner;

	scanner = (t_scanner *)payload;
	return (scan(scanner, lexer, valid_symbols));
}

t_u32	tree_sitter_sh_external_scanner_serialize(void *payload, t_u8 *state)
{
	t_scanner	*scanner;

	scanner = (t_scanner *)payload;
	return (serialize(scanner, state));
}

void	tree_sitter_sh_external_scanner_deserialize(void *payload,
		const t_u8 *state, t_u32 length)
{
	t_scanner	*scanner;

	scanner = (t_scanner *)payload;
	deserialize(scanner, state, length);
}

void	tree_sitter_sh_external_scanner_destroy(void *payload)
{
	t_scanner	*scanner;

	scanner = (t_scanner *)payload;
	mem_free(scanner);
}
