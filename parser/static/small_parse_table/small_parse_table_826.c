/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_826.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4130(t_small_parse_table_array *v)
{
	v->a[82600] = state(1638);
	v->a[82601] = 1;
	v->a[82602] = sym__arithmetic_unary_expression;
	v->a[82603] = state(1640);
	v->a[82604] = 1;
	v->a[82605] = sym__arithmetic_ternary_expression;
	v->a[82606] = state(1642);
	v->a[82607] = 1;
	v->a[82608] = sym__arithmetic_binary_expression;
	v->a[82609] = actions(4618);
	v->a[82610] = 2;
	v->a[82611] = anon_sym_PLUS_PLUS;
	v->a[82612] = anon_sym_DASH_DASH;
	v->a[82613] = actions(4620);
	v->a[82614] = 2;
	v->a[82615] = anon_sym_DASH2;
	v->a[82616] = anon_sym_PLUS2;
	v->a[82617] = state(1616);
	v->a[82618] = 8;
	v->a[82619] = sym__arithmetic_expression;
	small_parse_table_4131(v);
}

void	small_parse_table_4131(t_small_parse_table_array *v)
{
	v->a[82620] = sym__arithmetic_literal;
	v->a[82621] = sym__arithmetic_parenthesized_expression;
	v->a[82622] = sym_string;
	v->a[82623] = sym_number;
	v->a[82624] = sym_simple_expansion;
	v->a[82625] = sym_expansion;
	v->a[82626] = sym_command_substitution;
	v->a[82627] = 21;
	v->a[82628] = actions(57);
	v->a[82629] = 1;
	v->a[82630] = sym_comment;
	v->a[82631] = actions(4614);
	v->a[82632] = 1;
	v->a[82633] = anon_sym_LPAREN;
	v->a[82634] = actions(4616);
	v->a[82635] = 1;
	v->a[82636] = anon_sym_BANG;
	v->a[82637] = actions(4622);
	v->a[82638] = 1;
	v->a[82639] = anon_sym_TILDE;
	small_parse_table_4132(v);
}

void	small_parse_table_4132(t_small_parse_table_array *v)
{
	v->a[82640] = actions(4624);
	v->a[82641] = 1;
	v->a[82642] = anon_sym_DOLLAR;
	v->a[82643] = actions(4626);
	v->a[82644] = 1;
	v->a[82645] = anon_sym_DQUOTE;
	v->a[82646] = actions(4628);
	v->a[82647] = 1;
	v->a[82648] = aux_sym_number_token1;
	v->a[82649] = actions(4630);
	v->a[82650] = 1;
	v->a[82651] = aux_sym_number_token2;
	v->a[82652] = actions(4632);
	v->a[82653] = 1;
	v->a[82654] = anon_sym_DOLLAR_LBRACE;
	v->a[82655] = actions(4634);
	v->a[82656] = 1;
	v->a[82657] = anon_sym_DOLLAR_LPAREN;
	v->a[82658] = actions(4636);
	v->a[82659] = 1;
	small_parse_table_4133(v);
}

void	small_parse_table_4133(t_small_parse_table_array *v)
{
	v->a[82660] = anon_sym_BQUOTE;
	v->a[82661] = actions(4638);
	v->a[82662] = 1;
	v->a[82663] = anon_sym_DOLLAR_BQUOTE;
	v->a[82664] = actions(4648);
	v->a[82665] = 1;
	v->a[82666] = aux_sym__simple_variable_name_token1;
	v->a[82667] = actions(4650);
	v->a[82668] = 1;
	v->a[82669] = sym_variable_name;
	v->a[82670] = state(1637);
	v->a[82671] = 1;
	v->a[82672] = sym__arithmetic_postfix_expression;
	v->a[82673] = state(1638);
	v->a[82674] = 1;
	v->a[82675] = sym__arithmetic_unary_expression;
	v->a[82676] = state(1640);
	v->a[82677] = 1;
	v->a[82678] = sym__arithmetic_ternary_expression;
	v->a[82679] = state(1642);
	small_parse_table_4134(v);
}

void	small_parse_table_4134(t_small_parse_table_array *v)
{
	v->a[82680] = 1;
	v->a[82681] = sym__arithmetic_binary_expression;
	v->a[82682] = actions(4618);
	v->a[82683] = 2;
	v->a[82684] = anon_sym_PLUS_PLUS;
	v->a[82685] = anon_sym_DASH_DASH;
	v->a[82686] = actions(4620);
	v->a[82687] = 2;
	v->a[82688] = anon_sym_DASH2;
	v->a[82689] = anon_sym_PLUS2;
	v->a[82690] = state(1617);
	v->a[82691] = 8;
	v->a[82692] = sym__arithmetic_expression;
	v->a[82693] = sym__arithmetic_literal;
	v->a[82694] = sym__arithmetic_parenthesized_expression;
	v->a[82695] = sym_string;
	v->a[82696] = sym_number;
	v->a[82697] = sym_simple_expansion;
	v->a[82698] = sym_expansion;
	v->a[82699] = sym_command_substitution;
	small_parse_table_4135(v);
}

/* EOF small_parse_table_826.c */
