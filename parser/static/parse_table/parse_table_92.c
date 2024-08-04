/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_92.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_460(t_parse_table_array *v)
{
	v->a[220][sym_file_redirect] = state(1040);
	v->a[220][sym_heredoc_redirect] = state(1040);
	v->a[220][sym_terminator] = state(480);
	v->a[220][aux_sym_redirected_statement_repeat1] = state(1040);
	v->a[220][aux_sym__variable_assignments_repeat1] = state(995);
	v->a[220][sym_word] = actions(576);
	v->a[220][anon_sym_PIPE] = actions(580);
	v->a[220][anon_sym_SEMI_SEMI] = actions(812);
	v->a[220][anon_sym_AMP_AMP] = actions(769);
	v->a[220][anon_sym_PIPE_PIPE] = actions(769);
	v->a[220][anon_sym_LT] = actions(576);
	v->a[220][anon_sym_GT] = actions(576);
	v->a[220][anon_sym_GT_GT] = actions(576);
	v->a[220][anon_sym_LT_LT] = actions(597);
	v->a[220][aux_sym_heredoc_redirect_token1] = actions(812);
	v->a[220][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(576);
	v->a[220][anon_sym_DOLLAR] = actions(576);
	v->a[220][anon_sym_DQUOTE] = actions(576);
	v->a[220][sym_raw_string] = actions(576);
	v->a[220][sym_number] = actions(576);
	return (parse_table_461(v));
}

void	parse_table_461(t_parse_table_array *v)
{
	v->a[220][anon_sym_DOLLAR_LBRACE] = actions(576);
	v->a[220][anon_sym_DOLLAR_LPAREN] = actions(576);
	v->a[220][anon_sym_BQUOTE] = actions(576);
	v->a[220][sym_comment] = actions(3);
	v->a[220][anon_sym_SEMI] = actions(812);
	v->a[220][sym_variable_name] = actions(771);
	v->a[221][sym__case_item_last] = state(1657);
	v->a[221][sym_case_item] = state(1232);
	v->a[221][sym_arithmetic_expansion] = state(1468);
	v->a[221][sym_concatenation] = state(1538);
	v->a[221][sym_string] = state(1468);
	v->a[221][sym_simple_expansion] = state(1468);
	v->a[221][sym_expansion] = state(1468);
	v->a[221][sym_command_substitution] = state(1468);
	v->a[221][sym__extglob_blob] = state(1538);
	v->a[221][sym_terminator] = state(508);
	v->a[221][aux_sym_case_statement_repeat1] = state(538);
	v->a[221][sym_word] = actions(774);
	v->a[221][anon_sym_esac] = actions(814);
	v->a[221][anon_sym_LPAREN] = actions(778);
	return (parse_table_462(v));
}

void	parse_table_462(t_parse_table_array *v)
{
	v->a[221][anon_sym_SEMI_SEMI] = actions(780);
	v->a[221][aux_sym_heredoc_redirect_token1] = actions(780);
	v->a[221][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(782);
	v->a[221][anon_sym_DOLLAR] = actions(784);
	v->a[221][anon_sym_DQUOTE] = actions(786);
	v->a[221][sym_raw_string] = actions(774);
	v->a[221][sym_number] = actions(774);
	v->a[221][anon_sym_DOLLAR_LBRACE] = actions(788);
	v->a[221][anon_sym_DOLLAR_LPAREN] = actions(790);
	v->a[221][anon_sym_BQUOTE] = actions(792);
	v->a[221][sym_comment] = actions(3);
	v->a[221][anon_sym_SEMI] = actions(780);
	v->a[221][sym_extglob_pattern] = actions(794);
	v->a[222][sym_variable_assignment] = state(970);
	v->a[222][sym_file_redirect] = state(971);
	v->a[222][sym_heredoc_redirect] = state(971);
	v->a[222][aux_sym_redirected_statement_repeat1] = state(971);
	v->a[222][aux_sym__variable_assignments_repeat1] = state(970);
	v->a[222][sym_word] = actions(576);
	v->a[222][anon_sym_esac] = actions(816);
	return (parse_table_463(v));
}

void	parse_table_463(t_parse_table_array *v)
{
	v->a[222][anon_sym_PIPE] = actions(580);
	v->a[222][anon_sym_SEMI_SEMI] = actions(816);
	v->a[222][anon_sym_AMP_AMP] = actions(816);
	v->a[222][anon_sym_PIPE_PIPE] = actions(816);
	v->a[222][anon_sym_LT] = actions(576);
	v->a[222][anon_sym_GT] = actions(576);
	v->a[222][anon_sym_GT_GT] = actions(576);
	v->a[222][anon_sym_LT_LT] = actions(816);
	v->a[222][aux_sym_heredoc_redirect_token1] = actions(816);
	v->a[222][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(576);
	v->a[222][anon_sym_DOLLAR] = actions(576);
	v->a[222][anon_sym_DQUOTE] = actions(576);
	v->a[222][sym_raw_string] = actions(576);
	v->a[222][sym_number] = actions(576);
	v->a[222][anon_sym_DOLLAR_LBRACE] = actions(576);
	v->a[222][anon_sym_DOLLAR_LPAREN] = actions(576);
	v->a[222][anon_sym_BQUOTE] = actions(576);
	v->a[222][sym_comment] = actions(3);
	v->a[222][anon_sym_SEMI] = actions(816);
	v->a[222][sym_variable_name] = actions(588);
	return (parse_table_464(v));
}

void	parse_table_464(t_parse_table_array *v)
{
	v->a[223][sym_subshell] = state(1230);
	v->a[223][sym_command] = state(1231);
	v->a[223][sym_command_name] = state(170);
	v->a[223][sym_variable_assignment] = state(545);
	v->a[223][sym_file_redirect] = state(1083);
	v->a[223][sym_arithmetic_expansion] = state(276);
	v->a[223][sym_concatenation] = state(546);
	v->a[223][sym_string] = state(276);
	v->a[223][sym_simple_expansion] = state(276);
	v->a[223][sym_expansion] = state(276);
	v->a[223][sym_command_substitution] = state(276);
	v->a[223][aux_sym_command_repeat1] = state(408);
	v->a[223][sym_word] = actions(105);
	v->a[223][anon_sym_LPAREN] = actions(89);
	v->a[223][anon_sym_LT] = actions(758);
	v->a[223][anon_sym_GT] = actions(758);
	v->a[223][anon_sym_GT_GT] = actions(758);
	v->a[223][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(99);
	v->a[223][anon_sym_DOLLAR] = actions(101);
	v->a[223][anon_sym_DQUOTE] = actions(103);
	return (parse_table_465(v));
}

/* EOF parse_table_92.c */
