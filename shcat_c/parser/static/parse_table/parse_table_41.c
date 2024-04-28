/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_41.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_205(t_parse_table_array *v)
{
	v->a[42][sym_concatenation] = state(1169);
	v->a[42][sym_string] = state(852);
	v->a[42][sym_translated_string] = state(852);
	v->a[42][sym_number] = state(852);
	v->a[42][sym_simple_expansion] = state(852);
	v->a[42][sym_expansion] = state(852);
	v->a[42][sym_command_substitution] = state(852);
	v->a[42][sym_process_substitution] = state(852);
	v->a[42][aux_sym__statements_repeat1] = state(426);
	v->a[42][aux_sym_redirected_statement_repeat2] = state(4371);
	v->a[42][aux_sym_command_repeat1] = state(989);
	v->a[42][aux_sym__literal_repeat1] = state(1026);
	v->a[42][sym_word] = actions(665);
	v->a[42][anon_sym_for] = actions(667);
	v->a[42][anon_sym_select] = actions(669);
	v->a[42][anon_sym_LPAREN_LPAREN] = actions(671);
	v->a[42][anon_sym_LT] = actions(673);
	v->a[42][anon_sym_GT] = actions(673);
	v->a[42][anon_sym_GT_GT] = actions(675);
	v->a[42][anon_sym_LPAREN] = actions(677);
	parse_table_206(v);
}

void	parse_table_206(t_parse_table_array *v)
{
	v->a[42][anon_sym_while] = actions(679);
	v->a[42][anon_sym_until] = actions(679);
	v->a[42][anon_sym_if] = actions(681);
	v->a[42][anon_sym_case] = actions(683);
	v->a[42][anon_sym_SEMI_SEMI] = actions(751);
	v->a[42][anon_sym_SEMI_AMP] = actions(547);
	v->a[42][anon_sym_SEMI_SEMI_AMP] = actions(547);
	v->a[42][anon_sym_function] = actions(687);
	v->a[42][anon_sym_LBRACE] = actions(689);
	v->a[42][anon_sym_BANG] = actions(691);
	v->a[42][anon_sym_LBRACK] = actions(693);
	v->a[42][anon_sym_LBRACK_LBRACK] = actions(695);
	v->a[42][anon_sym_declare] = actions(697);
	v->a[42][anon_sym_typeset] = actions(697);
	v->a[42][anon_sym_export] = actions(697);
	v->a[42][anon_sym_readonly] = actions(697);
	v->a[42][anon_sym_local] = actions(697);
	v->a[42][anon_sym_unset] = actions(699);
	v->a[42][anon_sym_unsetenv] = actions(699);
	v->a[42][anon_sym_AMP_GT] = actions(673);
	parse_table_207(v);
}

void	parse_table_207(t_parse_table_array *v)
{
	v->a[42][anon_sym_AMP_GT_GT] = actions(675);
	v->a[42][anon_sym_LT_AMP] = actions(673);
	v->a[42][anon_sym_GT_AMP] = actions(673);
	v->a[42][anon_sym_GT_PIPE] = actions(675);
	v->a[42][anon_sym_LT_AMP_DASH] = actions(701);
	v->a[42][anon_sym_GT_AMP_DASH] = actions(701);
	v->a[42][anon_sym_LT_LT_LT] = actions(703);
	v->a[42][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(705);
	v->a[42][anon_sym_DOLLAR_LBRACK] = actions(707);
	v->a[42][anon_sym_DOLLAR] = actions(709);
	v->a[42][sym__special_character] = actions(711);
	v->a[42][anon_sym_DQUOTE] = actions(713);
	v->a[42][sym_raw_string] = actions(715);
	v->a[42][sym_ansi_c_string] = actions(715);
	v->a[42][aux_sym_number_token1] = actions(717);
	v->a[42][aux_sym_number_token2] = actions(719);
	v->a[42][anon_sym_DOLLAR_LBRACE] = actions(721);
	v->a[42][anon_sym_DOLLAR_LPAREN] = actions(723);
	v->a[42][anon_sym_BQUOTE] = actions(725);
	v->a[42][anon_sym_DOLLAR_BQUOTE] = actions(727);
	parse_table_208(v);
}

void	parse_table_208(t_parse_table_array *v)
{
	v->a[42][anon_sym_LT_LPAREN] = actions(729);
	v->a[42][anon_sym_GT_LPAREN] = actions(729);
	v->a[42][sym_comment] = actions(71);
	v->a[42][sym_file_descriptor] = actions(731);
	v->a[42][sym_variable_name] = actions(733);
	v->a[42][sym_test_operator] = actions(735);
	v->a[42][sym__brace_start] = actions(737);
	v->a[43][sym__statements] = state(6667);
	v->a[43][sym__statement_not_pipeline] = state(6674);
	v->a[43][sym_redirected_statement] = state(4416);
	v->a[43][sym_for_statement] = state(4416);
	v->a[43][sym_c_style_for_statement] = state(4416);
	v->a[43][sym_while_statement] = state(4239);
	v->a[43][sym_if_statement] = state(4239);
	v->a[43][sym_case_statement] = state(4416);
	v->a[43][sym_function_definition] = state(4416);
	v->a[43][sym_compound_statement] = state(4416);
	v->a[43][sym_subshell] = state(4416);
	v->a[43][sym_pipeline] = state(4910);
	v->a[43][sym_list] = state(4416);
	parse_table_209(v);
}

void	parse_table_209(t_parse_table_array *v)
{
	v->a[43][sym_negated_command] = state(4416);
	v->a[43][sym_test_command] = state(4416);
	v->a[43][sym_declaration_command] = state(4416);
	v->a[43][sym_unset_command] = state(4416);
	v->a[43][sym_command] = state(4416);
	v->a[43][sym_command_name] = state(530);
	v->a[43][sym_variable_assignment] = state(849);
	v->a[43][sym_variable_assignments] = state(4416);
	v->a[43][sym_subscript] = state(6760);
	v->a[43][sym_file_redirect] = state(1893);
	v->a[43][sym_herestring_redirect] = state(1892);
	v->a[43][sym_arithmetic_expansion] = state(852);
	v->a[43][sym_brace_expression] = state(852);
	v->a[43][sym_concatenation] = state(1169);
	v->a[43][sym_string] = state(852);
	v->a[43][sym_translated_string] = state(852);
	v->a[43][sym_number] = state(852);
	v->a[43][sym_simple_expansion] = state(852);
	v->a[43][sym_expansion] = state(852);
	v->a[43][sym_command_substitution] = state(852);
	parse_table_210(v);
}

/* EOF parse_table_41.c */
