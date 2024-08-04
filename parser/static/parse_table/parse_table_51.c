/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_51.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_255(t_parse_table_array *v)
{
	v->a[101][anon_sym_BANG] = actions(210);
	v->a[101][anon_sym_LT] = actions(212);
	v->a[101][anon_sym_GT] = actions(212);
	v->a[101][anon_sym_GT_GT] = actions(212);
	v->a[101][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[101][anon_sym_DOLLAR] = actions(55);
	v->a[101][anon_sym_DQUOTE] = actions(57);
	v->a[101][sym_raw_string] = actions(214);
	v->a[101][sym_number] = actions(214);
	v->a[101][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[101][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[101][anon_sym_BQUOTE] = actions(65);
	v->a[101][sym_comment] = actions(3);
	v->a[101][sym_variable_name] = actions(216);
	v->a[102][aux_sym__terminated_statement] = state(50);
	v->a[102][sym__statement_not_pipeline] = state(1561);
	v->a[102][sym_redirected_statement] = state(949);
	v->a[102][sym_for_statement] = state(949);
	v->a[102][sym_while_statement] = state(949);
	v->a[102][sym_if_statement] = state(949);
	return (parse_table_256(v));
}

void	parse_table_256(t_parse_table_array *v)
{
	v->a[102][sym_case_statement] = state(949);
	v->a[102][sym_function_definition] = state(949);
	v->a[102][sym_compound_statement] = state(949);
	v->a[102][sym_subshell] = state(949);
	v->a[102][sym_pipeline] = state(1059);
	v->a[102][sym_list] = state(949);
	v->a[102][sym_negated_command] = state(949);
	v->a[102][sym_command] = state(949);
	v->a[102][sym_command_name] = state(185);
	v->a[102][sym_variable_assignment] = state(237);
	v->a[102][sym__variable_assignments] = state(949);
	v->a[102][sym_file_redirect] = state(551);
	v->a[102][sym_arithmetic_expansion] = state(401);
	v->a[102][sym_concatenation] = state(555);
	v->a[102][sym_string] = state(401);
	v->a[102][sym_simple_expansion] = state(401);
	v->a[102][sym_expansion] = state(401);
	v->a[102][sym_command_substitution] = state(401);
	v->a[102][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[102][aux_sym_command_repeat1] = state(411);
	return (parse_table_257(v));
}

void	parse_table_257(t_parse_table_array *v)
{
	v->a[102][sym_word] = actions(41);
	v->a[102][anon_sym_for] = actions(9);
	v->a[102][anon_sym_while] = actions(11);
	v->a[102][anon_sym_until] = actions(11);
	v->a[102][anon_sym_done] = actions(244);
	v->a[102][anon_sym_if] = actions(13);
	v->a[102][anon_sym_case] = actions(15);
	v->a[102][anon_sym_LPAREN] = actions(17);
	v->a[102][anon_sym_LBRACE] = actions(19);
	v->a[102][anon_sym_BANG] = actions(49);
	v->a[102][anon_sym_LT] = actions(51);
	v->a[102][anon_sym_GT] = actions(51);
	v->a[102][anon_sym_GT_GT] = actions(51);
	v->a[102][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[102][anon_sym_DOLLAR] = actions(55);
	v->a[102][anon_sym_DQUOTE] = actions(57);
	v->a[102][sym_raw_string] = actions(59);
	v->a[102][sym_number] = actions(59);
	v->a[102][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[102][anon_sym_DOLLAR_LPAREN] = actions(63);
	return (parse_table_258(v));
}

void	parse_table_258(t_parse_table_array *v)
{
	v->a[102][anon_sym_BQUOTE] = actions(65);
	v->a[102][sym_comment] = actions(3);
	v->a[102][sym_variable_name] = actions(67);
	v->a[103][aux_sym__terminated_statement] = state(103);
	v->a[103][sym__statement_not_pipeline] = state(1561);
	v->a[103][sym_redirected_statement] = state(958);
	v->a[103][sym_for_statement] = state(958);
	v->a[103][sym_while_statement] = state(958);
	v->a[103][sym_if_statement] = state(958);
	v->a[103][sym_case_statement] = state(958);
	v->a[103][sym_function_definition] = state(958);
	v->a[103][sym_compound_statement] = state(958);
	v->a[103][sym_subshell] = state(958);
	v->a[103][sym_pipeline] = state(1001);
	v->a[103][sym_list] = state(958);
	v->a[103][sym_negated_command] = state(958);
	v->a[103][sym_command] = state(958);
	v->a[103][sym_command_name] = state(185);
	v->a[103][sym_variable_assignment] = state(238);
	v->a[103][sym__variable_assignments] = state(958);
	return (parse_table_259(v));
}

void	parse_table_259(t_parse_table_array *v)
{
	v->a[103][sym_file_redirect] = state(551);
	v->a[103][sym_arithmetic_expansion] = state(401);
	v->a[103][sym_concatenation] = state(555);
	v->a[103][sym_string] = state(401);
	v->a[103][sym_simple_expansion] = state(401);
	v->a[103][sym_expansion] = state(401);
	v->a[103][sym_command_substitution] = state(401);
	v->a[103][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[103][aux_sym_command_repeat1] = state(411);
	v->a[103][sym_word] = actions(123);
	v->a[103][anon_sym_for] = actions(126);
	v->a[103][anon_sym_while] = actions(129);
	v->a[103][anon_sym_until] = actions(129);
	v->a[103][anon_sym_do] = actions(135);
	v->a[103][anon_sym_if] = actions(132);
	v->a[103][anon_sym_case] = actions(137);
	v->a[103][anon_sym_LPAREN] = actions(140);
	v->a[103][anon_sym_LBRACE] = actions(143);
	v->a[103][anon_sym_BANG] = actions(146);
	v->a[103][anon_sym_LT] = actions(149);
	return (parse_table_260(v));
}

/* EOF parse_table_51.c */
