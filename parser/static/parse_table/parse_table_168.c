/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_168.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_840(t_parse_table_array *v)
{
	v->a[536][anon_sym_DOLLAR] = actions(1247);
	v->a[536][anon_sym_DQUOTE] = actions(1247);
	v->a[536][sym_raw_string] = actions(1247);
	v->a[536][sym_number] = actions(1247);
	v->a[536][anon_sym_DOLLAR_LBRACE] = actions(1247);
	v->a[536][anon_sym_DOLLAR_LPAREN] = actions(1247);
	v->a[536][anon_sym_BQUOTE] = actions(1247);
	v->a[536][sym_comment] = actions(3);
	v->a[536][anon_sym_SEMI] = actions(1249);
	v->a[536][sym_variable_name] = actions(1257);
	v->a[537][sym__case_item_last] = state(1645);
	v->a[537][sym_case_item] = state(1232);
	v->a[537][sym_arithmetic_expansion] = state(1468);
	v->a[537][sym_concatenation] = state(1538);
	v->a[537][sym_string] = state(1468);
	v->a[537][sym_simple_expansion] = state(1468);
	v->a[537][sym_expansion] = state(1468);
	v->a[537][sym_command_substitution] = state(1468);
	v->a[537][sym__extglob_blob] = state(1538);
	v->a[537][aux_sym_case_statement_repeat1] = state(597);
	return (parse_table_841(v));
}

void	parse_table_841(t_parse_table_array *v)
{
	v->a[537][sym_word] = actions(774);
	v->a[537][anon_sym_LPAREN] = actions(778);
	v->a[537][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(782);
	v->a[537][anon_sym_DOLLAR] = actions(784);
	v->a[537][anon_sym_DQUOTE] = actions(786);
	v->a[537][sym_raw_string] = actions(774);
	v->a[537][sym_number] = actions(774);
	v->a[537][anon_sym_DOLLAR_LBRACE] = actions(788);
	v->a[537][anon_sym_DOLLAR_LPAREN] = actions(790);
	v->a[537][anon_sym_BQUOTE] = actions(792);
	v->a[537][sym_comment] = actions(3);
	v->a[537][sym_extglob_pattern] = actions(794);
	v->a[538][sym__case_item_last] = state(1718);
	v->a[538][sym_case_item] = state(1232);
	v->a[538][sym_arithmetic_expansion] = state(1468);
	v->a[538][sym_concatenation] = state(1538);
	v->a[538][sym_string] = state(1468);
	v->a[538][sym_simple_expansion] = state(1468);
	v->a[538][sym_expansion] = state(1468);
	v->a[538][sym_command_substitution] = state(1468);
	return (parse_table_842(v));
}

void	parse_table_842(t_parse_table_array *v)
{
	v->a[538][sym__extglob_blob] = state(1538);
	v->a[538][aux_sym_case_statement_repeat1] = state(597);
	v->a[538][sym_word] = actions(774);
	v->a[538][anon_sym_LPAREN] = actions(778);
	v->a[538][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(782);
	v->a[538][anon_sym_DOLLAR] = actions(784);
	v->a[538][anon_sym_DQUOTE] = actions(786);
	v->a[538][sym_raw_string] = actions(774);
	v->a[538][sym_number] = actions(774);
	v->a[538][anon_sym_DOLLAR_LBRACE] = actions(788);
	v->a[538][anon_sym_DOLLAR_LPAREN] = actions(790);
	v->a[538][anon_sym_BQUOTE] = actions(792);
	v->a[538][sym_comment] = actions(3);
	v->a[538][sym_extglob_pattern] = actions(794);
	v->a[539][aux_sym_concatenation_repeat1] = state(569);
	v->a[539][sym_word] = actions(919);
	v->a[539][anon_sym_PIPE] = actions(919);
	v->a[539][anon_sym_AMP_AMP] = actions(919);
	v->a[539][anon_sym_PIPE_PIPE] = actions(919);
	v->a[539][anon_sym_LT] = actions(919);
	return (parse_table_843(v));
}

void	parse_table_843(t_parse_table_array *v)
{
	v->a[539][anon_sym_GT] = actions(919);
	v->a[539][anon_sym_GT_GT] = actions(919);
	v->a[539][anon_sym_LT_LT] = actions(919);
	v->a[539][aux_sym_heredoc_redirect_token1] = actions(919);
	v->a[539][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(919);
	v->a[539][aux_sym_concatenation_token1] = actions(927);
	v->a[539][anon_sym_DOLLAR] = actions(919);
	v->a[539][anon_sym_DQUOTE] = actions(919);
	v->a[539][sym_raw_string] = actions(919);
	v->a[539][sym_number] = actions(919);
	v->a[539][anon_sym_DOLLAR_LBRACE] = actions(919);
	v->a[539][anon_sym_DOLLAR_LPAREN] = actions(919);
	v->a[539][anon_sym_BQUOTE] = actions(919);
	v->a[539][sym_comment] = actions(3);
	v->a[539][sym__concat] = actions(1009);
	v->a[539][sym_variable_name] = actions(917);
	v->a[540][sym_word] = actions(1247);
	v->a[540][anon_sym_PIPE] = actions(1249);
	v->a[540][anon_sym_RPAREN] = actions(1292);
	v->a[540][anon_sym_SEMI_SEMI] = actions(1249);
	return (parse_table_844(v));
}

void	parse_table_844(t_parse_table_array *v)
{
	v->a[540][anon_sym_AMP_AMP] = actions(1249);
	v->a[540][anon_sym_PIPE_PIPE] = actions(1249);
	v->a[540][anon_sym_LT] = actions(1254);
	v->a[540][anon_sym_GT] = actions(1254);
	v->a[540][anon_sym_GT_GT] = actions(1254);
	v->a[540][anon_sym_LT_LT] = actions(1249);
	v->a[540][aux_sym_heredoc_redirect_token1] = actions(1249);
	v->a[540][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1247);
	v->a[540][anon_sym_DOLLAR] = actions(1247);
	v->a[540][anon_sym_DQUOTE] = actions(1247);
	v->a[540][sym_raw_string] = actions(1247);
	v->a[540][sym_number] = actions(1247);
	v->a[540][anon_sym_DOLLAR_LBRACE] = actions(1247);
	v->a[540][anon_sym_DOLLAR_LPAREN] = actions(1247);
	v->a[540][anon_sym_BQUOTE] = actions(1247);
	v->a[540][sym_comment] = actions(3);
	v->a[540][anon_sym_SEMI] = actions(1249);
	v->a[540][sym_variable_name] = actions(1257);
	v->a[541][sym_word] = actions(1247);
	v->a[541][anon_sym_esac] = actions(1249);
	return (parse_table_845(v));
}

/* EOF parse_table_168.c */
