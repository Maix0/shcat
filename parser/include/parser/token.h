/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:59:23 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/29 13:30:06 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKEN_H
# define TOKEN_H

# include "me/string/string.h"
# include "me/vec/vec_token.h"

enum e_token
{
	AMP,		// ampersand == &
	AND,		// and == &&
	CARRET,		// any carret == < > << >>
	DLCARRET,	// double left carret == <<
	DOLLAR,		// dollar == $
	DQUOTE,		// double quote string
	DRCARRET,	// double right carret == >>
	EXPENSION,	// an expension == $<no_quote_word>
	LCARRET,	// left carret == <
	LPAREN,		// left parenthesis == (
	NQUOTE,		// no quote string
	OR,			// or == ||
	PIPE,		// pipe == |
	RCARRET,	// right carret == >
	RPAREN,		// right parenthesis == )
	SEMICOLON,	// semicolor == ;
	SQUOTE,		// single quote string
	WHITESPACE, // whitespace outside of quoted strings
	WORD,		// a meta token, which contains subtokens
};

typedef struct s_token
{
	t_vec_token		subtokens;
	t_string		string;
	enum e_token	type;
}					t_token;

/* LIFETIME */
// This create a "meta" token consisting of multiple tokens
t_token	token_new_meta(enum e_token type);
// This create a "simple" token consisting of a string
t_token	token_new(enum e_token type);
void	token_free(t_token tok);
bool	token_is_meta(t_token tok);

/* PARSING */
bool	is_dollar(char c);
bool	is_quote(char c);
bool	is_space(char c);
t_error	find_end_string(t_const_str raw, t_usize *start, t_token *output);
t_error	start_analyse(t_const_str raw, t_vec_token *output);
t_error	tokeniser(t_const_str raw);

#endif
