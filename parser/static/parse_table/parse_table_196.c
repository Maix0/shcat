/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_196.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_980(t_parse_table_array *v)
{
	v->a[256][sym_file_redirect] = state(1681);
	v->a[256][sym_arithmetic_expansion] = state(1341);
	v->a[256][sym_brace_expression] = state(1341);
	v->a[256][sym_concatenation] = state(1625);
	v->a[256][sym_string] = state(1341);
	v->a[256][sym_number] = state(1341);
	v->a[256][sym_simple_expansion] = state(1341);
	v->a[256][sym_expansion] = state(1341);
	v->a[256][sym_command_substitution] = state(1341);
	v->a[256][aux_sym_redirected_statement_repeat2] = state(2684);
	v->a[256][aux_sym_command_repeat1] = state(1040);
	v->a[256][aux_sym__literal_repeat1] = state(1597);
	v->a[256][sym_word] = actions(633);
	v->a[256][anon_sym_for] = actions(635);
	v->a[256][anon_sym_select] = actions(635);
	v->a[256][anon_sym_while] = actions(637);
	v->a[256][anon_sym_until] = actions(637);
	v->a[256][anon_sym_if] = actions(639);
	v->a[256][anon_sym_case] = actions(641);
	v->a[256][anon_sym_LPAREN] = actions(643);
	parse_table_981(v);
}

void	parse_table_981(t_parse_table_array *v)
{
	v->a[256][anon_sym_function] = actions(645);
	v->a[256][anon_sym_LBRACE] = actions(647);
	v->a[256][anon_sym_BANG] = actions(649);
	v->a[256][anon_sym_declare] = actions(651);
	v->a[256][anon_sym_typeset] = actions(651);
	v->a[256][anon_sym_export] = actions(651);
	v->a[256][anon_sym_readonly] = actions(651);
	v->a[256][anon_sym_local] = actions(651);
	v->a[256][anon_sym_unset] = actions(653);
	v->a[256][anon_sym_unsetenv] = actions(653);
	v->a[256][anon_sym_LT] = actions(655);
	v->a[256][anon_sym_GT] = actions(655);
	v->a[256][anon_sym_GT_GT] = actions(657);
	v->a[256][anon_sym_AMP_GT] = actions(655);
	v->a[256][anon_sym_AMP_GT_GT] = actions(657);
	v->a[256][anon_sym_LT_AMP] = actions(655);
	v->a[256][anon_sym_GT_AMP] = actions(655);
	v->a[256][anon_sym_GT_PIPE] = actions(657);
	v->a[256][anon_sym_LT_AMP_DASH] = actions(659);
	v->a[256][anon_sym_GT_AMP_DASH] = actions(659);
	parse_table_982(v);
}

void	parse_table_982(t_parse_table_array *v)
{
	v->a[256][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(661);
	v->a[256][anon_sym_DOLLAR] = actions(663);
	v->a[256][sym__special_character] = actions(665);
	v->a[256][anon_sym_DQUOTE] = actions(667);
	v->a[256][sym_raw_string] = actions(669);
	v->a[256][aux_sym_number_token1] = actions(671);
	v->a[256][aux_sym_number_token2] = actions(673);
	v->a[256][anon_sym_DOLLAR_LBRACE] = actions(675);
	v->a[256][anon_sym_DOLLAR_LPAREN] = actions(677);
	v->a[256][anon_sym_BQUOTE] = actions(679);
	v->a[256][anon_sym_DOLLAR_BQUOTE] = actions(681);
	v->a[256][sym_comment] = actions(57);
	v->a[256][sym_file_descriptor] = actions(683);
	v->a[256][sym_variable_name] = actions(685);
	v->a[256][sym_test_operator] = actions(669);
	v->a[256][sym__brace_start] = actions(687);
}

/* EOF parse_table_196.c */
