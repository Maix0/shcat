/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:59:23 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:49 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKEN_H
# define TOKEN_H

# include "me/string/string.h"
# include "me/vec/vec_token.h"

enum e_token
{
	TOK_AEXP,
	TOK_AMP,
	TOK_AND,
	TOK_CARRET,
	TOK_CMD,
	TOK_DLCARRET,
	TOK_DLPAREN,
	TOK_DOLLAR,
	TOK_DQUOTE,
	TOK_DRCARRET,
	TOK_DRPAREN,
	TOK_EXPENSION,
	TOK_LCARRET,
	TOK_LPAREN,
	TOK_NALPHANUM,
	TOK_NONE,
	TOK_NQUOTE,
	TOK_OR,
	TOK_PIPE,
	TOK_RCARRET,
	TOK_REDIR,
	TOK_RPAREN,
	TOK_SEMICOLON,
	TOK_SQUOTE,
	TOK_WHITESPACE,
	TOK_WORD,
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

void	ts_print(t_vec_token *ts);
/* PARSING */
t_error	tokenize(t_const_str s, t_vec_token *out);

#endif
