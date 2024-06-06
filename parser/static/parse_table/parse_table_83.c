/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_83.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_415(t_parse_table_array *v)
{
	v->a[106][anon_sym_BQUOTE] = actions(105);
	v->a[106][anon_sym_DOLLAR_BQUOTE] = actions(107);
	v->a[106][sym_comment] = actions(57);
	v->a[106][sym_file_descriptor] = actions(441);
	v->a[106][sym_variable_name] = actions(443);
	v->a[106][sym_test_operator] = actions(439);
	v->a[106][sym__brace_start] = actions(113);
	v->a[107][sym__statements] = state(3823);
	v->a[107][sym__statement_not_pipeline] = state(3476);
	v->a[107][sym_redirected_statement] = state(2121);
	v->a[107][sym_for_statement] = state(2121);
	v->a[107][sym_while_statement] = state(2121);
	v->a[107][sym_if_statement] = state(2121);
	v->a[107][sym_case_statement] = state(2121);
	v->a[107][sym_function_definition] = state(2121);
	v->a[107][sym_compound_statement] = state(2121);
	v->a[107][sym_subshell] = state(2121);
	v->a[107][sym_pipeline] = state(2499);
	v->a[107][sym_list] = state(2121);
	v->a[107][sym_negated_command] = state(2121);
	parse_table_416(v);
}

void	parse_table_416(t_parse_table_array *v)
{
	v->a[107][sym_declaration_command] = state(2121);
	v->a[107][sym_unset_command] = state(2121);
	v->a[107][sym_command] = state(2121);
	v->a[107][sym_command_name] = state(340);
	v->a[107][sym_variable_assignment] = state(709);
	v->a[107][sym_variable_assignments] = state(2121);
	v->a[107][sym_file_redirect] = state(1361);
	v->a[107][sym_arithmetic_expansion] = state(834);
	v->a[107][sym_brace_expression] = state(834);
	v->a[107][sym_concatenation] = state(1192);
	v->a[107][sym_string] = state(834);
	v->a[107][sym_number] = state(834);
	v->a[107][sym_simple_expansion] = state(834);
	v->a[107][sym_expansion] = state(834);
	v->a[107][sym_command_substitution] = state(834);
	v->a[107][aux_sym__statements_repeat1] = state(236);
	v->a[107][aux_sym_redirected_statement_repeat2] = state(2191);
	v->a[107][aux_sym_command_repeat1] = state(1008);
	v->a[107][aux_sym__literal_repeat1] = state(1048);
	v->a[107][sym_word] = actions(467);
	parse_table_417(v);
}

void	parse_table_417(t_parse_table_array *v)
{
	v->a[107][anon_sym_for] = actions(9);
	v->a[107][anon_sym_select] = actions(9);
	v->a[107][anon_sym_while] = actions(11);
	v->a[107][anon_sym_until] = actions(11);
	v->a[107][anon_sym_if] = actions(13);
	v->a[107][anon_sym_case] = actions(15);
	v->a[107][anon_sym_LPAREN] = actions(17);
	v->a[107][anon_sym_function] = actions(469);
	v->a[107][anon_sym_LBRACE] = actions(21);
	v->a[107][anon_sym_BANG] = actions(471);
	v->a[107][anon_sym_declare] = actions(473);
	v->a[107][anon_sym_typeset] = actions(473);
	v->a[107][anon_sym_export] = actions(473);
	v->a[107][anon_sym_readonly] = actions(473);
	v->a[107][anon_sym_local] = actions(473);
	v->a[107][anon_sym_unset] = actions(475);
	v->a[107][anon_sym_unsetenv] = actions(475);
	v->a[107][anon_sym_LT] = actions(81);
	v->a[107][anon_sym_GT] = actions(81);
	v->a[107][anon_sym_GT_GT] = actions(83);
	parse_table_418(v);
}

void	parse_table_418(t_parse_table_array *v)
{
	v->a[107][anon_sym_AMP_GT] = actions(81);
	v->a[107][anon_sym_AMP_GT_GT] = actions(83);
	v->a[107][anon_sym_LT_AMP] = actions(81);
	v->a[107][anon_sym_GT_AMP] = actions(81);
	v->a[107][anon_sym_GT_PIPE] = actions(83);
	v->a[107][anon_sym_LT_AMP_DASH] = actions(85);
	v->a[107][anon_sym_GT_AMP_DASH] = actions(85);
	v->a[107][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(87);
	v->a[107][anon_sym_DOLLAR] = actions(89);
	v->a[107][sym__special_character] = actions(91);
	v->a[107][anon_sym_DQUOTE] = actions(93);
	v->a[107][sym_raw_string] = actions(95);
	v->a[107][aux_sym_number_token1] = actions(97);
	v->a[107][aux_sym_number_token2] = actions(99);
	v->a[107][anon_sym_DOLLAR_LBRACE] = actions(101);
	v->a[107][anon_sym_DOLLAR_LPAREN] = actions(103);
	v->a[107][anon_sym_BQUOTE] = actions(105);
	v->a[107][anon_sym_DOLLAR_BQUOTE] = actions(107);
	v->a[107][sym_comment] = actions(57);
	v->a[107][sym_file_descriptor] = actions(109);
	parse_table_419(v);
}

void	parse_table_419(t_parse_table_array *v)
{
	v->a[107][sym_variable_name] = actions(111);
	v->a[107][sym_test_operator] = actions(95);
	v->a[107][sym__brace_start] = actions(113);
	v->a[108][sym__statements] = state(3822);
	v->a[108][sym__statement_not_pipeline] = state(3476);
	v->a[108][sym_redirected_statement] = state(2121);
	v->a[108][sym_for_statement] = state(2121);
	v->a[108][sym_while_statement] = state(2121);
	v->a[108][sym_if_statement] = state(2121);
	v->a[108][sym_case_statement] = state(2121);
	v->a[108][sym_function_definition] = state(2121);
	v->a[108][sym_compound_statement] = state(2121);
	v->a[108][sym_subshell] = state(2121);
	v->a[108][sym_pipeline] = state(2499);
	v->a[108][sym_list] = state(2121);
	v->a[108][sym_negated_command] = state(2121);
	v->a[108][sym_declaration_command] = state(2121);
	v->a[108][sym_unset_command] = state(2121);
	v->a[108][sym_command] = state(2121);
	v->a[108][sym_command_name] = state(340);
	parse_table_420(v);
}

/* EOF parse_table_83.c */
