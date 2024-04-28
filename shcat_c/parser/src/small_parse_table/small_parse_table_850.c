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
	v->a[85000] = anon_sym_PIPE_AMP;
	v->a[85001] = anon_sym_AMP_GT;
	v->a[85002] = anon_sym_AMP_GT_GT;
	v->a[85003] = anon_sym_LT_AMP;
	v->a[85004] = anon_sym_GT_AMP;
	v->a[85005] = anon_sym_GT_PIPE;
	v->a[85006] = anon_sym_LT_AMP_DASH;
	v->a[85007] = anon_sym_GT_AMP_DASH;
	v->a[85008] = anon_sym_LT_LT_DASH;
	v->a[85009] = anon_sym_LT_LT_LT;
	v->a[85010] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85011] = anon_sym_DOLLAR_LBRACK;
	v->a[85012] = aux_sym_concatenation_token1;
	v->a[85013] = anon_sym_DOLLAR;
	v->a[85014] = sym__special_character;
	v->a[85015] = anon_sym_DQUOTE;
	v->a[85016] = sym_raw_string;
	v->a[85017] = sym_ansi_c_string;
	v->a[85018] = aux_sym_number_token1;
	v->a[85019] = aux_sym_number_token2;
	small_parse_table_4251(v);
}

void	small_parse_table_4251(t_small_parse_table_array *v)
{
	v->a[85020] = anon_sym_DOLLAR_LBRACE;
	v->a[85021] = anon_sym_DOLLAR_LPAREN;
	v->a[85022] = anon_sym_BQUOTE;
	v->a[85023] = anon_sym_DOLLAR_BQUOTE;
	v->a[85024] = anon_sym_LT_LPAREN;
	v->a[85025] = anon_sym_GT_LPAREN;
	v->a[85026] = sym_word;
	v->a[85027] = 27;
	v->a[85028] = actions(71);
	v->a[85029] = 1;
	v->a[85030] = sym_comment;
	v->a[85031] = actions(363);
	v->a[85032] = 1;
	v->a[85033] = anon_sym_DOLLAR_LBRACK;
	v->a[85034] = actions(367);
	v->a[85035] = 1;
	v->a[85036] = anon_sym_DOLLAR;
	v->a[85037] = actions(371);
	v->a[85038] = 1;
	v->a[85039] = anon_sym_DQUOTE;
	small_parse_table_4252(v);
}

void	small_parse_table_4252(t_small_parse_table_array *v)
{
	v->a[85040] = actions(375);
	v->a[85041] = 1;
	v->a[85042] = aux_sym_number_token1;
	v->a[85043] = actions(377);
	v->a[85044] = 1;
	v->a[85045] = aux_sym_number_token2;
	v->a[85046] = actions(379);
	v->a[85047] = 1;
	v->a[85048] = anon_sym_DOLLAR_LBRACE;
	v->a[85049] = actions(381);
	v->a[85050] = 1;
	v->a[85051] = anon_sym_DOLLAR_LPAREN;
	v->a[85052] = actions(385);
	v->a[85053] = 1;
	v->a[85054] = anon_sym_DOLLAR_BQUOTE;
	v->a[85055] = actions(391);
	v->a[85056] = 1;
	v->a[85057] = sym__brace_start;
	v->a[85058] = actions(1091);
	v->a[85059] = 1;
	small_parse_table_4253(v);
}

void	small_parse_table_4253(t_small_parse_table_array *v)
{
	v->a[85060] = sym_word;
	v->a[85061] = actions(1093);
	v->a[85062] = 1;
	v->a[85063] = anon_sym_LPAREN;
	v->a[85064] = actions(1095);
	v->a[85065] = 1;
	v->a[85066] = anon_sym_BANG;
	v->a[85067] = actions(1103);
	v->a[85068] = 1;
	v->a[85069] = anon_sym_TILDE;
	v->a[85070] = actions(1113);
	v->a[85071] = 1;
	v->a[85072] = sym_test_operator;
	v->a[85073] = actions(5809);
	v->a[85074] = 1;
	v->a[85075] = anon_sym_BQUOTE;
	v->a[85076] = actions(5916);
	v->a[85077] = 1;
	v->a[85078] = sym__special_character;
	v->a[85079] = actions(5977);
	small_parse_table_4254(v);
}

void	small_parse_table_4254(t_small_parse_table_array *v)
{
	v->a[85080] = 1;
	v->a[85081] = sym__regex_no_space;
	v->a[85082] = state(2472);
	v->a[85083] = 1;
	v->a[85084] = aux_sym__literal_repeat1;
	v->a[85085] = state(2835);
	v->a[85086] = 1;
	v->a[85087] = sym__expression;
	v->a[85088] = actions(352);
	v->a[85089] = 2;
	v->a[85090] = anon_sym_LPAREN_LPAREN;
	v->a[85091] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85092] = actions(387);
	v->a[85093] = 2;
	v->a[85094] = anon_sym_LT_LPAREN;
	v->a[85095] = anon_sym_GT_LPAREN;
	v->a[85096] = actions(1099);
	v->a[85097] = 2;
	v->a[85098] = anon_sym_PLUS_PLUS2;
	v->a[85099] = anon_sym_DASH_DASH2;
	small_parse_table_4255(v);
}

/* EOF small_parse_table_850.c */
