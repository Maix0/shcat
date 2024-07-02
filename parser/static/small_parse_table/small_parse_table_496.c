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
	v->a[49600] = sym_expansion;
	v->a[49601] = state(221);
	v->a[49602] = 8;
	v->a[49603] = sym__arithmetic_expression;
	v->a[49604] = sym_arithmetic_literal;
	v->a[49605] = sym_arithmetic_binary_expression;
	v->a[49606] = sym_arithmetic_ternary_expression;
	v->a[49607] = sym_arithmetic_unary_expression;
	v->a[49608] = sym_arithmetic_postfix_expression;
	v->a[49609] = sym_arithmetic_parenthesized_expression;
	v->a[49610] = sym_command_substitution;
	v->a[49611] = 3;
	v->a[49612] = actions(3);
	v->a[49613] = 1;
	v->a[49614] = sym_comment;
	v->a[49615] = actions(709);
	v->a[49616] = 3;
	v->a[49617] = sym_file_descriptor;
	v->a[49618] = sym__concat;
	v->a[49619] = sym__bare_dollar;
	small_parse_table_2481(v);
}

void	small_parse_table_2481(t_small_parse_table_array *v)
{
	v->a[49620] = actions(707);
	v->a[49621] = 23;
	v->a[49622] = anon_sym_LPAREN;
	v->a[49623] = anon_sym_PIPE;
	v->a[49624] = anon_sym_AMP_AMP;
	v->a[49625] = anon_sym_PIPE_PIPE;
	v->a[49626] = anon_sym_LT;
	v->a[49627] = anon_sym_GT;
	v->a[49628] = anon_sym_GT_GT;
	v->a[49629] = anon_sym_LT_AMP;
	v->a[49630] = anon_sym_GT_AMP;
	v->a[49631] = anon_sym_GT_PIPE;
	v->a[49632] = anon_sym_LT_GT;
	v->a[49633] = anon_sym_LT_LT;
	v->a[49634] = anon_sym_LT_LT_DASH;
	v->a[49635] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49636] = aux_sym_concatenation_token1;
	v->a[49637] = anon_sym_DOLLAR;
	v->a[49638] = anon_sym_DQUOTE;
	v->a[49639] = sym_raw_string;
	small_parse_table_2482(v);
}

void	small_parse_table_2482(t_small_parse_table_array *v)
{
	v->a[49640] = sym_number;
	v->a[49641] = anon_sym_DOLLAR_LBRACE;
	v->a[49642] = anon_sym_DOLLAR_LPAREN;
	v->a[49643] = anon_sym_BQUOTE;
	v->a[49644] = sym_word;
	v->a[49645] = 15;
	v->a[49646] = actions(680);
	v->a[49647] = 1;
	v->a[49648] = sym_comment;
	v->a[49649] = actions(1574);
	v->a[49650] = 1;
	v->a[49651] = anon_sym_LPAREN;
	v->a[49652] = actions(1576);
	v->a[49653] = 1;
	v->a[49654] = anon_sym_BANG;
	v->a[49655] = actions(1584);
	v->a[49656] = 1;
	v->a[49657] = anon_sym_TILDE;
	v->a[49658] = actions(1586);
	v->a[49659] = 1;
	small_parse_table_2483(v);
}

void	small_parse_table_2483(t_small_parse_table_array *v)
{
	v->a[49660] = anon_sym_DOLLAR;
	v->a[49661] = actions(1588);
	v->a[49662] = 1;
	v->a[49663] = anon_sym_DQUOTE;
	v->a[49664] = actions(1592);
	v->a[49665] = 1;
	v->a[49666] = anon_sym_DOLLAR_LBRACE;
	v->a[49667] = actions(1594);
	v->a[49668] = 1;
	v->a[49669] = anon_sym_DOLLAR_LPAREN;
	v->a[49670] = actions(1596);
	v->a[49671] = 1;
	v->a[49672] = anon_sym_BQUOTE;
	v->a[49673] = actions(1598);
	v->a[49674] = 1;
	v->a[49675] = sym_variable_name;
	v->a[49676] = actions(1580);
	v->a[49677] = 2;
	v->a[49678] = anon_sym_PLUS_PLUS;
	v->a[49679] = anon_sym_DASH_DASH;
	small_parse_table_2484(v);
}

void	small_parse_table_2484(t_small_parse_table_array *v)
{
	v->a[49680] = actions(1582);
	v->a[49681] = 2;
	v->a[49682] = anon_sym_DASH2;
	v->a[49683] = anon_sym_PLUS2;
	v->a[49684] = actions(1590);
	v->a[49685] = 2;
	v->a[49686] = sym_number;
	v->a[49687] = aux_sym__simple_variable_name_token1;
	v->a[49688] = state(238);
	v->a[49689] = 3;
	v->a[49690] = sym_string;
	v->a[49691] = sym_simple_expansion;
	v->a[49692] = sym_expansion;
	v->a[49693] = state(220);
	v->a[49694] = 8;
	v->a[49695] = sym__arithmetic_expression;
	v->a[49696] = sym_arithmetic_literal;
	v->a[49697] = sym_arithmetic_binary_expression;
	v->a[49698] = sym_arithmetic_ternary_expression;
	v->a[49699] = sym_arithmetic_unary_expression;
	small_parse_table_2485(v);
}

/* EOF small_parse_table_496.c */
