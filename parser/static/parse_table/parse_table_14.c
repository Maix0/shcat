/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_14.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_70(t_parse_table_array *v)
{
	v->a[26][anon_sym_if] = actions(85);
	v->a[26][anon_sym_case] = actions(87);
	v->a[26][anon_sym_LPAREN] = actions(89);
	v->a[26][anon_sym_LF] = actions(115);
	v->a[26][anon_sym_LBRACE] = actions(93);
	v->a[26][anon_sym_BANG] = actions(95);
	v->a[26][anon_sym_LT] = actions(97);
	v->a[26][anon_sym_GT] = actions(97);
	v->a[26][anon_sym_GT_GT] = actions(97);
	v->a[26][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(99);
	v->a[26][anon_sym_DOLLAR] = actions(101);
	v->a[26][anon_sym_DQUOTE] = actions(103);
	v->a[26][sym_raw_string] = actions(105);
	v->a[26][sym_number] = actions(105);
	v->a[26][anon_sym_DOLLAR_LBRACE] = actions(107);
	v->a[26][anon_sym_DOLLAR_LPAREN] = actions(109);
	v->a[26][anon_sym_BQUOTE] = actions(111);
	v->a[26][sym_comment] = actions(3);
	v->a[26][sym_variable_name] = actions(113);
	v->a[27][aux_sym__terminated_statement] = state(19);
	return (parse_table_71(v));
}

void	parse_table_71(t_parse_table_array *v)
{
	v->a[27][sym__statement_not_pipeline] = state(1561);
	v->a[27][sym_redirected_statement] = state(905);
	v->a[27][sym_for_statement] = state(905);
	v->a[27][sym_while_statement] = state(905);
	v->a[27][sym_if_statement] = state(905);
	v->a[27][sym_case_statement] = state(905);
	v->a[27][sym_function_definition] = state(905);
	v->a[27][sym_compound_statement] = state(905);
	v->a[27][sym_subshell] = state(905);
	v->a[27][sym_pipeline] = state(1070);
	v->a[27][sym_list] = state(905);
	v->a[27][sym_negated_command] = state(905);
	v->a[27][sym_command] = state(905);
	v->a[27][sym_command_name] = state(185);
	v->a[27][sym_variable_assignment] = state(231);
	v->a[27][sym__variable_assignments] = state(905);
	v->a[27][sym_file_redirect] = state(551);
	v->a[27][sym_arithmetic_expansion] = state(401);
	v->a[27][sym_concatenation] = state(555);
	v->a[27][sym_string] = state(401);
	return (parse_table_72(v));
}

void	parse_table_72(t_parse_table_array *v)
{
	v->a[27][sym_simple_expansion] = state(401);
	v->a[27][sym_expansion] = state(401);
	v->a[27][sym_command_substitution] = state(401);
	v->a[27][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[27][aux_sym_command_repeat1] = state(411);
	v->a[27][sym_word] = actions(41);
	v->a[27][anon_sym_for] = actions(9);
	v->a[27][anon_sym_while] = actions(11);
	v->a[27][anon_sym_until] = actions(11);
	v->a[27][anon_sym_if] = actions(13);
	v->a[27][anon_sym_fi] = actions(184);
	v->a[27][anon_sym_elif] = actions(184);
	v->a[27][anon_sym_else] = actions(184);
	v->a[27][anon_sym_case] = actions(15);
	v->a[27][anon_sym_LPAREN] = actions(17);
	v->a[27][anon_sym_LBRACE] = actions(19);
	v->a[27][anon_sym_BANG] = actions(49);
	v->a[27][anon_sym_LT] = actions(51);
	v->a[27][anon_sym_GT] = actions(51);
	v->a[27][anon_sym_GT_GT] = actions(51);
	return (parse_table_73(v));
}

void	parse_table_73(t_parse_table_array *v)
{
	v->a[27][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[27][anon_sym_DOLLAR] = actions(55);
	v->a[27][anon_sym_DQUOTE] = actions(57);
	v->a[27][sym_raw_string] = actions(59);
	v->a[27][sym_number] = actions(59);
	v->a[27][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[27][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[27][anon_sym_BQUOTE] = actions(65);
	v->a[27][sym_comment] = actions(3);
	v->a[27][sym_variable_name] = actions(67);
	v->a[28][sym__statements] = state(1614);
	v->a[28][sym__statement_not_pipeline] = state(1561);
	v->a[28][sym_redirected_statement] = state(972);
	v->a[28][sym_for_statement] = state(972);
	v->a[28][sym_while_statement] = state(972);
	v->a[28][sym_if_statement] = state(972);
	v->a[28][sym_case_statement] = state(972);
	v->a[28][sym_function_definition] = state(972);
	v->a[28][sym_compound_statement] = state(972);
	v->a[28][sym_subshell] = state(972);
	return (parse_table_74(v));
}

void	parse_table_74(t_parse_table_array *v)
{
	v->a[28][sym_pipeline] = state(991);
	v->a[28][sym_list] = state(972);
	v->a[28][sym_negated_command] = state(972);
	v->a[28][sym_command] = state(972);
	v->a[28][sym_command_name] = state(185);
	v->a[28][sym_variable_assignment] = state(216);
	v->a[28][sym__variable_assignments] = state(972);
	v->a[28][sym_file_redirect] = state(551);
	v->a[28][sym_arithmetic_expansion] = state(401);
	v->a[28][sym_concatenation] = state(555);
	v->a[28][sym_string] = state(401);
	v->a[28][sym_simple_expansion] = state(401);
	v->a[28][sym_expansion] = state(401);
	v->a[28][sym_command_substitution] = state(401);
	v->a[28][aux_sym__statements_repeat1] = state(118);
	v->a[28][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[28][aux_sym__case_item_last_repeat2] = state(18);
	v->a[28][aux_sym_command_repeat1] = state(411);
	v->a[28][sym_word] = actions(41);
	v->a[28][anon_sym_for] = actions(9);
	return (parse_table_75(v));
}

/* EOF parse_table_14.c */
