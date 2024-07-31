/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_460.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2300(t_small_parse_table_array *v)
{
	v->a[46000] = anon_sym_BQUOTE;
	v->a[46001] = sym_word;
	v->a[46002] = 6;
	v->a[46003] = actions(3);
	v->a[46004] = 1;
	v->a[46005] = sym_comment;
	v->a[46006] = actions(1625);
	v->a[46007] = 1;
	v->a[46008] = aux_sym_concatenation_token1;
	v->a[46009] = actions(1628);
	v->a[46010] = 1;
	v->a[46011] = sym__concat;
	v->a[46012] = state(828);
	v->a[46013] = 1;
	v->a[46014] = aux_sym_concatenation_repeat1;
	v->a[46015] = actions(1011);
	v->a[46016] = 2;
	v->a[46017] = sym_variable_name;
	v->a[46018] = aux_sym_heredoc_redirect_token1;
	v->a[46019] = actions(1003);
	small_parse_table_2301(v);
}

void	small_parse_table_2301(t_small_parse_table_array *v)
{
	v->a[46020] = 15;
	v->a[46021] = anon_sym_esac;
	v->a[46022] = anon_sym_PIPE;
	v->a[46023] = anon_sym_SEMI_SEMI;
	v->a[46024] = anon_sym_AMP_AMP;
	v->a[46025] = anon_sym_PIPE_PIPE;
	v->a[46026] = anon_sym_LT;
	v->a[46027] = anon_sym_GT;
	v->a[46028] = anon_sym_GT_GT;
	v->a[46029] = anon_sym_LT_AMP;
	v->a[46030] = anon_sym_GT_AMP;
	v->a[46031] = anon_sym_GT_PIPE;
	v->a[46032] = anon_sym_LT_GT;
	v->a[46033] = anon_sym_LT_LT;
	v->a[46034] = anon_sym_LT_LT_DASH;
	v->a[46035] = anon_sym_SEMI;
	v->a[46036] = 6;
	v->a[46037] = actions(3);
	v->a[46038] = 1;
	v->a[46039] = sym_comment;
	small_parse_table_2302(v);
}

void	small_parse_table_2302(t_small_parse_table_array *v)
{
	v->a[46040] = actions(1599);
	v->a[46041] = 1;
	v->a[46042] = aux_sym_concatenation_token1;
	v->a[46043] = actions(1631);
	v->a[46044] = 1;
	v->a[46045] = sym__concat;
	v->a[46046] = state(722);
	v->a[46047] = 1;
	v->a[46048] = aux_sym_concatenation_repeat1;
	v->a[46049] = actions(1001);
	v->a[46050] = 2;
	v->a[46051] = sym_variable_name;
	v->a[46052] = aux_sym_heredoc_redirect_token1;
	v->a[46053] = actions(997);
	v->a[46054] = 15;
	v->a[46055] = anon_sym_PIPE;
	v->a[46056] = anon_sym_RPAREN;
	v->a[46057] = anon_sym_SEMI_SEMI;
	v->a[46058] = anon_sym_AMP_AMP;
	v->a[46059] = anon_sym_PIPE_PIPE;
	small_parse_table_2303(v);
}

void	small_parse_table_2303(t_small_parse_table_array *v)
{
	v->a[46060] = anon_sym_LT;
	v->a[46061] = anon_sym_GT;
	v->a[46062] = anon_sym_GT_GT;
	v->a[46063] = anon_sym_LT_AMP;
	v->a[46064] = anon_sym_GT_AMP;
	v->a[46065] = anon_sym_GT_PIPE;
	v->a[46066] = anon_sym_LT_GT;
	v->a[46067] = anon_sym_LT_LT;
	v->a[46068] = anon_sym_LT_LT_DASH;
	v->a[46069] = anon_sym_SEMI;
	v->a[46070] = 10;
	v->a[46071] = actions(3);
	v->a[46072] = 1;
	v->a[46073] = sym_comment;
	v->a[46074] = actions(746);
	v->a[46075] = 1;
	v->a[46076] = anon_sym_PIPE;
	v->a[46077] = actions(844);
	v->a[46078] = 1;
	v->a[46079] = ts_builtin_sym_end;
	small_parse_table_2304(v);
}

void	small_parse_table_2304(t_small_parse_table_array *v)
{
	v->a[46080] = actions(1605);
	v->a[46081] = 1;
	v->a[46082] = aux_sym_heredoc_redirect_token1;
	v->a[46083] = state(579);
	v->a[46084] = 1;
	v->a[46085] = sym_terminator;
	v->a[46086] = actions(846);
	v->a[46087] = 2;
	v->a[46088] = anon_sym_SEMI_SEMI;
	v->a[46089] = anon_sym_SEMI;
	v->a[46090] = actions(848);
	v->a[46091] = 2;
	v->a[46092] = anon_sym_AMP_AMP;
	v->a[46093] = anon_sym_PIPE_PIPE;
	v->a[46094] = actions(850);
	v->a[46095] = 2;
	v->a[46096] = anon_sym_LT_LT;
	v->a[46097] = anon_sym_LT_LT_DASH;
	v->a[46098] = state(924);
	v->a[46099] = 3;
	small_parse_table_2305(v);
}

/* EOF small_parse_table_460.c */
