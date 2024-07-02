/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_456.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2280(t_small_parse_table_array *v)
{
	v->a[45600] = 4;
	v->a[45601] = actions(3);
	v->a[45602] = 1;
	v->a[45603] = sym_comment;
	v->a[45604] = actions(1661);
	v->a[45605] = 1;
	v->a[45606] = ts_builtin_sym_end;
	v->a[45607] = actions(1426);
	v->a[45608] = 2;
	v->a[45609] = sym_file_descriptor;
	v->a[45610] = sym_variable_name;
	v->a[45611] = actions(1422);
	v->a[45612] = 24;
	v->a[45613] = anon_sym_for;
	v->a[45614] = anon_sym_while;
	v->a[45615] = anon_sym_until;
	v->a[45616] = anon_sym_if;
	v->a[45617] = anon_sym_case;
	v->a[45618] = anon_sym_LPAREN;
	v->a[45619] = anon_sym_LBRACE;
	small_parse_table_2281(v);
}

void	small_parse_table_2281(t_small_parse_table_array *v)
{
	v->a[45620] = anon_sym_BANG;
	v->a[45621] = anon_sym_LT;
	v->a[45622] = anon_sym_GT;
	v->a[45623] = anon_sym_GT_GT;
	v->a[45624] = anon_sym_LT_AMP;
	v->a[45625] = anon_sym_GT_AMP;
	v->a[45626] = anon_sym_GT_PIPE;
	v->a[45627] = anon_sym_LT_GT;
	v->a[45628] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45629] = anon_sym_DOLLAR;
	v->a[45630] = anon_sym_DQUOTE;
	v->a[45631] = sym_raw_string;
	v->a[45632] = sym_number;
	v->a[45633] = anon_sym_DOLLAR_LBRACE;
	v->a[45634] = anon_sym_DOLLAR_LPAREN;
	v->a[45635] = anon_sym_BQUOTE;
	v->a[45636] = sym_word;
	v->a[45637] = 16;
	v->a[45638] = actions(680);
	v->a[45639] = 1;
	small_parse_table_2282(v);
}

void	small_parse_table_2282(t_small_parse_table_array *v)
{
	v->a[45640] = sym_comment;
	v->a[45641] = actions(1574);
	v->a[45642] = 1;
	v->a[45643] = anon_sym_LPAREN;
	v->a[45644] = actions(1576);
	v->a[45645] = 1;
	v->a[45646] = anon_sym_BANG;
	v->a[45647] = actions(1584);
	v->a[45648] = 1;
	v->a[45649] = anon_sym_TILDE;
	v->a[45650] = actions(1586);
	v->a[45651] = 1;
	v->a[45652] = anon_sym_DOLLAR;
	v->a[45653] = actions(1588);
	v->a[45654] = 1;
	v->a[45655] = anon_sym_DQUOTE;
	v->a[45656] = actions(1592);
	v->a[45657] = 1;
	v->a[45658] = anon_sym_DOLLAR_LBRACE;
	v->a[45659] = actions(1594);
	small_parse_table_2283(v);
}

void	small_parse_table_2283(t_small_parse_table_array *v)
{
	v->a[45660] = 1;
	v->a[45661] = anon_sym_DOLLAR_LPAREN;
	v->a[45662] = actions(1596);
	v->a[45663] = 1;
	v->a[45664] = anon_sym_BQUOTE;
	v->a[45665] = actions(1598);
	v->a[45666] = 1;
	v->a[45667] = sym_variable_name;
	v->a[45668] = actions(1663);
	v->a[45669] = 1;
	v->a[45670] = anon_sym_RPAREN_RPAREN;
	v->a[45671] = actions(1580);
	v->a[45672] = 2;
	v->a[45673] = anon_sym_PLUS_PLUS;
	v->a[45674] = anon_sym_DASH_DASH;
	v->a[45675] = actions(1582);
	v->a[45676] = 2;
	v->a[45677] = anon_sym_DASH2;
	v->a[45678] = anon_sym_PLUS2;
	v->a[45679] = actions(1590);
	small_parse_table_2284(v);
}

void	small_parse_table_2284(t_small_parse_table_array *v)
{
	v->a[45680] = 2;
	v->a[45681] = sym_number;
	v->a[45682] = aux_sym__simple_variable_name_token1;
	v->a[45683] = state(238);
	v->a[45684] = 3;
	v->a[45685] = sym_string;
	v->a[45686] = sym_simple_expansion;
	v->a[45687] = sym_expansion;
	v->a[45688] = state(287);
	v->a[45689] = 8;
	v->a[45690] = sym__arithmetic_expression;
	v->a[45691] = sym_arithmetic_literal;
	v->a[45692] = sym_arithmetic_binary_expression;
	v->a[45693] = sym_arithmetic_ternary_expression;
	v->a[45694] = sym_arithmetic_unary_expression;
	v->a[45695] = sym_arithmetic_postfix_expression;
	v->a[45696] = sym_arithmetic_parenthesized_expression;
	v->a[45697] = sym_command_substitution;
	v->a[45698] = 6;
	v->a[45699] = actions(3);
	small_parse_table_2285(v);
}

/* EOF small_parse_table_456.c */
