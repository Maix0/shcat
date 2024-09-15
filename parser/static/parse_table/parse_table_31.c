/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_31.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_155(t_parse_table_array *v)
{
	v->a[90][aux_sym_command_repeat2] = state(79);
	v->a[90][sym_word] = actions(329);
	v->a[90][anon_sym_PIPE] = actions(209);
	v->a[90][anon_sym_AMP_AMP] = actions(209);
	v->a[90][anon_sym_PIPE_PIPE] = actions(209);
	v->a[90][anon_sym_LT] = actions(209);
	v->a[90][anon_sym_GT] = actions(209);
	v->a[90][anon_sym_GT_GT] = actions(209);
	v->a[90][anon_sym_LT_LT] = actions(209);
	v->a[90][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[90][anon_sym_DOLLAR] = actions(77);
	v->a[90][anon_sym_DQUOTE] = actions(79);
	v->a[90][sym_raw_string] = actions(329);
	v->a[90][sym_number] = actions(329);
	v->a[90][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[90][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[90][anon_sym_BQUOTE] = actions(209);
	v->a[90][sym_comment] = actions(3);
	v->a[90][anon_sym_SEMI] = actions(209);
	v->a[90][anon_sym_SEMI_SEMI] = actions(209);
	return (parse_table_156(v));
}

void	parse_table_156(t_parse_table_array *v)
{
	v->a[90][aux_sym_terminator_token1] = actions(209);
	v->a[90][sym__bare_dollar] = actions(211);
	v->a[91][sym_arithmetic_expansion] = state(147);
	v->a[91][sym_concatenation] = state(86);
	v->a[91][sym_string] = state(147);
	v->a[91][sym_simple_expansion] = state(147);
	v->a[91][sym_expansion] = state(147);
	v->a[91][sym_command_substitution] = state(147);
	v->a[91][aux_sym_file_redirect_repeat1] = state(86);
	v->a[91][ts_builtin_sym_end] = actions(203);
	v->a[91][sym_word] = actions(427);
	v->a[91][anon_sym_PIPE] = actions(205);
	v->a[91][anon_sym_AMP_AMP] = actions(205);
	v->a[91][anon_sym_PIPE_PIPE] = actions(205);
	v->a[91][anon_sym_LT] = actions(205);
	v->a[91][anon_sym_GT] = actions(205);
	v->a[91][anon_sym_GT_GT] = actions(205);
	v->a[91][anon_sym_LT_LT] = actions(205);
	v->a[91][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(429);
	v->a[91][anon_sym_DOLLAR] = actions(431);
	return (parse_table_157(v));
}

void	parse_table_157(t_parse_table_array *v)
{
	v->a[91][anon_sym_DQUOTE] = actions(433);
	v->a[91][sym_raw_string] = actions(427);
	v->a[91][sym_number] = actions(427);
	v->a[91][anon_sym_DOLLAR_LBRACE] = actions(435);
	v->a[91][anon_sym_DOLLAR_LPAREN] = actions(437);
	v->a[91][anon_sym_BQUOTE] = actions(439);
	v->a[91][sym_comment] = actions(3);
	v->a[91][anon_sym_SEMI] = actions(205);
	v->a[91][anon_sym_SEMI_SEMI] = actions(205);
	v->a[91][aux_sym_terminator_token1] = actions(205);
	v->a[92][sym_arithmetic_expansion] = state(221);
	v->a[92][sym_concatenation] = state(108);
	v->a[92][sym_string] = state(221);
	v->a[92][sym_simple_expansion] = state(221);
	v->a[92][sym_expansion] = state(221);
	v->a[92][sym_command_substitution] = state(221);
	v->a[92][aux_sym_file_redirect_repeat1] = state(108);
	v->a[92][sym_word] = actions(441);
	v->a[92][anon_sym_PIPE] = actions(205);
	v->a[92][anon_sym_AMP_AMP] = actions(205);
	return (parse_table_158(v));
}

void	parse_table_158(t_parse_table_array *v)
{
	v->a[92][anon_sym_PIPE_PIPE] = actions(205);
	v->a[92][anon_sym_LT] = actions(205);
	v->a[92][anon_sym_GT] = actions(205);
	v->a[92][anon_sym_GT_GT] = actions(205);
	v->a[92][anon_sym_LT_LT] = actions(205);
	v->a[92][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(380);
	v->a[92][anon_sym_DOLLAR] = actions(382);
	v->a[92][anon_sym_DQUOTE] = actions(384);
	v->a[92][sym_raw_string] = actions(441);
	v->a[92][sym_number] = actions(441);
	v->a[92][anon_sym_DOLLAR_LBRACE] = actions(386);
	v->a[92][anon_sym_DOLLAR_LPAREN] = actions(388);
	v->a[92][anon_sym_BQUOTE] = actions(390);
	v->a[92][sym_comment] = actions(3);
	v->a[92][anon_sym_SEMI] = actions(205);
	v->a[92][anon_sym_SEMI_SEMI] = actions(205);
	v->a[92][aux_sym_terminator_token1] = actions(205);
	v->a[93][sym_subshell] = state(544);
	v->a[93][sym_command] = state(540);
	v->a[93][sym_command_name] = state(89);
	return (parse_table_159(v));
}

void	parse_table_159(t_parse_table_array *v)
{
	v->a[93][sym_variable_assignment] = state(270);
	v->a[93][sym_file_redirect] = state(539);
	v->a[93][sym_arithmetic_expansion] = state(176);
	v->a[93][sym_concatenation] = state(250);
	v->a[93][sym_string] = state(176);
	v->a[93][sym_simple_expansion] = state(176);
	v->a[93][sym_expansion] = state(176);
	v->a[93][sym_command_substitution] = state(176);
	v->a[93][aux_sym_command_repeat1] = state(139);
	v->a[93][sym_word] = actions(69);
	v->a[93][anon_sym_LPAREN] = actions(11);
	v->a[93][anon_sym_LT] = actions(443);
	v->a[93][anon_sym_GT] = actions(443);
	v->a[93][anon_sym_GT_GT] = actions(443);
	v->a[93][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[93][anon_sym_DOLLAR] = actions(77);
	v->a[93][anon_sym_DQUOTE] = actions(79);
	v->a[93][sym_raw_string] = actions(69);
	v->a[93][sym_number] = actions(69);
	v->a[93][anon_sym_DOLLAR_LBRACE] = actions(81);
	return (parse_table_160(v));
}

/* EOF parse_table_31.c */
