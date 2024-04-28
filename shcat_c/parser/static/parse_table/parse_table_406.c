/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_406.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_2030(t_parse_table_array *v)
{
	v->a[448][sym__statement_not_pipeline] = state(4794);
	v->a[448][sym_redirected_statement] = state(4794);
	v->a[448][sym_for_statement] = state(4794);
	v->a[448][sym_c_style_for_statement] = state(4794);
	v->a[448][sym_while_statement] = state(4381);
	v->a[448][sym_if_statement] = state(4381);
	v->a[448][sym_case_statement] = state(4794);
	v->a[448][sym_function_definition] = state(4794);
	v->a[448][sym_compound_statement] = state(4794);
	v->a[448][sym_subshell] = state(4794);
	v->a[448][sym_pipeline] = state(5557);
	v->a[448][sym_list] = state(4794);
	v->a[448][sym_negated_command] = state(4794);
	v->a[448][sym_test_command] = state(4794);
	v->a[448][sym_declaration_command] = state(4794);
	v->a[448][sym_unset_command] = state(4794);
	v->a[448][sym_command] = state(4794);
	v->a[448][sym_command_name] = state(534);
	v->a[448][sym_variable_assignment] = state(986);
	v->a[448][sym_variable_assignments] = state(4794);
	parse_table_2031(v);
}

void	parse_table_2031(t_parse_table_array *v)
{
	v->a[448][sym_subscript] = state(6774);
	v->a[448][sym_file_redirect] = state(2055);
	v->a[448][sym_herestring_redirect] = state(2156);
	v->a[448][sym_arithmetic_expansion] = state(957);
	v->a[448][sym_brace_expression] = state(957);
	v->a[448][sym_concatenation] = state(1386);
	v->a[448][sym_string] = state(957);
	v->a[448][sym_translated_string] = state(957);
	v->a[448][sym_number] = state(957);
	v->a[448][sym_simple_expansion] = state(957);
	v->a[448][sym_expansion] = state(957);
	v->a[448][sym_command_substitution] = state(957);
	v->a[448][sym_process_substitution] = state(957);
	v->a[448][aux_sym_redirected_statement_repeat2] = state(4571);
	v->a[448][aux_sym_command_repeat1] = state(937);
	v->a[448][aux_sym__literal_repeat1] = state(1212);
	v->a[448][sym_word] = actions(7);
	v->a[448][anon_sym_for] = actions(9);
	v->a[448][anon_sym_select] = actions(11);
	v->a[448][anon_sym_LPAREN_LPAREN] = actions(13);
	parse_table_2032(v);
}

void	parse_table_2032(t_parse_table_array *v)
{
	v->a[448][anon_sym_LT] = actions(15);
	v->a[448][anon_sym_GT] = actions(15);
	v->a[448][anon_sym_GT_GT] = actions(17);
	v->a[448][anon_sym_LPAREN] = actions(19);
	v->a[448][anon_sym_while] = actions(21);
	v->a[448][anon_sym_until] = actions(21);
	v->a[448][anon_sym_if] = actions(23);
	v->a[448][anon_sym_case] = actions(25);
	v->a[448][anon_sym_function] = actions(27);
	v->a[448][anon_sym_LBRACE] = actions(29);
	v->a[448][anon_sym_BANG] = actions(31);
	v->a[448][anon_sym_LBRACK] = actions(33);
	v->a[448][anon_sym_LBRACK_LBRACK] = actions(35);
	v->a[448][anon_sym_declare] = actions(37);
	v->a[448][anon_sym_typeset] = actions(37);
	v->a[448][anon_sym_export] = actions(37);
	v->a[448][anon_sym_readonly] = actions(37);
	v->a[448][anon_sym_local] = actions(37);
	v->a[448][anon_sym_unset] = actions(39);
	v->a[448][anon_sym_unsetenv] = actions(39);
	parse_table_2033(v);
}

void	parse_table_2033(t_parse_table_array *v)
{
	v->a[448][anon_sym_AMP_GT] = actions(15);
	v->a[448][anon_sym_AMP_GT_GT] = actions(17);
	v->a[448][anon_sym_LT_AMP] = actions(15);
	v->a[448][anon_sym_GT_AMP] = actions(15);
	v->a[448][anon_sym_GT_PIPE] = actions(17);
	v->a[448][anon_sym_LT_AMP_DASH] = actions(41);
	v->a[448][anon_sym_GT_AMP_DASH] = actions(41);
	v->a[448][anon_sym_LT_LT_LT] = actions(43);
	v->a[448][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(45);
	v->a[448][anon_sym_DOLLAR_LBRACK] = actions(47);
	v->a[448][anon_sym_DOLLAR] = actions(49);
	v->a[448][sym__special_character] = actions(51);
	v->a[448][anon_sym_DQUOTE] = actions(53);
	v->a[448][sym_raw_string] = actions(55);
	v->a[448][sym_ansi_c_string] = actions(55);
	v->a[448][aux_sym_number_token1] = actions(57);
	v->a[448][aux_sym_number_token2] = actions(59);
	v->a[448][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[448][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[448][anon_sym_BQUOTE] = actions(65);
	parse_table_2034(v);
}

void	parse_table_2034(t_parse_table_array *v)
{
	v->a[448][anon_sym_DOLLAR_BQUOTE] = actions(67);
	v->a[448][anon_sym_LT_LPAREN] = actions(69);
	v->a[448][anon_sym_GT_LPAREN] = actions(69);
	v->a[448][sym_comment] = actions(71);
	v->a[448][sym_file_descriptor] = actions(73);
	v->a[448][sym_variable_name] = actions(75);
	v->a[448][sym_test_operator] = actions(77);
	v->a[448][sym__brace_start] = actions(79);
	v->a[449][sym__statement_not_pipeline] = state(6558);
	v->a[449][sym_redirected_statement] = state(4722);
	v->a[449][sym_for_statement] = state(4722);
	v->a[449][sym_c_style_for_statement] = state(4722);
	v->a[449][sym_while_statement] = state(4289);
	v->a[449][sym_if_statement] = state(4289);
	v->a[449][sym_case_statement] = state(4722);
	v->a[449][sym_function_definition] = state(4722);
	v->a[449][sym_compound_statement] = state(4722);
	v->a[449][sym_subshell] = state(4722);
	v->a[449][sym_pipeline] = state(4724);
	v->a[449][sym_list] = state(4722);
	parse_table_2035(v);
}

/* EOF parse_table_406.c */
