/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advance_words.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:28:19 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/01 19:30:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/char.h"
#include "me/string/string.h"
#include "me/types.h"
#include "parser/parser.h"

bool advance_word(TSLexer *lexer, t_string *unquoted_word)
{
	bool  empty;
	t_i32 quote;

	empty = true;
	quote = 0;
	if (lexer->lookahead == '\'' || lexer->lookahead == '"')
	{
		quote = lexer->lookahead;
		lexer->advance(lexer, false);
	}
	while (lexer->lookahead && !((quote && (lexer->lookahead == quote || lexer->lookahead == '\r' || lexer->lookahead == '\n')) ||
								 (!quote && (me_isspace(lexer->lookahead)))))
	{
		if (lexer->lookahead == '\\')
		{
			lexer->advance(lexer, false);
			if (!lexer->lookahead)
				return (false);
		}
		empty = false;
		string_push_char(unquoted_word, lexer->lookahead);
		lexer->advance(lexer, false);
	}
	if (quote && lexer->lookahead == quote)
		lexer->advance(lexer, false);
	return (!empty);
}
