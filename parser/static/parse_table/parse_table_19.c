/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_19.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_95(t_parse_table_array *v)
{
	v->a[36][sym_expansion] = state(401);
	v->a[36][sym_command_substitution] = state(401);
	v->a[36][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[36][aux_sym_command_repeat1] = state(411);
	v->a[36][sym_word] = actions(41);
	v->a[36][anon_sym_for] = actions(9);
	v->a[36][anon_sym_while] = actions(11);
	v->a[36][anon_sym_until] = actions(11);
	v->a[36][anon_sym_do] = actions(198);
	v->a[36][anon_sym_if] = actions(13);
	v->a[36][anon_sym_case] = actions(15);
	v->a[36][anon_sym_LPAREN] = actions(17);
	v->a[36][anon_sym_LBRACE] = actions(19);
	v->a[36][anon_sym_BANG] = actions(49);
	v->a[36][anon_sym_LT] = actions(51);
	v->a[36][anon_sym_GT] = actions(51);
	v->a[36][anon_sym_GT_GT] = actions(51);
	v->a[36][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[36][anon_sym_DOLLAR] = actions(55);
	v->a[36][anon_sym_DQUOTE] = actions(57);
	return (parse_table_96(v));
}

void	parse_table_96(t_parse_table_array *v)
{
	v->a[36][sym_raw_string] = actions(59);
	v->a[36][sym_number] = actions(59);
	v->a[36][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[36][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[36][anon_sym_BQUOTE] = actions(65);
	v->a[36][sym_comment] = actions(3);
	v->a[36][sym_variable_name] = actions(67);
	v->a[37][aux_sym__terminated_statement] = state(103);
	v->a[37][sym__statement_not_pipeline] = state(1561);
	v->a[37][sym_redirected_statement] = state(958);
	v->a[37][sym_for_statement] = state(958);
	v->a[37][sym_while_statement] = state(958);
	v->a[37][sym_do_group] = state(1233);
	v->a[37][sym_if_statement] = state(958);
	v->a[37][sym_case_statement] = state(958);
	v->a[37][sym_function_definition] = state(958);
	v->a[37][sym_compound_statement] = state(958);
	v->a[37][sym_subshell] = state(958);
	v->a[37][sym_pipeline] = state(1001);
	v->a[37][sym_list] = state(958);
	return (parse_table_97(v));
}

void	parse_table_97(t_parse_table_array *v)
{
	v->a[37][sym_negated_command] = state(958);
	v->a[37][sym_command] = state(958);
	v->a[37][sym_command_name] = state(185);
	v->a[37][sym_variable_assignment] = state(238);
	v->a[37][sym__variable_assignments] = state(958);
	v->a[37][sym_file_redirect] = state(551);
	v->a[37][sym_arithmetic_expansion] = state(401);
	v->a[37][sym_concatenation] = state(555);
	v->a[37][sym_string] = state(401);
	v->a[37][sym_simple_expansion] = state(401);
	v->a[37][sym_expansion] = state(401);
	v->a[37][sym_command_substitution] = state(401);
	v->a[37][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[37][aux_sym_command_repeat1] = state(411);
	v->a[37][sym_word] = actions(41);
	v->a[37][anon_sym_for] = actions(9);
	v->a[37][anon_sym_while] = actions(11);
	v->a[37][anon_sym_until] = actions(11);
	v->a[37][anon_sym_do] = actions(200);
	v->a[37][anon_sym_if] = actions(13);
	return (parse_table_98(v));
}

void	parse_table_98(t_parse_table_array *v)
{
	v->a[37][anon_sym_case] = actions(15);
	v->a[37][anon_sym_LPAREN] = actions(17);
	v->a[37][anon_sym_LBRACE] = actions(19);
	v->a[37][anon_sym_BANG] = actions(49);
	v->a[37][anon_sym_LT] = actions(51);
	v->a[37][anon_sym_GT] = actions(51);
	v->a[37][anon_sym_GT_GT] = actions(51);
	v->a[37][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[37][anon_sym_DOLLAR] = actions(55);
	v->a[37][anon_sym_DQUOTE] = actions(57);
	v->a[37][sym_raw_string] = actions(59);
	v->a[37][sym_number] = actions(59);
	v->a[37][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[37][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[37][anon_sym_BQUOTE] = actions(65);
	v->a[37][sym_comment] = actions(3);
	v->a[37][sym_variable_name] = actions(67);
	v->a[38][aux_sym__terminated_statement] = state(38);
	v->a[38][sym__statement_not_pipeline] = state(1561);
	v->a[38][sym_redirected_statement] = state(949);
	return (parse_table_99(v));
}

void	parse_table_99(t_parse_table_array *v)
{
	v->a[38][sym_for_statement] = state(949);
	v->a[38][sym_while_statement] = state(949);
	v->a[38][sym_if_statement] = state(949);
	v->a[38][sym_case_statement] = state(949);
	v->a[38][sym_function_definition] = state(949);
	v->a[38][sym_compound_statement] = state(949);
	v->a[38][sym_subshell] = state(949);
	v->a[38][sym_pipeline] = state(1059);
	v->a[38][sym_list] = state(949);
	v->a[38][sym_negated_command] = state(949);
	v->a[38][sym_command] = state(949);
	v->a[38][sym_command_name] = state(185);
	v->a[38][sym_variable_assignment] = state(237);
	v->a[38][sym__variable_assignments] = state(949);
	v->a[38][sym_file_redirect] = state(551);
	v->a[38][sym_arithmetic_expansion] = state(401);
	v->a[38][sym_concatenation] = state(555);
	v->a[38][sym_string] = state(401);
	v->a[38][sym_simple_expansion] = state(401);
	v->a[38][sym_expansion] = state(401);
	return (parse_table_100(v));
}

/* EOF parse_table_19.c */
