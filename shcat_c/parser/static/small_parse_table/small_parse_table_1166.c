/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1166.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5830(t_small_parse_table_array *v)
{
	v->a[116600] = actions(284);
	v->a[116601] = 1;
	v->a[116602] = sym__brace_start;
	v->a[116603] = actions(1075);
	v->a[116604] = 1;
	v->a[116605] = anon_sym_DOLLAR_LBRACK;
	v->a[116606] = actions(1079);
	v->a[116607] = 1;
	v->a[116608] = sym__special_character;
	v->a[116609] = actions(1081);
	v->a[116610] = 1;
	v->a[116611] = anon_sym_DQUOTE;
	v->a[116612] = actions(1085);
	v->a[116613] = 1;
	v->a[116614] = anon_sym_DOLLAR_LBRACE;
	v->a[116615] = actions(1087);
	v->a[116616] = 1;
	v->a[116617] = anon_sym_DOLLAR_BQUOTE;
	v->a[116618] = actions(3598);
	v->a[116619] = 1;
	small_parse_table_5831(v);
}

void	small_parse_table_5831(t_small_parse_table_array *v)
{
	v->a[116620] = anon_sym_BQUOTE;
	v->a[116621] = state(2690);
	v->a[116622] = 1;
	v->a[116623] = aux_sym__literal_repeat1;
	v->a[116624] = state(3081);
	v->a[116625] = 1;
	v->a[116626] = sym__expression;
	v->a[116627] = actions(103);
	v->a[116628] = 2;
	v->a[116629] = anon_sym_PLUS_PLUS2;
	v->a[116630] = anon_sym_DASH_DASH2;
	v->a[116631] = actions(105);
	v->a[116632] = 2;
	v->a[116633] = anon_sym_DASH2;
	v->a[116634] = anon_sym_PLUS2;
	v->a[116635] = actions(1073);
	v->a[116636] = 2;
	v->a[116637] = anon_sym_LPAREN_LPAREN;
	v->a[116638] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116639] = actions(1083);
	small_parse_table_5832(v);
}

void	small_parse_table_5832(t_small_parse_table_array *v)
{
	v->a[116640] = 2;
	v->a[116641] = sym_raw_string;
	v->a[116642] = sym_ansi_c_string;
	v->a[116643] = actions(1089);
	v->a[116644] = 2;
	v->a[116645] = anon_sym_LT_LPAREN;
	v->a[116646] = anon_sym_GT_LPAREN;
	v->a[116647] = state(3053);
	v->a[116648] = 6;
	v->a[116649] = sym_binary_expression;
	v->a[116650] = sym_ternary_expression;
	v->a[116651] = sym_unary_expression;
	v->a[116652] = sym_postfix_expression;
	v->a[116653] = sym_parenthesized_expression;
	v->a[116654] = sym_concatenation;
	v->a[116655] = state(2500);
	v->a[116656] = 9;
	v->a[116657] = sym_arithmetic_expansion;
	v->a[116658] = sym_brace_expression;
	v->a[116659] = sym_string;
	small_parse_table_5833(v);
}

void	small_parse_table_5833(t_small_parse_table_array *v)
{
	v->a[116660] = sym_translated_string;
	v->a[116661] = sym_number;
	v->a[116662] = sym_simple_expansion;
	v->a[116663] = sym_expansion;
	v->a[116664] = sym_command_substitution;
	v->a[116665] = sym_process_substitution;
	v->a[116666] = 26;
	v->a[116667] = actions(71);
	v->a[116668] = 1;
	v->a[116669] = sym_comment;
	v->a[116670] = actions(107);
	v->a[116671] = 1;
	v->a[116672] = anon_sym_TILDE;
	v->a[116673] = actions(237);
	v->a[116674] = 1;
	v->a[116675] = sym_word;
	v->a[116676] = actions(248);
	v->a[116677] = 1;
	v->a[116678] = anon_sym_LPAREN;
	v->a[116679] = actions(250);
	small_parse_table_5834(v);
}

void	small_parse_table_5834(t_small_parse_table_array *v)
{
	v->a[116680] = 1;
	v->a[116681] = anon_sym_BANG;
	v->a[116682] = actions(258);
	v->a[116683] = 1;
	v->a[116684] = anon_sym_DOLLAR;
	v->a[116685] = actions(264);
	v->a[116686] = 1;
	v->a[116687] = aux_sym_number_token1;
	v->a[116688] = actions(266);
	v->a[116689] = 1;
	v->a[116690] = aux_sym_number_token2;
	v->a[116691] = actions(270);
	v->a[116692] = 1;
	v->a[116693] = anon_sym_DOLLAR_LPAREN;
	v->a[116694] = actions(282);
	v->a[116695] = 1;
	v->a[116696] = sym_test_operator;
	v->a[116697] = actions(284);
	v->a[116698] = 1;
	v->a[116699] = sym__brace_start;
	small_parse_table_5835(v);
}

/* EOF small_parse_table_1166.c */
