/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_42.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_210(t_parse_table_array *v)
{
	v->a[132][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(496);
	v->a[132][aux_sym_concatenation_token1] = actions(607);
	v->a[132][anon_sym_DOLLAR] = actions(496);
	v->a[132][anon_sym_DQUOTE] = actions(496);
	v->a[132][sym_raw_string] = actions(496);
	v->a[132][sym_number] = actions(496);
	v->a[132][anon_sym_DOLLAR_LBRACE] = actions(496);
	v->a[132][anon_sym_DOLLAR_LPAREN] = actions(496);
	v->a[132][anon_sym_BQUOTE] = actions(496);
	v->a[132][sym_comment] = actions(3);
	v->a[132][anon_sym_SEMI] = actions(496);
	v->a[132][anon_sym_SEMI_SEMI] = actions(496);
	v->a[132][aux_sym_terminator_token1] = actions(496);
	v->a[132][sym__concat] = actions(610);
	v->a[132][sym_variable_name] = actions(504);
	v->a[133][aux_sym_concatenation_repeat1] = state(132);
	v->a[133][ts_builtin_sym_end] = actions(581);
	v->a[133][sym_word] = actions(583);
	v->a[133][anon_sym_PIPE] = actions(583);
	v->a[133][anon_sym_AMP_AMP] = actions(583);
	return (parse_table_211(v));
}

void	parse_table_211(t_parse_table_array *v)
{
	v->a[133][anon_sym_PIPE_PIPE] = actions(583);
	v->a[133][anon_sym_LT] = actions(583);
	v->a[133][anon_sym_GT] = actions(583);
	v->a[133][anon_sym_GT_GT] = actions(583);
	v->a[133][anon_sym_LT_LT] = actions(583);
	v->a[133][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(583);
	v->a[133][aux_sym_concatenation_token1] = actions(569);
	v->a[133][anon_sym_DOLLAR] = actions(583);
	v->a[133][anon_sym_DQUOTE] = actions(583);
	v->a[133][sym_raw_string] = actions(583);
	v->a[133][sym_number] = actions(583);
	v->a[133][anon_sym_DOLLAR_LBRACE] = actions(583);
	v->a[133][anon_sym_DOLLAR_LPAREN] = actions(583);
	v->a[133][anon_sym_BQUOTE] = actions(583);
	v->a[133][sym_comment] = actions(3);
	v->a[133][anon_sym_SEMI] = actions(583);
	v->a[133][anon_sym_SEMI_SEMI] = actions(583);
	v->a[133][aux_sym_terminator_token1] = actions(583);
	v->a[133][sym__concat] = actions(613);
	v->a[133][sym_variable_name] = actions(581);
	return (parse_table_212(v));
}

void	parse_table_212(t_parse_table_array *v)
{
	v->a[134][sym_arithmetic_expansion] = state(271);
	v->a[134][sym_concatenation] = state(368);
	v->a[134][sym_string] = state(271);
	v->a[134][sym_simple_expansion] = state(271);
	v->a[134][sym_expansion] = state(271);
	v->a[134][sym_command_substitution] = state(271);
	v->a[134][aux_sym_command_repeat2] = state(128);
	v->a[134][sym_word] = actions(599);
	v->a[134][anon_sym_PIPE] = actions(240);
	v->a[134][anon_sym_AMP_AMP] = actions(240);
	v->a[134][anon_sym_PIPE_PIPE] = actions(240);
	v->a[134][anon_sym_LT] = actions(240);
	v->a[134][anon_sym_GT] = actions(240);
	v->a[134][anon_sym_GT_GT] = actions(240);
	v->a[134][anon_sym_LT_LT] = actions(240);
	v->a[134][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(149);
	v->a[134][anon_sym_DOLLAR] = actions(151);
	v->a[134][anon_sym_DQUOTE] = actions(153);
	v->a[134][sym_raw_string] = actions(599);
	v->a[134][sym_number] = actions(599);
	return (parse_table_213(v));
}

void	parse_table_213(t_parse_table_array *v)
{
	v->a[134][anon_sym_DOLLAR_LBRACE] = actions(155);
	v->a[134][anon_sym_DOLLAR_LPAREN] = actions(157);
	v->a[134][anon_sym_BQUOTE] = actions(159);
	v->a[134][sym_comment] = actions(3);
	v->a[134][sym__bare_dollar] = actions(601);
	v->a[135][aux_sym_concatenation_repeat1] = state(119);
	v->a[135][sym_word] = actions(583);
	v->a[135][anon_sym_RPAREN] = actions(583);
	v->a[135][anon_sym_PIPE] = actions(583);
	v->a[135][anon_sym_AMP_AMP] = actions(583);
	v->a[135][anon_sym_PIPE_PIPE] = actions(583);
	v->a[135][anon_sym_LT] = actions(583);
	v->a[135][anon_sym_GT] = actions(583);
	v->a[135][anon_sym_GT_GT] = actions(583);
	v->a[135][anon_sym_LT_LT] = actions(583);
	v->a[135][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(583);
	v->a[135][aux_sym_concatenation_token1] = actions(589);
	v->a[135][anon_sym_DOLLAR] = actions(583);
	v->a[135][anon_sym_DQUOTE] = actions(583);
	v->a[135][sym_raw_string] = actions(583);
	return (parse_table_214(v));
}

void	parse_table_214(t_parse_table_array *v)
{
	v->a[135][sym_number] = actions(583);
	v->a[135][anon_sym_DOLLAR_LBRACE] = actions(583);
	v->a[135][anon_sym_DOLLAR_LPAREN] = actions(583);
	v->a[135][anon_sym_BQUOTE] = actions(583);
	v->a[135][sym_comment] = actions(3);
	v->a[135][anon_sym_SEMI] = actions(583);
	v->a[135][anon_sym_SEMI_SEMI] = actions(583);
	v->a[135][aux_sym_terminator_token1] = actions(583);
	v->a[135][sym__concat] = actions(615);
	v->a[135][sym__bare_dollar] = actions(581);
	v->a[136][aux_sym_concatenation_repeat1] = state(133);
	v->a[136][ts_builtin_sym_end] = actions(579);
	v->a[136][sym_word] = actions(573);
	v->a[136][anon_sym_PIPE] = actions(573);
	v->a[136][anon_sym_AMP_AMP] = actions(573);
	v->a[136][anon_sym_PIPE_PIPE] = actions(573);
	v->a[136][anon_sym_LT] = actions(573);
	v->a[136][anon_sym_GT] = actions(573);
	v->a[136][anon_sym_GT_GT] = actions(573);
	v->a[136][anon_sym_LT_LT] = actions(573);
	return (parse_table_215(v));
}

/* EOF parse_table_42.c */
