/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_29.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_145(t_parse_table_array *v)
{
	v->a[83][sym_string] = state(195);
	v->a[83][sym_simple_expansion] = state(195);
	v->a[83][sym_expansion] = state(195);
	v->a[83][sym_command_substitution] = state(195);
	v->a[83][aux_sym_command_repeat2] = state(79);
	v->a[83][sym_word] = actions(329);
	v->a[83][anon_sym_PIPE] = actions(246);
	v->a[83][anon_sym_AMP_AMP] = actions(246);
	v->a[83][anon_sym_PIPE_PIPE] = actions(246);
	v->a[83][anon_sym_LT] = actions(246);
	v->a[83][anon_sym_GT] = actions(246);
	v->a[83][anon_sym_GT_GT] = actions(246);
	v->a[83][anon_sym_LT_LT] = actions(246);
	v->a[83][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[83][anon_sym_DOLLAR] = actions(77);
	v->a[83][anon_sym_DQUOTE] = actions(79);
	v->a[83][sym_raw_string] = actions(329);
	v->a[83][sym_number] = actions(329);
	v->a[83][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[83][anon_sym_DOLLAR_LPAREN] = actions(83);
	return (parse_table_146(v));
}

void	parse_table_146(t_parse_table_array *v)
{
	v->a[83][anon_sym_BQUOTE] = actions(246);
	v->a[83][sym_comment] = actions(3);
	v->a[83][anon_sym_SEMI] = actions(246);
	v->a[83][anon_sym_SEMI_SEMI] = actions(246);
	v->a[83][aux_sym_terminator_token1] = actions(246);
	v->a[83][sym__bare_dollar] = actions(211);
	v->a[84][sym_variable_assignment] = state(516);
	v->a[84][sym_file_redirect] = state(515);
	v->a[84][sym_heredoc_redirect] = state(515);
	v->a[84][sym_terminator] = state(364);
	v->a[84][aux_sym_redirected_statement_repeat1] = state(515);
	v->a[84][aux_sym__variable_assignments_repeat1] = state(516);
	v->a[84][ts_builtin_sym_end] = actions(401);
	v->a[84][sym_word] = actions(352);
	v->a[84][anon_sym_PIPE] = actions(356);
	v->a[84][anon_sym_AMP_AMP] = actions(369);
	v->a[84][anon_sym_PIPE_PIPE] = actions(369);
	v->a[84][anon_sym_LT] = actions(352);
	v->a[84][anon_sym_GT] = actions(352);
	v->a[84][anon_sym_GT_GT] = actions(352);
	return (parse_table_147(v));
}

void	parse_table_147(t_parse_table_array *v)
{
	v->a[84][anon_sym_LT_LT] = actions(360);
	v->a[84][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(352);
	v->a[84][anon_sym_DOLLAR] = actions(352);
	v->a[84][anon_sym_DQUOTE] = actions(352);
	v->a[84][sym_raw_string] = actions(352);
	v->a[84][sym_number] = actions(352);
	v->a[84][anon_sym_DOLLAR_LBRACE] = actions(352);
	v->a[84][anon_sym_DOLLAR_LPAREN] = actions(352);
	v->a[84][anon_sym_BQUOTE] = actions(352);
	v->a[84][sym_comment] = actions(3);
	v->a[84][anon_sym_SEMI] = actions(371);
	v->a[84][anon_sym_SEMI_SEMI] = actions(371);
	v->a[84][aux_sym_terminator_token1] = actions(371);
	v->a[84][sym_variable_name] = actions(373);
	v->a[85][sym_arithmetic_expansion] = state(195);
	v->a[85][sym_concatenation] = state(262);
	v->a[85][sym_string] = state(195);
	v->a[85][sym_simple_expansion] = state(195);
	v->a[85][sym_expansion] = state(195);
	v->a[85][sym_command_substitution] = state(195);
	return (parse_table_148(v));
}

void	parse_table_148(t_parse_table_array *v)
{
	v->a[85][aux_sym_command_repeat2] = state(80);
	v->a[85][sym_word] = actions(329);
	v->a[85][anon_sym_PIPE] = actions(240);
	v->a[85][anon_sym_AMP_AMP] = actions(240);
	v->a[85][anon_sym_PIPE_PIPE] = actions(240);
	v->a[85][anon_sym_LT] = actions(240);
	v->a[85][anon_sym_GT] = actions(240);
	v->a[85][anon_sym_GT_GT] = actions(240);
	v->a[85][anon_sym_LT_LT] = actions(240);
	v->a[85][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[85][anon_sym_DOLLAR] = actions(77);
	v->a[85][anon_sym_DQUOTE] = actions(79);
	v->a[85][sym_raw_string] = actions(329);
	v->a[85][sym_number] = actions(329);
	v->a[85][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[85][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[85][anon_sym_BQUOTE] = actions(85);
	v->a[85][sym_comment] = actions(3);
	v->a[85][anon_sym_SEMI] = actions(240);
	v->a[85][anon_sym_SEMI_SEMI] = actions(240);
	return (parse_table_149(v));
}

void	parse_table_149(t_parse_table_array *v)
{
	v->a[85][aux_sym_terminator_token1] = actions(240);
	v->a[85][sym__bare_dollar] = actions(211);
	v->a[86][sym_arithmetic_expansion] = state(147);
	v->a[86][sym_concatenation] = state(86);
	v->a[86][sym_string] = state(147);
	v->a[86][sym_simple_expansion] = state(147);
	v->a[86][sym_expansion] = state(147);
	v->a[86][sym_command_substitution] = state(147);
	v->a[86][aux_sym_file_redirect_repeat1] = state(86);
	v->a[86][ts_builtin_sym_end] = actions(213);
	v->a[86][sym_word] = actions(403);
	v->a[86][anon_sym_PIPE] = actions(218);
	v->a[86][anon_sym_AMP_AMP] = actions(218);
	v->a[86][anon_sym_PIPE_PIPE] = actions(218);
	v->a[86][anon_sym_LT] = actions(218);
	v->a[86][anon_sym_GT] = actions(218);
	v->a[86][anon_sym_GT_GT] = actions(218);
	v->a[86][anon_sym_LT_LT] = actions(218);
	v->a[86][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(406);
	v->a[86][anon_sym_DOLLAR] = actions(409);
	return (parse_table_150(v));
}

/* EOF parse_table_29.c */
