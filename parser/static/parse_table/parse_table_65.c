/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_65.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_325(t_parse_table_array *v)
{
	v->a[131][sym_while_statement] = state(942);
	v->a[131][sym_if_statement] = state(942);
	v->a[131][sym_case_statement] = state(942);
	v->a[131][sym_function_definition] = state(942);
	v->a[131][sym_compound_statement] = state(942);
	v->a[131][sym_subshell] = state(942);
	v->a[131][sym_pipeline] = state(936);
	v->a[131][sym_list] = state(942);
	v->a[131][sym_negated_command] = state(942);
	v->a[131][sym_command] = state(942);
	v->a[131][sym_command_name] = state(170);
	v->a[131][sym_variable_assignment] = state(222);
	v->a[131][sym__variable_assignments] = state(942);
	v->a[131][sym_file_redirect] = state(541);
	v->a[131][sym_arithmetic_expansion] = state(276);
	v->a[131][sym_concatenation] = state(546);
	v->a[131][sym_string] = state(276);
	v->a[131][sym_simple_expansion] = state(276);
	v->a[131][sym_expansion] = state(276);
	v->a[131][sym_command_substitution] = state(276);
	return (parse_table_326(v));
}

void	parse_table_326(t_parse_table_array *v)
{
	v->a[131][aux_sym_redirected_statement_repeat2] = state(990);
	v->a[131][aux_sym_command_repeat1] = state(408);
	v->a[131][sym_word] = actions(79);
	v->a[131][anon_sym_for] = actions(81);
	v->a[131][anon_sym_while] = actions(83);
	v->a[131][anon_sym_until] = actions(83);
	v->a[131][anon_sym_if] = actions(85);
	v->a[131][anon_sym_case] = actions(87);
	v->a[131][anon_sym_LPAREN] = actions(89);
	v->a[131][anon_sym_LBRACE] = actions(93);
	v->a[131][anon_sym_BANG] = actions(95);
	v->a[131][anon_sym_LT] = actions(97);
	v->a[131][anon_sym_GT] = actions(97);
	v->a[131][anon_sym_GT_GT] = actions(97);
	v->a[131][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(99);
	v->a[131][anon_sym_DOLLAR] = actions(101);
	v->a[131][anon_sym_DQUOTE] = actions(103);
	v->a[131][sym_raw_string] = actions(105);
	v->a[131][sym_number] = actions(105);
	v->a[131][anon_sym_DOLLAR_LBRACE] = actions(107);
	return (parse_table_327(v));
}

void	parse_table_327(t_parse_table_array *v)
{
	v->a[131][anon_sym_DOLLAR_LPAREN] = actions(109);
	v->a[131][anon_sym_BQUOTE] = actions(111);
	v->a[131][sym_comment] = actions(3);
	v->a[131][sym_variable_name] = actions(113);
	v->a[132][sym__statement_not_pipeline] = state(1559);
	v->a[132][sym_redirected_statement] = state(1226);
	v->a[132][sym_for_statement] = state(1226);
	v->a[132][sym_while_statement] = state(1226);
	v->a[132][sym_if_statement] = state(1226);
	v->a[132][sym_case_statement] = state(1226);
	v->a[132][sym_function_definition] = state(1226);
	v->a[132][sym_compound_statement] = state(1226);
	v->a[132][sym_subshell] = state(1226);
	v->a[132][sym_pipeline] = state(1228);
	v->a[132][sym_list] = state(1226);
	v->a[132][sym_negated_command] = state(1226);
	v->a[132][sym_command] = state(1226);
	v->a[132][sym_command_name] = state(252);
	v->a[132][sym_variable_assignment] = state(309);
	v->a[132][sym__variable_assignments] = state(1226);
	return (parse_table_328(v));
}

void	parse_table_328(t_parse_table_array *v)
{
	v->a[132][sym_file_redirect] = state(551);
	v->a[132][sym_arithmetic_expansion] = state(525);
	v->a[132][sym_concatenation] = state(555);
	v->a[132][sym_string] = state(525);
	v->a[132][sym_simple_expansion] = state(525);
	v->a[132][sym_expansion] = state(525);
	v->a[132][sym_command_substitution] = state(525);
	v->a[132][aux_sym_redirected_statement_repeat2] = state(1309);
	v->a[132][aux_sym_command_repeat1] = state(387);
	v->a[132][sym_word] = actions(331);
	v->a[132][anon_sym_for] = actions(9);
	v->a[132][anon_sym_while] = actions(11);
	v->a[132][anon_sym_until] = actions(11);
	v->a[132][anon_sym_if] = actions(13);
	v->a[132][anon_sym_case] = actions(15);
	v->a[132][anon_sym_LPAREN] = actions(17);
	v->a[132][anon_sym_LBRACE] = actions(19);
	v->a[132][anon_sym_BANG] = actions(333);
	v->a[132][anon_sym_LT] = actions(335);
	v->a[132][anon_sym_GT] = actions(335);
	return (parse_table_329(v));
}

void	parse_table_329(t_parse_table_array *v)
{
	v->a[132][anon_sym_GT_GT] = actions(335);
	v->a[132][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[132][anon_sym_DOLLAR] = actions(55);
	v->a[132][anon_sym_DQUOTE] = actions(57);
	v->a[132][sym_raw_string] = actions(337);
	v->a[132][sym_number] = actions(337);
	v->a[132][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[132][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[132][anon_sym_BQUOTE] = actions(65);
	v->a[132][sym_comment] = actions(3);
	v->a[132][sym_variable_name] = actions(339);
	v->a[133][sym__statement_not_pipeline] = state(1560);
	v->a[133][sym_redirected_statement] = state(927);
	v->a[133][sym_for_statement] = state(927);
	v->a[133][sym_while_statement] = state(927);
	v->a[133][sym_if_statement] = state(927);
	v->a[133][sym_case_statement] = state(927);
	v->a[133][sym_function_definition] = state(927);
	v->a[133][sym_compound_statement] = state(927);
	v->a[133][sym_subshell] = state(927);
	return (parse_table_330(v));
}

/* EOF parse_table_65.c */
