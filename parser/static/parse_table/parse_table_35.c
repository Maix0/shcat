/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_35.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_175(t_parse_table_array *v)
{
	v->a[69][sym_for_statement] = state(820);
	v->a[69][sym_while_statement] = state(820);
	v->a[69][sym_if_statement] = state(820);
	v->a[69][sym_case_statement] = state(820);
	v->a[69][sym_function_definition] = state(820);
	v->a[69][sym_compound_statement] = state(820);
	v->a[69][sym_subshell] = state(820);
	v->a[69][sym_pipeline] = state(969);
	v->a[69][sym_list] = state(820);
	v->a[69][sym_negated_command] = state(820);
	v->a[69][sym_command] = state(820);
	v->a[69][sym_command_name] = state(179);
	v->a[69][sym_variable_assignment] = state(208);
	v->a[69][sym__variable_assignments] = state(820);
	v->a[69][sym_file_redirect] = state(599);
	v->a[69][sym_arithmetic_expansion] = state(401);
	v->a[69][sym_concatenation] = state(555);
	v->a[69][sym_string] = state(401);
	v->a[69][sym_simple_expansion] = state(401);
	v->a[69][sym_expansion] = state(401);
	return (parse_table_176(v));
}

void	parse_table_176(t_parse_table_array *v)
{
	v->a[69][sym_command_substitution] = state(401);
	v->a[69][aux_sym__statements_repeat1] = state(116);
	v->a[69][aux_sym_redirected_statement_repeat2] = state(1006);
	v->a[69][aux_sym_command_repeat1] = state(385);
	v->a[69][sym_word] = actions(204);
	v->a[69][anon_sym_for] = actions(9);
	v->a[69][anon_sym_while] = actions(11);
	v->a[69][anon_sym_until] = actions(11);
	v->a[69][anon_sym_if] = actions(13);
	v->a[69][anon_sym_case] = actions(15);
	v->a[69][anon_sym_LPAREN] = actions(17);
	v->a[69][anon_sym_LBRACE] = actions(19);
	v->a[69][anon_sym_BANG] = actions(206);
	v->a[69][anon_sym_LT] = actions(51);
	v->a[69][anon_sym_GT] = actions(51);
	v->a[69][anon_sym_GT_GT] = actions(51);
	v->a[69][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[69][anon_sym_DOLLAR] = actions(55);
	v->a[69][anon_sym_DQUOTE] = actions(57);
	v->a[69][sym_raw_string] = actions(59);
	return (parse_table_177(v));
}

void	parse_table_177(t_parse_table_array *v)
{
	v->a[69][sym_number] = actions(59);
	v->a[69][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[69][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[69][anon_sym_BQUOTE] = actions(65);
	v->a[69][sym_comment] = actions(3);
	v->a[69][sym_variable_name] = actions(67);
	v->a[70][aux_sym__terminated_statement] = state(42);
	v->a[70][sym__statement_not_pipeline] = state(1561);
	v->a[70][sym_redirected_statement] = state(955);
	v->a[70][sym_for_statement] = state(955);
	v->a[70][sym_while_statement] = state(955);
	v->a[70][sym_if_statement] = state(955);
	v->a[70][sym_case_statement] = state(955);
	v->a[70][sym_function_definition] = state(955);
	v->a[70][sym_compound_statement] = state(955);
	v->a[70][sym_subshell] = state(955);
	v->a[70][sym_pipeline] = state(974);
	v->a[70][sym_list] = state(955);
	v->a[70][sym_negated_command] = state(955);
	v->a[70][sym_command] = state(955);
	return (parse_table_178(v));
}

void	parse_table_178(t_parse_table_array *v)
{
	v->a[70][sym_command_name] = state(185);
	v->a[70][sym_variable_assignment] = state(209);
	v->a[70][sym__variable_assignments] = state(955);
	v->a[70][sym_file_redirect] = state(551);
	v->a[70][sym_arithmetic_expansion] = state(401);
	v->a[70][sym_concatenation] = state(555);
	v->a[70][sym_string] = state(401);
	v->a[70][sym_simple_expansion] = state(401);
	v->a[70][sym_expansion] = state(401);
	v->a[70][sym_command_substitution] = state(401);
	v->a[70][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[70][aux_sym_command_repeat1] = state(411);
	v->a[70][sym_word] = actions(41);
	v->a[70][anon_sym_for] = actions(9);
	v->a[70][anon_sym_while] = actions(11);
	v->a[70][anon_sym_until] = actions(11);
	v->a[70][anon_sym_if] = actions(13);
	v->a[70][anon_sym_case] = actions(15);
	v->a[70][anon_sym_LPAREN] = actions(17);
	v->a[70][anon_sym_LBRACE] = actions(19);
	return (parse_table_179(v));
}

void	parse_table_179(t_parse_table_array *v)
{
	v->a[70][anon_sym_RBRACE] = actions(230);
	v->a[70][anon_sym_BANG] = actions(49);
	v->a[70][anon_sym_LT] = actions(51);
	v->a[70][anon_sym_GT] = actions(51);
	v->a[70][anon_sym_GT_GT] = actions(51);
	v->a[70][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[70][anon_sym_DOLLAR] = actions(55);
	v->a[70][anon_sym_DQUOTE] = actions(57);
	v->a[70][sym_raw_string] = actions(59);
	v->a[70][sym_number] = actions(59);
	v->a[70][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[70][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[70][anon_sym_BQUOTE] = actions(65);
	v->a[70][sym_comment] = actions(3);
	v->a[70][sym_variable_name] = actions(67);
	v->a[71][aux_sym__terminated_statement] = state(72);
	v->a[71][sym__statement_not_pipeline] = state(1561);
	v->a[71][sym_redirected_statement] = state(949);
	v->a[71][sym_for_statement] = state(949);
	v->a[71][sym_while_statement] = state(949);
	return (parse_table_180(v));
}

/* EOF parse_table_35.c */
