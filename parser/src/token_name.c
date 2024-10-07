/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token_name.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:32:28 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/07 16:47:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "parser/token.h"

// TO REMOVE
t_str	token_name(t_token *token)
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
	if (token->type == TOK_NALPHANUM)
		return ("NALPHANUM");
	if (token->type == TOK_DLPAREN)
		return ("DLPAREN");
	if (token->type == TOK_DRPAREN)
		return ("DRPAREN");
	if (token->type == TOK_CMD)
		return ("CMD");
	return (NULL);
}
