/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1156.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5780(t_small_parse_table_array *v)
{
	v->a[115600] = anon_sym_DOLLAR;
	v->a[115601] = actions(264);
	v->a[115602] = 1;
	v->a[115603] = aux_sym_number_token1;
	v->a[115604] = actions(266);
	v->a[115605] = 1;
	v->a[115606] = aux_sym_number_token2;
	v->a[115607] = actions(270);
	v->a[115608] = 1;
	v->a[115609] = anon_sym_DOLLAR_LPAREN;
	v->a[115610] = actions(282);
	v->a[115611] = 1;
	v->a[115612] = sym_test_operator;
	v->a[115613] = actions(284);
	v->a[115614] = 1;
	v->a[115615] = sym__brace_start;
	v->a[115616] = actions(1075);
	v->a[115617] = 1;
	v->a[115618] = anon_sym_DOLLAR_LBRACK;
	v->a[115619] = actions(1079);
	small_parse_table_5781(v);
}

void	small_parse_table_5781(t_small_parse_table_array *v)
{
	v->a[115620] = 1;
	v->a[115621] = sym__special_character;
	v->a[115622] = actions(1081);
	v->a[115623] = 1;
	v->a[115624] = anon_sym_DQUOTE;
	v->a[115625] = actions(1085);
	v->a[115626] = 1;
	v->a[115627] = anon_sym_DOLLAR_LBRACE;
	v->a[115628] = actions(1087);
	v->a[115629] = 1;
	v->a[115630] = anon_sym_DOLLAR_BQUOTE;
	v->a[115631] = actions(3598);
	v->a[115632] = 1;
	v->a[115633] = anon_sym_BQUOTE;
	v->a[115634] = state(2690);
	v->a[115635] = 1;
	v->a[115636] = aux_sym__literal_repeat1;
	v->a[115637] = state(3084);
	v->a[115638] = 1;
	v->a[115639] = sym__expression;
	small_parse_table_5782(v);
}

void	small_parse_table_5782(t_small_parse_table_array *v)
{
	v->a[115640] = actions(103);
	v->a[115641] = 2;
	v->a[115642] = anon_sym_PLUS_PLUS2;
	v->a[115643] = anon_sym_DASH_DASH2;
	v->a[115644] = actions(105);
	v->a[115645] = 2;
	v->a[115646] = anon_sym_DASH2;
	v->a[115647] = anon_sym_PLUS2;
	v->a[115648] = actions(1073);
	v->a[115649] = 2;
	v->a[115650] = anon_sym_LPAREN_LPAREN;
	v->a[115651] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115652] = actions(1083);
	v->a[115653] = 2;
	v->a[115654] = sym_raw_string;
	v->a[115655] = sym_ansi_c_string;
	v->a[115656] = actions(1089);
	v->a[115657] = 2;
	v->a[115658] = anon_sym_LT_LPAREN;
	v->a[115659] = anon_sym_GT_LPAREN;
	small_parse_table_5783(v);
}

void	small_parse_table_5783(t_small_parse_table_array *v)
{
	v->a[115660] = state(3053);
	v->a[115661] = 6;
	v->a[115662] = sym_binary_expression;
	v->a[115663] = sym_ternary_expression;
	v->a[115664] = sym_unary_expression;
	v->a[115665] = sym_postfix_expression;
	v->a[115666] = sym_parenthesized_expression;
	v->a[115667] = sym_concatenation;
	v->a[115668] = state(2500);
	v->a[115669] = 9;
	v->a[115670] = sym_arithmetic_expansion;
	v->a[115671] = sym_brace_expression;
	v->a[115672] = sym_string;
	v->a[115673] = sym_translated_string;
	v->a[115674] = sym_number;
	v->a[115675] = sym_simple_expansion;
	v->a[115676] = sym_expansion;
	v->a[115677] = sym_command_substitution;
	v->a[115678] = sym_process_substitution;
	v->a[115679] = 26;
	small_parse_table_5784(v);
}

void	small_parse_table_5784(t_small_parse_table_array *v)
{
	v->a[115680] = actions(71);
	v->a[115681] = 1;
	v->a[115682] = sym_comment;
	v->a[115683] = actions(1131);
	v->a[115684] = 1;
	v->a[115685] = anon_sym_LPAREN;
	v->a[115686] = actions(1141);
	v->a[115687] = 1;
	v->a[115688] = anon_sym_DOLLAR_LBRACK;
	v->a[115689] = actions(1145);
	v->a[115690] = 1;
	v->a[115691] = anon_sym_DOLLAR;
	v->a[115692] = actions(1149);
	v->a[115693] = 1;
	v->a[115694] = anon_sym_DQUOTE;
	v->a[115695] = actions(1153);
	v->a[115696] = 1;
	v->a[115697] = aux_sym_number_token1;
	v->a[115698] = actions(1155);
	v->a[115699] = 1;
	small_parse_table_5785(v);
}

/* EOF small_parse_table_1156.c */
