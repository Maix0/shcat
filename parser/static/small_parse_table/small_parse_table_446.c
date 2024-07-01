/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_446.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2230(t_small_parse_table_array *v)
{
	v->a[44600] = 1;
	v->a[44601] = anon_sym_DOLLAR_LBRACE;
	v->a[44602] = actions(1580);
	v->a[44603] = 1;
	v->a[44604] = anon_sym_DOLLAR_LPAREN;
	v->a[44605] = actions(1582);
	v->a[44606] = 1;
	v->a[44607] = anon_sym_BQUOTE;
	v->a[44608] = actions(1584);
	v->a[44609] = 1;
	v->a[44610] = sym_variable_name;
	v->a[44611] = actions(1608);
	v->a[44612] = 1;
	v->a[44613] = anon_sym_RPAREN_RPAREN;
	v->a[44614] = actions(1566);
	v->a[44615] = 2;
	v->a[44616] = anon_sym_PLUS_PLUS;
	v->a[44617] = anon_sym_DASH_DASH;
	v->a[44618] = actions(1568);
	v->a[44619] = 2;
	small_parse_table_2231(v);
}

void	small_parse_table_2231(t_small_parse_table_array *v)
{
	v->a[44620] = anon_sym_DASH2;
	v->a[44621] = anon_sym_PLUS2;
	v->a[44622] = actions(1576);
	v->a[44623] = 2;
	v->a[44624] = sym_number;
	v->a[44625] = aux_sym__simple_variable_name_token1;
	v->a[44626] = state(255);
	v->a[44627] = 3;
	v->a[44628] = sym_string;
	v->a[44629] = sym_simple_expansion;
	v->a[44630] = sym_expansion;
	v->a[44631] = state(296);
	v->a[44632] = 8;
	v->a[44633] = sym__arithmetic_expression;
	v->a[44634] = sym_arithmetic_literal;
	v->a[44635] = sym_arithmetic_binary_expression;
	v->a[44636] = sym_arithmetic_ternary_expression;
	v->a[44637] = sym_arithmetic_unary_expression;
	v->a[44638] = sym_arithmetic_postfix_expression;
	v->a[44639] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2232(v);
}

void	small_parse_table_2232(t_small_parse_table_array *v)
{
	v->a[44640] = sym_command_substitution;
	v->a[44641] = 16;
	v->a[44642] = actions(664);
	v->a[44643] = 1;
	v->a[44644] = sym_comment;
	v->a[44645] = actions(1560);
	v->a[44646] = 1;
	v->a[44647] = anon_sym_LPAREN;
	v->a[44648] = actions(1562);
	v->a[44649] = 1;
	v->a[44650] = anon_sym_BANG;
	v->a[44651] = actions(1570);
	v->a[44652] = 1;
	v->a[44653] = anon_sym_TILDE;
	v->a[44654] = actions(1572);
	v->a[44655] = 1;
	v->a[44656] = anon_sym_DOLLAR;
	v->a[44657] = actions(1574);
	v->a[44658] = 1;
	v->a[44659] = anon_sym_DQUOTE;
	small_parse_table_2233(v);
}

void	small_parse_table_2233(t_small_parse_table_array *v)
{
	v->a[44660] = actions(1578);
	v->a[44661] = 1;
	v->a[44662] = anon_sym_DOLLAR_LBRACE;
	v->a[44663] = actions(1580);
	v->a[44664] = 1;
	v->a[44665] = anon_sym_DOLLAR_LPAREN;
	v->a[44666] = actions(1582);
	v->a[44667] = 1;
	v->a[44668] = anon_sym_BQUOTE;
	v->a[44669] = actions(1584);
	v->a[44670] = 1;
	v->a[44671] = sym_variable_name;
	v->a[44672] = actions(1610);
	v->a[44673] = 1;
	v->a[44674] = anon_sym_RPAREN_RPAREN;
	v->a[44675] = actions(1566);
	v->a[44676] = 2;
	v->a[44677] = anon_sym_PLUS_PLUS;
	v->a[44678] = anon_sym_DASH_DASH;
	v->a[44679] = actions(1568);
	small_parse_table_2234(v);
}

void	small_parse_table_2234(t_small_parse_table_array *v)
{
	v->a[44680] = 2;
	v->a[44681] = anon_sym_DASH2;
	v->a[44682] = anon_sym_PLUS2;
	v->a[44683] = actions(1576);
	v->a[44684] = 2;
	v->a[44685] = sym_number;
	v->a[44686] = aux_sym__simple_variable_name_token1;
	v->a[44687] = state(255);
	v->a[44688] = 3;
	v->a[44689] = sym_string;
	v->a[44690] = sym_simple_expansion;
	v->a[44691] = sym_expansion;
	v->a[44692] = state(286);
	v->a[44693] = 8;
	v->a[44694] = sym__arithmetic_expression;
	v->a[44695] = sym_arithmetic_literal;
	v->a[44696] = sym_arithmetic_binary_expression;
	v->a[44697] = sym_arithmetic_ternary_expression;
	v->a[44698] = sym_arithmetic_unary_expression;
	v->a[44699] = sym_arithmetic_postfix_expression;
	small_parse_table_2235(v);
}

/* EOF small_parse_table_446.c */
