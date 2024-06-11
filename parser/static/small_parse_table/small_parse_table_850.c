/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_850.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4250(t_small_parse_table_array *v)
{
	v->a[85000] = anon_sym_LT;
	v->a[85001] = anon_sym_GT;
	v->a[85002] = anon_sym_AMP_GT;
	v->a[85003] = anon_sym_LT_AMP;
	v->a[85004] = anon_sym_GT_AMP;
	v->a[85005] = anon_sym_LT_LT;
	v->a[85006] = actions(2316);
	v->a[85007] = 9;
	v->a[85008] = sym_file_descriptor;
	v->a[85009] = anon_sym_AMP_AMP;
	v->a[85010] = anon_sym_PIPE_PIPE;
	v->a[85011] = anon_sym_GT_GT;
	v->a[85012] = anon_sym_AMP_GT_GT;
	v->a[85013] = anon_sym_GT_PIPE;
	v->a[85014] = anon_sym_LT_AMP_DASH;
	v->a[85015] = anon_sym_GT_AMP_DASH;
	v->a[85016] = anon_sym_LT_LT_DASH;
	v->a[85017] = 10;
	v->a[85018] = actions(3);
	v->a[85019] = 1;
	small_parse_table_4251(v);
}

void	small_parse_table_4251(t_small_parse_table_array *v)
{
	v->a[85020] = sym_comment;
	v->a[85021] = actions(3200);
	v->a[85022] = 1;
	v->a[85023] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85024] = actions(3204);
	v->a[85025] = 1;
	v->a[85026] = anon_sym_DQUOTE;
	v->a[85027] = actions(3206);
	v->a[85028] = 1;
	v->a[85029] = anon_sym_DOLLAR_LBRACE;
	v->a[85030] = actions(3208);
	v->a[85031] = 1;
	v->a[85032] = anon_sym_DOLLAR_LPAREN;
	v->a[85033] = actions(3210);
	v->a[85034] = 1;
	v->a[85035] = anon_sym_BQUOTE;
	v->a[85036] = actions(3212);
	v->a[85037] = 1;
	v->a[85038] = sym__bare_dollar;
	v->a[85039] = actions(3353);
	small_parse_table_4252(v);
}

void	small_parse_table_4252(t_small_parse_table_array *v)
{
	v->a[85040] = 1;
	v->a[85041] = anon_sym_DOLLAR;
	v->a[85042] = actions(3198);
	v->a[85043] = 5;
	v->a[85044] = aux_sym_concatenation_token1;
	v->a[85045] = sym_raw_string;
	v->a[85046] = sym_number;
	v->a[85047] = sym__comment_word;
	v->a[85048] = sym_word;
	v->a[85049] = state(1001);
	v->a[85050] = 5;
	v->a[85051] = sym_arithmetic_expansion;
	v->a[85052] = sym_string;
	v->a[85053] = sym_simple_expansion;
	v->a[85054] = sym_expansion;
	v->a[85055] = sym_command_substitution;
	v->a[85056] = 10;
	v->a[85057] = actions(3);
	v->a[85058] = 1;
	v->a[85059] = sym_comment;
	small_parse_table_4253(v);
}

void	small_parse_table_4253(t_small_parse_table_array *v)
{
	v->a[85060] = actions(729);
	v->a[85061] = 1;
	v->a[85062] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85063] = actions(731);
	v->a[85064] = 1;
	v->a[85065] = anon_sym_DOLLAR;
	v->a[85066] = actions(733);
	v->a[85067] = 1;
	v->a[85068] = anon_sym_DQUOTE;
	v->a[85069] = actions(735);
	v->a[85070] = 1;
	v->a[85071] = anon_sym_DOLLAR_LBRACE;
	v->a[85072] = actions(737);
	v->a[85073] = 1;
	v->a[85074] = anon_sym_DOLLAR_LPAREN;
	v->a[85075] = actions(739);
	v->a[85076] = 1;
	v->a[85077] = anon_sym_BQUOTE;
	v->a[85078] = actions(3357);
	v->a[85079] = 1;
	small_parse_table_4254(v);
}

void	small_parse_table_4254(t_small_parse_table_array *v)
{
	v->a[85080] = sym__bare_dollar;
	v->a[85081] = actions(3355);
	v->a[85082] = 5;
	v->a[85083] = aux_sym_concatenation_token1;
	v->a[85084] = sym_raw_string;
	v->a[85085] = sym_number;
	v->a[85086] = sym__comment_word;
	v->a[85087] = sym_word;
	v->a[85088] = state(620);
	v->a[85089] = 5;
	v->a[85090] = sym_arithmetic_expansion;
	v->a[85091] = sym_string;
	v->a[85092] = sym_simple_expansion;
	v->a[85093] = sym_expansion;
	v->a[85094] = sym_command_substitution;
	v->a[85095] = 10;
	v->a[85096] = actions(3);
	v->a[85097] = 1;
	v->a[85098] = sym_comment;
	v->a[85099] = actions(3361);
	small_parse_table_4255(v);
}

/* EOF small_parse_table_850.c */
