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
	v->a[49600] = sym_string;
	v->a[49601] = sym_simple_expansion;
	v->a[49602] = sym_expansion;
	v->a[49603] = state(327);
	v->a[49604] = 8;
	v->a[49605] = sym__arithmetic_expression;
	v->a[49606] = sym_arithmetic_literal;
	v->a[49607] = sym_arithmetic_binary_expression;
	v->a[49608] = sym_arithmetic_ternary_expression;
	v->a[49609] = sym_arithmetic_unary_expression;
	v->a[49610] = sym_arithmetic_postfix_expression;
	v->a[49611] = sym_arithmetic_parenthesized_expression;
	v->a[49612] = sym_command_substitution;
	v->a[49613] = 15;
	v->a[49614] = actions(664);
	v->a[49615] = 1;
	v->a[49616] = sym_comment;
	v->a[49617] = actions(1740);
	v->a[49618] = 1;
	v->a[49619] = anon_sym_LPAREN;
	small_parse_table_2481(v);
}

void	small_parse_table_2481(t_small_parse_table_array *v)
{
	v->a[49620] = actions(1742);
	v->a[49621] = 1;
	v->a[49622] = anon_sym_BANG;
	v->a[49623] = actions(1748);
	v->a[49624] = 1;
	v->a[49625] = anon_sym_TILDE;
	v->a[49626] = actions(1750);
	v->a[49627] = 1;
	v->a[49628] = anon_sym_DOLLAR;
	v->a[49629] = actions(1752);
	v->a[49630] = 1;
	v->a[49631] = anon_sym_DQUOTE;
	v->a[49632] = actions(1756);
	v->a[49633] = 1;
	v->a[49634] = anon_sym_DOLLAR_LBRACE;
	v->a[49635] = actions(1758);
	v->a[49636] = 1;
	v->a[49637] = anon_sym_DOLLAR_LPAREN;
	v->a[49638] = actions(1760);
	v->a[49639] = 1;
	small_parse_table_2482(v);
}

void	small_parse_table_2482(t_small_parse_table_array *v)
{
	v->a[49640] = anon_sym_BQUOTE;
	v->a[49641] = actions(1762);
	v->a[49642] = 1;
	v->a[49643] = sym_variable_name;
	v->a[49644] = actions(1744);
	v->a[49645] = 2;
	v->a[49646] = anon_sym_PLUS_PLUS;
	v->a[49647] = anon_sym_DASH_DASH;
	v->a[49648] = actions(1746);
	v->a[49649] = 2;
	v->a[49650] = anon_sym_DASH2;
	v->a[49651] = anon_sym_PLUS2;
	v->a[49652] = actions(1754);
	v->a[49653] = 2;
	v->a[49654] = sym_number;
	v->a[49655] = aux_sym__simple_variable_name_token1;
	v->a[49656] = state(260);
	v->a[49657] = 3;
	v->a[49658] = sym_string;
	v->a[49659] = sym_simple_expansion;
	small_parse_table_2483(v);
}

void	small_parse_table_2483(t_small_parse_table_array *v)
{
	v->a[49660] = sym_expansion;
	v->a[49661] = state(262);
	v->a[49662] = 8;
	v->a[49663] = sym__arithmetic_expression;
	v->a[49664] = sym_arithmetic_literal;
	v->a[49665] = sym_arithmetic_binary_expression;
	v->a[49666] = sym_arithmetic_ternary_expression;
	v->a[49667] = sym_arithmetic_unary_expression;
	v->a[49668] = sym_arithmetic_postfix_expression;
	v->a[49669] = sym_arithmetic_parenthesized_expression;
	v->a[49670] = sym_command_substitution;
	v->a[49671] = 3;
	v->a[49672] = actions(3);
	v->a[49673] = 1;
	v->a[49674] = sym_comment;
	v->a[49675] = actions(908);
	v->a[49676] = 3;
	v->a[49677] = sym_file_descriptor;
	v->a[49678] = sym__concat;
	v->a[49679] = sym__bare_dollar;
	small_parse_table_2484(v);
}

void	small_parse_table_2484(t_small_parse_table_array *v)
{
	v->a[49680] = actions(906);
	v->a[49681] = 23;
	v->a[49682] = anon_sym_LPAREN;
	v->a[49683] = anon_sym_PIPE;
	v->a[49684] = anon_sym_AMP_AMP;
	v->a[49685] = anon_sym_PIPE_PIPE;
	v->a[49686] = anon_sym_LT;
	v->a[49687] = anon_sym_GT;
	v->a[49688] = anon_sym_GT_GT;
	v->a[49689] = anon_sym_LT_AMP;
	v->a[49690] = anon_sym_GT_AMP;
	v->a[49691] = anon_sym_GT_PIPE;
	v->a[49692] = anon_sym_LT_GT;
	v->a[49693] = anon_sym_LT_LT;
	v->a[49694] = anon_sym_LT_LT_DASH;
	v->a[49695] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49696] = aux_sym_concatenation_token1;
	v->a[49697] = anon_sym_DOLLAR;
	v->a[49698] = anon_sym_DQUOTE;
	v->a[49699] = sym_raw_string;
	small_parse_table_2485(v);
}

/* EOF small_parse_table_496.c */
