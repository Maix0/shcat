/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_28.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_140(t_parse_table_array *v)
{
	v->a[79][anon_sym_LT_LT] = actions(261);
	v->a[79][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(287);
	v->a[79][anon_sym_DOLLAR] = actions(290);
	v->a[79][anon_sym_DQUOTE] = actions(293);
	v->a[79][sym_raw_string] = actions(392);
	v->a[79][sym_number] = actions(392);
	v->a[79][anon_sym_DOLLAR_LBRACE] = actions(296);
	v->a[79][anon_sym_DOLLAR_LPAREN] = actions(299);
	v->a[79][anon_sym_BQUOTE] = actions(302);
	v->a[79][sym_comment] = actions(3);
	v->a[79][anon_sym_SEMI] = actions(261);
	v->a[79][anon_sym_SEMI_SEMI] = actions(261);
	v->a[79][aux_sym_terminator_token1] = actions(261);
	v->a[79][sym__bare_dollar] = actions(305);
	v->a[80][sym_arithmetic_expansion] = state(195);
	v->a[80][sym_concatenation] = state(262);
	v->a[80][sym_string] = state(195);
	v->a[80][sym_simple_expansion] = state(195);
	v->a[80][sym_expansion] = state(195);
	v->a[80][sym_command_substitution] = state(195);
	return (parse_table_141(v));
}

void	parse_table_141(t_parse_table_array *v)
{
	v->a[80][aux_sym_command_repeat2] = state(79);
	v->a[80][sym_word] = actions(329);
	v->a[80][anon_sym_PIPE] = actions(246);
	v->a[80][anon_sym_AMP_AMP] = actions(246);
	v->a[80][anon_sym_PIPE_PIPE] = actions(246);
	v->a[80][anon_sym_LT] = actions(246);
	v->a[80][anon_sym_GT] = actions(246);
	v->a[80][anon_sym_GT_GT] = actions(246);
	v->a[80][anon_sym_LT_LT] = actions(246);
	v->a[80][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[80][anon_sym_DOLLAR] = actions(77);
	v->a[80][anon_sym_DQUOTE] = actions(79);
	v->a[80][sym_raw_string] = actions(329);
	v->a[80][sym_number] = actions(329);
	v->a[80][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[80][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[80][anon_sym_BQUOTE] = actions(85);
	v->a[80][sym_comment] = actions(3);
	v->a[80][anon_sym_SEMI] = actions(246);
	v->a[80][anon_sym_SEMI_SEMI] = actions(246);
	return (parse_table_142(v));
}

void	parse_table_142(t_parse_table_array *v)
{
	v->a[80][aux_sym_terminator_token1] = actions(246);
	v->a[80][sym__bare_dollar] = actions(211);
	v->a[81][sym_word] = actions(163);
	v->a[81][anon_sym_PIPE] = actions(163);
	v->a[81][anon_sym_AMP_AMP] = actions(163);
	v->a[81][anon_sym_PIPE_PIPE] = actions(163);
	v->a[81][anon_sym_BANG] = actions(395);
	v->a[81][anon_sym_LT] = actions(163);
	v->a[81][anon_sym_GT] = actions(163);
	v->a[81][anon_sym_GT_GT] = actions(163);
	v->a[81][anon_sym_LT_LT] = actions(163);
	v->a[81][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(163);
	v->a[81][anon_sym_DASH] = actions(395);
	v->a[81][anon_sym_STAR] = actions(395);
	v->a[81][anon_sym_QMARK] = actions(395);
	v->a[81][anon_sym_DOLLAR] = actions(395);
	v->a[81][anon_sym_DQUOTE] = actions(163);
	v->a[81][sym_raw_string] = actions(163);
	v->a[81][sym_number] = actions(163);
	v->a[81][anon_sym_POUND] = actions(395);
	return (parse_table_143(v));
}

void	parse_table_143(t_parse_table_array *v)
{
	v->a[81][anon_sym_DOLLAR_LBRACE] = actions(163);
	v->a[81][anon_sym_DOLLAR_LPAREN] = actions(163);
	v->a[81][anon_sym_BQUOTE] = actions(163);
	v->a[81][sym_comment] = actions(3);
	v->a[81][aux_sym__simple_variable_name_token1] = actions(397);
	v->a[81][aux_sym__multiline_variable_name_token1] = actions(397);
	v->a[81][anon_sym_AT] = actions(395);
	v->a[81][anon_sym_0] = actions(395);
	v->a[81][sym_variable_name] = actions(399);
	v->a[81][sym__bare_dollar] = actions(171);
	v->a[82][sym_arithmetic_expansion] = state(185);
	v->a[82][sym_concatenation] = state(87);
	v->a[82][sym_string] = state(185);
	v->a[82][sym_simple_expansion] = state(185);
	v->a[82][sym_expansion] = state(185);
	v->a[82][sym_command_substitution] = state(185);
	v->a[82][aux_sym_file_redirect_repeat1] = state(87);
	v->a[82][sym_word] = actions(205);
	v->a[82][anon_sym_PIPE] = actions(205);
	v->a[82][anon_sym_AMP_AMP] = actions(205);
	return (parse_table_144(v));
}

void	parse_table_144(t_parse_table_array *v)
{
	v->a[82][anon_sym_PIPE_PIPE] = actions(205);
	v->a[82][anon_sym_LT] = actions(205);
	v->a[82][anon_sym_GT] = actions(205);
	v->a[82][anon_sym_GT_GT] = actions(205);
	v->a[82][anon_sym_LT_LT] = actions(205);
	v->a[82][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(205);
	v->a[82][anon_sym_DOLLAR] = actions(205);
	v->a[82][anon_sym_DQUOTE] = actions(205);
	v->a[82][sym_raw_string] = actions(205);
	v->a[82][sym_number] = actions(205);
	v->a[82][anon_sym_DOLLAR_LBRACE] = actions(205);
	v->a[82][anon_sym_DOLLAR_LPAREN] = actions(205);
	v->a[82][anon_sym_BQUOTE] = actions(205);
	v->a[82][sym_comment] = actions(3);
	v->a[82][anon_sym_SEMI] = actions(205);
	v->a[82][anon_sym_SEMI_SEMI] = actions(205);
	v->a[82][aux_sym_terminator_token1] = actions(205);
	v->a[82][sym_variable_name] = actions(203);
	v->a[83][sym_arithmetic_expansion] = state(195);
	v->a[83][sym_concatenation] = state(262);
	return (parse_table_145(v));
}

/* EOF parse_table_28.c */
