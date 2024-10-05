/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:59:23 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/05 13:11:34 by maiboyer         ###   ########.fr       */
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
	TOK_EXPENSION,	// an expension == $<no_quote_word>; the $ is not in .string
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
	TOK_NALPHANUM,  // a non alphanumeric character, used in the expansion folding, then folded back into NQUOTE
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
t_token	token_clone(t_token *tok);
void	token_free(t_token tok);

bool	token_is_meta(t_token tok);
bool	token_is_noquote(enum e_token tok);

/* PARSING */
t_error	tokenize(t_const_str s, t_vec_token *out);

#endif
