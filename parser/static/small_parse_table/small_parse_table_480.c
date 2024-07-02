/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_480.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2400(t_small_parse_table_array *v)
{
	v->a[48000] = anon_sym_DASH2;
	v->a[48001] = anon_sym_PLUS2;
	v->a[48002] = actions(1744);
	v->a[48003] = 2;
	v->a[48004] = sym_number;
	v->a[48005] = aux_sym__simple_variable_name_token1;
	v->a[48006] = state(264);
	v->a[48007] = 3;
	v->a[48008] = sym_string;
	v->a[48009] = sym_simple_expansion;
	v->a[48010] = sym_expansion;
	v->a[48011] = state(314);
	v->a[48012] = 8;
	v->a[48013] = sym__arithmetic_expression;
	v->a[48014] = sym_arithmetic_literal;
	v->a[48015] = sym_arithmetic_binary_expression;
	v->a[48016] = sym_arithmetic_ternary_expression;
	v->a[48017] = sym_arithmetic_unary_expression;
	v->a[48018] = sym_arithmetic_postfix_expression;
	v->a[48019] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2401(v);
}

void	small_parse_table_2401(t_small_parse_table_array *v)
{
	v->a[48020] = sym_command_substitution;
	v->a[48021] = 15;
	v->a[48022] = actions(680);
	v->a[48023] = 1;
	v->a[48024] = sym_comment;
	v->a[48025] = actions(1730);
	v->a[48026] = 1;
	v->a[48027] = anon_sym_LPAREN;
	v->a[48028] = actions(1732);
	v->a[48029] = 1;
	v->a[48030] = anon_sym_BANG;
	v->a[48031] = actions(1738);
	v->a[48032] = 1;
	v->a[48033] = anon_sym_TILDE;
	v->a[48034] = actions(1740);
	v->a[48035] = 1;
	v->a[48036] = anon_sym_DOLLAR;
	v->a[48037] = actions(1742);
	v->a[48038] = 1;
	v->a[48039] = anon_sym_DQUOTE;
	small_parse_table_2402(v);
}

void	small_parse_table_2402(t_small_parse_table_array *v)
{
	v->a[48040] = actions(1746);
	v->a[48041] = 1;
	v->a[48042] = anon_sym_DOLLAR_LBRACE;
	v->a[48043] = actions(1748);
	v->a[48044] = 1;
	v->a[48045] = anon_sym_DOLLAR_LPAREN;
	v->a[48046] = actions(1750);
	v->a[48047] = 1;
	v->a[48048] = anon_sym_BQUOTE;
	v->a[48049] = actions(1752);
	v->a[48050] = 1;
	v->a[48051] = sym_variable_name;
	v->a[48052] = actions(1734);
	v->a[48053] = 2;
	v->a[48054] = anon_sym_PLUS_PLUS;
	v->a[48055] = anon_sym_DASH_DASH;
	v->a[48056] = actions(1736);
	v->a[48057] = 2;
	v->a[48058] = anon_sym_DASH2;
	v->a[48059] = anon_sym_PLUS2;
	small_parse_table_2403(v);
}

void	small_parse_table_2403(t_small_parse_table_array *v)
{
	v->a[48060] = actions(1744);
	v->a[48061] = 2;
	v->a[48062] = sym_number;
	v->a[48063] = aux_sym__simple_variable_name_token1;
	v->a[48064] = state(264);
	v->a[48065] = 3;
	v->a[48066] = sym_string;
	v->a[48067] = sym_simple_expansion;
	v->a[48068] = sym_expansion;
	v->a[48069] = state(315);
	v->a[48070] = 8;
	v->a[48071] = sym__arithmetic_expression;
	v->a[48072] = sym_arithmetic_literal;
	v->a[48073] = sym_arithmetic_binary_expression;
	v->a[48074] = sym_arithmetic_ternary_expression;
	v->a[48075] = sym_arithmetic_unary_expression;
	v->a[48076] = sym_arithmetic_postfix_expression;
	v->a[48077] = sym_arithmetic_parenthesized_expression;
	v->a[48078] = sym_command_substitution;
	v->a[48079] = 15;
	small_parse_table_2404(v);
}

void	small_parse_table_2404(t_small_parse_table_array *v)
{
	v->a[48080] = actions(680);
	v->a[48081] = 1;
	v->a[48082] = sym_comment;
	v->a[48083] = actions(1730);
	v->a[48084] = 1;
	v->a[48085] = anon_sym_LPAREN;
	v->a[48086] = actions(1732);
	v->a[48087] = 1;
	v->a[48088] = anon_sym_BANG;
	v->a[48089] = actions(1738);
	v->a[48090] = 1;
	v->a[48091] = anon_sym_TILDE;
	v->a[48092] = actions(1740);
	v->a[48093] = 1;
	v->a[48094] = anon_sym_DOLLAR;
	v->a[48095] = actions(1742);
	v->a[48096] = 1;
	v->a[48097] = anon_sym_DQUOTE;
	v->a[48098] = actions(1746);
	v->a[48099] = 1;
	small_parse_table_2405(v);
}

/* EOF small_parse_table_480.c */
