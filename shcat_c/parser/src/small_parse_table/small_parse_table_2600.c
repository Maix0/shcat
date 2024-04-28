/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2600.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13000(t_small_parse_table_array *v)
{
	v->a[260000] = actions(11850);
	v->a[260001] = 1;
	v->a[260002] = sym_file_descriptor;
	v->a[260003] = actions(11542);
	v->a[260004] = 2;
	v->a[260005] = anon_sym_LT_AMP_DASH;
	v->a[260006] = anon_sym_GT_AMP_DASH;
	v->a[260007] = state(4877);
	v->a[260008] = 2;
	v->a[260009] = sym_file_redirect;
	v->a[260010] = sym_herestring_redirect;
	v->a[260011] = actions(11540);
	v->a[260012] = 8;
	v->a[260013] = anon_sym_LT;
	v->a[260014] = anon_sym_GT;
	v->a[260015] = anon_sym_GT_GT;
	v->a[260016] = anon_sym_AMP_GT;
	v->a[260017] = anon_sym_AMP_GT_GT;
	v->a[260018] = anon_sym_LT_AMP;
	v->a[260019] = anon_sym_GT_AMP;
	small_parse_table_13001(v);
}

void	small_parse_table_13001(t_small_parse_table_array *v)
{
	v->a[260020] = anon_sym_GT_PIPE;
	v->a[260021] = actions(11533);
	v->a[260022] = 10;
	v->a[260023] = anon_sym_SEMI;
	v->a[260024] = anon_sym_PIPE_PIPE;
	v->a[260025] = anon_sym_AMP_AMP;
	v->a[260026] = anon_sym_PIPE;
	v->a[260027] = anon_sym_AMP;
	v->a[260028] = anon_sym_LT_LT;
	v->a[260029] = anon_sym_RPAREN;
	v->a[260030] = anon_sym_SEMI_SEMI;
	v->a[260031] = anon_sym_PIPE_AMP;
	v->a[260032] = anon_sym_LT_LT_DASH;
	v->a[260033] = 4;
	v->a[260034] = actions(3);
	v->a[260035] = 1;
	v->a[260036] = sym_comment;
	v->a[260037] = actions(4272);
	v->a[260038] = 2;
	v->a[260039] = sym_file_descriptor;
	small_parse_table_13002(v);
}

void	small_parse_table_13002(t_small_parse_table_array *v)
{
	v->a[260040] = aux_sym_heredoc_redirect_token1;
	v->a[260041] = state(4697);
	v->a[260042] = 3;
	v->a[260043] = sym_file_redirect;
	v->a[260044] = sym_heredoc_redirect;
	v->a[260045] = aux_sym_redirected_statement_repeat1;
	v->a[260046] = actions(4270);
	v->a[260047] = 20;
	v->a[260048] = anon_sym_SEMI;
	v->a[260049] = anon_sym_PIPE_PIPE;
	v->a[260050] = anon_sym_AMP_AMP;
	v->a[260051] = anon_sym_PIPE;
	v->a[260052] = anon_sym_AMP;
	v->a[260053] = anon_sym_LT;
	v->a[260054] = anon_sym_GT;
	v->a[260055] = anon_sym_LT_LT;
	v->a[260056] = anon_sym_GT_GT;
	v->a[260057] = anon_sym_SEMI_SEMI;
	v->a[260058] = anon_sym_PIPE_AMP;
	v->a[260059] = anon_sym_AMP_GT;
	small_parse_table_13003(v);
}

void	small_parse_table_13003(t_small_parse_table_array *v)
{
	v->a[260060] = anon_sym_AMP_GT_GT;
	v->a[260061] = anon_sym_LT_AMP;
	v->a[260062] = anon_sym_GT_AMP;
	v->a[260063] = anon_sym_GT_PIPE;
	v->a[260064] = anon_sym_LT_AMP_DASH;
	v->a[260065] = anon_sym_GT_AMP_DASH;
	v->a[260066] = anon_sym_LT_LT_DASH;
	v->a[260067] = anon_sym_BQUOTE;
	v->a[260068] = 8;
	v->a[260069] = actions(3);
	v->a[260070] = 1;
	v->a[260071] = sym_comment;
	v->a[260072] = actions(11431);
	v->a[260073] = 1;
	v->a[260074] = aux_sym_heredoc_redirect_token1;
	v->a[260075] = actions(11953);
	v->a[260076] = 1;
	v->a[260077] = sym_file_descriptor;
	v->a[260078] = actions(11920);
	v->a[260079] = 2;
	small_parse_table_13004(v);
}

void	small_parse_table_13004(t_small_parse_table_array *v)
{
	v->a[260080] = anon_sym_LT_LT;
	v->a[260081] = anon_sym_LT_LT_DASH;
	v->a[260082] = actions(11950);
	v->a[260083] = 2;
	v->a[260084] = anon_sym_LT_AMP_DASH;
	v->a[260085] = anon_sym_GT_AMP_DASH;
	v->a[260086] = state(4725);
	v->a[260087] = 3;
	v->a[260088] = sym_file_redirect;
	v->a[260089] = sym_heredoc_redirect;
	v->a[260090] = aux_sym_redirected_statement_repeat1;
	v->a[260091] = actions(11420);
	v->a[260092] = 8;
	v->a[260093] = anon_sym_SEMI;
	v->a[260094] = anon_sym_PIPE_PIPE;
	v->a[260095] = anon_sym_AMP_AMP;
	v->a[260096] = anon_sym_PIPE;
	v->a[260097] = anon_sym_AMP;
	v->a[260098] = anon_sym_SEMI_SEMI;
	v->a[260099] = anon_sym_PIPE_AMP;
	small_parse_table_13005(v);
}

/* EOF small_parse_table_2600.c */
