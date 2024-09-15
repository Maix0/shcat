/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_99.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_495(t_parse_table_array *v)
{
	v->a[399][anon_sym_DOLLAR] = actions(883);
	v->a[399][anon_sym_DQUOTE] = actions(883);
	v->a[399][sym_raw_string] = actions(883);
	v->a[399][sym_number] = actions(883);
	v->a[399][anon_sym_DOLLAR_LBRACE] = actions(883);
	v->a[399][anon_sym_DOLLAR_LPAREN] = actions(883);
	v->a[399][anon_sym_BQUOTE] = actions(883);
	v->a[399][sym_comment] = actions(3);
	v->a[399][sym_variable_name] = actions(885);
	v->a[400][sym_arithmetic_expansion] = state(475);
	v->a[400][sym_concatenation] = state(518);
	v->a[400][sym_string] = state(475);
	v->a[400][sym_simple_expansion] = state(475);
	v->a[400][sym_expansion] = state(475);
	v->a[400][sym_command_substitution] = state(475);
	v->a[400][sym_word] = actions(1065);
	v->a[400][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(909);
	v->a[400][anon_sym_DOLLAR] = actions(973);
	v->a[400][anon_sym_DQUOTE] = actions(913);
	v->a[400][sym_raw_string] = actions(1065);
	return (parse_table_496(v));
}

void	parse_table_496(t_parse_table_array *v)
{
	v->a[400][sym_number] = actions(1065);
	v->a[400][anon_sym_DOLLAR_LBRACE] = actions(915);
	v->a[400][anon_sym_DOLLAR_LPAREN] = actions(917);
	v->a[400][anon_sym_BQUOTE] = actions(919);
	v->a[400][sym_comment] = actions(3);
	v->a[400][sym__comment_word] = actions(975);
	v->a[400][sym__empty_value] = actions(977);
	v->a[401][sym_arithmetic_expansion] = state(235);
	v->a[401][sym_string] = state(235);
	v->a[401][sym_simple_expansion] = state(235);
	v->a[401][sym_expansion] = state(235);
	v->a[401][sym_command_substitution] = state(235);
	v->a[401][sym_word] = actions(1057);
	v->a[401][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(380);
	v->a[401][aux_sym_concatenation_token1] = actions(1057);
	v->a[401][anon_sym_DOLLAR] = actions(382);
	v->a[401][anon_sym_DQUOTE] = actions(384);
	v->a[401][sym_raw_string] = actions(1057);
	v->a[401][sym_number] = actions(1057);
	v->a[401][anon_sym_DOLLAR_LBRACE] = actions(386);
	return (parse_table_497(v));
}

void	parse_table_497(t_parse_table_array *v)
{
	v->a[401][anon_sym_DOLLAR_LPAREN] = actions(388);
	v->a[401][anon_sym_BQUOTE] = actions(390);
	v->a[401][sym_comment] = actions(3);
	v->a[401][sym__comment_word] = actions(1057);
	v->a[401][sym__bare_dollar] = actions(1061);
	v->a[402][sym_word] = actions(883);
	v->a[402][anon_sym_LBRACE] = actions(883);
	v->a[402][anon_sym_LPAREN] = actions(883);
	v->a[402][anon_sym_RPAREN] = actions(1023);
	v->a[402][anon_sym_BANG] = actions(883);
	v->a[402][anon_sym_LT] = actions(883);
	v->a[402][anon_sym_GT] = actions(883);
	v->a[402][anon_sym_GT_GT] = actions(883);
	v->a[402][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(883);
	v->a[402][anon_sym_DOLLAR] = actions(883);
	v->a[402][anon_sym_DQUOTE] = actions(883);
	v->a[402][sym_raw_string] = actions(883);
	v->a[402][sym_number] = actions(883);
	v->a[402][anon_sym_DOLLAR_LBRACE] = actions(883);
	v->a[402][anon_sym_DOLLAR_LPAREN] = actions(883);
	return (parse_table_498(v));
}

void	parse_table_498(t_parse_table_array *v)
{
	v->a[402][anon_sym_BQUOTE] = actions(883);
	v->a[402][sym_comment] = actions(3);
	v->a[402][sym_variable_name] = actions(885);
	v->a[403][sym_word] = actions(883);
	v->a[403][anon_sym_LBRACE] = actions(883);
	v->a[403][anon_sym_LPAREN] = actions(883);
	v->a[403][anon_sym_RPAREN] = actions(1023);
	v->a[403][anon_sym_BANG] = actions(883);
	v->a[403][anon_sym_LT] = actions(883);
	v->a[403][anon_sym_GT] = actions(883);
	v->a[403][anon_sym_GT_GT] = actions(883);
	v->a[403][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(883);
	v->a[403][anon_sym_DOLLAR] = actions(883);
	v->a[403][anon_sym_DQUOTE] = actions(883);
	v->a[403][sym_raw_string] = actions(883);
	v->a[403][sym_number] = actions(883);
	v->a[403][anon_sym_DOLLAR_LBRACE] = actions(883);
	v->a[403][anon_sym_DOLLAR_LPAREN] = actions(883);
	v->a[403][anon_sym_BQUOTE] = actions(883);
	v->a[403][sym_comment] = actions(3);
	return (parse_table_499(v));
}

void	parse_table_499(t_parse_table_array *v)
{
	v->a[403][sym_variable_name] = actions(885);
	v->a[404][sym_word] = actions(883);
	v->a[404][anon_sym_LBRACE] = actions(883);
	v->a[404][anon_sym_LPAREN] = actions(883);
	v->a[404][anon_sym_RPAREN] = actions(1023);
	v->a[404][anon_sym_BANG] = actions(883);
	v->a[404][anon_sym_LT] = actions(883);
	v->a[404][anon_sym_GT] = actions(883);
	v->a[404][anon_sym_GT_GT] = actions(883);
	v->a[404][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(883);
	v->a[404][anon_sym_DOLLAR] = actions(883);
	v->a[404][anon_sym_DQUOTE] = actions(883);
	v->a[404][sym_raw_string] = actions(883);
	v->a[404][sym_number] = actions(883);
	v->a[404][anon_sym_DOLLAR_LBRACE] = actions(883);
	v->a[404][anon_sym_DOLLAR_LPAREN] = actions(883);
	v->a[404][anon_sym_BQUOTE] = actions(883);
	v->a[404][sym_comment] = actions(3);
	v->a[404][sym_variable_name] = actions(885);
	v->a[405][sym_arithmetic_expansion] = state(162);
	return (parse_table_500(v));
}

/* EOF parse_table_99.c */
