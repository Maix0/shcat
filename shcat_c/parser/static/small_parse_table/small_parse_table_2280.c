/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2280.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11400(t_small_parse_table_array *v)
{
	v->a[228000] = sym__arithmetic_ternary_expression;
	v->a[228001] = state(3375);
	v->a[228002] = 1;
	v->a[228003] = sym__arithmetic_binary_expression;
	v->a[228004] = actions(9902);
	v->a[228005] = 2;
	v->a[228006] = anon_sym_PLUS_PLUS2;
	v->a[228007] = anon_sym_DASH_DASH2;
	v->a[228008] = actions(9904);
	v->a[228009] = 2;
	v->a[228010] = anon_sym_DASH2;
	v->a[228011] = anon_sym_PLUS2;
	v->a[228012] = state(3263);
	v->a[228013] = 9;
	v->a[228014] = sym_subscript;
	v->a[228015] = sym__arithmetic_expression;
	v->a[228016] = sym__arithmetic_literal;
	v->a[228017] = sym__arithmetic_parenthesized_expression;
	v->a[228018] = sym_string;
	v->a[228019] = sym_number;
	small_parse_table_11401(v);
}

void	small_parse_table_11401(t_small_parse_table_array *v)
{
	v->a[228020] = sym_simple_expansion;
	v->a[228021] = sym_expansion;
	v->a[228022] = sym_command_substitution;
	v->a[228023] = 21;
	v->a[228024] = actions(71);
	v->a[228025] = 1;
	v->a[228026] = sym_comment;
	v->a[228027] = actions(3602);
	v->a[228028] = 1;
	v->a[228029] = sym_variable_name;
	v->a[228030] = actions(9898);
	v->a[228031] = 1;
	v->a[228032] = anon_sym_LPAREN;
	v->a[228033] = actions(9900);
	v->a[228034] = 1;
	v->a[228035] = anon_sym_BANG;
	v->a[228036] = actions(9906);
	v->a[228037] = 1;
	v->a[228038] = anon_sym_TILDE;
	v->a[228039] = actions(9908);
	small_parse_table_11402(v);
}

void	small_parse_table_11402(t_small_parse_table_array *v)
{
	v->a[228040] = 1;
	v->a[228041] = anon_sym_DOLLAR;
	v->a[228042] = actions(9910);
	v->a[228043] = 1;
	v->a[228044] = anon_sym_DQUOTE;
	v->a[228045] = actions(9912);
	v->a[228046] = 1;
	v->a[228047] = aux_sym_number_token1;
	v->a[228048] = actions(9914);
	v->a[228049] = 1;
	v->a[228050] = aux_sym_number_token2;
	v->a[228051] = actions(9916);
	v->a[228052] = 1;
	v->a[228053] = anon_sym_DOLLAR_LBRACE;
	v->a[228054] = actions(9918);
	v->a[228055] = 1;
	v->a[228056] = anon_sym_DOLLAR_LPAREN;
	v->a[228057] = actions(9920);
	v->a[228058] = 1;
	v->a[228059] = anon_sym_BQUOTE;
	small_parse_table_11403(v);
}

void	small_parse_table_11403(t_small_parse_table_array *v)
{
	v->a[228060] = actions(9922);
	v->a[228061] = 1;
	v->a[228062] = anon_sym_DOLLAR_BQUOTE;
	v->a[228063] = actions(10830);
	v->a[228064] = 1;
	v->a[228065] = aux_sym__simple_variable_name_token1;
	v->a[228066] = state(3359);
	v->a[228067] = 1;
	v->a[228068] = sym__arithmetic_postfix_expression;
	v->a[228069] = state(3361);
	v->a[228070] = 1;
	v->a[228071] = sym__arithmetic_unary_expression;
	v->a[228072] = state(3367);
	v->a[228073] = 1;
	v->a[228074] = sym__arithmetic_ternary_expression;
	v->a[228075] = state(3375);
	v->a[228076] = 1;
	v->a[228077] = sym__arithmetic_binary_expression;
	v->a[228078] = actions(9902);
	v->a[228079] = 2;
	small_parse_table_11404(v);
}

void	small_parse_table_11404(t_small_parse_table_array *v)
{
	v->a[228080] = anon_sym_PLUS_PLUS2;
	v->a[228081] = anon_sym_DASH_DASH2;
	v->a[228082] = actions(9904);
	v->a[228083] = 2;
	v->a[228084] = anon_sym_DASH2;
	v->a[228085] = anon_sym_PLUS2;
	v->a[228086] = state(3264);
	v->a[228087] = 9;
	v->a[228088] = sym_subscript;
	v->a[228089] = sym__arithmetic_expression;
	v->a[228090] = sym__arithmetic_literal;
	v->a[228091] = sym__arithmetic_parenthesized_expression;
	v->a[228092] = sym_string;
	v->a[228093] = sym_number;
	v->a[228094] = sym_simple_expansion;
	v->a[228095] = sym_expansion;
	v->a[228096] = sym_command_substitution;
	v->a[228097] = 21;
	v->a[228098] = actions(71);
	v->a[228099] = 1;
	small_parse_table_11405(v);
}

/* EOF small_parse_table_2280.c */
