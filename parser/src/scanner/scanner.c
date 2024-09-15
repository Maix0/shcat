/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scanner.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:41:11 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/15 20:22:37 by maiboyer         ###   ########.fr       */
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

/**
 * Consume a "word" in POSIX parlance, and returns it unquoted.
 *
 * This is an approximate implementation that doesn't deal with any
 * POSIX-mandated substitution, and assumes the default value for
 * IFS.
 */
bool	scan_concat(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols)
{
	(void)(scanner);
	(void)(lexer);
	(void)(valid_symbols);
	lexer->data.result_symbol = CONCAT;
	if (lexer->data.lookahead == '\\')
	{
		lexer->data.mark_end((void *)lexer);
		lexer->data.advance((void *)lexer, false);
		if (lexer->data.lookahead == '"' || lexer->data.lookahead == '\''
			|| lexer->data.lookahead == '\\')
			return (true);
		if (lexer->data.eof((void *)lexer))
			return (false);
	}
	return (true);
}

bool	scan_advance_words(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols)
{
	bool	advanced_once;
	bool	advance_once_space;

	advanced_once = false;
	advance_once_space = false;
	(void)(scanner);
	(void)(lexer);
	(void)(valid_symbols);
	while (true)
	{
		if (lexer->data.lookahead == '\"')
			return (false);
		if (lexer->data.lookahead == '$')
		{
			lexer->data.mark_end((void *)lexer);
			lexer->data.advance((void *)lexer, false);
			if (lexer->data.lookahead == '{' || lexer->data.lookahead == '('
				|| lexer->data.lookahead == '\''
				|| me_isalnum(lexer->data.lookahead))
			{
				lexer->data.result_symbol = EXPANSION_WORD;
				return (advanced_once);
			}
			advanced_once = true;
		}
		if (lexer->data.lookahead == '}')
		{
			lexer->data.mark_end((void *)lexer);
			lexer->data.result_symbol = EXPANSION_WORD;
			return (advanced_once || advance_once_space);
		}
		if (lexer->data.lookahead == '(' && !(advanced_once
				|| advance_once_space))
		{
			lexer->data.mark_end((void *)lexer);
			lexer->data.advance((void *)lexer, false);
			while (lexer->data.lookahead != ')'
				&& !lexer->data.eof((void *)lexer))
			{
				if (lexer->data.lookahead == '$')
				{
					lexer->data.mark_end((void *)lexer);
					lexer->data.advance((void *)lexer, false);
					if (lexer->data.lookahead == '{'
						|| lexer->data.lookahead == '('
						|| lexer->data.lookahead == '\''
						|| me_isalnum(lexer->data.lookahead))
						return (lexer->data.result_symbol = EXPANSION_WORD,
							advanced_once);
					advanced_once = true;
				}
				else
				{
					advanced_once = advanced_once
						|| !me_isspace(lexer->data.lookahead);
					advance_once_space = advance_once_space
						|| me_isspace(lexer->data.lookahead);
					lexer->data.advance((void *)lexer, false);
				}
			}
			lexer->data.mark_end((void *)lexer);
			if (lexer->data.lookahead == ')')
			{
				advanced_once = true;
				lexer->data.advance((void *)lexer, false);
				lexer->data.mark_end((void *)lexer);
				if (lexer->data.lookahead == '}')
					return (false);
			}
			else
				return (false);
		}
		if (lexer->data.lookahead == '\'')
			return (false);
		if (lexer->data.eof((void *)lexer))
			return (false);
		advanced_once = advanced_once || !me_isspace(lexer->data.lookahead);
		advance_once_space = advance_once_space
			|| me_isspace(lexer->data.lookahead);
		lexer->data.advance((void *)lexer, false);
	}
	return (false);
}

