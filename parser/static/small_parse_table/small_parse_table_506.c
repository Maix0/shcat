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
	v->a[50600] = 1;
	v->a[50601] = anon_sym_DQUOTE;
	v->a[50602] = actions(1708);
	v->a[50603] = 1;
	v->a[50604] = anon_sym_DOLLAR_LBRACE;
	v->a[50605] = actions(1710);
	v->a[50606] = 1;
	v->a[50607] = anon_sym_DOLLAR_LPAREN;
	v->a[50608] = actions(1712);
	v->a[50609] = 1;
	v->a[50610] = anon_sym_BQUOTE;
	v->a[50611] = actions(1714);
	v->a[50612] = 1;
	v->a[50613] = sym_variable_name;
	v->a[50614] = actions(1696);
	v->a[50615] = 2;
	v->a[50616] = anon_sym_PLUS_PLUS;
	v->a[50617] = anon_sym_DASH_DASH;
	v->a[50618] = actions(1698);
	v->a[50619] = 2;
	small_parse_table_2531(v);
}

void	small_parse_table_2531(t_small_parse_table_array *v)
{
	v->a[50620] = anon_sym_DASH2;
	v->a[50621] = anon_sym_PLUS2;
	v->a[50622] = actions(1706);
	v->a[50623] = 2;
	v->a[50624] = sym_number;
	v->a[50625] = aux_sym__simple_variable_name_token1;
	v->a[50626] = state(238);
	v->a[50627] = 3;
	v->a[50628] = sym_string;
	v->a[50629] = sym_simple_expansion;
	v->a[50630] = sym_expansion;
	v->a[50631] = state(259);
	v->a[50632] = 8;
	v->a[50633] = sym__arithmetic_expression;
	v->a[50634] = sym_arithmetic_literal;
	v->a[50635] = sym_arithmetic_binary_expression;
	v->a[50636] = sym_arithmetic_ternary_expression;
	v->a[50637] = sym_arithmetic_unary_expression;
	v->a[50638] = sym_arithmetic_postfix_expression;
	v->a[50639] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2532(v);
}

void	small_parse_table_2532(t_small_parse_table_array *v)
{
	v->a[50640] = sym_command_substitution;
	v->a[50641] = 3;
	v->a[50642] = actions(3);
	v->a[50643] = 1;
	v->a[50644] = sym_comment;
	v->a[50645] = actions(1229);
	v->a[50646] = 3;
	v->a[50647] = sym_file_descriptor;
	v->a[50648] = sym__concat;
	v->a[50649] = sym_variable_name;
	v->a[50650] = actions(1227);
	v->a[50651] = 22;
	v->a[50652] = anon_sym_PIPE;
	v->a[50653] = anon_sym_AMP_AMP;
	v->a[50654] = anon_sym_PIPE_PIPE;
	v->a[50655] = anon_sym_LT;
	v->a[50656] = anon_sym_GT;
	v->a[50657] = anon_sym_GT_GT;
	v->a[50658] = anon_sym_LT_AMP;
	v->a[50659] = anon_sym_GT_AMP;
	small_parse_table_2533(v);
}

void	small_parse_table_2533(t_small_parse_table_array *v)
{
	v->a[50660] = anon_sym_GT_PIPE;
	v->a[50661] = anon_sym_LT_GT;
	v->a[50662] = anon_sym_LT_LT;
	v->a[50663] = anon_sym_LT_LT_DASH;
	v->a[50664] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50665] = aux_sym_concatenation_token1;
	v->a[50666] = anon_sym_DOLLAR;
	v->a[50667] = anon_sym_DQUOTE;
	v->a[50668] = sym_raw_string;
	v->a[50669] = sym_number;
	v->a[50670] = anon_sym_DOLLAR_LBRACE;
	v->a[50671] = anon_sym_DOLLAR_LPAREN;
	v->a[50672] = anon_sym_BQUOTE;
	v->a[50673] = sym_word;
	v->a[50674] = 6;
	v->a[50675] = actions(3);
	v->a[50676] = 1;
	v->a[50677] = sym_comment;
	v->a[50678] = actions(367);
	v->a[50679] = 1;
	small_parse_table_2534(v);
}

void	small_parse_table_2534(t_small_parse_table_array *v)
{
	v->a[50680] = sym_file_descriptor;
	v->a[50681] = actions(1433);
	v->a[50682] = 1;
	v->a[50683] = sym_variable_name;
	v->a[50684] = actions(1431);
	v->a[50685] = 2;
	v->a[50686] = aux_sym__simple_variable_name_token1;
	v->a[50687] = aux_sym__multiline_variable_name_token1;
	v->a[50688] = actions(1429);
	v->a[50689] = 8;
	v->a[50690] = anon_sym_BANG;
	v->a[50691] = anon_sym_DASH;
	v->a[50692] = anon_sym_STAR;
	v->a[50693] = anon_sym_QMARK;
	v->a[50694] = anon_sym_DOLLAR;
	v->a[50695] = anon_sym_POUND;
	v->a[50696] = anon_sym_AT;
	v->a[50697] = anon_sym_0;
	v->a[50698] = actions(361);
	v->a[50699] = 13;
	small_parse_table_2535(v);
}

/* EOF small_parse_table_506.c */
