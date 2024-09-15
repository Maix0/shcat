/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_30.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_150(t_parse_table_array *v)
{
	v->a[86][anon_sym_DQUOTE] = actions(412);
	v->a[86][sym_raw_string] = actions(403);
	v->a[86][sym_number] = actions(403);
	v->a[86][anon_sym_DOLLAR_LBRACE] = actions(415);
	v->a[86][anon_sym_DOLLAR_LPAREN] = actions(418);
	v->a[86][anon_sym_BQUOTE] = actions(421);
	v->a[86][sym_comment] = actions(3);
	v->a[86][anon_sym_SEMI] = actions(218);
	v->a[86][anon_sym_SEMI_SEMI] = actions(218);
	v->a[86][aux_sym_terminator_token1] = actions(218);
	v->a[87][sym_arithmetic_expansion] = state(185);
	v->a[87][sym_concatenation] = state(87);
	v->a[87][sym_string] = state(185);
	v->a[87][sym_simple_expansion] = state(185);
	v->a[87][sym_expansion] = state(185);
	v->a[87][sym_command_substitution] = state(185);
	v->a[87][aux_sym_file_redirect_repeat1] = state(87);
	v->a[87][sym_word] = actions(424);
	v->a[87][anon_sym_PIPE] = actions(218);
	v->a[87][anon_sym_AMP_AMP] = actions(218);
	return (parse_table_151(v));
}

void	parse_table_151(t_parse_table_array *v)
{
	v->a[87][anon_sym_PIPE_PIPE] = actions(218);
	v->a[87][anon_sym_LT] = actions(218);
	v->a[87][anon_sym_GT] = actions(218);
	v->a[87][anon_sym_GT_GT] = actions(218);
	v->a[87][anon_sym_LT_LT] = actions(218);
	v->a[87][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(311);
	v->a[87][anon_sym_DOLLAR] = actions(314);
	v->a[87][anon_sym_DQUOTE] = actions(317);
	v->a[87][sym_raw_string] = actions(424);
	v->a[87][sym_number] = actions(424);
	v->a[87][anon_sym_DOLLAR_LBRACE] = actions(320);
	v->a[87][anon_sym_DOLLAR_LPAREN] = actions(323);
	v->a[87][anon_sym_BQUOTE] = actions(326);
	v->a[87][sym_comment] = actions(3);
	v->a[87][anon_sym_SEMI] = actions(218);
	v->a[87][anon_sym_SEMI_SEMI] = actions(218);
	v->a[87][aux_sym_terminator_token1] = actions(218);
	v->a[87][sym_variable_name] = actions(213);
	v->a[88][sym_arithmetic_expansion] = state(195);
	v->a[88][sym_concatenation] = state(262);
	return (parse_table_152(v));
}

void	parse_table_152(t_parse_table_array *v)
{
	v->a[88][sym_string] = state(195);
	v->a[88][sym_simple_expansion] = state(195);
	v->a[88][sym_expansion] = state(195);
	v->a[88][sym_command_substitution] = state(195);
	v->a[88][aux_sym_command_repeat2] = state(79);
	v->a[88][sym_word] = actions(329);
	v->a[88][anon_sym_PIPE] = actions(209);
	v->a[88][anon_sym_AMP_AMP] = actions(209);
	v->a[88][anon_sym_PIPE_PIPE] = actions(209);
	v->a[88][anon_sym_LT] = actions(209);
	v->a[88][anon_sym_GT] = actions(209);
	v->a[88][anon_sym_GT_GT] = actions(209);
	v->a[88][anon_sym_LT_LT] = actions(209);
	v->a[88][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[88][anon_sym_DOLLAR] = actions(77);
	v->a[88][anon_sym_DQUOTE] = actions(79);
	v->a[88][sym_raw_string] = actions(329);
	v->a[88][sym_number] = actions(329);
	v->a[88][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[88][anon_sym_DOLLAR_LPAREN] = actions(83);
	return (parse_table_153(v));
}

void	parse_table_153(t_parse_table_array *v)
{
	v->a[88][anon_sym_BQUOTE] = actions(85);
	v->a[88][sym_comment] = actions(3);
	v->a[88][anon_sym_SEMI] = actions(209);
	v->a[88][anon_sym_SEMI_SEMI] = actions(209);
	v->a[88][aux_sym_terminator_token1] = actions(209);
	v->a[88][sym__bare_dollar] = actions(211);
	v->a[89][sym_arithmetic_expansion] = state(195);
	v->a[89][sym_concatenation] = state(262);
	v->a[89][sym_string] = state(195);
	v->a[89][sym_simple_expansion] = state(195);
	v->a[89][sym_expansion] = state(195);
	v->a[89][sym_command_substitution] = state(195);
	v->a[89][aux_sym_command_repeat2] = state(90);
	v->a[89][sym_word] = actions(329);
	v->a[89][anon_sym_PIPE] = actions(238);
	v->a[89][anon_sym_AMP_AMP] = actions(238);
	v->a[89][anon_sym_PIPE_PIPE] = actions(238);
	v->a[89][anon_sym_LT] = actions(238);
	v->a[89][anon_sym_GT] = actions(238);
	v->a[89][anon_sym_GT_GT] = actions(238);
	return (parse_table_154(v));
}

void	parse_table_154(t_parse_table_array *v)
{
	v->a[89][anon_sym_LT_LT] = actions(238);
	v->a[89][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[89][anon_sym_DOLLAR] = actions(77);
	v->a[89][anon_sym_DQUOTE] = actions(79);
	v->a[89][sym_raw_string] = actions(329);
	v->a[89][sym_number] = actions(329);
	v->a[89][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[89][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[89][anon_sym_BQUOTE] = actions(238);
	v->a[89][sym_comment] = actions(3);
	v->a[89][anon_sym_SEMI] = actions(238);
	v->a[89][anon_sym_SEMI_SEMI] = actions(238);
	v->a[89][aux_sym_terminator_token1] = actions(238);
	v->a[89][sym__bare_dollar] = actions(211);
	v->a[90][sym_arithmetic_expansion] = state(195);
	v->a[90][sym_concatenation] = state(262);
	v->a[90][sym_string] = state(195);
	v->a[90][sym_simple_expansion] = state(195);
	v->a[90][sym_expansion] = state(195);
	v->a[90][sym_command_substitution] = state(195);
	return (parse_table_155(v));
}

/* EOF parse_table_30.c */
