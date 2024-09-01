/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scanner.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:17:17 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/01 18:50:23 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/char.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "parser/inner/heredoc.h"
#include "parser/inner/scanner.h"
#include "me/types.h"
#include "parser/array.h"
#include "parser/parser.h"
#include <assert.h>

enum e_token_type
{
	HEREDOC_START,
	SIMPLE_HEREDOC_BODY,
	HEREDOC_BODY_BEGINNING,
	HEREDOC_CONTENT,
	HEREDOC_END,
	FILE_DESCRIPTOR,
	EMPTY_VALUE,
	CONCAT,
	VARIABLE_NAME,
	REGEX,
	EXPANSION_WORD,
	EXTGLOB_PATTERN,
	BARE_DOLLAR,
	IMMEDIATE_DOUBLE_HASH,
	HEREDOC_ARROW,
	HEREDOC_ARROW_DASH,
	NEWLINE,
	OPENING_PAREN,
	ESAC,
	ERROR_RECOVERY,
};

void advance(TSLexer *lexer)
{
	lexer->advance(lexer, false);
}

void skip(TSLexer *lexer)
{
	lexer->advance(lexer, true);
}

bool in_error_recovery(const bool *valid_symbols)
{
	return (valid_symbols[ERROR_RECOVERY]);
}

void reset(t_scanner *scanner)
{
	t_usize i;

	i = 0;
	while (i < scanner->heredocs.size)
		reset_heredoc(array_get(&scanner->heredocs, i++));
}

/**
 * Consume a "word" in POSIX parlance, and returns it unquoted.
 *
 * This is an approximate implementation that doesn't deal with any
 * POSIX-mandated substitution, and assumes the default value for
 * IFS.
 */
bool advance_word(TSLexer *lexer, t_string *unquoted_word)
{
	bool  empty;
	t_i32 quote;

	empty = true;
	quote = 0;
	if (lexer->lookahead == '\'' || lexer->lookahead == '"')
	{
		quote = lexer->lookahead;
		advance(lexer);
	}
	while (lexer->lookahead && !((quote && (lexer->lookahead == quote || lexer->lookahead == '\r' || lexer->lookahead == '\n')) ||
								 (!quote && (me_isspace(lexer->lookahead)))))
	{
		if (lexer->lookahead == '\\')
		{
			advance(lexer);
			if (!lexer->lookahead)
				return (false);
		}
		empty = false;
		string_push_char(unquoted_word, lexer->lookahead);
		advance(lexer);
	}
	if (quote && lexer->lookahead == quote)
		advance(lexer);
	return (!empty);
}

bool scan_bare_dollar(TSLexer *lexer)
{
	while (me_isspace(lexer->lookahead) && lexer->lookahead != '\n' && !lexer->eof(lexer))
		skip(lexer);
	if (lexer->lookahead == '$')
	{
		advance(lexer);
		lexer->result_symbol = BARE_DOLLAR;
		lexer->mark_end(lexer);
		return (me_isspace(lexer->lookahead) || lexer->eof(lexer) || lexer->lookahead == '\"');
	}
	return (false);
}

bool scan_heredoc_start(t_heredoc *heredoc, TSLexer *lexer)
{
	bool found_delimiter;

	while (me_isspace(lexer->lookahead))
		skip(lexer);
	lexer->result_symbol = HEREDOC_START;
	heredoc->is_raw = lexer->lookahead == '\'' || lexer->lookahead == '"' || lexer->lookahead == '\\';
	found_delimiter = advance_word(lexer, &heredoc->delimiter);
	if (!found_delimiter)
		return (string_clear(&heredoc->delimiter), false);
	return (found_delimiter);
}

bool scan_heredoc_end_identifier(t_heredoc *heredoc, TSLexer *lexer)
{
	t_i32 size;

	size = 0;
	string_clear(&heredoc->current_leading_word);
	if (heredoc->delimiter.len > 0)
	{
		while (lexer->lookahead != '\0' && lexer->lookahead != '\n' && (t_i32)heredoc->delimiter.buf[size] == lexer->lookahead &&
			   heredoc->current_leading_word.len < heredoc->delimiter.len)
		{
			string_push_char(&heredoc->current_leading_word, lexer->lookahead);
			advance(lexer);
			size++;
		}
	}
	return heredoc->delimiter.len == 0 ? false : str_compare(heredoc->current_leading_word.buf, heredoc->delimiter.buf);
}

