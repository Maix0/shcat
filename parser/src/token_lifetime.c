/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token_lifetime.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 14:37:13 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/30 20:15:05 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/vec/vec_token.h"
#include "parser/token.h"

void token_free(t_token tok)
{
	if (tok.string.buf != NULL)
		string_free(tok.string);
	if (tok.subtokens.buffer != NULL)
		vec_token_free(tok.subtokens);
}

t_token token_new(enum e_token type)
{
	return ((t_token){.type = type, .string = string_new(16), .subtokens = {NULL, 0, 0, NULL}});
}

t_token token_new_meta(enum e_token type)
{
	return ((t_token){.type = type, .string = {NULL, 0, 0}, .subtokens = vec_token_new(16, token_free)});
}

bool token_is_meta(t_token tok)
{
	if (tok.type == TOK_WORD)
		return (true);
	return (false);
}

t_token token_new_none(void)
{
	return ((t_token){.type = TOK_NONE, .string = {NULL, 0, 0}, .subtokens = vec_token_new(16, token_free)});
}

// TO REMOVE
t_str token_name(t_token *token)
{
	if (token->type == TOK_NONE)
		return ("NONE");
	if (token->type == TOK_AMP)
		return ("AMP");
	if (token->type == TOK_AND)
		return ("AND");
	if (token->type == TOK_CARRET)
		return ("CARRET");
	if (token->type == TOK_DLCARRET)
		return ("DLCARRET");
	if (token->type == TOK_DOLLAR)
		return ("DOLLAR");
	if (token->type == TOK_DQUOTE)
		return ("DQUOTE");
	if (token->type == TOK_DRCARRET)
		return ("DRCARRET");
	if (token->type == TOK_EXPENSION)
		return ("EXPENSION");
	if (token->type == TOK_LCARRET)
		return ("LCARRET");
	if (token->type == TOK_LPAREN)
		return ("LPAREN");
	if (token->type == TOK_NQUOTE)
		return ("NQUOTE");
	if (token->type == TOK_OR)
		return ("OR");
	if (token->type == TOK_PIPE)
		return ("PIPE");
	if (token->type == TOK_RCARRET)
		return ("RCARRET");
	if (token->type == TOK_RPAREN)
		return ("RPAREN");
	if (token->type == TOK_SEMICOLON)
		return ("SEMICOLON");
	if (token->type == TOK_SQUOTE)
		return ("SQUOTE");
	if (token->type == TOK_WHITESPACE)
		return ("WHITESPACE");
	if (token->type == TOK_WORD)
		return ("WORD");
	return (NULL);
}
