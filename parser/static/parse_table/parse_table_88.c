/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_88.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_440(t_parse_table_array *v)
{
	v->a[205][sym_word] = actions(602);
	v->a[205][anon_sym_PIPE] = actions(450);
	v->a[205][anon_sym_SEMI_SEMI] = actions(450);
	v->a[205][anon_sym_AMP_AMP] = actions(450);
	v->a[205][anon_sym_PIPE_PIPE] = actions(450);
	v->a[205][anon_sym_LT] = actions(450);
	v->a[205][anon_sym_GT] = actions(450);
	v->a[205][anon_sym_GT_GT] = actions(450);
	v->a[205][anon_sym_LT_LT] = actions(450);
	v->a[205][aux_sym_heredoc_redirect_token1] = actions(450);
	v->a[205][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[205][anon_sym_DOLLAR] = actions(55);
	v->a[205][anon_sym_DQUOTE] = actions(57);
	v->a[205][sym_raw_string] = actions(602);
	v->a[205][sym_number] = actions(602);
	v->a[205][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[205][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[205][anon_sym_BQUOTE] = actions(65);
	v->a[205][sym_comment] = actions(3);
	v->a[205][anon_sym_SEMI] = actions(450);
	return (parse_table_441(v));
}

void	parse_table_441(t_parse_table_array *v)
{
	v->a[205][sym__bare_dollar] = actions(419);
	v->a[206][sym_subshell] = state(1039);
	v->a[206][sym_command] = state(1065);
	v->a[206][sym_command_name] = state(252);
	v->a[206][sym_variable_assignment] = state(557);
	v->a[206][sym_file_redirect] = state(1083);
	v->a[206][sym_arithmetic_expansion] = state(525);
	v->a[206][sym_concatenation] = state(555);
	v->a[206][sym_string] = state(525);
	v->a[206][sym_simple_expansion] = state(525);
	v->a[206][sym_expansion] = state(525);
	v->a[206][sym_command_substitution] = state(525);
	v->a[206][aux_sym_command_repeat1] = state(387);
	v->a[206][sym_word] = actions(337);
	v->a[206][anon_sym_LPAREN] = actions(17);
	v->a[206][anon_sym_LT] = actions(758);
	v->a[206][anon_sym_GT] = actions(758);
	v->a[206][anon_sym_GT_GT] = actions(758);
	v->a[206][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[206][anon_sym_DOLLAR] = actions(55);
	return (parse_table_442(v));
}

void	parse_table_442(t_parse_table_array *v)
{
	v->a[206][anon_sym_DQUOTE] = actions(57);
	v->a[206][sym_raw_string] = actions(337);
	v->a[206][sym_number] = actions(337);
	v->a[206][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[206][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[206][anon_sym_BQUOTE] = actions(65);
	v->a[206][sym_comment] = actions(3);
	v->a[206][sym_variable_name] = actions(339);
	v->a[207][sym_arithmetic_expansion] = state(493);
	v->a[207][sym_concatenation] = state(225);
	v->a[207][sym_string] = state(493);
	v->a[207][sym_simple_expansion] = state(493);
	v->a[207][sym_expansion] = state(493);
	v->a[207][sym_command_substitution] = state(493);
	v->a[207][aux_sym_for_statement_repeat1] = state(225);
	v->a[207][sym_word] = actions(760);
	v->a[207][anon_sym_PIPE] = actions(421);
	v->a[207][anon_sym_SEMI_SEMI] = actions(421);
	v->a[207][anon_sym_AMP_AMP] = actions(421);
	v->a[207][anon_sym_PIPE_PIPE] = actions(421);
	return (parse_table_443(v));
}

void	parse_table_443(t_parse_table_array *v)
{
	v->a[207][anon_sym_LT] = actions(421);
	v->a[207][anon_sym_GT] = actions(421);
	v->a[207][anon_sym_GT_GT] = actions(421);
	v->a[207][anon_sym_LT_LT] = actions(421);
	v->a[207][aux_sym_heredoc_redirect_token1] = actions(421);
	v->a[207][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(704);
	v->a[207][anon_sym_DOLLAR] = actions(706);
	v->a[207][anon_sym_DQUOTE] = actions(708);
	v->a[207][sym_raw_string] = actions(760);
	v->a[207][sym_number] = actions(760);
	v->a[207][anon_sym_DOLLAR_LBRACE] = actions(710);
	v->a[207][anon_sym_DOLLAR_LPAREN] = actions(712);
	v->a[207][anon_sym_BQUOTE] = actions(421);
	v->a[207][sym_comment] = actions(3);
	v->a[207][anon_sym_SEMI] = actions(421);
	v->a[208][sym_variable_assignment] = state(967);
	v->a[208][sym_file_redirect] = state(925);
	v->a[208][sym_heredoc_redirect] = state(925);
	v->a[208][sym_terminator] = state(559);
	v->a[208][aux_sym_redirected_statement_repeat1] = state(925);
	return (parse_table_444(v));
}

void	parse_table_444(t_parse_table_array *v)
{
	v->a[208][aux_sym__variable_assignments_repeat1] = state(967);
	v->a[208][sym_word] = actions(576);
	v->a[208][anon_sym_PIPE] = actions(580);
	v->a[208][anon_sym_SEMI_SEMI] = actions(593);
	v->a[208][anon_sym_AMP_AMP] = actions(762);
	v->a[208][anon_sym_PIPE_PIPE] = actions(762);
	v->a[208][anon_sym_LT] = actions(576);
	v->a[208][anon_sym_GT] = actions(576);
	v->a[208][anon_sym_GT_GT] = actions(576);
	v->a[208][anon_sym_LT_LT] = actions(597);
	v->a[208][aux_sym_heredoc_redirect_token1] = actions(593);
	v->a[208][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(576);
	v->a[208][anon_sym_DOLLAR] = actions(576);
	v->a[208][anon_sym_DQUOTE] = actions(576);
	v->a[208][sym_raw_string] = actions(576);
	v->a[208][sym_number] = actions(576);
	v->a[208][anon_sym_DOLLAR_LBRACE] = actions(576);
	v->a[208][anon_sym_DOLLAR_LPAREN] = actions(576);
	v->a[208][anon_sym_BQUOTE] = actions(578);
	v->a[208][sym_comment] = actions(3);
	return (parse_table_445(v));
}

/* EOF parse_table_88.c */
