/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_48.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_240(t_parse_table_array *v)
{
	v->a[95][anon_sym_while] = actions(11);
	v->a[95][anon_sym_until] = actions(11);
	v->a[95][anon_sym_if] = actions(13);
	v->a[95][anon_sym_case] = actions(15);
	v->a[95][anon_sym_LPAREN] = actions(17);
	v->a[95][anon_sym_LBRACE] = actions(19);
	v->a[95][anon_sym_BANG] = actions(206);
	v->a[95][anon_sym_LT] = actions(51);
	v->a[95][anon_sym_GT] = actions(51);
	v->a[95][anon_sym_GT_GT] = actions(51);
	v->a[95][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[95][anon_sym_DOLLAR] = actions(55);
	v->a[95][anon_sym_DQUOTE] = actions(57);
	v->a[95][sym_raw_string] = actions(59);
	v->a[95][sym_number] = actions(59);
	v->a[95][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[95][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[95][anon_sym_BQUOTE] = actions(65);
	v->a[95][sym_comment] = actions(3);
	v->a[95][sym_variable_name] = actions(67);
	return (parse_table_241(v));
}

void	parse_table_241(t_parse_table_array *v)
{
	v->a[96][sym__statements] = state(1687);
	v->a[96][sym__statement_not_pipeline] = state(1560);
	v->a[96][sym_redirected_statement] = state(820);
	v->a[96][sym_for_statement] = state(820);
	v->a[96][sym_while_statement] = state(820);
	v->a[96][sym_if_statement] = state(820);
	v->a[96][sym_case_statement] = state(820);
	v->a[96][sym_function_definition] = state(820);
	v->a[96][sym_compound_statement] = state(820);
	v->a[96][sym_subshell] = state(820);
	v->a[96][sym_pipeline] = state(969);
	v->a[96][sym_list] = state(820);
	v->a[96][sym_negated_command] = state(820);
	v->a[96][sym_command] = state(820);
	v->a[96][sym_command_name] = state(179);
	v->a[96][sym_variable_assignment] = state(208);
	v->a[96][sym__variable_assignments] = state(820);
	v->a[96][sym_file_redirect] = state(599);
	v->a[96][sym_arithmetic_expansion] = state(401);
	v->a[96][sym_concatenation] = state(555);
	return (parse_table_242(v));
}

void	parse_table_242(t_parse_table_array *v)
{
	v->a[96][sym_string] = state(401);
	v->a[96][sym_simple_expansion] = state(401);
	v->a[96][sym_expansion] = state(401);
	v->a[96][sym_command_substitution] = state(401);
	v->a[96][aux_sym__statements_repeat1] = state(116);
	v->a[96][aux_sym_redirected_statement_repeat2] = state(1006);
	v->a[96][aux_sym_command_repeat1] = state(385);
	v->a[96][sym_word] = actions(204);
	v->a[96][anon_sym_for] = actions(9);
	v->a[96][anon_sym_while] = actions(11);
	v->a[96][anon_sym_until] = actions(11);
	v->a[96][anon_sym_if] = actions(13);
	v->a[96][anon_sym_case] = actions(15);
	v->a[96][anon_sym_LPAREN] = actions(17);
	v->a[96][anon_sym_LBRACE] = actions(19);
	v->a[96][anon_sym_BANG] = actions(206);
	v->a[96][anon_sym_LT] = actions(51);
	v->a[96][anon_sym_GT] = actions(51);
	v->a[96][anon_sym_GT_GT] = actions(51);
	v->a[96][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	return (parse_table_243(v));
}

void	parse_table_243(t_parse_table_array *v)
{
	v->a[96][anon_sym_DOLLAR] = actions(55);
	v->a[96][anon_sym_DQUOTE] = actions(57);
	v->a[96][sym_raw_string] = actions(59);
	v->a[96][sym_number] = actions(59);
	v->a[96][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[96][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[96][anon_sym_BQUOTE] = actions(65);
	v->a[96][sym_comment] = actions(3);
	v->a[96][sym_variable_name] = actions(67);
	v->a[97][sym__statements] = state(1701);
	v->a[97][sym__statement_not_pipeline] = state(1557);
	v->a[97][sym_redirected_statement] = state(877);
	v->a[97][sym_for_statement] = state(877);
	v->a[97][sym_while_statement] = state(877);
	v->a[97][sym_if_statement] = state(877);
	v->a[97][sym_case_statement] = state(877);
	v->a[97][sym_function_definition] = state(877);
	v->a[97][sym_compound_statement] = state(877);
	v->a[97][sym_subshell] = state(877);
	v->a[97][sym_pipeline] = state(937);
	return (parse_table_244(v));
}

void	parse_table_244(t_parse_table_array *v)
{
	v->a[97][sym_list] = state(877);
	v->a[97][sym_negated_command] = state(877);
	v->a[97][sym_command] = state(877);
	v->a[97][sym_command_name] = state(158);
	v->a[97][sym_variable_assignment] = state(186);
	v->a[97][sym__variable_assignments] = state(877);
	v->a[97][sym_file_redirect] = state(540);
	v->a[97][sym_arithmetic_expansion] = state(277);
	v->a[97][sym_concatenation] = state(555);
	v->a[97][sym_string] = state(277);
	v->a[97][sym_simple_expansion] = state(277);
	v->a[97][sym_expansion] = state(277);
	v->a[97][sym_command_substitution] = state(277);
	v->a[97][aux_sym__statements_repeat1] = state(112);
	v->a[97][aux_sym_redirected_statement_repeat2] = state(1019);
	v->a[97][aux_sym_command_repeat1] = state(298);
	v->a[97][sym_word] = actions(208);
	v->a[97][anon_sym_for] = actions(9);
	v->a[97][anon_sym_while] = actions(11);
	v->a[97][anon_sym_until] = actions(11);
	return (parse_table_245(v));
}

/* EOF parse_table_48.c */
