/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_405.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_2025(t_parse_table_array *v)
{
	v->a[446][aux_sym_number_token2] = actions(326);
	v->a[446][anon_sym_DOLLAR_LBRACE] = actions(328);
	v->a[446][anon_sym_DOLLAR_LPAREN] = actions(330);
	v->a[446][anon_sym_BQUOTE] = actions(332);
	v->a[446][anon_sym_DOLLAR_BQUOTE] = actions(334);
	v->a[446][anon_sym_LT_LPAREN] = actions(336);
	v->a[446][anon_sym_GT_LPAREN] = actions(336);
	v->a[446][sym_comment] = actions(71);
	v->a[446][sym_file_descriptor] = actions(1019);
	v->a[446][sym_variable_name] = actions(1021);
	v->a[446][sym_test_operator] = actions(1023);
	v->a[446][sym__brace_start] = actions(344);
	v->a[447][sym__statement_not_pipeline] = state(6568);
	v->a[447][sym_redirected_statement] = state(5421);
	v->a[447][sym_for_statement] = state(5421);
	v->a[447][sym_c_style_for_statement] = state(5421);
	v->a[447][sym_while_statement] = state(5184);
	v->a[447][sym_if_statement] = state(5184);
	v->a[447][sym_case_statement] = state(5421);
	v->a[447][sym_function_definition] = state(5421);
	parse_table_2026(v);
}

void	parse_table_2026(t_parse_table_array *v)
{
	v->a[447][sym_compound_statement] = state(5421);
	v->a[447][sym_subshell] = state(5421);
	v->a[447][sym_pipeline] = state(5419);
	v->a[447][sym_list] = state(5421);
	v->a[447][sym_negated_command] = state(5421);
	v->a[447][sym_test_command] = state(5421);
	v->a[447][sym_declaration_command] = state(5421);
	v->a[447][sym_unset_command] = state(5421);
	v->a[447][sym_command] = state(5421);
	v->a[447][sym_command_name] = state(620);
	v->a[447][sym_variable_assignment] = state(1882);
	v->a[447][sym_variable_assignments] = state(5421);
	v->a[447][sym_subscript] = state(6756);
	v->a[447][sym_file_redirect] = state(2780);
	v->a[447][sym_herestring_redirect] = state(2886);
	v->a[447][sym_arithmetic_expansion] = state(1799);
	v->a[447][sym_brace_expression] = state(1799);
	v->a[447][sym_concatenation] = state(2368);
	v->a[447][sym_string] = state(1799);
	v->a[447][sym_translated_string] = state(1799);
	parse_table_2027(v);
}

void	parse_table_2027(t_parse_table_array *v)
{
	v->a[447][sym_number] = state(1799);
	v->a[447][sym_simple_expansion] = state(1799);
	v->a[447][sym_expansion] = state(1799);
	v->a[447][sym_command_substitution] = state(1799);
	v->a[447][sym_process_substitution] = state(1799);
	v->a[447][aux_sym_redirected_statement_repeat2] = state(5362);
	v->a[447][aux_sym_command_repeat1] = state(955);
	v->a[447][aux_sym__literal_repeat1] = state(2332);
	v->a[447][sym_word] = actions(1025);
	v->a[447][anon_sym_for] = actions(145);
	v->a[447][anon_sym_select] = actions(147);
	v->a[447][anon_sym_LPAREN_LPAREN] = actions(1027);
	v->a[447][anon_sym_LT] = actions(1029);
	v->a[447][anon_sym_GT] = actions(1029);
	v->a[447][anon_sym_GT_GT] = actions(1031);
	v->a[447][anon_sym_LPAREN] = actions(1033);
	v->a[447][anon_sym_while] = actions(157);
	v->a[447][anon_sym_until] = actions(157);
	v->a[447][anon_sym_if] = actions(159);
	v->a[447][anon_sym_case] = actions(161);
	parse_table_2028(v);
}

void	parse_table_2028(t_parse_table_array *v)
{
	v->a[447][anon_sym_function] = actions(163);
	v->a[447][anon_sym_LBRACE] = actions(165);
	v->a[447][anon_sym_BANG] = actions(1035);
	v->a[447][anon_sym_LBRACK] = actions(169);
	v->a[447][anon_sym_LBRACK_LBRACK] = actions(173);
	v->a[447][anon_sym_declare] = actions(175);
	v->a[447][anon_sym_typeset] = actions(175);
	v->a[447][anon_sym_export] = actions(175);
	v->a[447][anon_sym_readonly] = actions(175);
	v->a[447][anon_sym_local] = actions(175);
	v->a[447][anon_sym_unset] = actions(177);
	v->a[447][anon_sym_unsetenv] = actions(177);
	v->a[447][anon_sym_AMP_GT] = actions(1029);
	v->a[447][anon_sym_AMP_GT_GT] = actions(1031);
	v->a[447][anon_sym_LT_AMP] = actions(1029);
	v->a[447][anon_sym_GT_AMP] = actions(1029);
	v->a[447][anon_sym_GT_PIPE] = actions(1031);
	v->a[447][anon_sym_LT_AMP_DASH] = actions(1037);
	v->a[447][anon_sym_GT_AMP_DASH] = actions(1037);
	v->a[447][anon_sym_LT_LT_LT] = actions(1039);
	parse_table_2029(v);
}

void	parse_table_2029(t_parse_table_array *v)
{
	v->a[447][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1041);
	v->a[447][anon_sym_DOLLAR_LBRACK] = actions(1043);
	v->a[447][anon_sym_DOLLAR] = actions(1045);
	v->a[447][sym__special_character] = actions(1047);
	v->a[447][anon_sym_DQUOTE] = actions(1049);
	v->a[447][sym_raw_string] = actions(1051);
	v->a[447][sym_ansi_c_string] = actions(1051);
	v->a[447][aux_sym_number_token1] = actions(1053);
	v->a[447][aux_sym_number_token2] = actions(1055);
	v->a[447][anon_sym_DOLLAR_LBRACE] = actions(1057);
	v->a[447][anon_sym_DOLLAR_LPAREN] = actions(1059);
	v->a[447][anon_sym_BQUOTE] = actions(1061);
	v->a[447][anon_sym_DOLLAR_BQUOTE] = actions(1063);
	v->a[447][anon_sym_LT_LPAREN] = actions(1065);
	v->a[447][anon_sym_GT_LPAREN] = actions(1065);
	v->a[447][sym_comment] = actions(71);
	v->a[447][sym_file_descriptor] = actions(1067);
	v->a[447][sym_variable_name] = actions(217);
	v->a[447][sym_test_operator] = actions(1069);
	v->a[447][sym__brace_start] = actions(1071);
	parse_table_2030(v);
}

/* EOF parse_table_405.c */
