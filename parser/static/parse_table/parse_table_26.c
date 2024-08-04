/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_26.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_130(t_parse_table_array *v)
{
	v->a[50][anon_sym_LBRACE] = actions(19);
	v->a[50][anon_sym_BANG] = actions(49);
	v->a[50][anon_sym_LT] = actions(51);
	v->a[50][anon_sym_GT] = actions(51);
	v->a[50][anon_sym_GT_GT] = actions(51);
	v->a[50][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[50][anon_sym_DOLLAR] = actions(55);
	v->a[50][anon_sym_DQUOTE] = actions(57);
	v->a[50][sym_raw_string] = actions(59);
	v->a[50][sym_number] = actions(59);
	v->a[50][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[50][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[50][anon_sym_BQUOTE] = actions(65);
	v->a[50][sym_comment] = actions(3);
	v->a[50][sym_variable_name] = actions(67);
	v->a[51][aux_sym__terminated_statement] = state(51);
	v->a[51][sym__statement_not_pipeline] = state(1561);
	v->a[51][sym_redirected_statement] = state(920);
	v->a[51][sym_for_statement] = state(920);
	v->a[51][sym_while_statement] = state(920);
	return (parse_table_131(v));
}

void	parse_table_131(t_parse_table_array *v)
{
	v->a[51][sym_if_statement] = state(920);
	v->a[51][sym_case_statement] = state(920);
	v->a[51][sym_function_definition] = state(920);
	v->a[51][sym_compound_statement] = state(920);
	v->a[51][sym_subshell] = state(920);
	v->a[51][sym_pipeline] = state(1085);
	v->a[51][sym_list] = state(920);
	v->a[51][sym_negated_command] = state(920);
	v->a[51][sym_command] = state(920);
	v->a[51][sym_command_name] = state(185);
	v->a[51][sym_variable_assignment] = state(220);
	v->a[51][sym__variable_assignments] = state(920);
	v->a[51][sym_file_redirect] = state(551);
	v->a[51][sym_arithmetic_expansion] = state(401);
	v->a[51][sym_concatenation] = state(555);
	v->a[51][sym_string] = state(401);
	v->a[51][sym_simple_expansion] = state(401);
	v->a[51][sym_expansion] = state(401);
	v->a[51][sym_command_substitution] = state(401);
	v->a[51][aux_sym_redirected_statement_repeat2] = state(1126);
	return (parse_table_132(v));
}

void	parse_table_132(t_parse_table_array *v)
{
	v->a[51][aux_sym_command_repeat1] = state(411);
	v->a[51][sym_word] = actions(123);
	v->a[51][anon_sym_for] = actions(126);
	v->a[51][anon_sym_while] = actions(129);
	v->a[51][anon_sym_until] = actions(129);
	v->a[51][anon_sym_if] = actions(132);
	v->a[51][anon_sym_fi] = actions(135);
	v->a[51][anon_sym_case] = actions(137);
	v->a[51][anon_sym_LPAREN] = actions(140);
	v->a[51][anon_sym_LBRACE] = actions(143);
	v->a[51][anon_sym_BANG] = actions(146);
	v->a[51][anon_sym_LT] = actions(149);
	v->a[51][anon_sym_GT] = actions(149);
	v->a[51][anon_sym_GT_GT] = actions(149);
	v->a[51][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(152);
	v->a[51][anon_sym_DOLLAR] = actions(155);
	v->a[51][anon_sym_DQUOTE] = actions(158);
	v->a[51][sym_raw_string] = actions(161);
	v->a[51][sym_number] = actions(161);
	v->a[51][anon_sym_DOLLAR_LBRACE] = actions(164);
	return (parse_table_133(v));
}

void	parse_table_133(t_parse_table_array *v)
{
	v->a[51][anon_sym_DOLLAR_LPAREN] = actions(167);
	v->a[51][anon_sym_BQUOTE] = actions(170);
	v->a[51][sym_comment] = actions(3);
	v->a[51][sym_variable_name] = actions(173);
	v->a[52][sym__statements] = state(1648);
	v->a[52][sym__statement_not_pipeline] = state(1557);
	v->a[52][sym_redirected_statement] = state(877);
	v->a[52][sym_for_statement] = state(877);
	v->a[52][sym_while_statement] = state(877);
	v->a[52][sym_if_statement] = state(877);
	v->a[52][sym_case_statement] = state(877);
	v->a[52][sym_function_definition] = state(877);
	v->a[52][sym_compound_statement] = state(877);
	v->a[52][sym_subshell] = state(877);
	v->a[52][sym_pipeline] = state(937);
	v->a[52][sym_list] = state(877);
	v->a[52][sym_negated_command] = state(877);
	v->a[52][sym_command] = state(877);
	v->a[52][sym_command_name] = state(158);
	v->a[52][sym_variable_assignment] = state(186);
	return (parse_table_134(v));
}

void	parse_table_134(t_parse_table_array *v)
{
	v->a[52][sym__variable_assignments] = state(877);
	v->a[52][sym_file_redirect] = state(581);
	v->a[52][sym_arithmetic_expansion] = state(277);
	v->a[52][sym_concatenation] = state(555);
	v->a[52][sym_string] = state(277);
	v->a[52][sym_simple_expansion] = state(277);
	v->a[52][sym_expansion] = state(277);
	v->a[52][sym_command_substitution] = state(277);
	v->a[52][aux_sym__statements_repeat1] = state(112);
	v->a[52][aux_sym_redirected_statement_repeat2] = state(1019);
	v->a[52][aux_sym_command_repeat1] = state(298);
	v->a[52][sym_word] = actions(208);
	v->a[52][anon_sym_for] = actions(9);
	v->a[52][anon_sym_while] = actions(11);
	v->a[52][anon_sym_until] = actions(11);
	v->a[52][anon_sym_if] = actions(13);
	v->a[52][anon_sym_case] = actions(15);
	v->a[52][anon_sym_LPAREN] = actions(17);
	v->a[52][anon_sym_LBRACE] = actions(19);
	v->a[52][anon_sym_BANG] = actions(210);
	return (parse_table_135(v));
}

/* EOF parse_table_26.c */
