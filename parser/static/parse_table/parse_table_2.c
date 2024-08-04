/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_10(t_parse_table_array *v)
{
	v->a[3][sym_arithmetic_expansion] = state(401);
	v->a[3][sym_concatenation] = state(555);
	v->a[3][sym_string] = state(401);
	v->a[3][sym_simple_expansion] = state(401);
	v->a[3][sym_expansion] = state(401);
	v->a[3][sym_command_substitution] = state(401);
	v->a[3][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[3][aux_sym_if_statement_repeat1] = state(1464);
	v->a[3][aux_sym_command_repeat1] = state(411);
	v->a[3][sym_word] = actions(41);
	v->a[3][anon_sym_for] = actions(9);
	v->a[3][anon_sym_while] = actions(11);
	v->a[3][anon_sym_until] = actions(11);
	v->a[3][anon_sym_if] = actions(13);
	v->a[3][anon_sym_fi] = actions(69);
	v->a[3][anon_sym_elif] = actions(45);
	v->a[3][anon_sym_else] = actions(47);
	v->a[3][anon_sym_case] = actions(15);
	v->a[3][anon_sym_LPAREN] = actions(17);
	v->a[3][anon_sym_LBRACE] = actions(19);
	return (parse_table_11(v));
}

void	parse_table_11(t_parse_table_array *v)
{
	v->a[3][anon_sym_BANG] = actions(49);
	v->a[3][anon_sym_LT] = actions(51);
	v->a[3][anon_sym_GT] = actions(51);
	v->a[3][anon_sym_GT_GT] = actions(51);
	v->a[3][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[3][anon_sym_DOLLAR] = actions(55);
	v->a[3][anon_sym_DQUOTE] = actions(57);
	v->a[3][sym_raw_string] = actions(59);
	v->a[3][sym_number] = actions(59);
	v->a[3][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[3][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[3][anon_sym_BQUOTE] = actions(65);
	v->a[3][sym_comment] = actions(3);
	v->a[3][sym_variable_name] = actions(67);
	v->a[4][aux_sym__terminated_statement] = state(19);
	v->a[4][sym__statement_not_pipeline] = state(1561);
	v->a[4][sym_redirected_statement] = state(905);
	v->a[4][sym_for_statement] = state(905);
	v->a[4][sym_while_statement] = state(905);
	v->a[4][sym_if_statement] = state(905);
	return (parse_table_12(v));
}

void	parse_table_12(t_parse_table_array *v)
{
	v->a[4][sym_elif_clause] = state(1456);
	v->a[4][sym_else_clause] = state(1729);
	v->a[4][sym_case_statement] = state(905);
	v->a[4][sym_function_definition] = state(905);
	v->a[4][sym_compound_statement] = state(905);
	v->a[4][sym_subshell] = state(905);
	v->a[4][sym_pipeline] = state(1070);
	v->a[4][sym_list] = state(905);
	v->a[4][sym_negated_command] = state(905);
	v->a[4][sym_command] = state(905);
	v->a[4][sym_command_name] = state(185);
	v->a[4][sym_variable_assignment] = state(231);
	v->a[4][sym__variable_assignments] = state(905);
	v->a[4][sym_file_redirect] = state(551);
	v->a[4][sym_arithmetic_expansion] = state(401);
	v->a[4][sym_concatenation] = state(555);
	v->a[4][sym_string] = state(401);
	v->a[4][sym_simple_expansion] = state(401);
	v->a[4][sym_expansion] = state(401);
	v->a[4][sym_command_substitution] = state(401);
	return (parse_table_13(v));
}

void	parse_table_13(t_parse_table_array *v)
{
	v->a[4][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[4][aux_sym_if_statement_repeat1] = state(1456);
	v->a[4][aux_sym_command_repeat1] = state(411);
	v->a[4][sym_word] = actions(41);
	v->a[4][anon_sym_for] = actions(9);
	v->a[4][anon_sym_while] = actions(11);
	v->a[4][anon_sym_until] = actions(11);
	v->a[4][anon_sym_if] = actions(13);
	v->a[4][anon_sym_fi] = actions(71);
	v->a[4][anon_sym_elif] = actions(45);
	v->a[4][anon_sym_else] = actions(47);
	v->a[4][anon_sym_case] = actions(15);
	v->a[4][anon_sym_LPAREN] = actions(17);
	v->a[4][anon_sym_LBRACE] = actions(19);
	v->a[4][anon_sym_BANG] = actions(49);
	v->a[4][anon_sym_LT] = actions(51);
	v->a[4][anon_sym_GT] = actions(51);
	v->a[4][anon_sym_GT_GT] = actions(51);
	v->a[4][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[4][anon_sym_DOLLAR] = actions(55);
	return (parse_table_14(v));
}

void	parse_table_14(t_parse_table_array *v)
{
	v->a[4][anon_sym_DQUOTE] = actions(57);
	v->a[4][sym_raw_string] = actions(59);
	v->a[4][sym_number] = actions(59);
	v->a[4][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[4][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[4][anon_sym_BQUOTE] = actions(65);
	v->a[4][sym_comment] = actions(3);
	v->a[4][sym_variable_name] = actions(67);
	v->a[5][aux_sym__terminated_statement] = state(19);
	v->a[5][sym__statement_not_pipeline] = state(1561);
	v->a[5][sym_redirected_statement] = state(905);
	v->a[5][sym_for_statement] = state(905);
	v->a[5][sym_while_statement] = state(905);
	v->a[5][sym_if_statement] = state(905);
	v->a[5][sym_elif_clause] = state(1475);
	v->a[5][sym_else_clause] = state(1624);
	v->a[5][sym_case_statement] = state(905);
	v->a[5][sym_function_definition] = state(905);
	v->a[5][sym_compound_statement] = state(905);
	v->a[5][sym_subshell] = state(905);
	return (parse_table_15(v));
}

/* EOF parse_table_2.c */
