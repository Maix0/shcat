/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_62.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_310(t_parse_table_array *v)
{
	v->a[124][anon_sym_LBRACE] = actions(309);
	v->a[124][anon_sym_BANG] = actions(311);
	v->a[124][anon_sym_LT] = actions(313);
	v->a[124][anon_sym_GT] = actions(313);
	v->a[124][anon_sym_GT_GT] = actions(313);
	v->a[124][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(315);
	v->a[124][anon_sym_DOLLAR] = actions(317);
	v->a[124][anon_sym_DQUOTE] = actions(319);
	v->a[124][sym_raw_string] = actions(321);
	v->a[124][sym_number] = actions(321);
	v->a[124][anon_sym_DOLLAR_LBRACE] = actions(323);
	v->a[124][anon_sym_DOLLAR_LPAREN] = actions(325);
	v->a[124][anon_sym_BQUOTE] = actions(327);
	v->a[124][sym_comment] = actions(3);
	v->a[124][sym_variable_name] = actions(329);
	v->a[125][sym__statement_not_pipeline] = state(1558);
	v->a[125][sym_redirected_statement] = state(956);
	v->a[125][sym_for_statement] = state(956);
	v->a[125][sym_while_statement] = state(956);
	v->a[125][sym_if_statement] = state(956);
	return (parse_table_311(v));
}

void	parse_table_311(t_parse_table_array *v)
{
	v->a[125][sym_case_statement] = state(956);
	v->a[125][sym_function_definition] = state(956);
	v->a[125][sym_compound_statement] = state(956);
	v->a[125][sym_subshell] = state(956);
	v->a[125][sym_pipeline] = state(957);
	v->a[125][sym_list] = state(956);
	v->a[125][sym_negated_command] = state(956);
	v->a[125][sym_command] = state(956);
	v->a[125][sym_command_name] = state(166);
	v->a[125][sym_variable_assignment] = state(234);
	v->a[125][sym__variable_assignments] = state(956);
	v->a[125][sym_file_redirect] = state(556);
	v->a[125][sym_arithmetic_expansion] = state(280);
	v->a[125][sym_concatenation] = state(549);
	v->a[125][sym_string] = state(280);
	v->a[125][sym_simple_expansion] = state(280);
	v->a[125][sym_expansion] = state(280);
	v->a[125][sym_command_substitution] = state(280);
	v->a[125][aux_sym_redirected_statement_repeat2] = state(999);
	v->a[125][aux_sym_command_repeat1] = state(398);
	return (parse_table_312(v));
}

void	parse_table_312(t_parse_table_array *v)
{
	v->a[125][sym_word] = actions(7);
	v->a[125][anon_sym_for] = actions(9);
	v->a[125][anon_sym_while] = actions(11);
	v->a[125][anon_sym_until] = actions(11);
	v->a[125][anon_sym_if] = actions(13);
	v->a[125][anon_sym_case] = actions(15);
	v->a[125][anon_sym_LPAREN] = actions(17);
	v->a[125][anon_sym_LBRACE] = actions(19);
	v->a[125][anon_sym_BANG] = actions(21);
	v->a[125][anon_sym_LT] = actions(23);
	v->a[125][anon_sym_GT] = actions(23);
	v->a[125][anon_sym_GT_GT] = actions(23);
	v->a[125][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(25);
	v->a[125][anon_sym_DOLLAR] = actions(27);
	v->a[125][anon_sym_DQUOTE] = actions(29);
	v->a[125][sym_raw_string] = actions(31);
	v->a[125][sym_number] = actions(31);
	v->a[125][anon_sym_DOLLAR_LBRACE] = actions(33);
	v->a[125][anon_sym_DOLLAR_LPAREN] = actions(35);
	v->a[125][anon_sym_BQUOTE] = actions(37);
	return (parse_table_313(v));
}

void	parse_table_313(t_parse_table_array *v)
{
	v->a[125][sym_comment] = actions(3);
	v->a[125][sym_variable_name] = actions(39);
	v->a[126][sym__statement_not_pipeline] = state(1164);
	v->a[126][sym_redirected_statement] = state(1164);
	v->a[126][sym_for_statement] = state(1164);
	v->a[126][sym_while_statement] = state(1164);
	v->a[126][sym_if_statement] = state(1164);
	v->a[126][sym_case_statement] = state(1164);
	v->a[126][sym_function_definition] = state(1164);
	v->a[126][sym_compound_statement] = state(1164);
	v->a[126][sym_subshell] = state(1164);
	v->a[126][sym_pipeline] = state(1349);
	v->a[126][sym_list] = state(1164);
	v->a[126][sym_negated_command] = state(1164);
	v->a[126][sym_command] = state(1164);
	v->a[126][sym_command_name] = state(170);
	v->a[126][sym_variable_assignment] = state(235);
	v->a[126][sym__variable_assignments] = state(1164);
	v->a[126][sym_file_redirect] = state(541);
	v->a[126][sym_arithmetic_expansion] = state(276);
	return (parse_table_314(v));
}

void	parse_table_314(t_parse_table_array *v)
{
	v->a[126][sym_concatenation] = state(546);
	v->a[126][sym_string] = state(276);
	v->a[126][sym_simple_expansion] = state(276);
	v->a[126][sym_expansion] = state(276);
	v->a[126][sym_command_substitution] = state(276);
	v->a[126][aux_sym_redirected_statement_repeat2] = state(990);
	v->a[126][aux_sym_command_repeat1] = state(408);
	v->a[126][sym_word] = actions(79);
	v->a[126][anon_sym_for] = actions(81);
	v->a[126][anon_sym_while] = actions(83);
	v->a[126][anon_sym_until] = actions(83);
	v->a[126][anon_sym_if] = actions(85);
	v->a[126][anon_sym_case] = actions(87);
	v->a[126][anon_sym_LPAREN] = actions(89);
	v->a[126][anon_sym_LBRACE] = actions(93);
	v->a[126][anon_sym_BANG] = actions(95);
	v->a[126][anon_sym_LT] = actions(97);
	v->a[126][anon_sym_GT] = actions(97);
	v->a[126][anon_sym_GT_GT] = actions(97);
	v->a[126][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(99);
	return (parse_table_315(v));
}

/* EOF parse_table_62.c */
