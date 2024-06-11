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
	v->a[1][sym_redirected_statement] = state(1210);
	v->a[1][sym_for_statement] = state(1210);
	v->a[1][sym_while_statement] = state(1210);
	v->a[1][sym_if_statement] = state(1210);
	v->a[1][sym_case_statement] = state(1210);
	v->a[1][sym_function_definition] = state(1210);
	v->a[1][sym_compound_statement] = state(1210);
	v->a[1][sym_subshell] = state(1210);
	v->a[1][sym_pipeline] = state(1421);
	v->a[1][sym_list] = state(1210);
	v->a[1][sym_negated_command] = state(1210);
	v->a[1][sym_command] = state(1210);
	v->a[1][sym_command_name] = state(185);
	v->a[1][sym_variable_assignment] = state(259);
	v->a[1][sym_variable_assignments] = state(1210);
	v->a[1][sym_file_redirect] = state(760);
	v->a[1][sym_arithmetic_expansion] = state(291);
	v->a[1][sym_concatenation] = state(639);
	v->a[1][sym_string] = state(291);
	v->a[1][sym_simple_expansion] = state(291);
	parse_table_6(v);
}

void	parse_table_6(t_parse_table_array *v)
{
	v->a[1][sym_expansion] = state(291);
	v->a[1][sym_command_substitution] = state(291);
	v->a[1][aux_sym__statements_repeat1] = state(137);
	v->a[1][aux_sym_redirected_statement_repeat2] = state(1419);
	v->a[1][aux_sym_command_repeat1] = state(745);
	v->a[1][ts_builtin_sym_end] = actions(5);
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
	v->a[1][anon_sym_AMP_GT] = actions(23);
	v->a[1][anon_sym_AMP_GT_GT] = actions(23);
	parse_table_7(v);
}

void	parse_table_7(t_parse_table_array *v)
{
	v->a[1][anon_sym_LT_AMP] = actions(23);
	v->a[1][anon_sym_GT_AMP] = actions(23);
	v->a[1][anon_sym_GT_PIPE] = actions(23);
	v->a[1][anon_sym_LT_AMP_DASH] = actions(25);
	v->a[1][anon_sym_GT_AMP_DASH] = actions(25);
	v->a[1][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(27);
	v->a[1][anon_sym_DOLLAR] = actions(29);
	v->a[1][anon_sym_DQUOTE] = actions(31);
	v->a[1][sym_raw_string] = actions(33);
	v->a[1][sym_number] = actions(33);
	v->a[1][anon_sym_DOLLAR_LBRACE] = actions(35);
	v->a[1][anon_sym_DOLLAR_LPAREN] = actions(37);
	v->a[1][anon_sym_BQUOTE] = actions(39);
	v->a[1][sym_comment] = actions(3);
	v->a[1][sym_file_descriptor] = actions(41);
	v->a[1][sym_variable_name] = actions(43);
}

/* EOF parse_table_1.c */
