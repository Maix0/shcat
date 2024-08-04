/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_215.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1075(t_parse_table_array *v)
{
	v->a[773][anon_sym_BQUOTE] = actions(1545);
	v->a[773][sym_comment] = actions(3);
	v->a[773][sym__comment_word] = actions(1587);
	v->a[773][sym__empty_value] = actions(1589);
	v->a[774][sym_arithmetic_expansion] = state(400);
	v->a[774][sym_string] = state(400);
	v->a[774][sym_simple_expansion] = state(400);
	v->a[774][sym_expansion] = state(400);
	v->a[774][sym_command_substitution] = state(400);
	v->a[774][sym_word] = actions(1774);
	v->a[774][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(25);
	v->a[774][aux_sym_concatenation_token1] = actions(1774);
	v->a[774][anon_sym_DOLLAR] = actions(1822);
	v->a[774][anon_sym_DQUOTE] = actions(29);
	v->a[774][sym_raw_string] = actions(1774);
	v->a[774][sym_number] = actions(1774);
	v->a[774][anon_sym_DOLLAR_LBRACE] = actions(33);
	v->a[774][anon_sym_DOLLAR_LPAREN] = actions(35);
	v->a[774][anon_sym_BQUOTE] = actions(37);
	v->a[774][sym_comment] = actions(3);
	return (parse_table_1076(v));
}

void	parse_table_1076(t_parse_table_array *v)
{
	v->a[774][sym__comment_word] = actions(1774);
	v->a[774][sym__bare_dollar] = actions(1776);
	v->a[775][sym_word] = actions(909);
	v->a[775][anon_sym_PIPE] = actions(909);
	v->a[775][anon_sym_AMP_AMP] = actions(909);
	v->a[775][anon_sym_PIPE_PIPE] = actions(909);
	v->a[775][anon_sym_LT] = actions(909);
	v->a[775][anon_sym_GT] = actions(909);
	v->a[775][anon_sym_GT_GT] = actions(909);
	v->a[775][anon_sym_LT_LT] = actions(909);
	v->a[775][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(909);
	v->a[775][anon_sym_DOLLAR] = actions(909);
	v->a[775][anon_sym_DQUOTE] = actions(909);
	v->a[775][sym_raw_string] = actions(909);
	v->a[775][sym_number] = actions(909);
	v->a[775][anon_sym_DOLLAR_LBRACE] = actions(909);
	v->a[775][anon_sym_DOLLAR_LPAREN] = actions(909);
	v->a[775][anon_sym_BQUOTE] = actions(909);
	v->a[775][sym_comment] = actions(3);
	v->a[775][sym__bare_dollar] = actions(911);
	return (parse_table_1077(v));
}

void	parse_table_1077(t_parse_table_array *v)
{
	v->a[776][sym_arithmetic_expansion] = state(282);
	v->a[776][sym_concatenation] = state(168);
	v->a[776][sym_string] = state(282);
	v->a[776][sym_simple_expansion] = state(282);
	v->a[776][sym_expansion] = state(282);
	v->a[776][sym_command_substitution] = state(282);
	v->a[776][aux_sym_for_statement_repeat1] = state(168);
	v->a[776][sym_word] = actions(1824);
	v->a[776][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1625);
	v->a[776][anon_sym_DOLLAR] = actions(1627);
	v->a[776][anon_sym_DQUOTE] = actions(1629);
	v->a[776][sym_raw_string] = actions(1824);
	v->a[776][sym_number] = actions(1824);
	v->a[776][anon_sym_DOLLAR_LBRACE] = actions(1631);
	v->a[776][anon_sym_DOLLAR_LPAREN] = actions(1633);
	v->a[776][anon_sym_BQUOTE] = actions(1635);
	v->a[776][sym_comment] = actions(3);
	v->a[777][ts_builtin_sym_end] = actions(1060);
	v->a[777][anon_sym_PIPE] = actions(1058);
	v->a[777][anon_sym_RPAREN] = actions(1058);
	return (parse_table_1078(v));
}

void	parse_table_1078(t_parse_table_array *v)
{
	v->a[777][anon_sym_SEMI_SEMI] = actions(1058);
	v->a[777][anon_sym_AMP_AMP] = actions(1058);
	v->a[777][anon_sym_PIPE_PIPE] = actions(1058);
	v->a[777][anon_sym_LT] = actions(1058);
	v->a[777][anon_sym_GT] = actions(1058);
	v->a[777][anon_sym_GT_GT] = actions(1058);
	v->a[777][anon_sym_LT_LT] = actions(1058);
	v->a[777][aux_sym_heredoc_redirect_token1] = actions(1060);
	v->a[777][aux_sym_concatenation_token1] = actions(1058);
	v->a[777][anon_sym_BQUOTE] = actions(1058);
	v->a[777][sym_comment] = actions(3);
	v->a[777][anon_sym_SEMI] = actions(1058);
	v->a[777][sym__concat] = actions(1060);
	v->a[777][sym_variable_name] = actions(1060);
	v->a[778][ts_builtin_sym_end] = actions(981);
	v->a[778][anon_sym_PIPE] = actions(973);
	v->a[778][anon_sym_RPAREN] = actions(973);
	v->a[778][anon_sym_SEMI_SEMI] = actions(973);
	v->a[778][anon_sym_AMP_AMP] = actions(973);
	v->a[778][anon_sym_PIPE_PIPE] = actions(973);
	return (parse_table_1079(v));
}

void	parse_table_1079(t_parse_table_array *v)
{
	v->a[778][anon_sym_LT] = actions(973);
	v->a[778][anon_sym_GT] = actions(973);
	v->a[778][anon_sym_GT_GT] = actions(973);
	v->a[778][anon_sym_LT_LT] = actions(973);
	v->a[778][aux_sym_heredoc_redirect_token1] = actions(981);
	v->a[778][aux_sym_concatenation_token1] = actions(973);
	v->a[778][anon_sym_BQUOTE] = actions(973);
	v->a[778][sym_comment] = actions(3);
	v->a[778][anon_sym_SEMI] = actions(973);
	v->a[778][sym__concat] = actions(981);
	v->a[778][sym_variable_name] = actions(981);
	v->a[779][aux_sym_concatenation_repeat1] = state(812);
	v->a[779][sym_word] = actions(919);
	v->a[779][anon_sym_LT] = actions(919);
	v->a[779][anon_sym_GT] = actions(919);
	v->a[779][anon_sym_GT_GT] = actions(919);
	v->a[779][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(919);
	v->a[779][aux_sym_concatenation_token1] = actions(1826);
	v->a[779][anon_sym_DOLLAR] = actions(919);
	v->a[779][anon_sym_DQUOTE] = actions(919);
	return (parse_table_1080(v));
}

/* EOF parse_table_215.c */
