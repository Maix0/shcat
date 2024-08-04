/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_128.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_640(t_parse_table_array *v)
{
	v->a[364][anon_sym_DOLLAR] = actions(576);
	v->a[364][anon_sym_DQUOTE] = actions(576);
	v->a[364][sym_raw_string] = actions(576);
	v->a[364][sym_number] = actions(576);
	v->a[364][anon_sym_DOLLAR_LBRACE] = actions(576);
	v->a[364][anon_sym_DOLLAR_LPAREN] = actions(576);
	v->a[364][anon_sym_BQUOTE] = actions(576);
	v->a[364][sym_comment] = actions(3);
	v->a[364][sym_variable_name] = actions(1037);
	v->a[365][sym_word] = actions(1114);
	v->a[365][anon_sym_PIPE] = actions(1114);
	v->a[365][anon_sym_RPAREN] = actions(1114);
	v->a[365][anon_sym_SEMI_SEMI] = actions(1114);
	v->a[365][anon_sym_AMP_AMP] = actions(1114);
	v->a[365][anon_sym_PIPE_PIPE] = actions(1114);
	v->a[365][anon_sym_LT] = actions(1114);
	v->a[365][anon_sym_GT] = actions(1114);
	v->a[365][anon_sym_GT_GT] = actions(1114);
	v->a[365][anon_sym_LT_LT] = actions(1114);
	v->a[365][aux_sym_heredoc_redirect_token1] = actions(1114);
	return (parse_table_641(v));
}

void	parse_table_641(t_parse_table_array *v)
{
	v->a[365][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1114);
	v->a[365][aux_sym_concatenation_token1] = actions(1114);
	v->a[365][anon_sym_DOLLAR] = actions(1114);
	v->a[365][anon_sym_DQUOTE] = actions(1114);
	v->a[365][sym_raw_string] = actions(1114);
	v->a[365][sym_number] = actions(1114);
	v->a[365][anon_sym_DOLLAR_LBRACE] = actions(1114);
	v->a[365][anon_sym_DOLLAR_LPAREN] = actions(1114);
	v->a[365][anon_sym_BQUOTE] = actions(1114);
	v->a[365][sym_comment] = actions(3);
	v->a[365][anon_sym_SEMI] = actions(1114);
	v->a[365][sym__concat] = actions(1116);
	v->a[365][sym_variable_name] = actions(1116);
	v->a[366][sym_arithmetic_expansion] = state(607);
	v->a[366][sym_concatenation] = state(313);
	v->a[366][sym_string] = state(607);
	v->a[366][sym_simple_expansion] = state(607);
	v->a[366][sym_expansion] = state(607);
	v->a[366][sym_command_substitution] = state(607);
	v->a[366][aux_sym_for_statement_repeat1] = state(313);
	return (parse_table_642(v));
}

void	parse_table_642(t_parse_table_array *v)
{
	v->a[366][sym_word] = actions(1142);
	v->a[366][anon_sym_PIPE] = actions(421);
	v->a[366][anon_sym_AMP_AMP] = actions(421);
	v->a[366][anon_sym_PIPE_PIPE] = actions(421);
	v->a[366][anon_sym_LT] = actions(421);
	v->a[366][anon_sym_GT] = actions(421);
	v->a[366][anon_sym_GT_GT] = actions(421);
	v->a[366][anon_sym_LT_LT] = actions(421);
	v->a[366][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1144);
	v->a[366][anon_sym_DOLLAR] = actions(1146);
	v->a[366][anon_sym_DQUOTE] = actions(1148);
	v->a[366][sym_raw_string] = actions(1142);
	v->a[366][sym_number] = actions(1142);
	v->a[366][anon_sym_DOLLAR_LBRACE] = actions(1150);
	v->a[366][anon_sym_DOLLAR_LPAREN] = actions(1152);
	v->a[366][anon_sym_BQUOTE] = actions(1154);
	v->a[366][sym_comment] = actions(3);
	v->a[367][sym_word] = actions(1040);
	v->a[367][anon_sym_for] = actions(1040);
	v->a[367][anon_sym_while] = actions(1040);
	return (parse_table_643(v));
}

void	parse_table_643(t_parse_table_array *v)
{
	v->a[367][anon_sym_until] = actions(1040);
	v->a[367][anon_sym_if] = actions(1040);
	v->a[367][anon_sym_case] = actions(1040);
	v->a[367][anon_sym_LPAREN] = actions(1040);
	v->a[367][anon_sym_RPAREN] = actions(1042);
	v->a[367][anon_sym_SEMI_SEMI] = actions(1042);
	v->a[367][anon_sym_LBRACE] = actions(1040);
	v->a[367][anon_sym_BANG] = actions(1040);
	v->a[367][anon_sym_LT] = actions(1040);
	v->a[367][anon_sym_GT] = actions(1040);
	v->a[367][anon_sym_GT_GT] = actions(1040);
	v->a[367][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1040);
	v->a[367][anon_sym_DOLLAR] = actions(1040);
	v->a[367][anon_sym_DQUOTE] = actions(1040);
	v->a[367][sym_raw_string] = actions(1040);
	v->a[367][sym_number] = actions(1040);
	v->a[367][anon_sym_DOLLAR_LBRACE] = actions(1040);
	v->a[367][anon_sym_DOLLAR_LPAREN] = actions(1040);
	v->a[367][anon_sym_BQUOTE] = actions(1040);
	v->a[367][sym_comment] = actions(3);
	return (parse_table_644(v));
}

void	parse_table_644(t_parse_table_array *v)
{
	v->a[367][sym_variable_name] = actions(1044);
	v->a[368][sym_word] = actions(1052);
	v->a[368][anon_sym_PIPE] = actions(1052);
	v->a[368][anon_sym_RPAREN] = actions(1052);
	v->a[368][anon_sym_SEMI_SEMI] = actions(1052);
	v->a[368][anon_sym_AMP_AMP] = actions(1052);
	v->a[368][anon_sym_PIPE_PIPE] = actions(1052);
	v->a[368][anon_sym_LT] = actions(1052);
	v->a[368][anon_sym_GT] = actions(1052);
	v->a[368][anon_sym_GT_GT] = actions(1052);
	v->a[368][anon_sym_LT_LT] = actions(1052);
	v->a[368][aux_sym_heredoc_redirect_token1] = actions(1052);
	v->a[368][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1052);
	v->a[368][aux_sym_concatenation_token1] = actions(1052);
	v->a[368][anon_sym_DOLLAR] = actions(1052);
	v->a[368][anon_sym_DQUOTE] = actions(1052);
	v->a[368][sym_raw_string] = actions(1052);
	v->a[368][sym_number] = actions(1052);
	v->a[368][anon_sym_DOLLAR_LBRACE] = actions(1052);
	v->a[368][anon_sym_DOLLAR_LPAREN] = actions(1052);
	return (parse_table_645(v));
}

/* EOF parse_table_128.c */
