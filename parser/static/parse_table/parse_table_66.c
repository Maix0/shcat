/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_66.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_330(t_parse_table_array *v)
{
	v->a[133][sym_pipeline] = state(929);
	v->a[133][sym_list] = state(927);
	v->a[133][sym_negated_command] = state(927);
	v->a[133][sym_command] = state(927);
	v->a[133][sym_command_name] = state(179);
	v->a[133][sym_variable_assignment] = state(254);
	v->a[133][sym__variable_assignments] = state(927);
	v->a[133][sym_file_redirect] = state(599);
	v->a[133][sym_arithmetic_expansion] = state(401);
	v->a[133][sym_concatenation] = state(555);
	v->a[133][sym_string] = state(401);
	v->a[133][sym_simple_expansion] = state(401);
	v->a[133][sym_expansion] = state(401);
	v->a[133][sym_command_substitution] = state(401);
	v->a[133][aux_sym_redirected_statement_repeat2] = state(1006);
	v->a[133][aux_sym_command_repeat1] = state(385);
	v->a[133][sym_word] = actions(204);
	v->a[133][anon_sym_for] = actions(9);
	v->a[133][anon_sym_while] = actions(11);
	v->a[133][anon_sym_until] = actions(11);
	return (parse_table_331(v));
}

void	parse_table_331(t_parse_table_array *v)
{
	v->a[133][anon_sym_if] = actions(13);
	v->a[133][anon_sym_case] = actions(15);
	v->a[133][anon_sym_LPAREN] = actions(17);
	v->a[133][anon_sym_LBRACE] = actions(19);
	v->a[133][anon_sym_BANG] = actions(206);
	v->a[133][anon_sym_LT] = actions(51);
	v->a[133][anon_sym_GT] = actions(51);
	v->a[133][anon_sym_GT_GT] = actions(51);
	v->a[133][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[133][anon_sym_DOLLAR] = actions(55);
	v->a[133][anon_sym_DQUOTE] = actions(57);
	v->a[133][sym_raw_string] = actions(59);
	v->a[133][sym_number] = actions(59);
	v->a[133][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[133][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[133][anon_sym_BQUOTE] = actions(65);
	v->a[133][sym_comment] = actions(3);
	v->a[133][sym_variable_name] = actions(67);
	v->a[134][sym__statement_not_pipeline] = state(953);
	v->a[134][sym_redirected_statement] = state(953);
	return (parse_table_332(v));
}

void	parse_table_332(t_parse_table_array *v)
{
	v->a[134][sym_for_statement] = state(953);
	v->a[134][sym_while_statement] = state(953);
	v->a[134][sym_if_statement] = state(953);
	v->a[134][sym_case_statement] = state(953);
	v->a[134][sym_function_definition] = state(953);
	v->a[134][sym_compound_statement] = state(953);
	v->a[134][sym_subshell] = state(953);
	v->a[134][sym_pipeline] = state(1357);
	v->a[134][sym_list] = state(953);
	v->a[134][sym_negated_command] = state(953);
	v->a[134][sym_command] = state(953);
	v->a[134][sym_command_name] = state(179);
	v->a[134][sym_variable_assignment] = state(244);
	v->a[134][sym__variable_assignments] = state(953);
	v->a[134][sym_file_redirect] = state(599);
	v->a[134][sym_arithmetic_expansion] = state(401);
	v->a[134][sym_concatenation] = state(555);
	v->a[134][sym_string] = state(401);
	v->a[134][sym_simple_expansion] = state(401);
	v->a[134][sym_expansion] = state(401);
	return (parse_table_333(v));
}

void	parse_table_333(t_parse_table_array *v)
{
	v->a[134][sym_command_substitution] = state(401);
	v->a[134][aux_sym_redirected_statement_repeat2] = state(1006);
	v->a[134][aux_sym_command_repeat1] = state(385);
	v->a[134][sym_word] = actions(204);
	v->a[134][anon_sym_for] = actions(9);
	v->a[134][anon_sym_while] = actions(11);
	v->a[134][anon_sym_until] = actions(11);
	v->a[134][anon_sym_if] = actions(13);
	v->a[134][anon_sym_case] = actions(15);
	v->a[134][anon_sym_LPAREN] = actions(17);
	v->a[134][anon_sym_LBRACE] = actions(19);
	v->a[134][anon_sym_BANG] = actions(206);
	v->a[134][anon_sym_LT] = actions(51);
	v->a[134][anon_sym_GT] = actions(51);
	v->a[134][anon_sym_GT_GT] = actions(51);
	v->a[134][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[134][anon_sym_DOLLAR] = actions(55);
	v->a[134][anon_sym_DQUOTE] = actions(57);
	v->a[134][sym_raw_string] = actions(59);
	v->a[134][sym_number] = actions(59);
	return (parse_table_334(v));
}

void	parse_table_334(t_parse_table_array *v)
{
	v->a[134][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[134][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[134][anon_sym_BQUOTE] = actions(65);
	v->a[134][sym_comment] = actions(3);
	v->a[134][sym_variable_name] = actions(67);
	v->a[135][sym__statement_not_pipeline] = state(953);
	v->a[135][sym_redirected_statement] = state(953);
	v->a[135][sym_for_statement] = state(953);
	v->a[135][sym_while_statement] = state(953);
	v->a[135][sym_if_statement] = state(953);
	v->a[135][sym_case_statement] = state(953);
	v->a[135][sym_function_definition] = state(953);
	v->a[135][sym_compound_statement] = state(953);
	v->a[135][sym_subshell] = state(953);
	v->a[135][sym_pipeline] = state(1351);
	v->a[135][sym_list] = state(953);
	v->a[135][sym_negated_command] = state(953);
	v->a[135][sym_command] = state(953);
	v->a[135][sym_command_name] = state(252);
	v->a[135][sym_variable_assignment] = state(427);
	return (parse_table_335(v));
}

/* EOF parse_table_66.c */
