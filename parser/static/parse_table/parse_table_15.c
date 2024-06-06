/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_15.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_75(t_parse_table_array *v)
{
	v->a[18][sym_command] = state(1914);
	v->a[18][sym_command_name] = state(257);
	v->a[18][sym_variable_assignment] = state(445);
	v->a[18][sym_variable_assignments] = state(1914);
	v->a[18][sym_file_redirect] = state(1015);
	v->a[18][sym_arithmetic_expansion] = state(508);
	v->a[18][sym_brace_expression] = state(508);
	v->a[18][sym_concatenation] = state(862);
	v->a[18][sym_string] = state(508);
	v->a[18][sym_number] = state(508);
	v->a[18][sym_simple_expansion] = state(508);
	v->a[18][sym_expansion] = state(508);
	v->a[18][sym_command_substitution] = state(508);
	v->a[18][aux_sym__statements_repeat1] = state(230);
	v->a[18][aux_sym_redirected_statement_repeat2] = state(1974);
	v->a[18][aux_sym_command_repeat1] = state(1131);
	v->a[18][aux_sym__literal_repeat1] = state(678);
	v->a[18][sym_word] = actions(129);
	v->a[18][anon_sym_for] = actions(131);
	v->a[18][anon_sym_select] = actions(131);
	parse_table_76(v);
}

void	parse_table_76(t_parse_table_array *v)
{
	v->a[18][anon_sym_while] = actions(133);
	v->a[18][anon_sym_until] = actions(133);
	v->a[18][anon_sym_if] = actions(135);
	v->a[18][anon_sym_case] = actions(137);
	v->a[18][anon_sym_esac] = actions(293);
	v->a[18][anon_sym_LPAREN] = actions(141);
	v->a[18][anon_sym_SEMI_SEMI] = actions(321);
	v->a[18][anon_sym_SEMI_AMP] = actions(323);
	v->a[18][anon_sym_SEMI_SEMI_AMP] = actions(325);
	v->a[18][anon_sym_function] = actions(147);
	v->a[18][anon_sym_LBRACE] = actions(149);
	v->a[18][anon_sym_BANG] = actions(151);
	v->a[18][anon_sym_declare] = actions(153);
	v->a[18][anon_sym_typeset] = actions(153);
	v->a[18][anon_sym_export] = actions(153);
	v->a[18][anon_sym_readonly] = actions(153);
	v->a[18][anon_sym_local] = actions(153);
	v->a[18][anon_sym_unset] = actions(155);
	v->a[18][anon_sym_unsetenv] = actions(155);
	v->a[18][anon_sym_LT] = actions(157);
	parse_table_77(v);
}

void	parse_table_77(t_parse_table_array *v)
{
	v->a[18][anon_sym_GT] = actions(157);
	v->a[18][anon_sym_GT_GT] = actions(159);
	v->a[18][anon_sym_AMP_GT] = actions(157);
	v->a[18][anon_sym_AMP_GT_GT] = actions(159);
	v->a[18][anon_sym_LT_AMP] = actions(157);
	v->a[18][anon_sym_GT_AMP] = actions(157);
	v->a[18][anon_sym_GT_PIPE] = actions(159);
	v->a[18][anon_sym_LT_AMP_DASH] = actions(161);
	v->a[18][anon_sym_GT_AMP_DASH] = actions(161);
	v->a[18][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(163);
	v->a[18][anon_sym_DOLLAR] = actions(165);
	v->a[18][sym__special_character] = actions(167);
	v->a[18][anon_sym_DQUOTE] = actions(169);
	v->a[18][sym_raw_string] = actions(171);
	v->a[18][aux_sym_number_token1] = actions(173);
	v->a[18][aux_sym_number_token2] = actions(175);
	v->a[18][anon_sym_DOLLAR_LBRACE] = actions(177);
	v->a[18][anon_sym_DOLLAR_LPAREN] = actions(179);
	v->a[18][anon_sym_BQUOTE] = actions(181);
	v->a[18][anon_sym_DOLLAR_BQUOTE] = actions(183);
	parse_table_78(v);
}

void	parse_table_78(t_parse_table_array *v)
{
	v->a[18][sym_comment] = actions(57);
	v->a[18][sym_file_descriptor] = actions(185);
	v->a[18][sym_variable_name] = actions(187);
	v->a[18][sym_test_operator] = actions(171);
	v->a[18][sym__brace_start] = actions(189);
	v->a[19][sym__statements] = state(3451);
	v->a[19][sym__statement_not_pipeline] = state(3470);
	v->a[19][sym_redirected_statement] = state(1914);
	v->a[19][sym_for_statement] = state(1914);
	v->a[19][sym_while_statement] = state(1914);
	v->a[19][sym_if_statement] = state(1914);
	v->a[19][sym_case_statement] = state(1914);
	v->a[19][sym_function_definition] = state(1914);
	v->a[19][sym_compound_statement] = state(1914);
	v->a[19][sym_subshell] = state(1914);
	v->a[19][sym_pipeline] = state(2054);
	v->a[19][sym_list] = state(1914);
	v->a[19][sym_negated_command] = state(1914);
	v->a[19][sym_declaration_command] = state(1914);
	v->a[19][sym_unset_command] = state(1914);
	parse_table_79(v);
}

void	parse_table_79(t_parse_table_array *v)
{
	v->a[19][sym_command] = state(1914);
	v->a[19][sym_command_name] = state(257);
	v->a[19][sym_variable_assignment] = state(445);
	v->a[19][sym_variable_assignments] = state(1914);
	v->a[19][sym_file_redirect] = state(1015);
	v->a[19][sym_arithmetic_expansion] = state(508);
	v->a[19][sym_brace_expression] = state(508);
	v->a[19][sym_concatenation] = state(862);
	v->a[19][sym_string] = state(508);
	v->a[19][sym_number] = state(508);
	v->a[19][sym_simple_expansion] = state(508);
	v->a[19][sym_expansion] = state(508);
	v->a[19][sym_command_substitution] = state(508);
	v->a[19][aux_sym__statements_repeat1] = state(230);
	v->a[19][aux_sym_redirected_statement_repeat2] = state(1974);
	v->a[19][aux_sym_command_repeat1] = state(1131);
	v->a[19][aux_sym__literal_repeat1] = state(678);
	v->a[19][sym_word] = actions(129);
	v->a[19][anon_sym_for] = actions(131);
	v->a[19][anon_sym_select] = actions(131);
	parse_table_80(v);
}

/* EOF parse_table_15.c */
