/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_102.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_510(t_parse_table_array *v)
{
	v->a[416][anon_sym_AMP_AMP] = actions(633);
	v->a[416][anon_sym_PIPE_PIPE] = actions(633);
	v->a[416][anon_sym_LT] = actions(633);
	v->a[416][anon_sym_GT] = actions(633);
	v->a[416][anon_sym_GT_GT] = actions(633);
	v->a[416][anon_sym_LT_LT] = actions(633);
	v->a[416][aux_sym_concatenation_token1] = actions(633);
	v->a[416][anon_sym_BQUOTE] = actions(633);
	v->a[416][sym_comment] = actions(3);
	v->a[416][anon_sym_SEMI] = actions(633);
	v->a[416][anon_sym_SEMI_SEMI] = actions(633);
	v->a[416][aux_sym_terminator_token1] = actions(631);
	v->a[416][sym__concat] = actions(631);
	v->a[416][sym_variable_name] = actions(631);
	v->a[417][ts_builtin_sym_end] = actions(667);
	v->a[417][anon_sym_RPAREN] = actions(665);
	v->a[417][anon_sym_PIPE] = actions(665);
	v->a[417][anon_sym_AMP_AMP] = actions(665);
	v->a[417][anon_sym_PIPE_PIPE] = actions(665);
	v->a[417][anon_sym_LT] = actions(665);
	return (parse_table_511(v));
}

void	parse_table_511(t_parse_table_array *v)
{
	v->a[417][anon_sym_GT] = actions(665);
	v->a[417][anon_sym_GT_GT] = actions(665);
	v->a[417][anon_sym_LT_LT] = actions(665);
	v->a[417][aux_sym_concatenation_token1] = actions(665);
	v->a[417][anon_sym_BQUOTE] = actions(665);
	v->a[417][sym_comment] = actions(3);
	v->a[417][anon_sym_SEMI] = actions(665);
	v->a[417][anon_sym_SEMI_SEMI] = actions(665);
	v->a[417][aux_sym_terminator_token1] = actions(667);
	v->a[417][sym__concat] = actions(667);
	v->a[417][sym_variable_name] = actions(667);
	v->a[418][ts_builtin_sym_end] = actions(657);
	v->a[418][anon_sym_RPAREN] = actions(659);
	v->a[418][anon_sym_PIPE] = actions(659);
	v->a[418][anon_sym_AMP_AMP] = actions(659);
	v->a[418][anon_sym_PIPE_PIPE] = actions(659);
	v->a[418][anon_sym_LT] = actions(659);
	v->a[418][anon_sym_GT] = actions(659);
	v->a[418][anon_sym_GT_GT] = actions(659);
	v->a[418][anon_sym_LT_LT] = actions(659);
	return (parse_table_512(v));
}

void	parse_table_512(t_parse_table_array *v)
{
	v->a[418][aux_sym_concatenation_token1] = actions(659);
	v->a[418][anon_sym_BQUOTE] = actions(659);
	v->a[418][sym_comment] = actions(3);
	v->a[418][anon_sym_SEMI] = actions(659);
	v->a[418][anon_sym_SEMI_SEMI] = actions(659);
	v->a[418][aux_sym_terminator_token1] = actions(657);
	v->a[418][sym__concat] = actions(657);
	v->a[418][sym_variable_name] = actions(657);
	v->a[419][ts_builtin_sym_end] = actions(653);
	v->a[419][anon_sym_RPAREN] = actions(655);
	v->a[419][anon_sym_PIPE] = actions(655);
	v->a[419][anon_sym_AMP_AMP] = actions(655);
	v->a[419][anon_sym_PIPE_PIPE] = actions(655);
	v->a[419][anon_sym_LT] = actions(655);
	v->a[419][anon_sym_GT] = actions(655);
	v->a[419][anon_sym_GT_GT] = actions(655);
	v->a[419][anon_sym_LT_LT] = actions(655);
	v->a[419][aux_sym_concatenation_token1] = actions(655);
	v->a[419][anon_sym_BQUOTE] = actions(655);
	v->a[419][sym_comment] = actions(3);
	return (parse_table_513(v));
}

void	parse_table_513(t_parse_table_array *v)
{
	v->a[419][anon_sym_SEMI] = actions(655);
	v->a[419][anon_sym_SEMI_SEMI] = actions(655);
	v->a[419][aux_sym_terminator_token1] = actions(653);
	v->a[419][sym__concat] = actions(653);
	v->a[419][sym_variable_name] = actions(653);
	v->a[420][sym_arithmetic_expansion] = state(221);
	v->a[420][sym_concatenation] = state(92);
	v->a[420][sym_string] = state(221);
	v->a[420][sym_simple_expansion] = state(221);
	v->a[420][sym_expansion] = state(221);
	v->a[420][sym_command_substitution] = state(221);
	v->a[420][aux_sym_file_redirect_repeat1] = state(92);
	v->a[420][sym_word] = actions(441);
	v->a[420][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(380);
	v->a[420][anon_sym_DOLLAR] = actions(382);
	v->a[420][anon_sym_DQUOTE] = actions(384);
	v->a[420][sym_raw_string] = actions(441);
	v->a[420][sym_number] = actions(441);
	v->a[420][anon_sym_DOLLAR_LBRACE] = actions(386);
	v->a[420][anon_sym_DOLLAR_LPAREN] = actions(388);
	return (parse_table_514(v));
}

void	parse_table_514(t_parse_table_array *v)
{
	v->a[420][anon_sym_BQUOTE] = actions(390);
	v->a[420][sym_comment] = actions(3);
	v->a[421][ts_builtin_sym_end] = actions(647);
	v->a[421][anon_sym_RPAREN] = actions(645);
	v->a[421][anon_sym_PIPE] = actions(645);
	v->a[421][anon_sym_AMP_AMP] = actions(645);
	v->a[421][anon_sym_PIPE_PIPE] = actions(645);
	v->a[421][anon_sym_LT] = actions(645);
	v->a[421][anon_sym_GT] = actions(645);
	v->a[421][anon_sym_GT_GT] = actions(645);
	v->a[421][anon_sym_LT_LT] = actions(645);
	v->a[421][aux_sym_concatenation_token1] = actions(645);
	v->a[421][anon_sym_BQUOTE] = actions(645);
	v->a[421][sym_comment] = actions(3);
	v->a[421][anon_sym_SEMI] = actions(645);
	v->a[421][anon_sym_SEMI_SEMI] = actions(645);
	v->a[421][aux_sym_terminator_token1] = actions(647);
	v->a[421][sym__concat] = actions(647);
	v->a[421][sym_variable_name] = actions(647);
	v->a[422][ts_builtin_sym_end] = actions(649);
	return (parse_table_515(v));
}

/* EOF parse_table_102.c */
