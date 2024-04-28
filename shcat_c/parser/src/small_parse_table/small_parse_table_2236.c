/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2236.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11180(t_small_parse_table_array *v)
{
	v->a[223600] = sym__arithmetic_unary_expression;
	v->a[223601] = state(3400);
	v->a[223602] = 1;
	v->a[223603] = sym__arithmetic_postfix_expression;
	v->a[223604] = actions(9368);
	v->a[223605] = 2;
	v->a[223606] = anon_sym_PLUS_PLUS2;
	v->a[223607] = anon_sym_DASH_DASH2;
	v->a[223608] = actions(9370);
	v->a[223609] = 2;
	v->a[223610] = anon_sym_DASH2;
	v->a[223611] = anon_sym_PLUS2;
	v->a[223612] = state(3308);
	v->a[223613] = 9;
	v->a[223614] = sym_subscript;
	v->a[223615] = sym__arithmetic_expression;
	v->a[223616] = sym__arithmetic_literal;
	v->a[223617] = sym__arithmetic_parenthesized_expression;
	v->a[223618] = sym_string;
	v->a[223619] = sym_number;
	small_parse_table_11181(v);
}

void	small_parse_table_11181(t_small_parse_table_array *v)
{
	v->a[223620] = sym_simple_expansion;
	v->a[223621] = sym_expansion;
	v->a[223622] = sym_command_substitution;
	v->a[223623] = 21;
	v->a[223624] = actions(71);
	v->a[223625] = 1;
	v->a[223626] = sym_comment;
	v->a[223627] = actions(3064);
	v->a[223628] = 1;
	v->a[223629] = sym_variable_name;
	v->a[223630] = actions(9278);
	v->a[223631] = 1;
	v->a[223632] = anon_sym_LPAREN;
	v->a[223633] = actions(9280);
	v->a[223634] = 1;
	v->a[223635] = anon_sym_BANG;
	v->a[223636] = actions(9286);
	v->a[223637] = 1;
	v->a[223638] = anon_sym_TILDE;
	v->a[223639] = actions(9288);
	small_parse_table_11182(v);
}

void	small_parse_table_11182(t_small_parse_table_array *v)
{
	v->a[223640] = 1;
	v->a[223641] = anon_sym_DOLLAR;
	v->a[223642] = actions(9290);
	v->a[223643] = 1;
	v->a[223644] = anon_sym_DQUOTE;
	v->a[223645] = actions(9292);
	v->a[223646] = 1;
	v->a[223647] = aux_sym_number_token1;
	v->a[223648] = actions(9294);
	v->a[223649] = 1;
	v->a[223650] = aux_sym_number_token2;
	v->a[223651] = actions(9296);
	v->a[223652] = 1;
	v->a[223653] = anon_sym_DOLLAR_LBRACE;
	v->a[223654] = actions(9298);
	v->a[223655] = 1;
	v->a[223656] = anon_sym_DOLLAR_LPAREN;
	v->a[223657] = actions(9300);
	v->a[223658] = 1;
	v->a[223659] = anon_sym_BQUOTE;
	small_parse_table_11183(v);
}

void	small_parse_table_11183(t_small_parse_table_array *v)
{
	v->a[223660] = actions(9302);
	v->a[223661] = 1;
	v->a[223662] = anon_sym_DOLLAR_BQUOTE;
	v->a[223663] = actions(10662);
	v->a[223664] = 1;
	v->a[223665] = aux_sym__simple_variable_name_token1;
	v->a[223666] = state(2801);
	v->a[223667] = 1;
	v->a[223668] = sym__arithmetic_binary_expression;
	v->a[223669] = state(2803);
	v->a[223670] = 1;
	v->a[223671] = sym__arithmetic_ternary_expression;
	v->a[223672] = state(2809);
	v->a[223673] = 1;
	v->a[223674] = sym__arithmetic_unary_expression;
	v->a[223675] = state(2825);
	v->a[223676] = 1;
	v->a[223677] = sym__arithmetic_postfix_expression;
	v->a[223678] = actions(9282);
	v->a[223679] = 2;
	small_parse_table_11184(v);
}

void	small_parse_table_11184(t_small_parse_table_array *v)
{
	v->a[223680] = anon_sym_PLUS_PLUS2;
	v->a[223681] = anon_sym_DASH_DASH2;
	v->a[223682] = actions(9284);
	v->a[223683] = 2;
	v->a[223684] = anon_sym_DASH2;
	v->a[223685] = anon_sym_PLUS2;
	v->a[223686] = state(2768);
	v->a[223687] = 9;
	v->a[223688] = sym_subscript;
	v->a[223689] = sym__arithmetic_expression;
	v->a[223690] = sym__arithmetic_literal;
	v->a[223691] = sym__arithmetic_parenthesized_expression;
	v->a[223692] = sym_string;
	v->a[223693] = sym_number;
	v->a[223694] = sym_simple_expansion;
	v->a[223695] = sym_expansion;
	v->a[223696] = sym_command_substitution;
	v->a[223697] = 18;
	v->a[223698] = actions(3);
	v->a[223699] = 1;
	small_parse_table_11185(v);
}

/* EOF small_parse_table_2236.c */
