/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_95.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_475(t_parse_table_array *v)
{
	v->a[377][anon_sym_LT] = actions(883);
	v->a[377][anon_sym_GT] = actions(883);
	v->a[377][anon_sym_GT_GT] = actions(883);
	v->a[377][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(883);
	v->a[377][anon_sym_DOLLAR] = actions(883);
	v->a[377][anon_sym_DQUOTE] = actions(883);
	v->a[377][sym_raw_string] = actions(883);
	v->a[377][sym_number] = actions(883);
	v->a[377][anon_sym_DOLLAR_LBRACE] = actions(883);
	v->a[377][anon_sym_DOLLAR_LPAREN] = actions(883);
	v->a[377][anon_sym_BQUOTE] = actions(883);
	v->a[377][sym_comment] = actions(3);
	v->a[377][sym_variable_name] = actions(885);
	v->a[378][sym_arithmetic_expansion] = state(458);
	v->a[378][sym_concatenation] = state(518);
	v->a[378][sym_string] = state(458);
	v->a[378][sym_simple_expansion] = state(458);
	v->a[378][sym_expansion] = state(458);
	v->a[378][sym_command_substitution] = state(458);
	v->a[378][sym_word] = actions(1025);
	return (parse_table_476(v));
}

void	parse_table_476(t_parse_table_array *v)
{
	v->a[378][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(909);
	v->a[378][anon_sym_DOLLAR] = actions(973);
	v->a[378][anon_sym_DQUOTE] = actions(913);
	v->a[378][sym_raw_string] = actions(1025);
	v->a[378][sym_number] = actions(1025);
	v->a[378][anon_sym_DOLLAR_LBRACE] = actions(915);
	v->a[378][anon_sym_DOLLAR_LPAREN] = actions(917);
	v->a[378][anon_sym_BQUOTE] = actions(919);
	v->a[378][sym_comment] = actions(3);
	v->a[378][sym__comment_word] = actions(975);
	v->a[378][sym__empty_value] = actions(977);
	v->a[379][ts_builtin_sym_end] = actions(881);
	v->a[379][sym_word] = actions(883);
	v->a[379][anon_sym_LBRACE] = actions(883);
	v->a[379][anon_sym_LPAREN] = actions(883);
	v->a[379][anon_sym_BANG] = actions(883);
	v->a[379][anon_sym_LT] = actions(883);
	v->a[379][anon_sym_GT] = actions(883);
	v->a[379][anon_sym_GT_GT] = actions(883);
	v->a[379][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(883);
	return (parse_table_477(v));
}

void	parse_table_477(t_parse_table_array *v)
{
	v->a[379][anon_sym_DOLLAR] = actions(883);
	v->a[379][anon_sym_DQUOTE] = actions(883);
	v->a[379][sym_raw_string] = actions(883);
	v->a[379][sym_number] = actions(883);
	v->a[379][anon_sym_DOLLAR_LBRACE] = actions(883);
	v->a[379][anon_sym_DOLLAR_LPAREN] = actions(883);
	v->a[379][anon_sym_BQUOTE] = actions(883);
	v->a[379][sym_comment] = actions(3);
	v->a[379][sym_variable_name] = actions(885);
	v->a[380][sym_arithmetic_expansion] = state(173);
	v->a[380][sym_string] = state(173);
	v->a[380][sym_simple_expansion] = state(173);
	v->a[380][sym_expansion] = state(173);
	v->a[380][sym_command_substitution] = state(173);
	v->a[380][sym_word] = actions(991);
	v->a[380][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(17);
	v->a[380][aux_sym_concatenation_token1] = actions(991);
	v->a[380][anon_sym_DOLLAR] = actions(1027);
	v->a[380][anon_sym_DQUOTE] = actions(21);
	v->a[380][sym_raw_string] = actions(991);
	return (parse_table_478(v));
}

void	parse_table_478(t_parse_table_array *v)
{
	v->a[380][sym_number] = actions(991);
	v->a[380][anon_sym_DOLLAR_LBRACE] = actions(23);
	v->a[380][anon_sym_DOLLAR_LPAREN] = actions(25);
	v->a[380][anon_sym_BQUOTE] = actions(27);
	v->a[380][sym_comment] = actions(3);
	v->a[380][sym__comment_word] = actions(991);
	v->a[380][sym__bare_dollar] = actions(993);
	v->a[381][sym_arithmetic_expansion] = state(150);
	v->a[381][sym_string] = state(150);
	v->a[381][sym_simple_expansion] = state(150);
	v->a[381][sym_expansion] = state(150);
	v->a[381][sym_command_substitution] = state(150);
	v->a[381][sym_word] = actions(949);
	v->a[381][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(951);
	v->a[381][aux_sym_concatenation_token1] = actions(949);
	v->a[381][anon_sym_DOLLAR] = actions(1029);
	v->a[381][anon_sym_DQUOTE] = actions(955);
	v->a[381][sym_raw_string] = actions(949);
	v->a[381][sym_number] = actions(949);
	v->a[381][anon_sym_DOLLAR_LBRACE] = actions(957);
	return (parse_table_479(v));
}

void	parse_table_479(t_parse_table_array *v)
{
	v->a[381][anon_sym_DOLLAR_LPAREN] = actions(959);
	v->a[381][anon_sym_BQUOTE] = actions(961);
	v->a[381][sym_comment] = actions(3);
	v->a[381][sym__comment_word] = actions(949);
	v->a[381][sym__bare_dollar] = actions(963);
	v->a[382][sym_word] = actions(883);
	v->a[382][anon_sym_LBRACE] = actions(883);
	v->a[382][anon_sym_LPAREN] = actions(883);
	v->a[382][anon_sym_RPAREN] = actions(1023);
	v->a[382][anon_sym_BANG] = actions(883);
	v->a[382][anon_sym_LT] = actions(883);
	v->a[382][anon_sym_GT] = actions(883);
	v->a[382][anon_sym_GT_GT] = actions(883);
	v->a[382][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(883);
	v->a[382][anon_sym_DOLLAR] = actions(883);
	v->a[382][anon_sym_DQUOTE] = actions(883);
	v->a[382][sym_raw_string] = actions(883);
	v->a[382][sym_number] = actions(883);
	v->a[382][anon_sym_DOLLAR_LBRACE] = actions(883);
	v->a[382][anon_sym_DOLLAR_LPAREN] = actions(883);
	return (parse_table_480(v));
}

/* EOF parse_table_95.c */
