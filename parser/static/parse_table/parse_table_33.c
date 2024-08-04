/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_33.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_165(t_parse_table_array *v)
{
	v->a[64][sym_variable_name] = actions(67);
	v->a[65][sym__statements] = state(1629);
	v->a[65][sym__statement_not_pipeline] = state(1560);
	v->a[65][sym_redirected_statement] = state(820);
	v->a[65][sym_for_statement] = state(820);
	v->a[65][sym_while_statement] = state(820);
	v->a[65][sym_if_statement] = state(820);
	v->a[65][sym_case_statement] = state(820);
	v->a[65][sym_function_definition] = state(820);
	v->a[65][sym_compound_statement] = state(820);
	v->a[65][sym_subshell] = state(820);
	v->a[65][sym_pipeline] = state(969);
	v->a[65][sym_list] = state(820);
	v->a[65][sym_negated_command] = state(820);
	v->a[65][sym_command] = state(820);
	v->a[65][sym_command_name] = state(179);
	v->a[65][sym_variable_assignment] = state(208);
	v->a[65][sym__variable_assignments] = state(820);
	v->a[65][sym_file_redirect] = state(599);
	v->a[65][sym_arithmetic_expansion] = state(401);
	return (parse_table_166(v));
}

void	parse_table_166(t_parse_table_array *v)
{
	v->a[65][sym_concatenation] = state(555);
	v->a[65][sym_string] = state(401);
	v->a[65][sym_simple_expansion] = state(401);
	v->a[65][sym_expansion] = state(401);
	v->a[65][sym_command_substitution] = state(401);
	v->a[65][aux_sym__statements_repeat1] = state(116);
	v->a[65][aux_sym_redirected_statement_repeat2] = state(1006);
	v->a[65][aux_sym_command_repeat1] = state(385);
	v->a[65][sym_word] = actions(204);
	v->a[65][anon_sym_for] = actions(9);
	v->a[65][anon_sym_while] = actions(11);
	v->a[65][anon_sym_until] = actions(11);
	v->a[65][anon_sym_if] = actions(13);
	v->a[65][anon_sym_case] = actions(15);
	v->a[65][anon_sym_LPAREN] = actions(17);
	v->a[65][anon_sym_LBRACE] = actions(19);
	v->a[65][anon_sym_BANG] = actions(206);
	v->a[65][anon_sym_LT] = actions(51);
	v->a[65][anon_sym_GT] = actions(51);
	v->a[65][anon_sym_GT_GT] = actions(51);
	return (parse_table_167(v));
}

void	parse_table_167(t_parse_table_array *v)
{
	v->a[65][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[65][anon_sym_DOLLAR] = actions(55);
	v->a[65][anon_sym_DQUOTE] = actions(57);
	v->a[65][sym_raw_string] = actions(59);
	v->a[65][sym_number] = actions(59);
	v->a[65][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[65][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[65][anon_sym_BQUOTE] = actions(65);
	v->a[65][sym_comment] = actions(3);
	v->a[65][sym_variable_name] = actions(67);
	v->a[66][sym__statements] = state(1668);
	v->a[66][sym__statement_not_pipeline] = state(1560);
	v->a[66][sym_redirected_statement] = state(820);
	v->a[66][sym_for_statement] = state(820);
	v->a[66][sym_while_statement] = state(820);
	v->a[66][sym_if_statement] = state(820);
	v->a[66][sym_case_statement] = state(820);
	v->a[66][sym_function_definition] = state(820);
	v->a[66][sym_compound_statement] = state(820);
	v->a[66][sym_subshell] = state(820);
	return (parse_table_168(v));
}

void	parse_table_168(t_parse_table_array *v)
{
	v->a[66][sym_pipeline] = state(969);
	v->a[66][sym_list] = state(820);
	v->a[66][sym_negated_command] = state(820);
	v->a[66][sym_command] = state(820);
	v->a[66][sym_command_name] = state(179);
	v->a[66][sym_variable_assignment] = state(208);
	v->a[66][sym__variable_assignments] = state(820);
	v->a[66][sym_file_redirect] = state(599);
	v->a[66][sym_arithmetic_expansion] = state(401);
	v->a[66][sym_concatenation] = state(555);
	v->a[66][sym_string] = state(401);
	v->a[66][sym_simple_expansion] = state(401);
	v->a[66][sym_expansion] = state(401);
	v->a[66][sym_command_substitution] = state(401);
	v->a[66][aux_sym__statements_repeat1] = state(116);
	v->a[66][aux_sym_redirected_statement_repeat2] = state(1006);
	v->a[66][aux_sym_command_repeat1] = state(385);
	v->a[66][sym_word] = actions(204);
	v->a[66][anon_sym_for] = actions(9);
	v->a[66][anon_sym_while] = actions(11);
	return (parse_table_169(v));
}

void	parse_table_169(t_parse_table_array *v)
{
	v->a[66][anon_sym_until] = actions(11);
	v->a[66][anon_sym_if] = actions(13);
	v->a[66][anon_sym_case] = actions(15);
	v->a[66][anon_sym_LPAREN] = actions(17);
	v->a[66][anon_sym_LBRACE] = actions(19);
	v->a[66][anon_sym_BANG] = actions(206);
	v->a[66][anon_sym_LT] = actions(51);
	v->a[66][anon_sym_GT] = actions(51);
	v->a[66][anon_sym_GT_GT] = actions(51);
	v->a[66][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[66][anon_sym_DOLLAR] = actions(55);
	v->a[66][anon_sym_DQUOTE] = actions(57);
	v->a[66][sym_raw_string] = actions(59);
	v->a[66][sym_number] = actions(59);
	v->a[66][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[66][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[66][anon_sym_BQUOTE] = actions(65);
	v->a[66][sym_comment] = actions(3);
	v->a[66][sym_variable_name] = actions(67);
	v->a[67][sym__statements] = state(1735);
	return (parse_table_170(v));
}

/* EOF parse_table_33.c */
