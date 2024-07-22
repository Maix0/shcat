/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_486.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2430(t_small_parse_table_array *v)
{
	v->a[48600] = anon_sym_DASH2;
	v->a[48601] = anon_sym_PLUS2;
	v->a[48602] = actions(1485);
	v->a[48603] = 2;
	v->a[48604] = sym_number;
	v->a[48605] = aux_sym__simple_variable_name_token1;
	v->a[48606] = state(194);
	v->a[48607] = 3;
	v->a[48608] = sym_string;
	v->a[48609] = sym_simple_expansion;
	v->a[48610] = sym_expansion;
	v->a[48611] = state(211);
	v->a[48612] = 8;
	v->a[48613] = sym__arithmetic_expression;
	v->a[48614] = sym_arithmetic_literal;
	v->a[48615] = sym_arithmetic_binary_expression;
	v->a[48616] = sym_arithmetic_ternary_expression;
	v->a[48617] = sym_arithmetic_unary_expression;
	v->a[48618] = sym_arithmetic_postfix_expression;
	v->a[48619] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2431(v);
}

void	small_parse_table_2431(t_small_parse_table_array *v)
{
	v->a[48620] = sym_command_substitution;
	v->a[48621] = 15;
	v->a[48622] = actions(501);
	v->a[48623] = 1;
	v->a[48624] = sym_comment;
	v->a[48625] = actions(1469);
	v->a[48626] = 1;
	v->a[48627] = anon_sym_LPAREN;
	v->a[48628] = actions(1471);
	v->a[48629] = 1;
	v->a[48630] = anon_sym_BANG;
	v->a[48631] = actions(1479);
	v->a[48632] = 1;
	v->a[48633] = anon_sym_TILDE;
	v->a[48634] = actions(1481);
	v->a[48635] = 1;
	v->a[48636] = anon_sym_DOLLAR;
	v->a[48637] = actions(1483);
	v->a[48638] = 1;
	v->a[48639] = anon_sym_DQUOTE;
	small_parse_table_2432(v);
}

void	small_parse_table_2432(t_small_parse_table_array *v)
{
	v->a[48640] = actions(1487);
	v->a[48641] = 1;
	v->a[48642] = anon_sym_DOLLAR_LBRACE;
	v->a[48643] = actions(1489);
	v->a[48644] = 1;
	v->a[48645] = anon_sym_DOLLAR_LPAREN;
	v->a[48646] = actions(1491);
	v->a[48647] = 1;
	v->a[48648] = anon_sym_BQUOTE;
	v->a[48649] = actions(1493);
	v->a[48650] = 1;
	v->a[48651] = sym_variable_name;
	v->a[48652] = actions(1475);
	v->a[48653] = 2;
	v->a[48654] = anon_sym_PLUS_PLUS;
	v->a[48655] = anon_sym_DASH_DASH;
	v->a[48656] = actions(1477);
	v->a[48657] = 2;
	v->a[48658] = anon_sym_DASH2;
	v->a[48659] = anon_sym_PLUS2;
	small_parse_table_2433(v);
}

void	small_parse_table_2433(t_small_parse_table_array *v)
{
	v->a[48660] = actions(1485);
	v->a[48661] = 2;
	v->a[48662] = sym_number;
	v->a[48663] = aux_sym__simple_variable_name_token1;
	v->a[48664] = state(194);
	v->a[48665] = 3;
	v->a[48666] = sym_string;
	v->a[48667] = sym_simple_expansion;
	v->a[48668] = sym_expansion;
	v->a[48669] = state(209);
	v->a[48670] = 8;
	v->a[48671] = sym__arithmetic_expression;
	v->a[48672] = sym_arithmetic_literal;
	v->a[48673] = sym_arithmetic_binary_expression;
	v->a[48674] = sym_arithmetic_ternary_expression;
	v->a[48675] = sym_arithmetic_unary_expression;
	v->a[48676] = sym_arithmetic_postfix_expression;
	v->a[48677] = sym_arithmetic_parenthesized_expression;
	v->a[48678] = sym_command_substitution;
	v->a[48679] = 6;
	small_parse_table_2434(v);
}

void	small_parse_table_2434(t_small_parse_table_array *v)
{
	v->a[48680] = actions(3);
	v->a[48681] = 1;
	v->a[48682] = sym_comment;
	v->a[48683] = actions(1760);
	v->a[48684] = 1;
	v->a[48685] = aux_sym_concatenation_token1;
	v->a[48686] = actions(1770);
	v->a[48687] = 1;
	v->a[48688] = sym__concat;
	v->a[48689] = state(798);
	v->a[48690] = 1;
	v->a[48691] = aux_sym_concatenation_repeat1;
	v->a[48692] = actions(1239);
	v->a[48693] = 2;
	v->a[48694] = sym_file_descriptor;
	v->a[48695] = sym__bare_dollar;
	v->a[48696] = actions(1235);
	v->a[48697] = 21;
	v->a[48698] = anon_sym_PIPE;
	v->a[48699] = anon_sym_AMP_AMP;
	small_parse_table_2435(v);
}

/* EOF small_parse_table_486.c */
