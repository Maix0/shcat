/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:38:28 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/25 16:32:40 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKEN_H
# define TOKEN_H

#include "me/string/string.h"

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

typedef struct s_token
{
	t_string		raw;
	enum e_token	TokenType;
}					t_token;

#endif