bool scan_heredoc_content(t_scanner *scanner, TSLexer *lexer, enum e_token_type middle_type, enum e_token_type end_type)
{
	bool	   did_advance = false;
	t_heredoc *heredoc = array_back(&scanner->heredocs);

	while (true)
	{
		if (lexer->lookahead == '\0')
		{
			if (lexer->eof(lexer) && did_advance)
			{
				reset_heredoc(heredoc);
				lexer->result_symbol = end_type;
				return (true);
			}
			return (false);
		}
		else if (lexer->lookahead == '\\')
		{
			did_advance = true;
			advance(lexer);
			advance(lexer);
		}
		else if (lexer->lookahead == '$')
		{
			if (heredoc->is_raw)
			{
				did_advance = true;
				advance(lexer);
			}
			if (did_advance)
			{
				lexer->mark_end(lexer);
				lexer->result_symbol = middle_type;
				heredoc->started = true;
				advance(lexer);
				if (me_isalpha(lexer->lookahead) || lexer->lookahead == '{' || lexer->lookahead == '(')
					return true;
			}
			if (middle_type == HEREDOC_BODY_BEGINNING && lexer->get_column(lexer) == 0)
			{
				lexer->result_symbol = middle_type;
				heredoc->started = true;
				return true;
			}
			return false;
		}
		else if (lexer->lookahead == '\n')
		{
			if (!did_advance)
			{
				skip(lexer);
			}
			else
			{
				advance(lexer);
			}
			did_advance = true;
			if (heredoc->allows_indent)
			{
				while (me_isspace(lexer->lookahead))
					advance(lexer);
			}
			lexer->result_symbol = end_type;
			if (heredoc->started)
				lexer->result_symbol = middle_type;
			lexer->mark_end(lexer);
			if (scan_heredoc_end_identifier(heredoc, lexer))
			{
				if (lexer->result_symbol == HEREDOC_END)
					(void)array_pop(&scanner->heredocs);
				return (true);
			}
		}
		else
		{
			if (lexer->get_column(lexer) == 0)
			{
				while (me_isspace(lexer->lookahead))
				{
					if (did_advance)
						advance(lexer);
					else
						skip(lexer);
				}
				if (end_type != SIMPLE_HEREDOC_BODY)
				{
					lexer->result_symbol = middle_type;
					if (scan_heredoc_end_identifier(heredoc, lexer))
						return true;
				}
				if (end_type == SIMPLE_HEREDOC_BODY)
				{
					lexer->result_symbol = end_type;
					lexer->mark_end(lexer);
					if (scan_heredoc_end_identifier(heredoc, lexer))
						return true;
				}
			}
			did_advance = true;
			advance(lexer);
		}
	}
	return (false);
}

