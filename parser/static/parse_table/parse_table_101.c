/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_101.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_505(t_parse_table_array *v)
{
	v->a[253][anon_sym_BQUOTE] = actions(65);
	v->a[253][sym_comment] = actions(3);
	v->a[253][sym__bare_dollar] = actions(419);
	v->a[254][sym_variable_assignment] = state(967);
	v->a[254][sym_file_redirect] = state(925);
	v->a[254][sym_heredoc_redirect] = state(925);
	v->a[254][aux_sym_redirected_statement_repeat1] = state(925);
	v->a[254][aux_sym__variable_assignments_repeat1] = state(967);
	v->a[254][sym_word] = actions(576);
	v->a[254][anon_sym_PIPE] = actions(580);
	v->a[254][anon_sym_SEMI_SEMI] = actions(816);
	v->a[254][anon_sym_AMP_AMP] = actions(816);
	v->a[254][anon_sym_PIPE_PIPE] = actions(816);
	v->a[254][anon_sym_LT] = actions(576);
	v->a[254][anon_sym_GT] = actions(576);
	v->a[254][anon_sym_GT_GT] = actions(576);
	v->a[254][anon_sym_LT_LT] = actions(816);
	v->a[254][aux_sym_heredoc_redirect_token1] = actions(816);
	v->a[254][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(576);
	v->a[254][anon_sym_DOLLAR] = actions(576);
	return (parse_table_506(v));
}

void	parse_table_506(t_parse_table_array *v)
{
	v->a[254][anon_sym_DQUOTE] = actions(576);
	v->a[254][sym_raw_string] = actions(576);
	v->a[254][sym_number] = actions(576);
	v->a[254][anon_sym_DOLLAR_LBRACE] = actions(576);
	v->a[254][anon_sym_DOLLAR_LPAREN] = actions(576);
	v->a[254][anon_sym_BQUOTE] = actions(576);
	v->a[254][sym_comment] = actions(3);
	v->a[254][anon_sym_SEMI] = actions(816);
	v->a[254][sym_variable_name] = actions(764);
	v->a[255][sym_arithmetic_expansion] = state(574);
	v->a[255][sym_concatenation] = state(570);
	v->a[255][sym_string] = state(574);
	v->a[255][sym_simple_expansion] = state(574);
	v->a[255][sym_expansion] = state(574);
	v->a[255][sym_command_substitution] = state(574);
	v->a[255][aux_sym_command_repeat2] = state(241);
	v->a[255][sym_word] = actions(871);
	v->a[255][anon_sym_PIPE] = actions(411);
	v->a[255][anon_sym_AMP_AMP] = actions(411);
	v->a[255][anon_sym_PIPE_PIPE] = actions(411);
	return (parse_table_507(v));
}

void	parse_table_507(t_parse_table_array *v)
{
	v->a[255][anon_sym_LT] = actions(411);
	v->a[255][anon_sym_GT] = actions(411);
	v->a[255][anon_sym_GT_GT] = actions(411);
	v->a[255][anon_sym_LT_LT] = actions(411);
	v->a[255][aux_sym_heredoc_redirect_token1] = actions(411);
	v->a[255][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[255][anon_sym_DOLLAR] = actions(55);
	v->a[255][anon_sym_DQUOTE] = actions(57);
	v->a[255][sym_raw_string] = actions(871);
	v->a[255][sym_number] = actions(871);
	v->a[255][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[255][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[255][anon_sym_BQUOTE] = actions(65);
	v->a[255][sym_comment] = actions(3);
	v->a[255][sym__bare_dollar] = actions(419);
	v->a[256][sym_arithmetic_expansion] = state(593);
	v->a[256][sym_concatenation] = state(256);
	v->a[256][sym_string] = state(593);
	v->a[256][sym_simple_expansion] = state(593);
	v->a[256][sym_expansion] = state(593);
	return (parse_table_508(v));
}

void	parse_table_508(t_parse_table_array *v)
{
	v->a[256][sym_command_substitution] = state(593);
	v->a[256][aux_sym_for_statement_repeat1] = state(256);
	v->a[256][sym_word] = actions(873);
	v->a[256][anon_sym_PIPE] = actions(428);
	v->a[256][anon_sym_AMP_AMP] = actions(428);
	v->a[256][anon_sym_PIPE_PIPE] = actions(428);
	v->a[256][anon_sym_LT] = actions(428);
	v->a[256][anon_sym_GT] = actions(428);
	v->a[256][anon_sym_GT_GT] = actions(428);
	v->a[256][anon_sym_LT_LT] = actions(428);
	v->a[256][aux_sym_heredoc_redirect_token1] = actions(428);
	v->a[256][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(607);
	v->a[256][anon_sym_DOLLAR] = actions(610);
	v->a[256][anon_sym_DQUOTE] = actions(613);
	v->a[256][sym_raw_string] = actions(873);
	v->a[256][sym_number] = actions(873);
	v->a[256][anon_sym_DOLLAR_LBRACE] = actions(616);
	v->a[256][anon_sym_DOLLAR_LPAREN] = actions(619);
	v->a[256][anon_sym_BQUOTE] = actions(622);
	v->a[256][sym_comment] = actions(3);
	return (parse_table_509(v));
}

void	parse_table_509(t_parse_table_array *v)
{
	v->a[257][aux_sym_concatenation_repeat1] = state(422);
	v->a[257][sym_word] = actions(833);
	v->a[257][anon_sym_LPAREN] = actions(876);
	v->a[257][anon_sym_PIPE] = actions(833);
	v->a[257][anon_sym_SEMI_SEMI] = actions(833);
	v->a[257][anon_sym_AMP_AMP] = actions(833);
	v->a[257][anon_sym_PIPE_PIPE] = actions(833);
	v->a[257][anon_sym_LT] = actions(833);
	v->a[257][anon_sym_GT] = actions(833);
	v->a[257][anon_sym_GT_GT] = actions(833);
	v->a[257][anon_sym_LT_LT] = actions(833);
	v->a[257][aux_sym_heredoc_redirect_token1] = actions(833);
	v->a[257][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(833);
	v->a[257][aux_sym_concatenation_token1] = actions(857);
	v->a[257][anon_sym_DOLLAR] = actions(833);
	v->a[257][anon_sym_DQUOTE] = actions(833);
	v->a[257][sym_raw_string] = actions(833);
	v->a[257][sym_number] = actions(833);
	v->a[257][anon_sym_DOLLAR_LBRACE] = actions(833);
	v->a[257][anon_sym_DOLLAR_LPAREN] = actions(833);
	return (parse_table_510(v));
}

/* EOF parse_table_101.c */
