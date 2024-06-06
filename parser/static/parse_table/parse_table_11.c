/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_11.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_55(t_parse_table_array *v)
{
	v->a[13][sym_command] = state(2164);
	v->a[13][sym_command_name] = state(310);
	v->a[13][sym_variable_assignment] = state(704);
	v->a[13][sym_variable_assignments] = state(2164);
	v->a[13][sym_file_redirect] = state(1320);
	v->a[13][sym_arithmetic_expansion] = state(834);
	v->a[13][sym_brace_expression] = state(834);
	v->a[13][sym_concatenation] = state(1192);
	v->a[13][sym_string] = state(834);
	v->a[13][sym_number] = state(834);
	v->a[13][sym_simple_expansion] = state(834);
	v->a[13][sym_expansion] = state(834);
	v->a[13][sym_command_substitution] = state(834);
	v->a[13][aux_sym_redirected_statement_repeat2] = state(2385);
	v->a[13][aux_sym_command_repeat1] = state(1035);
	v->a[13][aux_sym__literal_repeat1] = state(1048);
	v->a[13][sym_word] = actions(207);
	v->a[13][anon_sym_for] = actions(210);
	v->a[13][anon_sym_select] = actions(210);
	v->a[13][anon_sym_while] = actions(213);
	parse_table_56(v);
}

void	parse_table_56(t_parse_table_array *v)
{
	v->a[13][anon_sym_until] = actions(213);
	v->a[13][anon_sym_do] = actions(216);
	v->a[13][anon_sym_if] = actions(218);
	v->a[13][anon_sym_then] = actions(216);
	v->a[13][anon_sym_fi] = actions(216);
	v->a[13][anon_sym_elif] = actions(216);
	v->a[13][anon_sym_else] = actions(216);
	v->a[13][anon_sym_case] = actions(221);
	v->a[13][anon_sym_LPAREN] = actions(224);
	v->a[13][anon_sym_function] = actions(227);
	v->a[13][anon_sym_LBRACE] = actions(230);
	v->a[13][anon_sym_BANG] = actions(233);
	v->a[13][anon_sym_declare] = actions(236);
	v->a[13][anon_sym_typeset] = actions(236);
	v->a[13][anon_sym_export] = actions(236);
	v->a[13][anon_sym_readonly] = actions(236);
	v->a[13][anon_sym_local] = actions(236);
	v->a[13][anon_sym_unset] = actions(239);
	v->a[13][anon_sym_unsetenv] = actions(239);
	v->a[13][anon_sym_LT] = actions(242);
	parse_table_57(v);
}

void	parse_table_57(t_parse_table_array *v)
{
	v->a[13][anon_sym_GT] = actions(242);
	v->a[13][anon_sym_GT_GT] = actions(245);
	v->a[13][anon_sym_AMP_GT] = actions(242);
	v->a[13][anon_sym_AMP_GT_GT] = actions(245);
	v->a[13][anon_sym_LT_AMP] = actions(242);
	v->a[13][anon_sym_GT_AMP] = actions(242);
	v->a[13][anon_sym_GT_PIPE] = actions(245);
	v->a[13][anon_sym_LT_AMP_DASH] = actions(248);
	v->a[13][anon_sym_GT_AMP_DASH] = actions(248);
	v->a[13][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(251);
	v->a[13][anon_sym_DOLLAR] = actions(254);
	v->a[13][sym__special_character] = actions(257);
	v->a[13][anon_sym_DQUOTE] = actions(260);
	v->a[13][sym_raw_string] = actions(263);
	v->a[13][aux_sym_number_token1] = actions(266);
	v->a[13][aux_sym_number_token2] = actions(269);
	v->a[13][anon_sym_DOLLAR_LBRACE] = actions(272);
	v->a[13][anon_sym_DOLLAR_LPAREN] = actions(275);
	v->a[13][anon_sym_BQUOTE] = actions(278);
	v->a[13][anon_sym_DOLLAR_BQUOTE] = actions(281);
	parse_table_58(v);
}

void	parse_table_58(t_parse_table_array *v)
{
	v->a[13][sym_comment] = actions(57);
	v->a[13][sym_file_descriptor] = actions(284);
	v->a[13][sym_variable_name] = actions(287);
	v->a[13][sym_test_operator] = actions(263);
	v->a[13][sym__brace_start] = actions(290);
	v->a[14][sym__statements] = state(3448);
	v->a[14][sym__statement_not_pipeline] = state(3470);
	v->a[14][sym_redirected_statement] = state(1914);
	v->a[14][sym_for_statement] = state(1914);
	v->a[14][sym_while_statement] = state(1914);
	v->a[14][sym_if_statement] = state(1914);
	v->a[14][sym_case_statement] = state(1914);
	v->a[14][sym_function_definition] = state(1914);
	v->a[14][sym_compound_statement] = state(1914);
	v->a[14][sym_subshell] = state(1914);
	v->a[14][sym_pipeline] = state(2054);
	v->a[14][sym_list] = state(1914);
	v->a[14][sym_negated_command] = state(1914);
	v->a[14][sym_declaration_command] = state(1914);
	v->a[14][sym_unset_command] = state(1914);
	parse_table_59(v);
}

void	parse_table_59(t_parse_table_array *v)
{
	v->a[14][sym_command] = state(1914);
	v->a[14][sym_command_name] = state(257);
	v->a[14][sym_variable_assignment] = state(445);
	v->a[14][sym_variable_assignments] = state(1914);
	v->a[14][sym_file_redirect] = state(1015);
	v->a[14][sym_arithmetic_expansion] = state(508);
	v->a[14][sym_brace_expression] = state(508);
	v->a[14][sym_concatenation] = state(862);
	v->a[14][sym_string] = state(508);
	v->a[14][sym_number] = state(508);
	v->a[14][sym_simple_expansion] = state(508);
	v->a[14][sym_expansion] = state(508);
	v->a[14][sym_command_substitution] = state(508);
	v->a[14][aux_sym__statements_repeat1] = state(230);
	v->a[14][aux_sym_redirected_statement_repeat2] = state(1974);
	v->a[14][aux_sym_command_repeat1] = state(1131);
	v->a[14][aux_sym__literal_repeat1] = state(678);
	v->a[14][sym_word] = actions(129);
	v->a[14][anon_sym_for] = actions(131);
	v->a[14][anon_sym_select] = actions(131);
	parse_table_60(v);
}

/* EOF parse_table_11.c */
