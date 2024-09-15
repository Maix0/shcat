/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_27.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_135(t_parse_table_array *v)
{
	v->a[75][aux_sym_terminator_token1] = actions(362);
	v->a[75][sym_variable_name] = actions(364);
	v->a[76][sym_variable_assignment] = state(516);
	v->a[76][sym_file_redirect] = state(515);
	v->a[76][sym_heredoc_redirect] = state(515);
	v->a[76][sym_terminator] = state(379);
	v->a[76][aux_sym_redirected_statement_repeat1] = state(515);
	v->a[76][aux_sym__variable_assignments_repeat1] = state(516);
	v->a[76][ts_builtin_sym_end] = actions(367);
	v->a[76][sym_word] = actions(352);
	v->a[76][anon_sym_PIPE] = actions(356);
	v->a[76][anon_sym_AMP_AMP] = actions(369);
	v->a[76][anon_sym_PIPE_PIPE] = actions(369);
	v->a[76][anon_sym_LT] = actions(352);
	v->a[76][anon_sym_GT] = actions(352);
	v->a[76][anon_sym_GT_GT] = actions(352);
	v->a[76][anon_sym_LT_LT] = actions(360);
	v->a[76][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(352);
	v->a[76][anon_sym_DOLLAR] = actions(352);
	v->a[76][anon_sym_DQUOTE] = actions(352);
	return (parse_table_136(v));
}

void	parse_table_136(t_parse_table_array *v)
{
	v->a[76][sym_raw_string] = actions(352);
	v->a[76][sym_number] = actions(352);
	v->a[76][anon_sym_DOLLAR_LBRACE] = actions(352);
	v->a[76][anon_sym_DOLLAR_LPAREN] = actions(352);
	v->a[76][anon_sym_BQUOTE] = actions(352);
	v->a[76][sym_comment] = actions(3);
	v->a[76][anon_sym_SEMI] = actions(371);
	v->a[76][anon_sym_SEMI_SEMI] = actions(371);
	v->a[76][aux_sym_terminator_token1] = actions(371);
	v->a[76][sym_variable_name] = actions(373);
	v->a[77][sym_variable_assignment] = state(504);
	v->a[77][sym_file_redirect] = state(503);
	v->a[77][sym_heredoc_redirect] = state(503);
	v->a[77][sym_terminator] = state(377);
	v->a[77][aux_sym_redirected_statement_repeat1] = state(503);
	v->a[77][aux_sym__variable_assignments_repeat1] = state(504);
	v->a[77][sym_word] = actions(352);
	v->a[77][anon_sym_RPAREN] = actions(376);
	v->a[77][anon_sym_PIPE] = actions(356);
	v->a[77][anon_sym_AMP_AMP] = actions(358);
	return (parse_table_137(v));
}

void	parse_table_137(t_parse_table_array *v)
{
	v->a[77][anon_sym_PIPE_PIPE] = actions(358);
	v->a[77][anon_sym_LT] = actions(352);
	v->a[77][anon_sym_GT] = actions(352);
	v->a[77][anon_sym_GT_GT] = actions(352);
	v->a[77][anon_sym_LT_LT] = actions(360);
	v->a[77][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(352);
	v->a[77][anon_sym_DOLLAR] = actions(352);
	v->a[77][anon_sym_DQUOTE] = actions(352);
	v->a[77][sym_raw_string] = actions(352);
	v->a[77][sym_number] = actions(352);
	v->a[77][anon_sym_DOLLAR_LBRACE] = actions(352);
	v->a[77][anon_sym_DOLLAR_LPAREN] = actions(352);
	v->a[77][anon_sym_BQUOTE] = actions(352);
	v->a[77][sym_comment] = actions(3);
	v->a[77][anon_sym_SEMI] = actions(362);
	v->a[77][anon_sym_SEMI_SEMI] = actions(362);
	v->a[77][aux_sym_terminator_token1] = actions(362);
	v->a[77][sym_variable_name] = actions(364);
	v->a[78][sym_arithmetic_expansion] = state(168);
	v->a[78][sym_concatenation] = state(74);
	return (parse_table_138(v));
}

void	parse_table_138(t_parse_table_array *v)
{
	v->a[78][sym_string] = state(168);
	v->a[78][sym_simple_expansion] = state(168);
	v->a[78][sym_expansion] = state(168);
	v->a[78][sym_command_substitution] = state(168);
	v->a[78][aux_sym_file_redirect_repeat1] = state(74);
	v->a[78][sym_word] = actions(378);
	v->a[78][anon_sym_RPAREN] = actions(205);
	v->a[78][anon_sym_PIPE] = actions(205);
	v->a[78][anon_sym_AMP_AMP] = actions(205);
	v->a[78][anon_sym_PIPE_PIPE] = actions(205);
	v->a[78][anon_sym_LT] = actions(205);
	v->a[78][anon_sym_GT] = actions(205);
	v->a[78][anon_sym_GT_GT] = actions(205);
	v->a[78][anon_sym_LT_LT] = actions(205);
	v->a[78][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(380);
	v->a[78][anon_sym_DOLLAR] = actions(382);
	v->a[78][anon_sym_DQUOTE] = actions(384);
	v->a[78][sym_raw_string] = actions(378);
	v->a[78][sym_number] = actions(378);
	v->a[78][anon_sym_DOLLAR_LBRACE] = actions(386);
	return (parse_table_139(v));
}

void	parse_table_139(t_parse_table_array *v)
{
	v->a[78][anon_sym_DOLLAR_LPAREN] = actions(388);
	v->a[78][anon_sym_BQUOTE] = actions(390);
	v->a[78][sym_comment] = actions(3);
	v->a[78][anon_sym_SEMI] = actions(205);
	v->a[78][anon_sym_SEMI_SEMI] = actions(205);
	v->a[78][aux_sym_terminator_token1] = actions(205);
	v->a[79][sym_arithmetic_expansion] = state(195);
	v->a[79][sym_concatenation] = state(262);
	v->a[79][sym_string] = state(195);
	v->a[79][sym_simple_expansion] = state(195);
	v->a[79][sym_expansion] = state(195);
	v->a[79][sym_command_substitution] = state(195);
	v->a[79][aux_sym_command_repeat2] = state(79);
	v->a[79][sym_word] = actions(392);
	v->a[79][anon_sym_PIPE] = actions(261);
	v->a[79][anon_sym_AMP_AMP] = actions(261);
	v->a[79][anon_sym_PIPE_PIPE] = actions(261);
	v->a[79][anon_sym_LT] = actions(261);
	v->a[79][anon_sym_GT] = actions(261);
	v->a[79][anon_sym_GT_GT] = actions(261);
	return (parse_table_140(v));
}

/* EOF parse_table_27.c */
