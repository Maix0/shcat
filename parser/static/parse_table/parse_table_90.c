/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_90.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_450(t_parse_table_array *v)
{
	v->a[212][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(25);
	v->a[212][anon_sym_DOLLAR] = actions(27);
	v->a[212][anon_sym_DQUOTE] = actions(29);
	v->a[212][sym_raw_string] = actions(31);
	v->a[212][sym_number] = actions(31);
	v->a[212][anon_sym_DOLLAR_LBRACE] = actions(33);
	v->a[212][anon_sym_DOLLAR_LPAREN] = actions(35);
	v->a[212][anon_sym_BQUOTE] = actions(37);
	v->a[212][sym_comment] = actions(3);
	v->a[212][sym_variable_name] = actions(39);
	v->a[213][sym__case_item_last] = state(1618);
	v->a[213][sym_case_item] = state(1232);
	v->a[213][sym_arithmetic_expansion] = state(1468);
	v->a[213][sym_concatenation] = state(1538);
	v->a[213][sym_string] = state(1468);
	v->a[213][sym_simple_expansion] = state(1468);
	v->a[213][sym_expansion] = state(1468);
	v->a[213][sym_command_substitution] = state(1468);
	v->a[213][sym__extglob_blob] = state(1538);
	v->a[213][sym_terminator] = state(507);
	return (parse_table_451(v));
}

void	parse_table_451(t_parse_table_array *v)
{
	v->a[213][aux_sym_case_statement_repeat1] = state(567);
	v->a[213][sym_word] = actions(774);
	v->a[213][anon_sym_esac] = actions(776);
	v->a[213][anon_sym_LPAREN] = actions(778);
	v->a[213][anon_sym_SEMI_SEMI] = actions(780);
	v->a[213][aux_sym_heredoc_redirect_token1] = actions(780);
	v->a[213][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(782);
	v->a[213][anon_sym_DOLLAR] = actions(784);
	v->a[213][anon_sym_DQUOTE] = actions(786);
	v->a[213][sym_raw_string] = actions(774);
	v->a[213][sym_number] = actions(774);
	v->a[213][anon_sym_DOLLAR_LBRACE] = actions(788);
	v->a[213][anon_sym_DOLLAR_LPAREN] = actions(790);
	v->a[213][anon_sym_BQUOTE] = actions(792);
	v->a[213][sym_comment] = actions(3);
	v->a[213][anon_sym_SEMI] = actions(780);
	v->a[213][sym_extglob_pattern] = actions(794);
	v->a[214][sym_word] = actions(343);
	v->a[214][anon_sym_PIPE] = actions(343);
	v->a[214][anon_sym_AMP_AMP] = actions(343);
	return (parse_table_452(v));
}

void	parse_table_452(t_parse_table_array *v)
{
	v->a[214][anon_sym_PIPE_PIPE] = actions(343);
	v->a[214][anon_sym_BANG] = actions(796);
	v->a[214][anon_sym_LT] = actions(343);
	v->a[214][anon_sym_GT] = actions(343);
	v->a[214][anon_sym_GT_GT] = actions(343);
	v->a[214][anon_sym_LT_LT] = actions(343);
	v->a[214][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(343);
	v->a[214][anon_sym_DASH] = actions(796);
	v->a[214][anon_sym_STAR] = actions(796);
	v->a[214][anon_sym_QMARK] = actions(796);
	v->a[214][anon_sym_DOLLAR] = actions(796);
	v->a[214][anon_sym_DQUOTE] = actions(343);
	v->a[214][sym_raw_string] = actions(343);
	v->a[214][sym_number] = actions(343);
	v->a[214][anon_sym_POUND] = actions(796);
	v->a[214][anon_sym_DOLLAR_LBRACE] = actions(343);
	v->a[214][anon_sym_DOLLAR_LPAREN] = actions(343);
	v->a[214][anon_sym_BQUOTE] = actions(343);
	v->a[214][sym_comment] = actions(3);
	v->a[214][aux_sym__simple_variable_name_token1] = actions(798);
	return (parse_table_453(v));
}

void	parse_table_453(t_parse_table_array *v)
{
	v->a[214][aux_sym__multiline_variable_name_token1] = actions(798);
	v->a[214][anon_sym_AT] = actions(796);
	v->a[214][anon_sym_0] = actions(796);
	v->a[214][sym_variable_name] = actions(800);
	v->a[215][sym_variable_assignment] = state(995);
	v->a[215][sym_file_redirect] = state(1040);
	v->a[215][sym_heredoc_redirect] = state(1040);
	v->a[215][sym_terminator] = state(361);
	v->a[215][aux_sym_redirected_statement_repeat1] = state(1040);
	v->a[215][aux_sym__variable_assignments_repeat1] = state(995);
	v->a[215][sym_word] = actions(576);
	v->a[215][anon_sym_PIPE] = actions(580);
	v->a[215][anon_sym_SEMI_SEMI] = actions(591);
	v->a[215][anon_sym_AMP_AMP] = actions(769);
	v->a[215][anon_sym_PIPE_PIPE] = actions(769);
	v->a[215][anon_sym_LT] = actions(576);
	v->a[215][anon_sym_GT] = actions(576);
	v->a[215][anon_sym_GT_GT] = actions(576);
	v->a[215][anon_sym_LT_LT] = actions(597);
	v->a[215][aux_sym_heredoc_redirect_token1] = actions(593);
	return (parse_table_454(v));
}

void	parse_table_454(t_parse_table_array *v)
{
	v->a[215][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(576);
	v->a[215][anon_sym_DOLLAR] = actions(576);
	v->a[215][anon_sym_DQUOTE] = actions(576);
	v->a[215][sym_raw_string] = actions(576);
	v->a[215][sym_number] = actions(576);
	v->a[215][anon_sym_DOLLAR_LBRACE] = actions(576);
	v->a[215][anon_sym_DOLLAR_LPAREN] = actions(576);
	v->a[215][anon_sym_BQUOTE] = actions(576);
	v->a[215][sym_comment] = actions(3);
	v->a[215][anon_sym_SEMI] = actions(593);
	v->a[215][sym_variable_name] = actions(771);
	v->a[216][sym_variable_assignment] = state(995);
	v->a[216][sym_file_redirect] = state(1040);
	v->a[216][sym_heredoc_redirect] = state(1040);
	v->a[216][sym_terminator] = state(428);
	v->a[216][aux_sym_redirected_statement_repeat1] = state(1040);
	v->a[216][aux_sym__variable_assignments_repeat1] = state(995);
	v->a[216][sym_word] = actions(576);
	v->a[216][anon_sym_PIPE] = actions(580);
	v->a[216][anon_sym_SEMI_SEMI] = actions(578);
	return (parse_table_455(v));
}

/* EOF parse_table_90.c */
