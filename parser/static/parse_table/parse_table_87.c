/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_87.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_435(t_parse_table_array *v)
{
	v->a[201][anon_sym_DQUOTE] = actions(564);
	v->a[201][sym_raw_string] = actions(718);
	v->a[201][sym_number] = actions(718);
	v->a[201][anon_sym_DOLLAR_LBRACE] = actions(567);
	v->a[201][anon_sym_DOLLAR_LPAREN] = actions(570);
	v->a[201][anon_sym_BQUOTE] = actions(573);
	v->a[201][sym_comment] = actions(3);
	v->a[201][anon_sym_SEMI] = actions(428);
	v->a[201][sym_variable_name] = actions(448);
	v->a[202][sym_arithmetic_expansion] = state(409);
	v->a[202][sym_concatenation] = state(203);
	v->a[202][sym_string] = state(409);
	v->a[202][sym_simple_expansion] = state(409);
	v->a[202][sym_expansion] = state(409);
	v->a[202][sym_command_substitution] = state(409);
	v->a[202][aux_sym_for_statement_repeat1] = state(203);
	v->a[202][ts_builtin_sym_end] = actions(423);
	v->a[202][sym_word] = actions(721);
	v->a[202][anon_sym_PIPE] = actions(421);
	v->a[202][anon_sym_SEMI_SEMI] = actions(421);
	return (parse_table_436(v));
}

void	parse_table_436(t_parse_table_array *v)
{
	v->a[202][anon_sym_AMP_AMP] = actions(421);
	v->a[202][anon_sym_PIPE_PIPE] = actions(421);
	v->a[202][anon_sym_LT] = actions(421);
	v->a[202][anon_sym_GT] = actions(421);
	v->a[202][anon_sym_GT_GT] = actions(421);
	v->a[202][anon_sym_LT_LT] = actions(421);
	v->a[202][aux_sym_heredoc_redirect_token1] = actions(421);
	v->a[202][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(723);
	v->a[202][anon_sym_DOLLAR] = actions(725);
	v->a[202][anon_sym_DQUOTE] = actions(727);
	v->a[202][sym_raw_string] = actions(721);
	v->a[202][sym_number] = actions(721);
	v->a[202][anon_sym_DOLLAR_LBRACE] = actions(729);
	v->a[202][anon_sym_DOLLAR_LPAREN] = actions(731);
	v->a[202][anon_sym_BQUOTE] = actions(733);
	v->a[202][sym_comment] = actions(3);
	v->a[202][anon_sym_SEMI] = actions(421);
	v->a[203][sym_arithmetic_expansion] = state(409);
	v->a[203][sym_concatenation] = state(203);
	v->a[203][sym_string] = state(409);
	return (parse_table_437(v));
}

void	parse_table_437(t_parse_table_array *v)
{
	v->a[203][sym_simple_expansion] = state(409);
	v->a[203][sym_expansion] = state(409);
	v->a[203][sym_command_substitution] = state(409);
	v->a[203][aux_sym_for_statement_repeat1] = state(203);
	v->a[203][ts_builtin_sym_end] = actions(448);
	v->a[203][sym_word] = actions(735);
	v->a[203][anon_sym_PIPE] = actions(428);
	v->a[203][anon_sym_SEMI_SEMI] = actions(428);
	v->a[203][anon_sym_AMP_AMP] = actions(428);
	v->a[203][anon_sym_PIPE_PIPE] = actions(428);
	v->a[203][anon_sym_LT] = actions(428);
	v->a[203][anon_sym_GT] = actions(428);
	v->a[203][anon_sym_GT_GT] = actions(428);
	v->a[203][anon_sym_LT_LT] = actions(428);
	v->a[203][aux_sym_heredoc_redirect_token1] = actions(428);
	v->a[203][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(738);
	v->a[203][anon_sym_DOLLAR] = actions(741);
	v->a[203][anon_sym_DQUOTE] = actions(744);
	v->a[203][sym_raw_string] = actions(735);
	v->a[203][sym_number] = actions(735);
	return (parse_table_438(v));
}

void	parse_table_438(t_parse_table_array *v)
{
	v->a[203][anon_sym_DOLLAR_LBRACE] = actions(747);
	v->a[203][anon_sym_DOLLAR_LPAREN] = actions(750);
	v->a[203][anon_sym_BQUOTE] = actions(753);
	v->a[203][sym_comment] = actions(3);
	v->a[203][anon_sym_SEMI] = actions(428);
	v->a[204][sym_file_redirect] = state(1370);
	v->a[204][sym__heredoc_pipeline] = state(1633);
	v->a[204][sym__heredoc_expression] = state(1632);
	v->a[204][aux_sym__heredoc_command] = state(755);
	v->a[204][sym_arithmetic_expansion] = state(1011);
	v->a[204][sym_concatenation] = state(1296);
	v->a[204][sym_string] = state(1011);
	v->a[204][sym_simple_expansion] = state(1011);
	v->a[204][sym_expansion] = state(1011);
	v->a[204][sym_command_substitution] = state(1011);
	v->a[204][aux_sym_redirected_statement_repeat2] = state(1370);
	v->a[204][sym_word] = actions(645);
	v->a[204][anon_sym_PIPE] = actions(647);
	v->a[204][anon_sym_AMP_AMP] = actions(649);
	v->a[204][anon_sym_PIPE_PIPE] = actions(649);
	return (parse_table_439(v));
}

void	parse_table_439(t_parse_table_array *v)
{
	v->a[204][anon_sym_LT] = actions(651);
	v->a[204][anon_sym_GT] = actions(651);
	v->a[204][anon_sym_GT_GT] = actions(651);
	v->a[204][aux_sym_heredoc_redirect_token1] = actions(756);
	v->a[204][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(655);
	v->a[204][anon_sym_DOLLAR] = actions(657);
	v->a[204][anon_sym_DQUOTE] = actions(659);
	v->a[204][sym_raw_string] = actions(645);
	v->a[204][sym_number] = actions(645);
	v->a[204][anon_sym_DOLLAR_LBRACE] = actions(661);
	v->a[204][anon_sym_DOLLAR_LPAREN] = actions(663);
	v->a[204][anon_sym_BQUOTE] = actions(665);
	v->a[204][sym_comment] = actions(3);
	v->a[205][sym_arithmetic_expansion] = state(431);
	v->a[205][sym_concatenation] = state(570);
	v->a[205][sym_string] = state(431);
	v->a[205][sym_simple_expansion] = state(431);
	v->a[205][sym_expansion] = state(431);
	v->a[205][sym_command_substitution] = state(431);
	v->a[205][aux_sym_command_repeat2] = state(188);
	return (parse_table_440(v));
}

/* EOF parse_table_87.c */
