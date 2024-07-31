/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_5(t_parse_table_array *v)
{
	v->a[1][sym_compound_statement] = state(820);
	v->a[1][sym_subshell] = state(820);
	v->a[1][sym_pipeline] = state(940);
	v->a[1][sym_list] = state(820);
	v->a[1][sym_negated_command] = state(820);
	v->a[1][sym_command] = state(820);
	v->a[1][sym_command_name] = state(213);
	v->a[1][sym_variable_assignment] = state(276);
	v->a[1][sym__variable_assignments] = state(820);
	v->a[1][sym_file_redirect] = state(566);
	v->a[1][sym_arithmetic_expansion] = state(329);
	v->a[1][sym_concatenation] = state(569);
	v->a[1][sym_string] = state(329);
	v->a[1][sym_simple_expansion] = state(329);
	v->a[1][sym_expansion] = state(329);
	v->a[1][sym_command_substitution] = state(329);
	v->a[1][aux_sym__statements_repeat1] = state(109);
	v->a[1][aux_sym_redirected_statement_repeat2] = state(1004);
	v->a[1][aux_sym_command_repeat1] = state(542);
	v->a[1][ts_builtin_sym_end] = actions(5);
	parse_table_6(v);
}

void	parse_table_6(t_parse_table_array *v)
{
	v->a[1][sym_word] = actions(7);
	v->a[1][anon_sym_for] = actions(9);
	v->a[1][anon_sym_while] = actions(11);
	v->a[1][anon_sym_until] = actions(11);
	v->a[1][anon_sym_if] = actions(13);
	v->a[1][anon_sym_case] = actions(15);
	v->a[1][anon_sym_LPAREN] = actions(17);
	v->a[1][anon_sym_LBRACE] = actions(19);
	v->a[1][anon_sym_BANG] = actions(21);
	v->a[1][anon_sym_LT] = actions(23);
	v->a[1][anon_sym_GT] = actions(23);
	v->a[1][anon_sym_GT_GT] = actions(23);
	v->a[1][anon_sym_LT_AMP] = actions(23);
	v->a[1][anon_sym_GT_AMP] = actions(23);
	v->a[1][anon_sym_GT_PIPE] = actions(23);
	v->a[1][anon_sym_LT_GT] = actions(23);
	v->a[1][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(25);
	v->a[1][anon_sym_DOLLAR] = actions(27);
	v->a[1][anon_sym_DQUOTE] = actions(29);
	v->a[1][sym_raw_string] = actions(31);
	parse_table_7(v);
}

void	parse_table_7(t_parse_table_array *v)
{
	v->a[1][sym_number] = actions(31);
	v->a[1][anon_sym_DOLLAR_LBRACE] = actions(33);
	v->a[1][anon_sym_DOLLAR_LPAREN] = actions(35);
	v->a[1][anon_sym_BQUOTE] = actions(37);
	v->a[1][sym_comment] = actions(3);
	v->a[1][sym_variable_name] = actions(39);
}

/* EOF parse_table_1.c */
