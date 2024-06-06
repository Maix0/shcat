/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_32.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_160(t_parse_table_array *v)
{
	v->a[39][aux_sym_number_token2] = actions(99);
	v->a[39][anon_sym_DOLLAR_LBRACE] = actions(101);
	v->a[39][anon_sym_DOLLAR_LPAREN] = actions(103);
	v->a[39][anon_sym_BQUOTE] = actions(105);
	v->a[39][anon_sym_DOLLAR_BQUOTE] = actions(107);
	v->a[39][sym_comment] = actions(57);
	v->a[39][sym_file_descriptor] = actions(441);
	v->a[39][sym_variable_name] = actions(443);
	v->a[39][sym_test_operator] = actions(439);
	v->a[39][sym__brace_start] = actions(113);
	v->a[40][sym__statements] = state(4026);
	v->a[40][sym__statement_not_pipeline] = state(3480);
	v->a[40][sym_redirected_statement] = state(2098);
	v->a[40][sym_for_statement] = state(2098);
	v->a[40][sym_while_statement] = state(2098);
	v->a[40][sym_if_statement] = state(2098);
	v->a[40][sym_case_statement] = state(2098);
	v->a[40][sym_function_definition] = state(2098);
	v->a[40][sym_compound_statement] = state(2098);
	v->a[40][sym_subshell] = state(2098);
	parse_table_161(v);
}

void	parse_table_161(t_parse_table_array *v)
{
	v->a[40][sym_pipeline] = state(2384);
	v->a[40][sym_list] = state(2098);
	v->a[40][sym_negated_command] = state(2098);
	v->a[40][sym_declaration_command] = state(2098);
	v->a[40][sym_unset_command] = state(2098);
	v->a[40][sym_command] = state(2098);
	v->a[40][sym_command_name] = state(292);
	v->a[40][sym_variable_assignment] = state(539);
	v->a[40][sym_variable_assignments] = state(2098);
	v->a[40][sym_file_redirect] = state(1320);
	v->a[40][sym_arithmetic_expansion] = state(702);
	v->a[40][sym_brace_expression] = state(702);
	v->a[40][sym_concatenation] = state(1192);
	v->a[40][sym_string] = state(702);
	v->a[40][sym_number] = state(702);
	v->a[40][sym_simple_expansion] = state(702);
	v->a[40][sym_expansion] = state(702);
	v->a[40][sym_command_substitution] = state(702);
	v->a[40][aux_sym__statements_repeat1] = state(226);
	v->a[40][aux_sym_redirected_statement_repeat2] = state(2325);
	parse_table_162(v);
}

void	parse_table_162(t_parse_table_array *v)
{
	v->a[40][aux_sym_command_repeat1] = state(1041);
	v->a[40][aux_sym__literal_repeat1] = state(1048);
	v->a[40][sym_word] = actions(419);
	v->a[40][anon_sym_for] = actions(9);
	v->a[40][anon_sym_select] = actions(9);
	v->a[40][anon_sym_while] = actions(11);
	v->a[40][anon_sym_until] = actions(11);
	v->a[40][anon_sym_if] = actions(13);
	v->a[40][anon_sym_case] = actions(15);
	v->a[40][anon_sym_LPAREN] = actions(17);
	v->a[40][anon_sym_RPAREN] = actions(457);
	v->a[40][anon_sym_function] = actions(423);
	v->a[40][anon_sym_LBRACE] = actions(21);
	v->a[40][anon_sym_BANG] = actions(425);
	v->a[40][anon_sym_declare] = actions(427);
	v->a[40][anon_sym_typeset] = actions(427);
	v->a[40][anon_sym_export] = actions(427);
	v->a[40][anon_sym_readonly] = actions(427);
	v->a[40][anon_sym_local] = actions(427);
	v->a[40][anon_sym_unset] = actions(429);
	parse_table_163(v);
}

void	parse_table_163(t_parse_table_array *v)
{
	v->a[40][anon_sym_unsetenv] = actions(429);
	v->a[40][anon_sym_LT] = actions(431);
	v->a[40][anon_sym_GT] = actions(431);
	v->a[40][anon_sym_GT_GT] = actions(433);
	v->a[40][anon_sym_AMP_GT] = actions(431);
	v->a[40][anon_sym_AMP_GT_GT] = actions(433);
	v->a[40][anon_sym_LT_AMP] = actions(431);
	v->a[40][anon_sym_GT_AMP] = actions(431);
	v->a[40][anon_sym_GT_PIPE] = actions(433);
	v->a[40][anon_sym_LT_AMP_DASH] = actions(435);
	v->a[40][anon_sym_GT_AMP_DASH] = actions(435);
	v->a[40][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(87);
	v->a[40][anon_sym_DOLLAR] = actions(89);
	v->a[40][sym__special_character] = actions(437);
	v->a[40][anon_sym_DQUOTE] = actions(93);
	v->a[40][sym_raw_string] = actions(439);
	v->a[40][aux_sym_number_token1] = actions(97);
	v->a[40][aux_sym_number_token2] = actions(99);
	v->a[40][anon_sym_DOLLAR_LBRACE] = actions(101);
	v->a[40][anon_sym_DOLLAR_LPAREN] = actions(103);
	parse_table_164(v);
}

void	parse_table_164(t_parse_table_array *v)
{
	v->a[40][anon_sym_BQUOTE] = actions(105);
	v->a[40][anon_sym_DOLLAR_BQUOTE] = actions(107);
	v->a[40][sym_comment] = actions(57);
	v->a[40][sym_file_descriptor] = actions(441);
	v->a[40][sym_variable_name] = actions(443);
	v->a[40][sym_test_operator] = actions(439);
	v->a[40][sym__brace_start] = actions(113);
	v->a[41][sym__statements] = state(3814);
	v->a[41][sym__statement_not_pipeline] = state(3480);
	v->a[41][sym_redirected_statement] = state(2098);
	v->a[41][sym_for_statement] = state(2098);
	v->a[41][sym_while_statement] = state(2098);
	v->a[41][sym_if_statement] = state(2098);
	v->a[41][sym_case_statement] = state(2098);
	v->a[41][sym_function_definition] = state(2098);
	v->a[41][sym_compound_statement] = state(2098);
	v->a[41][sym_subshell] = state(2098);
	v->a[41][sym_pipeline] = state(2384);
	v->a[41][sym_list] = state(2098);
	v->a[41][sym_negated_command] = state(2098);
	parse_table_165(v);
}

/* EOF parse_table_32.c */
