/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   passes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:41:16 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/08 13:40:48 by maiboyer         ###   ########.fr       */
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

// here is the signature easily accessible:
//
// t_error	pass_name(t_vec_token input, t_vec_token *output);

// bellow is some function to apply all the different passes !

static const struct s_ts_pass_def	g_ts_passes[] = {\
	{ts_double_string_pass, "double string parser"}, \
	{ts_fold_expension, "fold expansion"}, \
	{ts_fold_no_quote, "fold no quote"}, \
	{ts_fold_whitespace, "fold whitespace"}, \
	{ts_double_amp, "double amp => and"}, \
	{ts_double_pipe, "double pipe => or"}, \
	{ts_double_lparen, "double lparen => dlparen"}, \
	{ts_double_rparen, "double rparen => drparen"}, \
	{ts_double_lcarret, "double lcarret => dlcarret"}, \
	{ts_double_rcarret, "double rcarrer => drcarret"}, \
	{ts_fold_into_word, "fold into words"}, \
	{ts_fold_cmd, "fold into cmd"}, \
	// there should be an ts_fold_arith here
{ts_split_paren, "split double parenthesis"}, \
	{ts_fold_redir, "fold redir+argument"}, \
};

t_error	ts_apply_passes(t_vec_token ts, t_vec_token *out)
{
	t_usize		i;
	t_vec_token	next;

	i = 0;
	while (i < sizeof(g_ts_passes) / sizeof(g_ts_passes[0]))
	{
		if (g_ts_passes[i].fn == NULL)
			return (vec_token_free(ts), ERROR);
		if ((g_ts_passes[i].fn)(ts, &next))
			return (me_eprintf("failed on %s token pass\n", \
					g_ts_passes[i].name), ERROR);
		else
			me_printf("Applied '%s' pass\n", g_ts_passes[i].name);
		ts = next;
		//ts_print(&ts);
		i++;
	}
	return (*out = ts, NO_ERROR);
}

static const struct s_ts_pass_def	g_ts_dq_passes[] = {\
	{ts_double_lparen, "double lparen => dlparen"}, \
	{ts_double_rparen, "double rparen => drparen"}, \
	{ts_fold_expension, "fold expansion"}, \
	// there should be an ts_fold_arith here
{ts_split_paren, "split double parenthesis"}, \
	{ts_paren_to_noquote, "parenthesis to noquote"}, \
	{ts_fold_no_quote, "fold no quote"},
};

t_error	ts_dq_apply_passes(t_vec_token ts, t_vec_token *out)
{
	t_usize		i;
	t_vec_token	next;

	i = 0;
	while (i < sizeof(g_ts_dq_passes) / sizeof(g_ts_dq_passes[0]))
	{
		if (g_ts_dq_passes[i].fn == NULL)
			return (vec_token_free(ts), ERROR);
		if ((g_ts_dq_passes[i].fn)(ts, &next))
			return (me_eprintf(\
			"failed on '%s' dq token pass\n", g_ts_dq_passes[i].name), ERROR);
		else
			me_printf("Applied '%s' dq_pass\n", g_ts_dq_passes[i].name);
		ts = next;
		//ts_print(&ts);
		i++;
	}
	return (*out = ts, NO_ERROR);
}
