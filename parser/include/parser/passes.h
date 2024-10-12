/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   passes.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:43:41 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:48 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PASSES_H
# define PASSES_H

# include "me/types.h"
# include "me/vec/vec_token.h"
# include "parser/token.h"

typedef t_error	(*t_ts_pass)(t_vec_token input, t_vec_token *output);

struct s_ts_pass_def
{
	t_ts_pass	fn;
	t_const_str	name;
};

t_error	ts_apply_passes(t_vec_token ts, t_vec_token *out);

// This function is to apply stuff on doublequote meta token
// You shouldn't have to use it !
// It *may* disapear/change/whatever
t_error	ts_dq_apply_passes(t_vec_token ts, t_vec_token *out);

// list passes function here

t_error	ts_double_amp(t_vec_token input, t_vec_token *output);
t_error	ts_double_lcarret(t_vec_token input, t_vec_token *output);
t_error	ts_double_lparen(t_vec_token input, t_vec_token *output);
t_error	ts_double_pipe(t_vec_token input, t_vec_token *output);
t_error	ts_double_rcarret(t_vec_token input, t_vec_token *output);
t_error	ts_double_rparen(t_vec_token input, t_vec_token *output);
t_error	ts_double_string_pass(t_vec_token input, t_vec_token *output);
t_error	ts_fold_cmd(t_vec_token input, t_vec_token *output);
t_error	ts_fold_into_word(t_vec_token input, t_vec_token *output);
t_error	ts_fold_no_quote(t_vec_token input, t_vec_token *output);
t_error	ts_fold_whitespace(t_vec_token input, t_vec_token *output);
t_error	ts_paren_to_noquote(t_vec_token input, t_vec_token *output);
t_error	ts_split_paren(t_vec_token input, t_vec_token *output);
t_error	ts_verify_tokens(t_vec_token input, t_vec_token *output);
t_error	ts_fold_expension(t_vec_token input, t_vec_token *output);
t_error	ts_fold_redir(t_vec_token input, t_vec_token *output);
t_error	ts_remove_whitespace(t_vec_token input, t_vec_token *output);

struct s_global_passes
{
	struct s_ts_pass_def	passes[13];
};

struct s_dq_passes
{
	struct s_ts_pass_def	passes[3];
};

static inline struct s_global_passes	_get_global_passes(void)
{
	return ((struct s_global_passes){.passes = {\
	{ts_double_string_pass, "double string parser"}, \
	{ts_fold_expension, "fold expansion"}, \
	{ts_fold_no_quote, "fold no quote"}, \
	{ts_fold_whitespace, "fold whitespace"}, \
	{ts_double_amp, "double amp => and"}, \
	{ts_double_pipe, "double pipe => or"}, \
	{ts_double_lcarret, "double lcarret => dlcarret"}, \
	{ts_double_rcarret, "double rcarrer => drcarret"}, \
	{ts_fold_into_word, "fold into words"}, \
	{ts_fold_redir, "fold redir+argument"}, \
	{ts_remove_whitespace, "rm extra whitespace"}, \
	{ts_fold_cmd, "fold into cmd"}, \
	{ts_verify_tokens, "verify only tokens"}, \
	}});
}

static inline struct s_dq_passes	_get_dq_passes(void)
{
	return ((struct s_dq_passes){.passes = {\
	{ts_fold_expension, "fold expansion"}, \
	{ts_paren_to_noquote, "parenthesis to noquote"}, \
	{ts_fold_no_quote, "fold no quote"}, \
	}});
}

#endif /* PASSES_H */
