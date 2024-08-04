/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_95.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_475(t_parse_table_array *v)
{
	v->a[231][aux_sym_redirected_statement_repeat1] = state(1040);
	v->a[231][aux_sym__variable_assignments_repeat1] = state(995);
	v->a[231][sym_word] = actions(576);
	v->a[231][anon_sym_PIPE] = actions(580);
	v->a[231][anon_sym_SEMI_SEMI] = actions(823);
	v->a[231][anon_sym_AMP_AMP] = actions(769);
	v->a[231][anon_sym_PIPE_PIPE] = actions(769);
	v->a[231][anon_sym_LT] = actions(576);
	v->a[231][anon_sym_GT] = actions(576);
	v->a[231][anon_sym_GT_GT] = actions(576);
	v->a[231][anon_sym_LT_LT] = actions(597);
	v->a[231][aux_sym_heredoc_redirect_token1] = actions(823);
	v->a[231][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(576);
	v->a[231][anon_sym_DOLLAR] = actions(576);
	v->a[231][anon_sym_DQUOTE] = actions(576);
	v->a[231][sym_raw_string] = actions(576);
	v->a[231][sym_number] = actions(576);
	v->a[231][anon_sym_DOLLAR_LBRACE] = actions(576);
	v->a[231][anon_sym_DOLLAR_LPAREN] = actions(576);
	v->a[231][anon_sym_BQUOTE] = actions(576);
	return (parse_table_476(v));
}

void	parse_table_476(t_parse_table_array *v)
{
	v->a[231][sym_comment] = actions(3);
	v->a[231][anon_sym_SEMI] = actions(823);
	v->a[231][sym_variable_name] = actions(771);
	v->a[232][sym__case_item_last] = state(1631);
	v->a[232][sym_case_item] = state(1232);
	v->a[232][sym_arithmetic_expansion] = state(1468);
	v->a[232][sym_concatenation] = state(1538);
	v->a[232][sym_string] = state(1468);
	v->a[232][sym_simple_expansion] = state(1468);
	v->a[232][sym_expansion] = state(1468);
	v->a[232][sym_command_substitution] = state(1468);
	v->a[232][sym__extglob_blob] = state(1538);
	v->a[232][sym_terminator] = state(479);
	v->a[232][aux_sym_case_statement_repeat1] = state(529);
	v->a[232][sym_word] = actions(774);
	v->a[232][anon_sym_esac] = actions(825);
	v->a[232][anon_sym_LPAREN] = actions(778);
	v->a[232][anon_sym_SEMI_SEMI] = actions(780);
	v->a[232][aux_sym_heredoc_redirect_token1] = actions(780);
	v->a[232][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(782);
	return (parse_table_477(v));
}

void	parse_table_477(t_parse_table_array *v)
{
	v->a[232][anon_sym_DOLLAR] = actions(784);
	v->a[232][anon_sym_DQUOTE] = actions(786);
	v->a[232][sym_raw_string] = actions(774);
	v->a[232][sym_number] = actions(774);
	v->a[232][anon_sym_DOLLAR_LBRACE] = actions(788);
	v->a[232][anon_sym_DOLLAR_LPAREN] = actions(790);
	v->a[232][anon_sym_BQUOTE] = actions(792);
	v->a[232][sym_comment] = actions(3);
	v->a[232][anon_sym_SEMI] = actions(780);
	v->a[232][sym_extglob_pattern] = actions(794);
	v->a[233][sym_variable_assignment] = state(963);
	v->a[233][sym_file_redirect] = state(916);
	v->a[233][sym_heredoc_redirect] = state(916);
	v->a[233][aux_sym_redirected_statement_repeat1] = state(916);
	v->a[233][aux_sym__variable_assignments_repeat1] = state(963);
	v->a[233][sym_word] = actions(576);
	v->a[233][anon_sym_PIPE] = actions(580);
	v->a[233][anon_sym_RPAREN] = actions(580);
	v->a[233][anon_sym_SEMI_SEMI] = actions(580);
	v->a[233][anon_sym_AMP_AMP] = actions(580);
	return (parse_table_478(v));
}

void	parse_table_478(t_parse_table_array *v)
{
	v->a[233][anon_sym_PIPE_PIPE] = actions(580);
	v->a[233][anon_sym_LT] = actions(580);
	v->a[233][anon_sym_GT] = actions(580);
	v->a[233][anon_sym_GT_GT] = actions(580);
	v->a[233][anon_sym_LT_LT] = actions(580);
	v->a[233][aux_sym_heredoc_redirect_token1] = actions(580);
	v->a[233][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(576);
	v->a[233][anon_sym_DOLLAR] = actions(576);
	v->a[233][anon_sym_DQUOTE] = actions(576);
	v->a[233][sym_raw_string] = actions(576);
	v->a[233][sym_number] = actions(576);
	v->a[233][anon_sym_DOLLAR_LBRACE] = actions(576);
	v->a[233][anon_sym_DOLLAR_LPAREN] = actions(576);
	v->a[233][anon_sym_BQUOTE] = actions(576);
	v->a[233][sym_comment] = actions(3);
	v->a[233][anon_sym_SEMI] = actions(580);
	v->a[233][sym_variable_name] = actions(599);
	v->a[234][sym_variable_assignment] = state(924);
	v->a[234][sym_file_redirect] = state(922);
	v->a[234][sym_heredoc_redirect] = state(922);
	return (parse_table_479(v));
}

void	parse_table_479(t_parse_table_array *v)
{
	v->a[234][aux_sym_redirected_statement_repeat1] = state(922);
	v->a[234][aux_sym__variable_assignments_repeat1] = state(924);
	v->a[234][ts_builtin_sym_end] = actions(827);
	v->a[234][sym_word] = actions(576);
	v->a[234][anon_sym_PIPE] = actions(580);
	v->a[234][anon_sym_SEMI_SEMI] = actions(816);
	v->a[234][anon_sym_AMP_AMP] = actions(816);
	v->a[234][anon_sym_PIPE_PIPE] = actions(816);
	v->a[234][anon_sym_LT] = actions(576);
	v->a[234][anon_sym_GT] = actions(576);
	v->a[234][anon_sym_GT_GT] = actions(576);
	v->a[234][anon_sym_LT_LT] = actions(816);
	v->a[234][aux_sym_heredoc_redirect_token1] = actions(816);
	v->a[234][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(576);
	v->a[234][anon_sym_DOLLAR] = actions(576);
	v->a[234][anon_sym_DQUOTE] = actions(576);
	v->a[234][sym_raw_string] = actions(576);
	v->a[234][sym_number] = actions(576);
	v->a[234][anon_sym_DOLLAR_LBRACE] = actions(576);
	v->a[234][anon_sym_DOLLAR_LPAREN] = actions(576);
	return (parse_table_480(v));
}

/* EOF parse_table_95.c */
