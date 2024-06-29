/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_650.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3250(t_small_parse_table_array *v)
{
	v->a[65000] = 3;
	v->a[65001] = actions(3);
	v->a[65002] = 1;
	v->a[65003] = sym_comment;
	v->a[65004] = actions(1094);
	v->a[65005] = 4;
	v->a[65006] = sym_file_descriptor;
	v->a[65007] = sym_variable_name;
	v->a[65008] = ts_builtin_sym_end;
	v->a[65009] = aux_sym_heredoc_redirect_token1;
	v->a[65010] = actions(1090);
	v->a[65011] = 20;
	v->a[65012] = anon_sym_PIPE;
	v->a[65013] = anon_sym_RPAREN;
	v->a[65014] = anon_sym_SEMI_SEMI;
	v->a[65015] = anon_sym_AMP_AMP;
	v->a[65016] = anon_sym_PIPE_PIPE;
	v->a[65017] = anon_sym_LT;
	v->a[65018] = anon_sym_GT;
	v->a[65019] = anon_sym_GT_GT;
	small_parse_table_3251(v);
}

void	small_parse_table_3251(t_small_parse_table_array *v)
{
	v->a[65020] = anon_sym_AMP_GT;
	v->a[65021] = anon_sym_AMP_GT_GT;
	v->a[65022] = anon_sym_LT_AMP;
	v->a[65023] = anon_sym_GT_AMP;
	v->a[65024] = anon_sym_GT_PIPE;
	v->a[65025] = anon_sym_LT_AMP_DASH;
	v->a[65026] = anon_sym_GT_AMP_DASH;
	v->a[65027] = anon_sym_LT_LT;
	v->a[65028] = anon_sym_LT_LT_DASH;
	v->a[65029] = anon_sym_AMP;
	v->a[65030] = anon_sym_BQUOTE;
	v->a[65031] = anon_sym_SEMI;
	v->a[65032] = 12;
	v->a[65033] = actions(3);
	v->a[65034] = 1;
	v->a[65035] = sym_comment;
	v->a[65036] = actions(764);
	v->a[65037] = 1;
	v->a[65038] = anon_sym_SEMI_SEMI;
	v->a[65039] = actions(766);
	small_parse_table_3252(v);
}

void	small_parse_table_3252(t_small_parse_table_array *v)
{
	v->a[65040] = 1;
	v->a[65041] = anon_sym_PIPE;
	v->a[65042] = actions(2031);
	v->a[65043] = 1;
	v->a[65044] = aux_sym_heredoc_redirect_token1;
	v->a[65045] = actions(2066);
	v->a[65046] = 1;
	v->a[65047] = sym_file_descriptor;
	v->a[65048] = state(674);
	v->a[65049] = 1;
	v->a[65050] = sym_terminator;
	v->a[65051] = actions(800);
	v->a[65052] = 2;
	v->a[65053] = anon_sym_AMP;
	v->a[65054] = anon_sym_SEMI;
	v->a[65055] = actions(804);
	v->a[65056] = 2;
	v->a[65057] = anon_sym_LT_LT;
	v->a[65058] = anon_sym_LT_LT_DASH;
	v->a[65059] = actions(893);
	small_parse_table_3253(v);
}

void	small_parse_table_3253(t_small_parse_table_array *v)
{
	v->a[65060] = 2;
	v->a[65061] = anon_sym_AMP_AMP;
	v->a[65062] = anon_sym_PIPE_PIPE;
	v->a[65063] = actions(2064);
	v->a[65064] = 2;
	v->a[65065] = anon_sym_LT_AMP_DASH;
	v->a[65066] = anon_sym_GT_AMP_DASH;
	v->a[65067] = state(1256);
	v->a[65068] = 3;
	v->a[65069] = sym_file_redirect;
	v->a[65070] = sym_heredoc_redirect;
	v->a[65071] = aux_sym_redirected_statement_repeat1;
	v->a[65072] = actions(2062);
	v->a[65073] = 8;
	v->a[65074] = anon_sym_LT;
	v->a[65075] = anon_sym_GT;
	v->a[65076] = anon_sym_GT_GT;
	v->a[65077] = anon_sym_AMP_GT;
	v->a[65078] = anon_sym_AMP_GT_GT;
	v->a[65079] = anon_sym_LT_AMP;
	small_parse_table_3254(v);
}

void	small_parse_table_3254(t_small_parse_table_array *v)
{
	v->a[65080] = anon_sym_GT_AMP;
	v->a[65081] = anon_sym_GT_PIPE;
	v->a[65082] = 3;
	v->a[65083] = actions(3);
	v->a[65084] = 1;
	v->a[65085] = sym_comment;
	v->a[65086] = actions(1118);
	v->a[65087] = 4;
	v->a[65088] = sym_file_descriptor;
	v->a[65089] = sym__concat;
	v->a[65090] = sym_variable_name;
	v->a[65091] = aux_sym_heredoc_redirect_token1;
	v->a[65092] = actions(1116);
	v->a[65093] = 20;
	v->a[65094] = anon_sym_esac;
	v->a[65095] = anon_sym_PIPE;
	v->a[65096] = anon_sym_SEMI_SEMI;
	v->a[65097] = anon_sym_AMP_AMP;
	v->a[65098] = anon_sym_PIPE_PIPE;
	v->a[65099] = anon_sym_LT;
	small_parse_table_3255(v);
}

/* EOF small_parse_table_650.c */
