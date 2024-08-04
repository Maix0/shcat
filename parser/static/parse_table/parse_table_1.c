/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_5(t_parse_table_array *v)
{
	v->a[1][aux_sym__statements_repeat1] = state(114);
	v->a[1][aux_sym_redirected_statement_repeat2] = state(999);
	v->a[1][aux_sym_command_repeat1] = state(398);
	v->a[1][ts_builtin_sym_end] = actions(5);
	v->a[1][sym_word] = actions(7);
	v->a[1][anon_sym_for] = actions(9);
	v->a[1][anon_sym_while] = actions(11);
	v->a[1][anon_sym_until] = actions(11);
	v->a[1][anon_sym_if] = actions(13);
	v->a[1][anon_sym_case] = actions(15);
	v->a[1][anon_sym_LPAREN] = actions(17);
	v->a[1][anon_sym_LBRACE] = actions(19);
	v->a[1][anon_sym_BANG] = actions(21);
	v->a[1][anon_sym_LT] = actions(23);
	v->a[1][anon_sym_GT] = actions(23);
	v->a[1][anon_sym_GT_GT] = actions(23);
	v->a[1][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(25);
	v->a[1][anon_sym_DOLLAR] = actions(27);
	v->a[1][anon_sym_DQUOTE] = actions(29);
	v->a[1][sym_raw_string] = actions(31);
	return (parse_table_6(v));
}

void	parse_table_6(t_parse_table_array *v)
{
	v->a[1][sym_number] = actions(31);
	v->a[1][anon_sym_DOLLAR_LBRACE] = actions(33);
	v->a[1][anon_sym_DOLLAR_LPAREN] = actions(35);
	v->a[1][anon_sym_BQUOTE] = actions(37);
	v->a[1][sym_comment] = actions(3);
	v->a[1][sym_variable_name] = actions(39);
	v->a[2][aux_sym__terminated_statement] = state(19);
	v->a[2][sym__statement_not_pipeline] = state(1561);
	v->a[2][sym_redirected_statement] = state(905);
	v->a[2][sym_for_statement] = state(905);
	v->a[2][sym_while_statement] = state(905);
	v->a[2][sym_if_statement] = state(905);
	v->a[2][sym_elif_clause] = state(1454);
	v->a[2][sym_else_clause] = state(1606);
	v->a[2][sym_case_statement] = state(905);
	v->a[2][sym_function_definition] = state(905);
	v->a[2][sym_compound_statement] = state(905);
	v->a[2][sym_subshell] = state(905);
	v->a[2][sym_pipeline] = state(1070);
	v->a[2][sym_list] = state(905);
	return (parse_table_7(v));
}

void	parse_table_7(t_parse_table_array *v)
{
	v->a[2][sym_negated_command] = state(905);
	v->a[2][sym_command] = state(905);
	v->a[2][sym_command_name] = state(185);
	v->a[2][sym_variable_assignment] = state(231);
	v->a[2][sym__variable_assignments] = state(905);
	v->a[2][sym_file_redirect] = state(551);
	v->a[2][sym_arithmetic_expansion] = state(401);
	v->a[2][sym_concatenation] = state(555);
	v->a[2][sym_string] = state(401);
	v->a[2][sym_simple_expansion] = state(401);
	v->a[2][sym_expansion] = state(401);
	v->a[2][sym_command_substitution] = state(401);
	v->a[2][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[2][aux_sym_if_statement_repeat1] = state(1454);
	v->a[2][aux_sym_command_repeat1] = state(411);
	v->a[2][sym_word] = actions(41);
	v->a[2][anon_sym_for] = actions(9);
	v->a[2][anon_sym_while] = actions(11);
	v->a[2][anon_sym_until] = actions(11);
	v->a[2][anon_sym_if] = actions(13);
	return (parse_table_8(v));
}

void	parse_table_8(t_parse_table_array *v)
{
	v->a[2][anon_sym_fi] = actions(43);
	v->a[2][anon_sym_elif] = actions(45);
	v->a[2][anon_sym_else] = actions(47);
	v->a[2][anon_sym_case] = actions(15);
	v->a[2][anon_sym_LPAREN] = actions(17);
	v->a[2][anon_sym_LBRACE] = actions(19);
	v->a[2][anon_sym_BANG] = actions(49);
	v->a[2][anon_sym_LT] = actions(51);
	v->a[2][anon_sym_GT] = actions(51);
	v->a[2][anon_sym_GT_GT] = actions(51);
	v->a[2][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[2][anon_sym_DOLLAR] = actions(55);
	v->a[2][anon_sym_DQUOTE] = actions(57);
	v->a[2][sym_raw_string] = actions(59);
	v->a[2][sym_number] = actions(59);
	v->a[2][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[2][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[2][anon_sym_BQUOTE] = actions(65);
	v->a[2][sym_comment] = actions(3);
	v->a[2][sym_variable_name] = actions(67);
	return (parse_table_9(v));
}

void	parse_table_9(t_parse_table_array *v)
{
	v->a[3][aux_sym__terminated_statement] = state(2);
	v->a[3][sym__statement_not_pipeline] = state(1561);
	v->a[3][sym_redirected_statement] = state(905);
	v->a[3][sym_for_statement] = state(905);
	v->a[3][sym_while_statement] = state(905);
	v->a[3][sym_if_statement] = state(905);
	v->a[3][sym_elif_clause] = state(1464);
	v->a[3][sym_else_clause] = state(1636);
	v->a[3][sym_case_statement] = state(905);
	v->a[3][sym_function_definition] = state(905);
	v->a[3][sym_compound_statement] = state(905);
	v->a[3][sym_subshell] = state(905);
	v->a[3][sym_pipeline] = state(1070);
	v->a[3][sym_list] = state(905);
	v->a[3][sym_negated_command] = state(905);
	v->a[3][sym_command] = state(905);
	v->a[3][sym_command_name] = state(185);
	v->a[3][sym_variable_assignment] = state(231);
	v->a[3][sym__variable_assignments] = state(905);
	v->a[3][sym_file_redirect] = state(551);
	return (parse_table_10(v));
}

/* EOF parse_table_1.c */
