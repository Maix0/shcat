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
	v->a[48600] = 1;
	v->a[48601] = anon_sym_DQUOTE;
	v->a[48602] = actions(1592);
	v->a[48603] = 1;
	v->a[48604] = anon_sym_DOLLAR_LBRACE;
	v->a[48605] = actions(1594);
	v->a[48606] = 1;
	v->a[48607] = anon_sym_DOLLAR_LPAREN;
	v->a[48608] = actions(1596);
	v->a[48609] = 1;
	v->a[48610] = anon_sym_BQUOTE;
	v->a[48611] = actions(1598);
	v->a[48612] = 1;
	v->a[48613] = sym_variable_name;
	v->a[48614] = actions(1580);
	v->a[48615] = 2;
	v->a[48616] = anon_sym_PLUS_PLUS;
	v->a[48617] = anon_sym_DASH_DASH;
	v->a[48618] = actions(1582);
	v->a[48619] = 2;
	small_parse_table_2431(v);
}

void	small_parse_table_2431(t_small_parse_table_array *v)
{
	v->a[48620] = anon_sym_DASH2;
	v->a[48621] = anon_sym_PLUS2;
	v->a[48622] = actions(1590);
	v->a[48623] = 2;
	v->a[48624] = sym_number;
	v->a[48625] = aux_sym__simple_variable_name_token1;
	v->a[48626] = state(238);
	v->a[48627] = 3;
	v->a[48628] = sym_string;
	v->a[48629] = sym_simple_expansion;
	v->a[48630] = sym_expansion;
	v->a[48631] = state(271);
	v->a[48632] = 8;
	v->a[48633] = sym__arithmetic_expression;
	v->a[48634] = sym_arithmetic_literal;
	v->a[48635] = sym_arithmetic_binary_expression;
	v->a[48636] = sym_arithmetic_ternary_expression;
	v->a[48637] = sym_arithmetic_unary_expression;
	v->a[48638] = sym_arithmetic_postfix_expression;
	v->a[48639] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2432(v);
}

void	small_parse_table_2432(t_small_parse_table_array *v)
{
	v->a[48640] = sym_command_substitution;
	v->a[48641] = 3;
	v->a[48642] = actions(3);
	v->a[48643] = 1;
	v->a[48644] = sym_comment;
	v->a[48645] = actions(835);
	v->a[48646] = 3;
	v->a[48647] = sym_file_descriptor;
	v->a[48648] = sym__concat;
	v->a[48649] = sym__bare_dollar;
	v->a[48650] = actions(833);
	v->a[48651] = 23;
	v->a[48652] = anon_sym_LPAREN;
	v->a[48653] = anon_sym_PIPE;
	v->a[48654] = anon_sym_AMP_AMP;
	v->a[48655] = anon_sym_PIPE_PIPE;
	v->a[48656] = anon_sym_LT;
	v->a[48657] = anon_sym_GT;
	v->a[48658] = anon_sym_GT_GT;
	v->a[48659] = anon_sym_LT_AMP;
	small_parse_table_2433(v);
}

void	small_parse_table_2433(t_small_parse_table_array *v)
{
	v->a[48660] = anon_sym_GT_AMP;
	v->a[48661] = anon_sym_GT_PIPE;
	v->a[48662] = anon_sym_LT_GT;
	v->a[48663] = anon_sym_LT_LT;
	v->a[48664] = anon_sym_LT_LT_DASH;
	v->a[48665] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48666] = aux_sym_concatenation_token1;
	v->a[48667] = anon_sym_DOLLAR;
	v->a[48668] = anon_sym_DQUOTE;
	v->a[48669] = sym_raw_string;
	v->a[48670] = sym_number;
	v->a[48671] = anon_sym_DOLLAR_LBRACE;
	v->a[48672] = anon_sym_DOLLAR_LPAREN;
	v->a[48673] = anon_sym_BQUOTE;
	v->a[48674] = sym_word;
	v->a[48675] = 3;
	v->a[48676] = actions(3);
	v->a[48677] = 1;
	v->a[48678] = sym_comment;
	v->a[48679] = actions(688);
	small_parse_table_2434(v);
}

void	small_parse_table_2434(t_small_parse_table_array *v)
{
	v->a[48680] = 3;
	v->a[48681] = sym_file_descriptor;
	v->a[48682] = sym__concat;
	v->a[48683] = sym__bare_dollar;
	v->a[48684] = actions(686);
	v->a[48685] = 23;
	v->a[48686] = anon_sym_LPAREN;
	v->a[48687] = anon_sym_PIPE;
	v->a[48688] = anon_sym_AMP_AMP;
	v->a[48689] = anon_sym_PIPE_PIPE;
	v->a[48690] = anon_sym_LT;
	v->a[48691] = anon_sym_GT;
	v->a[48692] = anon_sym_GT_GT;
	v->a[48693] = anon_sym_LT_AMP;
	v->a[48694] = anon_sym_GT_AMP;
	v->a[48695] = anon_sym_GT_PIPE;
	v->a[48696] = anon_sym_LT_GT;
	v->a[48697] = anon_sym_LT_LT;
	v->a[48698] = anon_sym_LT_LT_DASH;
	v->a[48699] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2435(v);
}

/* EOF small_parse_table_486.c */
