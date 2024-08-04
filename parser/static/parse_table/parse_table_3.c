/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_15(t_parse_table_array *v)
{
	v->a[5][sym_pipeline] = state(1070);
	v->a[5][sym_list] = state(905);
	v->a[5][sym_negated_command] = state(905);
	v->a[5][sym_command] = state(905);
	v->a[5][sym_command_name] = state(185);
	v->a[5][sym_variable_assignment] = state(231);
	v->a[5][sym__variable_assignments] = state(905);
	v->a[5][sym_file_redirect] = state(551);
	v->a[5][sym_arithmetic_expansion] = state(401);
	v->a[5][sym_concatenation] = state(555);
	v->a[5][sym_string] = state(401);
	v->a[5][sym_simple_expansion] = state(401);
	v->a[5][sym_expansion] = state(401);
	v->a[5][sym_command_substitution] = state(401);
	v->a[5][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[5][aux_sym_if_statement_repeat1] = state(1475);
	v->a[5][aux_sym_command_repeat1] = state(411);
	v->a[5][sym_word] = actions(41);
	v->a[5][anon_sym_for] = actions(9);
	v->a[5][anon_sym_while] = actions(11);
	return (parse_table_16(v));
}

void	parse_table_16(t_parse_table_array *v)
{
	v->a[5][anon_sym_until] = actions(11);
	v->a[5][anon_sym_if] = actions(13);
	v->a[5][anon_sym_fi] = actions(73);
	v->a[5][anon_sym_elif] = actions(45);
	v->a[5][anon_sym_else] = actions(47);
	v->a[5][anon_sym_case] = actions(15);
	v->a[5][anon_sym_LPAREN] = actions(17);
	v->a[5][anon_sym_LBRACE] = actions(19);
	v->a[5][anon_sym_BANG] = actions(49);
	v->a[5][anon_sym_LT] = actions(51);
	v->a[5][anon_sym_GT] = actions(51);
	v->a[5][anon_sym_GT_GT] = actions(51);
	v->a[5][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[5][anon_sym_DOLLAR] = actions(55);
	v->a[5][anon_sym_DQUOTE] = actions(57);
	v->a[5][sym_raw_string] = actions(59);
	v->a[5][sym_number] = actions(59);
	v->a[5][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[5][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[5][anon_sym_BQUOTE] = actions(65);
	return (parse_table_17(v));
}

void	parse_table_17(t_parse_table_array *v)
{
	v->a[5][sym_comment] = actions(3);
	v->a[5][sym_variable_name] = actions(67);
	v->a[6][aux_sym__terminated_statement] = state(5);
	v->a[6][sym__statement_not_pipeline] = state(1561);
	v->a[6][sym_redirected_statement] = state(905);
	v->a[6][sym_for_statement] = state(905);
	v->a[6][sym_while_statement] = state(905);
	v->a[6][sym_if_statement] = state(905);
	v->a[6][sym_elif_clause] = state(1457);
	v->a[6][sym_else_clause] = state(1609);
	v->a[6][sym_case_statement] = state(905);
	v->a[6][sym_function_definition] = state(905);
	v->a[6][sym_compound_statement] = state(905);
	v->a[6][sym_subshell] = state(905);
	v->a[6][sym_pipeline] = state(1070);
	v->a[6][sym_list] = state(905);
	v->a[6][sym_negated_command] = state(905);
	v->a[6][sym_command] = state(905);
	v->a[6][sym_command_name] = state(185);
	v->a[6][sym_variable_assignment] = state(231);
	return (parse_table_18(v));
}

void	parse_table_18(t_parse_table_array *v)
{
	v->a[6][sym__variable_assignments] = state(905);
	v->a[6][sym_file_redirect] = state(551);
	v->a[6][sym_arithmetic_expansion] = state(401);
	v->a[6][sym_concatenation] = state(555);
	v->a[6][sym_string] = state(401);
	v->a[6][sym_simple_expansion] = state(401);
	v->a[6][sym_expansion] = state(401);
	v->a[6][sym_command_substitution] = state(401);
	v->a[6][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[6][aux_sym_if_statement_repeat1] = state(1457);
	v->a[6][aux_sym_command_repeat1] = state(411);
	v->a[6][sym_word] = actions(41);
	v->a[6][anon_sym_for] = actions(9);
	v->a[6][anon_sym_while] = actions(11);
	v->a[6][anon_sym_until] = actions(11);
	v->a[6][anon_sym_if] = actions(13);
	v->a[6][anon_sym_fi] = actions(75);
	v->a[6][anon_sym_elif] = actions(45);
	v->a[6][anon_sym_else] = actions(47);
	v->a[6][anon_sym_case] = actions(15);
	return (parse_table_19(v));
}

void	parse_table_19(t_parse_table_array *v)
{
	v->a[6][anon_sym_LPAREN] = actions(17);
	v->a[6][anon_sym_LBRACE] = actions(19);
	v->a[6][anon_sym_BANG] = actions(49);
	v->a[6][anon_sym_LT] = actions(51);
	v->a[6][anon_sym_GT] = actions(51);
	v->a[6][anon_sym_GT_GT] = actions(51);
	v->a[6][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[6][anon_sym_DOLLAR] = actions(55);
	v->a[6][anon_sym_DQUOTE] = actions(57);
	v->a[6][sym_raw_string] = actions(59);
	v->a[6][sym_number] = actions(59);
	v->a[6][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[6][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[6][anon_sym_BQUOTE] = actions(65);
	v->a[6][sym_comment] = actions(3);
	v->a[6][sym_variable_name] = actions(67);
	v->a[7][aux_sym__terminated_statement] = state(4);
	v->a[7][sym__statement_not_pipeline] = state(1561);
	v->a[7][sym_redirected_statement] = state(905);
	v->a[7][sym_for_statement] = state(905);
	return (parse_table_20(v));
}

/* EOF parse_table_3.c */
