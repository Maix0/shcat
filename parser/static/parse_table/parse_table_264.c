/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_264.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1320(t_parse_table_array *v)
{
	v->a[1097][anon_sym_BQUOTE] = actions(2305);
	v->a[1097][sym_comment] = actions(3);
	v->a[1098][sym_arithmetic_expansion] = state(1394);
	v->a[1098][sym_simple_expansion] = state(1394);
	v->a[1098][sym_expansion] = state(1394);
	v->a[1098][sym_command_substitution] = state(1394);
	v->a[1098][aux_sym_string_repeat1] = state(1103);
	v->a[1098][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(2293);
	v->a[1098][anon_sym_DOLLAR] = actions(2321);
	v->a[1098][anon_sym_DQUOTE] = actions(2323);
	v->a[1098][sym_string_content] = actions(2299);
	v->a[1098][anon_sym_DOLLAR_LBRACE] = actions(2301);
	v->a[1098][anon_sym_DOLLAR_LPAREN] = actions(2303);
	v->a[1098][anon_sym_BQUOTE] = actions(2305);
	v->a[1098][sym_comment] = actions(3);
	v->a[1099][sym__expansion_body] = state(1689);
	v->a[1099][anon_sym_RBRACE] = actions(2325);
	v->a[1099][anon_sym_BANG] = actions(2275);
	v->a[1099][anon_sym_DASH] = actions(2275);
	v->a[1099][anon_sym_STAR] = actions(2275);
	return (parse_table_1321(v));
}

void	parse_table_1321(t_parse_table_array *v)
{
	v->a[1099][anon_sym_QMARK] = actions(2275);
	v->a[1099][anon_sym_DOLLAR] = actions(2275);
	v->a[1099][anon_sym_POUND] = actions(2277);
	v->a[1099][sym_comment] = actions(3);
	v->a[1099][aux_sym__simple_variable_name_token1] = actions(2279);
	v->a[1099][anon_sym_AT] = actions(2275);
	v->a[1099][anon_sym_0] = actions(2281);
	v->a[1099][sym_variable_name] = actions(2283);
	v->a[1100][sym_arithmetic_expansion] = state(1394);
	v->a[1100][sym_simple_expansion] = state(1394);
	v->a[1100][sym_expansion] = state(1394);
	v->a[1100][sym_command_substitution] = state(1394);
	v->a[1100][aux_sym_string_repeat1] = state(1096);
	v->a[1100][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(2293);
	v->a[1100][anon_sym_DOLLAR] = actions(2327);
	v->a[1100][anon_sym_DQUOTE] = actions(2329);
	v->a[1100][sym_string_content] = actions(2299);
	v->a[1100][anon_sym_DOLLAR_LBRACE] = actions(2301);
	v->a[1100][anon_sym_DOLLAR_LPAREN] = actions(2303);
	v->a[1100][anon_sym_BQUOTE] = actions(2305);
	return (parse_table_1322(v));
}

void	parse_table_1322(t_parse_table_array *v)
{
	v->a[1100][sym_comment] = actions(3);
	v->a[1101][sym_arithmetic_expansion] = state(1394);
	v->a[1101][sym_simple_expansion] = state(1394);
	v->a[1101][sym_expansion] = state(1394);
	v->a[1101][sym_command_substitution] = state(1394);
	v->a[1101][aux_sym_string_repeat1] = state(1176);
	v->a[1101][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(2293);
	v->a[1101][anon_sym_DOLLAR] = actions(2331);
	v->a[1101][anon_sym_DQUOTE] = actions(2333);
	v->a[1101][sym_string_content] = actions(2299);
	v->a[1101][anon_sym_DOLLAR_LBRACE] = actions(2301);
	v->a[1101][anon_sym_DOLLAR_LPAREN] = actions(2303);
	v->a[1101][anon_sym_BQUOTE] = actions(2305);
	v->a[1101][sym_comment] = actions(3);
	v->a[1102][sym__expansion_body] = state(1686);
	v->a[1102][anon_sym_RBRACE] = actions(2335);
	v->a[1102][anon_sym_BANG] = actions(2275);
	v->a[1102][anon_sym_DASH] = actions(2275);
	v->a[1102][anon_sym_STAR] = actions(2275);
	v->a[1102][anon_sym_QMARK] = actions(2275);
	return (parse_table_1323(v));
}

void	parse_table_1323(t_parse_table_array *v)
{
	v->a[1102][anon_sym_DOLLAR] = actions(2275);
	v->a[1102][anon_sym_POUND] = actions(2277);
	v->a[1102][sym_comment] = actions(3);
	v->a[1102][aux_sym__simple_variable_name_token1] = actions(2279);
	v->a[1102][anon_sym_AT] = actions(2275);
	v->a[1102][anon_sym_0] = actions(2281);
	v->a[1102][sym_variable_name] = actions(2283);
	v->a[1103][sym_arithmetic_expansion] = state(1394);
	v->a[1103][sym_simple_expansion] = state(1394);
	v->a[1103][sym_expansion] = state(1394);
	v->a[1103][sym_command_substitution] = state(1394);
	v->a[1103][aux_sym_string_repeat1] = state(1176);
	v->a[1103][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(2293);
	v->a[1103][anon_sym_DOLLAR] = actions(2337);
	v->a[1103][anon_sym_DQUOTE] = actions(2339);
	v->a[1103][sym_string_content] = actions(2299);
	v->a[1103][anon_sym_DOLLAR_LBRACE] = actions(2301);
	v->a[1103][anon_sym_DOLLAR_LPAREN] = actions(2303);
	v->a[1103][anon_sym_BQUOTE] = actions(2305);
	v->a[1103][sym_comment] = actions(3);
	return (parse_table_1324(v));
}

void	parse_table_1324(t_parse_table_array *v)
{
	v->a[1104][sym_arithmetic_expansion] = state(1394);
	v->a[1104][sym_simple_expansion] = state(1394);
	v->a[1104][sym_expansion] = state(1394);
	v->a[1104][sym_command_substitution] = state(1394);
	v->a[1104][aux_sym_string_repeat1] = state(1118);
	v->a[1104][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(2293);
	v->a[1104][anon_sym_DOLLAR] = actions(2341);
	v->a[1104][anon_sym_DQUOTE] = actions(2343);
	v->a[1104][sym_string_content] = actions(2299);
	v->a[1104][anon_sym_DOLLAR_LBRACE] = actions(2301);
	v->a[1104][anon_sym_DOLLAR_LPAREN] = actions(2303);
	v->a[1104][anon_sym_BQUOTE] = actions(2305);
	v->a[1104][sym_comment] = actions(3);
	v->a[1105][sym__expansion_body] = state(1700);
	v->a[1105][anon_sym_RBRACE] = actions(2345);
	v->a[1105][anon_sym_BANG] = actions(2275);
	v->a[1105][anon_sym_DASH] = actions(2275);
	v->a[1105][anon_sym_STAR] = actions(2275);
	v->a[1105][anon_sym_QMARK] = actions(2275);
	v->a[1105][anon_sym_DOLLAR] = actions(2275);
	return (parse_table_1325(v));
}

/* EOF parse_table_264.c */
