/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_32.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_160(t_parse_table_array *v)
{
	v->a[62][anon_sym_BQUOTE] = actions(65);
	v->a[62][sym_comment] = actions(3);
	v->a[62][sym_variable_name] = actions(216);
	v->a[63][sym__statements] = state(1672);
	v->a[63][sym__statement_not_pipeline] = state(1557);
	v->a[63][sym_redirected_statement] = state(877);
	v->a[63][sym_for_statement] = state(877);
	v->a[63][sym_while_statement] = state(877);
	v->a[63][sym_if_statement] = state(877);
	v->a[63][sym_case_statement] = state(877);
	v->a[63][sym_function_definition] = state(877);
	v->a[63][sym_compound_statement] = state(877);
	v->a[63][sym_subshell] = state(877);
	v->a[63][sym_pipeline] = state(937);
	v->a[63][sym_list] = state(877);
	v->a[63][sym_negated_command] = state(877);
	v->a[63][sym_command] = state(877);
	v->a[63][sym_command_name] = state(158);
	v->a[63][sym_variable_assignment] = state(186);
	v->a[63][sym__variable_assignments] = state(877);
	return (parse_table_161(v));
}

void	parse_table_161(t_parse_table_array *v)
{
	v->a[63][sym_file_redirect] = state(558);
	v->a[63][sym_arithmetic_expansion] = state(277);
	v->a[63][sym_concatenation] = state(555);
	v->a[63][sym_string] = state(277);
	v->a[63][sym_simple_expansion] = state(277);
	v->a[63][sym_expansion] = state(277);
	v->a[63][sym_command_substitution] = state(277);
	v->a[63][aux_sym__statements_repeat1] = state(112);
	v->a[63][aux_sym_redirected_statement_repeat2] = state(1019);
	v->a[63][aux_sym_command_repeat1] = state(298);
	v->a[63][sym_word] = actions(208);
	v->a[63][anon_sym_for] = actions(9);
	v->a[63][anon_sym_while] = actions(11);
	v->a[63][anon_sym_until] = actions(11);
	v->a[63][anon_sym_if] = actions(13);
	v->a[63][anon_sym_case] = actions(15);
	v->a[63][anon_sym_LPAREN] = actions(17);
	v->a[63][anon_sym_LBRACE] = actions(19);
	v->a[63][anon_sym_BANG] = actions(210);
	v->a[63][anon_sym_LT] = actions(212);
	return (parse_table_162(v));
}

void	parse_table_162(t_parse_table_array *v)
{
	v->a[63][anon_sym_GT] = actions(212);
	v->a[63][anon_sym_GT_GT] = actions(212);
	v->a[63][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[63][anon_sym_DOLLAR] = actions(55);
	v->a[63][anon_sym_DQUOTE] = actions(57);
	v->a[63][sym_raw_string] = actions(214);
	v->a[63][sym_number] = actions(214);
	v->a[63][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[63][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[63][anon_sym_BQUOTE] = actions(65);
	v->a[63][sym_comment] = actions(3);
	v->a[63][sym_variable_name] = actions(216);
	v->a[64][aux_sym__terminated_statement] = state(42);
	v->a[64][sym__statement_not_pipeline] = state(1561);
	v->a[64][sym_redirected_statement] = state(955);
	v->a[64][sym_for_statement] = state(955);
	v->a[64][sym_while_statement] = state(955);
	v->a[64][sym_if_statement] = state(955);
	v->a[64][sym_case_statement] = state(955);
	v->a[64][sym_function_definition] = state(955);
	return (parse_table_163(v));
}

void	parse_table_163(t_parse_table_array *v)
{
	v->a[64][sym_compound_statement] = state(955);
	v->a[64][sym_subshell] = state(955);
	v->a[64][sym_pipeline] = state(974);
	v->a[64][sym_list] = state(955);
	v->a[64][sym_negated_command] = state(955);
	v->a[64][sym_command] = state(955);
	v->a[64][sym_command_name] = state(185);
	v->a[64][sym_variable_assignment] = state(209);
	v->a[64][sym__variable_assignments] = state(955);
	v->a[64][sym_file_redirect] = state(551);
	v->a[64][sym_arithmetic_expansion] = state(401);
	v->a[64][sym_concatenation] = state(555);
	v->a[64][sym_string] = state(401);
	v->a[64][sym_simple_expansion] = state(401);
	v->a[64][sym_expansion] = state(401);
	v->a[64][sym_command_substitution] = state(401);
	v->a[64][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[64][aux_sym_command_repeat1] = state(411);
	v->a[64][sym_word] = actions(41);
	v->a[64][anon_sym_for] = actions(9);
	return (parse_table_164(v));
}

void	parse_table_164(t_parse_table_array *v)
{
	v->a[64][anon_sym_while] = actions(11);
	v->a[64][anon_sym_until] = actions(11);
	v->a[64][anon_sym_if] = actions(13);
	v->a[64][anon_sym_case] = actions(15);
	v->a[64][anon_sym_LPAREN] = actions(17);
	v->a[64][anon_sym_LBRACE] = actions(19);
	v->a[64][anon_sym_RBRACE] = actions(228);
	v->a[64][anon_sym_BANG] = actions(49);
	v->a[64][anon_sym_LT] = actions(51);
	v->a[64][anon_sym_GT] = actions(51);
	v->a[64][anon_sym_GT_GT] = actions(51);
	v->a[64][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[64][anon_sym_DOLLAR] = actions(55);
	v->a[64][anon_sym_DQUOTE] = actions(57);
	v->a[64][sym_raw_string] = actions(59);
	v->a[64][sym_number] = actions(59);
	v->a[64][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[64][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[64][anon_sym_BQUOTE] = actions(65);
	v->a[64][sym_comment] = actions(3);
	return (parse_table_165(v));
}

/* EOF parse_table_32.c */
