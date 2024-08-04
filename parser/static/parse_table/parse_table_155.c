/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_155.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_775(t_parse_table_array *v)
{
	v->a[479][sym_case_item] = state(1232);
	v->a[479][sym_arithmetic_expansion] = state(1468);
	v->a[479][sym_concatenation] = state(1538);
	v->a[479][sym_string] = state(1468);
	v->a[479][sym_simple_expansion] = state(1468);
	v->a[479][sym_expansion] = state(1468);
	v->a[479][sym_command_substitution] = state(1468);
	v->a[479][sym__extglob_blob] = state(1538);
	v->a[479][aux_sym_case_statement_repeat1] = state(537);
	v->a[479][sym_word] = actions(774);
	v->a[479][anon_sym_esac] = actions(821);
	v->a[479][anon_sym_LPAREN] = actions(778);
	v->a[479][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(782);
	v->a[479][anon_sym_DOLLAR] = actions(784);
	v->a[479][anon_sym_DQUOTE] = actions(786);
	v->a[479][sym_raw_string] = actions(774);
	v->a[479][sym_number] = actions(774);
	v->a[479][anon_sym_DOLLAR_LBRACE] = actions(788);
	v->a[479][anon_sym_DOLLAR_LPAREN] = actions(790);
	v->a[479][anon_sym_BQUOTE] = actions(792);
	return (parse_table_776(v));
}

void	parse_table_776(t_parse_table_array *v)
{
	v->a[479][sym_comment] = actions(3);
	v->a[479][sym_extglob_pattern] = actions(794);
	v->a[480][sym_word] = actions(1001);
	v->a[480][anon_sym_for] = actions(1001);
	v->a[480][anon_sym_while] = actions(1001);
	v->a[480][anon_sym_until] = actions(1001);
	v->a[480][anon_sym_if] = actions(1001);
	v->a[480][anon_sym_fi] = actions(1001);
	v->a[480][anon_sym_case] = actions(1001);
	v->a[480][anon_sym_LPAREN] = actions(1001);
	v->a[480][anon_sym_LBRACE] = actions(1001);
	v->a[480][anon_sym_BANG] = actions(1001);
	v->a[480][anon_sym_LT] = actions(1001);
	v->a[480][anon_sym_GT] = actions(1001);
	v->a[480][anon_sym_GT_GT] = actions(1001);
	v->a[480][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1001);
	v->a[480][anon_sym_DOLLAR] = actions(1001);
	v->a[480][anon_sym_DQUOTE] = actions(1001);
	v->a[480][sym_raw_string] = actions(1001);
	v->a[480][sym_number] = actions(1001);
	return (parse_table_777(v));
}

void	parse_table_777(t_parse_table_array *v)
{
	v->a[480][anon_sym_DOLLAR_LBRACE] = actions(1001);
	v->a[480][anon_sym_DOLLAR_LPAREN] = actions(1001);
	v->a[480][anon_sym_BQUOTE] = actions(1001);
	v->a[480][sym_comment] = actions(3);
	v->a[480][sym_variable_name] = actions(1003);
	v->a[481][ts_builtin_sym_end] = actions(1050);
	v->a[481][sym_word] = actions(1052);
	v->a[481][anon_sym_PIPE] = actions(1052);
	v->a[481][anon_sym_SEMI_SEMI] = actions(1052);
	v->a[481][anon_sym_AMP_AMP] = actions(1052);
	v->a[481][anon_sym_PIPE_PIPE] = actions(1052);
	v->a[481][anon_sym_LT] = actions(1052);
	v->a[481][anon_sym_GT] = actions(1052);
	v->a[481][anon_sym_GT_GT] = actions(1052);
	v->a[481][anon_sym_LT_LT] = actions(1052);
	v->a[481][aux_sym_heredoc_redirect_token1] = actions(1052);
	v->a[481][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1052);
	v->a[481][aux_sym_concatenation_token1] = actions(1052);
	v->a[481][anon_sym_DOLLAR] = actions(1052);
	v->a[481][anon_sym_DQUOTE] = actions(1052);
	return (parse_table_778(v));
}

void	parse_table_778(t_parse_table_array *v)
{
	v->a[481][sym_raw_string] = actions(1052);
	v->a[481][sym_number] = actions(1052);
	v->a[481][anon_sym_DOLLAR_LBRACE] = actions(1052);
	v->a[481][anon_sym_DOLLAR_LPAREN] = actions(1052);
	v->a[481][anon_sym_BQUOTE] = actions(1052);
	v->a[481][sym_comment] = actions(3);
	v->a[481][anon_sym_SEMI] = actions(1052);
	v->a[481][sym__concat] = actions(1050);
	v->a[482][ts_builtin_sym_end] = actions(1116);
	v->a[482][sym_word] = actions(1114);
	v->a[482][anon_sym_PIPE] = actions(1114);
	v->a[482][anon_sym_SEMI_SEMI] = actions(1114);
	v->a[482][anon_sym_AMP_AMP] = actions(1114);
	v->a[482][anon_sym_PIPE_PIPE] = actions(1114);
	v->a[482][anon_sym_LT] = actions(1114);
	v->a[482][anon_sym_GT] = actions(1114);
	v->a[482][anon_sym_GT_GT] = actions(1114);
	v->a[482][anon_sym_LT_LT] = actions(1114);
	v->a[482][aux_sym_heredoc_redirect_token1] = actions(1114);
	v->a[482][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1114);
	return (parse_table_779(v));
}

void	parse_table_779(t_parse_table_array *v)
{
	v->a[482][aux_sym_concatenation_token1] = actions(1114);
	v->a[482][anon_sym_DOLLAR] = actions(1114);
	v->a[482][anon_sym_DQUOTE] = actions(1114);
	v->a[482][sym_raw_string] = actions(1114);
	v->a[482][sym_number] = actions(1114);
	v->a[482][anon_sym_DOLLAR_LBRACE] = actions(1114);
	v->a[482][anon_sym_DOLLAR_LPAREN] = actions(1114);
	v->a[482][anon_sym_BQUOTE] = actions(1114);
	v->a[482][sym_comment] = actions(3);
	v->a[482][anon_sym_SEMI] = actions(1114);
	v->a[482][sym__concat] = actions(1116);
	v->a[483][ts_builtin_sym_end] = actions(1083);
	v->a[483][sym_word] = actions(1085);
	v->a[483][anon_sym_PIPE] = actions(1085);
	v->a[483][anon_sym_SEMI_SEMI] = actions(1085);
	v->a[483][anon_sym_AMP_AMP] = actions(1085);
	v->a[483][anon_sym_PIPE_PIPE] = actions(1085);
	v->a[483][anon_sym_LT] = actions(1085);
	v->a[483][anon_sym_GT] = actions(1085);
	v->a[483][anon_sym_GT_GT] = actions(1085);
	return (parse_table_780(v));
}

/* EOF parse_table_155.c */
