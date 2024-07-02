/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_506.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2530(t_small_parse_table_array *v)
{
	v->a[50600] = anon_sym_PLUS_PLUS;
	v->a[50601] = anon_sym_DASH_DASH;
	v->a[50602] = actions(1736);
	v->a[50603] = 2;
	v->a[50604] = anon_sym_DASH2;
	v->a[50605] = anon_sym_PLUS2;
	v->a[50606] = actions(1744);
	v->a[50607] = 2;
	v->a[50608] = sym_number;
	v->a[50609] = aux_sym__simple_variable_name_token1;
	v->a[50610] = state(264);
	v->a[50611] = 3;
	v->a[50612] = sym_string;
	v->a[50613] = sym_simple_expansion;
	v->a[50614] = sym_expansion;
	v->a[50615] = state(308);
	v->a[50616] = 8;
	v->a[50617] = sym__arithmetic_expression;
	v->a[50618] = sym_arithmetic_literal;
	v->a[50619] = sym_arithmetic_binary_expression;
	small_parse_table_2531(v);
}

void	small_parse_table_2531(t_small_parse_table_array *v)
{
	v->a[50620] = sym_arithmetic_ternary_expression;
	v->a[50621] = sym_arithmetic_unary_expression;
	v->a[50622] = sym_arithmetic_postfix_expression;
	v->a[50623] = sym_arithmetic_parenthesized_expression;
	v->a[50624] = sym_command_substitution;
	v->a[50625] = 15;
	v->a[50626] = actions(680);
	v->a[50627] = 1;
	v->a[50628] = sym_comment;
	v->a[50629] = actions(1574);
	v->a[50630] = 1;
	v->a[50631] = anon_sym_LPAREN;
	v->a[50632] = actions(1576);
	v->a[50633] = 1;
	v->a[50634] = anon_sym_BANG;
	v->a[50635] = actions(1584);
	v->a[50636] = 1;
	v->a[50637] = anon_sym_TILDE;
	v->a[50638] = actions(1586);
	v->a[50639] = 1;
	small_parse_table_2532(v);
}

void	small_parse_table_2532(t_small_parse_table_array *v)
{
	v->a[50640] = anon_sym_DOLLAR;
	v->a[50641] = actions(1588);
	v->a[50642] = 1;
	v->a[50643] = anon_sym_DQUOTE;
	v->a[50644] = actions(1592);
	v->a[50645] = 1;
	v->a[50646] = anon_sym_DOLLAR_LBRACE;
	v->a[50647] = actions(1594);
	v->a[50648] = 1;
	v->a[50649] = anon_sym_DOLLAR_LPAREN;
	v->a[50650] = actions(1596);
	v->a[50651] = 1;
	v->a[50652] = anon_sym_BQUOTE;
	v->a[50653] = actions(1598);
	v->a[50654] = 1;
	v->a[50655] = sym_variable_name;
	v->a[50656] = actions(1580);
	v->a[50657] = 2;
	v->a[50658] = anon_sym_PLUS_PLUS;
	v->a[50659] = anon_sym_DASH_DASH;
	small_parse_table_2533(v);
}

void	small_parse_table_2533(t_small_parse_table_array *v)
{
	v->a[50660] = actions(1582);
	v->a[50661] = 2;
	v->a[50662] = anon_sym_DASH2;
	v->a[50663] = anon_sym_PLUS2;
	v->a[50664] = actions(1590);
	v->a[50665] = 2;
	v->a[50666] = sym_number;
	v->a[50667] = aux_sym__simple_variable_name_token1;
	v->a[50668] = state(238);
	v->a[50669] = 3;
	v->a[50670] = sym_string;
	v->a[50671] = sym_simple_expansion;
	v->a[50672] = sym_expansion;
	v->a[50673] = state(331);
	v->a[50674] = 8;
	v->a[50675] = sym__arithmetic_expression;
	v->a[50676] = sym_arithmetic_literal;
	v->a[50677] = sym_arithmetic_binary_expression;
	v->a[50678] = sym_arithmetic_ternary_expression;
	v->a[50679] = sym_arithmetic_unary_expression;
	small_parse_table_2534(v);
}

void	small_parse_table_2534(t_small_parse_table_array *v)
{
	v->a[50680] = sym_arithmetic_postfix_expression;
	v->a[50681] = sym_arithmetic_parenthesized_expression;
	v->a[50682] = sym_command_substitution;
	v->a[50683] = 3;
	v->a[50684] = actions(3);
	v->a[50685] = 1;
	v->a[50686] = sym_comment;
	v->a[50687] = actions(1092);
	v->a[50688] = 3;
	v->a[50689] = sym_file_descriptor;
	v->a[50690] = sym__concat;
	v->a[50691] = sym__bare_dollar;
	v->a[50692] = actions(1094);
	v->a[50693] = 23;
	v->a[50694] = anon_sym_LPAREN;
	v->a[50695] = anon_sym_PIPE;
	v->a[50696] = anon_sym_AMP_AMP;
	v->a[50697] = anon_sym_PIPE_PIPE;
	v->a[50698] = anon_sym_LT;
	v->a[50699] = anon_sym_GT;
	small_parse_table_2535(v);
}

/* EOF small_parse_table_506.c */
