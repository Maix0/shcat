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
	v->a[85005] = anon_sym_DOLLAR;
	v->a[85006] = aux_sym_number_token1;
	v->a[85007] = aux_sym_number_token2;
	v->a[85008] = anon_sym_DOLLAR_LPAREN;
	v->a[85009] = anon_sym_BQUOTE;
	v->a[85010] = sym_word;
	v->a[85011] = actions(2654);
	v->a[85012] = 15;
	v->a[85013] = sym_file_descriptor;
	v->a[85014] = sym_variable_name;
	v->a[85015] = sym_test_operator;
	v->a[85016] = sym__brace_start;
	v->a[85017] = anon_sym_GT_GT;
	v->a[85018] = anon_sym_AMP_GT_GT;
	v->a[85019] = anon_sym_GT_PIPE;
	small_parse_table_4251(v);
}

void	small_parse_table_4251(t_small_parse_table_array *v)
{
	v->a[85020] = anon_sym_LT_AMP_DASH;
	v->a[85021] = anon_sym_GT_AMP_DASH;
	v->a[85022] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85023] = sym__special_character;
	v->a[85024] = anon_sym_DQUOTE;
	v->a[85025] = sym_raw_string;
	v->a[85026] = anon_sym_DOLLAR_LBRACE;
	v->a[85027] = anon_sym_DOLLAR_BQUOTE;
	v->a[85028] = 21;
	v->a[85029] = actions(57);
	v->a[85030] = 1;
	v->a[85031] = sym_comment;
	v->a[85032] = actions(4584);
	v->a[85033] = 1;
	v->a[85034] = anon_sym_LPAREN;
	v->a[85035] = actions(4586);
	v->a[85036] = 1;
	v->a[85037] = anon_sym_BANG;
	v->a[85038] = actions(4592);
	v->a[85039] = 1;
	small_parse_table_4252(v);
}

void	small_parse_table_4252(t_small_parse_table_array *v)
{
	v->a[85040] = anon_sym_TILDE;
	v->a[85041] = actions(4594);
	v->a[85042] = 1;
	v->a[85043] = anon_sym_DOLLAR;
	v->a[85044] = actions(4596);
	v->a[85045] = 1;
	v->a[85046] = anon_sym_DQUOTE;
	v->a[85047] = actions(4598);
	v->a[85048] = 1;
	v->a[85049] = aux_sym_number_token1;
	v->a[85050] = actions(4600);
	v->a[85051] = 1;
	v->a[85052] = aux_sym_number_token2;
	v->a[85053] = actions(4602);
	v->a[85054] = 1;
	v->a[85055] = anon_sym_DOLLAR_LBRACE;
	v->a[85056] = actions(4604);
	v->a[85057] = 1;
	v->a[85058] = anon_sym_DOLLAR_LPAREN;
	v->a[85059] = actions(4606);
	small_parse_table_4253(v);
}

void	small_parse_table_4253(t_small_parse_table_array *v)
{
	v->a[85060] = 1;
	v->a[85061] = anon_sym_BQUOTE;
	v->a[85062] = actions(4608);
	v->a[85063] = 1;
	v->a[85064] = anon_sym_DOLLAR_BQUOTE;
	v->a[85065] = actions(4732);
	v->a[85066] = 1;
	v->a[85067] = aux_sym__simple_variable_name_token1;
	v->a[85068] = actions(4734);
	v->a[85069] = 1;
	v->a[85070] = sym_variable_name;
	v->a[85071] = state(1476);
	v->a[85072] = 1;
	v->a[85073] = sym__arithmetic_postfix_expression;
	v->a[85074] = state(1478);
	v->a[85075] = 1;
	v->a[85076] = sym__arithmetic_unary_expression;
	v->a[85077] = state(1490);
	v->a[85078] = 1;
	v->a[85079] = sym__arithmetic_ternary_expression;
	small_parse_table_4254(v);
}

void	small_parse_table_4254(t_small_parse_table_array *v)
{
	v->a[85080] = state(1511);
	v->a[85081] = 1;
	v->a[85082] = sym__arithmetic_binary_expression;
	v->a[85083] = actions(4588);
	v->a[85084] = 2;
	v->a[85085] = anon_sym_PLUS_PLUS;
	v->a[85086] = anon_sym_DASH_DASH;
	v->a[85087] = actions(4590);
	v->a[85088] = 2;
	v->a[85089] = anon_sym_DASH2;
	v->a[85090] = anon_sym_PLUS2;
	v->a[85091] = state(1396);
	v->a[85092] = 8;
	v->a[85093] = sym__arithmetic_expression;
	v->a[85094] = sym__arithmetic_literal;
	v->a[85095] = sym__arithmetic_parenthesized_expression;
	v->a[85096] = sym_string;
	v->a[85097] = sym_number;
	v->a[85098] = sym_simple_expansion;
	v->a[85099] = sym_expansion;
	small_parse_table_4255(v);
}

/* EOF small_parse_table_850.c */
