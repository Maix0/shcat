/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_82.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_410(t_parse_table_array *v)
{
	v->a[183][aux_sym__multiline_variable_name_token1] = actions(641);
	v->a[183][anon_sym_AT] = actions(639);
	v->a[183][anon_sym_0] = actions(639);
	v->a[183][sym_variable_name] = actions(643);
	v->a[183][sym__bare_dollar] = actions(351);
	v->a[184][sym_file_redirect] = state(1371);
	v->a[184][sym__heredoc_pipeline] = state(1593);
	v->a[184][sym__heredoc_expression] = state(1585);
	v->a[184][aux_sym__heredoc_command] = state(753);
	v->a[184][sym_arithmetic_expansion] = state(1011);
	v->a[184][sym_concatenation] = state(1296);
	v->a[184][sym_string] = state(1011);
	v->a[184][sym_simple_expansion] = state(1011);
	v->a[184][sym_expansion] = state(1011);
	v->a[184][sym_command_substitution] = state(1011);
	v->a[184][aux_sym_redirected_statement_repeat2] = state(1371);
	v->a[184][sym_word] = actions(645);
	v->a[184][anon_sym_PIPE] = actions(647);
	v->a[184][anon_sym_AMP_AMP] = actions(649);
	v->a[184][anon_sym_PIPE_PIPE] = actions(649);
	return (parse_table_411(v));
}

void	parse_table_411(t_parse_table_array *v)
{
	v->a[184][anon_sym_LT] = actions(651);
	v->a[184][anon_sym_GT] = actions(651);
	v->a[184][anon_sym_GT_GT] = actions(651);
	v->a[184][aux_sym_heredoc_redirect_token1] = actions(653);
	v->a[184][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(655);
	v->a[184][anon_sym_DOLLAR] = actions(657);
	v->a[184][anon_sym_DQUOTE] = actions(659);
	v->a[184][sym_raw_string] = actions(645);
	v->a[184][sym_number] = actions(645);
	v->a[184][anon_sym_DOLLAR_LBRACE] = actions(661);
	v->a[184][anon_sym_DOLLAR_LPAREN] = actions(663);
	v->a[184][anon_sym_BQUOTE] = actions(665);
	v->a[184][sym_comment] = actions(3);
	v->a[185][sym_arithmetic_expansion] = state(431);
	v->a[185][sym_concatenation] = state(570);
	v->a[185][sym_string] = state(431);
	v->a[185][sym_simple_expansion] = state(431);
	v->a[185][sym_expansion] = state(431);
	v->a[185][sym_command_substitution] = state(431);
	v->a[185][aux_sym_command_repeat2] = state(196);
	return (parse_table_412(v));
}

void	parse_table_412(t_parse_table_array *v)
{
	v->a[185][sym_word] = actions(602);
	v->a[185][anon_sym_PIPE] = actions(417);
	v->a[185][anon_sym_SEMI_SEMI] = actions(417);
	v->a[185][anon_sym_AMP_AMP] = actions(417);
	v->a[185][anon_sym_PIPE_PIPE] = actions(417);
	v->a[185][anon_sym_LT] = actions(417);
	v->a[185][anon_sym_GT] = actions(417);
	v->a[185][anon_sym_GT_GT] = actions(417);
	v->a[185][anon_sym_LT_LT] = actions(417);
	v->a[185][aux_sym_heredoc_redirect_token1] = actions(417);
	v->a[185][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[185][anon_sym_DOLLAR] = actions(55);
	v->a[185][anon_sym_DQUOTE] = actions(57);
	v->a[185][sym_raw_string] = actions(602);
	v->a[185][sym_number] = actions(602);
	v->a[185][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[185][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[185][anon_sym_BQUOTE] = actions(65);
	v->a[185][sym_comment] = actions(3);
	v->a[185][anon_sym_SEMI] = actions(417);
	return (parse_table_413(v));
}

void	parse_table_413(t_parse_table_array *v)
{
	v->a[185][sym__bare_dollar] = actions(419);
	v->a[186][sym_variable_assignment] = state(963);
	v->a[186][sym_file_redirect] = state(916);
	v->a[186][sym_heredoc_redirect] = state(916);
	v->a[186][sym_terminator] = state(428);
	v->a[186][aux_sym_redirected_statement_repeat1] = state(916);
	v->a[186][aux_sym__variable_assignments_repeat1] = state(963);
	v->a[186][sym_word] = actions(576);
	v->a[186][anon_sym_PIPE] = actions(580);
	v->a[186][anon_sym_RPAREN] = actions(578);
	v->a[186][anon_sym_SEMI_SEMI] = actions(593);
	v->a[186][anon_sym_AMP_AMP] = actions(595);
	v->a[186][anon_sym_PIPE_PIPE] = actions(595);
	v->a[186][anon_sym_LT] = actions(576);
	v->a[186][anon_sym_GT] = actions(576);
	v->a[186][anon_sym_GT_GT] = actions(576);
	v->a[186][anon_sym_LT_LT] = actions(597);
	v->a[186][aux_sym_heredoc_redirect_token1] = actions(593);
	v->a[186][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(576);
	v->a[186][anon_sym_DOLLAR] = actions(576);
	return (parse_table_414(v));
}

void	parse_table_414(t_parse_table_array *v)
{
	v->a[186][anon_sym_DQUOTE] = actions(576);
	v->a[186][sym_raw_string] = actions(576);
	v->a[186][sym_number] = actions(576);
	v->a[186][anon_sym_DOLLAR_LBRACE] = actions(576);
	v->a[186][anon_sym_DOLLAR_LPAREN] = actions(576);
	v->a[186][anon_sym_BQUOTE] = actions(576);
	v->a[186][sym_comment] = actions(3);
	v->a[186][anon_sym_SEMI] = actions(593);
	v->a[186][sym_variable_name] = actions(599);
	v->a[187][sym_arithmetic_expansion] = state(362);
	v->a[187][sym_concatenation] = state(187);
	v->a[187][sym_string] = state(362);
	v->a[187][sym_simple_expansion] = state(362);
	v->a[187][sym_expansion] = state(362);
	v->a[187][sym_command_substitution] = state(362);
	v->a[187][aux_sym_for_statement_repeat1] = state(187);
	v->a[187][sym_word] = actions(667);
	v->a[187][anon_sym_esac] = actions(428);
	v->a[187][anon_sym_PIPE] = actions(428);
	v->a[187][anon_sym_SEMI_SEMI] = actions(428);
	return (parse_table_415(v));
}

/* EOF parse_table_82.c */
