/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scanner.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:17:17 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 16:25:19 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/scanner.h"
#include "me/char/char.h"
#include "me/mem/mem.h"
#include "me/string/string.h"
#include "me/types.h"
#include "me/vec/vec_heredoc.h"
#include "parser/inner/heredoc.h"
#include "parser/parser.h"
#include <assert.h>

bool scan(t_scanner *scanner, TSLexer *lexer, const bool *valid_symbols)
{
	if (valid_symbols[CONCAT] && !valid_symbols[ERROR_RECOVERY])
	{
		if (!(lexer->lookahead == 0 || me_isspace(lexer->lookahead) || lexer->lookahead == '>' || lexer->lookahead == '<' ||
			  lexer->lookahead == ')' || lexer->lookahead == '(' || lexer->lookahead == ';' || lexer->lookahead == '&' ||
			  lexer->lookahead == '|' || lexer->lookahead == '{' || lexer->lookahead == '}'))
		{
			lexer->result_symbol = CONCAT;
			if (lexer->lookahead == '`')
			{
				lexer->mark_end(lexer);
				lexer->advance(lexer, false);
				while (lexer->lookahead != '`' && !lexer->eof(lexer))
					lexer->advance(lexer, false);
				if (lexer->eof(lexer))
					return false;
				if (lexer->lookahead == '`')
					lexer->advance(lexer, false);
				return me_isspace(lexer->lookahead) || lexer->eof(lexer);
			}
			if (lexer->lookahead == '\\')
			{
				lexer->mark_end(lexer);
				lexer->advance(lexer, false);
				if (lexer->lookahead == '"' || lexer->lookahead == '\'' || lexer->lookahead == '\\')
					return true;
				if (lexer->eof(lexer))
					return false;
			}
			else
				return true;
		}
	}

	if (valid_symbols[IMMEDIATE_DOUBLE_HASH] && !valid_symbols[ERROR_RECOVERY])
	{
		if (lexer->lookahead == '#')
		{
			lexer->mark_end(lexer);
			lexer->advance(lexer, false);
			if (lexer->lookahead == '#')
			{
				lexer->advance(lexer, false);
				if (lexer->lookahead != '}')
				{
					lexer->result_symbol = IMMEDIATE_DOUBLE_HASH;
					lexer->mark_end(lexer);
					return true;
				}
			}
		}
	}

	if (valid_symbols[EMPTY_VALUE] &&
		(me_isspace(lexer->lookahead) || lexer->eof(lexer) || lexer->lookahead == ';' || lexer->lookahead == '&'))
		return (lexer->result_symbol = EMPTY_VALUE, true);

	if ((valid_symbols[HEREDOC_BODY_BEGINNING] || valid_symbols[SIMPLE_HEREDOC_BODY]) && scanner->heredocs.len > 0 &&
		!vec_heredoc_last(&scanner->heredocs)->started && !valid_symbols[ERROR_RECOVERY])
		return scan_heredoc_content(scanner, lexer, HEREDOC_BODY_BEGINNING, SIMPLE_HEREDOC_BODY);

	if (valid_symbols[HEREDOC_END] && scanner->heredocs.len > 0 && scan_heredoc_end_identifier(vec_heredoc_last(&scanner->heredocs), lexer))
	{
		t_heredoc *heredoc = vec_heredoc_last(&scanner->heredocs);
		string_free(heredoc->current_leading_word);
		string_free(heredoc->delimiter);
		(void)vec_heredoc_pop(&scanner->heredocs, NULL);
		return (lexer->result_symbol = HEREDOC_END, true);
	}

	if (valid_symbols[HEREDOC_CONTENT] && scanner->heredocs.len > 0 && vec_heredoc_last(&scanner->heredocs)->started &&
		!valid_symbols[ERROR_RECOVERY])
		return scan_heredoc_content(scanner, lexer, HEREDOC_CONTENT, HEREDOC_END);

	if (valid_symbols[HEREDOC_START] && !valid_symbols[ERROR_RECOVERY] && scanner->heredocs.len > 0)
		return scan_heredoc_start(vec_heredoc_last(&scanner->heredocs), lexer);

	if ((valid_symbols[VARIABLE_NAME] || valid_symbols[FILE_DESCRIPTOR] || valid_symbols[HEREDOC_ARROW]) && !valid_symbols[ERROR_RECOVERY])
	{
		while (true)
		{
			if ((lexer->lookahead == ' ' || lexer->lookahead == '\t' || lexer->lookahead == '\r' ||
				 (lexer->lookahead == '\n' && !valid_symbols[NEWLINE])) &&
				!valid_symbols[EXPANSION_WORD])
			{
				lexer->advance(lexer, true);
			}
			else if (lexer->lookahead == '\\')
			{
				lexer->advance(lexer, true);

				if (lexer->eof(lexer))
				{
					lexer->mark_end(lexer);
					lexer->result_symbol = VARIABLE_NAME;
					return true;
				}

				if (lexer->lookahead == '\r')
					lexer->advance(lexer, true);
				if (lexer->lookahead == '\n')
					lexer->advance(lexer, true);
				else
				{
					if (lexer->lookahead == '\\' && valid_symbols[EXPANSION_WORD])
						goto expansion_word;
					return false;
				}
			}
			else
				break;
		}

		// no '*', '@', '?', '-', '$', '0', '_'
		if (!valid_symbols[EXPANSION_WORD] && (lexer->lookahead == '*' || lexer->lookahead == '@' || lexer->lookahead == '?' ||
											   lexer->lookahead == '-' || lexer->lookahead == '0' || lexer->lookahead == '_'))
		{
			lexer->mark_end(lexer);
			lexer->advance(lexer, false);
			if (lexer->lookahead == '=' || lexer->lookahead == '[' || lexer->lookahead == ':' || lexer->lookahead == '-' ||
				lexer->lookahead == '%' || lexer->lookahead == '#' || lexer->lookahead == '/')
				return false;
			if (valid_symbols[EXTGLOB_PATTERN] && me_isspace(lexer->lookahead))
			{
				lexer->mark_end(lexer);
				lexer->result_symbol = EXTGLOB_PATTERN;
				return true;
			}
		}

		if (valid_symbols[HEREDOC_ARROW] && lexer->lookahead == '<')
		{
			lexer->advance(lexer, false);
			if (lexer->lookahead == '<')
			{
				lexer->advance(lexer, false);
				if (lexer->lookahead == '-')
				{
					lexer->advance(lexer, false);
					t_heredoc heredoc = heredoc_new();
					heredoc.allows_indent = true;
					vec_heredoc_push(&scanner->heredocs, heredoc);
					lexer->result_symbol = HEREDOC_ARROW_DASH;
				}
				else
				{
					t_heredoc heredoc = heredoc_new();
					vec_heredoc_push(&scanner->heredocs, heredoc);
					lexer->result_symbol = HEREDOC_ARROW;
				}
				return true;
			}
			return false;
		}

		bool is_number = true;
		if (me_isdigit(lexer->lookahead))
			lexer->advance(lexer, false);
		else if (me_isalpha(lexer->lookahead) || lexer->lookahead == '_')
		{
			is_number = false;
			lexer->advance(lexer, false);
		}
		else
		{
			if (lexer->lookahead == '{')
				goto brace_start;
			if (valid_symbols[EXPANSION_WORD])
				goto expansion_word;
			if (valid_symbols[EXTGLOB_PATTERN])
				goto extglob_pattern;
			return false;
		}

		while (true)
		{
			if (me_isdigit(lexer->lookahead))
				lexer->advance(lexer, false);
			else if (me_isalpha(lexer->lookahead) || lexer->lookahead == '_')
			{
				is_number = false;
				lexer->advance(lexer, false);
			}
			else
				break;
		}

		if (is_number && valid_symbols[FILE_DESCRIPTOR] && (lexer->lookahead == '>' || lexer->lookahead == '<'))
		{
			lexer->result_symbol = FILE_DESCRIPTOR;
			return true;
		}

		if (valid_symbols[VARIABLE_NAME])
		{
			if (lexer->lookahead == '+')
			{
				lexer->mark_end(lexer);
				lexer->advance(lexer, false);
				if (lexer->lookahead == '=' || lexer->lookahead == ':')
				{
					lexer->result_symbol = VARIABLE_NAME;
					return true;
				}
				return false;
			}
			if (lexer->lookahead == '/')
			{
				return false;
			}
			if (lexer->lookahead == '=' || lexer->lookahead == '[' || (lexer->lookahead == ':' && !valid_symbols[OPENING_PAREN]) ||
				lexer->lookahead == '%' || (lexer->lookahead == '#' && !is_number) || lexer->lookahead == '@' || (lexer->lookahead == '-'))
			{
				lexer->mark_end(lexer);
				lexer->result_symbol = VARIABLE_NAME;
				return true;
			}

			if (lexer->lookahead == '?')
			{
				lexer->mark_end(lexer);
				lexer->advance(lexer, false);
				lexer->result_symbol = VARIABLE_NAME;
				return me_isalpha(lexer->lookahead);
			}
		}

		return false;
	}

	if (valid_symbols[BARE_DOLLAR] && !valid_symbols[ERROR_RECOVERY] && scan_bare_dollar(lexer))
		return true;
extglob_pattern:
expansion_word:
	if (valid_symbols[EXPANSION_WORD])
	{
		bool advanced_once = false;
		bool advance_once_space = false;
		while (true)
		{
			if (lexer->lookahead == '\"')
				return false;
			if (lexer->lookahead == '$')
			{
				lexer->mark_end(lexer);
				lexer->advance(lexer, false);
				if (lexer->lookahead == '{' || lexer->lookahead == '(' || lexer->lookahead == '\'' || me_isalnum(lexer->lookahead))
				{
					lexer->result_symbol = EXPANSION_WORD;
					return advanced_once;
				}
				advanced_once = true;
			}

			if (lexer->lookahead == '}')
			{
				lexer->mark_end(lexer);
				lexer->result_symbol = EXPANSION_WORD;
				return advanced_once || advance_once_space;
			}

			if (lexer->lookahead == '(' && !(advanced_once || advance_once_space))
			{
				lexer->mark_end(lexer);
				lexer->advance(lexer, false);
				while (lexer->lookahead != ')' && !lexer->eof(lexer))
				{
					if (lexer->lookahead == '$')
					{
						lexer->mark_end(lexer);
						lexer->advance(lexer, false);
						if (lexer->lookahead == '{' || lexer->lookahead == '(' || lexer->lookahead == '\'' || me_isalnum(lexer->lookahead))
						{
							lexer->result_symbol = EXPANSION_WORD;
							return advanced_once;
						}
						advanced_once = true;
					}
					else
					{
						advanced_once = advanced_once || !me_isspace(lexer->lookahead);
						advance_once_space = advance_once_space || me_isspace(lexer->lookahead);
						lexer->advance(lexer, false);
					}
				}
				lexer->mark_end(lexer);
				if (lexer->lookahead == ')')
				{
					advanced_once = true;
					lexer->advance(lexer, false);
					lexer->mark_end(lexer);
					if (lexer->lookahead == '}')
						return false;
				}
				else
					return false;
			}

			if (lexer->lookahead == '\'')
				return false;
			if (lexer->eof(lexer))
				return false;
			advanced_once = advanced_once || !me_isspace(lexer->lookahead);
			advance_once_space = advance_once_space || me_isspace(lexer->lookahead);
			lexer->advance(lexer, false);
		}
	}

brace_start:
	return false;
}
