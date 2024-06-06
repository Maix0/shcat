/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_856.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4280(t_small_parse_table_array *v)
{
	v->a[85600] = anon_sym_DASH2;
	v->a[85601] = anon_sym_PLUS2;
	v->a[85602] = state(1427);
	v->a[85603] = 8;
	v->a[85604] = sym__arithmetic_expression;
	v->a[85605] = sym__arithmetic_literal;
	v->a[85606] = sym__arithmetic_parenthesized_expression;
	v->a[85607] = sym_string;
	v->a[85608] = sym_number;
	v->a[85609] = sym_simple_expansion;
	v->a[85610] = sym_expansion;
	v->a[85611] = sym_command_substitution;
	v->a[85612] = 21;
	v->a[85613] = actions(57);
	v->a[85614] = 1;
	v->a[85615] = sym_comment;
	v->a[85616] = actions(4614);
	v->a[85617] = 1;
	v->a[85618] = anon_sym_LPAREN;
	v->a[85619] = actions(4616);
	small_parse_table_4281(v);
}

void	small_parse_table_4281(t_small_parse_table_array *v)
{
	v->a[85620] = 1;
	v->a[85621] = anon_sym_BANG;
	v->a[85622] = actions(4622);
	v->a[85623] = 1;
	v->a[85624] = anon_sym_TILDE;
	v->a[85625] = actions(4624);
	v->a[85626] = 1;
	v->a[85627] = anon_sym_DOLLAR;
	v->a[85628] = actions(4626);
	v->a[85629] = 1;
	v->a[85630] = anon_sym_DQUOTE;
	v->a[85631] = actions(4628);
	v->a[85632] = 1;
	v->a[85633] = aux_sym_number_token1;
	v->a[85634] = actions(4630);
	v->a[85635] = 1;
	v->a[85636] = aux_sym_number_token2;
	v->a[85637] = actions(4632);
	v->a[85638] = 1;
	v->a[85639] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4282(v);
}

void	small_parse_table_4282(t_small_parse_table_array *v)
{
	v->a[85640] = actions(4634);
	v->a[85641] = 1;
	v->a[85642] = anon_sym_DOLLAR_LPAREN;
	v->a[85643] = actions(4636);
	v->a[85644] = 1;
	v->a[85645] = anon_sym_BQUOTE;
	v->a[85646] = actions(4638);
	v->a[85647] = 1;
	v->a[85648] = anon_sym_DOLLAR_BQUOTE;
	v->a[85649] = actions(4764);
	v->a[85650] = 1;
	v->a[85651] = aux_sym__simple_variable_name_token1;
	v->a[85652] = actions(4766);
	v->a[85653] = 1;
	v->a[85654] = sym_variable_name;
	v->a[85655] = state(1637);
	v->a[85656] = 1;
	v->a[85657] = sym__arithmetic_postfix_expression;
	v->a[85658] = state(1638);
	v->a[85659] = 1;
	small_parse_table_4283(v);
}

void	small_parse_table_4283(t_small_parse_table_array *v)
{
	v->a[85660] = sym__arithmetic_unary_expression;
	v->a[85661] = state(1640);
	v->a[85662] = 1;
	v->a[85663] = sym__arithmetic_ternary_expression;
	v->a[85664] = state(1642);
	v->a[85665] = 1;
	v->a[85666] = sym__arithmetic_binary_expression;
	v->a[85667] = actions(4618);
	v->a[85668] = 2;
	v->a[85669] = anon_sym_PLUS_PLUS;
	v->a[85670] = anon_sym_DASH_DASH;
	v->a[85671] = actions(4620);
	v->a[85672] = 2;
	v->a[85673] = anon_sym_DASH2;
	v->a[85674] = anon_sym_PLUS2;
	v->a[85675] = state(1610);
	v->a[85676] = 8;
	v->a[85677] = sym__arithmetic_expression;
	v->a[85678] = sym__arithmetic_literal;
	v->a[85679] = sym__arithmetic_parenthesized_expression;
	small_parse_table_4284(v);
}

void	small_parse_table_4284(t_small_parse_table_array *v)
{
	v->a[85680] = sym_string;
	v->a[85681] = sym_number;
	v->a[85682] = sym_simple_expansion;
	v->a[85683] = sym_expansion;
	v->a[85684] = sym_command_substitution;
	v->a[85685] = 10;
	v->a[85686] = actions(57);
	v->a[85687] = 1;
	v->a[85688] = sym_comment;
	v->a[85689] = actions(4781);
	v->a[85690] = 1;
	v->a[85691] = sym_file_descriptor;
	v->a[85692] = actions(4784);
	v->a[85693] = 1;
	v->a[85694] = sym_variable_name;
	v->a[85695] = state(1995);
	v->a[85696] = 1;
	v->a[85697] = sym_file_redirect;
	v->a[85698] = actions(4776);
	v->a[85699] = 2;
	small_parse_table_4285(v);
}

/* EOF small_parse_table_856.c */
