/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   passes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:41:16 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:54 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/passes.h"
#include "me/printf/printf.h"
#include "me/types.h"
#include "me/vec/vec_token.h"
#include "parser/token.h"
#include <stdio.h>

/// This is a list what of kind of passes we need to make on the tokenstream
/// they'll all have the same function signature, basically taking a token
/// stream in and returning a tokenstream out
///
/// so `t_error	pass_name(t_vec_token input, t_vec_token *ouput)`
/// or t_ts_pass
///
/// there is a few stuff we want to do, for example:
/// 	- do somekind of arith expansion that will have any token between 
/// 		DOLLAR DLPAREN and the matching DRPAREN in it (yard algo)
/// 		
/// 	- do somekind of CMD token that will store every token that consitute 
/// 		command into a single token stopping at the correct ending:
/// 			semicolon, pipe, or, and

// bellow is some function to apply all the different passes !

t_error	ts_apply_passes(t_vec_token ts, t_vec_token *out)
{
	t_usize					i;
	t_vec_token				next;
	struct s_global_passes	passes;

	i = 0;
	passes = _get_global_passes();
	while (i < sizeof(passes) / sizeof(passes.passes[0]))
	{
		if (passes.passes[i].fn == NULL)
			return (vec_token_free(ts), ERROR);
		if ((passes.passes[i].fn)(ts, &next))
			return (me_eprintf("failed on %s token pass\n", \
					passes.passes[i].name), ERROR);
		ts = next;
		i++;
	}
	return (*out = ts, NO_ERROR);
}

t_error	ts_dq_apply_passes(t_vec_token ts, t_vec_token *out)
{
	t_usize				i;
	t_vec_token			next;
	struct s_dq_passes	passes;

	i = 0;
	passes = _get_dq_passes();
	while (i < sizeof(passes) / sizeof(passes.passes[0]))
	{
		if (passes.passes[i].fn == NULL)
			return (vec_token_free(ts), ERROR);
		if ((passes.passes[i].fn)(ts, &next))
			return (me_eprintf(\
			"failed on '%s' dq token pass\n", passes.passes[i].name), ERROR);
		ts = next;
		i++;
	}
	return (*out = ts, NO_ERROR);
}
