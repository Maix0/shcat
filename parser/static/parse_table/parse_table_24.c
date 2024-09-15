/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_24.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_120(t_parse_table_array *v)
{
	v->a[65][anon_sym_GT] = actions(238);
	v->a[65][anon_sym_GT_GT] = actions(238);
	v->a[65][anon_sym_LT_LT] = actions(238);
	v->a[65][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(17);
	v->a[65][anon_sym_DOLLAR] = actions(19);
	v->a[65][anon_sym_DQUOTE] = actions(21);
	v->a[65][sym_raw_string] = actions(244);
	v->a[65][sym_number] = actions(244);
	v->a[65][anon_sym_DOLLAR_LBRACE] = actions(23);
	v->a[65][anon_sym_DOLLAR_LPAREN] = actions(25);
	v->a[65][anon_sym_BQUOTE] = actions(27);
	v->a[65][sym_comment] = actions(3);
	v->a[65][anon_sym_SEMI] = actions(238);
	v->a[65][anon_sym_SEMI_SEMI] = actions(238);
	v->a[65][aux_sym_terminator_token1] = actions(238);
	v->a[65][sym__bare_dollar] = actions(248);
	v->a[66][sym_arithmetic_expansion] = state(123);
	v->a[66][sym_concatenation] = state(70);
	v->a[66][sym_string] = state(123);
	v->a[66][sym_simple_expansion] = state(123);
	return (parse_table_121(v));
}

void	parse_table_121(t_parse_table_array *v)
{
	v->a[66][sym_expansion] = state(123);
	v->a[66][sym_command_substitution] = state(123);
	v->a[66][aux_sym_file_redirect_repeat1] = state(70);
	v->a[66][sym_word] = actions(205);
	v->a[66][anon_sym_RPAREN] = actions(205);
	v->a[66][anon_sym_PIPE] = actions(205);
	v->a[66][anon_sym_AMP_AMP] = actions(205);
	v->a[66][anon_sym_PIPE_PIPE] = actions(205);
	v->a[66][anon_sym_LT] = actions(205);
	v->a[66][anon_sym_GT] = actions(205);
	v->a[66][anon_sym_GT_GT] = actions(205);
	v->a[66][anon_sym_LT_LT] = actions(205);
	v->a[66][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(205);
	v->a[66][anon_sym_DOLLAR] = actions(205);
	v->a[66][anon_sym_DQUOTE] = actions(205);
	v->a[66][sym_raw_string] = actions(205);
	v->a[66][sym_number] = actions(205);
	v->a[66][anon_sym_DOLLAR_LBRACE] = actions(205);
	v->a[66][anon_sym_DOLLAR_LPAREN] = actions(205);
	v->a[66][anon_sym_BQUOTE] = actions(205);
	return (parse_table_122(v));
}

void	parse_table_122(t_parse_table_array *v)
{
	v->a[66][sym_comment] = actions(3);
	v->a[66][anon_sym_SEMI] = actions(205);
	v->a[66][anon_sym_SEMI_SEMI] = actions(205);
	v->a[66][aux_sym_terminator_token1] = actions(205);
	v->a[66][sym_variable_name] = actions(203);
	v->a[67][sym_arithmetic_expansion] = state(137);
	v->a[67][sym_concatenation] = state(261);
	v->a[67][sym_string] = state(137);
	v->a[67][sym_simple_expansion] = state(137);
	v->a[67][sym_expansion] = state(137);
	v->a[67][sym_command_substitution] = state(137);
	v->a[67][aux_sym_command_repeat2] = state(68);
	v->a[67][ts_builtin_sym_end] = actions(254);
	v->a[67][sym_word] = actions(244);
	v->a[67][anon_sym_PIPE] = actions(209);
	v->a[67][anon_sym_AMP_AMP] = actions(209);
	v->a[67][anon_sym_PIPE_PIPE] = actions(209);
	v->a[67][anon_sym_LT] = actions(209);
	v->a[67][anon_sym_GT] = actions(209);
	v->a[67][anon_sym_GT_GT] = actions(209);
	return (parse_table_123(v));
}

void	parse_table_123(t_parse_table_array *v)
{
	v->a[67][anon_sym_LT_LT] = actions(209);
	v->a[67][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(17);
	v->a[67][anon_sym_DOLLAR] = actions(19);
	v->a[67][anon_sym_DQUOTE] = actions(21);
	v->a[67][sym_raw_string] = actions(244);
	v->a[67][sym_number] = actions(244);
	v->a[67][anon_sym_DOLLAR_LBRACE] = actions(23);
	v->a[67][anon_sym_DOLLAR_LPAREN] = actions(25);
	v->a[67][anon_sym_BQUOTE] = actions(27);
	v->a[67][sym_comment] = actions(3);
	v->a[67][anon_sym_SEMI] = actions(209);
	v->a[67][anon_sym_SEMI_SEMI] = actions(209);
	v->a[67][aux_sym_terminator_token1] = actions(209);
	v->a[67][sym__bare_dollar] = actions(248);
	v->a[68][sym_arithmetic_expansion] = state(137);
	v->a[68][sym_concatenation] = state(261);
	v->a[68][sym_string] = state(137);
	v->a[68][sym_simple_expansion] = state(137);
	v->a[68][sym_expansion] = state(137);
	v->a[68][sym_command_substitution] = state(137);
	return (parse_table_124(v));
}

void	parse_table_124(t_parse_table_array *v)
{
	v->a[68][aux_sym_command_repeat2] = state(68);
	v->a[68][ts_builtin_sym_end] = actions(256);
	v->a[68][sym_word] = actions(258);
	v->a[68][anon_sym_PIPE] = actions(261);
	v->a[68][anon_sym_AMP_AMP] = actions(261);
	v->a[68][anon_sym_PIPE_PIPE] = actions(261);
	v->a[68][anon_sym_LT] = actions(261);
	v->a[68][anon_sym_GT] = actions(261);
	v->a[68][anon_sym_GT_GT] = actions(261);
	v->a[68][anon_sym_LT_LT] = actions(261);
	v->a[68][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(263);
	v->a[68][anon_sym_DOLLAR] = actions(266);
	v->a[68][anon_sym_DQUOTE] = actions(269);
	v->a[68][sym_raw_string] = actions(258);
	v->a[68][sym_number] = actions(258);
	v->a[68][anon_sym_DOLLAR_LBRACE] = actions(272);
	v->a[68][anon_sym_DOLLAR_LPAREN] = actions(275);
	v->a[68][anon_sym_BQUOTE] = actions(278);
	v->a[68][sym_comment] = actions(3);
	v->a[68][anon_sym_SEMI] = actions(261);
	return (parse_table_125(v));
}

/* EOF parse_table_24.c */
