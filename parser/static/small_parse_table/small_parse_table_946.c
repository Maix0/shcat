/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_946.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4730(t_small_parse_table_array *v)
{
	v->a[94600] = aux_sym__literal_repeat1;
	v->a[94601] = state(2976);
	v->a[94602] = 1;
	v->a[94603] = sym__expression;
	v->a[94604] = actions(1129);
	v->a[94605] = 2;
	v->a[94606] = anon_sym_LPAREN_LPAREN;
	v->a[94607] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[94608] = actions(1135);
	v->a[94609] = 2;
	v->a[94610] = anon_sym_PLUS_PLUS2;
	v->a[94611] = anon_sym_DASH_DASH2;
	v->a[94612] = actions(1137);
	v->a[94613] = 2;
	v->a[94614] = anon_sym_DASH2;
	v->a[94615] = anon_sym_PLUS2;
	v->a[94616] = actions(1151);
	v->a[94617] = 2;
	v->a[94618] = sym_raw_string;
	v->a[94619] = sym_ansi_c_string;
	small_parse_table_4731(v);
}

void	small_parse_table_4731(t_small_parse_table_array *v)
{
	v->a[94620] = actions(1165);
	v->a[94621] = 2;
	v->a[94622] = anon_sym_LT_LPAREN;
	v->a[94623] = anon_sym_GT_LPAREN;
	v->a[94624] = state(2594);
	v->a[94625] = 6;
	v->a[94626] = sym_binary_expression;
	v->a[94627] = sym_ternary_expression;
	v->a[94628] = sym_unary_expression;
	v->a[94629] = sym_postfix_expression;
	v->a[94630] = sym_parenthesized_expression;
	v->a[94631] = sym_concatenation;
	v->a[94632] = state(2573);
	v->a[94633] = 9;
	v->a[94634] = sym_arithmetic_expansion;
	v->a[94635] = sym_brace_expression;
	v->a[94636] = sym_string;
	v->a[94637] = sym_translated_string;
	v->a[94638] = sym_number;
	v->a[94639] = sym_simple_expansion;
	small_parse_table_4732(v);
}

void	small_parse_table_4732(t_small_parse_table_array *v)
{
	v->a[94640] = sym_expansion;
	v->a[94641] = sym_command_substitution;
	v->a[94642] = sym_process_substitution;
	v->a[94643] = 26;
	v->a[94644] = actions(71);
	v->a[94645] = 1;
	v->a[94646] = sym_comment;
	v->a[94647] = actions(1127);
	v->a[94648] = 1;
	v->a[94649] = sym_word;
	v->a[94650] = actions(1131);
	v->a[94651] = 1;
	v->a[94652] = anon_sym_LPAREN;
	v->a[94653] = actions(1133);
	v->a[94654] = 1;
	v->a[94655] = anon_sym_BANG;
	v->a[94656] = actions(1139);
	v->a[94657] = 1;
	v->a[94658] = anon_sym_TILDE;
	v->a[94659] = actions(1141);
	small_parse_table_4733(v);
}

void	small_parse_table_4733(t_small_parse_table_array *v)
{
	v->a[94660] = 1;
	v->a[94661] = anon_sym_DOLLAR_LBRACK;
	v->a[94662] = actions(1145);
	v->a[94663] = 1;
	v->a[94664] = anon_sym_DOLLAR;
	v->a[94665] = actions(1147);
	v->a[94666] = 1;
	v->a[94667] = sym__special_character;
	v->a[94668] = actions(1149);
	v->a[94669] = 1;
	v->a[94670] = anon_sym_DQUOTE;
	v->a[94671] = actions(1153);
	v->a[94672] = 1;
	v->a[94673] = aux_sym_number_token1;
	v->a[94674] = actions(1155);
	v->a[94675] = 1;
	v->a[94676] = aux_sym_number_token2;
	v->a[94677] = actions(1157);
	v->a[94678] = 1;
	v->a[94679] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4734(v);
}

void	small_parse_table_4734(t_small_parse_table_array *v)
{
	v->a[94680] = actions(1159);
	v->a[94681] = 1;
	v->a[94682] = anon_sym_DOLLAR_LPAREN;
	v->a[94683] = actions(1163);
	v->a[94684] = 1;
	v->a[94685] = anon_sym_DOLLAR_BQUOTE;
	v->a[94686] = actions(1167);
	v->a[94687] = 1;
	v->a[94688] = sym_test_operator;
	v->a[94689] = actions(1169);
	v->a[94690] = 1;
	v->a[94691] = sym__brace_start;
	v->a[94692] = actions(3060);
	v->a[94693] = 1;
	v->a[94694] = anon_sym_BQUOTE;
	v->a[94695] = state(2484);
	v->a[94696] = 1;
	v->a[94697] = aux_sym__literal_repeat1;
	v->a[94698] = state(2975);
	v->a[94699] = 1;
	small_parse_table_4735(v);
}

/* EOF small_parse_table_946.c */
