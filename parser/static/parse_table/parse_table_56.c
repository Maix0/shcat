/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_56.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_280(t_parse_table_array *v)
{
	v->a[112][sym_if_statement] = state(894);
	v->a[112][sym_case_statement] = state(896);
	v->a[112][sym_function_definition] = state(813);
	v->a[112][sym_compound_statement] = state(897);
	v->a[112][sym_subshell] = state(898);
	v->a[112][sym_pipeline] = state(904);
	v->a[112][sym_list] = state(901);
	v->a[112][sym_negated_command] = state(902);
	v->a[112][sym_command] = state(903);
	v->a[112][sym_command_name] = state(158);
	v->a[112][sym_variable_assignment] = state(178);
	v->a[112][sym__variable_assignments] = state(900);
	v->a[112][sym_file_redirect] = state(551);
	v->a[112][sym_arithmetic_expansion] = state(277);
	v->a[112][sym_concatenation] = state(555);
	v->a[112][sym_string] = state(277);
	v->a[112][sym_simple_expansion] = state(277);
	v->a[112][sym_expansion] = state(277);
	v->a[112][sym_command_substitution] = state(277);
	v->a[112][aux_sym__statements_repeat1] = state(109);
	return (parse_table_281(v));
}

void	parse_table_281(t_parse_table_array *v)
{
	v->a[112][aux_sym_redirected_statement_repeat2] = state(1019);
	v->a[112][aux_sym_command_repeat1] = state(298);
	v->a[112][sym_word] = actions(208);
	v->a[112][anon_sym_for] = actions(9);
	v->a[112][anon_sym_while] = actions(11);
	v->a[112][anon_sym_until] = actions(11);
	v->a[112][anon_sym_if] = actions(13);
	v->a[112][anon_sym_case] = actions(15);
	v->a[112][anon_sym_LPAREN] = actions(17);
	v->a[112][anon_sym_LBRACE] = actions(19);
	v->a[112][anon_sym_BANG] = actions(210);
	v->a[112][anon_sym_LT] = actions(212);
	v->a[112][anon_sym_GT] = actions(212);
	v->a[112][anon_sym_GT_GT] = actions(212);
	v->a[112][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[112][anon_sym_DOLLAR] = actions(55);
	v->a[112][anon_sym_DQUOTE] = actions(57);
	v->a[112][sym_raw_string] = actions(214);
	v->a[112][sym_number] = actions(214);
	v->a[112][anon_sym_DOLLAR_LBRACE] = actions(61);
	return (parse_table_282(v));
}

void	parse_table_282(t_parse_table_array *v)
{
	v->a[112][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[112][anon_sym_BQUOTE] = actions(65);
	v->a[112][sym_comment] = actions(3);
	v->a[112][sym_variable_name] = actions(216);
	v->a[113][aux_sym__terminated_statement] = state(36);
	v->a[113][sym__statement_not_pipeline] = state(1561);
	v->a[113][sym_redirected_statement] = state(958);
	v->a[113][sym_for_statement] = state(958);
	v->a[113][sym_while_statement] = state(958);
	v->a[113][sym_if_statement] = state(958);
	v->a[113][sym_case_statement] = state(958);
	v->a[113][sym_function_definition] = state(958);
	v->a[113][sym_compound_statement] = state(958);
	v->a[113][sym_subshell] = state(958);
	v->a[113][sym_pipeline] = state(1001);
	v->a[113][sym_list] = state(958);
	v->a[113][sym_negated_command] = state(958);
	v->a[113][sym_command] = state(958);
	v->a[113][sym_command_name] = state(185);
	v->a[113][sym_variable_assignment] = state(238);
	return (parse_table_283(v));
}

void	parse_table_283(t_parse_table_array *v)
{
	v->a[113][sym__variable_assignments] = state(958);
	v->a[113][sym_file_redirect] = state(551);
	v->a[113][sym_arithmetic_expansion] = state(401);
	v->a[113][sym_concatenation] = state(555);
	v->a[113][sym_string] = state(401);
	v->a[113][sym_simple_expansion] = state(401);
	v->a[113][sym_expansion] = state(401);
	v->a[113][sym_command_substitution] = state(401);
	v->a[113][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[113][aux_sym_command_repeat1] = state(411);
	v->a[113][sym_word] = actions(41);
	v->a[113][anon_sym_for] = actions(9);
	v->a[113][anon_sym_while] = actions(11);
	v->a[113][anon_sym_until] = actions(11);
	v->a[113][anon_sym_if] = actions(13);
	v->a[113][anon_sym_case] = actions(15);
	v->a[113][anon_sym_LPAREN] = actions(17);
	v->a[113][anon_sym_LBRACE] = actions(19);
	v->a[113][anon_sym_BANG] = actions(49);
	v->a[113][anon_sym_LT] = actions(51);
	return (parse_table_284(v));
}

void	parse_table_284(t_parse_table_array *v)
{
	v->a[113][anon_sym_GT] = actions(51);
	v->a[113][anon_sym_GT_GT] = actions(51);
	v->a[113][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[113][anon_sym_DOLLAR] = actions(55);
	v->a[113][anon_sym_DQUOTE] = actions(57);
	v->a[113][sym_raw_string] = actions(59);
	v->a[113][sym_number] = actions(59);
	v->a[113][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[113][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[113][anon_sym_BQUOTE] = actions(65);
	v->a[113][sym_comment] = actions(3);
	v->a[113][sym_variable_name] = actions(67);
	v->a[114][sym__statement_not_pipeline] = state(1558);
	v->a[114][sym_redirected_statement] = state(885);
	v->a[114][sym_for_statement] = state(883);
	v->a[114][sym_while_statement] = state(882);
	v->a[114][sym_if_statement] = state(814);
	v->a[114][sym_case_statement] = state(879);
	v->a[114][sym_function_definition] = state(876);
	v->a[114][sym_compound_statement] = state(875);
	return (parse_table_285(v));
}

/* EOF parse_table_56.c */
