/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_496.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2480(t_small_parse_table_array *v)
{
	v->a[49600] = 1;
	v->a[49601] = sym_variable_name;
	v->a[49602] = actions(1475);
	v->a[49603] = 2;
	v->a[49604] = anon_sym_PLUS_PLUS;
	v->a[49605] = anon_sym_DASH_DASH;
	v->a[49606] = actions(1477);
	v->a[49607] = 2;
	v->a[49608] = anon_sym_DASH2;
	v->a[49609] = anon_sym_PLUS2;
	v->a[49610] = actions(1485);
	v->a[49611] = 2;
	v->a[49612] = sym_number;
	v->a[49613] = aux_sym__simple_variable_name_token1;
	v->a[49614] = state(194);
	v->a[49615] = 3;
	v->a[49616] = sym_string;
	v->a[49617] = sym_simple_expansion;
	v->a[49618] = sym_expansion;
	v->a[49619] = state(220);
	small_parse_table_2481(v);
}

void	small_parse_table_2481(t_small_parse_table_array *v)
{
	v->a[49620] = 8;
	v->a[49621] = sym__arithmetic_expression;
	v->a[49622] = sym_arithmetic_literal;
	v->a[49623] = sym_arithmetic_binary_expression;
	v->a[49624] = sym_arithmetic_ternary_expression;
	v->a[49625] = sym_arithmetic_unary_expression;
	v->a[49626] = sym_arithmetic_postfix_expression;
	v->a[49627] = sym_arithmetic_parenthesized_expression;
	v->a[49628] = sym_command_substitution;
	v->a[49629] = 15;
	v->a[49630] = actions(501);
	v->a[49631] = 1;
	v->a[49632] = sym_comment;
	v->a[49633] = actions(1469);
	v->a[49634] = 1;
	v->a[49635] = anon_sym_LPAREN;
	v->a[49636] = actions(1471);
	v->a[49637] = 1;
	v->a[49638] = anon_sym_BANG;
	v->a[49639] = actions(1479);
	small_parse_table_2482(v);
}

void	small_parse_table_2482(t_small_parse_table_array *v)
{
	v->a[49640] = 1;
	v->a[49641] = anon_sym_TILDE;
	v->a[49642] = actions(1481);
	v->a[49643] = 1;
	v->a[49644] = anon_sym_DOLLAR;
	v->a[49645] = actions(1483);
	v->a[49646] = 1;
	v->a[49647] = anon_sym_DQUOTE;
	v->a[49648] = actions(1487);
	v->a[49649] = 1;
	v->a[49650] = anon_sym_DOLLAR_LBRACE;
	v->a[49651] = actions(1489);
	v->a[49652] = 1;
	v->a[49653] = anon_sym_DOLLAR_LPAREN;
	v->a[49654] = actions(1491);
	v->a[49655] = 1;
	v->a[49656] = anon_sym_BQUOTE;
	v->a[49657] = actions(1493);
	v->a[49658] = 1;
	v->a[49659] = sym_variable_name;
	small_parse_table_2483(v);
}

void	small_parse_table_2483(t_small_parse_table_array *v)
{
	v->a[49660] = actions(1475);
	v->a[49661] = 2;
	v->a[49662] = anon_sym_PLUS_PLUS;
	v->a[49663] = anon_sym_DASH_DASH;
	v->a[49664] = actions(1477);
	v->a[49665] = 2;
	v->a[49666] = anon_sym_DASH2;
	v->a[49667] = anon_sym_PLUS2;
	v->a[49668] = actions(1485);
	v->a[49669] = 2;
	v->a[49670] = sym_number;
	v->a[49671] = aux_sym__simple_variable_name_token1;
	v->a[49672] = state(194);
	v->a[49673] = 3;
	v->a[49674] = sym_string;
	v->a[49675] = sym_simple_expansion;
	v->a[49676] = sym_expansion;
	v->a[49677] = state(221);
	v->a[49678] = 8;
	v->a[49679] = sym__arithmetic_expression;
	small_parse_table_2484(v);
}

void	small_parse_table_2484(t_small_parse_table_array *v)
{
	v->a[49680] = sym_arithmetic_literal;
	v->a[49681] = sym_arithmetic_binary_expression;
	v->a[49682] = sym_arithmetic_ternary_expression;
	v->a[49683] = sym_arithmetic_unary_expression;
	v->a[49684] = sym_arithmetic_postfix_expression;
	v->a[49685] = sym_arithmetic_parenthesized_expression;
	v->a[49686] = sym_command_substitution;
	v->a[49687] = 15;
	v->a[49688] = actions(501);
	v->a[49689] = 1;
	v->a[49690] = sym_comment;
	v->a[49691] = actions(1469);
	v->a[49692] = 1;
	v->a[49693] = anon_sym_LPAREN;
	v->a[49694] = actions(1471);
	v->a[49695] = 1;
	v->a[49696] = anon_sym_BANG;
	v->a[49697] = actions(1479);
	v->a[49698] = 1;
	v->a[49699] = anon_sym_TILDE;
	small_parse_table_2485(v);
}

/* EOF small_parse_table_496.c */
