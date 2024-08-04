/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_80.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_400(t_parse_table_array *v)
{
	v->a[176][anon_sym_DQUOTE] = actions(564);
	v->a[176][sym_raw_string] = actions(555);
	v->a[176][sym_number] = actions(555);
	v->a[176][anon_sym_DOLLAR_LBRACE] = actions(567);
	v->a[176][anon_sym_DOLLAR_LPAREN] = actions(570);
	v->a[176][anon_sym_BQUOTE] = actions(573);
	v->a[176][sym_comment] = actions(3);
	v->a[176][anon_sym_SEMI] = actions(428);
	v->a[176][sym_variable_name] = actions(448);
	v->a[177][sym_variable_assignment] = state(970);
	v->a[177][sym_file_redirect] = state(971);
	v->a[177][sym_heredoc_redirect] = state(971);
	v->a[177][sym_terminator] = state(381);
	v->a[177][aux_sym_redirected_statement_repeat1] = state(971);
	v->a[177][aux_sym__variable_assignments_repeat1] = state(970);
	v->a[177][sym_word] = actions(576);
	v->a[177][anon_sym_esac] = actions(578);
	v->a[177][anon_sym_PIPE] = actions(580);
	v->a[177][anon_sym_SEMI_SEMI] = actions(578);
	v->a[177][anon_sym_AMP_AMP] = actions(582);
	return (parse_table_401(v));
}

void	parse_table_401(t_parse_table_array *v)
{
	v->a[177][anon_sym_PIPE_PIPE] = actions(582);
	v->a[177][anon_sym_LT] = actions(576);
	v->a[177][anon_sym_GT] = actions(576);
	v->a[177][anon_sym_GT_GT] = actions(576);
	v->a[177][anon_sym_LT_LT] = actions(584);
	v->a[177][aux_sym_heredoc_redirect_token1] = actions(586);
	v->a[177][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(576);
	v->a[177][anon_sym_DOLLAR] = actions(576);
	v->a[177][anon_sym_DQUOTE] = actions(576);
	v->a[177][sym_raw_string] = actions(576);
	v->a[177][sym_number] = actions(576);
	v->a[177][anon_sym_DOLLAR_LBRACE] = actions(576);
	v->a[177][anon_sym_DOLLAR_LPAREN] = actions(576);
	v->a[177][anon_sym_BQUOTE] = actions(576);
	v->a[177][sym_comment] = actions(3);
	v->a[177][anon_sym_SEMI] = actions(586);
	v->a[177][sym_variable_name] = actions(588);
	v->a[178][sym_variable_assignment] = state(963);
	v->a[178][sym_file_redirect] = state(916);
	v->a[178][sym_heredoc_redirect] = state(916);
	return (parse_table_402(v));
}

void	parse_table_402(t_parse_table_array *v)
{
	v->a[178][sym_terminator] = state(361);
	v->a[178][aux_sym_redirected_statement_repeat1] = state(916);
	v->a[178][aux_sym__variable_assignments_repeat1] = state(963);
	v->a[178][sym_word] = actions(576);
	v->a[178][anon_sym_PIPE] = actions(580);
	v->a[178][anon_sym_RPAREN] = actions(591);
	v->a[178][anon_sym_SEMI_SEMI] = actions(593);
	v->a[178][anon_sym_AMP_AMP] = actions(595);
	v->a[178][anon_sym_PIPE_PIPE] = actions(595);
	v->a[178][anon_sym_LT] = actions(576);
	v->a[178][anon_sym_GT] = actions(576);
	v->a[178][anon_sym_GT_GT] = actions(576);
	v->a[178][anon_sym_LT_LT] = actions(597);
	v->a[178][aux_sym_heredoc_redirect_token1] = actions(593);
	v->a[178][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(576);
	v->a[178][anon_sym_DOLLAR] = actions(576);
	v->a[178][anon_sym_DQUOTE] = actions(576);
	v->a[178][sym_raw_string] = actions(576);
	v->a[178][sym_number] = actions(576);
	v->a[178][anon_sym_DOLLAR_LBRACE] = actions(576);
	return (parse_table_403(v));
}

void	parse_table_403(t_parse_table_array *v)
{
	v->a[178][anon_sym_DOLLAR_LPAREN] = actions(576);
	v->a[178][anon_sym_BQUOTE] = actions(576);
	v->a[178][sym_comment] = actions(3);
	v->a[178][anon_sym_SEMI] = actions(593);
	v->a[178][sym_variable_name] = actions(599);
	v->a[179][sym_arithmetic_expansion] = state(431);
	v->a[179][sym_concatenation] = state(570);
	v->a[179][sym_string] = state(431);
	v->a[179][sym_simple_expansion] = state(431);
	v->a[179][sym_expansion] = state(431);
	v->a[179][sym_command_substitution] = state(431);
	v->a[179][aux_sym_command_repeat2] = state(199);
	v->a[179][sym_word] = actions(602);
	v->a[179][anon_sym_PIPE] = actions(417);
	v->a[179][anon_sym_SEMI_SEMI] = actions(417);
	v->a[179][anon_sym_AMP_AMP] = actions(417);
	v->a[179][anon_sym_PIPE_PIPE] = actions(417);
	v->a[179][anon_sym_LT] = actions(417);
	v->a[179][anon_sym_GT] = actions(417);
	v->a[179][anon_sym_GT_GT] = actions(417);
	return (parse_table_404(v));
}

void	parse_table_404(t_parse_table_array *v)
{
	v->a[179][anon_sym_LT_LT] = actions(417);
	v->a[179][aux_sym_heredoc_redirect_token1] = actions(417);
	v->a[179][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[179][anon_sym_DOLLAR] = actions(55);
	v->a[179][anon_sym_DQUOTE] = actions(57);
	v->a[179][sym_raw_string] = actions(602);
	v->a[179][sym_number] = actions(602);
	v->a[179][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[179][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[179][anon_sym_BQUOTE] = actions(417);
	v->a[179][sym_comment] = actions(3);
	v->a[179][anon_sym_SEMI] = actions(417);
	v->a[179][sym__bare_dollar] = actions(419);
	v->a[180][sym_arithmetic_expansion] = state(431);
	v->a[180][sym_concatenation] = state(570);
	v->a[180][sym_string] = state(431);
	v->a[180][sym_simple_expansion] = state(431);
	v->a[180][sym_expansion] = state(431);
	v->a[180][sym_command_substitution] = state(431);
	v->a[180][aux_sym_command_repeat2] = state(189);
	return (parse_table_405(v));
}

/* EOF parse_table_80.c */