bool scan(t_scanner *scanner, TSLexer *lexer, const bool *valid_symbols)
{
	if (valid_symbols[CONCAT] && !in_error_recovery(valid_symbols))
	{
		if (!(lexer->lookahead == 0 || me_isspace(lexer->lookahead) || lexer->lookahead == '>' || lexer->lookahead == '<' ||
			  lexer->lookahead == ')' || lexer->lookahead == '(' || lexer->lookahead == ';' || lexer->lookahead == '&' ||
			  lexer->lookahead == '|' || lexer->lookahead == '{' || lexer->lookahead == '}'))
		{
			lexer->result_symbol = CONCAT;
			// So for a`b`, we want to return a concat. We check if the
			// 2nd backtick has whitespace after it, and if it does we
			// return concat.
			if (lexer->lookahead == '`')
			{
				lexer->mark_end(lexer);
				advance(lexer);
				while (lexer->lookahead != '`' && !lexer->eof(lexer))
				{
					advance(lexer);
				}
				if (lexer->eof(lexer))
				{
					return false;
				}
				if (lexer->lookahead == '`')
				{
					advance(lexer);
				}
				return me_isspace(lexer->lookahead) || lexer->eof(lexer);
			}
			// strings w/ expansions that contains escaped quotes or
			// backslashes need this to return a concat
			if (lexer->lookahead == '\\')
			{
				lexer->mark_end(lexer);
				advance(lexer);
				if (lexer->lookahead == '"' || lexer->lookahead == '\'' || lexer->lookahead == '\\')
				{
					return true;
				}
				if (lexer->eof(lexer))
				{
					return false;
				}
			}
			else
			{
				return true;
			}
		}
	}

	if (valid_symbols[IMMEDIATE_DOUBLE_HASH] && !in_error_recovery(valid_symbols))
	{
		// advance two # and ensure not } after
		if (lexer->lookahead == '#')
		{
			lexer->mark_end(lexer);
			advance(lexer);
			if (lexer->lookahead == '#')
			{
				advance(lexer);
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

	if ((valid_symbols[HEREDOC_BODY_BEGINNING] || valid_symbols[SIMPLE_HEREDOC_BODY]) && scanner->heredocs.size > 0 &&
		!array_back(&scanner->heredocs)->started && !in_error_recovery(valid_symbols))
	{
		return scan_heredoc_content(scanner, lexer, HEREDOC_BODY_BEGINNING, SIMPLE_HEREDOC_BODY);
	}

	if (valid_symbols[HEREDOC_END] && scanner->heredocs.size > 0)
	{
		t_heredoc *heredoc = array_back(&scanner->heredocs);
		if (scan_heredoc_end_identifier(heredoc, lexer))
		{
			array_delete(&heredoc->current_leading_word);
			array_delete(&heredoc->delimiter);
			(void)array_pop(&scanner->heredocs);
			lexer->result_symbol = HEREDOC_END;
			return true;
		}
	}

	if (valid_symbols[HEREDOC_CONTENT] && scanner->heredocs.size > 0 && array_back(&scanner->heredocs)->started &&
		!in_error_recovery(valid_symbols))
	{
		return scan_heredoc_content(scanner, lexer, HEREDOC_CONTENT, HEREDOC_END);
	}

	if (valid_symbols[HEREDOC_START] && !in_error_recovery(valid_symbols) && scanner->heredocs.size > 0)
	{
		return scan_heredoc_start(array_back(&scanner->heredocs), lexer);
	}

	if ((valid_symbols[VARIABLE_NAME] || valid_symbols[FILE_DESCRIPTOR] || valid_symbols[HEREDOC_ARROW]) &&
		!in_error_recovery(valid_symbols))
	{
		for (;;)
		{
			if ((lexer->lookahead == ' ' || lexer->lookahead == '\t' || lexer->lookahead == '\r' ||
				 (lexer->lookahead == '\n' && !valid_symbols[NEWLINE])) &&
				!valid_symbols[EXPANSION_WORD])
			{
				skip(lexer);
			}
			else if (lexer->lookahead == '\\')
			{
				skip(lexer);

				if (lexer->eof(lexer))
				{
					lexer->mark_end(lexer);
					lexer->result_symbol = VARIABLE_NAME;
					return true;
				}

				if (lexer->lookahead == '\r')
				{
					skip(lexer);
				}
				if (lexer->lookahead == '\n')
				{
					skip(lexer);
				}
				else
				{
					if (lexer->lookahead == '\\' && valid_symbols[EXPANSION_WORD])
					{
						goto expansion_word;
					}
					return false;
				}
			}
			else
			{
				break;
			}
		}

		// no '*', '@', '?', '-', '$', '0', '_'
		if (!valid_symbols[EXPANSION_WORD] && (lexer->lookahead == '*' || lexer->lookahead == '@' || lexer->lookahead == '?' ||
											   lexer->lookahead == '-' || lexer->lookahead == '0' || lexer->lookahead == '_'))
		{
			lexer->mark_end(lexer);
			advance(lexer);
			if (lexer->lookahead == '=' || lexer->lookahead == '[' || lexer->lookahead == ':' || lexer->lookahead == '-' ||
				lexer->lookahead == '%' || lexer->lookahead == '#' || lexer->lookahead == '/')
			{
				return false;
			}
			if (valid_symbols[EXTGLOB_PATTERN] && me_isspace(lexer->lookahead))
			{
				lexer->mark_end(lexer);
				lexer->result_symbol = EXTGLOB_PATTERN;
				return true;
			}
		}

		if (valid_symbols[HEREDOC_ARROW] && lexer->lookahead == '<')
		{
			advance(lexer);
			if (lexer->lookahead == '<')
			{
				advance(lexer);
				if (lexer->lookahead == '-')
				{
					advance(lexer);
					t_heredoc heredoc = heredoc_new();
					heredoc.allows_indent = true;
					array_push(&scanner->heredocs, heredoc);
					lexer->result_symbol = HEREDOC_ARROW_DASH;
				}
				// else if (lexer->lookahead == '<' || lexer->lookahead == '=')
				// {
				// 	return false;
				// }
				else
				{
					t_heredoc heredoc = heredoc_new();
					array_push(&scanner->heredocs, heredoc);
					lexer->result_symbol = HEREDOC_ARROW;
				}
				return true;
			}
			return false;
		}

		bool is_number = true;
		if (me_isdigit(lexer->lookahead))
			advance(lexer);
		else if (me_isalpha(lexer->lookahead) || lexer->lookahead == '_')
		{
			is_number = false;
			advance(lexer);
		}
		else
		{
			if (lexer->lookahead == '{')
			{
				goto brace_start;
			}
			if (valid_symbols[EXPANSION_WORD])
			{
				goto expansion_word;
			}
			if (valid_symbols[EXTGLOB_PATTERN])
			{
				goto extglob_pattern;
			}
			return false;
		}

		for (;;)
		{
			if (me_isdigit(lexer->lookahead))
			{
				advance(lexer);
			}
			else if (me_isalpha(lexer->lookahead) || lexer->lookahead == '_')
			{
				is_number = false;
				advance(lexer);
			}
			else
			{
				break;
			}
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
				advance(lexer);
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
			if (lexer->lookahead == '=' || lexer->lookahead == '[' ||
				(lexer->lookahead == ':' &&
				 !valid_symbols[OPENING_PAREN]) || // TODO(amaanq): more cases for regular word chars but not variable
												   // names for function words, only handling : for now? #235
				lexer->lookahead == '%' ||
				(lexer->lookahead == '#' && !is_number) || lexer->lookahead == '@' || (lexer->lookahead == '-'))
			{
				lexer->mark_end(lexer);
				lexer->result_symbol = VARIABLE_NAME;
				return true;
			}

			if (lexer->lookahead == '?')
			{
				lexer->mark_end(lexer);
				advance(lexer);
				lexer->result_symbol = VARIABLE_NAME;
				return me_isalpha(lexer->lookahead);
			}
		}

		return false;
	}

	if (valid_symbols[BARE_DOLLAR] && !in_error_recovery(valid_symbols) && scan_bare_dollar(lexer))
	{
		return true;
	}

	if ((valid_symbols[REGEX]) && !in_error_recovery(valid_symbols))
	{
		if (valid_symbols[REGEX])
		{
			while (me_isspace(lexer->lookahead))
			{
				skip(lexer);
			}
		}

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
				advance(lexer);
				if (lexer->lookahead == '(')
				{
					return false;
				}
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
						advance(lexer);
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
					advance(lexer);
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
						advance(lexer);
						state.advanced_once = true;
						if (!was_space || state.paren_depth > 0)
						{
							lexer->mark_end(lexer);
						}
					}
				}
			}

			lexer->result_symbol = REGEX;
			if (valid_symbols[REGEX] && !state.advanced_once)
			{
				return false;
			}
			return true;
		}
	}

