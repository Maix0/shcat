/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_127.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_635(t_parse_table_array *v)
{
	v->a[360][aux_sym_heredoc_redirect_token1] = actions(923);
	v->a[360][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(923);
	v->a[360][aux_sym_concatenation_token1] = actions(1134);
	v->a[360][anon_sym_DOLLAR] = actions(923);
	v->a[360][anon_sym_DQUOTE] = actions(923);
	v->a[360][sym_raw_string] = actions(923);
	v->a[360][sym_number] = actions(923);
	v->a[360][anon_sym_DOLLAR_LBRACE] = actions(923);
	v->a[360][anon_sym_DOLLAR_LPAREN] = actions(923);
	v->a[360][anon_sym_BQUOTE] = actions(923);
	v->a[360][sym_comment] = actions(3);
	v->a[360][anon_sym_SEMI] = actions(923);
	v->a[360][sym__concat] = actions(1136);
	v->a[361][sym_word] = actions(1040);
	v->a[361][anon_sym_for] = actions(1040);
	v->a[361][anon_sym_while] = actions(1040);
	v->a[361][anon_sym_until] = actions(1040);
	v->a[361][anon_sym_if] = actions(1040);
	v->a[361][anon_sym_case] = actions(1040);
	v->a[361][anon_sym_LPAREN] = actions(1040);
	return (parse_table_636(v));
}

void	parse_table_636(t_parse_table_array *v)
{
	v->a[361][anon_sym_RPAREN] = actions(1042);
	v->a[361][anon_sym_SEMI_SEMI] = actions(1042);
	v->a[361][anon_sym_LBRACE] = actions(1040);
	v->a[361][anon_sym_BANG] = actions(1040);
	v->a[361][anon_sym_LT] = actions(1040);
	v->a[361][anon_sym_GT] = actions(1040);
	v->a[361][anon_sym_GT_GT] = actions(1040);
	v->a[361][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1040);
	v->a[361][anon_sym_DOLLAR] = actions(1040);
	v->a[361][anon_sym_DQUOTE] = actions(1040);
	v->a[361][sym_raw_string] = actions(1040);
	v->a[361][sym_number] = actions(1040);
	v->a[361][anon_sym_DOLLAR_LBRACE] = actions(1040);
	v->a[361][anon_sym_DOLLAR_LPAREN] = actions(1040);
	v->a[361][anon_sym_BQUOTE] = actions(1040);
	v->a[361][sym_comment] = actions(3);
	v->a[361][sym_variable_name] = actions(1044);
	v->a[362][aux_sym_concatenation_repeat1] = state(331);
	v->a[362][sym_word] = actions(880);
	v->a[362][anon_sym_esac] = actions(880);
	return (parse_table_637(v));
}

void	parse_table_637(t_parse_table_array *v)
{
	v->a[362][anon_sym_PIPE] = actions(880);
	v->a[362][anon_sym_SEMI_SEMI] = actions(880);
	v->a[362][anon_sym_AMP_AMP] = actions(880);
	v->a[362][anon_sym_PIPE_PIPE] = actions(880);
	v->a[362][anon_sym_LT] = actions(880);
	v->a[362][anon_sym_GT] = actions(880);
	v->a[362][anon_sym_GT_GT] = actions(880);
	v->a[362][anon_sym_LT_LT] = actions(880);
	v->a[362][aux_sym_heredoc_redirect_token1] = actions(880);
	v->a[362][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(880);
	v->a[362][aux_sym_concatenation_token1] = actions(1110);
	v->a[362][anon_sym_DOLLAR] = actions(880);
	v->a[362][anon_sym_DQUOTE] = actions(880);
	v->a[362][sym_raw_string] = actions(880);
	v->a[362][sym_number] = actions(880);
	v->a[362][anon_sym_DOLLAR_LBRACE] = actions(880);
	v->a[362][anon_sym_DOLLAR_LPAREN] = actions(880);
	v->a[362][anon_sym_BQUOTE] = actions(880);
	v->a[362][sym_comment] = actions(3);
	v->a[362][anon_sym_SEMI] = actions(880);
	return (parse_table_638(v));
}

void	parse_table_638(t_parse_table_array *v)
{
	v->a[362][sym__concat] = actions(1138);
	v->a[363][ts_builtin_sym_end] = actions(1108);
	v->a[363][sym_word] = actions(1106);
	v->a[363][anon_sym_PIPE] = actions(1106);
	v->a[363][anon_sym_SEMI_SEMI] = actions(1106);
	v->a[363][anon_sym_AMP_AMP] = actions(1106);
	v->a[363][anon_sym_PIPE_PIPE] = actions(1106);
	v->a[363][anon_sym_LT] = actions(1106);
	v->a[363][anon_sym_GT] = actions(1106);
	v->a[363][anon_sym_GT_GT] = actions(1106);
	v->a[363][anon_sym_LT_LT] = actions(1106);
	v->a[363][aux_sym_heredoc_redirect_token1] = actions(1106);
	v->a[363][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1106);
	v->a[363][aux_sym_concatenation_token1] = actions(1106);
	v->a[363][anon_sym_DOLLAR] = actions(1106);
	v->a[363][anon_sym_DQUOTE] = actions(1106);
	v->a[363][sym_raw_string] = actions(1106);
	v->a[363][sym_number] = actions(1106);
	v->a[363][anon_sym_DOLLAR_LBRACE] = actions(1106);
	v->a[363][anon_sym_DOLLAR_LPAREN] = actions(1106);
	return (parse_table_639(v));
}

void	parse_table_639(t_parse_table_array *v)
{
	v->a[363][anon_sym_BQUOTE] = actions(1106);
	v->a[363][sym_comment] = actions(3);
	v->a[363][anon_sym_SEMI] = actions(1106);
	v->a[363][sym__concat] = actions(1108);
	v->a[363][sym__bare_dollar] = actions(1108);
	v->a[364][sym_variable_assignment] = state(1277);
	v->a[364][sym_file_redirect] = state(1225);
	v->a[364][sym_heredoc_redirect] = state(1225);
	v->a[364][aux_sym_redirected_statement_repeat1] = state(1225);
	v->a[364][aux_sym__variable_assignments_repeat1] = state(1277);
	v->a[364][sym_word] = actions(576);
	v->a[364][anon_sym_PIPE] = actions(580);
	v->a[364][anon_sym_AMP_AMP] = actions(1033);
	v->a[364][anon_sym_PIPE_PIPE] = actions(1033);
	v->a[364][anon_sym_LT] = actions(576);
	v->a[364][anon_sym_GT] = actions(576);
	v->a[364][anon_sym_GT_GT] = actions(576);
	v->a[364][anon_sym_LT_LT] = actions(597);
	v->a[364][aux_sym_heredoc_redirect_token1] = actions(1140);
	v->a[364][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(576);
	return (parse_table_640(v));
}

/* EOF parse_table_127.c */
