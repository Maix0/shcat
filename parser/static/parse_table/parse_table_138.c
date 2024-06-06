/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_138.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_690(t_parse_table_array *v)
{
	v->a[179][sym_brace_expression] = state(834);
	v->a[179][sym_concatenation] = state(1192);
	v->a[179][sym_string] = state(834);
	v->a[179][sym_number] = state(834);
	v->a[179][sym_simple_expansion] = state(834);
	v->a[179][sym_expansion] = state(834);
	v->a[179][sym_command_substitution] = state(834);
	v->a[179][aux_sym_redirected_statement_repeat2] = state(2385);
	v->a[179][aux_sym_command_repeat1] = state(1035);
	v->a[179][aux_sym__literal_repeat1] = state(1048);
	v->a[179][sym_word] = actions(207);
	v->a[179][anon_sym_for] = actions(210);
	v->a[179][anon_sym_select] = actions(210);
	v->a[179][anon_sym_while] = actions(213);
	v->a[179][anon_sym_until] = actions(213);
	v->a[179][anon_sym_if] = actions(218);
	v->a[179][anon_sym_case] = actions(221);
	v->a[179][anon_sym_LPAREN] = actions(224);
	v->a[179][anon_sym_function] = actions(227);
	v->a[179][anon_sym_LBRACE] = actions(230);
	parse_table_691(v);
}

void	parse_table_691(t_parse_table_array *v)
{
	v->a[179][anon_sym_RBRACE] = actions(507);
	v->a[179][anon_sym_BANG] = actions(233);
	v->a[179][anon_sym_declare] = actions(236);
	v->a[179][anon_sym_typeset] = actions(236);
	v->a[179][anon_sym_export] = actions(236);
	v->a[179][anon_sym_readonly] = actions(236);
	v->a[179][anon_sym_local] = actions(236);
	v->a[179][anon_sym_unset] = actions(239);
	v->a[179][anon_sym_unsetenv] = actions(239);
	v->a[179][anon_sym_LT] = actions(242);
	v->a[179][anon_sym_GT] = actions(242);
	v->a[179][anon_sym_GT_GT] = actions(245);
	v->a[179][anon_sym_AMP_GT] = actions(242);
	v->a[179][anon_sym_AMP_GT_GT] = actions(245);
	v->a[179][anon_sym_LT_AMP] = actions(242);
	v->a[179][anon_sym_GT_AMP] = actions(242);
	v->a[179][anon_sym_GT_PIPE] = actions(245);
	v->a[179][anon_sym_LT_AMP_DASH] = actions(248);
	v->a[179][anon_sym_GT_AMP_DASH] = actions(248);
	v->a[179][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(251);
	parse_table_692(v);
}

void	parse_table_692(t_parse_table_array *v)
{
	v->a[179][anon_sym_DOLLAR] = actions(254);
	v->a[179][sym__special_character] = actions(257);
	v->a[179][anon_sym_DQUOTE] = actions(260);
	v->a[179][sym_raw_string] = actions(263);
	v->a[179][aux_sym_number_token1] = actions(266);
	v->a[179][aux_sym_number_token2] = actions(269);
	v->a[179][anon_sym_DOLLAR_LBRACE] = actions(272);
	v->a[179][anon_sym_DOLLAR_LPAREN] = actions(275);
	v->a[179][anon_sym_BQUOTE] = actions(278);
	v->a[179][anon_sym_DOLLAR_BQUOTE] = actions(281);
	v->a[179][sym_comment] = actions(57);
	v->a[179][sym_file_descriptor] = actions(284);
	v->a[179][sym_variable_name] = actions(287);
	v->a[179][sym_test_operator] = actions(263);
	v->a[179][sym__brace_start] = actions(290);
	v->a[180][sym__statements] = state(3648);
	v->a[180][sym__statement_not_pipeline] = state(3476);
	v->a[180][sym_redirected_statement] = state(2121);
	v->a[180][sym_for_statement] = state(2121);
	v->a[180][sym_while_statement] = state(2121);
	parse_table_693(v);
}

void	parse_table_693(t_parse_table_array *v)
{
	v->a[180][sym_if_statement] = state(2121);
	v->a[180][sym_case_statement] = state(2121);
	v->a[180][sym_function_definition] = state(2121);
	v->a[180][sym_compound_statement] = state(2121);
	v->a[180][sym_subshell] = state(2121);
	v->a[180][sym_pipeline] = state(2499);
	v->a[180][sym_list] = state(2121);
	v->a[180][sym_negated_command] = state(2121);
	v->a[180][sym_declaration_command] = state(2121);
	v->a[180][sym_unset_command] = state(2121);
	v->a[180][sym_command] = state(2121);
	v->a[180][sym_command_name] = state(340);
	v->a[180][sym_variable_assignment] = state(709);
	v->a[180][sym_variable_assignments] = state(2121);
	v->a[180][sym_file_redirect] = state(1361);
	v->a[180][sym_arithmetic_expansion] = state(834);
	v->a[180][sym_brace_expression] = state(834);
	v->a[180][sym_concatenation] = state(1192);
	v->a[180][sym_string] = state(834);
	v->a[180][sym_number] = state(834);
	parse_table_694(v);
}

void	parse_table_694(t_parse_table_array *v)
{
	v->a[180][sym_simple_expansion] = state(834);
	v->a[180][sym_expansion] = state(834);
	v->a[180][sym_command_substitution] = state(834);
	v->a[180][aux_sym__statements_repeat1] = state(236);
	v->a[180][aux_sym_redirected_statement_repeat2] = state(2191);
	v->a[180][aux_sym_command_repeat1] = state(1008);
	v->a[180][aux_sym__literal_repeat1] = state(1048);
	v->a[180][sym_word] = actions(467);
	v->a[180][anon_sym_for] = actions(9);
	v->a[180][anon_sym_select] = actions(9);
	v->a[180][anon_sym_while] = actions(11);
	v->a[180][anon_sym_until] = actions(11);
	v->a[180][anon_sym_if] = actions(13);
	v->a[180][anon_sym_case] = actions(15);
	v->a[180][anon_sym_LPAREN] = actions(17);
	v->a[180][anon_sym_function] = actions(469);
	v->a[180][anon_sym_LBRACE] = actions(21);
	v->a[180][anon_sym_BANG] = actions(471);
	v->a[180][anon_sym_declare] = actions(473);
	v->a[180][anon_sym_typeset] = actions(473);
	parse_table_695(v);
}

/* EOF parse_table_138.c */
