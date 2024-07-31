/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_416.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2080(t_small_parse_table_array *v)
{
	v->a[41600] = 2;
	v->a[41601] = anon_sym_PLUS_PLUS;
	v->a[41602] = anon_sym_DASH_DASH;
	v->a[41603] = actions(1528);
	v->a[41604] = 2;
	v->a[41605] = anon_sym_DASH2;
	v->a[41606] = anon_sym_PLUS2;
	v->a[41607] = actions(1534);
	v->a[41608] = 2;
	v->a[41609] = sym_number;
	v->a[41610] = aux_sym__simple_variable_name_token1;
	v->a[41611] = state(206);
	v->a[41612] = 3;
	v->a[41613] = sym_string;
	v->a[41614] = sym_simple_expansion;
	v->a[41615] = sym_expansion;
	v->a[41616] = state(233);
	v->a[41617] = 7;
	v->a[41618] = sym__arithmetic_expression;
	v->a[41619] = sym_arithmetic_literal;
	small_parse_table_2081(v);
}

void	small_parse_table_2081(t_small_parse_table_array *v)
{
	v->a[41620] = sym_arithmetic_binary_expression;
	v->a[41621] = sym_arithmetic_ternary_expression;
	v->a[41622] = sym_arithmetic_unary_expression;
	v->a[41623] = sym_arithmetic_postfix_expression;
	v->a[41624] = sym_arithmetic_parenthesized_expression;
	v->a[41625] = 12;
	v->a[41626] = actions(407);
	v->a[41627] = 1;
	v->a[41628] = sym_comment;
	v->a[41629] = actions(1522);
	v->a[41630] = 1;
	v->a[41631] = anon_sym_LPAREN;
	v->a[41632] = actions(1524);
	v->a[41633] = 1;
	v->a[41634] = anon_sym_BANG;
	v->a[41635] = actions(1530);
	v->a[41636] = 1;
	v->a[41637] = anon_sym_DOLLAR;
	v->a[41638] = actions(1532);
	v->a[41639] = 1;
	small_parse_table_2082(v);
}

void	small_parse_table_2082(t_small_parse_table_array *v)
{
	v->a[41640] = anon_sym_DQUOTE;
	v->a[41641] = actions(1536);
	v->a[41642] = 1;
	v->a[41643] = anon_sym_DOLLAR_LBRACE;
	v->a[41644] = actions(1538);
	v->a[41645] = 1;
	v->a[41646] = sym_variable_name;
	v->a[41647] = actions(1526);
	v->a[41648] = 2;
	v->a[41649] = anon_sym_PLUS_PLUS;
	v->a[41650] = anon_sym_DASH_DASH;
	v->a[41651] = actions(1528);
	v->a[41652] = 2;
	v->a[41653] = anon_sym_DASH2;
	v->a[41654] = anon_sym_PLUS2;
	v->a[41655] = actions(1534);
	v->a[41656] = 2;
	v->a[41657] = sym_number;
	v->a[41658] = aux_sym__simple_variable_name_token1;
	v->a[41659] = state(206);
	small_parse_table_2083(v);
}

void	small_parse_table_2083(t_small_parse_table_array *v)
{
	v->a[41660] = 3;
	v->a[41661] = sym_string;
	v->a[41662] = sym_simple_expansion;
	v->a[41663] = sym_expansion;
	v->a[41664] = state(232);
	v->a[41665] = 7;
	v->a[41666] = sym__arithmetic_expression;
	v->a[41667] = sym_arithmetic_literal;
	v->a[41668] = sym_arithmetic_binary_expression;
	v->a[41669] = sym_arithmetic_ternary_expression;
	v->a[41670] = sym_arithmetic_unary_expression;
	v->a[41671] = sym_arithmetic_postfix_expression;
	v->a[41672] = sym_arithmetic_parenthesized_expression;
	v->a[41673] = 12;
	v->a[41674] = actions(407);
	v->a[41675] = 1;
	v->a[41676] = sym_comment;
	v->a[41677] = actions(1540);
	v->a[41678] = 1;
	v->a[41679] = anon_sym_LPAREN;
	small_parse_table_2084(v);
}

void	small_parse_table_2084(t_small_parse_table_array *v)
{
	v->a[41680] = actions(1542);
	v->a[41681] = 1;
	v->a[41682] = anon_sym_BANG;
	v->a[41683] = actions(1548);
	v->a[41684] = 1;
	v->a[41685] = anon_sym_DOLLAR;
	v->a[41686] = actions(1550);
	v->a[41687] = 1;
	v->a[41688] = anon_sym_DQUOTE;
	v->a[41689] = actions(1554);
	v->a[41690] = 1;
	v->a[41691] = anon_sym_DOLLAR_LBRACE;
	v->a[41692] = actions(1556);
	v->a[41693] = 1;
	v->a[41694] = sym_variable_name;
	v->a[41695] = actions(1544);
	v->a[41696] = 2;
	v->a[41697] = anon_sym_PLUS_PLUS;
	v->a[41698] = anon_sym_DASH_DASH;
	v->a[41699] = actions(1546);
	small_parse_table_2085(v);
}

/* EOF small_parse_table_416.c */
