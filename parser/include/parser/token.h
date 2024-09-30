/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:59:23 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/30 19:47:53 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKEN_H
# define TOKEN_H

# include "me/string/string.h"
# include "me/vec/vec_token.h"

enum e_token
{
	TOK_NONE,		// NO TOKEN TYPE == INVALID / INEXISTANT TOKEN
	TOK_AMP,		// ampersand == &
	TOK_AND,		// and == &&
	TOK_CARRET,		// any carret == < > << >>
	TOK_DLCARRET,	// double left carret == <<
	TOK_DOLLAR,		// dollar == $
	TOK_DQUOTE,		// double quote string
	TOK_DRCARRET,	// double right carret == >>
	TOK_EXPENSION,	// an expension == $<no_quote_word>
	TOK_LCARRET,	// left carret == <
	TOK_LPAREN,		// left parenthesis == (
	TOK_NQUOTE,		// no quote string
	TOK_OR,			// or == ||
	TOK_PIPE,		// pipe == |
	TOK_RCARRET,	// right carret == >
	TOK_RPAREN,		// right parenthesis == )
	TOK_SEMICOLON,	// semicolor == ;
	TOK_SQUOTE,		// single quote string
	TOK_WHITESPACE, // whitespace outside of quoted strings
	TOK_WORD,		// a meta token, which contains subtokens
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
t_token	token_new_none(void);
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
