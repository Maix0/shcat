/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_346.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1730(t_small_parse_table_array *v)
{
	v->a[34600] = actions(1428);
	v->a[34601] = 1;
	v->a[34602] = anon_sym_DOLLAR;
	v->a[34603] = actions(1430);
	v->a[34604] = 1;
	v->a[34605] = anon_sym_DQUOTE;
	v->a[34606] = actions(1434);
	v->a[34607] = 1;
	v->a[34608] = anon_sym_DOLLAR_LBRACE;
	v->a[34609] = actions(1436);
	v->a[34610] = 1;
	v->a[34611] = sym_comment;
	v->a[34612] = actions(1438);
	v->a[34613] = 1;
	v->a[34614] = sym_variable_name;
	v->a[34615] = actions(1426);
	v->a[34616] = 2;
	v->a[34617] = anon_sym_DASH2;
	v->a[34618] = anon_sym_PLUS2;
	v->a[34619] = actions(1432);
	small_parse_table_1731(v);
}

void	small_parse_table_1731(t_small_parse_table_array *v)
{
	v->a[34620] = 2;
	v->a[34621] = sym_number;
	v->a[34622] = aux_sym__simple_variable_name_token1;
	v->a[34623] = state(1312);
	v->a[34624] = 3;
	v->a[34625] = sym_string;
	v->a[34626] = sym_simple_expansion;
	v->a[34627] = sym_expansion;
	v->a[34628] = state(1336);
	v->a[34629] = 7;
	v->a[34630] = sym__arithmetic_expression;
	v->a[34631] = sym_arithmetic_literal;
	v->a[34632] = sym_arithmetic_binary_expression;
	v->a[34633] = sym_arithmetic_ternary_expression;
	v->a[34634] = sym_arithmetic_unary_expression;
	v->a[34635] = sym_arithmetic_postfix_expression;
	v->a[34636] = sym_arithmetic_parenthesized_expression;
	v->a[34637] = 10;
	v->a[34638] = actions(1424);
	v->a[34639] = 1;
	small_parse_table_1732(v);
}

void	small_parse_table_1732(t_small_parse_table_array *v)
{
	v->a[34640] = anon_sym_LPAREN;
	v->a[34641] = actions(1428);
	v->a[34642] = 1;
	v->a[34643] = anon_sym_DOLLAR;
	v->a[34644] = actions(1430);
	v->a[34645] = 1;
	v->a[34646] = anon_sym_DQUOTE;
	v->a[34647] = actions(1434);
	v->a[34648] = 1;
	v->a[34649] = anon_sym_DOLLAR_LBRACE;
	v->a[34650] = actions(1436);
	v->a[34651] = 1;
	v->a[34652] = sym_comment;
	v->a[34653] = actions(1438);
	v->a[34654] = 1;
	v->a[34655] = sym_variable_name;
	v->a[34656] = actions(1426);
	v->a[34657] = 2;
	v->a[34658] = anon_sym_DASH2;
	v->a[34659] = anon_sym_PLUS2;
	small_parse_table_1733(v);
}

void	small_parse_table_1733(t_small_parse_table_array *v)
{
	v->a[34660] = actions(1432);
	v->a[34661] = 2;
	v->a[34662] = sym_number;
	v->a[34663] = aux_sym__simple_variable_name_token1;
	v->a[34664] = state(1312);
	v->a[34665] = 3;
	v->a[34666] = sym_string;
	v->a[34667] = sym_simple_expansion;
	v->a[34668] = sym_expansion;
	v->a[34669] = state(1372);
	v->a[34670] = 7;
	v->a[34671] = sym__arithmetic_expression;
	v->a[34672] = sym_arithmetic_literal;
	v->a[34673] = sym_arithmetic_binary_expression;
	v->a[34674] = sym_arithmetic_ternary_expression;
	v->a[34675] = sym_arithmetic_unary_expression;
	v->a[34676] = sym_arithmetic_postfix_expression;
	v->a[34677] = sym_arithmetic_parenthesized_expression;
	v->a[34678] = 3;
	v->a[34679] = actions(3);
	small_parse_table_1734(v);
}

void	small_parse_table_1734(t_small_parse_table_array *v)
{
	v->a[34680] = 1;
	v->a[34681] = sym_comment;
	v->a[34682] = actions(1093);
	v->a[34683] = 2;
	v->a[34684] = sym__concat;
	v->a[34685] = sym_variable_name;
	v->a[34686] = actions(1091);
	v->a[34687] = 17;
	v->a[34688] = anon_sym_PIPE;
	v->a[34689] = anon_sym_AMP_AMP;
	v->a[34690] = anon_sym_PIPE_PIPE;
	v->a[34691] = anon_sym_LT;
	v->a[34692] = anon_sym_GT;
	v->a[34693] = anon_sym_GT_GT;
	v->a[34694] = anon_sym_LT_LT;
	v->a[34695] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34696] = aux_sym_concatenation_token1;
	v->a[34697] = anon_sym_DOLLAR;
	v->a[34698] = anon_sym_DQUOTE;
	v->a[34699] = sym_raw_string;
	small_parse_table_1735(v);
}

/* EOF small_parse_table_346.c */
