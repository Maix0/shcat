/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_36.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_180(t_parse_table_array *v)
{
	v->a[71][sym_if_statement] = state(949);
	v->a[71][sym_case_statement] = state(949);
	v->a[71][sym_function_definition] = state(949);
	v->a[71][sym_compound_statement] = state(949);
	v->a[71][sym_subshell] = state(949);
	v->a[71][sym_pipeline] = state(1059);
	v->a[71][sym_list] = state(949);
	v->a[71][sym_negated_command] = state(949);
	v->a[71][sym_command] = state(949);
	v->a[71][sym_command_name] = state(185);
	v->a[71][sym_variable_assignment] = state(237);
	v->a[71][sym__variable_assignments] = state(949);
	v->a[71][sym_file_redirect] = state(551);
	v->a[71][sym_arithmetic_expansion] = state(401);
	v->a[71][sym_concatenation] = state(555);
	v->a[71][sym_string] = state(401);
	v->a[71][sym_simple_expansion] = state(401);
	v->a[71][sym_expansion] = state(401);
	v->a[71][sym_command_substitution] = state(401);
	v->a[71][aux_sym_redirected_statement_repeat2] = state(1126);
	return (parse_table_181(v));
}

void	parse_table_181(t_parse_table_array *v)
{
	v->a[71][aux_sym_command_repeat1] = state(411);
	v->a[71][sym_word] = actions(41);
	v->a[71][anon_sym_for] = actions(9);
	v->a[71][anon_sym_while] = actions(11);
	v->a[71][anon_sym_until] = actions(11);
	v->a[71][anon_sym_done] = actions(232);
	v->a[71][anon_sym_if] = actions(13);
	v->a[71][anon_sym_case] = actions(15);
	v->a[71][anon_sym_LPAREN] = actions(17);
	v->a[71][anon_sym_LBRACE] = actions(19);
	v->a[71][anon_sym_BANG] = actions(49);
	v->a[71][anon_sym_LT] = actions(51);
	v->a[71][anon_sym_GT] = actions(51);
	v->a[71][anon_sym_GT_GT] = actions(51);
	v->a[71][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[71][anon_sym_DOLLAR] = actions(55);
	v->a[71][anon_sym_DQUOTE] = actions(57);
	v->a[71][sym_raw_string] = actions(59);
	v->a[71][sym_number] = actions(59);
	v->a[71][anon_sym_DOLLAR_LBRACE] = actions(61);
	return (parse_table_182(v));
}

void	parse_table_182(t_parse_table_array *v)
{
	v->a[71][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[71][anon_sym_BQUOTE] = actions(65);
	v->a[71][sym_comment] = actions(3);
	v->a[71][sym_variable_name] = actions(67);
	v->a[72][aux_sym__terminated_statement] = state(38);
	v->a[72][sym__statement_not_pipeline] = state(1561);
	v->a[72][sym_redirected_statement] = state(949);
	v->a[72][sym_for_statement] = state(949);
	v->a[72][sym_while_statement] = state(949);
	v->a[72][sym_if_statement] = state(949);
	v->a[72][sym_case_statement] = state(949);
	v->a[72][sym_function_definition] = state(949);
	v->a[72][sym_compound_statement] = state(949);
	v->a[72][sym_subshell] = state(949);
	v->a[72][sym_pipeline] = state(1059);
	v->a[72][sym_list] = state(949);
	v->a[72][sym_negated_command] = state(949);
	v->a[72][sym_command] = state(949);
	v->a[72][sym_command_name] = state(185);
	v->a[72][sym_variable_assignment] = state(237);
	return (parse_table_183(v));
}

void	parse_table_183(t_parse_table_array *v)
{
	v->a[72][sym__variable_assignments] = state(949);
	v->a[72][sym_file_redirect] = state(551);
	v->a[72][sym_arithmetic_expansion] = state(401);
	v->a[72][sym_concatenation] = state(555);
	v->a[72][sym_string] = state(401);
	v->a[72][sym_simple_expansion] = state(401);
	v->a[72][sym_expansion] = state(401);
	v->a[72][sym_command_substitution] = state(401);
	v->a[72][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[72][aux_sym_command_repeat1] = state(411);
	v->a[72][sym_word] = actions(41);
	v->a[72][anon_sym_for] = actions(9);
	v->a[72][anon_sym_while] = actions(11);
	v->a[72][anon_sym_until] = actions(11);
	v->a[72][anon_sym_done] = actions(234);
	v->a[72][anon_sym_if] = actions(13);
	v->a[72][anon_sym_case] = actions(15);
	v->a[72][anon_sym_LPAREN] = actions(17);
	v->a[72][anon_sym_LBRACE] = actions(19);
	v->a[72][anon_sym_BANG] = actions(49);
	return (parse_table_184(v));
}

void	parse_table_184(t_parse_table_array *v)
{
	v->a[72][anon_sym_LT] = actions(51);
	v->a[72][anon_sym_GT] = actions(51);
	v->a[72][anon_sym_GT_GT] = actions(51);
	v->a[72][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[72][anon_sym_DOLLAR] = actions(55);
	v->a[72][anon_sym_DQUOTE] = actions(57);
	v->a[72][sym_raw_string] = actions(59);
	v->a[72][sym_number] = actions(59);
	v->a[72][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[72][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[72][anon_sym_BQUOTE] = actions(65);
	v->a[72][sym_comment] = actions(3);
	v->a[72][sym_variable_name] = actions(67);
	v->a[73][sym__statements] = state(1725);
	v->a[73][sym__statement_not_pipeline] = state(1557);
	v->a[73][sym_redirected_statement] = state(877);
	v->a[73][sym_for_statement] = state(877);
	v->a[73][sym_while_statement] = state(877);
	v->a[73][sym_if_statement] = state(877);
	v->a[73][sym_case_statement] = state(877);
	return (parse_table_185(v));
}

/* EOF parse_table_36.c */
