/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_10.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_50(t_parse_table_array *v)
{
	v->a[18][anon_sym_GT_GT] = actions(51);
	v->a[18][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[18][anon_sym_DOLLAR] = actions(55);
	v->a[18][anon_sym_DQUOTE] = actions(57);
	v->a[18][sym_raw_string] = actions(59);
	v->a[18][sym_number] = actions(59);
	v->a[18][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[18][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[18][anon_sym_BQUOTE] = actions(65);
	v->a[18][sym_comment] = actions(3);
	v->a[18][sym_variable_name] = actions(67);
	v->a[19][aux_sym__terminated_statement] = state(19);
	v->a[19][sym__statement_not_pipeline] = state(1561);
	v->a[19][sym_redirected_statement] = state(905);
	v->a[19][sym_for_statement] = state(905);
	v->a[19][sym_while_statement] = state(905);
	v->a[19][sym_if_statement] = state(905);
	v->a[19][sym_case_statement] = state(905);
	v->a[19][sym_function_definition] = state(905);
	v->a[19][sym_compound_statement] = state(905);
	return (parse_table_51(v));
}

void	parse_table_51(t_parse_table_array *v)
{
	v->a[19][sym_subshell] = state(905);
	v->a[19][sym_pipeline] = state(1070);
	v->a[19][sym_list] = state(905);
	v->a[19][sym_negated_command] = state(905);
	v->a[19][sym_command] = state(905);
	v->a[19][sym_command_name] = state(185);
	v->a[19][sym_variable_assignment] = state(231);
	v->a[19][sym__variable_assignments] = state(905);
	v->a[19][sym_file_redirect] = state(551);
	v->a[19][sym_arithmetic_expansion] = state(401);
	v->a[19][sym_concatenation] = state(555);
	v->a[19][sym_string] = state(401);
	v->a[19][sym_simple_expansion] = state(401);
	v->a[19][sym_expansion] = state(401);
	v->a[19][sym_command_substitution] = state(401);
	v->a[19][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[19][aux_sym_command_repeat1] = state(411);
	v->a[19][sym_word] = actions(123);
	v->a[19][anon_sym_for] = actions(126);
	v->a[19][anon_sym_while] = actions(129);
	return (parse_table_52(v));
}

void	parse_table_52(t_parse_table_array *v)
{
	v->a[19][anon_sym_until] = actions(129);
	v->a[19][anon_sym_if] = actions(132);
	v->a[19][anon_sym_fi] = actions(135);
	v->a[19][anon_sym_elif] = actions(135);
	v->a[19][anon_sym_else] = actions(135);
	v->a[19][anon_sym_case] = actions(137);
	v->a[19][anon_sym_LPAREN] = actions(140);
	v->a[19][anon_sym_LBRACE] = actions(143);
	v->a[19][anon_sym_BANG] = actions(146);
	v->a[19][anon_sym_LT] = actions(149);
	v->a[19][anon_sym_GT] = actions(149);
	v->a[19][anon_sym_GT_GT] = actions(149);
	v->a[19][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(152);
	v->a[19][anon_sym_DOLLAR] = actions(155);
	v->a[19][anon_sym_DQUOTE] = actions(158);
	v->a[19][sym_raw_string] = actions(161);
	v->a[19][sym_number] = actions(161);
	v->a[19][anon_sym_DOLLAR_LBRACE] = actions(164);
	v->a[19][anon_sym_DOLLAR_LPAREN] = actions(167);
	v->a[19][anon_sym_BQUOTE] = actions(170);
	return (parse_table_53(v));
}

void	parse_table_53(t_parse_table_array *v)
{
	v->a[19][sym_comment] = actions(3);
	v->a[19][sym_variable_name] = actions(173);
	v->a[20][sym__statements] = state(1754);
	v->a[20][sym__statement_not_pipeline] = state(1561);
	v->a[20][sym_redirected_statement] = state(972);
	v->a[20][sym_for_statement] = state(972);
	v->a[20][sym_while_statement] = state(972);
	v->a[20][sym_if_statement] = state(972);
	v->a[20][sym_case_statement] = state(972);
	v->a[20][sym_function_definition] = state(972);
	v->a[20][sym_compound_statement] = state(972);
	v->a[20][sym_subshell] = state(972);
	v->a[20][sym_pipeline] = state(991);
	v->a[20][sym_list] = state(972);
	v->a[20][sym_negated_command] = state(972);
	v->a[20][sym_command] = state(972);
	v->a[20][sym_command_name] = state(185);
	v->a[20][sym_variable_assignment] = state(216);
	v->a[20][sym__variable_assignments] = state(972);
	v->a[20][sym_file_redirect] = state(551);
	return (parse_table_54(v));
}

void	parse_table_54(t_parse_table_array *v)
{
	v->a[20][sym_arithmetic_expansion] = state(401);
	v->a[20][sym_concatenation] = state(555);
	v->a[20][sym_string] = state(401);
	v->a[20][sym_simple_expansion] = state(401);
	v->a[20][sym_expansion] = state(401);
	v->a[20][sym_command_substitution] = state(401);
	v->a[20][aux_sym__statements_repeat1] = state(118);
	v->a[20][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[20][aux_sym__case_item_last_repeat2] = state(326);
	v->a[20][aux_sym_command_repeat1] = state(411);
	v->a[20][sym_word] = actions(41);
	v->a[20][anon_sym_for] = actions(9);
	v->a[20][anon_sym_while] = actions(11);
	v->a[20][anon_sym_until] = actions(11);
	v->a[20][anon_sym_if] = actions(13);
	v->a[20][anon_sym_case] = actions(15);
	v->a[20][anon_sym_LPAREN] = actions(17);
	v->a[20][anon_sym_LF] = actions(115);
	v->a[20][anon_sym_LBRACE] = actions(19);
	v->a[20][anon_sym_BANG] = actions(49);
	return (parse_table_55(v));
}

/* EOF parse_table_10.c */