/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_25.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_125(t_parse_table_array *v)
{
	v->a[48][anon_sym_case] = actions(15);
	v->a[48][anon_sym_LPAREN] = actions(17);
	v->a[48][anon_sym_LBRACE] = actions(19);
	v->a[48][anon_sym_BANG] = actions(210);
	v->a[48][anon_sym_LT] = actions(212);
	v->a[48][anon_sym_GT] = actions(212);
	v->a[48][anon_sym_GT_GT] = actions(212);
	v->a[48][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[48][anon_sym_DOLLAR] = actions(55);
	v->a[48][anon_sym_DQUOTE] = actions(57);
	v->a[48][sym_raw_string] = actions(214);
	v->a[48][sym_number] = actions(214);
	v->a[48][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[48][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[48][anon_sym_BQUOTE] = actions(65);
	v->a[48][sym_comment] = actions(3);
	v->a[48][sym_variable_name] = actions(216);
	v->a[49][sym__statements] = state(1597);
	v->a[49][sym__statement_not_pipeline] = state(1560);
	v->a[49][sym_redirected_statement] = state(820);
	return (parse_table_126(v));
}

void	parse_table_126(t_parse_table_array *v)
{
	v->a[49][sym_for_statement] = state(820);
	v->a[49][sym_while_statement] = state(820);
	v->a[49][sym_if_statement] = state(820);
	v->a[49][sym_case_statement] = state(820);
	v->a[49][sym_function_definition] = state(820);
	v->a[49][sym_compound_statement] = state(820);
	v->a[49][sym_subshell] = state(820);
	v->a[49][sym_pipeline] = state(969);
	v->a[49][sym_list] = state(820);
	v->a[49][sym_negated_command] = state(820);
	v->a[49][sym_command] = state(820);
	v->a[49][sym_command_name] = state(179);
	v->a[49][sym_variable_assignment] = state(208);
	v->a[49][sym__variable_assignments] = state(820);
	v->a[49][sym_file_redirect] = state(599);
	v->a[49][sym_arithmetic_expansion] = state(401);
	v->a[49][sym_concatenation] = state(555);
	v->a[49][sym_string] = state(401);
	v->a[49][sym_simple_expansion] = state(401);
	v->a[49][sym_expansion] = state(401);
	return (parse_table_127(v));
}

void	parse_table_127(t_parse_table_array *v)
{
	v->a[49][sym_command_substitution] = state(401);
	v->a[49][aux_sym__statements_repeat1] = state(116);
	v->a[49][aux_sym_redirected_statement_repeat2] = state(1006);
	v->a[49][aux_sym_command_repeat1] = state(385);
	v->a[49][sym_word] = actions(204);
	v->a[49][anon_sym_for] = actions(9);
	v->a[49][anon_sym_while] = actions(11);
	v->a[49][anon_sym_until] = actions(11);
	v->a[49][anon_sym_if] = actions(13);
	v->a[49][anon_sym_case] = actions(15);
	v->a[49][anon_sym_LPAREN] = actions(17);
	v->a[49][anon_sym_LBRACE] = actions(19);
	v->a[49][anon_sym_BANG] = actions(206);
	v->a[49][anon_sym_LT] = actions(51);
	v->a[49][anon_sym_GT] = actions(51);
	v->a[49][anon_sym_GT_GT] = actions(51);
	v->a[49][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[49][anon_sym_DOLLAR] = actions(55);
	v->a[49][anon_sym_DQUOTE] = actions(57);
	v->a[49][sym_raw_string] = actions(59);
	return (parse_table_128(v));
}

void	parse_table_128(t_parse_table_array *v)
{
	v->a[49][sym_number] = actions(59);
	v->a[49][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[49][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[49][anon_sym_BQUOTE] = actions(65);
	v->a[49][sym_comment] = actions(3);
	v->a[49][sym_variable_name] = actions(67);
	v->a[50][aux_sym__terminated_statement] = state(38);
	v->a[50][sym__statement_not_pipeline] = state(1561);
	v->a[50][sym_redirected_statement] = state(949);
	v->a[50][sym_for_statement] = state(949);
	v->a[50][sym_while_statement] = state(949);
	v->a[50][sym_if_statement] = state(949);
	v->a[50][sym_case_statement] = state(949);
	v->a[50][sym_function_definition] = state(949);
	v->a[50][sym_compound_statement] = state(949);
	v->a[50][sym_subshell] = state(949);
	v->a[50][sym_pipeline] = state(1059);
	v->a[50][sym_list] = state(949);
	v->a[50][sym_negated_command] = state(949);
	v->a[50][sym_command] = state(949);
	return (parse_table_129(v));
}

void	parse_table_129(t_parse_table_array *v)
{
	v->a[50][sym_command_name] = state(185);
	v->a[50][sym_variable_assignment] = state(237);
	v->a[50][sym__variable_assignments] = state(949);
	v->a[50][sym_file_redirect] = state(551);
	v->a[50][sym_arithmetic_expansion] = state(401);
	v->a[50][sym_concatenation] = state(555);
	v->a[50][sym_string] = state(401);
	v->a[50][sym_simple_expansion] = state(401);
	v->a[50][sym_expansion] = state(401);
	v->a[50][sym_command_substitution] = state(401);
	v->a[50][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[50][aux_sym_command_repeat1] = state(411);
	v->a[50][sym_word] = actions(41);
	v->a[50][anon_sym_for] = actions(9);
	v->a[50][anon_sym_while] = actions(11);
	v->a[50][anon_sym_until] = actions(11);
	v->a[50][anon_sym_done] = actions(220);
	v->a[50][anon_sym_if] = actions(13);
	v->a[50][anon_sym_case] = actions(15);
	v->a[50][anon_sym_LPAREN] = actions(17);
	return (parse_table_130(v));
}

/* EOF parse_table_25.c */