bool	scan_literals(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols)
{
	bool	is_number;

	while (true)
	{
		if ((lexer->data.lookahead == ' ' || lexer->data.lookahead == '\t'
				|| lexer->data.lookahead == '\r'
				|| (lexer->data.lookahead == '\n' && !valid_symbols[NEWLINE]))
			&& !valid_symbols[EXPANSION_WORD])
			lexer->data.advance((void *)lexer, true);
		else if (lexer->data.lookahead == '\\')
		{
			lexer->data.advance((void *)lexer, true);
			if (lexer->data.eof((void *)lexer))
			{
				lexer->data.mark_end((void *)lexer);
				lexer->data.result_symbol = VARIABLE_NAME;
				return (true);
			}
			if (lexer->data.lookahead == '\r')
				lexer->data.advance((void *)lexer, true);
			if (lexer->data.lookahead == '\n')
				lexer->data.advance((void *)lexer, true);
			else
			{
				if (lexer->data.lookahead == '\\'
					&& valid_symbols[EXPANSION_WORD])
					return (scan_advance_words(scanner, lexer, valid_symbols));
				return (false);
			}
		}
		else
			break ;
	}
	if (!valid_symbols[EXPANSION_WORD] && (lexer->data.lookahead == '*'
			|| lexer->data.lookahead == '@' || lexer->data.lookahead == '?'
			|| lexer->data.lookahead == '-' || lexer->data.lookahead == '0'
			|| lexer->data.lookahead == '_'))
	{
		lexer->data.mark_end((void *)lexer);
		lexer->data.advance((void *)lexer, false);
		if (lexer->data.lookahead == '=' || lexer->data.lookahead == '['
			|| lexer->data.lookahead == ':' || lexer->data.lookahead == '-'
			|| lexer->data.lookahead == '%' || lexer->data.lookahead == '#'
			|| lexer->data.lookahead == '/')
			return (false);
		if (valid_symbols[EXTGLOB_PATTERN] && me_isspace(lexer->data.lookahead))
		{
			lexer->data.mark_end((void *)lexer);
			lexer->data.result_symbol = EXTGLOB_PATTERN;
			return (true);
		}
	}
	is_number = true;
	if (me_isdigit(lexer->data.lookahead))
		lexer->data.advance((void *)lexer, false);
	else if (me_isalpha(lexer->data.lookahead) || lexer->data.lookahead == '_')
	{
		is_number = false;
		lexer->data.advance((void *)lexer, false);
	}
	else
	{
		if (lexer->data.lookahead == '{')
			return (false);
		if (valid_symbols[EXPANSION_WORD])
			return (scan_advance_words(scanner, lexer, valid_symbols));
		return (false);
	}
	while (true)
	{
		if (me_isdigit(lexer->data.lookahead))
			lexer->data.advance((void *)lexer, false);
		else if (me_isalpha(lexer->data.lookahead)
			|| lexer->data.lookahead == '_')
		{
			is_number = false;
			lexer->data.advance((void *)lexer, false);
		}
		else
			break ;
	}
	if (is_number && valid_symbols[FILE_DESCRIPTOR]
		&& (lexer->data.lookahead == '>' || lexer->data.lookahead == '<'))
		return (lexer->data.result_symbol = FILE_DESCRIPTOR, true);
	if (valid_symbols[VARIABLE_NAME])
	{
		if (lexer->data.lookahead == '+')
		{
			lexer->data.mark_end((void *)lexer);
			lexer->data.advance((void *)lexer, false);
			if (lexer->data.lookahead == '=' || lexer->data.lookahead == ':')
				return (lexer->data.result_symbol = VARIABLE_NAME, true);
			return (false);
		}
		if (lexer->data.lookahead == '/')
			return (false);
		if (lexer->data.lookahead == '=' || lexer->data.lookahead == '['
			|| (lexer->data.lookahead == ':' && !valid_symbols[OPENING_PAREN])
			|| lexer->data.lookahead == '%' || (lexer->data.lookahead == '#'
				&& !is_number) || lexer->data.lookahead == '@'
			|| (lexer->data.lookahead == '-'))
		{
			lexer->data.mark_end((void *)lexer);
			lexer->data.result_symbol = VARIABLE_NAME;
			return (true);
		}
		if (lexer->data.lookahead == '?')
		{
			lexer->data.mark_end((void *)lexer);
			lexer->data.advance((void *)lexer, false);
			lexer->data.result_symbol = VARIABLE_NAME;
			return (me_isalpha(lexer->data.lookahead));
		}
	}
	return (false);
}

bool	scan(t_scanner *scanner, t_lexer *lexer, const bool *valid_symbols)
{
	if (valid_symbols[CONCAT] && !(valid_symbols[ERROR_RECOVERY])
		&& (!(lexer->data.lookahead == 0 || me_isspace(lexer->data.lookahead)
				|| lexer->data.lookahead == '>' || lexer->data.lookahead == '<'
				|| lexer->data.lookahead == ')' || lexer->data.lookahead == '('
				|| lexer->data.lookahead == ';' || lexer->data.lookahead == '&'
				|| lexer->data.lookahead == '|' || lexer->data.lookahead == '{'
				|| lexer->data.lookahead == '}')))
		return (scan_concat(scanner, lexer, valid_symbols));
	if (scan_double_hash(scanner, lexer, valid_symbols))
		return (true);
	if (valid_symbols[EMPTY_VALUE] && (me_isspace(lexer->data.lookahead)
			|| lexer->data.eof((void *)lexer) || lexer->data.lookahead == ';'
			|| lexer->data.lookahead == '&'))
		return (lexer->data.result_symbol = EMPTY_VALUE, true);
	if ((valid_symbols[VARIABLE_NAME] || valid_symbols[FILE_DESCRIPTOR])
		&& !(valid_symbols[ERROR_RECOVERY]))
		return (scan_literals(scanner, lexer, valid_symbols));
	if (valid_symbols[BARE_DOLLAR] && !(valid_symbols[ERROR_RECOVERY])
		&& scan_bare_dollar(lexer))
		return (true);
	if (valid_symbols[EXPANSION_WORD])
		return (scan_advance_words(scanner, lexer, valid_symbols));
	return (false);
}
