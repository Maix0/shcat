/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_98.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_490(t_parse_table_array *v)
{
	v->a[393][sym_variable_name] = actions(885);
	v->a[394][ts_builtin_sym_end] = actions(881);
	v->a[394][sym_word] = actions(883);
	v->a[394][anon_sym_LBRACE] = actions(883);
	v->a[394][anon_sym_LPAREN] = actions(883);
	v->a[394][anon_sym_BANG] = actions(883);
	v->a[394][anon_sym_LT] = actions(883);
	v->a[394][anon_sym_GT] = actions(883);
	v->a[394][anon_sym_GT_GT] = actions(883);
	v->a[394][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(883);
	v->a[394][anon_sym_DOLLAR] = actions(883);
	v->a[394][anon_sym_DQUOTE] = actions(883);
	v->a[394][sym_raw_string] = actions(883);
	v->a[394][sym_number] = actions(883);
	v->a[394][anon_sym_DOLLAR_LBRACE] = actions(883);
	v->a[394][anon_sym_DOLLAR_LPAREN] = actions(883);
	v->a[394][anon_sym_BQUOTE] = actions(883);
	v->a[394][sym_comment] = actions(3);
	v->a[394][sym_variable_name] = actions(885);
	v->a[395][sym_word] = actions(883);
	return (parse_table_491(v));
}

void	parse_table_491(t_parse_table_array *v)
{
	v->a[395][anon_sym_LBRACE] = actions(883);
	v->a[395][anon_sym_LPAREN] = actions(883);
	v->a[395][anon_sym_RPAREN] = actions(1023);
	v->a[395][anon_sym_BANG] = actions(883);
	v->a[395][anon_sym_LT] = actions(883);
	v->a[395][anon_sym_GT] = actions(883);
	v->a[395][anon_sym_GT_GT] = actions(883);
	v->a[395][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(883);
	v->a[395][anon_sym_DOLLAR] = actions(883);
	v->a[395][anon_sym_DQUOTE] = actions(883);
	v->a[395][sym_raw_string] = actions(883);
	v->a[395][sym_number] = actions(883);
	v->a[395][anon_sym_DOLLAR_LBRACE] = actions(883);
	v->a[395][anon_sym_DOLLAR_LPAREN] = actions(883);
	v->a[395][anon_sym_BQUOTE] = actions(883);
	v->a[395][sym_comment] = actions(3);
	v->a[395][sym_variable_name] = actions(885);
	v->a[396][sym_arithmetic_expansion] = state(667);
	v->a[396][sym_string] = state(667);
	v->a[396][sym_simple_expansion] = state(667);
	return (parse_table_492(v));
}

void	parse_table_492(t_parse_table_array *v)
{
	v->a[396][sym_expansion] = state(667);
	v->a[396][sym_command_substitution] = state(667);
	v->a[396][sym_word] = actions(995);
	v->a[396][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(997);
	v->a[396][aux_sym_concatenation_token1] = actions(995);
	v->a[396][anon_sym_DOLLAR] = actions(1063);
	v->a[396][anon_sym_DQUOTE] = actions(1001);
	v->a[396][sym_raw_string] = actions(995);
	v->a[396][sym_number] = actions(995);
	v->a[396][anon_sym_DOLLAR_LBRACE] = actions(1003);
	v->a[396][anon_sym_DOLLAR_LPAREN] = actions(1005);
	v->a[396][anon_sym_BQUOTE] = actions(1007);
	v->a[396][sym_comment] = actions(3);
	v->a[396][sym__comment_word] = actions(995);
	v->a[396][sym__bare_dollar] = actions(1009);
	v->a[397][sym_word] = actions(750);
	v->a[397][anon_sym_PIPE] = actions(755);
	v->a[397][anon_sym_AMP_AMP] = actions(755);
	v->a[397][anon_sym_PIPE_PIPE] = actions(755);
	v->a[397][anon_sym_LT] = actions(757);
	return (parse_table_493(v));
}

void	parse_table_493(t_parse_table_array *v)
{
	v->a[397][anon_sym_GT] = actions(757);
	v->a[397][anon_sym_GT_GT] = actions(757);
	v->a[397][anon_sym_LT_LT] = actions(755);
	v->a[397][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(750);
	v->a[397][anon_sym_DOLLAR] = actions(750);
	v->a[397][anon_sym_DQUOTE] = actions(750);
	v->a[397][sym_raw_string] = actions(750);
	v->a[397][sym_number] = actions(750);
	v->a[397][anon_sym_DOLLAR_LBRACE] = actions(750);
	v->a[397][anon_sym_DOLLAR_LPAREN] = actions(750);
	v->a[397][anon_sym_BQUOTE] = actions(750);
	v->a[397][sym_comment] = actions(3);
	v->a[397][sym_variable_name] = actions(760);
	v->a[398][sym_word] = actions(883);
	v->a[398][anon_sym_LBRACE] = actions(883);
	v->a[398][anon_sym_LPAREN] = actions(883);
	v->a[398][anon_sym_RPAREN] = actions(1023);
	v->a[398][anon_sym_BANG] = actions(883);
	v->a[398][anon_sym_LT] = actions(883);
	v->a[398][anon_sym_GT] = actions(883);
	return (parse_table_494(v));
}

void	parse_table_494(t_parse_table_array *v)
{
	v->a[398][anon_sym_GT_GT] = actions(883);
	v->a[398][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(883);
	v->a[398][anon_sym_DOLLAR] = actions(883);
	v->a[398][anon_sym_DQUOTE] = actions(883);
	v->a[398][sym_raw_string] = actions(883);
	v->a[398][sym_number] = actions(883);
	v->a[398][anon_sym_DOLLAR_LBRACE] = actions(883);
	v->a[398][anon_sym_DOLLAR_LPAREN] = actions(883);
	v->a[398][anon_sym_BQUOTE] = actions(883);
	v->a[398][sym_comment] = actions(3);
	v->a[398][sym_variable_name] = actions(885);
	v->a[399][ts_builtin_sym_end] = actions(881);
	v->a[399][sym_word] = actions(883);
	v->a[399][anon_sym_LBRACE] = actions(883);
	v->a[399][anon_sym_LPAREN] = actions(883);
	v->a[399][anon_sym_BANG] = actions(883);
	v->a[399][anon_sym_LT] = actions(883);
	v->a[399][anon_sym_GT] = actions(883);
	v->a[399][anon_sym_GT_GT] = actions(883);
	v->a[399][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(883);
	return (parse_table_495(v));
}

/* EOF parse_table_98.c */
