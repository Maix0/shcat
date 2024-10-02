/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tokenizer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:39:39 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/02 17:50:31 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/char.h"
#include "me/string/string.h"
#include "me/types.h"
#include "me/vec/vec_token.h"
#include "parser/token.h"

static void push_token_and_create_new(t_vec_token *tokens, t_token *tok, enum e_token ttype, t_const_str s)
{
	t_token tmp;
	if (tok->type != TOK_NONE)
		vec_token_push(tokens, *tok);
	*tok = token_new_none();
	tmp = token_new(ttype);
	string_push(&tmp.string, s);
	vec_token_push(tokens, tmp);
}

void handle_quote(t_vec_token *ret, char chr, t_token *tok, char *quote)
{
	if (chr == *quote)
	{
		*quote = '\0';
		if (tok->type != TOK_NONE)
			vec_token_push(ret, *tok);
		*tok = token_new_none();
	}
	else
		string_push_char(&tok->string, chr);
}

void handle_noquote(t_vec_token *ret, char chr, t_token *tok, char *quote)
{
	*quote = '\0';
	if (chr == '$')
		push_token_and_create_new(ret, tok, TOK_DOLLAR, "$");
	else if (chr == '>')
		push_token_and_create_new(ret, tok, TOK_RCARRET, ">");
	else if (chr == '<')
		push_token_and_create_new(ret, tok, TOK_LCARRET, "<");
	else if (chr == '&')
		push_token_and_create_new(ret, tok, TOK_AMP, "&");
	else if (chr == '|')
		push_token_and_create_new(ret, tok, TOK_PIPE, "|");
	else if (chr == '(')
		push_token_and_create_new(ret, tok, TOK_LPAREN, "(");
	else if (chr == ')')
		push_token_and_create_new(ret, tok, TOK_RPAREN, ")");
	else if (chr == ';')
		push_token_and_create_new(ret, tok, TOK_RPAREN, ";");
	else if (me_isspace(chr))
		push_token_and_create_new(ret, tok, TOK_WHITESPACE, " ");
	else
	{
		if (tok->type == TOK_NONE)
			*tok = token_new(TOK_NQUOTE);
		string_push_char(&tok->string, chr);
	}
}

t_error tokenize(t_const_str s, t_vec_token *out)
{
	t_usize		i;
	char		quote;
	t_vec_token ret;
	t_token		tok;

	if (s == NULL || out == NULL)
		return (ERROR);
	i = 0;
	quote = '\0';
	tok = token_new_none();
	ret = vec_token_new(16, token_free);
	while (s[i] != '\0')
	{
		if (quote == '\0')
		{
			quote = s[i];
			if (s[i] == '\"')
				push_token_and_create_new(&ret, &tok, TOK_DQUOTE, "");
			else if (s[i] == '\'')
				push_token_and_create_new(&ret, &tok, TOK_SQUOTE, "");
			else
				handle_noquote(&ret, s[i], &tok, &quote);
		}
		else if (quote == '\'' || quote == '\"')
			handle_quote(&ret, s[i], &tok, &quote);
		else
			me_abort("invalid quote type");
		i++;
	}
	if (tok.type == TOK_NQUOTE)
		vec_token_push(&ret, tok);
	if (tok.type == TOK_NQUOTE || tok.type == TOK_NONE)
		return (*out = ret, NO_ERROR);
	else
		return (vec_token_free(ret), ERROR);
}
