/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_490.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2450(t_small_parse_table_array *v)
{
	v->a[49000] = state(523);
	v->a[49001] = 1;
	v->a[49002] = sym_terminator;
	v->a[49003] = actions(850);
	v->a[49004] = 2;
	v->a[49005] = anon_sym_LT_LT;
	v->a[49006] = anon_sym_LT_LT_DASH;
	v->a[49007] = actions(898);
	v->a[49008] = 2;
	v->a[49009] = anon_sym_AMP_AMP;
	v->a[49010] = anon_sym_PIPE_PIPE;
	v->a[49011] = state(984);
	v->a[49012] = 3;
	v->a[49013] = sym_file_redirect;
	v->a[49014] = sym_heredoc_redirect;
	v->a[49015] = aux_sym_redirected_statement_repeat1;
	v->a[49016] = actions(1676);
	v->a[49017] = 7;
	v->a[49018] = anon_sym_LT;
	v->a[49019] = anon_sym_GT;
	small_parse_table_2451(v);
}

void	small_parse_table_2451(t_small_parse_table_array *v)
{
	v->a[49020] = anon_sym_GT_GT;
	v->a[49021] = anon_sym_LT_AMP;
	v->a[49022] = anon_sym_GT_AMP;
	v->a[49023] = anon_sym_GT_PIPE;
	v->a[49024] = anon_sym_LT_GT;
	v->a[49025] = 10;
	v->a[49026] = actions(3);
	v->a[49027] = 1;
	v->a[49028] = sym_comment;
	v->a[49029] = actions(746);
	v->a[49030] = 1;
	v->a[49031] = anon_sym_PIPE;
	v->a[49032] = actions(842);
	v->a[49033] = 1;
	v->a[49034] = anon_sym_SEMI_SEMI;
	v->a[49035] = actions(858);
	v->a[49036] = 1;
	v->a[49037] = anon_sym_SEMI;
	v->a[49038] = actions(1591);
	v->a[49039] = 1;
	small_parse_table_2452(v);
}

void	small_parse_table_2452(t_small_parse_table_array *v)
{
	v->a[49040] = aux_sym_heredoc_redirect_token1;
	v->a[49041] = state(522);
	v->a[49042] = 1;
	v->a[49043] = sym_terminator;
	v->a[49044] = actions(850);
	v->a[49045] = 2;
	v->a[49046] = anon_sym_LT_LT;
	v->a[49047] = anon_sym_LT_LT_DASH;
	v->a[49048] = actions(898);
	v->a[49049] = 2;
	v->a[49050] = anon_sym_AMP_AMP;
	v->a[49051] = anon_sym_PIPE_PIPE;
	v->a[49052] = state(984);
	v->a[49053] = 3;
	v->a[49054] = sym_file_redirect;
	v->a[49055] = sym_heredoc_redirect;
	v->a[49056] = aux_sym_redirected_statement_repeat1;
	v->a[49057] = actions(1676);
	v->a[49058] = 7;
	v->a[49059] = anon_sym_LT;
	small_parse_table_2453(v);
}

void	small_parse_table_2453(t_small_parse_table_array *v)
{
	v->a[49060] = anon_sym_GT;
	v->a[49061] = anon_sym_GT_GT;
	v->a[49062] = anon_sym_LT_AMP;
	v->a[49063] = anon_sym_GT_AMP;
	v->a[49064] = anon_sym_GT_PIPE;
	v->a[49065] = anon_sym_LT_GT;
	v->a[49066] = 10;
	v->a[49067] = actions(3);
	v->a[49068] = 1;
	v->a[49069] = sym_comment;
	v->a[49070] = actions(746);
	v->a[49071] = 1;
	v->a[49072] = anon_sym_PIPE;
	v->a[49073] = actions(842);
	v->a[49074] = 1;
	v->a[49075] = anon_sym_SEMI_SEMI;
	v->a[49076] = actions(858);
	v->a[49077] = 1;
	v->a[49078] = anon_sym_SEMI;
	v->a[49079] = actions(1591);
	small_parse_table_2454(v);
}

void	small_parse_table_2454(t_small_parse_table_array *v)
{
	v->a[49080] = 1;
	v->a[49081] = aux_sym_heredoc_redirect_token1;
	v->a[49082] = state(521);
	v->a[49083] = 1;
	v->a[49084] = sym_terminator;
	v->a[49085] = actions(850);
	v->a[49086] = 2;
	v->a[49087] = anon_sym_LT_LT;
	v->a[49088] = anon_sym_LT_LT_DASH;
	v->a[49089] = actions(898);
	v->a[49090] = 2;
	v->a[49091] = anon_sym_AMP_AMP;
	v->a[49092] = anon_sym_PIPE_PIPE;
	v->a[49093] = state(984);
	v->a[49094] = 3;
	v->a[49095] = sym_file_redirect;
	v->a[49096] = sym_heredoc_redirect;
	v->a[49097] = aux_sym_redirected_statement_repeat1;
	v->a[49098] = actions(1676);
	v->a[49099] = 7;
	small_parse_table_2455(v);
}

/* EOF small_parse_table_490.c */
