/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:59:16 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 17:22:25 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/char.h"
#include "parser/inner/scanner.h"

bool scan_expansion_word(t_scanner *scanner, TSLexer *lexer, const bool *valid_symbols)
{
	bool advanced_once = false;
	bool advance_once_space = false;

	(void)(scanner);
	(void)(lexer);
	(void)(valid_symbols);
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
