/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_14.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_70(t_parse_table_array *v)
{
	v->a[35][sym_expansion] = state(176);
	v->a[35][sym_command_substitution] = state(176);
	v->a[35][aux_sym_redirected_statement_repeat2] = state(577);
	v->a[35][aux_sym_command_repeat1] = state(183);
	v->a[35][sym_word] = actions(69);
	v->a[35][anon_sym_LBRACE] = actions(9);
	v->a[35][anon_sym_LPAREN] = actions(11);
	v->a[35][anon_sym_BANG] = actions(99);
	v->a[35][anon_sym_LT] = actions(73);
	v->a[35][anon_sym_GT] = actions(73);
	v->a[35][anon_sym_GT_GT] = actions(73);
	v->a[35][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[35][anon_sym_DOLLAR] = actions(77);
	v->a[35][anon_sym_DQUOTE] = actions(79);
	v->a[35][sym_raw_string] = actions(69);
	v->a[35][sym_number] = actions(69);
	v->a[35][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[35][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[35][anon_sym_BQUOTE] = actions(85);
	v->a[35][sym_comment] = actions(3);
	return (parse_table_71(v));
}

void	parse_table_71(t_parse_table_array *v)
{
	v->a[35][sym_variable_name] = actions(87);
	v->a[36][sym__statement_not_pipeline] = state(770);
	v->a[36][sym_redirected_statement] = state(473);
	v->a[36][sym_compound_statement] = state(474);
	v->a[36][sym_subshell] = state(476);
	v->a[36][sym_pipeline] = state(496);
	v->a[36][sym_list] = state(479);
	v->a[36][sym_negated_command] = state(481);
	v->a[36][sym_command] = state(482);
	v->a[36][sym_command_name] = state(89);
	v->a[36][sym_variable_assignment] = state(103);
	v->a[36][sym__variable_assignments] = state(483);
	v->a[36][sym_file_redirect] = state(268);
	v->a[36][sym_arithmetic_expansion] = state(176);
	v->a[36][sym_concatenation] = state(250);
	v->a[36][sym_string] = state(176);
	v->a[36][sym_simple_expansion] = state(176);
	v->a[36][sym_expansion] = state(176);
	v->a[36][sym_command_substitution] = state(176);
	v->a[36][aux_sym__statements_repeat1] = state(34);
	return (parse_table_72(v));
}

void	parse_table_72(t_parse_table_array *v)
{
	v->a[36][aux_sym_redirected_statement_repeat2] = state(558);
	v->a[36][aux_sym_command_repeat1] = state(139);
	v->a[36][sym_word] = actions(69);
	v->a[36][anon_sym_LBRACE] = actions(9);
	v->a[36][anon_sym_LPAREN] = actions(11);
	v->a[36][anon_sym_BANG] = actions(71);
	v->a[36][anon_sym_LT] = actions(73);
	v->a[36][anon_sym_GT] = actions(73);
	v->a[36][anon_sym_GT_GT] = actions(73);
	v->a[36][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[36][anon_sym_DOLLAR] = actions(77);
	v->a[36][anon_sym_DQUOTE] = actions(79);
	v->a[36][sym_raw_string] = actions(69);
	v->a[36][sym_number] = actions(69);
	v->a[36][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[36][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[36][anon_sym_BQUOTE] = actions(85);
	v->a[36][sym_comment] = actions(3);
	v->a[36][sym_variable_name] = actions(87);
	v->a[37][sym__statement_not_pipeline] = state(766);
	return (parse_table_73(v));
}

void	parse_table_73(t_parse_table_array *v)
{
	v->a[37][sym_redirected_statement] = state(462);
	v->a[37][sym_compound_statement] = state(463);
	v->a[37][sym_subshell] = state(464);
	v->a[37][sym_pipeline] = state(517);
	v->a[37][sym_list] = state(465);
	v->a[37][sym_negated_command] = state(466);
	v->a[37][sym_command] = state(467);
	v->a[37][sym_command_name] = state(65);
	v->a[37][sym_variable_assignment] = state(76);
	v->a[37][sym__variable_assignments] = state(468);
	v->a[37][sym_file_redirect] = state(253);
	v->a[37][sym_arithmetic_expansion] = state(116);
	v->a[37][sym_concatenation] = state(254);
	v->a[37][sym_string] = state(116);
	v->a[37][sym_simple_expansion] = state(116);
	v->a[37][sym_expansion] = state(116);
	v->a[37][sym_command_substitution] = state(116);
	v->a[37][aux_sym__statements_repeat1] = state(34);
	v->a[37][aux_sym_redirected_statement_repeat2] = state(557);
	v->a[37][aux_sym_command_repeat1] = state(193);
	return (parse_table_74(v));
}

void	parse_table_74(t_parse_table_array *v)
{
	v->a[37][sym_word] = actions(7);
	v->a[37][anon_sym_LBRACE] = actions(9);
	v->a[37][anon_sym_LPAREN] = actions(11);
	v->a[37][anon_sym_BANG] = actions(13);
	v->a[37][anon_sym_LT] = actions(15);
	v->a[37][anon_sym_GT] = actions(15);
	v->a[37][anon_sym_GT_GT] = actions(15);
	v->a[37][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(17);
	v->a[37][anon_sym_DOLLAR] = actions(19);
	v->a[37][anon_sym_DQUOTE] = actions(21);
	v->a[37][sym_raw_string] = actions(7);
	v->a[37][sym_number] = actions(7);
	v->a[37][anon_sym_DOLLAR_LBRACE] = actions(23);
	v->a[37][anon_sym_DOLLAR_LPAREN] = actions(25);
	v->a[37][anon_sym_BQUOTE] = actions(27);
	v->a[37][sym_comment] = actions(3);
	v->a[37][sym_variable_name] = actions(29);
	v->a[38][aux_sym__terminated_statement] = state(24);
	v->a[38][sym__statement_not_pipeline] = state(768);
	v->a[38][sym_redirected_statement] = state(512);
	return (parse_table_75(v));
}

/* EOF parse_table_14.c */
