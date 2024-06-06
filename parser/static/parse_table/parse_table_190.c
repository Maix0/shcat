/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_190.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_950(t_parse_table_array *v)
{
	v->a[248][sym_list] = state(2614);
	v->a[248][sym_negated_command] = state(2614);
	v->a[248][sym_declaration_command] = state(2614);
	v->a[248][sym_unset_command] = state(2614);
	v->a[248][sym_command] = state(2614);
	v->a[248][sym_command_name] = state(426);
	v->a[248][sym_variable_assignment] = state(1195);
	v->a[248][sym_variable_assignments] = state(2614);
	v->a[248][sym_file_redirect] = state(1320);
	v->a[248][sym_arithmetic_expansion] = state(1264);
	v->a[248][sym_brace_expression] = state(1264);
	v->a[248][sym_concatenation] = state(1192);
	v->a[248][sym_string] = state(1264);
	v->a[248][sym_number] = state(1264);
	v->a[248][sym_simple_expansion] = state(1264);
	v->a[248][sym_expansion] = state(1264);
	v->a[248][sym_command_substitution] = state(1264);
	v->a[248][aux_sym_redirected_statement_repeat2] = state(2657);
	v->a[248][aux_sym_command_repeat1] = state(1154);
	v->a[248][aux_sym__literal_repeat1] = state(1048);
	parse_table_951(v);
}

void	parse_table_951(t_parse_table_array *v)
{
	v->a[248][sym_word] = actions(609);
	v->a[248][anon_sym_for] = actions(9);
	v->a[248][anon_sym_select] = actions(9);
	v->a[248][anon_sym_while] = actions(11);
	v->a[248][anon_sym_until] = actions(11);
	v->a[248][anon_sym_if] = actions(13);
	v->a[248][anon_sym_case] = actions(15);
	v->a[248][anon_sym_LPAREN] = actions(17);
	v->a[248][anon_sym_function] = actions(611);
	v->a[248][anon_sym_LBRACE] = actions(21);
	v->a[248][anon_sym_BANG] = actions(613);
	v->a[248][anon_sym_declare] = actions(615);
	v->a[248][anon_sym_typeset] = actions(615);
	v->a[248][anon_sym_export] = actions(615);
	v->a[248][anon_sym_readonly] = actions(615);
	v->a[248][anon_sym_local] = actions(615);
	v->a[248][anon_sym_unset] = actions(617);
	v->a[248][anon_sym_unsetenv] = actions(617);
	v->a[248][anon_sym_LT] = actions(619);
	v->a[248][anon_sym_GT] = actions(619);
	parse_table_952(v);
}

void	parse_table_952(t_parse_table_array *v)
{
	v->a[248][anon_sym_GT_GT] = actions(621);
	v->a[248][anon_sym_AMP_GT] = actions(619);
	v->a[248][anon_sym_AMP_GT_GT] = actions(621);
	v->a[248][anon_sym_LT_AMP] = actions(619);
	v->a[248][anon_sym_GT_AMP] = actions(619);
	v->a[248][anon_sym_GT_PIPE] = actions(621);
	v->a[248][anon_sym_LT_AMP_DASH] = actions(623);
	v->a[248][anon_sym_GT_AMP_DASH] = actions(623);
	v->a[248][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(87);
	v->a[248][anon_sym_DOLLAR] = actions(89);
	v->a[248][sym__special_character] = actions(625);
	v->a[248][anon_sym_DQUOTE] = actions(93);
	v->a[248][sym_raw_string] = actions(627);
	v->a[248][aux_sym_number_token1] = actions(97);
	v->a[248][aux_sym_number_token2] = actions(99);
	v->a[248][anon_sym_DOLLAR_LBRACE] = actions(101);
	v->a[248][anon_sym_DOLLAR_LPAREN] = actions(103);
	v->a[248][anon_sym_BQUOTE] = actions(105);
	v->a[248][anon_sym_DOLLAR_BQUOTE] = actions(107);
	v->a[248][sym_comment] = actions(57);
	parse_table_953(v);
}

void	parse_table_953(t_parse_table_array *v)
{
	v->a[248][sym_file_descriptor] = actions(629);
	v->a[248][sym_variable_name] = actions(631);
	v->a[248][sym_test_operator] = actions(627);
	v->a[248][sym__brace_start] = actions(113);
	v->a[249][sym__statement_not_pipeline] = state(2069);
	v->a[249][sym_redirected_statement] = state(2069);
	v->a[249][sym_for_statement] = state(2069);
	v->a[249][sym_while_statement] = state(2069);
	v->a[249][sym_if_statement] = state(2069);
	v->a[249][sym_case_statement] = state(2069);
	v->a[249][sym_function_definition] = state(2069);
	v->a[249][sym_compound_statement] = state(2069);
	v->a[249][sym_subshell] = state(2069);
	v->a[249][sym_pipeline] = state(2713);
	v->a[249][sym_list] = state(2069);
	v->a[249][sym_negated_command] = state(2069);
	v->a[249][sym_declaration_command] = state(2069);
	v->a[249][sym_unset_command] = state(2069);
	v->a[249][sym_command] = state(2069);
	v->a[249][sym_command_name] = state(292);
	parse_table_954(v);
}

void	parse_table_954(t_parse_table_array *v)
{
	v->a[249][sym_variable_assignment] = state(548);
	v->a[249][sym_variable_assignments] = state(2069);
	v->a[249][sym_file_redirect] = state(1320);
	v->a[249][sym_arithmetic_expansion] = state(702);
	v->a[249][sym_brace_expression] = state(702);
	v->a[249][sym_concatenation] = state(1192);
	v->a[249][sym_string] = state(702);
	v->a[249][sym_number] = state(702);
	v->a[249][sym_simple_expansion] = state(702);
	v->a[249][sym_expansion] = state(702);
	v->a[249][sym_command_substitution] = state(702);
	v->a[249][aux_sym_redirected_statement_repeat2] = state(2325);
	v->a[249][aux_sym_command_repeat1] = state(1041);
	v->a[249][aux_sym__literal_repeat1] = state(1048);
	v->a[249][sym_word] = actions(419);
	v->a[249][anon_sym_for] = actions(9);
	v->a[249][anon_sym_select] = actions(9);
	v->a[249][anon_sym_while] = actions(11);
	v->a[249][anon_sym_until] = actions(11);
	v->a[249][anon_sym_if] = actions(13);
	parse_table_955(v);
}

/* EOF parse_table_190.c */
