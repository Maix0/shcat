/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:59:23 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/26 18:29:25 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKEN_H
#define TOKEN_H

#include "parser/_token.h"

#include "me/string/string.h"
#include "me/vec/vec_token.h"

enum e_token
{
	AMP,
	DOLLAR,
	DQUOTE,
	LPAREN,
	NQUOTE,
	PIPE,
	CARRET,
	RPAREN,
	SEMICOLON,
	SQUOTE,
	WHITESPACE
};

struct s_token
{
	t_vec_token		subtokens;
	t_string		string;
	enum e_token	type;
};



#endif /* TOKEN_H */
