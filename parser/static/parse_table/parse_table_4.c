/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_20(t_parse_table_array *v)
{
	v->a[7][sym_while_statement] = state(905);
	v->a[7][sym_if_statement] = state(905);
	v->a[7][sym_elif_clause] = state(1467);
	v->a[7][sym_else_clause] = state(1720);
	v->a[7][sym_case_statement] = state(905);
	v->a[7][sym_function_definition] = state(905);
	v->a[7][sym_compound_statement] = state(905);
	v->a[7][sym_subshell] = state(905);
	v->a[7][sym_pipeline] = state(1070);
	v->a[7][sym_list] = state(905);
	v->a[7][sym_negated_command] = state(905);
	v->a[7][sym_command] = state(905);
	v->a[7][sym_command_name] = state(185);
	v->a[7][sym_variable_assignment] = state(231);
	v->a[7][sym__variable_assignments] = state(905);
	v->a[7][sym_file_redirect] = state(551);
	v->a[7][sym_arithmetic_expansion] = state(401);
	v->a[7][sym_concatenation] = state(555);
	v->a[7][sym_string] = state(401);
	v->a[7][sym_simple_expansion] = state(401);
	return (parse_table_21(v));
}

void	parse_table_21(t_parse_table_array *v)
{
	v->a[7][sym_expansion] = state(401);
	v->a[7][sym_command_substitution] = state(401);
	v->a[7][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[7][aux_sym_if_statement_repeat1] = state(1467);
	v->a[7][aux_sym_command_repeat1] = state(411);
	v->a[7][sym_word] = actions(41);
	v->a[7][anon_sym_for] = actions(9);
	v->a[7][anon_sym_while] = actions(11);
	v->a[7][anon_sym_until] = actions(11);
	v->a[7][anon_sym_if] = actions(13);
	v->a[7][anon_sym_fi] = actions(77);
	v->a[7][anon_sym_elif] = actions(45);
	v->a[7][anon_sym_else] = actions(47);
	v->a[7][anon_sym_case] = actions(15);
	v->a[7][anon_sym_LPAREN] = actions(17);
	v->a[7][anon_sym_LBRACE] = actions(19);
	v->a[7][anon_sym_BANG] = actions(49);
	v->a[7][anon_sym_LT] = actions(51);
	v->a[7][anon_sym_GT] = actions(51);
	v->a[7][anon_sym_GT_GT] = actions(51);
	return (parse_table_22(v));
}

void	parse_table_22(t_parse_table_array *v)
{
	v->a[7][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[7][anon_sym_DOLLAR] = actions(55);
	v->a[7][anon_sym_DQUOTE] = actions(57);
	v->a[7][sym_raw_string] = actions(59);
	v->a[7][sym_number] = actions(59);
	v->a[7][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[7][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[7][anon_sym_BQUOTE] = actions(65);
	v->a[7][sym_comment] = actions(3);
	v->a[7][sym_variable_name] = actions(67);
	v->a[8][sym__statements] = state(1576);
	v->a[8][sym__statement_not_pipeline] = state(1564);
	v->a[8][sym_redirected_statement] = state(867);
	v->a[8][sym_for_statement] = state(867);
	v->a[8][sym_while_statement] = state(867);
	v->a[8][sym_if_statement] = state(867);
	v->a[8][sym_case_statement] = state(867);
	v->a[8][sym_function_definition] = state(867);
	v->a[8][sym_compound_statement] = state(867);
	v->a[8][sym_subshell] = state(867);
	return (parse_table_23(v));
}

void	parse_table_23(t_parse_table_array *v)
{
	v->a[8][sym_pipeline] = state(913);
	v->a[8][sym_list] = state(867);
	v->a[8][sym_negated_command] = state(867);
	v->a[8][sym_command] = state(867);
	v->a[8][sym_command_name] = state(170);
	v->a[8][sym_variable_assignment] = state(177);
	v->a[8][sym__variable_assignments] = state(867);
	v->a[8][sym_file_redirect] = state(541);
	v->a[8][sym_arithmetic_expansion] = state(276);
	v->a[8][sym_concatenation] = state(546);
	v->a[8][sym_string] = state(276);
	v->a[8][sym_simple_expansion] = state(276);
	v->a[8][sym_expansion] = state(276);
	v->a[8][sym_command_substitution] = state(276);
	v->a[8][aux_sym__statements_repeat1] = state(104);
	v->a[8][aux_sym_redirected_statement_repeat2] = state(990);
	v->a[8][aux_sym__case_item_last_repeat2] = state(31);
	v->a[8][aux_sym_command_repeat1] = state(408);
	v->a[8][sym_word] = actions(79);
	v->a[8][anon_sym_for] = actions(81);
	return (parse_table_24(v));
}

void	parse_table_24(t_parse_table_array *v)
{
	v->a[8][anon_sym_while] = actions(83);
	v->a[8][anon_sym_until] = actions(83);
	v->a[8][anon_sym_if] = actions(85);
	v->a[8][anon_sym_case] = actions(87);
	v->a[8][anon_sym_LPAREN] = actions(89);
	v->a[8][anon_sym_LF] = actions(91);
	v->a[8][anon_sym_LBRACE] = actions(93);
	v->a[8][anon_sym_BANG] = actions(95);
	v->a[8][anon_sym_LT] = actions(97);
	v->a[8][anon_sym_GT] = actions(97);
	v->a[8][anon_sym_GT_GT] = actions(97);
	v->a[8][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(99);
	v->a[8][anon_sym_DOLLAR] = actions(101);
	v->a[8][anon_sym_DQUOTE] = actions(103);
	v->a[8][sym_raw_string] = actions(105);
	v->a[8][sym_number] = actions(105);
	v->a[8][anon_sym_DOLLAR_LBRACE] = actions(107);
	v->a[8][anon_sym_DOLLAR_LPAREN] = actions(109);
	v->a[8][anon_sym_BQUOTE] = actions(111);
	v->a[8][sym_comment] = actions(3);
	return (parse_table_25(v));
}

/* EOF parse_table_4.c */
