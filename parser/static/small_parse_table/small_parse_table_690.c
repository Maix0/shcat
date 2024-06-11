/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_690.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3450(t_small_parse_table_array *v)
{
	v->a[69000] = anon_sym_PIPE_PIPE;
	v->a[69001] = actions(861);
	v->a[69002] = 2;
	v->a[69003] = anon_sym_LT_LT;
	v->a[69004] = anon_sym_LT_LT_DASH;
	v->a[69005] = actions(2079);
	v->a[69006] = 2;
	v->a[69007] = anon_sym_LT_AMP_DASH;
	v->a[69008] = anon_sym_GT_AMP_DASH;
	v->a[69009] = state(1283);
	v->a[69010] = 3;
	v->a[69011] = sym_file_redirect;
	v->a[69012] = sym_heredoc_redirect;
	v->a[69013] = aux_sym_redirected_statement_repeat1;
	v->a[69014] = actions(2077);
	v->a[69015] = 8;
	v->a[69016] = anon_sym_LT;
	v->a[69017] = anon_sym_GT;
	v->a[69018] = anon_sym_GT_GT;
	v->a[69019] = anon_sym_AMP_GT;
	small_parse_table_3451(v);
}

void	small_parse_table_3451(t_small_parse_table_array *v)
{
	v->a[69020] = anon_sym_AMP_GT_GT;
	v->a[69021] = anon_sym_LT_AMP;
	v->a[69022] = anon_sym_GT_AMP;
	v->a[69023] = anon_sym_GT_PIPE;
	v->a[69024] = 5;
	v->a[69025] = actions(3);
	v->a[69026] = 1;
	v->a[69027] = sym_comment;
	v->a[69028] = actions(2194);
	v->a[69029] = 1;
	v->a[69030] = sym_variable_name;
	v->a[69031] = actions(2124);
	v->a[69032] = 2;
	v->a[69033] = sym_file_descriptor;
	v->a[69034] = aux_sym_heredoc_redirect_token1;
	v->a[69035] = state(1274);
	v->a[69036] = 2;
	v->a[69037] = sym_variable_assignment;
	v->a[69038] = aux_sym_variable_assignments_repeat1;
	v->a[69039] = actions(2122);
	small_parse_table_3452(v);
}

void	small_parse_table_3452(t_small_parse_table_array *v)
{
	v->a[69040] = 19;
	v->a[69041] = anon_sym_esac;
	v->a[69042] = anon_sym_PIPE;
	v->a[69043] = anon_sym_SEMI_SEMI;
	v->a[69044] = anon_sym_AMP_AMP;
	v->a[69045] = anon_sym_PIPE_PIPE;
	v->a[69046] = anon_sym_LT;
	v->a[69047] = anon_sym_GT;
	v->a[69048] = anon_sym_GT_GT;
	v->a[69049] = anon_sym_AMP_GT;
	v->a[69050] = anon_sym_AMP_GT_GT;
	v->a[69051] = anon_sym_LT_AMP;
	v->a[69052] = anon_sym_GT_AMP;
	v->a[69053] = anon_sym_GT_PIPE;
	v->a[69054] = anon_sym_LT_AMP_DASH;
	v->a[69055] = anon_sym_GT_AMP_DASH;
	v->a[69056] = anon_sym_LT_LT;
	v->a[69057] = anon_sym_LT_LT_DASH;
	v->a[69058] = anon_sym_AMP;
	v->a[69059] = anon_sym_SEMI;
	small_parse_table_3453(v);
}

void	small_parse_table_3453(t_small_parse_table_array *v)
{
	v->a[69060] = 12;
	v->a[69061] = actions(3);
	v->a[69062] = 1;
	v->a[69063] = sym_comment;
	v->a[69064] = actions(807);
	v->a[69065] = 1;
	v->a[69066] = anon_sym_PIPE;
	v->a[69067] = actions(2184);
	v->a[69068] = 1;
	v->a[69069] = sym_file_descriptor;
	v->a[69070] = actions(2196);
	v->a[69071] = 1;
	v->a[69072] = aux_sym_heredoc_redirect_token1;
	v->a[69073] = actions(2198);
	v->a[69074] = 1;
	v->a[69075] = anon_sym_AMP;
	v->a[69076] = actions(2200);
	v->a[69077] = 1;
	v->a[69078] = anon_sym_SEMI;
	v->a[69079] = actions(840);
	small_parse_table_3454(v);
}

void	small_parse_table_3454(t_small_parse_table_array *v)
{
	v->a[69080] = 2;
	v->a[69081] = anon_sym_esac;
	v->a[69082] = anon_sym_SEMI_SEMI;
	v->a[69083] = actions(842);
	v->a[69084] = 2;
	v->a[69085] = anon_sym_AMP_AMP;
	v->a[69086] = anon_sym_PIPE_PIPE;
	v->a[69087] = actions(844);
	v->a[69088] = 2;
	v->a[69089] = anon_sym_LT_LT;
	v->a[69090] = anon_sym_LT_LT_DASH;
	v->a[69091] = actions(2180);
	v->a[69092] = 2;
	v->a[69093] = anon_sym_LT_AMP_DASH;
	v->a[69094] = anon_sym_GT_AMP_DASH;
	v->a[69095] = state(1214);
	v->a[69096] = 3;
	v->a[69097] = sym_file_redirect;
	v->a[69098] = sym_heredoc_redirect;
	v->a[69099] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3455(v);
}

/* EOF small_parse_table_690.c */
