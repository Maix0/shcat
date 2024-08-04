/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_63.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_315(t_parse_table_array *v)
{
	v->a[126][anon_sym_DOLLAR] = actions(101);
	v->a[126][anon_sym_DQUOTE] = actions(103);
	v->a[126][sym_raw_string] = actions(105);
	v->a[126][sym_number] = actions(105);
	v->a[126][anon_sym_DOLLAR_LBRACE] = actions(107);
	v->a[126][anon_sym_DOLLAR_LPAREN] = actions(109);
	v->a[126][anon_sym_BQUOTE] = actions(111);
	v->a[126][sym_comment] = actions(3);
	v->a[126][sym_variable_name] = actions(113);
	v->a[127][sym__statement_not_pipeline] = state(1383);
	v->a[127][sym_redirected_statement] = state(1383);
	v->a[127][sym_for_statement] = state(1383);
	v->a[127][sym_while_statement] = state(1383);
	v->a[127][sym_if_statement] = state(1383);
	v->a[127][sym_case_statement] = state(1383);
	v->a[127][sym_function_definition] = state(1383);
	v->a[127][sym_compound_statement] = state(1383);
	v->a[127][sym_subshell] = state(1383);
	v->a[127][sym_pipeline] = state(1326);
	v->a[127][sym_list] = state(1383);
	return (parse_table_316(v));
}

void	parse_table_316(t_parse_table_array *v)
{
	v->a[127][sym_negated_command] = state(1383);
	v->a[127][sym_command] = state(1383);
	v->a[127][sym_command_name] = state(274);
	v->a[127][sym_variable_assignment] = state(439);
	v->a[127][sym__variable_assignments] = state(1383);
	v->a[127][sym_file_redirect] = state(707);
	v->a[127][sym_arithmetic_expansion] = state(606);
	v->a[127][sym_concatenation] = state(772);
	v->a[127][sym_string] = state(606);
	v->a[127][sym_simple_expansion] = state(606);
	v->a[127][sym_expansion] = state(606);
	v->a[127][sym_command_substitution] = state(606);
	v->a[127][aux_sym_redirected_statement_repeat2] = state(1343);
	v->a[127][aux_sym_command_repeat1] = state(328);
	v->a[127][sym_word] = actions(297);
	v->a[127][anon_sym_for] = actions(299);
	v->a[127][anon_sym_while] = actions(301);
	v->a[127][anon_sym_until] = actions(301);
	v->a[127][anon_sym_if] = actions(303);
	v->a[127][anon_sym_case] = actions(305);
	return (parse_table_317(v));
}

void	parse_table_317(t_parse_table_array *v)
{
	v->a[127][anon_sym_LPAREN] = actions(307);
	v->a[127][anon_sym_LBRACE] = actions(309);
	v->a[127][anon_sym_BANG] = actions(311);
	v->a[127][anon_sym_LT] = actions(313);
	v->a[127][anon_sym_GT] = actions(313);
	v->a[127][anon_sym_GT_GT] = actions(313);
	v->a[127][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(315);
	v->a[127][anon_sym_DOLLAR] = actions(317);
	v->a[127][anon_sym_DQUOTE] = actions(319);
	v->a[127][sym_raw_string] = actions(321);
	v->a[127][sym_number] = actions(321);
	v->a[127][anon_sym_DOLLAR_LBRACE] = actions(323);
	v->a[127][anon_sym_DOLLAR_LPAREN] = actions(325);
	v->a[127][anon_sym_BQUOTE] = actions(327);
	v->a[127][sym_comment] = actions(3);
	v->a[127][sym_variable_name] = actions(329);
	v->a[128][sym__statement_not_pipeline] = state(1561);
	v->a[128][sym_redirected_statement] = state(1037);
	v->a[128][sym_for_statement] = state(1037);
	v->a[128][sym_while_statement] = state(1037);
	return (parse_table_318(v));
}

void	parse_table_318(t_parse_table_array *v)
{
	v->a[128][sym_if_statement] = state(1037);
	v->a[128][sym_case_statement] = state(1037);
	v->a[128][sym_function_definition] = state(1037);
	v->a[128][sym_compound_statement] = state(1037);
	v->a[128][sym_subshell] = state(1037);
	v->a[128][sym_pipeline] = state(1035);
	v->a[128][sym_list] = state(1037);
	v->a[128][sym_negated_command] = state(1037);
	v->a[128][sym_command] = state(1037);
	v->a[128][sym_command_name] = state(185);
	v->a[128][sym_variable_assignment] = state(246);
	v->a[128][sym__variable_assignments] = state(1037);
	v->a[128][sym_file_redirect] = state(551);
	v->a[128][sym_arithmetic_expansion] = state(401);
	v->a[128][sym_concatenation] = state(555);
	v->a[128][sym_string] = state(401);
	v->a[128][sym_simple_expansion] = state(401);
	v->a[128][sym_expansion] = state(401);
	v->a[128][sym_command_substitution] = state(401);
	v->a[128][aux_sym_redirected_statement_repeat2] = state(1126);
	return (parse_table_319(v));
}

void	parse_table_319(t_parse_table_array *v)
{
	v->a[128][aux_sym_command_repeat1] = state(411);
	v->a[128][sym_word] = actions(41);
	v->a[128][anon_sym_for] = actions(9);
	v->a[128][anon_sym_while] = actions(11);
	v->a[128][anon_sym_until] = actions(11);
	v->a[128][anon_sym_if] = actions(13);
	v->a[128][anon_sym_case] = actions(15);
	v->a[128][anon_sym_LPAREN] = actions(17);
	v->a[128][anon_sym_LBRACE] = actions(19);
	v->a[128][anon_sym_BANG] = actions(49);
	v->a[128][anon_sym_LT] = actions(51);
	v->a[128][anon_sym_GT] = actions(51);
	v->a[128][anon_sym_GT_GT] = actions(51);
	v->a[128][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[128][anon_sym_DOLLAR] = actions(55);
	v->a[128][anon_sym_DQUOTE] = actions(57);
	v->a[128][sym_raw_string] = actions(59);
	v->a[128][sym_number] = actions(59);
	v->a[128][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[128][anon_sym_DOLLAR_LPAREN] = actions(63);
	return (parse_table_320(v));
}

/* EOF parse_table_63.c */
