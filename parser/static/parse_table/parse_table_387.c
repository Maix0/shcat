/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_387.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1935(t_parse_table_array *v)
{
	v->a[426][anon_sym_GT_GT] = actions(675);
	v->a[426][anon_sym_LPAREN] = actions(677);
	v->a[426][anon_sym_while] = actions(679);
	v->a[426][anon_sym_until] = actions(679);
	v->a[426][anon_sym_if] = actions(681);
	v->a[426][anon_sym_case] = actions(683);
	v->a[426][anon_sym_function] = actions(687);
	v->a[426][anon_sym_LBRACE] = actions(689);
	v->a[426][anon_sym_BANG] = actions(691);
	v->a[426][anon_sym_LBRACK] = actions(693);
	v->a[426][anon_sym_LBRACK_LBRACK] = actions(695);
	v->a[426][anon_sym_declare] = actions(697);
	v->a[426][anon_sym_typeset] = actions(697);
	v->a[426][anon_sym_export] = actions(697);
	v->a[426][anon_sym_readonly] = actions(697);
	v->a[426][anon_sym_local] = actions(697);
	v->a[426][anon_sym_unset] = actions(699);
	v->a[426][anon_sym_unsetenv] = actions(699);
	v->a[426][anon_sym_AMP_GT] = actions(673);
	v->a[426][anon_sym_AMP_GT_GT] = actions(675);
	parse_table_1936(v);
}

void	parse_table_1936(t_parse_table_array *v)
{
	v->a[426][anon_sym_LT_AMP] = actions(673);
	v->a[426][anon_sym_GT_AMP] = actions(673);
	v->a[426][anon_sym_GT_PIPE] = actions(675);
	v->a[426][anon_sym_LT_AMP_DASH] = actions(701);
	v->a[426][anon_sym_GT_AMP_DASH] = actions(701);
	v->a[426][anon_sym_LT_LT_LT] = actions(703);
	v->a[426][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(705);
	v->a[426][anon_sym_DOLLAR_LBRACK] = actions(707);
	v->a[426][anon_sym_DOLLAR] = actions(709);
	v->a[426][sym__special_character] = actions(711);
	v->a[426][anon_sym_DQUOTE] = actions(713);
	v->a[426][sym_raw_string] = actions(715);
	v->a[426][sym_ansi_c_string] = actions(715);
	v->a[426][aux_sym_number_token1] = actions(717);
	v->a[426][aux_sym_number_token2] = actions(719);
	v->a[426][anon_sym_DOLLAR_LBRACE] = actions(721);
	v->a[426][anon_sym_DOLLAR_LPAREN] = actions(723);
	v->a[426][anon_sym_BQUOTE] = actions(725);
	v->a[426][anon_sym_DOLLAR_BQUOTE] = actions(727);
	v->a[426][anon_sym_LT_LPAREN] = actions(729);
	parse_table_1937(v);
}

void	parse_table_1937(t_parse_table_array *v)
{
	v->a[426][anon_sym_GT_LPAREN] = actions(729);
	v->a[426][sym_comment] = actions(71);
	v->a[426][sym_file_descriptor] = actions(731);
	v->a[426][sym_variable_name] = actions(733);
	v->a[426][sym_test_operator] = actions(735);
	v->a[426][sym__brace_start] = actions(737);
	v->a[427][sym__statement_not_pipeline] = state(6572);
	v->a[427][sym_redirected_statement] = state(4663);
	v->a[427][sym_for_statement] = state(4663);
	v->a[427][sym_c_style_for_statement] = state(4663);
	v->a[427][sym_while_statement] = state(4312);
	v->a[427][sym_if_statement] = state(4312);
	v->a[427][sym_case_statement] = state(4663);
	v->a[427][sym_function_definition] = state(4663);
	v->a[427][sym_compound_statement] = state(4663);
	v->a[427][sym_subshell] = state(4663);
	v->a[427][sym_pipeline] = state(5108);
	v->a[427][sym_list] = state(4663);
	v->a[427][sym_negated_command] = state(4663);
	v->a[427][sym_test_command] = state(4663);
	parse_table_1938(v);
}

void	parse_table_1938(t_parse_table_array *v)
{
	v->a[427][sym_declaration_command] = state(4663);
	v->a[427][sym_unset_command] = state(4663);
	v->a[427][sym_command] = state(4663);
	v->a[427][sym_command_name] = state(534);
	v->a[427][sym_variable_assignment] = state(991);
	v->a[427][sym_variable_assignments] = state(4663);
	v->a[427][sym_subscript] = state(6774);
	v->a[427][sym_file_redirect] = state(2055);
	v->a[427][sym_herestring_redirect] = state(2156);
	v->a[427][sym_arithmetic_expansion] = state(957);
	v->a[427][sym_brace_expression] = state(957);
	v->a[427][sym_concatenation] = state(1386);
	v->a[427][sym_string] = state(957);
	v->a[427][sym_translated_string] = state(957);
	v->a[427][sym_number] = state(957);
	v->a[427][sym_simple_expansion] = state(957);
	v->a[427][sym_expansion] = state(957);
	v->a[427][sym_command_substitution] = state(957);
	v->a[427][sym_process_substitution] = state(957);
	v->a[427][aux_sym__statements_repeat1] = state(419);
	parse_table_1939(v);
}

void	parse_table_1939(t_parse_table_array *v)
{
	v->a[427][aux_sym_redirected_statement_repeat2] = state(4571);
	v->a[427][aux_sym_command_repeat1] = state(937);
	v->a[427][aux_sym__literal_repeat1] = state(1212);
	v->a[427][sym_word] = actions(7);
	v->a[427][anon_sym_for] = actions(9);
	v->a[427][anon_sym_select] = actions(11);
	v->a[427][anon_sym_LPAREN_LPAREN] = actions(13);
	v->a[427][anon_sym_LT] = actions(15);
	v->a[427][anon_sym_GT] = actions(15);
	v->a[427][anon_sym_GT_GT] = actions(17);
	v->a[427][anon_sym_LPAREN] = actions(19);
	v->a[427][anon_sym_while] = actions(21);
	v->a[427][anon_sym_until] = actions(21);
	v->a[427][anon_sym_if] = actions(23);
	v->a[427][anon_sym_case] = actions(25);
	v->a[427][anon_sym_function] = actions(27);
	v->a[427][anon_sym_LBRACE] = actions(29);
	v->a[427][anon_sym_BANG] = actions(31);
	v->a[427][anon_sym_LBRACK] = actions(33);
	v->a[427][anon_sym_LBRACK_LBRACK] = actions(35);
	parse_table_1940(v);
}

/* EOF parse_table_387.c */
