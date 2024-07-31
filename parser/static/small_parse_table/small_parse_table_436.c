/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_436.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2180(t_small_parse_table_array *v)
{
	v->a[43600] = sym_comment;
	v->a[43601] = actions(1522);
	v->a[43602] = 1;
	v->a[43603] = anon_sym_LPAREN;
	v->a[43604] = actions(1524);
	v->a[43605] = 1;
	v->a[43606] = anon_sym_BANG;
	v->a[43607] = actions(1530);
	v->a[43608] = 1;
	v->a[43609] = anon_sym_DOLLAR;
	v->a[43610] = actions(1532);
	v->a[43611] = 1;
	v->a[43612] = anon_sym_DQUOTE;
	v->a[43613] = actions(1536);
	v->a[43614] = 1;
	v->a[43615] = anon_sym_DOLLAR_LBRACE;
	v->a[43616] = actions(1538);
	v->a[43617] = 1;
	v->a[43618] = sym_variable_name;
	v->a[43619] = actions(1526);
	small_parse_table_2181(v);
}

void	small_parse_table_2181(t_small_parse_table_array *v)
{
	v->a[43620] = 2;
	v->a[43621] = anon_sym_PLUS_PLUS;
	v->a[43622] = anon_sym_DASH_DASH;
	v->a[43623] = actions(1528);
	v->a[43624] = 2;
	v->a[43625] = anon_sym_DASH2;
	v->a[43626] = anon_sym_PLUS2;
	v->a[43627] = actions(1534);
	v->a[43628] = 2;
	v->a[43629] = sym_number;
	v->a[43630] = aux_sym__simple_variable_name_token1;
	v->a[43631] = state(206);
	v->a[43632] = 3;
	v->a[43633] = sym_string;
	v->a[43634] = sym_simple_expansion;
	v->a[43635] = sym_expansion;
	v->a[43636] = state(223);
	v->a[43637] = 7;
	v->a[43638] = sym__arithmetic_expression;
	v->a[43639] = sym_arithmetic_literal;
	small_parse_table_2182(v);
}

void	small_parse_table_2182(t_small_parse_table_array *v)
{
	v->a[43640] = sym_arithmetic_binary_expression;
	v->a[43641] = sym_arithmetic_ternary_expression;
	v->a[43642] = sym_arithmetic_unary_expression;
	v->a[43643] = sym_arithmetic_postfix_expression;
	v->a[43644] = sym_arithmetic_parenthesized_expression;
	v->a[43645] = 12;
	v->a[43646] = actions(407);
	v->a[43647] = 1;
	v->a[43648] = sym_comment;
	v->a[43649] = actions(1540);
	v->a[43650] = 1;
	v->a[43651] = anon_sym_LPAREN;
	v->a[43652] = actions(1542);
	v->a[43653] = 1;
	v->a[43654] = anon_sym_BANG;
	v->a[43655] = actions(1548);
	v->a[43656] = 1;
	v->a[43657] = anon_sym_DOLLAR;
	v->a[43658] = actions(1550);
	v->a[43659] = 1;
	small_parse_table_2183(v);
}

void	small_parse_table_2183(t_small_parse_table_array *v)
{
	v->a[43660] = anon_sym_DQUOTE;
	v->a[43661] = actions(1554);
	v->a[43662] = 1;
	v->a[43663] = anon_sym_DOLLAR_LBRACE;
	v->a[43664] = actions(1556);
	v->a[43665] = 1;
	v->a[43666] = sym_variable_name;
	v->a[43667] = actions(1544);
	v->a[43668] = 2;
	v->a[43669] = anon_sym_PLUS_PLUS;
	v->a[43670] = anon_sym_DASH_DASH;
	v->a[43671] = actions(1546);
	v->a[43672] = 2;
	v->a[43673] = anon_sym_DASH2;
	v->a[43674] = anon_sym_PLUS2;
	v->a[43675] = actions(1552);
	v->a[43676] = 2;
	v->a[43677] = sym_number;
	v->a[43678] = aux_sym__simple_variable_name_token1;
	v->a[43679] = state(157);
	small_parse_table_2184(v);
}

void	small_parse_table_2184(t_small_parse_table_array *v)
{
	v->a[43680] = 3;
	v->a[43681] = sym_string;
	v->a[43682] = sym_simple_expansion;
	v->a[43683] = sym_expansion;
	v->a[43684] = state(177);
	v->a[43685] = 7;
	v->a[43686] = sym__arithmetic_expression;
	v->a[43687] = sym_arithmetic_literal;
	v->a[43688] = sym_arithmetic_binary_expression;
	v->a[43689] = sym_arithmetic_ternary_expression;
	v->a[43690] = sym_arithmetic_unary_expression;
	v->a[43691] = sym_arithmetic_postfix_expression;
	v->a[43692] = sym_arithmetic_parenthesized_expression;
	v->a[43693] = 12;
	v->a[43694] = actions(407);
	v->a[43695] = 1;
	v->a[43696] = sym_comment;
	v->a[43697] = actions(1540);
	v->a[43698] = 1;
	v->a[43699] = anon_sym_LPAREN;
	small_parse_table_2185(v);
}

/* EOF small_parse_table_436.c */
