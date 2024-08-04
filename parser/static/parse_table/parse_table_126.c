/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_126.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_630(t_parse_table_array *v)
{
	v->a[356][anon_sym_LPAREN] = actions(1040);
	v->a[356][anon_sym_SEMI_SEMI] = actions(1042);
	v->a[356][anon_sym_LBRACE] = actions(1040);
	v->a[356][anon_sym_BANG] = actions(1040);
	v->a[356][anon_sym_LT] = actions(1040);
	v->a[356][anon_sym_GT] = actions(1040);
	v->a[356][anon_sym_GT_GT] = actions(1040);
	v->a[356][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1040);
	v->a[356][anon_sym_DOLLAR] = actions(1040);
	v->a[356][anon_sym_DQUOTE] = actions(1040);
	v->a[356][sym_raw_string] = actions(1040);
	v->a[356][sym_number] = actions(1040);
	v->a[356][anon_sym_DOLLAR_LBRACE] = actions(1040);
	v->a[356][anon_sym_DOLLAR_LPAREN] = actions(1040);
	v->a[356][anon_sym_BQUOTE] = actions(1040);
	v->a[356][sym_comment] = actions(3);
	v->a[356][sym_variable_name] = actions(1044);
	v->a[357][sym_word] = actions(1040);
	v->a[357][anon_sym_for] = actions(1040);
	v->a[357][anon_sym_while] = actions(1040);
	return (parse_table_631(v));
}

void	parse_table_631(t_parse_table_array *v)
{
	v->a[357][anon_sym_until] = actions(1040);
	v->a[357][anon_sym_if] = actions(1040);
	v->a[357][anon_sym_case] = actions(1040);
	v->a[357][anon_sym_LPAREN] = actions(1040);
	v->a[357][anon_sym_RPAREN] = actions(1042);
	v->a[357][anon_sym_SEMI_SEMI] = actions(1042);
	v->a[357][anon_sym_LBRACE] = actions(1040);
	v->a[357][anon_sym_BANG] = actions(1040);
	v->a[357][anon_sym_LT] = actions(1040);
	v->a[357][anon_sym_GT] = actions(1040);
	v->a[357][anon_sym_GT_GT] = actions(1040);
	v->a[357][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1040);
	v->a[357][anon_sym_DOLLAR] = actions(1040);
	v->a[357][anon_sym_DQUOTE] = actions(1040);
	v->a[357][sym_raw_string] = actions(1040);
	v->a[357][sym_number] = actions(1040);
	v->a[357][anon_sym_DOLLAR_LBRACE] = actions(1040);
	v->a[357][anon_sym_DOLLAR_LPAREN] = actions(1040);
	v->a[357][anon_sym_BQUOTE] = actions(1040);
	v->a[357][sym_comment] = actions(3);
	return (parse_table_632(v));
}

void	parse_table_632(t_parse_table_array *v)
{
	v->a[357][sym_variable_name] = actions(1044);
	v->a[358][sym_word] = actions(1091);
	v->a[358][anon_sym_PIPE] = actions(1091);
	v->a[358][anon_sym_RPAREN] = actions(1091);
	v->a[358][anon_sym_SEMI_SEMI] = actions(1091);
	v->a[358][anon_sym_AMP_AMP] = actions(1091);
	v->a[358][anon_sym_PIPE_PIPE] = actions(1091);
	v->a[358][anon_sym_LT] = actions(1091);
	v->a[358][anon_sym_GT] = actions(1091);
	v->a[358][anon_sym_GT_GT] = actions(1091);
	v->a[358][anon_sym_LT_LT] = actions(1091);
	v->a[358][aux_sym_heredoc_redirect_token1] = actions(1091);
	v->a[358][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1091);
	v->a[358][aux_sym_concatenation_token1] = actions(1091);
	v->a[358][anon_sym_DOLLAR] = actions(1091);
	v->a[358][anon_sym_DQUOTE] = actions(1091);
	v->a[358][sym_raw_string] = actions(1091);
	v->a[358][sym_number] = actions(1091);
	v->a[358][anon_sym_DOLLAR_LBRACE] = actions(1091);
	v->a[358][anon_sym_DOLLAR_LPAREN] = actions(1091);
	return (parse_table_633(v));
}

void	parse_table_633(t_parse_table_array *v)
{
	v->a[358][anon_sym_BQUOTE] = actions(1091);
	v->a[358][sym_comment] = actions(3);
	v->a[358][anon_sym_SEMI] = actions(1091);
	v->a[358][sym__concat] = actions(1093);
	v->a[358][sym_variable_name] = actions(1093);
	v->a[359][sym_word] = actions(1095);
	v->a[359][anon_sym_PIPE] = actions(1095);
	v->a[359][anon_sym_RPAREN] = actions(1095);
	v->a[359][anon_sym_SEMI_SEMI] = actions(1095);
	v->a[359][anon_sym_AMP_AMP] = actions(1095);
	v->a[359][anon_sym_PIPE_PIPE] = actions(1095);
	v->a[359][anon_sym_LT] = actions(1095);
	v->a[359][anon_sym_GT] = actions(1095);
	v->a[359][anon_sym_GT_GT] = actions(1095);
	v->a[359][anon_sym_LT_LT] = actions(1095);
	v->a[359][aux_sym_heredoc_redirect_token1] = actions(1095);
	v->a[359][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1095);
	v->a[359][aux_sym_concatenation_token1] = actions(1095);
	v->a[359][anon_sym_DOLLAR] = actions(1095);
	v->a[359][anon_sym_DQUOTE] = actions(1095);
	return (parse_table_634(v));
}

void	parse_table_634(t_parse_table_array *v)
{
	v->a[359][sym_raw_string] = actions(1095);
	v->a[359][sym_number] = actions(1095);
	v->a[359][anon_sym_DOLLAR_LBRACE] = actions(1095);
	v->a[359][anon_sym_DOLLAR_LPAREN] = actions(1095);
	v->a[359][anon_sym_BQUOTE] = actions(1095);
	v->a[359][sym_comment] = actions(3);
	v->a[359][anon_sym_SEMI] = actions(1095);
	v->a[359][sym__concat] = actions(1097);
	v->a[359][sym_variable_name] = actions(1097);
	v->a[360][aux_sym_concatenation_repeat1] = state(397);
	v->a[360][ts_builtin_sym_end] = actions(921);
	v->a[360][sym_word] = actions(923);
	v->a[360][anon_sym_PIPE] = actions(923);
	v->a[360][anon_sym_SEMI_SEMI] = actions(923);
	v->a[360][anon_sym_AMP_AMP] = actions(923);
	v->a[360][anon_sym_PIPE_PIPE] = actions(923);
	v->a[360][anon_sym_LT] = actions(923);
	v->a[360][anon_sym_GT] = actions(923);
	v->a[360][anon_sym_GT_GT] = actions(923);
	v->a[360][anon_sym_LT_LT] = actions(923);
	return (parse_table_635(v));
}

/* EOF parse_table_126.c */
