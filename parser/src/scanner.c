/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scanner.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:17:17 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/01 19:55:43 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/scanner.h"
#include "me/char/char.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"
#include "me/vec/vec_heredoc.h"
#include "parser/array.h"
#include "parser/inner/heredoc.h"
#include "parser/parser.h"
#include <assert.h>

bool scan_heredoc_content(t_scanner *scanner, TSLexer *lexer, enum e_token_type middle_type, enum e_token_type end_type);
bool scan_heredoc_start(t_heredoc *heredoc, TSLexer *lexer);
bool scan_heredoc_end_identifier(t_heredoc *heredoc, TSLexer *lexer);
bool advance_word(TSLexer *lexer, t_string *unquoted_word);

void reset(t_scanner *scanner)
{
	t_usize i;

	i = 0;
	while (i < scanner->heredocs.len)
		reset_heredoc(&scanner->heredocs.buffer[i++]);
}

bool scan_bare_dollar(TSLexer *lexer)
{
	while (me_isspace(lexer->lookahead) && lexer->lookahead != '\n' && !lexer->eof(lexer))
		lexer->advance(lexer, true);
	if (lexer->lookahead == '$')
	{
		lexer->advance(lexer, false);
		lexer->result_symbol = BARE_DOLLAR;
		lexer->mark_end(lexer);
		return (me_isspace(lexer->lookahead) || lexer->eof(lexer) || lexer->lookahead == '\"');
	}
	return (false);
}

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

	if (valid_symbols[EMPTY_VALUE])
	{
		if (me_isspace(lexer->lookahead) || lexer->eof(lexer) || lexer->lookahead == ';' || lexer->lookahead == '&')
		{
			lexer->result_symbol = EMPTY_VALUE;
			return true;
		}
	}

	if ((valid_symbols[HEREDOC_BODY_BEGINNING] || valid_symbols[SIMPLE_HEREDOC_BODY]) && scanner->heredocs.len > 0 &&
		!vec_heredoc_last(&scanner->heredocs)->started && !valid_symbols[ERROR_RECOVERY])
		return scan_heredoc_content(scanner, lexer, HEREDOC_BODY_BEGINNING, SIMPLE_HEREDOC_BODY);

	if (valid_symbols[HEREDOC_END] && scanner->heredocs.len > 0)
	{
		t_heredoc *heredoc = vec_heredoc_last(&scanner->heredocs);
		if (scan_heredoc_end_identifier(heredoc, lexer))
		{
			string_free(heredoc->current_leading_word);
			string_free(heredoc->delimiter);
			(void)vec_heredoc_pop(&scanner->heredocs, NULL);
			lexer->result_symbol = HEREDOC_END;
			return true;
		}
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
	{
		return true;
	}

	if ((valid_symbols[REGEX]) && !valid_symbols[ERROR_RECOVERY])
	{
		if (valid_symbols[REGEX])
			while (me_isspace(lexer->lookahead))
				lexer->advance(lexer, true);

		if ((lexer->lookahead != '"' && lexer->lookahead != '\'') || ((lexer->lookahead == '$' || lexer->lookahead == '\'')) ||
			(lexer->lookahead == '\''))
		{
			typedef struct
			{
				bool  done;
				bool  advanced_once;
				bool  found_non_alnumdollarunderdash;
				bool  last_was_escape;
				bool  in_single_quote;
				t_u32 paren_depth;
				t_u32 bracket_depth;
				t_u32 brace_depth;
			} State;

			if (lexer->lookahead == '$')
			{
				lexer->mark_end(lexer);
				lexer->advance(lexer, false);
				if (lexer->lookahead == '(')
					return false;
			}

			lexer->mark_end(lexer);

			State state = {false, false, false, false, false, 0, 0, 0};
			while (!state.done)
			{
				if (state.in_single_quote)
				{
					if (lexer->lookahead == '\'')
					{
						state.in_single_quote = false;
						lexer->advance(lexer, false);
						lexer->mark_end(lexer);
					}
				}
				switch (lexer->lookahead)
				{
				case '\\':
					state.last_was_escape = true;
					break;
				case '\0':
					return false;
				case '(':
					state.paren_depth++;
					state.last_was_escape = false;
					break;
				case '[':
					state.bracket_depth++;
					state.last_was_escape = false;
					break;
				case '{':
					if (!state.last_was_escape)
						state.brace_depth++;
					state.last_was_escape = false;
					break;
				case ')':
					if (state.paren_depth == 0)
						state.done = true;
					state.paren_depth--;
					state.last_was_escape = false;
					break;
				case ']':
					if (state.bracket_depth == 0)
						state.done = true;
					state.bracket_depth--;
					state.last_was_escape = false;
					break;
				case '}':
					if (state.brace_depth == 0)
						state.done = true;
					state.brace_depth--;
					state.last_was_escape = false;
					break;
				case '\'':
					// Enter or exit a single-quoted string.
					state.in_single_quote = !state.in_single_quote;
					lexer->advance(lexer, false);
					state.advanced_once = true;
					state.last_was_escape = false;
					continue;
				default:
					state.last_was_escape = false;
					break;
				}

				if (!state.done)
				{
					if (valid_symbols[REGEX])
					{
						bool was_space = !state.in_single_quote && me_isspace(lexer->lookahead);
						lexer->advance(lexer, false);
						state.advanced_once = true;
						if (!was_space || state.paren_depth > 0)
						{
							lexer->mark_end(lexer);
						}
					}
				}
			}

			lexer->result_symbol = REGEX;
			return (!(valid_symbols[REGEX] && !state.advanced_once));
		}
	}

extglob_pattern:
	if (valid_symbols[EXTGLOB_PATTERN] && !valid_symbols[ERROR_RECOVERY])
	{
		// first skip ws, then check for ? * + @ !
		while (me_isspace(lexer->lookahead))
			lexer->advance(lexer, true);

		if (lexer->lookahead == '?' || lexer->lookahead == '*' || lexer->lookahead == '+' || lexer->lookahead == '@' ||
			lexer->lookahead == '!' || lexer->lookahead == '-' || lexer->lookahead == ')' || lexer->lookahead == '\\' ||
			lexer->lookahead == '.' || lexer->lookahead == '[' || (me_isalpha(lexer->lookahead)))
		{
			if (lexer->lookahead == '\\')
			{
				lexer->advance(lexer, false);
				if ((me_isspace(lexer->lookahead) || lexer->lookahead == '"') && lexer->lookahead != '\r' && lexer->lookahead != '\n')
					lexer->advance(lexer, false);
				else
					return false;
			}

			if (lexer->lookahead == ')' && scanner->last_glob_paren_depth == 0)
			{
				lexer->mark_end(lexer);
				lexer->advance(lexer, false);

				if (me_isspace(lexer->lookahead))
					return false;
			}

			lexer->mark_end(lexer);
			bool was_non_alpha = !me_isalpha(lexer->lookahead);
			if (lexer->lookahead != '[')
			{
				// no esac
				if (lexer->lookahead == 'e')
				{
					lexer->mark_end(lexer);
					lexer->advance(lexer, false);
					if (lexer->lookahead == 's')
					{
						lexer->advance(lexer, false);
						if (lexer->lookahead == 'a')
						{
							lexer->advance(lexer, false);
							if (lexer->lookahead == 'c')
							{
								lexer->advance(lexer, false);
								if (me_isspace(lexer->lookahead))
									return false;
							}
						}
					}
				}
				else
					lexer->advance(lexer, false);
			}

			// -\w is just a word, find something else special
			if (lexer->lookahead == '-')
			{
				lexer->mark_end(lexer);
				lexer->advance(lexer, false);
				while (me_isalnum(lexer->lookahead))
					lexer->advance(lexer, false);

				if (lexer->lookahead == ')' || lexer->lookahead == '\\' || lexer->lookahead == '.')
					return false;
				lexer->mark_end(lexer);
			}

			// case item -) or *)
			if (lexer->lookahead == ')' && scanner->last_glob_paren_depth == 0)
			{
				lexer->mark_end(lexer);
				lexer->advance(lexer, false);
				if (me_isspace(lexer->lookahead))
				{
					lexer->result_symbol = EXTGLOB_PATTERN;
					return was_non_alpha;
				}
			}

			if (me_isspace(lexer->lookahead))
			{
				lexer->mark_end(lexer);
				lexer->result_symbol = EXTGLOB_PATTERN;
				scanner->last_glob_paren_depth = 0;
				return true;
			}

			if (lexer->lookahead == '$')
			{
				lexer->mark_end(lexer);
				lexer->advance(lexer, false);
				if (lexer->lookahead == '{' || lexer->lookahead == '(')
				{
					lexer->result_symbol = EXTGLOB_PATTERN;
					return true;
				}
			}

			if (lexer->lookahead == '|')
			{
				lexer->mark_end(lexer);
				lexer->advance(lexer, false);
				lexer->result_symbol = EXTGLOB_PATTERN;
				return true;
			}

			if (!me_isalnum(lexer->lookahead) && lexer->lookahead != '(' && lexer->lookahead != '"' && lexer->lookahead != '[' &&
				lexer->lookahead != '?' && lexer->lookahead != '/' && lexer->lookahead != '\\' && lexer->lookahead != '_' &&
				lexer->lookahead != '*')
				return false;

			typedef struct
			{
				bool  done;
				bool  saw_non_alphadot;
				t_u32 paren_depth;
				t_u32 bracket_depth;
				t_u32 brace_depth;
			} State;

			State state = {false, was_non_alpha, scanner->last_glob_paren_depth, 0, 0};
			while (!state.done)
			{
				switch (lexer->lookahead)
				{
				case '\0':
					return false;
				case '(':
					state.paren_depth++;
					break;
				case '[':
					state.bracket_depth++;
					break;
				case '{':
					state.brace_depth++;
					break;
				case ')':
					if (state.paren_depth == 0)
					{
						state.done = true;
					}
					state.paren_depth--;
					break;
				case ']':
					if (state.bracket_depth == 0)
					{
						state.done = true;
					}
					state.bracket_depth--;
					break;
				case '}':
					if (state.brace_depth == 0)
					{
						state.done = true;
					}
					state.brace_depth--;
					break;
				}

				if (lexer->lookahead == '|')
				{
					lexer->mark_end(lexer);
					lexer->advance(lexer, false);
					if (state.paren_depth == 0 && state.bracket_depth == 0 && state.brace_depth == 0)
					{
						lexer->result_symbol = EXTGLOB_PATTERN;
						return true;
					}
				}

				if (!state.done)
				{
					bool was_space = me_isspace(lexer->lookahead);
					if (lexer->lookahead == '$')
					{
						lexer->mark_end(lexer);
						if (!me_isalpha(lexer->lookahead) && lexer->lookahead != '.' && lexer->lookahead != '\\')
							state.saw_non_alphadot = true;
						lexer->advance(lexer, false);
						if (lexer->lookahead == '(' || lexer->lookahead == '{')
						{
							lexer->result_symbol = EXTGLOB_PATTERN;
							scanner->last_glob_paren_depth = state.paren_depth;
							return state.saw_non_alphadot;
						}
					}
					if (was_space)
					{
						lexer->mark_end(lexer);
						lexer->result_symbol = EXTGLOB_PATTERN;
						scanner->last_glob_paren_depth = 0;
						return state.saw_non_alphadot;
					}
					if (lexer->lookahead == '"')
					{
						lexer->mark_end(lexer);
						lexer->result_symbol = EXTGLOB_PATTERN;
						scanner->last_glob_paren_depth = 0;
						return state.saw_non_alphadot;
					}
					if (lexer->lookahead == '\\')
					{
						if (!me_isalpha(lexer->lookahead) && lexer->lookahead != '.' && lexer->lookahead != '\\')
							state.saw_non_alphadot = true;
						lexer->advance(lexer, false);
						if (me_isspace(lexer->lookahead) || lexer->lookahead == '"')
							lexer->advance(lexer, false);
					}
					else
					{
						if (!me_isalpha(lexer->lookahead) && lexer->lookahead != '.' && lexer->lookahead != '\\')
							state.saw_non_alphadot = true;
						lexer->advance(lexer, false);
					}
					if (!was_space)
						lexer->mark_end(lexer);
				}
			}

			lexer->result_symbol = EXTGLOB_PATTERN;
			scanner->last_glob_paren_depth = 0;
			return state.saw_non_alphadot;
		}
		scanner->last_glob_paren_depth = 0;

		return false;
	}

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

void *tree_sitter_sh_external_scanner_create()
{
	t_scanner *scanner;

	scanner = mem_alloc(sizeof(*scanner));
	scanner->heredocs = vec_heredoc_new(16, heredoc_free);
	return (scanner);
}

bool tree_sitter_sh_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols)
{
	t_scanner *scanner;

	scanner = (t_scanner *)payload;
	return (scan(scanner, lexer, valid_symbols));
}

void tree_sitter_sh_external_scanner_destroy(void *payload)
{
	vec_heredoc_free(((t_scanner *)payload)->heredocs);
	mem_free((t_scanner *)payload);
}
