/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_64.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_320(t_parse_table_array *v)
{
	v->a[128][anon_sym_BQUOTE] = actions(65);
	v->a[128][sym_comment] = actions(3);
	v->a[128][sym_variable_name] = actions(67);
	v->a[129][sym__statement_not_pipeline] = state(1559);
	v->a[129][sym_redirected_statement] = state(1222);
	v->a[129][sym_for_statement] = state(1222);
	v->a[129][sym_while_statement] = state(1222);
	v->a[129][sym_if_statement] = state(1222);
	v->a[129][sym_case_statement] = state(1222);
	v->a[129][sym_function_definition] = state(1222);
	v->a[129][sym_compound_statement] = state(1222);
	v->a[129][sym_subshell] = state(1222);
	v->a[129][sym_pipeline] = state(1284);
	v->a[129][sym_list] = state(1222);
	v->a[129][sym_negated_command] = state(1222);
	v->a[129][sym_command] = state(1222);
	v->a[129][sym_command_name] = state(252);
	v->a[129][sym_variable_assignment] = state(294);
	v->a[129][sym__variable_assignments] = state(1222);
	v->a[129][sym_file_redirect] = state(551);
	return (parse_table_321(v));
}

void	parse_table_321(t_parse_table_array *v)
{
	v->a[129][sym_arithmetic_expansion] = state(525);
	v->a[129][sym_concatenation] = state(555);
	v->a[129][sym_string] = state(525);
	v->a[129][sym_simple_expansion] = state(525);
	v->a[129][sym_expansion] = state(525);
	v->a[129][sym_command_substitution] = state(525);
	v->a[129][aux_sym_redirected_statement_repeat2] = state(1309);
	v->a[129][aux_sym_command_repeat1] = state(387);
	v->a[129][sym_word] = actions(331);
	v->a[129][anon_sym_for] = actions(9);
	v->a[129][anon_sym_while] = actions(11);
	v->a[129][anon_sym_until] = actions(11);
	v->a[129][anon_sym_if] = actions(13);
	v->a[129][anon_sym_case] = actions(15);
	v->a[129][anon_sym_LPAREN] = actions(17);
	v->a[129][anon_sym_LBRACE] = actions(19);
	v->a[129][anon_sym_BANG] = actions(333);
	v->a[129][anon_sym_LT] = actions(335);
	v->a[129][anon_sym_GT] = actions(335);
	v->a[129][anon_sym_GT_GT] = actions(335);
	return (parse_table_322(v));
}

void	parse_table_322(t_parse_table_array *v)
{
	v->a[129][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[129][anon_sym_DOLLAR] = actions(55);
	v->a[129][anon_sym_DQUOTE] = actions(57);
	v->a[129][sym_raw_string] = actions(337);
	v->a[129][sym_number] = actions(337);
	v->a[129][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[129][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[129][anon_sym_BQUOTE] = actions(65);
	v->a[129][sym_comment] = actions(3);
	v->a[129][sym_variable_name] = actions(339);
	v->a[130][sym__statement_not_pipeline] = state(1559);
	v->a[130][sym_redirected_statement] = state(1221);
	v->a[130][sym_for_statement] = state(1221);
	v->a[130][sym_while_statement] = state(1221);
	v->a[130][sym_if_statement] = state(1221);
	v->a[130][sym_case_statement] = state(1221);
	v->a[130][sym_function_definition] = state(1221);
	v->a[130][sym_compound_statement] = state(1221);
	v->a[130][sym_subshell] = state(1221);
	v->a[130][sym_pipeline] = state(1278);
	return (parse_table_323(v));
}

void	parse_table_323(t_parse_table_array *v)
{
	v->a[130][sym_list] = state(1221);
	v->a[130][sym_negated_command] = state(1221);
	v->a[130][sym_command] = state(1221);
	v->a[130][sym_command_name] = state(252);
	v->a[130][sym_variable_assignment] = state(364);
	v->a[130][sym__variable_assignments] = state(1221);
	v->a[130][sym_file_redirect] = state(551);
	v->a[130][sym_arithmetic_expansion] = state(525);
	v->a[130][sym_concatenation] = state(555);
	v->a[130][sym_string] = state(525);
	v->a[130][sym_simple_expansion] = state(525);
	v->a[130][sym_expansion] = state(525);
	v->a[130][sym_command_substitution] = state(525);
	v->a[130][aux_sym_redirected_statement_repeat2] = state(1309);
	v->a[130][aux_sym_command_repeat1] = state(387);
	v->a[130][sym_word] = actions(331);
	v->a[130][anon_sym_for] = actions(9);
	v->a[130][anon_sym_while] = actions(11);
	v->a[130][anon_sym_until] = actions(11);
	v->a[130][anon_sym_if] = actions(13);
	return (parse_table_324(v));
}

void	parse_table_324(t_parse_table_array *v)
{
	v->a[130][anon_sym_case] = actions(15);
	v->a[130][anon_sym_LPAREN] = actions(17);
	v->a[130][anon_sym_LBRACE] = actions(19);
	v->a[130][anon_sym_BANG] = actions(333);
	v->a[130][anon_sym_LT] = actions(335);
	v->a[130][anon_sym_GT] = actions(335);
	v->a[130][anon_sym_GT_GT] = actions(335);
	v->a[130][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[130][anon_sym_DOLLAR] = actions(55);
	v->a[130][anon_sym_DQUOTE] = actions(57);
	v->a[130][sym_raw_string] = actions(337);
	v->a[130][sym_number] = actions(337);
	v->a[130][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[130][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[130][anon_sym_BQUOTE] = actions(65);
	v->a[130][sym_comment] = actions(3);
	v->a[130][sym_variable_name] = actions(339);
	v->a[131][sym__statement_not_pipeline] = state(1564);
	v->a[131][sym_redirected_statement] = state(942);
	v->a[131][sym_for_statement] = state(942);
	return (parse_table_325(v));
}

/* EOF parse_table_64.c */
