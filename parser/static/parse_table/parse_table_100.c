/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_100.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_500(t_parse_table_array *v)
{
	v->a[405][sym_string] = state(162);
	v->a[405][sym_simple_expansion] = state(162);
	v->a[405][sym_expansion] = state(162);
	v->a[405][sym_command_substitution] = state(162);
	v->a[405][sym_word] = actions(1043);
	v->a[405][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[405][aux_sym_concatenation_token1] = actions(1043);
	v->a[405][anon_sym_DOLLAR] = actions(1067);
	v->a[405][anon_sym_DQUOTE] = actions(79);
	v->a[405][sym_raw_string] = actions(1043);
	v->a[405][sym_number] = actions(1043);
	v->a[405][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[405][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[405][anon_sym_BQUOTE] = actions(85);
	v->a[405][sym_comment] = actions(3);
	v->a[405][sym__comment_word] = actions(1043);
	v->a[405][sym__bare_dollar] = actions(1047);
	v->a[406][ts_builtin_sym_end] = actions(881);
	v->a[406][sym_word] = actions(883);
	v->a[406][anon_sym_LBRACE] = actions(883);
	return (parse_table_501(v));
}

void	parse_table_501(t_parse_table_array *v)
{
	v->a[406][anon_sym_LPAREN] = actions(883);
	v->a[406][anon_sym_BANG] = actions(883);
	v->a[406][anon_sym_LT] = actions(883);
	v->a[406][anon_sym_GT] = actions(883);
	v->a[406][anon_sym_GT_GT] = actions(883);
	v->a[406][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(883);
	v->a[406][anon_sym_DOLLAR] = actions(883);
	v->a[406][anon_sym_DQUOTE] = actions(883);
	v->a[406][sym_raw_string] = actions(883);
	v->a[406][sym_number] = actions(883);
	v->a[406][anon_sym_DOLLAR_LBRACE] = actions(883);
	v->a[406][anon_sym_DOLLAR_LPAREN] = actions(883);
	v->a[406][anon_sym_BQUOTE] = actions(883);
	v->a[406][sym_comment] = actions(3);
	v->a[406][sym_variable_name] = actions(885);
	v->a[407][ts_builtin_sym_end] = actions(881);
	v->a[407][sym_word] = actions(883);
	v->a[407][anon_sym_LBRACE] = actions(883);
	v->a[407][anon_sym_LPAREN] = actions(883);
	v->a[407][anon_sym_BANG] = actions(883);
	return (parse_table_502(v));
}

void	parse_table_502(t_parse_table_array *v)
{
	v->a[407][anon_sym_LT] = actions(883);
	v->a[407][anon_sym_GT] = actions(883);
	v->a[407][anon_sym_GT_GT] = actions(883);
	v->a[407][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(883);
	v->a[407][anon_sym_DOLLAR] = actions(883);
	v->a[407][anon_sym_DQUOTE] = actions(883);
	v->a[407][sym_raw_string] = actions(883);
	v->a[407][sym_number] = actions(883);
	v->a[407][anon_sym_DOLLAR_LBRACE] = actions(883);
	v->a[407][anon_sym_DOLLAR_LPAREN] = actions(883);
	v->a[407][anon_sym_BQUOTE] = actions(883);
	v->a[407][sym_comment] = actions(3);
	v->a[407][sym_variable_name] = actions(885);
	v->a[408][sym_arithmetic_expansion] = state(433);
	v->a[408][sym_string] = state(433);
	v->a[408][sym_simple_expansion] = state(433);
	v->a[408][sym_expansion] = state(433);
	v->a[408][sym_command_substitution] = state(433);
	v->a[408][sym_word] = actions(907);
	v->a[408][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(909);
	return (parse_table_503(v));
}

void	parse_table_503(t_parse_table_array *v)
{
	v->a[408][aux_sym_concatenation_token1] = actions(907);
	v->a[408][anon_sym_DOLLAR] = actions(1069);
	v->a[408][anon_sym_DQUOTE] = actions(913);
	v->a[408][sym_raw_string] = actions(907);
	v->a[408][sym_number] = actions(907);
	v->a[408][anon_sym_DOLLAR_LBRACE] = actions(915);
	v->a[408][anon_sym_DOLLAR_LPAREN] = actions(917);
	v->a[408][anon_sym_BQUOTE] = actions(919);
	v->a[408][sym_comment] = actions(3);
	v->a[408][sym__comment_word] = actions(907);
	v->a[408][sym__bare_dollar] = actions(921);
	v->a[409][sym_arithmetic_expansion] = state(203);
	v->a[409][sym_concatenation] = state(244);
	v->a[409][sym_string] = state(203);
	v->a[409][sym_simple_expansion] = state(203);
	v->a[409][sym_expansion] = state(203);
	v->a[409][sym_command_substitution] = state(203);
	v->a[409][sym_word] = actions(1071);
	v->a[409][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(951);
	v->a[409][anon_sym_DOLLAR] = actions(1019);
	return (parse_table_504(v));
}

void	parse_table_504(t_parse_table_array *v)
{
	v->a[409][anon_sym_DQUOTE] = actions(955);
	v->a[409][sym_raw_string] = actions(1071);
	v->a[409][sym_number] = actions(1071);
	v->a[409][anon_sym_DOLLAR_LBRACE] = actions(957);
	v->a[409][anon_sym_DOLLAR_LPAREN] = actions(959);
	v->a[409][anon_sym_BQUOTE] = actions(961);
	v->a[409][sym_comment] = actions(3);
	v->a[409][sym__comment_word] = actions(1039);
	v->a[409][sym__empty_value] = actions(1041);
	v->a[410][sym_arithmetic_expansion] = state(643);
	v->a[410][sym_concatenation] = state(730);
	v->a[410][sym_string] = state(643);
	v->a[410][sym_simple_expansion] = state(643);
	v->a[410][sym_expansion] = state(643);
	v->a[410][sym_command_substitution] = state(643);
	v->a[410][sym_word] = actions(1073);
	v->a[410][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(997);
	v->a[410][anon_sym_DOLLAR] = actions(999);
	v->a[410][anon_sym_DQUOTE] = actions(1001);
	v->a[410][sym_raw_string] = actions(1073);
	return (parse_table_505(v));
}

/* EOF parse_table_100.c */
