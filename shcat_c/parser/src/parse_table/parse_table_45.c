/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_45.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_225(t_parse_table_array *v)
{
	v->a[46][anon_sym_LBRACE] = actions(689);
	v->a[46][anon_sym_BANG] = actions(691);
	v->a[46][anon_sym_LBRACK] = actions(693);
	v->a[46][anon_sym_LBRACK_LBRACK] = actions(695);
	v->a[46][anon_sym_declare] = actions(697);
	v->a[46][anon_sym_typeset] = actions(697);
	v->a[46][anon_sym_export] = actions(697);
	v->a[46][anon_sym_readonly] = actions(697);
	v->a[46][anon_sym_local] = actions(697);
	v->a[46][anon_sym_unset] = actions(699);
	v->a[46][anon_sym_unsetenv] = actions(699);
	v->a[46][anon_sym_AMP_GT] = actions(673);
	v->a[46][anon_sym_AMP_GT_GT] = actions(675);
	v->a[46][anon_sym_LT_AMP] = actions(673);
	v->a[46][anon_sym_GT_AMP] = actions(673);
	v->a[46][anon_sym_GT_PIPE] = actions(675);
	v->a[46][anon_sym_LT_AMP_DASH] = actions(701);
	v->a[46][anon_sym_GT_AMP_DASH] = actions(701);
	v->a[46][anon_sym_LT_LT_LT] = actions(703);
	v->a[46][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(705);
	parse_table_226(v);
}

void	parse_table_226(t_parse_table_array *v)
{
	v->a[46][anon_sym_DOLLAR_LBRACK] = actions(707);
	v->a[46][anon_sym_DOLLAR] = actions(709);
	v->a[46][sym__special_character] = actions(711);
	v->a[46][anon_sym_DQUOTE] = actions(713);
	v->a[46][sym_raw_string] = actions(715);
	v->a[46][sym_ansi_c_string] = actions(715);
	v->a[46][aux_sym_number_token1] = actions(717);
	v->a[46][aux_sym_number_token2] = actions(719);
	v->a[46][anon_sym_DOLLAR_LBRACE] = actions(721);
	v->a[46][anon_sym_DOLLAR_LPAREN] = actions(723);
	v->a[46][anon_sym_BQUOTE] = actions(725);
	v->a[46][anon_sym_DOLLAR_BQUOTE] = actions(727);
	v->a[46][anon_sym_LT_LPAREN] = actions(729);
	v->a[46][anon_sym_GT_LPAREN] = actions(729);
	v->a[46][sym_comment] = actions(71);
	v->a[46][sym_file_descriptor] = actions(731);
	v->a[46][sym_variable_name] = actions(733);
	v->a[46][sym_test_operator] = actions(735);
	v->a[46][sym__brace_start] = actions(737);
	v->a[47][aux_sym__terminated_statement] = state(34);
	parse_table_227(v);
}

void	parse_table_227(t_parse_table_array *v)
{
	v->a[47][sym__statement_not_pipeline] = state(6718);
	v->a[47][sym_redirected_statement] = state(5007);
	v->a[47][sym_for_statement] = state(5007);
	v->a[47][sym_c_style_for_statement] = state(5007);
	v->a[47][sym_while_statement] = state(4551);
	v->a[47][sym_if_statement] = state(4551);
	v->a[47][sym_case_statement] = state(5007);
	v->a[47][sym_function_definition] = state(5007);
	v->a[47][sym_compound_statement] = state(5007);
	v->a[47][sym_subshell] = state(5007);
	v->a[47][sym_pipeline] = state(5189);
	v->a[47][sym_list] = state(5007);
	v->a[47][sym_negated_command] = state(5007);
	v->a[47][sym_test_command] = state(5007);
	v->a[47][sym_declaration_command] = state(5007);
	v->a[47][sym_unset_command] = state(5007);
	v->a[47][sym_command] = state(5007);
	v->a[47][sym_command_name] = state(544);
	v->a[47][sym_variable_assignment] = state(1151);
	v->a[47][sym_variable_assignments] = state(5007);
	parse_table_228(v);
}

void	parse_table_228(t_parse_table_array *v)
{
	v->a[47][sym_subscript] = state(6790);
	v->a[47][sym_file_redirect] = state(2019);
	v->a[47][sym_herestring_redirect] = state(2017);
	v->a[47][sym_arithmetic_expansion] = state(1078);
	v->a[47][sym_brace_expression] = state(1078);
	v->a[47][sym_concatenation] = state(1376);
	v->a[47][sym_string] = state(1078);
	v->a[47][sym_translated_string] = state(1078);
	v->a[47][sym_number] = state(1078);
	v->a[47][sym_simple_expansion] = state(1078);
	v->a[47][sym_expansion] = state(1078);
	v->a[47][sym_command_substitution] = state(1078);
	v->a[47][sym_process_substitution] = state(1078);
	v->a[47][aux_sym_redirected_statement_repeat2] = state(4644);
	v->a[47][aux_sym_command_repeat1] = state(997);
	v->a[47][aux_sym__literal_repeat1] = state(1267);
	v->a[47][sym_word] = actions(286);
	v->a[47][anon_sym_for] = actions(9);
	v->a[47][anon_sym_select] = actions(11);
	v->a[47][anon_sym_LPAREN_LPAREN] = actions(288);
	parse_table_229(v);
}

void	parse_table_229(t_parse_table_array *v)
{
	v->a[47][anon_sym_LT] = actions(290);
	v->a[47][anon_sym_GT] = actions(290);
	v->a[47][anon_sym_GT_GT] = actions(292);
	v->a[47][anon_sym_LPAREN] = actions(19);
	v->a[47][anon_sym_while] = actions(21);
	v->a[47][anon_sym_until] = actions(21);
	v->a[47][anon_sym_if] = actions(23);
	v->a[47][anon_sym_fi] = actions(761);
	v->a[47][anon_sym_elif] = actions(761);
	v->a[47][anon_sym_else] = actions(761);
	v->a[47][anon_sym_case] = actions(25);
	v->a[47][anon_sym_function] = actions(300);
	v->a[47][anon_sym_LBRACE] = actions(29);
	v->a[47][anon_sym_BANG] = actions(302);
	v->a[47][anon_sym_LBRACK] = actions(33);
	v->a[47][anon_sym_LBRACK_LBRACK] = actions(35);
	v->a[47][anon_sym_declare] = actions(304);
	v->a[47][anon_sym_typeset] = actions(304);
	v->a[47][anon_sym_export] = actions(304);
	v->a[47][anon_sym_readonly] = actions(304);
	parse_table_230(v);
}

/* EOF parse_table_45.c */
