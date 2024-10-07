/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   passes.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:43:41 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/07 16:46:03 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PASSES_H
#define PASSES_H

#include "me/types.h"
#include "me/vec/vec_token.h"
#include "parser/token.h"

typedef t_error (*t_ts_pass)(t_vec_token input, t_vec_token *output);

struct s_ts_pass_def
{
	t_ts_pass	fn;
	t_const_str name;
};

t_error ts_apply_passes(t_vec_token ts, t_vec_token *out);

// This function is to apply stuff on doublequote meta token
// You shouldn't have to use it !
// It *may* disapear/change/whatever
t_error ts_dq_apply_passes(t_vec_token ts, t_vec_token *out);

// list passes function here

// this is a example one, does absolutly nothing lol
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
t_error ts_do_fuck_all(t_vec_token input, t_vec_token *output);
t_error ts_fold_expension(t_vec_token input, t_vec_token *output);
t_error ts_fold_redir(t_vec_token input, t_vec_token *output);

#endif /* PASSES_H */
