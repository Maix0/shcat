/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_556.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2780(t_small_parse_table_array *v)
{
	v->a[55600] = 2;
	v->a[55601] = sym_file_descriptor;
	v->a[55602] = sym__concat;
	v->a[55603] = actions(1098);
	v->a[55604] = 25;
	v->a[55605] = anon_sym_PIPE;
	v->a[55606] = anon_sym_AMP_AMP;
	v->a[55607] = anon_sym_PIPE_PIPE;
	v->a[55608] = anon_sym_LT;
	v->a[55609] = anon_sym_GT;
	v->a[55610] = anon_sym_GT_GT;
	v->a[55611] = anon_sym_AMP_GT;
	v->a[55612] = anon_sym_AMP_GT_GT;
	v->a[55613] = anon_sym_LT_AMP;
	v->a[55614] = anon_sym_GT_AMP;
	v->a[55615] = anon_sym_GT_PIPE;
	v->a[55616] = anon_sym_LT_AMP_DASH;
	v->a[55617] = anon_sym_GT_AMP_DASH;
	v->a[55618] = anon_sym_LT_LT;
	v->a[55619] = anon_sym_LT_LT_DASH;
	small_parse_table_2781(v);
}

void	small_parse_table_2781(t_small_parse_table_array *v)
{
	v->a[55620] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55621] = aux_sym_concatenation_token1;
	v->a[55622] = anon_sym_DOLLAR;
	v->a[55623] = anon_sym_DQUOTE;
	v->a[55624] = sym_raw_string;
	v->a[55625] = sym_number;
	v->a[55626] = anon_sym_DOLLAR_LBRACE;
	v->a[55627] = anon_sym_DOLLAR_LPAREN;
	v->a[55628] = anon_sym_BQUOTE;
	v->a[55629] = sym_word;
	v->a[55630] = 16;
	v->a[55631] = actions(1074);
	v->a[55632] = 1;
	v->a[55633] = sym_comment;
	v->a[55634] = actions(1831);
	v->a[55635] = 1;
	v->a[55636] = anon_sym_LPAREN;
	v->a[55637] = actions(1833);
	v->a[55638] = 1;
	v->a[55639] = anon_sym_BANG;
	small_parse_table_2782(v);
}

void	small_parse_table_2782(t_small_parse_table_array *v)
{
	v->a[55640] = actions(1841);
	v->a[55641] = 1;
	v->a[55642] = anon_sym_TILDE;
	v->a[55643] = actions(1843);
	v->a[55644] = 1;
	v->a[55645] = anon_sym_DOLLAR;
	v->a[55646] = actions(1845);
	v->a[55647] = 1;
	v->a[55648] = anon_sym_DQUOTE;
	v->a[55649] = actions(1849);
	v->a[55650] = 1;
	v->a[55651] = anon_sym_DOLLAR_LBRACE;
	v->a[55652] = actions(1851);
	v->a[55653] = 1;
	v->a[55654] = anon_sym_DOLLAR_LPAREN;
	v->a[55655] = actions(1853);
	v->a[55656] = 1;
	v->a[55657] = anon_sym_BQUOTE;
	v->a[55658] = actions(1855);
	v->a[55659] = 1;
	small_parse_table_2783(v);
}

void	small_parse_table_2783(t_small_parse_table_array *v)
{
	v->a[55660] = sym_variable_name;
	v->a[55661] = actions(1899);
	v->a[55662] = 1;
	v->a[55663] = anon_sym_RPAREN_RPAREN;
	v->a[55664] = actions(1837);
	v->a[55665] = 2;
	v->a[55666] = anon_sym_PLUS_PLUS;
	v->a[55667] = anon_sym_DASH_DASH;
	v->a[55668] = actions(1839);
	v->a[55669] = 2;
	v->a[55670] = anon_sym_DASH2;
	v->a[55671] = anon_sym_PLUS2;
	v->a[55672] = actions(1847);
	v->a[55673] = 2;
	v->a[55674] = sym_number;
	v->a[55675] = aux_sym__simple_variable_name_token1;
	v->a[55676] = state(370);
	v->a[55677] = 3;
	v->a[55678] = sym_string;
	v->a[55679] = sym_simple_expansion;
	small_parse_table_2784(v);
}

void	small_parse_table_2784(t_small_parse_table_array *v)
{
	v->a[55680] = sym_expansion;
	v->a[55681] = state(475);
	v->a[55682] = 8;
	v->a[55683] = sym__arithmetic_expression;
	v->a[55684] = sym_arithmetic_literal;
	v->a[55685] = sym_arithmetic_binary_expression;
	v->a[55686] = sym_arithmetic_ternary_expression;
	v->a[55687] = sym_arithmetic_unary_expression;
	v->a[55688] = sym_arithmetic_postfix_expression;
	v->a[55689] = sym_arithmetic_parenthesized_expression;
	v->a[55690] = sym_command_substitution;
	v->a[55691] = 3;
	v->a[55692] = actions(3);
	v->a[55693] = 1;
	v->a[55694] = sym_comment;
	v->a[55695] = actions(1104);
	v->a[55696] = 2;
	v->a[55697] = sym_file_descriptor;
	v->a[55698] = sym__concat;
	v->a[55699] = actions(1102);
	small_parse_table_2785(v);
}

/* EOF small_parse_table_556.c */
