/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_67.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_335(t_parse_table_array *v)
{
	v->a[135][sym__variable_assignments] = state(953);
	v->a[135][sym_file_redirect] = state(551);
	v->a[135][sym_arithmetic_expansion] = state(525);
	v->a[135][sym_concatenation] = state(555);
	v->a[135][sym_string] = state(525);
	v->a[135][sym_simple_expansion] = state(525);
	v->a[135][sym_expansion] = state(525);
	v->a[135][sym_command_substitution] = state(525);
	v->a[135][aux_sym_redirected_statement_repeat2] = state(1309);
	v->a[135][aux_sym_command_repeat1] = state(387);
	v->a[135][sym_word] = actions(331);
	v->a[135][anon_sym_for] = actions(9);
	v->a[135][anon_sym_while] = actions(11);
	v->a[135][anon_sym_until] = actions(11);
	v->a[135][anon_sym_if] = actions(13);
	v->a[135][anon_sym_case] = actions(15);
	v->a[135][anon_sym_LPAREN] = actions(17);
	v->a[135][anon_sym_LBRACE] = actions(19);
	v->a[135][anon_sym_BANG] = actions(333);
	v->a[135][anon_sym_LT] = actions(335);
	return (parse_table_336(v));
}

void	parse_table_336(t_parse_table_array *v)
{
	v->a[135][anon_sym_GT] = actions(335);
	v->a[135][anon_sym_GT_GT] = actions(335);
	v->a[135][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[135][anon_sym_DOLLAR] = actions(55);
	v->a[135][anon_sym_DQUOTE] = actions(57);
	v->a[135][sym_raw_string] = actions(337);
	v->a[135][sym_number] = actions(337);
	v->a[135][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[135][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[135][anon_sym_BQUOTE] = actions(65);
	v->a[135][sym_comment] = actions(3);
	v->a[135][sym_variable_name] = actions(339);
	v->a[136][sym_for_statement] = state(1008);
	v->a[136][sym_while_statement] = state(1008);
	v->a[136][sym_if_statement] = state(1008);
	v->a[136][sym_compound_statement] = state(1008);
	v->a[136][sym_subshell] = state(1008);
	v->a[136][sym_command] = state(1008);
	v->a[136][sym_command_name] = state(185);
	v->a[136][sym_variable_assignment] = state(839);
	return (parse_table_337(v));
}

void	parse_table_337(t_parse_table_array *v)
{
	v->a[136][sym__variable_assignments] = state(1008);
	v->a[136][sym_file_redirect] = state(551);
	v->a[136][sym_arithmetic_expansion] = state(401);
	v->a[136][sym_concatenation] = state(555);
	v->a[136][sym_string] = state(401);
	v->a[136][sym_simple_expansion] = state(401);
	v->a[136][sym_expansion] = state(401);
	v->a[136][sym_command_substitution] = state(401);
	v->a[136][aux_sym_redirected_statement_repeat2] = state(1148);
	v->a[136][aux_sym_command_repeat1] = state(411);
	v->a[136][sym_word] = actions(59);
	v->a[136][anon_sym_for] = actions(9);
	v->a[136][anon_sym_while] = actions(11);
	v->a[136][anon_sym_until] = actions(11);
	v->a[136][anon_sym_if] = actions(13);
	v->a[136][anon_sym_LPAREN] = actions(17);
	v->a[136][anon_sym_LBRACE] = actions(19);
	v->a[136][anon_sym_LT] = actions(51);
	v->a[136][anon_sym_GT] = actions(51);
	v->a[136][anon_sym_GT_GT] = actions(51);
	return (parse_table_338(v));
}

void	parse_table_338(t_parse_table_array *v)
{
	v->a[136][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[136][anon_sym_DOLLAR] = actions(55);
	v->a[136][anon_sym_DQUOTE] = actions(57);
	v->a[136][sym_raw_string] = actions(59);
	v->a[136][sym_number] = actions(59);
	v->a[136][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[136][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[136][anon_sym_BQUOTE] = actions(65);
	v->a[136][sym_comment] = actions(3);
	v->a[136][sym_variable_name] = actions(341);
	v->a[137][sym_for_statement] = state(1404);
	v->a[137][sym_while_statement] = state(1404);
	v->a[137][sym_if_statement] = state(1404);
	v->a[137][sym_compound_statement] = state(1404);
	v->a[137][sym_subshell] = state(1404);
	v->a[137][sym_command] = state(1404);
	v->a[137][sym_command_name] = state(274);
	v->a[137][sym_variable_assignment] = state(861);
	v->a[137][sym__variable_assignments] = state(1404);
	v->a[137][sym_file_redirect] = state(707);
	return (parse_table_339(v));
}

void	parse_table_339(t_parse_table_array *v)
{
	v->a[137][sym_arithmetic_expansion] = state(606);
	v->a[137][sym_concatenation] = state(772);
	v->a[137][sym_string] = state(606);
	v->a[137][sym_simple_expansion] = state(606);
	v->a[137][sym_expansion] = state(606);
	v->a[137][sym_command_substitution] = state(606);
	v->a[137][aux_sym_redirected_statement_repeat2] = state(1337);
	v->a[137][aux_sym_command_repeat1] = state(328);
	v->a[137][sym_word] = actions(321);
	v->a[137][anon_sym_for] = actions(299);
	v->a[137][anon_sym_while] = actions(301);
	v->a[137][anon_sym_until] = actions(301);
	v->a[137][anon_sym_if] = actions(303);
	v->a[137][anon_sym_LPAREN] = actions(307);
	v->a[137][anon_sym_LBRACE] = actions(309);
	v->a[137][anon_sym_LT] = actions(313);
	v->a[137][anon_sym_GT] = actions(313);
	v->a[137][anon_sym_GT_GT] = actions(313);
	v->a[137][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(315);
	v->a[137][anon_sym_DOLLAR] = actions(317);
	return (parse_table_340(v));
}

/* EOF parse_table_67.c */
