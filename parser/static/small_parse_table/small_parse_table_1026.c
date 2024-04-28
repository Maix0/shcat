/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1026.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5130(t_small_parse_table_array *v)
{
	v->a[102600] = anon_sym_DQUOTE;
	v->a[102601] = actions(1153);
	v->a[102602] = 1;
	v->a[102603] = aux_sym_number_token1;
	v->a[102604] = actions(1155);
	v->a[102605] = 1;
	v->a[102606] = aux_sym_number_token2;
	v->a[102607] = actions(1157);
	v->a[102608] = 1;
	v->a[102609] = anon_sym_DOLLAR_LBRACE;
	v->a[102610] = actions(1159);
	v->a[102611] = 1;
	v->a[102612] = anon_sym_DOLLAR_LPAREN;
	v->a[102613] = actions(1163);
	v->a[102614] = 1;
	v->a[102615] = anon_sym_DOLLAR_BQUOTE;
	v->a[102616] = actions(1169);
	v->a[102617] = 1;
	v->a[102618] = sym__brace_start;
	v->a[102619] = actions(1171);
	small_parse_table_5131(v);
}

void	small_parse_table_5131(t_small_parse_table_array *v)
{
	v->a[102620] = 1;
	v->a[102621] = sym_word;
	v->a[102622] = actions(1173);
	v->a[102623] = 1;
	v->a[102624] = anon_sym_BANG;
	v->a[102625] = actions(1179);
	v->a[102626] = 1;
	v->a[102627] = anon_sym_TILDE;
	v->a[102628] = actions(1181);
	v->a[102629] = 1;
	v->a[102630] = sym__special_character;
	v->a[102631] = actions(1185);
	v->a[102632] = 1;
	v->a[102633] = sym_test_operator;
	v->a[102634] = actions(3060);
	v->a[102635] = 1;
	v->a[102636] = anon_sym_BQUOTE;
	v->a[102637] = state(2484);
	v->a[102638] = 1;
	v->a[102639] = aux_sym__literal_repeat1;
	small_parse_table_5132(v);
}

void	small_parse_table_5132(t_small_parse_table_array *v)
{
	v->a[102640] = state(3046);
	v->a[102641] = 1;
	v->a[102642] = sym__expression;
	v->a[102643] = actions(1129);
	v->a[102644] = 2;
	v->a[102645] = anon_sym_LPAREN_LPAREN;
	v->a[102646] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[102647] = actions(1165);
	v->a[102648] = 2;
	v->a[102649] = anon_sym_LT_LPAREN;
	v->a[102650] = anon_sym_GT_LPAREN;
	v->a[102651] = actions(1175);
	v->a[102652] = 2;
	v->a[102653] = anon_sym_PLUS_PLUS2;
	v->a[102654] = anon_sym_DASH_DASH2;
	v->a[102655] = actions(1177);
	v->a[102656] = 2;
	v->a[102657] = anon_sym_DASH2;
	v->a[102658] = anon_sym_PLUS2;
	v->a[102659] = actions(1183);
	small_parse_table_5133(v);
}

void	small_parse_table_5133(t_small_parse_table_array *v)
{
	v->a[102660] = 2;
	v->a[102661] = sym_raw_string;
	v->a[102662] = sym_ansi_c_string;
	v->a[102663] = state(2594);
	v->a[102664] = 6;
	v->a[102665] = sym_binary_expression;
	v->a[102666] = sym_ternary_expression;
	v->a[102667] = sym_unary_expression;
	v->a[102668] = sym_postfix_expression;
	v->a[102669] = sym_parenthesized_expression;
	v->a[102670] = sym_concatenation;
	v->a[102671] = state(2456);
	v->a[102672] = 9;
	v->a[102673] = sym_arithmetic_expansion;
	v->a[102674] = sym_brace_expression;
	v->a[102675] = sym_string;
	v->a[102676] = sym_translated_string;
	v->a[102677] = sym_number;
	v->a[102678] = sym_simple_expansion;
	v->a[102679] = sym_expansion;
	small_parse_table_5134(v);
}

void	small_parse_table_5134(t_small_parse_table_array *v)
{
	v->a[102680] = sym_command_substitution;
	v->a[102681] = sym_process_substitution;
	v->a[102682] = 26;
	v->a[102683] = actions(71);
	v->a[102684] = 1;
	v->a[102685] = sym_comment;
	v->a[102686] = actions(107);
	v->a[102687] = 1;
	v->a[102688] = anon_sym_TILDE;
	v->a[102689] = actions(237);
	v->a[102690] = 1;
	v->a[102691] = sym_word;
	v->a[102692] = actions(248);
	v->a[102693] = 1;
	v->a[102694] = anon_sym_LPAREN;
	v->a[102695] = actions(250);
	v->a[102696] = 1;
	v->a[102697] = anon_sym_BANG;
	v->a[102698] = actions(258);
	v->a[102699] = 1;
	small_parse_table_5135(v);
}

/* EOF small_parse_table_1026.c */
