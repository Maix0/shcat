/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1136.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5680(t_small_parse_table_array *v)
{
	v->a[113600] = actions(250);
	v->a[113601] = 1;
	v->a[113602] = anon_sym_BANG;
	v->a[113603] = actions(258);
	v->a[113604] = 1;
	v->a[113605] = anon_sym_DOLLAR;
	v->a[113606] = actions(264);
	v->a[113607] = 1;
	v->a[113608] = aux_sym_number_token1;
	v->a[113609] = actions(266);
	v->a[113610] = 1;
	v->a[113611] = aux_sym_number_token2;
	v->a[113612] = actions(270);
	v->a[113613] = 1;
	v->a[113614] = anon_sym_DOLLAR_LPAREN;
	v->a[113615] = actions(282);
	v->a[113616] = 1;
	v->a[113617] = sym_test_operator;
	v->a[113618] = actions(284);
	v->a[113619] = 1;
	small_parse_table_5681(v);
}

void	small_parse_table_5681(t_small_parse_table_array *v)
{
	v->a[113620] = sym__brace_start;
	v->a[113621] = actions(1075);
	v->a[113622] = 1;
	v->a[113623] = anon_sym_DOLLAR_LBRACK;
	v->a[113624] = actions(1079);
	v->a[113625] = 1;
	v->a[113626] = sym__special_character;
	v->a[113627] = actions(1081);
	v->a[113628] = 1;
	v->a[113629] = anon_sym_DQUOTE;
	v->a[113630] = actions(1085);
	v->a[113631] = 1;
	v->a[113632] = anon_sym_DOLLAR_LBRACE;
	v->a[113633] = actions(1087);
	v->a[113634] = 1;
	v->a[113635] = anon_sym_DOLLAR_BQUOTE;
	v->a[113636] = actions(3598);
	v->a[113637] = 1;
	v->a[113638] = anon_sym_BQUOTE;
	v->a[113639] = state(2690);
	small_parse_table_5682(v);
}

void	small_parse_table_5682(t_small_parse_table_array *v)
{
	v->a[113640] = 1;
	v->a[113641] = aux_sym__literal_repeat1;
	v->a[113642] = state(3126);
	v->a[113643] = 1;
	v->a[113644] = sym__expression;
	v->a[113645] = actions(103);
	v->a[113646] = 2;
	v->a[113647] = anon_sym_PLUS_PLUS2;
	v->a[113648] = anon_sym_DASH_DASH2;
	v->a[113649] = actions(105);
	v->a[113650] = 2;
	v->a[113651] = anon_sym_DASH2;
	v->a[113652] = anon_sym_PLUS2;
	v->a[113653] = actions(1073);
	v->a[113654] = 2;
	v->a[113655] = anon_sym_LPAREN_LPAREN;
	v->a[113656] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[113657] = actions(1083);
	v->a[113658] = 2;
	v->a[113659] = sym_raw_string;
	small_parse_table_5683(v);
}

void	small_parse_table_5683(t_small_parse_table_array *v)
{
	v->a[113660] = sym_ansi_c_string;
	v->a[113661] = actions(1089);
	v->a[113662] = 2;
	v->a[113663] = anon_sym_LT_LPAREN;
	v->a[113664] = anon_sym_GT_LPAREN;
	v->a[113665] = state(3053);
	v->a[113666] = 6;
	v->a[113667] = sym_binary_expression;
	v->a[113668] = sym_ternary_expression;
	v->a[113669] = sym_unary_expression;
	v->a[113670] = sym_postfix_expression;
	v->a[113671] = sym_parenthesized_expression;
	v->a[113672] = sym_concatenation;
	v->a[113673] = state(2500);
	v->a[113674] = 9;
	v->a[113675] = sym_arithmetic_expansion;
	v->a[113676] = sym_brace_expression;
	v->a[113677] = sym_string;
	v->a[113678] = sym_translated_string;
	v->a[113679] = sym_number;
	small_parse_table_5684(v);
}

void	small_parse_table_5684(t_small_parse_table_array *v)
{
	v->a[113680] = sym_simple_expansion;
	v->a[113681] = sym_expansion;
	v->a[113682] = sym_command_substitution;
	v->a[113683] = sym_process_substitution;
	v->a[113684] = 5;
	v->a[113685] = actions(71);
	v->a[113686] = 1;
	v->a[113687] = sym_comment;
	v->a[113688] = state(2152);
	v->a[113689] = 1;
	v->a[113690] = aux_sym_concatenation_repeat1;
	v->a[113691] = actions(6133);
	v->a[113692] = 2;
	v->a[113693] = sym__concat;
	v->a[113694] = aux_sym_concatenation_token1;
	v->a[113695] = actions(4546);
	v->a[113696] = 15;
	v->a[113697] = anon_sym_PIPE;
	v->a[113698] = anon_sym_EQ_EQ;
	v->a[113699] = anon_sym_LT;
	small_parse_table_5685(v);
}

/* EOF small_parse_table_1136.c */
