/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2106.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10530(t_small_parse_table_array *v)
{
	v->a[210600] = anon_sym_LPAREN_LPAREN;
	v->a[210601] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[210602] = actions(8496);
	v->a[210603] = 2;
	v->a[210604] = anon_sym_LT_LPAREN;
	v->a[210605] = anon_sym_GT_LPAREN;
	v->a[210606] = actions(9976);
	v->a[210607] = 2;
	v->a[210608] = sym_raw_string;
	v->a[210609] = sym_ansi_c_string;
	v->a[210610] = state(1342);
	v->a[210611] = 9;
	v->a[210612] = sym_arithmetic_expansion;
	v->a[210613] = sym_brace_expression;
	v->a[210614] = sym_string;
	v->a[210615] = sym_translated_string;
	v->a[210616] = sym_number;
	v->a[210617] = sym_simple_expansion;
	v->a[210618] = sym_expansion;
	v->a[210619] = sym_command_substitution;
	small_parse_table_10531(v);
}

void	small_parse_table_10531(t_small_parse_table_array *v)
{
	v->a[210620] = sym_process_substitution;
	v->a[210621] = 21;
	v->a[210622] = actions(71);
	v->a[210623] = 1;
	v->a[210624] = sym_comment;
	v->a[210625] = actions(3064);
	v->a[210626] = 1;
	v->a[210627] = sym_variable_name;
	v->a[210628] = actions(9278);
	v->a[210629] = 1;
	v->a[210630] = anon_sym_LPAREN;
	v->a[210631] = actions(9280);
	v->a[210632] = 1;
	v->a[210633] = anon_sym_BANG;
	v->a[210634] = actions(9286);
	v->a[210635] = 1;
	v->a[210636] = anon_sym_TILDE;
	v->a[210637] = actions(9288);
	v->a[210638] = 1;
	v->a[210639] = anon_sym_DOLLAR;
	small_parse_table_10532(v);
}

void	small_parse_table_10532(t_small_parse_table_array *v)
{
	v->a[210640] = actions(9290);
	v->a[210641] = 1;
	v->a[210642] = anon_sym_DQUOTE;
	v->a[210643] = actions(9292);
	v->a[210644] = 1;
	v->a[210645] = aux_sym_number_token1;
	v->a[210646] = actions(9294);
	v->a[210647] = 1;
	v->a[210648] = aux_sym_number_token2;
	v->a[210649] = actions(9296);
	v->a[210650] = 1;
	v->a[210651] = anon_sym_DOLLAR_LBRACE;
	v->a[210652] = actions(9298);
	v->a[210653] = 1;
	v->a[210654] = anon_sym_DOLLAR_LPAREN;
	v->a[210655] = actions(9300);
	v->a[210656] = 1;
	v->a[210657] = anon_sym_BQUOTE;
	v->a[210658] = actions(9302);
	v->a[210659] = 1;
	small_parse_table_10533(v);
}

void	small_parse_table_10533(t_small_parse_table_array *v)
{
	v->a[210660] = anon_sym_DOLLAR_BQUOTE;
	v->a[210661] = actions(9980);
	v->a[210662] = 1;
	v->a[210663] = aux_sym__simple_variable_name_token1;
	v->a[210664] = state(2801);
	v->a[210665] = 1;
	v->a[210666] = sym__arithmetic_binary_expression;
	v->a[210667] = state(2803);
	v->a[210668] = 1;
	v->a[210669] = sym__arithmetic_ternary_expression;
	v->a[210670] = state(2809);
	v->a[210671] = 1;
	v->a[210672] = sym__arithmetic_unary_expression;
	v->a[210673] = state(2825);
	v->a[210674] = 1;
	v->a[210675] = sym__arithmetic_postfix_expression;
	v->a[210676] = actions(9282);
	v->a[210677] = 2;
	v->a[210678] = anon_sym_PLUS_PLUS2;
	v->a[210679] = anon_sym_DASH_DASH2;
	small_parse_table_10534(v);
}

void	small_parse_table_10534(t_small_parse_table_array *v)
{
	v->a[210680] = actions(9284);
	v->a[210681] = 2;
	v->a[210682] = anon_sym_DASH2;
	v->a[210683] = anon_sym_PLUS2;
	v->a[210684] = state(2932);
	v->a[210685] = 9;
	v->a[210686] = sym_subscript;
	v->a[210687] = sym__arithmetic_expression;
	v->a[210688] = sym__arithmetic_literal;
	v->a[210689] = sym__arithmetic_parenthesized_expression;
	v->a[210690] = sym_string;
	v->a[210691] = sym_number;
	v->a[210692] = sym_simple_expansion;
	v->a[210693] = sym_expansion;
	v->a[210694] = sym_command_substitution;
	v->a[210695] = 18;
	v->a[210696] = actions(3);
	v->a[210697] = 1;
	v->a[210698] = sym_comment;
	v->a[210699] = actions(2309);
	small_parse_table_10535(v);
}

/* EOF small_parse_table_2106.c */
