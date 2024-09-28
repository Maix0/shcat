/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:59:23 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/28 11:45:54 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKEN_H
#define TOKEN_H

#include "me/string/string.h"
#include "me/vec/vec_token.h"

enum e_token
{
	AMP,
	CARRET,
	DOLLAR,
	DQUOTE,
	LPAREN,
	NQUOTE,
	PIPE,
	RPAREN,
	SEMICOLON,
	SQUOTE,
	WHITESPACE
};

typedef struct s_token
{
	t_vec_token		subtokens;
	t_string		string;
	enum e_token	type;
}					t_token;

bool	is_dollar(char c);
bool	is_quote(char c);
bool	is_space(char c);
t_error	find_end_string(t_str raw, t_usize *start, t_token *output);
t_error	start_analyse(t_const_str raw, enum e_token list, t_vec_token *output);
t_error	tokeniser(t_const_str raw, enum e_token list);

#endif
