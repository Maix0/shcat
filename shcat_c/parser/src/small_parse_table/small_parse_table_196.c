/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_196.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_980(t_small_parse_table_array *v)
{
	v->a[19600] = 1;
	v->a[19601] = sym__arithmetic_unary_expression;
	v->a[19602] = state(3367);
	v->a[19603] = 1;
	v->a[19604] = sym__arithmetic_ternary_expression;
	v->a[19605] = state(3375);
	v->a[19606] = 1;
	v->a[19607] = sym__arithmetic_binary_expression;
	v->a[19608] = actions(1073);
	v->a[19609] = 2;
	v->a[19610] = anon_sym_LPAREN_LPAREN;
	v->a[19611] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19612] = actions(1083);
	v->a[19613] = 2;
	v->a[19614] = sym_raw_string;
	v->a[19615] = sym_ansi_c_string;
	v->a[19616] = actions(1089);
	v->a[19617] = 2;
	v->a[19618] = anon_sym_LT_LPAREN;
	v->a[19619] = anon_sym_GT_LPAREN;
	small_parse_table_981(v);
}

void	small_parse_table_981(t_small_parse_table_array *v)
{
	v->a[19620] = actions(3592);
	v->a[19621] = 2;
	v->a[19622] = anon_sym_PLUS_PLUS2;
	v->a[19623] = anon_sym_DASH_DASH2;
	v->a[19624] = actions(3594);
	v->a[19625] = 2;
	v->a[19626] = anon_sym_DASH2;
	v->a[19627] = anon_sym_PLUS2;
	v->a[19628] = state(2500);
	v->a[19629] = 4;
	v->a[19630] = sym_arithmetic_expansion;
	v->a[19631] = sym_brace_expression;
	v->a[19632] = sym_translated_string;
	v->a[19633] = sym_process_substitution;
	v->a[19634] = state(2506);
	v->a[19635] = 4;
	v->a[19636] = sym_string;
	v->a[19637] = sym_number;
	v->a[19638] = sym_simple_expansion;
	v->a[19639] = sym_expansion;
	small_parse_table_982(v);
}

void	small_parse_table_982(t_small_parse_table_array *v)
{
	v->a[19640] = state(3365);
	v->a[19641] = 4;
	v->a[19642] = sym_subscript;
	v->a[19643] = sym__arithmetic_expression;
	v->a[19644] = sym__arithmetic_literal;
	v->a[19645] = sym__arithmetic_parenthesized_expression;
	v->a[19646] = state(3053);
	v->a[19647] = 6;
	v->a[19648] = sym_binary_expression;
	v->a[19649] = sym_ternary_expression;
	v->a[19650] = sym_unary_expression;
	v->a[19651] = sym_postfix_expression;
	v->a[19652] = sym_parenthesized_expression;
	v->a[19653] = sym_concatenation;
	v->a[19654] = 8;
	v->a[19655] = actions(3);
	v->a[19656] = 1;
	v->a[19657] = sym_comment;
	v->a[19658] = actions(2042);
	v->a[19659] = 1;
	small_parse_table_983(v);
}

void	small_parse_table_983(t_small_parse_table_array *v)
{
	v->a[19660] = anon_sym_DQUOTE;
	v->a[19661] = actions(3647);
	v->a[19662] = 1;
	v->a[19663] = sym_variable_name;
	v->a[19664] = state(1547);
	v->a[19665] = 1;
	v->a[19666] = sym_string;
	v->a[19667] = actions(3645);
	v->a[19668] = 2;
	v->a[19669] = aux_sym__simple_variable_name_token1;
	v->a[19670] = aux_sym__multiline_variable_name_token1;
	v->a[19671] = actions(1241);
	v->a[19672] = 4;
	v->a[19673] = sym_file_descriptor;
	v->a[19674] = sym_test_operator;
	v->a[19675] = sym__brace_start;
	v->a[19676] = ts_builtin_sym_end;
	v->a[19677] = actions(3643);
	v->a[19678] = 9;
	v->a[19679] = anon_sym_DASH;
	small_parse_table_984(v);
}

void	small_parse_table_984(t_small_parse_table_array *v)
{
	v->a[19680] = anon_sym_STAR;
	v->a[19681] = anon_sym_BANG;
	v->a[19682] = anon_sym_QMARK;
	v->a[19683] = anon_sym_DOLLAR;
	v->a[19684] = anon_sym_POUND;
	v->a[19685] = anon_sym_AT2;
	v->a[19686] = anon_sym_0;
	v->a[19687] = anon_sym__;
	v->a[19688] = actions(1239);
	v->a[19689] = 35;
	v->a[19690] = anon_sym_LPAREN_LPAREN;
	v->a[19691] = anon_sym_SEMI;
	v->a[19692] = anon_sym_PIPE_PIPE;
	v->a[19693] = anon_sym_AMP_AMP;
	v->a[19694] = anon_sym_PIPE;
	v->a[19695] = anon_sym_AMP;
	v->a[19696] = anon_sym_LT;
	v->a[19697] = anon_sym_GT;
	v->a[19698] = anon_sym_LT_LT;
	v->a[19699] = anon_sym_GT_GT;
	small_parse_table_985(v);
}

/* EOF small_parse_table_196.c */
