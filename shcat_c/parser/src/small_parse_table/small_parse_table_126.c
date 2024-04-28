/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_126.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_630(t_small_parse_table_array *v)
{
	v->a[12600] = actions(1181);
	v->a[12601] = 1;
	v->a[12602] = sym__special_character;
	v->a[12603] = actions(1185);
	v->a[12604] = 1;
	v->a[12605] = sym_test_operator;
	v->a[12606] = actions(3050);
	v->a[12607] = 1;
	v->a[12608] = anon_sym_LPAREN;
	v->a[12609] = actions(3052);
	v->a[12610] = 1;
	v->a[12611] = anon_sym_BANG;
	v->a[12612] = actions(3058);
	v->a[12613] = 1;
	v->a[12614] = anon_sym_TILDE;
	v->a[12615] = actions(3060);
	v->a[12616] = 1;
	v->a[12617] = anon_sym_BQUOTE;
	v->a[12618] = actions(3062);
	v->a[12619] = 1;
	small_parse_table_631(v);
}

void	small_parse_table_631(t_small_parse_table_array *v)
{
	v->a[12620] = aux_sym__simple_variable_name_token1;
	v->a[12621] = actions(3064);
	v->a[12622] = 1;
	v->a[12623] = sym_variable_name;
	v->a[12624] = state(2387);
	v->a[12625] = 1;
	v->a[12626] = sym_command_substitution;
	v->a[12627] = state(2484);
	v->a[12628] = 1;
	v->a[12629] = aux_sym__literal_repeat1;
	v->a[12630] = state(2801);
	v->a[12631] = 1;
	v->a[12632] = sym__arithmetic_binary_expression;
	v->a[12633] = state(2803);
	v->a[12634] = 1;
	v->a[12635] = sym__arithmetic_ternary_expression;
	v->a[12636] = state(2809);
	v->a[12637] = 1;
	v->a[12638] = sym__arithmetic_unary_expression;
	v->a[12639] = state(2825);
	small_parse_table_632(v);
}

void	small_parse_table_632(t_small_parse_table_array *v)
{
	v->a[12640] = 1;
	v->a[12641] = sym__arithmetic_postfix_expression;
	v->a[12642] = state(3158);
	v->a[12643] = 1;
	v->a[12644] = sym__expression;
	v->a[12645] = actions(1129);
	v->a[12646] = 2;
	v->a[12647] = anon_sym_LPAREN_LPAREN;
	v->a[12648] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12649] = actions(1165);
	v->a[12650] = 2;
	v->a[12651] = anon_sym_LT_LPAREN;
	v->a[12652] = anon_sym_GT_LPAREN;
	v->a[12653] = actions(1183);
	v->a[12654] = 2;
	v->a[12655] = sym_raw_string;
	v->a[12656] = sym_ansi_c_string;
	v->a[12657] = actions(3054);
	v->a[12658] = 2;
	v->a[12659] = anon_sym_PLUS_PLUS2;
	small_parse_table_633(v);
}

void	small_parse_table_633(t_small_parse_table_array *v)
{
	v->a[12660] = anon_sym_DASH_DASH2;
	v->a[12661] = actions(3056);
	v->a[12662] = 2;
	v->a[12663] = anon_sym_DASH2;
	v->a[12664] = anon_sym_PLUS2;
	v->a[12665] = state(2397);
	v->a[12666] = 4;
	v->a[12667] = sym_string;
	v->a[12668] = sym_number;
	v->a[12669] = sym_simple_expansion;
	v->a[12670] = sym_expansion;
	v->a[12671] = state(2456);
	v->a[12672] = 4;
	v->a[12673] = sym_arithmetic_expansion;
	v->a[12674] = sym_brace_expression;
	v->a[12675] = sym_translated_string;
	v->a[12676] = sym_process_substitution;
	v->a[12677] = state(2836);
	v->a[12678] = 4;
	v->a[12679] = sym_subscript;
	small_parse_table_634(v);
}

void	small_parse_table_634(t_small_parse_table_array *v)
{
	v->a[12680] = sym__arithmetic_expression;
	v->a[12681] = sym__arithmetic_literal;
	v->a[12682] = sym__arithmetic_parenthesized_expression;
	v->a[12683] = state(2594);
	v->a[12684] = 6;
	v->a[12685] = sym_binary_expression;
	v->a[12686] = sym_ternary_expression;
	v->a[12687] = sym_unary_expression;
	v->a[12688] = sym_postfix_expression;
	v->a[12689] = sym_parenthesized_expression;
	v->a[12690] = sym_concatenation;
	v->a[12691] = 21;
	v->a[12692] = actions(3);
	v->a[12693] = 1;
	v->a[12694] = sym_comment;
	v->a[12695] = actions(3072);
	v->a[12696] = 1;
	v->a[12697] = anon_sym_DOLLAR_LBRACK;
	v->a[12698] = actions(3075);
	v->a[12699] = 1;
	small_parse_table_635(v);
}

/* EOF small_parse_table_126.c */
