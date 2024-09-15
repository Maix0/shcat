/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_26.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_130(t_parse_table_array *v)
{
	v->a[72][anon_sym_PIPE_PIPE] = actions(238);
	v->a[72][anon_sym_LT] = actions(238);
	v->a[72][anon_sym_GT] = actions(238);
	v->a[72][anon_sym_GT_GT] = actions(238);
	v->a[72][anon_sym_LT_LT] = actions(238);
	v->a[72][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[72][anon_sym_DOLLAR] = actions(77);
	v->a[72][anon_sym_DQUOTE] = actions(79);
	v->a[72][sym_raw_string] = actions(329);
	v->a[72][sym_number] = actions(329);
	v->a[72][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[72][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[72][anon_sym_BQUOTE] = actions(85);
	v->a[72][sym_comment] = actions(3);
	v->a[72][anon_sym_SEMI] = actions(238);
	v->a[72][anon_sym_SEMI_SEMI] = actions(238);
	v->a[72][aux_sym_terminator_token1] = actions(238);
	v->a[72][sym__bare_dollar] = actions(211);
	v->a[73][sym_arithmetic_expansion] = state(195);
	v->a[73][sym_concatenation] = state(262);
	return (parse_table_131(v));
}

void	parse_table_131(t_parse_table_array *v)
{
	v->a[73][sym_string] = state(195);
	v->a[73][sym_simple_expansion] = state(195);
	v->a[73][sym_expansion] = state(195);
	v->a[73][sym_command_substitution] = state(195);
	v->a[73][aux_sym_command_repeat2] = state(83);
	v->a[73][sym_word] = actions(329);
	v->a[73][anon_sym_PIPE] = actions(240);
	v->a[73][anon_sym_AMP_AMP] = actions(240);
	v->a[73][anon_sym_PIPE_PIPE] = actions(240);
	v->a[73][anon_sym_LT] = actions(240);
	v->a[73][anon_sym_GT] = actions(240);
	v->a[73][anon_sym_GT_GT] = actions(240);
	v->a[73][anon_sym_LT_LT] = actions(240);
	v->a[73][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[73][anon_sym_DOLLAR] = actions(77);
	v->a[73][anon_sym_DQUOTE] = actions(79);
	v->a[73][sym_raw_string] = actions(329);
	v->a[73][sym_number] = actions(329);
	v->a[73][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[73][anon_sym_DOLLAR_LPAREN] = actions(83);
	return (parse_table_132(v));
}

void	parse_table_132(t_parse_table_array *v)
{
	v->a[73][anon_sym_BQUOTE] = actions(240);
	v->a[73][sym_comment] = actions(3);
	v->a[73][anon_sym_SEMI] = actions(240);
	v->a[73][anon_sym_SEMI_SEMI] = actions(240);
	v->a[73][aux_sym_terminator_token1] = actions(240);
	v->a[73][sym__bare_dollar] = actions(211);
	v->a[74][sym_arithmetic_expansion] = state(168);
	v->a[74][sym_concatenation] = state(74);
	v->a[74][sym_string] = state(168);
	v->a[74][sym_simple_expansion] = state(168);
	v->a[74][sym_expansion] = state(168);
	v->a[74][sym_command_substitution] = state(168);
	v->a[74][aux_sym_file_redirect_repeat1] = state(74);
	v->a[74][sym_word] = actions(331);
	v->a[74][anon_sym_RPAREN] = actions(218);
	v->a[74][anon_sym_PIPE] = actions(218);
	v->a[74][anon_sym_AMP_AMP] = actions(218);
	v->a[74][anon_sym_PIPE_PIPE] = actions(218);
	v->a[74][anon_sym_LT] = actions(218);
	v->a[74][anon_sym_GT] = actions(218);
	return (parse_table_133(v));
}

void	parse_table_133(t_parse_table_array *v)
{
	v->a[74][anon_sym_GT_GT] = actions(218);
	v->a[74][anon_sym_LT_LT] = actions(218);
	v->a[74][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(334);
	v->a[74][anon_sym_DOLLAR] = actions(337);
	v->a[74][anon_sym_DQUOTE] = actions(340);
	v->a[74][sym_raw_string] = actions(331);
	v->a[74][sym_number] = actions(331);
	v->a[74][anon_sym_DOLLAR_LBRACE] = actions(343);
	v->a[74][anon_sym_DOLLAR_LPAREN] = actions(346);
	v->a[74][anon_sym_BQUOTE] = actions(349);
	v->a[74][sym_comment] = actions(3);
	v->a[74][anon_sym_SEMI] = actions(218);
	v->a[74][anon_sym_SEMI_SEMI] = actions(218);
	v->a[74][aux_sym_terminator_token1] = actions(218);
	v->a[75][sym_variable_assignment] = state(504);
	v->a[75][sym_file_redirect] = state(503);
	v->a[75][sym_heredoc_redirect] = state(503);
	v->a[75][sym_terminator] = state(363);
	v->a[75][aux_sym_redirected_statement_repeat1] = state(503);
	v->a[75][aux_sym__variable_assignments_repeat1] = state(504);
	return (parse_table_134(v));
}

void	parse_table_134(t_parse_table_array *v)
{
	v->a[75][sym_word] = actions(352);
	v->a[75][anon_sym_RPAREN] = actions(354);
	v->a[75][anon_sym_PIPE] = actions(356);
	v->a[75][anon_sym_AMP_AMP] = actions(358);
	v->a[75][anon_sym_PIPE_PIPE] = actions(358);
	v->a[75][anon_sym_LT] = actions(352);
	v->a[75][anon_sym_GT] = actions(352);
	v->a[75][anon_sym_GT_GT] = actions(352);
	v->a[75][anon_sym_LT_LT] = actions(360);
	v->a[75][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(352);
	v->a[75][anon_sym_DOLLAR] = actions(352);
	v->a[75][anon_sym_DQUOTE] = actions(352);
	v->a[75][sym_raw_string] = actions(352);
	v->a[75][sym_number] = actions(352);
	v->a[75][anon_sym_DOLLAR_LBRACE] = actions(352);
	v->a[75][anon_sym_DOLLAR_LPAREN] = actions(352);
	v->a[75][anon_sym_BQUOTE] = actions(352);
	v->a[75][sym_comment] = actions(3);
	v->a[75][anon_sym_SEMI] = actions(362);
	v->a[75][anon_sym_SEMI_SEMI] = actions(362);
	return (parse_table_135(v));
}

/* EOF parse_table_26.c */
