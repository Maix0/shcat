/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_25.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_125(t_parse_table_array *v)
{
	v->a[68][anon_sym_SEMI_SEMI] = actions(261);
	v->a[68][aux_sym_terminator_token1] = actions(261);
	v->a[68][sym__bare_dollar] = actions(281);
	v->a[69][sym_arithmetic_expansion] = state(131);
	v->a[69][sym_concatenation] = state(262);
	v->a[69][sym_string] = state(131);
	v->a[69][sym_simple_expansion] = state(131);
	v->a[69][sym_expansion] = state(131);
	v->a[69][sym_command_substitution] = state(131);
	v->a[69][aux_sym_command_repeat2] = state(69);
	v->a[69][sym_word] = actions(284);
	v->a[69][anon_sym_RPAREN] = actions(261);
	v->a[69][anon_sym_PIPE] = actions(261);
	v->a[69][anon_sym_AMP_AMP] = actions(261);
	v->a[69][anon_sym_PIPE_PIPE] = actions(261);
	v->a[69][anon_sym_LT] = actions(261);
	v->a[69][anon_sym_GT] = actions(261);
	v->a[69][anon_sym_GT_GT] = actions(261);
	v->a[69][anon_sym_LT_LT] = actions(261);
	v->a[69][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(287);
	return (parse_table_126(v));
}

void	parse_table_126(t_parse_table_array *v)
{
	v->a[69][anon_sym_DOLLAR] = actions(290);
	v->a[69][anon_sym_DQUOTE] = actions(293);
	v->a[69][sym_raw_string] = actions(284);
	v->a[69][sym_number] = actions(284);
	v->a[69][anon_sym_DOLLAR_LBRACE] = actions(296);
	v->a[69][anon_sym_DOLLAR_LPAREN] = actions(299);
	v->a[69][anon_sym_BQUOTE] = actions(302);
	v->a[69][sym_comment] = actions(3);
	v->a[69][anon_sym_SEMI] = actions(261);
	v->a[69][anon_sym_SEMI_SEMI] = actions(261);
	v->a[69][aux_sym_terminator_token1] = actions(261);
	v->a[69][sym__bare_dollar] = actions(305);
	v->a[70][sym_arithmetic_expansion] = state(123);
	v->a[70][sym_concatenation] = state(70);
	v->a[70][sym_string] = state(123);
	v->a[70][sym_simple_expansion] = state(123);
	v->a[70][sym_expansion] = state(123);
	v->a[70][sym_command_substitution] = state(123);
	v->a[70][aux_sym_file_redirect_repeat1] = state(70);
	v->a[70][sym_word] = actions(308);
	return (parse_table_127(v));
}

void	parse_table_127(t_parse_table_array *v)
{
	v->a[70][anon_sym_RPAREN] = actions(218);
	v->a[70][anon_sym_PIPE] = actions(218);
	v->a[70][anon_sym_AMP_AMP] = actions(218);
	v->a[70][anon_sym_PIPE_PIPE] = actions(218);
	v->a[70][anon_sym_LT] = actions(218);
	v->a[70][anon_sym_GT] = actions(218);
	v->a[70][anon_sym_GT_GT] = actions(218);
	v->a[70][anon_sym_LT_LT] = actions(218);
	v->a[70][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(311);
	v->a[70][anon_sym_DOLLAR] = actions(314);
	v->a[70][anon_sym_DQUOTE] = actions(317);
	v->a[70][sym_raw_string] = actions(308);
	v->a[70][sym_number] = actions(308);
	v->a[70][anon_sym_DOLLAR_LBRACE] = actions(320);
	v->a[70][anon_sym_DOLLAR_LPAREN] = actions(323);
	v->a[70][anon_sym_BQUOTE] = actions(326);
	v->a[70][sym_comment] = actions(3);
	v->a[70][anon_sym_SEMI] = actions(218);
	v->a[70][anon_sym_SEMI_SEMI] = actions(218);
	v->a[70][aux_sym_terminator_token1] = actions(218);
	return (parse_table_128(v));
}

void	parse_table_128(t_parse_table_array *v)
{
	v->a[70][sym_variable_name] = actions(213);
	v->a[71][sym_arithmetic_expansion] = state(131);
	v->a[71][sym_concatenation] = state(262);
	v->a[71][sym_string] = state(131);
	v->a[71][sym_simple_expansion] = state(131);
	v->a[71][sym_expansion] = state(131);
	v->a[71][sym_command_substitution] = state(131);
	v->a[71][aux_sym_command_repeat2] = state(69);
	v->a[71][sym_word] = actions(207);
	v->a[71][anon_sym_RPAREN] = actions(246);
	v->a[71][anon_sym_PIPE] = actions(246);
	v->a[71][anon_sym_AMP_AMP] = actions(246);
	v->a[71][anon_sym_PIPE_PIPE] = actions(246);
	v->a[71][anon_sym_LT] = actions(246);
	v->a[71][anon_sym_GT] = actions(246);
	v->a[71][anon_sym_GT_GT] = actions(246);
	v->a[71][anon_sym_LT_LT] = actions(246);
	v->a[71][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[71][anon_sym_DOLLAR] = actions(77);
	v->a[71][anon_sym_DQUOTE] = actions(79);
	return (parse_table_129(v));
}

void	parse_table_129(t_parse_table_array *v)
{
	v->a[71][sym_raw_string] = actions(207);
	v->a[71][sym_number] = actions(207);
	v->a[71][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[71][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[71][anon_sym_BQUOTE] = actions(85);
	v->a[71][sym_comment] = actions(3);
	v->a[71][anon_sym_SEMI] = actions(246);
	v->a[71][anon_sym_SEMI_SEMI] = actions(246);
	v->a[71][aux_sym_terminator_token1] = actions(246);
	v->a[71][sym__bare_dollar] = actions(211);
	v->a[72][sym_arithmetic_expansion] = state(195);
	v->a[72][sym_concatenation] = state(262);
	v->a[72][sym_string] = state(195);
	v->a[72][sym_simple_expansion] = state(195);
	v->a[72][sym_expansion] = state(195);
	v->a[72][sym_command_substitution] = state(195);
	v->a[72][aux_sym_command_repeat2] = state(88);
	v->a[72][sym_word] = actions(329);
	v->a[72][anon_sym_PIPE] = actions(238);
	v->a[72][anon_sym_AMP_AMP] = actions(238);
	return (parse_table_130(v));
}

/* EOF parse_table_25.c */
