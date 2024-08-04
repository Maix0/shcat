/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_20.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_100(t_parse_table_array *v)
{
	v->a[38][sym_command_substitution] = state(401);
	v->a[38][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[38][aux_sym_command_repeat1] = state(411);
	v->a[38][sym_word] = actions(123);
	v->a[38][anon_sym_for] = actions(126);
	v->a[38][anon_sym_while] = actions(129);
	v->a[38][anon_sym_until] = actions(129);
	v->a[38][anon_sym_done] = actions(135);
	v->a[38][anon_sym_if] = actions(132);
	v->a[38][anon_sym_then] = actions(135);
	v->a[38][anon_sym_case] = actions(137);
	v->a[38][anon_sym_LPAREN] = actions(140);
	v->a[38][anon_sym_LBRACE] = actions(143);
	v->a[38][anon_sym_BANG] = actions(146);
	v->a[38][anon_sym_LT] = actions(149);
	v->a[38][anon_sym_GT] = actions(149);
	v->a[38][anon_sym_GT_GT] = actions(149);
	v->a[38][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(152);
	v->a[38][anon_sym_DOLLAR] = actions(155);
	v->a[38][anon_sym_DQUOTE] = actions(158);
	return (parse_table_101(v));
}

void	parse_table_101(t_parse_table_array *v)
{
	v->a[38][sym_raw_string] = actions(161);
	v->a[38][sym_number] = actions(161);
	v->a[38][anon_sym_DOLLAR_LBRACE] = actions(164);
	v->a[38][anon_sym_DOLLAR_LPAREN] = actions(167);
	v->a[38][anon_sym_BQUOTE] = actions(170);
	v->a[38][sym_comment] = actions(3);
	v->a[38][sym_variable_name] = actions(173);
	v->a[39][aux_sym__terminated_statement] = state(38);
	v->a[39][sym__statement_not_pipeline] = state(1561);
	v->a[39][sym_redirected_statement] = state(949);
	v->a[39][sym_for_statement] = state(949);
	v->a[39][sym_while_statement] = state(949);
	v->a[39][sym_if_statement] = state(949);
	v->a[39][sym_case_statement] = state(949);
	v->a[39][sym_function_definition] = state(949);
	v->a[39][sym_compound_statement] = state(949);
	v->a[39][sym_subshell] = state(949);
	v->a[39][sym_pipeline] = state(1059);
	v->a[39][sym_list] = state(949);
	v->a[39][sym_negated_command] = state(949);
	return (parse_table_102(v));
}

void	parse_table_102(t_parse_table_array *v)
{
	v->a[39][sym_command] = state(949);
	v->a[39][sym_command_name] = state(185);
	v->a[39][sym_variable_assignment] = state(237);
	v->a[39][sym__variable_assignments] = state(949);
	v->a[39][sym_file_redirect] = state(551);
	v->a[39][sym_arithmetic_expansion] = state(401);
	v->a[39][sym_concatenation] = state(555);
	v->a[39][sym_string] = state(401);
	v->a[39][sym_simple_expansion] = state(401);
	v->a[39][sym_expansion] = state(401);
	v->a[39][sym_command_substitution] = state(401);
	v->a[39][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[39][aux_sym_command_repeat1] = state(411);
	v->a[39][sym_word] = actions(41);
	v->a[39][anon_sym_for] = actions(9);
	v->a[39][anon_sym_while] = actions(11);
	v->a[39][anon_sym_until] = actions(11);
	v->a[39][anon_sym_if] = actions(13);
	v->a[39][anon_sym_then] = actions(202);
	v->a[39][anon_sym_case] = actions(15);
	return (parse_table_103(v));
}

void	parse_table_103(t_parse_table_array *v)
{
	v->a[39][anon_sym_LPAREN] = actions(17);
	v->a[39][anon_sym_LBRACE] = actions(19);
	v->a[39][anon_sym_BANG] = actions(49);
	v->a[39][anon_sym_LT] = actions(51);
	v->a[39][anon_sym_GT] = actions(51);
	v->a[39][anon_sym_GT_GT] = actions(51);
	v->a[39][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[39][anon_sym_DOLLAR] = actions(55);
	v->a[39][anon_sym_DQUOTE] = actions(57);
	v->a[39][sym_raw_string] = actions(59);
	v->a[39][sym_number] = actions(59);
	v->a[39][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[39][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[39][anon_sym_BQUOTE] = actions(65);
	v->a[39][sym_comment] = actions(3);
	v->a[39][sym_variable_name] = actions(67);
	v->a[40][sym__statements] = state(1724);
	v->a[40][sym__statement_not_pipeline] = state(1560);
	v->a[40][sym_redirected_statement] = state(820);
	v->a[40][sym_for_statement] = state(820);
	return (parse_table_104(v));
}

void	parse_table_104(t_parse_table_array *v)
{
	v->a[40][sym_while_statement] = state(820);
	v->a[40][sym_if_statement] = state(820);
	v->a[40][sym_case_statement] = state(820);
	v->a[40][sym_function_definition] = state(820);
	v->a[40][sym_compound_statement] = state(820);
	v->a[40][sym_subshell] = state(820);
	v->a[40][sym_pipeline] = state(969);
	v->a[40][sym_list] = state(820);
	v->a[40][sym_negated_command] = state(820);
	v->a[40][sym_command] = state(820);
	v->a[40][sym_command_name] = state(179);
	v->a[40][sym_variable_assignment] = state(208);
	v->a[40][sym__variable_assignments] = state(820);
	v->a[40][sym_file_redirect] = state(599);
	v->a[40][sym_arithmetic_expansion] = state(401);
	v->a[40][sym_concatenation] = state(555);
	v->a[40][sym_string] = state(401);
	v->a[40][sym_simple_expansion] = state(401);
	v->a[40][sym_expansion] = state(401);
	v->a[40][sym_command_substitution] = state(401);
	return (parse_table_105(v));
}

/* EOF parse_table_20.c */
