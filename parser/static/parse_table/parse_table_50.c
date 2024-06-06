/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_50.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_250(t_parse_table_array *v)
{
	v->a[63][anon_sym_if] = actions(13);
	v->a[63][anon_sym_case] = actions(15);
	v->a[63][anon_sym_LPAREN] = actions(17);
	v->a[63][anon_sym_function] = actions(423);
	v->a[63][anon_sym_LBRACE] = actions(21);
	v->a[63][anon_sym_BANG] = actions(425);
	v->a[63][anon_sym_declare] = actions(427);
	v->a[63][anon_sym_typeset] = actions(427);
	v->a[63][anon_sym_export] = actions(427);
	v->a[63][anon_sym_readonly] = actions(427);
	v->a[63][anon_sym_local] = actions(427);
	v->a[63][anon_sym_unset] = actions(429);
	v->a[63][anon_sym_unsetenv] = actions(429);
	v->a[63][anon_sym_LT] = actions(431);
	v->a[63][anon_sym_GT] = actions(431);
	v->a[63][anon_sym_GT_GT] = actions(433);
	v->a[63][anon_sym_AMP_GT] = actions(431);
	v->a[63][anon_sym_AMP_GT_GT] = actions(433);
	v->a[63][anon_sym_LT_AMP] = actions(431);
	v->a[63][anon_sym_GT_AMP] = actions(431);
	parse_table_251(v);
}

void	parse_table_251(t_parse_table_array *v)
{
	v->a[63][anon_sym_GT_PIPE] = actions(433);
	v->a[63][anon_sym_LT_AMP_DASH] = actions(435);
	v->a[63][anon_sym_GT_AMP_DASH] = actions(435);
	v->a[63][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(87);
	v->a[63][anon_sym_DOLLAR] = actions(89);
	v->a[63][sym__special_character] = actions(437);
	v->a[63][anon_sym_DQUOTE] = actions(93);
	v->a[63][sym_raw_string] = actions(439);
	v->a[63][aux_sym_number_token1] = actions(97);
	v->a[63][aux_sym_number_token2] = actions(99);
	v->a[63][anon_sym_DOLLAR_LBRACE] = actions(101);
	v->a[63][anon_sym_DOLLAR_LPAREN] = actions(103);
	v->a[63][anon_sym_BQUOTE] = actions(105);
	v->a[63][anon_sym_DOLLAR_BQUOTE] = actions(107);
	v->a[63][sym_comment] = actions(57);
	v->a[63][sym_file_descriptor] = actions(441);
	v->a[63][sym_variable_name] = actions(443);
	v->a[63][sym_test_operator] = actions(439);
	v->a[63][sym__brace_start] = actions(113);
	v->a[64][aux_sym__terminated_statement] = state(13);
	parse_table_252(v);
}

void	parse_table_252(t_parse_table_array *v)
{
	v->a[64][sym__statement_not_pipeline] = state(3515);
	v->a[64][sym_redirected_statement] = state(2164);
	v->a[64][sym_for_statement] = state(2164);
	v->a[64][sym_while_statement] = state(2164);
	v->a[64][sym_if_statement] = state(2164);
	v->a[64][sym_case_statement] = state(2164);
	v->a[64][sym_function_definition] = state(2164);
	v->a[64][sym_compound_statement] = state(2164);
	v->a[64][sym_subshell] = state(2164);
	v->a[64][sym_pipeline] = state(2581);
	v->a[64][sym_list] = state(2164);
	v->a[64][sym_negated_command] = state(2164);
	v->a[64][sym_declaration_command] = state(2164);
	v->a[64][sym_unset_command] = state(2164);
	v->a[64][sym_command] = state(2164);
	v->a[64][sym_command_name] = state(310);
	v->a[64][sym_variable_assignment] = state(704);
	v->a[64][sym_variable_assignments] = state(2164);
	v->a[64][sym_file_redirect] = state(1320);
	v->a[64][sym_arithmetic_expansion] = state(834);
	parse_table_253(v);
}

void	parse_table_253(t_parse_table_array *v)
{
	v->a[64][sym_brace_expression] = state(834);
	v->a[64][sym_concatenation] = state(1192);
	v->a[64][sym_string] = state(834);
	v->a[64][sym_number] = state(834);
	v->a[64][sym_simple_expansion] = state(834);
	v->a[64][sym_expansion] = state(834);
	v->a[64][sym_command_substitution] = state(834);
	v->a[64][aux_sym_redirected_statement_repeat2] = state(2385);
	v->a[64][aux_sym_command_repeat1] = state(1035);
	v->a[64][aux_sym__literal_repeat1] = state(1048);
	v->a[64][sym_word] = actions(65);
	v->a[64][anon_sym_for] = actions(9);
	v->a[64][anon_sym_select] = actions(9);
	v->a[64][anon_sym_while] = actions(11);
	v->a[64][anon_sym_until] = actions(11);
	v->a[64][anon_sym_if] = actions(13);
	v->a[64][anon_sym_then] = actions(483);
	v->a[64][anon_sym_case] = actions(15);
	v->a[64][anon_sym_LPAREN] = actions(17);
	v->a[64][anon_sym_function] = actions(73);
	parse_table_254(v);
}

void	parse_table_254(t_parse_table_array *v)
{
	v->a[64][anon_sym_LBRACE] = actions(21);
	v->a[64][anon_sym_BANG] = actions(75);
	v->a[64][anon_sym_declare] = actions(77);
	v->a[64][anon_sym_typeset] = actions(77);
	v->a[64][anon_sym_export] = actions(77);
	v->a[64][anon_sym_readonly] = actions(77);
	v->a[64][anon_sym_local] = actions(77);
	v->a[64][anon_sym_unset] = actions(79);
	v->a[64][anon_sym_unsetenv] = actions(79);
	v->a[64][anon_sym_LT] = actions(81);
	v->a[64][anon_sym_GT] = actions(81);
	v->a[64][anon_sym_GT_GT] = actions(83);
	v->a[64][anon_sym_AMP_GT] = actions(81);
	v->a[64][anon_sym_AMP_GT_GT] = actions(83);
	v->a[64][anon_sym_LT_AMP] = actions(81);
	v->a[64][anon_sym_GT_AMP] = actions(81);
	v->a[64][anon_sym_GT_PIPE] = actions(83);
	v->a[64][anon_sym_LT_AMP_DASH] = actions(85);
	v->a[64][anon_sym_GT_AMP_DASH] = actions(85);
	v->a[64][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(87);
	parse_table_255(v);
}

/* EOF parse_table_50.c */
