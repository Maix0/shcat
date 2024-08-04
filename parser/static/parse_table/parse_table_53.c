/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_53.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_265(t_parse_table_array *v)
{
	v->a[105][anon_sym_DQUOTE] = actions(57);
	v->a[105][sym_raw_string] = actions(59);
	v->a[105][sym_number] = actions(59);
	v->a[105][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[105][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[105][anon_sym_BQUOTE] = actions(65);
	v->a[105][sym_comment] = actions(3);
	v->a[105][sym_variable_name] = actions(67);
	v->a[106][aux_sym__terminated_statement] = state(35);
	v->a[106][sym__statement_not_pipeline] = state(1561);
	v->a[106][sym_redirected_statement] = state(958);
	v->a[106][sym_for_statement] = state(958);
	v->a[106][sym_while_statement] = state(958);
	v->a[106][sym_if_statement] = state(958);
	v->a[106][sym_case_statement] = state(958);
	v->a[106][sym_function_definition] = state(958);
	v->a[106][sym_compound_statement] = state(958);
	v->a[106][sym_subshell] = state(958);
	v->a[106][sym_pipeline] = state(1001);
	v->a[106][sym_list] = state(958);
	return (parse_table_266(v));
}

void	parse_table_266(t_parse_table_array *v)
{
	v->a[106][sym_negated_command] = state(958);
	v->a[106][sym_command] = state(958);
	v->a[106][sym_command_name] = state(185);
	v->a[106][sym_variable_assignment] = state(238);
	v->a[106][sym__variable_assignments] = state(958);
	v->a[106][sym_file_redirect] = state(551);
	v->a[106][sym_arithmetic_expansion] = state(401);
	v->a[106][sym_concatenation] = state(555);
	v->a[106][sym_string] = state(401);
	v->a[106][sym_simple_expansion] = state(401);
	v->a[106][sym_expansion] = state(401);
	v->a[106][sym_command_substitution] = state(401);
	v->a[106][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[106][aux_sym_command_repeat1] = state(411);
	v->a[106][sym_word] = actions(41);
	v->a[106][anon_sym_for] = actions(9);
	v->a[106][anon_sym_while] = actions(11);
	v->a[106][anon_sym_until] = actions(11);
	v->a[106][anon_sym_if] = actions(13);
	v->a[106][anon_sym_case] = actions(15);
	return (parse_table_267(v));
}

void	parse_table_267(t_parse_table_array *v)
{
	v->a[106][anon_sym_LPAREN] = actions(17);
	v->a[106][anon_sym_LBRACE] = actions(19);
	v->a[106][anon_sym_BANG] = actions(49);
	v->a[106][anon_sym_LT] = actions(51);
	v->a[106][anon_sym_GT] = actions(51);
	v->a[106][anon_sym_GT_GT] = actions(51);
	v->a[106][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[106][anon_sym_DOLLAR] = actions(55);
	v->a[106][anon_sym_DQUOTE] = actions(57);
	v->a[106][sym_raw_string] = actions(59);
	v->a[106][sym_number] = actions(59);
	v->a[106][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[106][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[106][anon_sym_BQUOTE] = actions(65);
	v->a[106][sym_comment] = actions(3);
	v->a[106][sym_variable_name] = actions(67);
	v->a[107][aux_sym__terminated_statement] = state(85);
	v->a[107][sym__statement_not_pipeline] = state(1561);
	v->a[107][sym_redirected_statement] = state(949);
	v->a[107][sym_for_statement] = state(949);
	return (parse_table_268(v));
}

void	parse_table_268(t_parse_table_array *v)
{
	v->a[107][sym_while_statement] = state(949);
	v->a[107][sym_if_statement] = state(949);
	v->a[107][sym_case_statement] = state(949);
	v->a[107][sym_function_definition] = state(949);
	v->a[107][sym_compound_statement] = state(949);
	v->a[107][sym_subshell] = state(949);
	v->a[107][sym_pipeline] = state(1059);
	v->a[107][sym_list] = state(949);
	v->a[107][sym_negated_command] = state(949);
	v->a[107][sym_command] = state(949);
	v->a[107][sym_command_name] = state(185);
	v->a[107][sym_variable_assignment] = state(237);
	v->a[107][sym__variable_assignments] = state(949);
	v->a[107][sym_file_redirect] = state(551);
	v->a[107][sym_arithmetic_expansion] = state(401);
	v->a[107][sym_concatenation] = state(555);
	v->a[107][sym_string] = state(401);
	v->a[107][sym_simple_expansion] = state(401);
	v->a[107][sym_expansion] = state(401);
	v->a[107][sym_command_substitution] = state(401);
	return (parse_table_269(v));
}

void	parse_table_269(t_parse_table_array *v)
{
	v->a[107][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[107][aux_sym_command_repeat1] = state(411);
	v->a[107][sym_word] = actions(41);
	v->a[107][anon_sym_for] = actions(9);
	v->a[107][anon_sym_while] = actions(11);
	v->a[107][anon_sym_until] = actions(11);
	v->a[107][anon_sym_if] = actions(13);
	v->a[107][anon_sym_case] = actions(15);
	v->a[107][anon_sym_LPAREN] = actions(17);
	v->a[107][anon_sym_LBRACE] = actions(19);
	v->a[107][anon_sym_BANG] = actions(49);
	v->a[107][anon_sym_LT] = actions(51);
	v->a[107][anon_sym_GT] = actions(51);
	v->a[107][anon_sym_GT_GT] = actions(51);
	v->a[107][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[107][anon_sym_DOLLAR] = actions(55);
	v->a[107][anon_sym_DQUOTE] = actions(57);
	v->a[107][sym_raw_string] = actions(59);
	v->a[107][sym_number] = actions(59);
	v->a[107][anon_sym_DOLLAR_LBRACE] = actions(61);
	return (parse_table_270(v));
}

/* EOF parse_table_53.c */
