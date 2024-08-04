/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_11.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_55(t_parse_table_array *v)
{
	v->a[20][anon_sym_LT] = actions(51);
	v->a[20][anon_sym_GT] = actions(51);
	v->a[20][anon_sym_GT_GT] = actions(51);
	v->a[20][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[20][anon_sym_DOLLAR] = actions(55);
	v->a[20][anon_sym_DQUOTE] = actions(57);
	v->a[20][sym_raw_string] = actions(59);
	v->a[20][sym_number] = actions(59);
	v->a[20][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[20][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[20][anon_sym_BQUOTE] = actions(65);
	v->a[20][sym_comment] = actions(3);
	v->a[20][sym_variable_name] = actions(67);
	v->a[21][sym__statements] = state(1638);
	v->a[21][sym__statement_not_pipeline] = state(1561);
	v->a[21][sym_redirected_statement] = state(972);
	v->a[21][sym_for_statement] = state(972);
	v->a[21][sym_while_statement] = state(972);
	v->a[21][sym_if_statement] = state(972);
	v->a[21][sym_case_statement] = state(972);
	return (parse_table_56(v));
}

void	parse_table_56(t_parse_table_array *v)
{
	v->a[21][sym_function_definition] = state(972);
	v->a[21][sym_compound_statement] = state(972);
	v->a[21][sym_subshell] = state(972);
	v->a[21][sym_pipeline] = state(991);
	v->a[21][sym_list] = state(972);
	v->a[21][sym_negated_command] = state(972);
	v->a[21][sym_command] = state(972);
	v->a[21][sym_command_name] = state(185);
	v->a[21][sym_variable_assignment] = state(216);
	v->a[21][sym__variable_assignments] = state(972);
	v->a[21][sym_file_redirect] = state(551);
	v->a[21][sym_arithmetic_expansion] = state(401);
	v->a[21][sym_concatenation] = state(555);
	v->a[21][sym_string] = state(401);
	v->a[21][sym_simple_expansion] = state(401);
	v->a[21][sym_expansion] = state(401);
	v->a[21][sym_command_substitution] = state(401);
	v->a[21][aux_sym__statements_repeat1] = state(118);
	v->a[21][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[21][aux_sym__case_item_last_repeat2] = state(11);
	return (parse_table_57(v));
}

void	parse_table_57(t_parse_table_array *v)
{
	v->a[21][aux_sym_command_repeat1] = state(411);
	v->a[21][sym_word] = actions(41);
	v->a[21][anon_sym_for] = actions(9);
	v->a[21][anon_sym_while] = actions(11);
	v->a[21][anon_sym_until] = actions(11);
	v->a[21][anon_sym_if] = actions(13);
	v->a[21][anon_sym_case] = actions(15);
	v->a[21][anon_sym_LPAREN] = actions(17);
	v->a[21][anon_sym_LF] = actions(176);
	v->a[21][anon_sym_LBRACE] = actions(19);
	v->a[21][anon_sym_BANG] = actions(49);
	v->a[21][anon_sym_LT] = actions(51);
	v->a[21][anon_sym_GT] = actions(51);
	v->a[21][anon_sym_GT_GT] = actions(51);
	v->a[21][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[21][anon_sym_DOLLAR] = actions(55);
	v->a[21][anon_sym_DQUOTE] = actions(57);
	v->a[21][sym_raw_string] = actions(59);
	v->a[21][sym_number] = actions(59);
	v->a[21][anon_sym_DOLLAR_LBRACE] = actions(61);
	return (parse_table_58(v));
}

void	parse_table_58(t_parse_table_array *v)
{
	v->a[21][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[21][anon_sym_BQUOTE] = actions(65);
	v->a[21][sym_comment] = actions(3);
	v->a[21][sym_variable_name] = actions(67);
	v->a[22][sym__statements] = state(1637);
	v->a[22][sym__statement_not_pipeline] = state(1561);
	v->a[22][sym_redirected_statement] = state(972);
	v->a[22][sym_for_statement] = state(972);
	v->a[22][sym_while_statement] = state(972);
	v->a[22][sym_if_statement] = state(972);
	v->a[22][sym_case_statement] = state(972);
	v->a[22][sym_function_definition] = state(972);
	v->a[22][sym_compound_statement] = state(972);
	v->a[22][sym_subshell] = state(972);
	v->a[22][sym_pipeline] = state(991);
	v->a[22][sym_list] = state(972);
	v->a[22][sym_negated_command] = state(972);
	v->a[22][sym_command] = state(972);
	v->a[22][sym_command_name] = state(185);
	v->a[22][sym_variable_assignment] = state(216);
	return (parse_table_59(v));
}

void	parse_table_59(t_parse_table_array *v)
{
	v->a[22][sym__variable_assignments] = state(972);
	v->a[22][sym_file_redirect] = state(551);
	v->a[22][sym_arithmetic_expansion] = state(401);
	v->a[22][sym_concatenation] = state(555);
	v->a[22][sym_string] = state(401);
	v->a[22][sym_simple_expansion] = state(401);
	v->a[22][sym_expansion] = state(401);
	v->a[22][sym_command_substitution] = state(401);
	v->a[22][aux_sym__statements_repeat1] = state(118);
	v->a[22][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[22][aux_sym__case_item_last_repeat2] = state(13);
	v->a[22][aux_sym_command_repeat1] = state(411);
	v->a[22][sym_word] = actions(41);
	v->a[22][anon_sym_for] = actions(9);
	v->a[22][anon_sym_while] = actions(11);
	v->a[22][anon_sym_until] = actions(11);
	v->a[22][anon_sym_if] = actions(13);
	v->a[22][anon_sym_case] = actions(15);
	v->a[22][anon_sym_LPAREN] = actions(17);
	v->a[22][anon_sym_LF] = actions(178);
	return (parse_table_60(v));
}

/* EOF parse_table_11.c */
