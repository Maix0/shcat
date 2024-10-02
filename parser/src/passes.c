/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   passes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:41:16 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/02 19:22:37 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/passes.h"
#include "me/printf/printf.h"
#include "me/types.h"
#include "me/vec/vec_token.h"
#include "parser/token.h"

/// This is a list what of kind of passes we need to make on the tokenstream
/// they'll all have the same function signature, basically taking a token
/// stream in and returning a tokenstream out
///
/// so `t_error	pass_name(t_vec_token input, t_vec_token *ouput)`
/// or t_ts_pass
///
/// there is a few stuff we want to do, for example:
/// 	- combine any whitespace token that are following eachother into a
/// 		single one, basically discarding duplicates
/// 	- combine any *QUOTE token that are next to eachothers
/// 		into a single metatoken WORD
/// 	- combine multiple tokens into a single if they can
/// 		(double PIPE into OR, double AMP into AND,
/// 		double LCARRET into DLCARET, ...)
/// 	- create EXPENSION token when DOLLAR and NQUOTE follow eachother,
/// 		maybe leaving some stuff after
/// 	- parse double quote string to see expansion in them, creating a meta 
/// 		token consisting of the pieces

// here is the signature easily accessible:
//
// t_error	pass_name(t_vec_token input, t_vec_token *output);

// bellow is some function to apply all the different passes !

static const struct s_ts_pass_def g_ts_passes[] = {
	{do_fuck_all, "does nothing lol"},
};

t_error apply_all_passes(t_vec_token ts, t_vec_token *out)
{
	t_usize		i;
	t_vec_token next;

	i = 0;
	while (i < sizeof(g_ts_passes) / sizeof(g_ts_passes[0]))
	{
		if (g_ts_passes[i].fn == NULL)
			return (vec_token_free(ts), ERROR);
		if ((g_ts_passes[i].fn)(ts, &next))
			return (me_eprintf("failed on %s token pass\n", g_ts_passes[i].name), ERROR);
		ts = next;
		i++;
	}
	return (*out = ts, NO_ERROR);
}