extglob_pattern:
	if (valid_symbols[EXTGLOB_PATTERN] && !in_error_recovery(valid_symbols))
	{
		// first skip ws, then check for ? * + @ !
		while (me_isspace(lexer->lookahead))
			skip(lexer);

		if (lexer->lookahead == '?' || lexer->lookahead == '*' || lexer->lookahead == '+' || lexer->lookahead == '@' ||
			lexer->lookahead == '!' || lexer->lookahead == '-' || lexer->lookahead == ')' || lexer->lookahead == '\\' ||
			lexer->lookahead == '.' || lexer->lookahead == '[' || (me_isalpha(lexer->lookahead)))
		{
			if (lexer->lookahead == '\\')
			{
				advance(lexer);
				if ((me_isspace(lexer->lookahead) || lexer->lookahead == '"') && lexer->lookahead != '\r' && lexer->lookahead != '\n')
					advance(lexer);
				else
					return false;
			}

			if (lexer->lookahead == ')' && scanner->last_glob_paren_depth == 0)
			{
				lexer->mark_end(lexer);
				advance(lexer);

				if (me_isspace(lexer->lookahead))
				{
					return false;
				}
			}

			lexer->mark_end(lexer);
			bool was_non_alpha = !me_isalpha(lexer->lookahead);
			if (lexer->lookahead != '[')
			{
				// no esac
				if (lexer->lookahead == 'e')
				{
					lexer->mark_end(lexer);
					advance(lexer);
					if (lexer->lookahead == 's')
					{
						advance(lexer);
						if (lexer->lookahead == 'a')
						{
							advance(lexer);
							if (lexer->lookahead == 'c')
							{
								advance(lexer);
								if (me_isspace(lexer->lookahead))
									return false;
							}
						}
					}
				}
				else
					advance(lexer);
			}

			// -\w is just a word, find something else special
			if (lexer->lookahead == '-')
			{
				lexer->mark_end(lexer);
				advance(lexer);
				while (me_isalnum(lexer->lookahead))
					advance(lexer);

				if (lexer->lookahead == ')' || lexer->lookahead == '\\' || lexer->lookahead == '.')
					return false;
				lexer->mark_end(lexer);
			}

			// case item -) or *)
			if (lexer->lookahead == ')' && scanner->last_glob_paren_depth == 0)
			{
				lexer->mark_end(lexer);
				advance(lexer);
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
				advance(lexer);
				if (lexer->lookahead == '{' || lexer->lookahead == '(')
				{
					lexer->result_symbol = EXTGLOB_PATTERN;
					return true;
				}
			}

			if (lexer->lookahead == '|')
			{
				lexer->mark_end(lexer);
				advance(lexer);
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
					advance(lexer);
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
						advance(lexer);
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
						advance(lexer);
						if (me_isspace(lexer->lookahead) || lexer->lookahead == '"')
							advance(lexer);
					}
					else
					{
						if (!me_isalpha(lexer->lookahead) && lexer->lookahead != '.' && lexer->lookahead != '\\')
							state.saw_non_alphadot = true;
						advance(lexer);
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
		for (;;)
		{
			if (lexer->lookahead == '\"')
				return false;
			if (lexer->lookahead == '$')
			{
				lexer->mark_end(lexer);
				advance(lexer);
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
				advance(lexer);
				while (lexer->lookahead != ')' && !lexer->eof(lexer))
				{
					// if we find a $( or ${ assume this is valid and is
					// a garbage concatenation of some weird word + an
					// expansion
					// I wonder where this can fail
					if (lexer->lookahead == '$')
					{
						lexer->mark_end(lexer);
						advance(lexer);
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
						advance(lexer);
					}
				}
				lexer->mark_end(lexer);
				if (lexer->lookahead == ')')
				{
					advanced_once = true;
					advance(lexer);
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
			advance(lexer);
		}
	}

brace_start:
	return false;
}

void *tree_sitter_sh_external_scanner_create()
{
	t_scanner *scanner;

	scanner = mem_alloc(sizeof(*scanner));
	array_init(&scanner->heredocs);
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
	t_scanner *scanner;
	t_heredoc *heredoc;
	t_usize	   i;

	scanner = (t_scanner *)payload;
	i = 0;
	while (i < scanner->heredocs.size)
	{
		heredoc = array_get(&scanner->heredocs, i++);
		string_free(heredoc->current_leading_word);
		string_free(heredoc->delimiter);
	}
	array_delete(&scanner->heredocs);
	mem_free(scanner);
}
