/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_23.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_115(t_parse_table_array *v)
{
	v->a[44][anon_sym_while] = actions(11);
	v->a[44][anon_sym_until] = actions(11);
	v->a[44][anon_sym_if] = actions(13);
	v->a[44][anon_sym_fi] = actions(218);
	v->a[44][anon_sym_case] = actions(15);
	v->a[44][anon_sym_LPAREN] = actions(17);
	v->a[44][anon_sym_LBRACE] = actions(19);
	v->a[44][anon_sym_BANG] = actions(49);
	v->a[44][anon_sym_LT] = actions(51);
	v->a[44][anon_sym_GT] = actions(51);
	v->a[44][anon_sym_GT_GT] = actions(51);
	v->a[44][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[44][anon_sym_DOLLAR] = actions(55);
	v->a[44][anon_sym_DQUOTE] = actions(57);
	v->a[44][sym_raw_string] = actions(59);
	v->a[44][sym_number] = actions(59);
	v->a[44][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[44][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[44][anon_sym_BQUOTE] = actions(65);
	v->a[44][sym_comment] = actions(3);
	return (parse_table_116(v));
}

void	parse_table_116(t_parse_table_array *v)
{
	v->a[44][sym_variable_name] = actions(67);
	v->a[45][sym__statements] = state(1697);
	v->a[45][sym__statement_not_pipeline] = state(1557);
	v->a[45][sym_redirected_statement] = state(877);
	v->a[45][sym_for_statement] = state(877);
	v->a[45][sym_while_statement] = state(877);
	v->a[45][sym_if_statement] = state(877);
	v->a[45][sym_case_statement] = state(877);
	v->a[45][sym_function_definition] = state(877);
	v->a[45][sym_compound_statement] = state(877);
	v->a[45][sym_subshell] = state(877);
	v->a[45][sym_pipeline] = state(937);
	v->a[45][sym_list] = state(877);
	v->a[45][sym_negated_command] = state(877);
	v->a[45][sym_command] = state(877);
	v->a[45][sym_command_name] = state(158);
	v->a[45][sym_variable_assignment] = state(186);
	v->a[45][sym__variable_assignments] = state(877);
	v->a[45][sym_file_redirect] = state(516);
	v->a[45][sym_arithmetic_expansion] = state(277);
	return (parse_table_117(v));
}

void	parse_table_117(t_parse_table_array *v)
{
	v->a[45][sym_concatenation] = state(555);
	v->a[45][sym_string] = state(277);
	v->a[45][sym_simple_expansion] = state(277);
	v->a[45][sym_expansion] = state(277);
	v->a[45][sym_command_substitution] = state(277);
	v->a[45][aux_sym__statements_repeat1] = state(112);
	v->a[45][aux_sym_redirected_statement_repeat2] = state(1019);
	v->a[45][aux_sym_command_repeat1] = state(298);
	v->a[45][sym_word] = actions(208);
	v->a[45][anon_sym_for] = actions(9);
	v->a[45][anon_sym_while] = actions(11);
	v->a[45][anon_sym_until] = actions(11);
	v->a[45][anon_sym_if] = actions(13);
	v->a[45][anon_sym_case] = actions(15);
	v->a[45][anon_sym_LPAREN] = actions(17);
	v->a[45][anon_sym_LBRACE] = actions(19);
	v->a[45][anon_sym_BANG] = actions(210);
	v->a[45][anon_sym_LT] = actions(212);
	v->a[45][anon_sym_GT] = actions(212);
	v->a[45][anon_sym_GT_GT] = actions(212);
	return (parse_table_118(v));
}

void	parse_table_118(t_parse_table_array *v)
{
	v->a[45][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[45][anon_sym_DOLLAR] = actions(55);
	v->a[45][anon_sym_DQUOTE] = actions(57);
	v->a[45][sym_raw_string] = actions(214);
	v->a[45][sym_number] = actions(214);
	v->a[45][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[45][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[45][anon_sym_BQUOTE] = actions(65);
	v->a[45][sym_comment] = actions(3);
	v->a[45][sym_variable_name] = actions(216);
	v->a[46][sym__statements] = state(1696);
	v->a[46][sym__statement_not_pipeline] = state(1560);
	v->a[46][sym_redirected_statement] = state(820);
	v->a[46][sym_for_statement] = state(820);
	v->a[46][sym_while_statement] = state(820);
	v->a[46][sym_if_statement] = state(820);
	v->a[46][sym_case_statement] = state(820);
	v->a[46][sym_function_definition] = state(820);
	v->a[46][sym_compound_statement] = state(820);
	v->a[46][sym_subshell] = state(820);
	return (parse_table_119(v));
}

void	parse_table_119(t_parse_table_array *v)
{
	v->a[46][sym_pipeline] = state(969);
	v->a[46][sym_list] = state(820);
	v->a[46][sym_negated_command] = state(820);
	v->a[46][sym_command] = state(820);
	v->a[46][sym_command_name] = state(179);
	v->a[46][sym_variable_assignment] = state(208);
	v->a[46][sym__variable_assignments] = state(820);
	v->a[46][sym_file_redirect] = state(599);
	v->a[46][sym_arithmetic_expansion] = state(401);
	v->a[46][sym_concatenation] = state(555);
	v->a[46][sym_string] = state(401);
	v->a[46][sym_simple_expansion] = state(401);
	v->a[46][sym_expansion] = state(401);
	v->a[46][sym_command_substitution] = state(401);
	v->a[46][aux_sym__statements_repeat1] = state(116);
	v->a[46][aux_sym_redirected_statement_repeat2] = state(1006);
	v->a[46][aux_sym_command_repeat1] = state(385);
	v->a[46][sym_word] = actions(204);
	v->a[46][anon_sym_for] = actions(9);
	v->a[46][anon_sym_while] = actions(11);
	return (parse_table_120(v));
}

/* EOF parse_table_23.c */
