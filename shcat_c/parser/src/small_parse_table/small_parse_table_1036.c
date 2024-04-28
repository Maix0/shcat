/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1036.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5180(t_small_parse_table_array *v)
{
	v->a[103600] = sym_translated_string;
	v->a[103601] = sym_number;
	v->a[103602] = sym_simple_expansion;
	v->a[103603] = sym_expansion;
	v->a[103604] = sym_command_substitution;
	v->a[103605] = sym_process_substitution;
	v->a[103606] = 26;
	v->a[103607] = actions(71);
	v->a[103608] = 1;
	v->a[103609] = sym_comment;
	v->a[103610] = actions(1131);
	v->a[103611] = 1;
	v->a[103612] = anon_sym_LPAREN;
	v->a[103613] = actions(1141);
	v->a[103614] = 1;
	v->a[103615] = anon_sym_DOLLAR_LBRACK;
	v->a[103616] = actions(1145);
	v->a[103617] = 1;
	v->a[103618] = anon_sym_DOLLAR;
	v->a[103619] = actions(1149);
	small_parse_table_5181(v);
}

void	small_parse_table_5181(t_small_parse_table_array *v)
{
	v->a[103620] = 1;
	v->a[103621] = anon_sym_DQUOTE;
	v->a[103622] = actions(1153);
	v->a[103623] = 1;
	v->a[103624] = aux_sym_number_token1;
	v->a[103625] = actions(1155);
	v->a[103626] = 1;
	v->a[103627] = aux_sym_number_token2;
	v->a[103628] = actions(1157);
	v->a[103629] = 1;
	v->a[103630] = anon_sym_DOLLAR_LBRACE;
	v->a[103631] = actions(1159);
	v->a[103632] = 1;
	v->a[103633] = anon_sym_DOLLAR_LPAREN;
	v->a[103634] = actions(1163);
	v->a[103635] = 1;
	v->a[103636] = anon_sym_DOLLAR_BQUOTE;
	v->a[103637] = actions(1169);
	v->a[103638] = 1;
	v->a[103639] = sym__brace_start;
	small_parse_table_5182(v);
}

void	small_parse_table_5182(t_small_parse_table_array *v)
{
	v->a[103640] = actions(1171);
	v->a[103641] = 1;
	v->a[103642] = sym_word;
	v->a[103643] = actions(1173);
	v->a[103644] = 1;
	v->a[103645] = anon_sym_BANG;
	v->a[103646] = actions(1179);
	v->a[103647] = 1;
	v->a[103648] = anon_sym_TILDE;
	v->a[103649] = actions(1181);
	v->a[103650] = 1;
	v->a[103651] = sym__special_character;
	v->a[103652] = actions(1185);
	v->a[103653] = 1;
	v->a[103654] = sym_test_operator;
	v->a[103655] = actions(3060);
	v->a[103656] = 1;
	v->a[103657] = anon_sym_BQUOTE;
	v->a[103658] = state(2484);
	v->a[103659] = 1;
	small_parse_table_5183(v);
}

void	small_parse_table_5183(t_small_parse_table_array *v)
{
	v->a[103660] = aux_sym__literal_repeat1;
	v->a[103661] = state(3067);
	v->a[103662] = 1;
	v->a[103663] = sym__expression;
	v->a[103664] = actions(1129);
	v->a[103665] = 2;
	v->a[103666] = anon_sym_LPAREN_LPAREN;
	v->a[103667] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[103668] = actions(1165);
	v->a[103669] = 2;
	v->a[103670] = anon_sym_LT_LPAREN;
	v->a[103671] = anon_sym_GT_LPAREN;
	v->a[103672] = actions(1175);
	v->a[103673] = 2;
	v->a[103674] = anon_sym_PLUS_PLUS2;
	v->a[103675] = anon_sym_DASH_DASH2;
	v->a[103676] = actions(1177);
	v->a[103677] = 2;
	v->a[103678] = anon_sym_DASH2;
	v->a[103679] = anon_sym_PLUS2;
	small_parse_table_5184(v);
}

void	small_parse_table_5184(t_small_parse_table_array *v)
{
	v->a[103680] = actions(1183);
	v->a[103681] = 2;
	v->a[103682] = sym_raw_string;
	v->a[103683] = sym_ansi_c_string;
	v->a[103684] = state(2594);
	v->a[103685] = 6;
	v->a[103686] = sym_binary_expression;
	v->a[103687] = sym_ternary_expression;
	v->a[103688] = sym_unary_expression;
	v->a[103689] = sym_postfix_expression;
	v->a[103690] = sym_parenthesized_expression;
	v->a[103691] = sym_concatenation;
	v->a[103692] = state(2456);
	v->a[103693] = 9;
	v->a[103694] = sym_arithmetic_expansion;
	v->a[103695] = sym_brace_expression;
	v->a[103696] = sym_string;
	v->a[103697] = sym_translated_string;
	v->a[103698] = sym_number;
	v->a[103699] = sym_simple_expansion;
	small_parse_table_5185(v);
}

/* EOF small_parse_table_1036.c */
