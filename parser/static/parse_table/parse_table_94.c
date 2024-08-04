/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_94.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_470(t_parse_table_array *v)
{
	v->a[227][anon_sym_GT] = actions(576);
	v->a[227][anon_sym_GT_GT] = actions(576);
	v->a[227][anon_sym_LT_LT] = actions(816);
	v->a[227][aux_sym_heredoc_redirect_token1] = actions(816);
	v->a[227][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(576);
	v->a[227][anon_sym_DOLLAR] = actions(576);
	v->a[227][anon_sym_DQUOTE] = actions(576);
	v->a[227][sym_raw_string] = actions(576);
	v->a[227][sym_number] = actions(576);
	v->a[227][anon_sym_DOLLAR_LBRACE] = actions(576);
	v->a[227][anon_sym_DOLLAR_LPAREN] = actions(576);
	v->a[227][anon_sym_BQUOTE] = actions(576);
	v->a[227][sym_comment] = actions(3);
	v->a[227][anon_sym_SEMI] = actions(816);
	v->a[227][sym_variable_name] = actions(599);
	v->a[228][sym_subshell] = state(1039);
	v->a[228][sym_command] = state(1065);
	v->a[228][sym_command_name] = state(185);
	v->a[228][sym_variable_assignment] = state(557);
	v->a[228][sym_file_redirect] = state(1083);
	return (parse_table_471(v));
}

void	parse_table_471(t_parse_table_array *v)
{
	v->a[228][sym_arithmetic_expansion] = state(401);
	v->a[228][sym_concatenation] = state(555);
	v->a[228][sym_string] = state(401);
	v->a[228][sym_simple_expansion] = state(401);
	v->a[228][sym_expansion] = state(401);
	v->a[228][sym_command_substitution] = state(401);
	v->a[228][aux_sym_command_repeat1] = state(411);
	v->a[228][sym_word] = actions(59);
	v->a[228][anon_sym_LPAREN] = actions(17);
	v->a[228][anon_sym_LT] = actions(758);
	v->a[228][anon_sym_GT] = actions(758);
	v->a[228][anon_sym_GT_GT] = actions(758);
	v->a[228][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[228][anon_sym_DOLLAR] = actions(55);
	v->a[228][anon_sym_DQUOTE] = actions(57);
	v->a[228][sym_raw_string] = actions(59);
	v->a[228][sym_number] = actions(59);
	v->a[228][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[228][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[228][anon_sym_BQUOTE] = actions(65);
	return (parse_table_472(v));
}

void	parse_table_472(t_parse_table_array *v)
{
	v->a[228][sym_comment] = actions(3);
	v->a[228][sym_variable_name] = actions(67);
	v->a[229][sym_subshell] = state(1431);
	v->a[229][sym_command] = state(1432);
	v->a[229][sym_command_name] = state(274);
	v->a[229][sym_variable_assignment] = state(701);
	v->a[229][sym_file_redirect] = state(1083);
	v->a[229][sym_arithmetic_expansion] = state(606);
	v->a[229][sym_concatenation] = state(772);
	v->a[229][sym_string] = state(606);
	v->a[229][sym_simple_expansion] = state(606);
	v->a[229][sym_expansion] = state(606);
	v->a[229][sym_command_substitution] = state(606);
	v->a[229][aux_sym_command_repeat1] = state(328);
	v->a[229][sym_word] = actions(321);
	v->a[229][anon_sym_LPAREN] = actions(307);
	v->a[229][anon_sym_LT] = actions(758);
	v->a[229][anon_sym_GT] = actions(758);
	v->a[229][anon_sym_GT_GT] = actions(758);
	v->a[229][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(315);
	return (parse_table_473(v));
}

void	parse_table_473(t_parse_table_array *v)
{
	v->a[229][anon_sym_DOLLAR] = actions(317);
	v->a[229][anon_sym_DQUOTE] = actions(319);
	v->a[229][sym_raw_string] = actions(321);
	v->a[229][sym_number] = actions(321);
	v->a[229][anon_sym_DOLLAR_LBRACE] = actions(323);
	v->a[229][anon_sym_DOLLAR_LPAREN] = actions(325);
	v->a[229][anon_sym_BQUOTE] = actions(327);
	v->a[229][sym_comment] = actions(3);
	v->a[229][sym_variable_name] = actions(329);
	v->a[230][sym_variable_assignment] = state(995);
	v->a[230][sym_file_redirect] = state(1040);
	v->a[230][sym_heredoc_redirect] = state(1040);
	v->a[230][sym_terminator] = state(573);
	v->a[230][aux_sym_redirected_statement_repeat1] = state(1040);
	v->a[230][aux_sym__variable_assignments_repeat1] = state(995);
	v->a[230][sym_word] = actions(576);
	v->a[230][anon_sym_PIPE] = actions(580);
	v->a[230][anon_sym_SEMI_SEMI] = actions(593);
	v->a[230][anon_sym_AMP_AMP] = actions(769);
	v->a[230][anon_sym_PIPE_PIPE] = actions(769);
	return (parse_table_474(v));
}

void	parse_table_474(t_parse_table_array *v)
{
	v->a[230][anon_sym_LT] = actions(576);
	v->a[230][anon_sym_GT] = actions(576);
	v->a[230][anon_sym_GT_GT] = actions(576);
	v->a[230][anon_sym_LT_LT] = actions(597);
	v->a[230][aux_sym_heredoc_redirect_token1] = actions(593);
	v->a[230][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(576);
	v->a[230][anon_sym_DOLLAR] = actions(576);
	v->a[230][anon_sym_DQUOTE] = actions(576);
	v->a[230][sym_raw_string] = actions(576);
	v->a[230][sym_number] = actions(576);
	v->a[230][anon_sym_DOLLAR_LBRACE] = actions(576);
	v->a[230][anon_sym_DOLLAR_LPAREN] = actions(576);
	v->a[230][anon_sym_BQUOTE] = actions(576);
	v->a[230][sym_comment] = actions(3);
	v->a[230][anon_sym_SEMI] = actions(593);
	v->a[230][sym_variable_name] = actions(771);
	v->a[231][sym_variable_assignment] = state(995);
	v->a[231][sym_file_redirect] = state(1040);
	v->a[231][sym_heredoc_redirect] = state(1040);
	v->a[231][sym_terminator] = state(281);
	return (parse_table_475(v));
}

/* EOF parse_table_94.c */
