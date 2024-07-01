/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_810.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4050(t_small_parse_table_array *v)
{
	v->a[81000] = anon_sym_LT;
	v->a[81001] = anon_sym_GT;
	v->a[81002] = anon_sym_GT_GT;
	v->a[81003] = anon_sym_LT_AMP;
	v->a[81004] = anon_sym_GT_AMP;
	v->a[81005] = anon_sym_GT_PIPE;
	v->a[81006] = 6;
	v->a[81007] = actions(3);
	v->a[81008] = 1;
	v->a[81009] = sym_comment;
	v->a[81010] = actions(3148);
	v->a[81011] = 1;
	v->a[81012] = anon_sym_PERCENT;
	v->a[81013] = actions(3164);
	v->a[81014] = 1;
	v->a[81015] = anon_sym_RBRACE;
	v->a[81016] = state(2307);
	v->a[81017] = 2;
	v->a[81018] = sym_expansion_expression;
	v->a[81019] = sym_expansion_regex;
	small_parse_table_4051(v);
}

void	small_parse_table_4051(t_small_parse_table_array *v)
{
	v->a[81020] = actions(3150);
	v->a[81021] = 3;
	v->a[81022] = sym__immediate_double_hash;
	v->a[81023] = anon_sym_POUND;
	v->a[81024] = anon_sym_PERCENT_PERCENT;
	v->a[81025] = actions(3152);
	v->a[81026] = 8;
	v->a[81027] = anon_sym_COLON_DASH;
	v->a[81028] = anon_sym_DASH3;
	v->a[81029] = anon_sym_COLON_EQ;
	v->a[81030] = anon_sym_EQ2;
	v->a[81031] = anon_sym_COLON_QMARK;
	v->a[81032] = anon_sym_QMARK2;
	v->a[81033] = anon_sym_COLON_PLUS;
	v->a[81034] = anon_sym_PLUS3;
	v->a[81035] = 3;
	v->a[81036] = actions(870);
	v->a[81037] = 1;
	v->a[81038] = sym_comment;
	v->a[81039] = actions(1234);
	small_parse_table_4052(v);
}

void	small_parse_table_4052(t_small_parse_table_array *v)
{
	v->a[81040] = 6;
	v->a[81041] = anon_sym_PIPE;
	v->a[81042] = anon_sym_LT;
	v->a[81043] = anon_sym_GT;
	v->a[81044] = anon_sym_LT_AMP;
	v->a[81045] = anon_sym_GT_AMP;
	v->a[81046] = anon_sym_LT_LT;
	v->a[81047] = actions(1238);
	v->a[81048] = 9;
	v->a[81049] = sym_file_descriptor;
	v->a[81050] = sym_variable_name;
	v->a[81051] = anon_sym_AMP_AMP;
	v->a[81052] = anon_sym_PIPE_PIPE;
	v->a[81053] = anon_sym_GT_GT;
	v->a[81054] = anon_sym_GT_PIPE;
	v->a[81055] = anon_sym_LT_AMP_DASH;
	v->a[81056] = anon_sym_GT_AMP_DASH;
	v->a[81057] = anon_sym_LT_LT_DASH;
	v->a[81058] = 8;
	v->a[81059] = actions(3);
	small_parse_table_4053(v);
}

void	small_parse_table_4053(t_small_parse_table_array *v)
{
	v->a[81060] = 1;
	v->a[81061] = sym_comment;
	v->a[81062] = actions(906);
	v->a[81063] = 1;
	v->a[81064] = sym_file_descriptor;
	v->a[81065] = actions(3166);
	v->a[81066] = 1;
	v->a[81067] = aux_sym_heredoc_redirect_token1;
	v->a[81068] = state(2141);
	v->a[81069] = 1;
	v->a[81070] = sym__heredoc_expression;
	v->a[81071] = actions(886);
	v->a[81072] = 2;
	v->a[81073] = anon_sym_AMP_AMP;
	v->a[81074] = anon_sym_PIPE_PIPE;
	v->a[81075] = actions(890);
	v->a[81076] = 2;
	v->a[81077] = anon_sym_LT_AMP_DASH;
	v->a[81078] = anon_sym_GT_AMP_DASH;
	v->a[81079] = state(1670);
	small_parse_table_4054(v);
}

void	small_parse_table_4054(t_small_parse_table_array *v)
{
	v->a[81080] = 2;
	v->a[81081] = sym_file_redirect;
	v->a[81082] = aux_sym_redirected_statement_repeat2;
	v->a[81083] = actions(888);
	v->a[81084] = 6;
	v->a[81085] = anon_sym_LT;
	v->a[81086] = anon_sym_GT;
	v->a[81087] = anon_sym_GT_GT;
	v->a[81088] = anon_sym_LT_AMP;
	v->a[81089] = anon_sym_GT_AMP;
	v->a[81090] = anon_sym_GT_PIPE;
	v->a[81091] = 3;
	v->a[81092] = actions(3);
	v->a[81093] = 1;
	v->a[81094] = sym_comment;
	v->a[81095] = actions(1041);
	v->a[81096] = 1;
	v->a[81097] = sym__concat;
	v->a[81098] = actions(1039);
	v->a[81099] = 14;
	small_parse_table_4055(v);
}

/* EOF small_parse_table_810.c */
