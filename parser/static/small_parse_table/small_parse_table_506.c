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
	v->a[50600] = sym_arithmetic_literal;
	v->a[50601] = sym_arithmetic_binary_expression;
	v->a[50602] = sym_arithmetic_ternary_expression;
	v->a[50603] = sym_arithmetic_unary_expression;
	v->a[50604] = sym_arithmetic_postfix_expression;
	v->a[50605] = sym_arithmetic_parenthesized_expression;
	v->a[50606] = sym_command_substitution;
	v->a[50607] = 15;
	v->a[50608] = actions(664);
	v->a[50609] = 1;
	v->a[50610] = sym_comment;
	v->a[50611] = actions(1740);
	v->a[50612] = 1;
	v->a[50613] = anon_sym_LPAREN;
	v->a[50614] = actions(1742);
	v->a[50615] = 1;
	v->a[50616] = anon_sym_BANG;
	v->a[50617] = actions(1748);
	v->a[50618] = 1;
	v->a[50619] = anon_sym_TILDE;
	small_parse_table_2531(v);
}

void	small_parse_table_2531(t_small_parse_table_array *v)
{
	v->a[50620] = actions(1750);
	v->a[50621] = 1;
	v->a[50622] = anon_sym_DOLLAR;
	v->a[50623] = actions(1752);
	v->a[50624] = 1;
	v->a[50625] = anon_sym_DQUOTE;
	v->a[50626] = actions(1756);
	v->a[50627] = 1;
	v->a[50628] = anon_sym_DOLLAR_LBRACE;
	v->a[50629] = actions(1758);
	v->a[50630] = 1;
	v->a[50631] = anon_sym_DOLLAR_LPAREN;
	v->a[50632] = actions(1760);
	v->a[50633] = 1;
	v->a[50634] = anon_sym_BQUOTE;
	v->a[50635] = actions(1762);
	v->a[50636] = 1;
	v->a[50637] = sym_variable_name;
	v->a[50638] = actions(1744);
	v->a[50639] = 2;
	small_parse_table_2532(v);
}

void	small_parse_table_2532(t_small_parse_table_array *v)
{
	v->a[50640] = anon_sym_PLUS_PLUS;
	v->a[50641] = anon_sym_DASH_DASH;
	v->a[50642] = actions(1746);
	v->a[50643] = 2;
	v->a[50644] = anon_sym_DASH2;
	v->a[50645] = anon_sym_PLUS2;
	v->a[50646] = actions(1754);
	v->a[50647] = 2;
	v->a[50648] = sym_number;
	v->a[50649] = aux_sym__simple_variable_name_token1;
	v->a[50650] = state(260);
	v->a[50651] = 3;
	v->a[50652] = sym_string;
	v->a[50653] = sym_simple_expansion;
	v->a[50654] = sym_expansion;
	v->a[50655] = state(321);
	v->a[50656] = 8;
	v->a[50657] = sym__arithmetic_expression;
	v->a[50658] = sym_arithmetic_literal;
	v->a[50659] = sym_arithmetic_binary_expression;
	small_parse_table_2533(v);
}

void	small_parse_table_2533(t_small_parse_table_array *v)
{
	v->a[50660] = sym_arithmetic_ternary_expression;
	v->a[50661] = sym_arithmetic_unary_expression;
	v->a[50662] = sym_arithmetic_postfix_expression;
	v->a[50663] = sym_arithmetic_parenthesized_expression;
	v->a[50664] = sym_command_substitution;
	v->a[50665] = 6;
	v->a[50666] = actions(3);
	v->a[50667] = 1;
	v->a[50668] = sym_comment;
	v->a[50669] = actions(1172);
	v->a[50670] = 1;
	v->a[50671] = sym_file_descriptor;
	v->a[50672] = actions(1315);
	v->a[50673] = 1;
	v->a[50674] = aux_sym_concatenation_token1;
	v->a[50675] = actions(1317);
	v->a[50676] = 1;
	v->a[50677] = sym__concat;
	v->a[50678] = state(845);
	v->a[50679] = 1;
	small_parse_table_2534(v);
}

void	small_parse_table_2534(t_small_parse_table_array *v)
{
	v->a[50680] = aux_sym_concatenation_repeat1;
	v->a[50681] = actions(1168);
	v->a[50682] = 22;
	v->a[50683] = anon_sym_PIPE;
	v->a[50684] = anon_sym_AMP_AMP;
	v->a[50685] = anon_sym_PIPE_PIPE;
	v->a[50686] = anon_sym_LT;
	v->a[50687] = anon_sym_GT;
	v->a[50688] = anon_sym_GT_GT;
	v->a[50689] = anon_sym_LT_AMP;
	v->a[50690] = anon_sym_GT_AMP;
	v->a[50691] = anon_sym_GT_PIPE;
	v->a[50692] = anon_sym_LT_GT;
	v->a[50693] = anon_sym_LT_LT;
	v->a[50694] = anon_sym_LT_LT_DASH;
	v->a[50695] = aux_sym_heredoc_redirect_token1;
	v->a[50696] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50697] = anon_sym_DOLLAR;
	v->a[50698] = anon_sym_DQUOTE;
	v->a[50699] = sym_raw_string;
	small_parse_table_2535(v);
}

/* EOF small_parse_table_506.c */
