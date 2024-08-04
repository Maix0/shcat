/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_42.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_210(t_parse_table_array *v)
{
	v->a[83][sym_file_redirect] = state(521);
	v->a[83][sym_arithmetic_expansion] = state(277);
	v->a[83][sym_concatenation] = state(555);
	v->a[83][sym_string] = state(277);
	v->a[83][sym_simple_expansion] = state(277);
	v->a[83][sym_expansion] = state(277);
	v->a[83][sym_command_substitution] = state(277);
	v->a[83][aux_sym__statements_repeat1] = state(112);
	v->a[83][aux_sym_redirected_statement_repeat2] = state(1019);
	v->a[83][aux_sym_command_repeat1] = state(298);
	v->a[83][sym_word] = actions(208);
	v->a[83][anon_sym_for] = actions(9);
	v->a[83][anon_sym_while] = actions(11);
	v->a[83][anon_sym_until] = actions(11);
	v->a[83][anon_sym_if] = actions(13);
	v->a[83][anon_sym_case] = actions(15);
	v->a[83][anon_sym_LPAREN] = actions(17);
	v->a[83][anon_sym_LBRACE] = actions(19);
	v->a[83][anon_sym_BANG] = actions(210);
	v->a[83][anon_sym_LT] = actions(212);
	return (parse_table_211(v));
}

void	parse_table_211(t_parse_table_array *v)
{
	v->a[83][anon_sym_GT] = actions(212);
	v->a[83][anon_sym_GT_GT] = actions(212);
	v->a[83][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[83][anon_sym_DOLLAR] = actions(55);
	v->a[83][anon_sym_DQUOTE] = actions(57);
	v->a[83][sym_raw_string] = actions(214);
	v->a[83][sym_number] = actions(214);
	v->a[83][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[83][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[83][anon_sym_BQUOTE] = actions(65);
	v->a[83][sym_comment] = actions(3);
	v->a[83][sym_variable_name] = actions(216);
	v->a[84][sym__statements] = state(1716);
	v->a[84][sym__statement_not_pipeline] = state(1557);
	v->a[84][sym_redirected_statement] = state(877);
	v->a[84][sym_for_statement] = state(877);
	v->a[84][sym_while_statement] = state(877);
	v->a[84][sym_if_statement] = state(877);
	v->a[84][sym_case_statement] = state(877);
	v->a[84][sym_function_definition] = state(877);
	return (parse_table_212(v));
}

void	parse_table_212(t_parse_table_array *v)
{
	v->a[84][sym_compound_statement] = state(877);
	v->a[84][sym_subshell] = state(877);
	v->a[84][sym_pipeline] = state(937);
	v->a[84][sym_list] = state(877);
	v->a[84][sym_negated_command] = state(877);
	v->a[84][sym_command] = state(877);
	v->a[84][sym_command_name] = state(158);
	v->a[84][sym_variable_assignment] = state(186);
	v->a[84][sym__variable_assignments] = state(877);
	v->a[84][sym_file_redirect] = state(551);
	v->a[84][sym_arithmetic_expansion] = state(277);
	v->a[84][sym_concatenation] = state(555);
	v->a[84][sym_string] = state(277);
	v->a[84][sym_simple_expansion] = state(277);
	v->a[84][sym_expansion] = state(277);
	v->a[84][sym_command_substitution] = state(277);
	v->a[84][aux_sym__statements_repeat1] = state(112);
	v->a[84][aux_sym_redirected_statement_repeat2] = state(1019);
	v->a[84][aux_sym_command_repeat1] = state(298);
	v->a[84][sym_word] = actions(208);
	return (parse_table_213(v));
}

void	parse_table_213(t_parse_table_array *v)
{
	v->a[84][anon_sym_for] = actions(9);
	v->a[84][anon_sym_while] = actions(11);
	v->a[84][anon_sym_until] = actions(11);
	v->a[84][anon_sym_if] = actions(13);
	v->a[84][anon_sym_case] = actions(15);
	v->a[84][anon_sym_LPAREN] = actions(17);
	v->a[84][anon_sym_LBRACE] = actions(19);
	v->a[84][anon_sym_BANG] = actions(210);
	v->a[84][anon_sym_LT] = actions(212);
	v->a[84][anon_sym_GT] = actions(212);
	v->a[84][anon_sym_GT_GT] = actions(212);
	v->a[84][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[84][anon_sym_DOLLAR] = actions(55);
	v->a[84][anon_sym_DQUOTE] = actions(57);
	v->a[84][sym_raw_string] = actions(214);
	v->a[84][sym_number] = actions(214);
	v->a[84][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[84][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[84][anon_sym_BQUOTE] = actions(65);
	v->a[84][sym_comment] = actions(3);
	return (parse_table_214(v));
}

void	parse_table_214(t_parse_table_array *v)
{
	v->a[84][sym_variable_name] = actions(216);
	v->a[85][aux_sym__terminated_statement] = state(38);
	v->a[85][sym__statement_not_pipeline] = state(1561);
	v->a[85][sym_redirected_statement] = state(949);
	v->a[85][sym_for_statement] = state(949);
	v->a[85][sym_while_statement] = state(949);
	v->a[85][sym_if_statement] = state(949);
	v->a[85][sym_case_statement] = state(949);
	v->a[85][sym_function_definition] = state(949);
	v->a[85][sym_compound_statement] = state(949);
	v->a[85][sym_subshell] = state(949);
	v->a[85][sym_pipeline] = state(1059);
	v->a[85][sym_list] = state(949);
	v->a[85][sym_negated_command] = state(949);
	v->a[85][sym_command] = state(949);
	v->a[85][sym_command_name] = state(185);
	v->a[85][sym_variable_assignment] = state(237);
	v->a[85][sym__variable_assignments] = state(949);
	v->a[85][sym_file_redirect] = state(551);
	v->a[85][sym_arithmetic_expansion] = state(401);
	return (parse_table_215(v));
}

/* EOF parse_table_42.c */
