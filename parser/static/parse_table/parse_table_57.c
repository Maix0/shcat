/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_57.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_285(t_parse_table_array *v)
{
	v->a[114][sym_subshell] = state(874);
	v->a[114][sym_pipeline] = state(940);
	v->a[114][sym_list] = state(872);
	v->a[114][sym_negated_command] = state(871);
	v->a[114][sym_command] = state(869);
	v->a[114][sym_command_name] = state(166);
	v->a[114][sym_variable_assignment] = state(197);
	v->a[114][sym__variable_assignments] = state(868);
	v->a[114][sym_file_redirect] = state(556);
	v->a[114][sym_arithmetic_expansion] = state(280);
	v->a[114][sym_concatenation] = state(549);
	v->a[114][sym_string] = state(280);
	v->a[114][sym_simple_expansion] = state(280);
	v->a[114][sym_expansion] = state(280);
	v->a[114][sym_command_substitution] = state(280);
	v->a[114][aux_sym__statements_repeat1] = state(109);
	v->a[114][aux_sym_redirected_statement_repeat2] = state(999);
	v->a[114][aux_sym_command_repeat1] = state(398);
	v->a[114][sym_word] = actions(7);
	v->a[114][anon_sym_for] = actions(9);
	return (parse_table_286(v));
}

void	parse_table_286(t_parse_table_array *v)
{
	v->a[114][anon_sym_while] = actions(11);
	v->a[114][anon_sym_until] = actions(11);
	v->a[114][anon_sym_if] = actions(13);
	v->a[114][anon_sym_case] = actions(15);
	v->a[114][anon_sym_LPAREN] = actions(17);
	v->a[114][anon_sym_LBRACE] = actions(19);
	v->a[114][anon_sym_BANG] = actions(21);
	v->a[114][anon_sym_LT] = actions(23);
	v->a[114][anon_sym_GT] = actions(23);
	v->a[114][anon_sym_GT_GT] = actions(23);
	v->a[114][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(25);
	v->a[114][anon_sym_DOLLAR] = actions(27);
	v->a[114][anon_sym_DQUOTE] = actions(29);
	v->a[114][sym_raw_string] = actions(31);
	v->a[114][sym_number] = actions(31);
	v->a[114][anon_sym_DOLLAR_LBRACE] = actions(33);
	v->a[114][anon_sym_DOLLAR_LPAREN] = actions(35);
	v->a[114][anon_sym_BQUOTE] = actions(37);
	v->a[114][sym_comment] = actions(3);
	v->a[114][sym_variable_name] = actions(39);
	return (parse_table_287(v));
}

void	parse_table_287(t_parse_table_array *v)
{
	v->a[115][aux_sym__terminated_statement] = state(64);
	v->a[115][sym__statement_not_pipeline] = state(1561);
	v->a[115][sym_redirected_statement] = state(955);
	v->a[115][sym_for_statement] = state(955);
	v->a[115][sym_while_statement] = state(955);
	v->a[115][sym_if_statement] = state(955);
	v->a[115][sym_case_statement] = state(955);
	v->a[115][sym_function_definition] = state(955);
	v->a[115][sym_compound_statement] = state(955);
	v->a[115][sym_subshell] = state(955);
	v->a[115][sym_pipeline] = state(974);
	v->a[115][sym_list] = state(955);
	v->a[115][sym_negated_command] = state(955);
	v->a[115][sym_command] = state(955);
	v->a[115][sym_command_name] = state(185);
	v->a[115][sym_variable_assignment] = state(209);
	v->a[115][sym__variable_assignments] = state(955);
	v->a[115][sym_file_redirect] = state(551);
	v->a[115][sym_arithmetic_expansion] = state(401);
	v->a[115][sym_concatenation] = state(555);
	return (parse_table_288(v));
}

void	parse_table_288(t_parse_table_array *v)
{
	v->a[115][sym_string] = state(401);
	v->a[115][sym_simple_expansion] = state(401);
	v->a[115][sym_expansion] = state(401);
	v->a[115][sym_command_substitution] = state(401);
	v->a[115][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[115][aux_sym_command_repeat1] = state(411);
	v->a[115][sym_word] = actions(41);
	v->a[115][anon_sym_for] = actions(9);
	v->a[115][anon_sym_while] = actions(11);
	v->a[115][anon_sym_until] = actions(11);
	v->a[115][anon_sym_if] = actions(13);
	v->a[115][anon_sym_case] = actions(15);
	v->a[115][anon_sym_LPAREN] = actions(17);
	v->a[115][anon_sym_LBRACE] = actions(19);
	v->a[115][anon_sym_BANG] = actions(49);
	v->a[115][anon_sym_LT] = actions(51);
	v->a[115][anon_sym_GT] = actions(51);
	v->a[115][anon_sym_GT_GT] = actions(51);
	v->a[115][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[115][anon_sym_DOLLAR] = actions(55);
	return (parse_table_289(v));
}

void	parse_table_289(t_parse_table_array *v)
{
	v->a[115][anon_sym_DQUOTE] = actions(57);
	v->a[115][sym_raw_string] = actions(59);
	v->a[115][sym_number] = actions(59);
	v->a[115][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[115][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[115][anon_sym_BQUOTE] = actions(65);
	v->a[115][sym_comment] = actions(3);
	v->a[115][sym_variable_name] = actions(67);
	v->a[116][sym__statement_not_pipeline] = state(1560);
	v->a[116][sym_redirected_statement] = state(859);
	v->a[116][sym_for_statement] = state(858);
	v->a[116][sym_while_statement] = state(855);
	v->a[116][sym_if_statement] = state(851);
	v->a[116][sym_case_statement] = state(850);
	v->a[116][sym_function_definition] = state(849);
	v->a[116][sym_compound_statement] = state(848);
	v->a[116][sym_subshell] = state(845);
	v->a[116][sym_pipeline] = state(962);
	v->a[116][sym_list] = state(842);
	v->a[116][sym_negated_command] = state(841);
	return (parse_table_290(v));
}

/* EOF parse_table_57.c */
