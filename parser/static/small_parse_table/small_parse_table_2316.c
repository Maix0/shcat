/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2316.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11580(t_small_parse_table_array *v)
{
	v->a[231600] = sym_process_substitution;
	v->a[231601] = 20;
	v->a[231602] = actions(71);
	v->a[231603] = 1;
	v->a[231604] = sym_comment;
	v->a[231605] = actions(8178);
	v->a[231606] = 1;
	v->a[231607] = anon_sym_DOLLAR_LBRACK;
	v->a[231608] = actions(8180);
	v->a[231609] = 1;
	v->a[231610] = anon_sym_DOLLAR;
	v->a[231611] = actions(8182);
	v->a[231612] = 1;
	v->a[231613] = sym__special_character;
	v->a[231614] = actions(8184);
	v->a[231615] = 1;
	v->a[231616] = anon_sym_DQUOTE;
	v->a[231617] = actions(8188);
	v->a[231618] = 1;
	v->a[231619] = aux_sym_number_token1;
	small_parse_table_11581(v);
}

void	small_parse_table_11581(t_small_parse_table_array *v)
{
	v->a[231620] = actions(8190);
	v->a[231621] = 1;
	v->a[231622] = aux_sym_number_token2;
	v->a[231623] = actions(8192);
	v->a[231624] = 1;
	v->a[231625] = anon_sym_DOLLAR_LBRACE;
	v->a[231626] = actions(8194);
	v->a[231627] = 1;
	v->a[231628] = anon_sym_DOLLAR_LPAREN;
	v->a[231629] = actions(8196);
	v->a[231630] = 1;
	v->a[231631] = anon_sym_BQUOTE;
	v->a[231632] = actions(8198);
	v->a[231633] = 1;
	v->a[231634] = anon_sym_DOLLAR_BQUOTE;
	v->a[231635] = actions(8208);
	v->a[231636] = 1;
	v->a[231637] = sym__brace_start;
	v->a[231638] = actions(10954);
	v->a[231639] = 1;
	small_parse_table_11582(v);
}

void	small_parse_table_11582(t_small_parse_table_array *v)
{
	v->a[231640] = sym_word;
	v->a[231641] = actions(10958);
	v->a[231642] = 1;
	v->a[231643] = sym_test_operator;
	v->a[231644] = state(1738);
	v->a[231645] = 1;
	v->a[231646] = aux_sym__literal_repeat1;
	v->a[231647] = state(1952);
	v->a[231648] = 1;
	v->a[231649] = sym_concatenation;
	v->a[231650] = actions(8174);
	v->a[231651] = 2;
	v->a[231652] = anon_sym_LPAREN_LPAREN;
	v->a[231653] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[231654] = actions(8200);
	v->a[231655] = 2;
	v->a[231656] = anon_sym_LT_LPAREN;
	v->a[231657] = anon_sym_GT_LPAREN;
	v->a[231658] = actions(10956);
	v->a[231659] = 2;
	small_parse_table_11583(v);
}

void	small_parse_table_11583(t_small_parse_table_array *v)
{
	v->a[231660] = sym_raw_string;
	v->a[231661] = sym_ansi_c_string;
	v->a[231662] = state(2325);
	v->a[231663] = 9;
	v->a[231664] = sym_arithmetic_expansion;
	v->a[231665] = sym_brace_expression;
	v->a[231666] = sym_string;
	v->a[231667] = sym_translated_string;
	v->a[231668] = sym_number;
	v->a[231669] = sym_simple_expansion;
	v->a[231670] = sym_expansion;
	v->a[231671] = sym_command_substitution;
	v->a[231672] = sym_process_substitution;
	v->a[231673] = 21;
	v->a[231674] = actions(71);
	v->a[231675] = 1;
	v->a[231676] = sym_comment;
	v->a[231677] = actions(3064);
	v->a[231678] = 1;
	v->a[231679] = sym_variable_name;
	small_parse_table_11584(v);
}

void	small_parse_table_11584(t_small_parse_table_array *v)
{
	v->a[231680] = actions(9278);
	v->a[231681] = 1;
	v->a[231682] = anon_sym_LPAREN;
	v->a[231683] = actions(9280);
	v->a[231684] = 1;
	v->a[231685] = anon_sym_BANG;
	v->a[231686] = actions(9286);
	v->a[231687] = 1;
	v->a[231688] = anon_sym_TILDE;
	v->a[231689] = actions(9288);
	v->a[231690] = 1;
	v->a[231691] = anon_sym_DOLLAR;
	v->a[231692] = actions(9290);
	v->a[231693] = 1;
	v->a[231694] = anon_sym_DQUOTE;
	v->a[231695] = actions(9292);
	v->a[231696] = 1;
	v->a[231697] = aux_sym_number_token1;
	v->a[231698] = actions(9294);
	v->a[231699] = 1;
	small_parse_table_11585(v);
}

/* EOF small_parse_table_2316.c */
