/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_13.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_65(t_parse_table_array *v)
{
	v->a[32][sym_raw_string] = actions(89);
	v->a[32][sym_number] = actions(89);
	v->a[32][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[32][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[32][anon_sym_BQUOTE] = actions(85);
	v->a[32][sym_comment] = actions(3);
	v->a[32][sym_variable_name] = actions(95);
	v->a[33][sym__statement_not_pipeline] = state(769);
	v->a[33][sym_redirected_statement] = state(484);
	v->a[33][sym_compound_statement] = state(456);
	v->a[33][sym_subshell] = state(488);
	v->a[33][sym_pipeline] = state(491);
	v->a[33][sym_list] = state(487);
	v->a[33][sym_negated_command] = state(455);
	v->a[33][sym_command] = state(486);
	v->a[33][sym_command_name] = state(61);
	v->a[33][sym_variable_assignment] = state(77);
	v->a[33][sym__variable_assignments] = state(485);
	v->a[33][sym_file_redirect] = state(249);
	v->a[33][sym_arithmetic_expansion] = state(126);
	return (parse_table_66(v));
}

void	parse_table_66(t_parse_table_array *v)
{
	v->a[33][sym_concatenation] = state(250);
	v->a[33][sym_string] = state(126);
	v->a[33][sym_simple_expansion] = state(126);
	v->a[33][sym_expansion] = state(126);
	v->a[33][sym_command_substitution] = state(126);
	v->a[33][aux_sym__statements_repeat1] = state(34);
	v->a[33][aux_sym_redirected_statement_repeat2] = state(553);
	v->a[33][aux_sym_command_repeat1] = state(165);
	v->a[33][sym_word] = actions(89);
	v->a[33][anon_sym_LBRACE] = actions(9);
	v->a[33][anon_sym_LPAREN] = actions(11);
	v->a[33][anon_sym_BANG] = actions(91);
	v->a[33][anon_sym_LT] = actions(93);
	v->a[33][anon_sym_GT] = actions(93);
	v->a[33][anon_sym_GT_GT] = actions(93);
	v->a[33][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[33][anon_sym_DOLLAR] = actions(77);
	v->a[33][anon_sym_DQUOTE] = actions(79);
	v->a[33][sym_raw_string] = actions(89);
	v->a[33][sym_number] = actions(89);
	return (parse_table_67(v));
}

void	parse_table_67(t_parse_table_array *v)
{
	v->a[33][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[33][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[33][anon_sym_BQUOTE] = actions(85);
	v->a[33][sym_comment] = actions(3);
	v->a[33][sym_variable_name] = actions(95);
	v->a[34][sym__statement_not_pipeline] = state(768);
	v->a[34][sym_redirected_statement] = state(510);
	v->a[34][sym_compound_statement] = state(510);
	v->a[34][sym_subshell] = state(510);
	v->a[34][sym_pipeline] = state(549);
	v->a[34][sym_list] = state(510);
	v->a[34][sym_negated_command] = state(510);
	v->a[34][sym_command] = state(510);
	v->a[34][sym_command_name] = state(72);
	v->a[34][sym_variable_assignment] = state(95);
	v->a[34][sym__variable_assignments] = state(510);
	v->a[34][sym_file_redirect] = state(249);
	v->a[34][sym_arithmetic_expansion] = state(176);
	v->a[34][sym_concatenation] = state(250);
	v->a[34][sym_string] = state(176);
	return (parse_table_68(v));
}

void	parse_table_68(t_parse_table_array *v)
{
	v->a[34][sym_simple_expansion] = state(176);
	v->a[34][sym_expansion] = state(176);
	v->a[34][sym_command_substitution] = state(176);
	v->a[34][aux_sym__statements_repeat1] = state(34);
	v->a[34][aux_sym_redirected_statement_repeat2] = state(577);
	v->a[34][aux_sym_command_repeat1] = state(183);
	v->a[34][sym_word] = actions(103);
	v->a[34][anon_sym_LBRACE] = actions(106);
	v->a[34][anon_sym_LPAREN] = actions(109);
	v->a[34][anon_sym_BANG] = actions(112);
	v->a[34][anon_sym_LT] = actions(115);
	v->a[34][anon_sym_GT] = actions(115);
	v->a[34][anon_sym_GT_GT] = actions(115);
	v->a[34][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(118);
	v->a[34][anon_sym_DOLLAR] = actions(121);
	v->a[34][anon_sym_DQUOTE] = actions(124);
	v->a[34][sym_raw_string] = actions(103);
	v->a[34][sym_number] = actions(103);
	v->a[34][anon_sym_DOLLAR_LBRACE] = actions(127);
	v->a[34][anon_sym_DOLLAR_LPAREN] = actions(130);
	return (parse_table_69(v));
}

void	parse_table_69(t_parse_table_array *v)
{
	v->a[34][anon_sym_BQUOTE] = actions(133);
	v->a[34][sym_comment] = actions(3);
	v->a[34][sym_variable_name] = actions(136);
	v->a[35][aux_sym__terminated_statement] = state(7);
	v->a[35][sym__statement_not_pipeline] = state(768);
	v->a[35][sym_redirected_statement] = state(512);
	v->a[35][sym_compound_statement] = state(512);
	v->a[35][sym_subshell] = state(512);
	v->a[35][sym_pipeline] = state(547);
	v->a[35][sym_list] = state(512);
	v->a[35][sym_negated_command] = state(512);
	v->a[35][sym_command] = state(512);
	v->a[35][sym_command_name] = state(72);
	v->a[35][sym_variable_assignment] = state(99);
	v->a[35][sym__variable_assignments] = state(512);
	v->a[35][sym_file_redirect] = state(249);
	v->a[35][sym_arithmetic_expansion] = state(176);
	v->a[35][sym_concatenation] = state(250);
	v->a[35][sym_string] = state(176);
	v->a[35][sym_simple_expansion] = state(176);
	return (parse_table_70(v));
}

/* EOF parse_table_13.c */
