/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_46.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_230(t_parse_table_array *v)
{
	v->a[91][aux_sym_redirected_statement_repeat2] = state(1006);
	v->a[91][aux_sym_command_repeat1] = state(385);
	v->a[91][sym_word] = actions(204);
	v->a[91][anon_sym_for] = actions(9);
	v->a[91][anon_sym_while] = actions(11);
	v->a[91][anon_sym_until] = actions(11);
	v->a[91][anon_sym_if] = actions(13);
	v->a[91][anon_sym_case] = actions(15);
	v->a[91][anon_sym_LPAREN] = actions(17);
	v->a[91][anon_sym_LBRACE] = actions(19);
	v->a[91][anon_sym_BANG] = actions(206);
	v->a[91][anon_sym_LT] = actions(51);
	v->a[91][anon_sym_GT] = actions(51);
	v->a[91][anon_sym_GT_GT] = actions(51);
	v->a[91][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[91][anon_sym_DOLLAR] = actions(55);
	v->a[91][anon_sym_DQUOTE] = actions(57);
	v->a[91][sym_raw_string] = actions(59);
	v->a[91][sym_number] = actions(59);
	v->a[91][anon_sym_DOLLAR_LBRACE] = actions(61);
	return (parse_table_231(v));
}

void	parse_table_231(t_parse_table_array *v)
{
	v->a[91][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[91][anon_sym_BQUOTE] = actions(65);
	v->a[91][sym_comment] = actions(3);
	v->a[91][sym_variable_name] = actions(67);
	v->a[92][sym__statements] = state(1692);
	v->a[92][sym__statement_not_pipeline] = state(1557);
	v->a[92][sym_redirected_statement] = state(877);
	v->a[92][sym_for_statement] = state(877);
	v->a[92][sym_while_statement] = state(877);
	v->a[92][sym_if_statement] = state(877);
	v->a[92][sym_case_statement] = state(877);
	v->a[92][sym_function_definition] = state(877);
	v->a[92][sym_compound_statement] = state(877);
	v->a[92][sym_subshell] = state(877);
	v->a[92][sym_pipeline] = state(937);
	v->a[92][sym_list] = state(877);
	v->a[92][sym_negated_command] = state(877);
	v->a[92][sym_command] = state(877);
	v->a[92][sym_command_name] = state(158);
	v->a[92][sym_variable_assignment] = state(186);
	return (parse_table_232(v));
}

void	parse_table_232(t_parse_table_array *v)
{
	v->a[92][sym__variable_assignments] = state(877);
	v->a[92][sym_file_redirect] = state(551);
	v->a[92][sym_arithmetic_expansion] = state(277);
	v->a[92][sym_concatenation] = state(555);
	v->a[92][sym_string] = state(277);
	v->a[92][sym_simple_expansion] = state(277);
	v->a[92][sym_expansion] = state(277);
	v->a[92][sym_command_substitution] = state(277);
	v->a[92][aux_sym__statements_repeat1] = state(112);
	v->a[92][aux_sym_redirected_statement_repeat2] = state(1019);
	v->a[92][aux_sym_command_repeat1] = state(298);
	v->a[92][sym_word] = actions(208);
	v->a[92][anon_sym_for] = actions(9);
	v->a[92][anon_sym_while] = actions(11);
	v->a[92][anon_sym_until] = actions(11);
	v->a[92][anon_sym_if] = actions(13);
	v->a[92][anon_sym_case] = actions(15);
	v->a[92][anon_sym_LPAREN] = actions(17);
	v->a[92][anon_sym_LBRACE] = actions(19);
	v->a[92][anon_sym_BANG] = actions(210);
	return (parse_table_233(v));
}

void	parse_table_233(t_parse_table_array *v)
{
	v->a[92][anon_sym_LT] = actions(212);
	v->a[92][anon_sym_GT] = actions(212);
	v->a[92][anon_sym_GT_GT] = actions(212);
	v->a[92][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[92][anon_sym_DOLLAR] = actions(55);
	v->a[92][anon_sym_DQUOTE] = actions(57);
	v->a[92][sym_raw_string] = actions(214);
	v->a[92][sym_number] = actions(214);
	v->a[92][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[92][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[92][anon_sym_BQUOTE] = actions(65);
	v->a[92][sym_comment] = actions(3);
	v->a[92][sym_variable_name] = actions(216);
	v->a[93][sym__statements] = state(1681);
	v->a[93][sym__statement_not_pipeline] = state(1557);
	v->a[93][sym_redirected_statement] = state(877);
	v->a[93][sym_for_statement] = state(877);
	v->a[93][sym_while_statement] = state(877);
	v->a[93][sym_if_statement] = state(877);
	v->a[93][sym_case_statement] = state(877);
	return (parse_table_234(v));
}

void	parse_table_234(t_parse_table_array *v)
{
	v->a[93][sym_function_definition] = state(877);
	v->a[93][sym_compound_statement] = state(877);
	v->a[93][sym_subshell] = state(877);
	v->a[93][sym_pipeline] = state(937);
	v->a[93][sym_list] = state(877);
	v->a[93][sym_negated_command] = state(877);
	v->a[93][sym_command] = state(877);
	v->a[93][sym_command_name] = state(158);
	v->a[93][sym_variable_assignment] = state(186);
	v->a[93][sym__variable_assignments] = state(877);
	v->a[93][sym_file_redirect] = state(515);
	v->a[93][sym_arithmetic_expansion] = state(277);
	v->a[93][sym_concatenation] = state(555);
	v->a[93][sym_string] = state(277);
	v->a[93][sym_simple_expansion] = state(277);
	v->a[93][sym_expansion] = state(277);
	v->a[93][sym_command_substitution] = state(277);
	v->a[93][aux_sym__statements_repeat1] = state(112);
	v->a[93][aux_sym_redirected_statement_repeat2] = state(1019);
	v->a[93][aux_sym_command_repeat1] = state(298);
	return (parse_table_235(v));
}

/* EOF parse_table_46.c */
