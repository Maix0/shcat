/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_60.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_300(t_parse_table_array *v)
{
	v->a[120][sym_simple_expansion] = state(280);
	v->a[120][sym_expansion] = state(280);
	v->a[120][sym_command_substitution] = state(280);
	v->a[120][aux_sym_redirected_statement_repeat2] = state(999);
	v->a[120][aux_sym_command_repeat1] = state(398);
	v->a[120][sym_word] = actions(7);
	v->a[120][anon_sym_for] = actions(9);
	v->a[120][anon_sym_while] = actions(11);
	v->a[120][anon_sym_until] = actions(11);
	v->a[120][anon_sym_if] = actions(13);
	v->a[120][anon_sym_case] = actions(15);
	v->a[120][anon_sym_LPAREN] = actions(17);
	v->a[120][anon_sym_LBRACE] = actions(19);
	v->a[120][anon_sym_BANG] = actions(21);
	v->a[120][anon_sym_LT] = actions(23);
	v->a[120][anon_sym_GT] = actions(23);
	v->a[120][anon_sym_GT_GT] = actions(23);
	v->a[120][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(25);
	v->a[120][anon_sym_DOLLAR] = actions(27);
	v->a[120][anon_sym_DQUOTE] = actions(29);
	return (parse_table_301(v));
}

void	parse_table_301(t_parse_table_array *v)
{
	v->a[120][sym_raw_string] = actions(31);
	v->a[120][sym_number] = actions(31);
	v->a[120][anon_sym_DOLLAR_LBRACE] = actions(33);
	v->a[120][anon_sym_DOLLAR_LPAREN] = actions(35);
	v->a[120][anon_sym_BQUOTE] = actions(37);
	v->a[120][sym_comment] = actions(3);
	v->a[120][sym_variable_name] = actions(39);
	v->a[121][sym__statement_not_pipeline] = state(953);
	v->a[121][sym_redirected_statement] = state(953);
	v->a[121][sym_for_statement] = state(953);
	v->a[121][sym_while_statement] = state(953);
	v->a[121][sym_if_statement] = state(953);
	v->a[121][sym_case_statement] = state(953);
	v->a[121][sym_function_definition] = state(953);
	v->a[121][sym_compound_statement] = state(953);
	v->a[121][sym_subshell] = state(953);
	v->a[121][sym_pipeline] = state(1364);
	v->a[121][sym_list] = state(953);
	v->a[121][sym_negated_command] = state(953);
	v->a[121][sym_command] = state(953);
	return (parse_table_302(v));
}

void	parse_table_302(t_parse_table_array *v)
{
	v->a[121][sym_command_name] = state(185);
	v->a[121][sym_variable_assignment] = state(247);
	v->a[121][sym__variable_assignments] = state(953);
	v->a[121][sym_file_redirect] = state(551);
	v->a[121][sym_arithmetic_expansion] = state(401);
	v->a[121][sym_concatenation] = state(555);
	v->a[121][sym_string] = state(401);
	v->a[121][sym_simple_expansion] = state(401);
	v->a[121][sym_expansion] = state(401);
	v->a[121][sym_command_substitution] = state(401);
	v->a[121][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[121][aux_sym_command_repeat1] = state(411);
	v->a[121][sym_word] = actions(41);
	v->a[121][anon_sym_for] = actions(9);
	v->a[121][anon_sym_while] = actions(11);
	v->a[121][anon_sym_until] = actions(11);
	v->a[121][anon_sym_if] = actions(13);
	v->a[121][anon_sym_case] = actions(15);
	v->a[121][anon_sym_LPAREN] = actions(17);
	v->a[121][anon_sym_LBRACE] = actions(19);
	return (parse_table_303(v));
}

void	parse_table_303(t_parse_table_array *v)
{
	v->a[121][anon_sym_BANG] = actions(49);
	v->a[121][anon_sym_LT] = actions(51);
	v->a[121][anon_sym_GT] = actions(51);
	v->a[121][anon_sym_GT_GT] = actions(51);
	v->a[121][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[121][anon_sym_DOLLAR] = actions(55);
	v->a[121][anon_sym_DQUOTE] = actions(57);
	v->a[121][sym_raw_string] = actions(59);
	v->a[121][sym_number] = actions(59);
	v->a[121][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[121][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[121][anon_sym_BQUOTE] = actions(65);
	v->a[121][sym_comment] = actions(3);
	v->a[121][sym_variable_name] = actions(67);
	v->a[122][sym__statement_not_pipeline] = state(953);
	v->a[122][sym_redirected_statement] = state(953);
	v->a[122][sym_for_statement] = state(953);
	v->a[122][sym_while_statement] = state(953);
	v->a[122][sym_if_statement] = state(953);
	v->a[122][sym_case_statement] = state(953);
	return (parse_table_304(v));
}

void	parse_table_304(t_parse_table_array *v)
{
	v->a[122][sym_function_definition] = state(953);
	v->a[122][sym_compound_statement] = state(953);
	v->a[122][sym_subshell] = state(953);
	v->a[122][sym_pipeline] = state(1324);
	v->a[122][sym_list] = state(953);
	v->a[122][sym_negated_command] = state(953);
	v->a[122][sym_command] = state(953);
	v->a[122][sym_command_name] = state(158);
	v->a[122][sym_variable_assignment] = state(233);
	v->a[122][sym__variable_assignments] = state(953);
	v->a[122][sym_file_redirect] = state(551);
	v->a[122][sym_arithmetic_expansion] = state(277);
	v->a[122][sym_concatenation] = state(555);
	v->a[122][sym_string] = state(277);
	v->a[122][sym_simple_expansion] = state(277);
	v->a[122][sym_expansion] = state(277);
	v->a[122][sym_command_substitution] = state(277);
	v->a[122][aux_sym_redirected_statement_repeat2] = state(1019);
	v->a[122][aux_sym_command_repeat1] = state(298);
	v->a[122][sym_word] = actions(208);
	return (parse_table_305(v));
}

/* EOF parse_table_60.c */
