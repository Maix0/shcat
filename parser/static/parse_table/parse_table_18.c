/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_18.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_90(t_parse_table_array *v)
{
	v->a[46][sym_negated_command] = state(541);
	v->a[46][sym_command] = state(541);
	v->a[46][sym_command_name] = state(72);
	v->a[46][sym_variable_assignment] = state(111);
	v->a[46][sym__variable_assignments] = state(541);
	v->a[46][sym_file_redirect] = state(249);
	v->a[46][sym_arithmetic_expansion] = state(176);
	v->a[46][sym_concatenation] = state(250);
	v->a[46][sym_string] = state(176);
	v->a[46][sym_simple_expansion] = state(176);
	v->a[46][sym_expansion] = state(176);
	v->a[46][sym_command_substitution] = state(176);
	v->a[46][aux_sym_redirected_statement_repeat2] = state(577);
	v->a[46][aux_sym_command_repeat1] = state(183);
	v->a[46][sym_word] = actions(69);
	v->a[46][anon_sym_LBRACE] = actions(9);
	v->a[46][anon_sym_LPAREN] = actions(11);
	v->a[46][anon_sym_BANG] = actions(99);
	v->a[46][anon_sym_LT] = actions(73);
	v->a[46][anon_sym_GT] = actions(73);
	return (parse_table_91(v));
}

void	parse_table_91(t_parse_table_array *v)
{
	v->a[46][anon_sym_GT_GT] = actions(73);
	v->a[46][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[46][anon_sym_DOLLAR] = actions(77);
	v->a[46][anon_sym_DQUOTE] = actions(79);
	v->a[46][sym_raw_string] = actions(69);
	v->a[46][sym_number] = actions(69);
	v->a[46][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[46][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[46][anon_sym_BQUOTE] = actions(85);
	v->a[46][sym_comment] = actions(3);
	v->a[46][sym_variable_name] = actions(87);
	v->a[47][sym__statement_not_pipeline] = state(731);
	v->a[47][sym_redirected_statement] = state(731);
	v->a[47][sym_compound_statement] = state(731);
	v->a[47][sym_subshell] = state(731);
	v->a[47][sym_pipeline] = state(707);
	v->a[47][sym_list] = state(731);
	v->a[47][sym_negated_command] = state(731);
	v->a[47][sym_command] = state(731);
	v->a[47][sym_command_name] = state(130);
	return (parse_table_92(v));
}

void	parse_table_92(t_parse_table_array *v)
{
	v->a[47][sym_variable_assignment] = state(220);
	v->a[47][sym__variable_assignments] = state(731);
	v->a[47][sym_file_redirect] = state(397);
	v->a[47][sym_arithmetic_expansion] = state(274);
	v->a[47][sym_concatenation] = state(358);
	v->a[47][sym_string] = state(274);
	v->a[47][sym_simple_expansion] = state(274);
	v->a[47][sym_expansion] = state(274);
	v->a[47][sym_command_substitution] = state(274);
	v->a[47][aux_sym_redirected_statement_repeat2] = state(691);
	v->a[47][aux_sym_command_repeat1] = state(159);
	v->a[47][sym_word] = actions(139);
	v->a[47][anon_sym_LBRACE] = actions(141);
	v->a[47][anon_sym_LPAREN] = actions(143);
	v->a[47][anon_sym_BANG] = actions(145);
	v->a[47][anon_sym_LT] = actions(147);
	v->a[47][anon_sym_GT] = actions(147);
	v->a[47][anon_sym_GT_GT] = actions(147);
	v->a[47][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(149);
	v->a[47][anon_sym_DOLLAR] = actions(151);
	return (parse_table_93(v));
}

void	parse_table_93(t_parse_table_array *v)
{
	v->a[47][anon_sym_DQUOTE] = actions(153);
	v->a[47][sym_raw_string] = actions(139);
	v->a[47][sym_number] = actions(139);
	v->a[47][anon_sym_DOLLAR_LBRACE] = actions(155);
	v->a[47][anon_sym_DOLLAR_LPAREN] = actions(157);
	v->a[47][anon_sym_BQUOTE] = actions(159);
	v->a[47][sym_comment] = actions(3);
	v->a[47][sym_variable_name] = actions(161);
	v->a[48][sym__statement_not_pipeline] = state(766);
	v->a[48][sym_redirected_statement] = state(489);
	v->a[48][sym_compound_statement] = state(489);
	v->a[48][sym_subshell] = state(489);
	v->a[48][sym_pipeline] = state(507);
	v->a[48][sym_list] = state(489);
	v->a[48][sym_negated_command] = state(489);
	v->a[48][sym_command] = state(489);
	v->a[48][sym_command_name] = state(65);
	v->a[48][sym_variable_assignment] = state(104);
	v->a[48][sym__variable_assignments] = state(489);
	v->a[48][sym_file_redirect] = state(253);
	return (parse_table_94(v));
}

void	parse_table_94(t_parse_table_array *v)
{
	v->a[48][sym_arithmetic_expansion] = state(116);
	v->a[48][sym_concatenation] = state(254);
	v->a[48][sym_string] = state(116);
	v->a[48][sym_simple_expansion] = state(116);
	v->a[48][sym_expansion] = state(116);
	v->a[48][sym_command_substitution] = state(116);
	v->a[48][aux_sym_redirected_statement_repeat2] = state(557);
	v->a[48][aux_sym_command_repeat1] = state(193);
	v->a[48][sym_word] = actions(7);
	v->a[48][anon_sym_LBRACE] = actions(9);
	v->a[48][anon_sym_LPAREN] = actions(11);
	v->a[48][anon_sym_BANG] = actions(13);
	v->a[48][anon_sym_LT] = actions(15);
	v->a[48][anon_sym_GT] = actions(15);
	v->a[48][anon_sym_GT_GT] = actions(15);
	v->a[48][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(17);
	v->a[48][anon_sym_DOLLAR] = actions(19);
	v->a[48][anon_sym_DQUOTE] = actions(21);
	v->a[48][sym_raw_string] = actions(7);
	v->a[48][sym_number] = actions(7);
	return (parse_table_95(v));
}

/* EOF parse_table_18.c */
