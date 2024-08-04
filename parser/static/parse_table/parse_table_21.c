/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_21.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_105(t_parse_table_array *v)
{
	v->a[40][aux_sym__statements_repeat1] = state(116);
	v->a[40][aux_sym_redirected_statement_repeat2] = state(1006);
	v->a[40][aux_sym_command_repeat1] = state(385);
	v->a[40][sym_word] = actions(204);
	v->a[40][anon_sym_for] = actions(9);
	v->a[40][anon_sym_while] = actions(11);
	v->a[40][anon_sym_until] = actions(11);
	v->a[40][anon_sym_if] = actions(13);
	v->a[40][anon_sym_case] = actions(15);
	v->a[40][anon_sym_LPAREN] = actions(17);
	v->a[40][anon_sym_LBRACE] = actions(19);
	v->a[40][anon_sym_BANG] = actions(206);
	v->a[40][anon_sym_LT] = actions(51);
	v->a[40][anon_sym_GT] = actions(51);
	v->a[40][anon_sym_GT_GT] = actions(51);
	v->a[40][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[40][anon_sym_DOLLAR] = actions(55);
	v->a[40][anon_sym_DQUOTE] = actions(57);
	v->a[40][sym_raw_string] = actions(59);
	v->a[40][sym_number] = actions(59);
	return (parse_table_106(v));
}

void	parse_table_106(t_parse_table_array *v)
{
	v->a[40][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[40][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[40][anon_sym_BQUOTE] = actions(65);
	v->a[40][sym_comment] = actions(3);
	v->a[40][sym_variable_name] = actions(67);
	v->a[41][sym__statements] = state(1602);
	v->a[41][sym__statement_not_pipeline] = state(1557);
	v->a[41][sym_redirected_statement] = state(877);
	v->a[41][sym_for_statement] = state(877);
	v->a[41][sym_while_statement] = state(877);
	v->a[41][sym_if_statement] = state(877);
	v->a[41][sym_case_statement] = state(877);
	v->a[41][sym_function_definition] = state(877);
	v->a[41][sym_compound_statement] = state(877);
	v->a[41][sym_subshell] = state(877);
	v->a[41][sym_pipeline] = state(937);
	v->a[41][sym_list] = state(877);
	v->a[41][sym_negated_command] = state(877);
	v->a[41][sym_command] = state(877);
	v->a[41][sym_command_name] = state(158);
	return (parse_table_107(v));
}

void	parse_table_107(t_parse_table_array *v)
{
	v->a[41][sym_variable_assignment] = state(186);
	v->a[41][sym__variable_assignments] = state(877);
	v->a[41][sym_file_redirect] = state(578);
	v->a[41][sym_arithmetic_expansion] = state(277);
	v->a[41][sym_concatenation] = state(555);
	v->a[41][sym_string] = state(277);
	v->a[41][sym_simple_expansion] = state(277);
	v->a[41][sym_expansion] = state(277);
	v->a[41][sym_command_substitution] = state(277);
	v->a[41][aux_sym__statements_repeat1] = state(112);
	v->a[41][aux_sym_redirected_statement_repeat2] = state(1019);
	v->a[41][aux_sym_command_repeat1] = state(298);
	v->a[41][sym_word] = actions(208);
	v->a[41][anon_sym_for] = actions(9);
	v->a[41][anon_sym_while] = actions(11);
	v->a[41][anon_sym_until] = actions(11);
	v->a[41][anon_sym_if] = actions(13);
	v->a[41][anon_sym_case] = actions(15);
	v->a[41][anon_sym_LPAREN] = actions(17);
	v->a[41][anon_sym_LBRACE] = actions(19);
	return (parse_table_108(v));
}

void	parse_table_108(t_parse_table_array *v)
{
	v->a[41][anon_sym_BANG] = actions(210);
	v->a[41][anon_sym_LT] = actions(212);
	v->a[41][anon_sym_GT] = actions(212);
	v->a[41][anon_sym_GT_GT] = actions(212);
	v->a[41][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[41][anon_sym_DOLLAR] = actions(55);
	v->a[41][anon_sym_DQUOTE] = actions(57);
	v->a[41][sym_raw_string] = actions(214);
	v->a[41][sym_number] = actions(214);
	v->a[41][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[41][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[41][anon_sym_BQUOTE] = actions(65);
	v->a[41][sym_comment] = actions(3);
	v->a[41][sym_variable_name] = actions(216);
	v->a[42][aux_sym__terminated_statement] = state(42);
	v->a[42][sym__statement_not_pipeline] = state(1561);
	v->a[42][sym_redirected_statement] = state(955);
	v->a[42][sym_for_statement] = state(955);
	v->a[42][sym_while_statement] = state(955);
	v->a[42][sym_if_statement] = state(955);
	return (parse_table_109(v));
}

void	parse_table_109(t_parse_table_array *v)
{
	v->a[42][sym_case_statement] = state(955);
	v->a[42][sym_function_definition] = state(955);
	v->a[42][sym_compound_statement] = state(955);
	v->a[42][sym_subshell] = state(955);
	v->a[42][sym_pipeline] = state(974);
	v->a[42][sym_list] = state(955);
	v->a[42][sym_negated_command] = state(955);
	v->a[42][sym_command] = state(955);
	v->a[42][sym_command_name] = state(185);
	v->a[42][sym_variable_assignment] = state(209);
	v->a[42][sym__variable_assignments] = state(955);
	v->a[42][sym_file_redirect] = state(551);
	v->a[42][sym_arithmetic_expansion] = state(401);
	v->a[42][sym_concatenation] = state(555);
	v->a[42][sym_string] = state(401);
	v->a[42][sym_simple_expansion] = state(401);
	v->a[42][sym_expansion] = state(401);
	v->a[42][sym_command_substitution] = state(401);
	v->a[42][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[42][aux_sym_command_repeat1] = state(411);
	return (parse_table_110(v));
}

/* EOF parse_table_21.c */
