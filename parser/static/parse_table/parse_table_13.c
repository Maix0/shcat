/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_13.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_65(t_parse_table_array *v)
{
	v->a[12][anon_sym_PERCENT] = actions(243);
	v->a[12][anon_sym_STAR_STAR] = actions(243);
	v->a[12][anon_sym_LPAREN] = actions(248);
	v->a[12][anon_sym_RPAREN] = actions(245);
	v->a[12][anon_sym_SEMI_SEMI] = actions(241);
	v->a[12][anon_sym_PIPE_AMP] = actions(241);
	v->a[12][anon_sym_BANG] = actions(250);
	v->a[12][anon_sym_EQ_TILDE] = actions(245);
	v->a[12][anon_sym_AMP_GT] = actions(241);
	v->a[12][anon_sym_AMP_GT_GT] = actions(241);
	v->a[12][anon_sym_LT_AMP] = actions(241);
	v->a[12][anon_sym_GT_AMP] = actions(241);
	v->a[12][anon_sym_GT_PIPE] = actions(241);
	v->a[12][anon_sym_LT_AMP_DASH] = actions(241);
	v->a[12][anon_sym_GT_AMP_DASH] = actions(241);
	v->a[12][anon_sym_LT_LT_DASH] = actions(241);
	v->a[12][aux_sym_heredoc_redirect_token1] = actions(241);
	v->a[12][anon_sym_LT_LT_LT] = actions(241);
	v->a[12][anon_sym_QMARK] = actions(243);
	v->a[12][anon_sym_PLUS_PLUS2] = actions(252);
	parse_table_66(v);
}

void	parse_table_66(t_parse_table_array *v)
{
	v->a[12][anon_sym_DASH_DASH2] = actions(252);
	v->a[12][anon_sym_DASH2] = actions(105);
	v->a[12][anon_sym_PLUS2] = actions(105);
	v->a[12][anon_sym_TILDE] = actions(105);
	v->a[12][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(239);
	v->a[12][anon_sym_DOLLAR_LBRACK] = actions(254);
	v->a[12][aux_sym_concatenation_token1] = actions(256);
	v->a[12][anon_sym_DOLLAR] = actions(258);
	v->a[12][sym__special_character] = actions(260);
	v->a[12][anon_sym_DQUOTE] = actions(262);
	v->a[12][sym_raw_string] = actions(237);
	v->a[12][sym_ansi_c_string] = actions(237);
	v->a[12][aux_sym_number_token1] = actions(264);
	v->a[12][aux_sym_number_token2] = actions(266);
	v->a[12][anon_sym_DOLLAR_LBRACE] = actions(268);
	v->a[12][anon_sym_DOLLAR_LPAREN] = actions(270);
	v->a[12][anon_sym_BQUOTE] = actions(272);
	v->a[12][anon_sym_DOLLAR_BQUOTE] = actions(274);
	v->a[12][anon_sym_LT_LPAREN] = actions(276);
	v->a[12][anon_sym_GT_LPAREN] = actions(276);
	parse_table_67(v);
}

void	parse_table_67(t_parse_table_array *v)
{
	v->a[12][sym_comment] = actions(3);
	v->a[12][sym_file_descriptor] = actions(278);
	v->a[12][sym__concat] = actions(280);
	v->a[12][sym_test_operator] = actions(282);
	v->a[12][sym__bare_dollar] = actions(278);
	v->a[12][sym__brace_start] = actions(284);
	v->a[13][aux_sym__terminated_statement] = state(34);
	v->a[13][sym__statement_not_pipeline] = state(6718);
	v->a[13][sym_redirected_statement] = state(5007);
	v->a[13][sym_for_statement] = state(5007);
	v->a[13][sym_c_style_for_statement] = state(5007);
	v->a[13][sym_while_statement] = state(4551);
	v->a[13][sym_if_statement] = state(4551);
	v->a[13][sym_elif_clause] = state(6289);
	v->a[13][sym_else_clause] = state(7417);
	v->a[13][sym_case_statement] = state(5007);
	v->a[13][sym_function_definition] = state(5007);
	v->a[13][sym_compound_statement] = state(5007);
	v->a[13][sym_subshell] = state(5007);
	v->a[13][sym_pipeline] = state(5189);
	parse_table_68(v);
}

void	parse_table_68(t_parse_table_array *v)
{
	v->a[13][sym_list] = state(5007);
	v->a[13][sym_negated_command] = state(5007);
	v->a[13][sym_test_command] = state(5007);
	v->a[13][sym_declaration_command] = state(5007);
	v->a[13][sym_unset_command] = state(5007);
	v->a[13][sym_command] = state(5007);
	v->a[13][sym_command_name] = state(544);
	v->a[13][sym_variable_assignment] = state(1151);
	v->a[13][sym_variable_assignments] = state(5007);
	v->a[13][sym_subscript] = state(6790);
	v->a[13][sym_file_redirect] = state(2019);
	v->a[13][sym_herestring_redirect] = state(2017);
	v->a[13][sym_arithmetic_expansion] = state(1078);
	v->a[13][sym_brace_expression] = state(1078);
	v->a[13][sym_concatenation] = state(1376);
	v->a[13][sym_string] = state(1078);
	v->a[13][sym_translated_string] = state(1078);
	v->a[13][sym_number] = state(1078);
	v->a[13][sym_simple_expansion] = state(1078);
	v->a[13][sym_expansion] = state(1078);
	parse_table_69(v);
}

void	parse_table_69(t_parse_table_array *v)
{
	v->a[13][sym_command_substitution] = state(1078);
	v->a[13][sym_process_substitution] = state(1078);
	v->a[13][aux_sym_redirected_statement_repeat2] = state(4644);
	v->a[13][aux_sym_if_statement_repeat1] = state(6289);
	v->a[13][aux_sym_command_repeat1] = state(997);
	v->a[13][aux_sym__literal_repeat1] = state(1267);
	v->a[13][sym_word] = actions(286);
	v->a[13][anon_sym_for] = actions(9);
	v->a[13][anon_sym_select] = actions(11);
	v->a[13][anon_sym_LPAREN_LPAREN] = actions(288);
	v->a[13][anon_sym_LT] = actions(290);
	v->a[13][anon_sym_GT] = actions(290);
	v->a[13][anon_sym_GT_GT] = actions(292);
	v->a[13][anon_sym_LPAREN] = actions(19);
	v->a[13][anon_sym_while] = actions(21);
	v->a[13][anon_sym_until] = actions(21);
	v->a[13][anon_sym_if] = actions(23);
	v->a[13][anon_sym_fi] = actions(294);
	v->a[13][anon_sym_elif] = actions(296);
	v->a[13][anon_sym_else] = actions(298);
	parse_table_70(v);
}

/* EOF parse_table_13.c */
