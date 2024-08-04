/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_22.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_110(t_parse_table_array *v)
{
	v->a[42][sym_word] = actions(123);
	v->a[42][anon_sym_for] = actions(126);
	v->a[42][anon_sym_while] = actions(129);
	v->a[42][anon_sym_until] = actions(129);
	v->a[42][anon_sym_if] = actions(132);
	v->a[42][anon_sym_case] = actions(137);
	v->a[42][anon_sym_LPAREN] = actions(140);
	v->a[42][anon_sym_LBRACE] = actions(143);
	v->a[42][anon_sym_RBRACE] = actions(135);
	v->a[42][anon_sym_BANG] = actions(146);
	v->a[42][anon_sym_LT] = actions(149);
	v->a[42][anon_sym_GT] = actions(149);
	v->a[42][anon_sym_GT_GT] = actions(149);
	v->a[42][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(152);
	v->a[42][anon_sym_DOLLAR] = actions(155);
	v->a[42][anon_sym_DQUOTE] = actions(158);
	v->a[42][sym_raw_string] = actions(161);
	v->a[42][sym_number] = actions(161);
	v->a[42][anon_sym_DOLLAR_LBRACE] = actions(164);
	v->a[42][anon_sym_DOLLAR_LPAREN] = actions(167);
	return (parse_table_111(v));
}

void	parse_table_111(t_parse_table_array *v)
{
	v->a[42][anon_sym_BQUOTE] = actions(170);
	v->a[42][sym_comment] = actions(3);
	v->a[42][sym_variable_name] = actions(173);
	v->a[43][sym__statements] = state(1603);
	v->a[43][sym__statement_not_pipeline] = state(1560);
	v->a[43][sym_redirected_statement] = state(820);
	v->a[43][sym_for_statement] = state(820);
	v->a[43][sym_while_statement] = state(820);
	v->a[43][sym_if_statement] = state(820);
	v->a[43][sym_case_statement] = state(820);
	v->a[43][sym_function_definition] = state(820);
	v->a[43][sym_compound_statement] = state(820);
	v->a[43][sym_subshell] = state(820);
	v->a[43][sym_pipeline] = state(969);
	v->a[43][sym_list] = state(820);
	v->a[43][sym_negated_command] = state(820);
	v->a[43][sym_command] = state(820);
	v->a[43][sym_command_name] = state(179);
	v->a[43][sym_variable_assignment] = state(208);
	v->a[43][sym__variable_assignments] = state(820);
	return (parse_table_112(v));
}

void	parse_table_112(t_parse_table_array *v)
{
	v->a[43][sym_file_redirect] = state(599);
	v->a[43][sym_arithmetic_expansion] = state(401);
	v->a[43][sym_concatenation] = state(555);
	v->a[43][sym_string] = state(401);
	v->a[43][sym_simple_expansion] = state(401);
	v->a[43][sym_expansion] = state(401);
	v->a[43][sym_command_substitution] = state(401);
	v->a[43][aux_sym__statements_repeat1] = state(116);
	v->a[43][aux_sym_redirected_statement_repeat2] = state(1006);
	v->a[43][aux_sym_command_repeat1] = state(385);
	v->a[43][sym_word] = actions(204);
	v->a[43][anon_sym_for] = actions(9);
	v->a[43][anon_sym_while] = actions(11);
	v->a[43][anon_sym_until] = actions(11);
	v->a[43][anon_sym_if] = actions(13);
	v->a[43][anon_sym_case] = actions(15);
	v->a[43][anon_sym_LPAREN] = actions(17);
	v->a[43][anon_sym_LBRACE] = actions(19);
	v->a[43][anon_sym_BANG] = actions(206);
	v->a[43][anon_sym_LT] = actions(51);
	return (parse_table_113(v));
}

void	parse_table_113(t_parse_table_array *v)
{
	v->a[43][anon_sym_GT] = actions(51);
	v->a[43][anon_sym_GT_GT] = actions(51);
	v->a[43][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[43][anon_sym_DOLLAR] = actions(55);
	v->a[43][anon_sym_DQUOTE] = actions(57);
	v->a[43][sym_raw_string] = actions(59);
	v->a[43][sym_number] = actions(59);
	v->a[43][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[43][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[43][anon_sym_BQUOTE] = actions(65);
	v->a[43][sym_comment] = actions(3);
	v->a[43][sym_variable_name] = actions(67);
	v->a[44][aux_sym__terminated_statement] = state(88);
	v->a[44][sym__statement_not_pipeline] = state(1561);
	v->a[44][sym_redirected_statement] = state(920);
	v->a[44][sym_for_statement] = state(920);
	v->a[44][sym_while_statement] = state(920);
	v->a[44][sym_if_statement] = state(920);
	v->a[44][sym_case_statement] = state(920);
	v->a[44][sym_function_definition] = state(920);
	return (parse_table_114(v));
}

void	parse_table_114(t_parse_table_array *v)
{
	v->a[44][sym_compound_statement] = state(920);
	v->a[44][sym_subshell] = state(920);
	v->a[44][sym_pipeline] = state(1085);
	v->a[44][sym_list] = state(920);
	v->a[44][sym_negated_command] = state(920);
	v->a[44][sym_command] = state(920);
	v->a[44][sym_command_name] = state(185);
	v->a[44][sym_variable_assignment] = state(220);
	v->a[44][sym__variable_assignments] = state(920);
	v->a[44][sym_file_redirect] = state(551);
	v->a[44][sym_arithmetic_expansion] = state(401);
	v->a[44][sym_concatenation] = state(555);
	v->a[44][sym_string] = state(401);
	v->a[44][sym_simple_expansion] = state(401);
	v->a[44][sym_expansion] = state(401);
	v->a[44][sym_command_substitution] = state(401);
	v->a[44][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[44][aux_sym_command_repeat1] = state(411);
	v->a[44][sym_word] = actions(41);
	v->a[44][anon_sym_for] = actions(9);
	return (parse_table_115(v));
}

/* EOF parse_table_22.c */
