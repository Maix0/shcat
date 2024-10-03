/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   passes.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:43:41 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/03 22:31:21 by maiboyer         ###   ########.fr       */
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
t_error ts_do_fuck_all(t_vec_token input, t_vec_token *output);
t_error ts_fold_expension(t_vec_token input, t_vec_token *output);
t_error	ts_double_string_pass(t_vec_token input, t_vec_token *output);

#endif /* PASSES_H */
