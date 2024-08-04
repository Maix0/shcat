/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_58.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_290(t_parse_table_array *v)
{
	v->a[116][sym_command] = state(840);
	v->a[116][sym_command_name] = state(179);
	v->a[116][sym_variable_assignment] = state(239);
	v->a[116][sym__variable_assignments] = state(835);
	v->a[116][sym_file_redirect] = state(599);
	v->a[116][sym_arithmetic_expansion] = state(401);
	v->a[116][sym_concatenation] = state(555);
	v->a[116][sym_string] = state(401);
	v->a[116][sym_simple_expansion] = state(401);
	v->a[116][sym_expansion] = state(401);
	v->a[116][sym_command_substitution] = state(401);
	v->a[116][aux_sym__statements_repeat1] = state(109);
	v->a[116][aux_sym_redirected_statement_repeat2] = state(1006);
	v->a[116][aux_sym_command_repeat1] = state(385);
	v->a[116][sym_word] = actions(204);
	v->a[116][anon_sym_for] = actions(9);
	v->a[116][anon_sym_while] = actions(11);
	v->a[116][anon_sym_until] = actions(11);
	v->a[116][anon_sym_if] = actions(13);
	v->a[116][anon_sym_case] = actions(15);
	return (parse_table_291(v));
}

void	parse_table_291(t_parse_table_array *v)
{
	v->a[116][anon_sym_LPAREN] = actions(17);
	v->a[116][anon_sym_LBRACE] = actions(19);
	v->a[116][anon_sym_BANG] = actions(206);
	v->a[116][anon_sym_LT] = actions(51);
	v->a[116][anon_sym_GT] = actions(51);
	v->a[116][anon_sym_GT_GT] = actions(51);
	v->a[116][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[116][anon_sym_DOLLAR] = actions(55);
	v->a[116][anon_sym_DQUOTE] = actions(57);
	v->a[116][sym_raw_string] = actions(59);
	v->a[116][sym_number] = actions(59);
	v->a[116][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[116][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[116][anon_sym_BQUOTE] = actions(65);
	v->a[116][sym_comment] = actions(3);
	v->a[116][sym_variable_name] = actions(67);
	v->a[117][aux_sym__terminated_statement] = state(81);
	v->a[117][sym__statement_not_pipeline] = state(1561);
	v->a[117][sym_redirected_statement] = state(949);
	v->a[117][sym_for_statement] = state(949);
	return (parse_table_292(v));
}

void	parse_table_292(t_parse_table_array *v)
{
	v->a[117][sym_while_statement] = state(949);
	v->a[117][sym_if_statement] = state(949);
	v->a[117][sym_case_statement] = state(949);
	v->a[117][sym_function_definition] = state(949);
	v->a[117][sym_compound_statement] = state(949);
	v->a[117][sym_subshell] = state(949);
	v->a[117][sym_pipeline] = state(1059);
	v->a[117][sym_list] = state(949);
	v->a[117][sym_negated_command] = state(949);
	v->a[117][sym_command] = state(949);
	v->a[117][sym_command_name] = state(185);
	v->a[117][sym_variable_assignment] = state(237);
	v->a[117][sym__variable_assignments] = state(949);
	v->a[117][sym_file_redirect] = state(551);
	v->a[117][sym_arithmetic_expansion] = state(401);
	v->a[117][sym_concatenation] = state(555);
	v->a[117][sym_string] = state(401);
	v->a[117][sym_simple_expansion] = state(401);
	v->a[117][sym_expansion] = state(401);
	v->a[117][sym_command_substitution] = state(401);
	return (parse_table_293(v));
}

void	parse_table_293(t_parse_table_array *v)
{
	v->a[117][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[117][aux_sym_command_repeat1] = state(411);
	v->a[117][sym_word] = actions(41);
	v->a[117][anon_sym_for] = actions(9);
	v->a[117][anon_sym_while] = actions(11);
	v->a[117][anon_sym_until] = actions(11);
	v->a[117][anon_sym_if] = actions(13);
	v->a[117][anon_sym_case] = actions(15);
	v->a[117][anon_sym_LPAREN] = actions(17);
	v->a[117][anon_sym_LBRACE] = actions(19);
	v->a[117][anon_sym_BANG] = actions(49);
	v->a[117][anon_sym_LT] = actions(51);
	v->a[117][anon_sym_GT] = actions(51);
	v->a[117][anon_sym_GT_GT] = actions(51);
	v->a[117][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[117][anon_sym_DOLLAR] = actions(55);
	v->a[117][anon_sym_DQUOTE] = actions(57);
	v->a[117][sym_raw_string] = actions(59);
	v->a[117][sym_number] = actions(59);
	v->a[117][anon_sym_DOLLAR_LBRACE] = actions(61);
	return (parse_table_294(v));
}

void	parse_table_294(t_parse_table_array *v)
{
	v->a[117][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[117][anon_sym_BQUOTE] = actions(65);
	v->a[117][sym_comment] = actions(3);
	v->a[117][sym_variable_name] = actions(67);
	v->a[118][sym__statement_not_pipeline] = state(1561);
	v->a[118][sym_redirected_statement] = state(938);
	v->a[118][sym_for_statement] = state(939);
	v->a[118][sym_while_statement] = state(941);
	v->a[118][sym_if_statement] = state(943);
	v->a[118][sym_case_statement] = state(944);
	v->a[118][sym_function_definition] = state(945);
	v->a[118][sym_compound_statement] = state(946);
	v->a[118][sym_subshell] = state(947);
	v->a[118][sym_pipeline] = state(1064);
	v->a[118][sym_list] = state(948);
	v->a[118][sym_negated_command] = state(951);
	v->a[118][sym_command] = state(952);
	v->a[118][sym_command_name] = state(185);
	v->a[118][sym_variable_assignment] = state(215);
	v->a[118][sym__variable_assignments] = state(954);
	return (parse_table_295(v));
}

/* EOF parse_table_58.c */
