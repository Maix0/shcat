/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2840.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14200(t_small_parse_table_array *v)
{
	v->a[284000] = sym_subscript;
	v->a[284001] = state(5385);
	v->a[284002] = 2;
	v->a[284003] = sym_variable_assignment;
	v->a[284004] = aux_sym_variable_assignments_repeat1;
	v->a[284005] = actions(11327);
	v->a[284006] = 7;
	v->a[284007] = anon_sym_PIPE;
	v->a[284008] = anon_sym_LT;
	v->a[284009] = anon_sym_GT;
	v->a[284010] = anon_sym_LT_LT;
	v->a[284011] = anon_sym_AMP_GT;
	v->a[284012] = anon_sym_LT_AMP;
	v->a[284013] = anon_sym_GT_AMP;
	v->a[284014] = actions(11329);
	v->a[284015] = 10;
	v->a[284016] = sym_file_descriptor;
	v->a[284017] = anon_sym_PIPE_PIPE;
	v->a[284018] = anon_sym_AMP_AMP;
	v->a[284019] = anon_sym_GT_GT;
	small_parse_table_14201(v);
}

void	small_parse_table_14201(t_small_parse_table_array *v)
{
	v->a[284020] = anon_sym_PIPE_AMP;
	v->a[284021] = anon_sym_AMP_GT_GT;
	v->a[284022] = anon_sym_GT_PIPE;
	v->a[284023] = anon_sym_LT_AMP_DASH;
	v->a[284024] = anon_sym_GT_AMP_DASH;
	v->a[284025] = anon_sym_LT_LT_DASH;
	v->a[284026] = 12;
	v->a[284027] = actions(71);
	v->a[284028] = 1;
	v->a[284029] = sym_comment;
	v->a[284030] = actions(4253);
	v->a[284031] = 1;
	v->a[284032] = anon_sym_PIPE;
	v->a[284033] = actions(4348);
	v->a[284034] = 1;
	v->a[284035] = anon_sym_PIPE_AMP;
	v->a[284036] = actions(5994);
	v->a[284037] = 1;
	v->a[284038] = anon_sym_LT_LT;
	v->a[284039] = actions(5996);
	small_parse_table_14202(v);
}

void	small_parse_table_14202(t_small_parse_table_array *v)
{
	v->a[284040] = 1;
	v->a[284041] = anon_sym_LT_LT_DASH;
	v->a[284042] = actions(7563);
	v->a[284043] = 1;
	v->a[284044] = anon_sym_RBRACK;
	v->a[284045] = actions(12686);
	v->a[284046] = 1;
	v->a[284047] = sym_file_descriptor;
	v->a[284048] = actions(5992);
	v->a[284049] = 2;
	v->a[284050] = anon_sym_PIPE_PIPE;
	v->a[284051] = anon_sym_AMP_AMP;
	v->a[284052] = actions(12502);
	v->a[284053] = 2;
	v->a[284054] = anon_sym_LT_AMP_DASH;
	v->a[284055] = anon_sym_GT_AMP_DASH;
	v->a[284056] = actions(12500);
	v->a[284057] = 3;
	v->a[284058] = anon_sym_GT_GT;
	v->a[284059] = anon_sym_AMP_GT_GT;
	small_parse_table_14203(v);
}

void	small_parse_table_14203(t_small_parse_table_array *v)
{
	v->a[284060] = anon_sym_GT_PIPE;
	v->a[284061] = state(5350);
	v->a[284062] = 3;
	v->a[284063] = sym_file_redirect;
	v->a[284064] = sym_heredoc_redirect;
	v->a[284065] = aux_sym_redirected_statement_repeat1;
	v->a[284066] = actions(12498);
	v->a[284067] = 5;
	v->a[284068] = anon_sym_LT;
	v->a[284069] = anon_sym_GT;
	v->a[284070] = anon_sym_AMP_GT;
	v->a[284071] = anon_sym_LT_AMP;
	v->a[284072] = anon_sym_GT_AMP;
	v->a[284073] = 9;
	v->a[284074] = actions(71);
	v->a[284075] = 1;
	v->a[284076] = sym_comment;
	v->a[284077] = actions(12757);
	v->a[284078] = 1;
	v->a[284079] = anon_sym_LT_LT_LT;
	small_parse_table_14204(v);
}

void	small_parse_table_14204(t_small_parse_table_array *v)
{
	v->a[284080] = actions(12759);
	v->a[284081] = 1;
	v->a[284082] = sym_file_descriptor;
	v->a[284083] = actions(11357);
	v->a[284084] = 2;
	v->a[284085] = anon_sym_PIPE;
	v->a[284086] = anon_sym_LT_LT;
	v->a[284087] = actions(12755);
	v->a[284088] = 2;
	v->a[284089] = anon_sym_LT_AMP_DASH;
	v->a[284090] = anon_sym_GT_AMP_DASH;
	v->a[284091] = actions(12753);
	v->a[284092] = 3;
	v->a[284093] = anon_sym_GT_GT;
	v->a[284094] = anon_sym_AMP_GT_GT;
	v->a[284095] = anon_sym_GT_PIPE;
	v->a[284096] = state(5363);
	v->a[284097] = 3;
	v->a[284098] = sym_file_redirect;
	v->a[284099] = sym_herestring_redirect;
	small_parse_table_14205(v);
}

/* EOF small_parse_table_2840.c */
