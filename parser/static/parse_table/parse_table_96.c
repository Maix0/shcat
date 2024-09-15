/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_96.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_480(t_parse_table_array *v)
{
	v->a[382][anon_sym_BQUOTE] = actions(883);
	v->a[382][sym_comment] = actions(3);
	v->a[382][sym_variable_name] = actions(885);
	v->a[383][sym_arithmetic_expansion] = state(226);
	v->a[383][sym_string] = state(226);
	v->a[383][sym_simple_expansion] = state(226);
	v->a[383][sym_expansion] = state(226);
	v->a[383][sym_command_substitution] = state(226);
	v->a[383][sym_word] = actions(1031);
	v->a[383][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(429);
	v->a[383][aux_sym_concatenation_token1] = actions(1031);
	v->a[383][anon_sym_DOLLAR] = actions(1033);
	v->a[383][anon_sym_DQUOTE] = actions(433);
	v->a[383][sym_raw_string] = actions(1031);
	v->a[383][sym_number] = actions(1031);
	v->a[383][anon_sym_DOLLAR_LBRACE] = actions(435);
	v->a[383][anon_sym_DOLLAR_LPAREN] = actions(437);
	v->a[383][anon_sym_BQUOTE] = actions(439);
	v->a[383][sym_comment] = actions(3);
	v->a[383][sym__comment_word] = actions(1031);
	return (parse_table_481(v));
}

void	parse_table_481(t_parse_table_array *v)
{
	v->a[383][sym__bare_dollar] = actions(1035);
	v->a[384][sym_arithmetic_expansion] = state(122);
	v->a[384][sym_concatenation] = state(244);
	v->a[384][sym_string] = state(122);
	v->a[384][sym_simple_expansion] = state(122);
	v->a[384][sym_expansion] = state(122);
	v->a[384][sym_command_substitution] = state(122);
	v->a[384][sym_word] = actions(1037);
	v->a[384][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(951);
	v->a[384][anon_sym_DOLLAR] = actions(1019);
	v->a[384][anon_sym_DQUOTE] = actions(955);
	v->a[384][sym_raw_string] = actions(1037);
	v->a[384][sym_number] = actions(1037);
	v->a[384][anon_sym_DOLLAR_LBRACE] = actions(957);
	v->a[384][anon_sym_DOLLAR_LPAREN] = actions(959);
	v->a[384][anon_sym_BQUOTE] = actions(961);
	v->a[384][sym_comment] = actions(3);
	v->a[384][sym__comment_word] = actions(1039);
	v->a[384][sym__empty_value] = actions(1041);
	v->a[385][sym_arithmetic_expansion] = state(162);
	return (parse_table_482(v));
}

void	parse_table_482(t_parse_table_array *v)
{
	v->a[385][sym_string] = state(162);
	v->a[385][sym_simple_expansion] = state(162);
	v->a[385][sym_expansion] = state(162);
	v->a[385][sym_command_substitution] = state(162);
	v->a[385][sym_word] = actions(1043);
	v->a[385][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[385][aux_sym_concatenation_token1] = actions(1043);
	v->a[385][anon_sym_DOLLAR] = actions(1045);
	v->a[385][anon_sym_DQUOTE] = actions(79);
	v->a[385][sym_raw_string] = actions(1043);
	v->a[385][sym_number] = actions(1043);
	v->a[385][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[385][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[385][anon_sym_BQUOTE] = actions(85);
	v->a[385][sym_comment] = actions(3);
	v->a[385][sym__comment_word] = actions(1043);
	v->a[385][sym__bare_dollar] = actions(1047);
	v->a[386][sym_arithmetic_expansion] = state(433);
	v->a[386][sym_string] = state(433);
	v->a[386][sym_simple_expansion] = state(433);
	return (parse_table_483(v));
}

void	parse_table_483(t_parse_table_array *v)
{
	v->a[386][sym_expansion] = state(433);
	v->a[386][sym_command_substitution] = state(433);
	v->a[386][sym_word] = actions(907);
	v->a[386][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(909);
	v->a[386][aux_sym_concatenation_token1] = actions(907);
	v->a[386][anon_sym_DOLLAR] = actions(1049);
	v->a[386][anon_sym_DQUOTE] = actions(913);
	v->a[386][sym_raw_string] = actions(907);
	v->a[386][sym_number] = actions(907);
	v->a[386][anon_sym_DOLLAR_LBRACE] = actions(915);
	v->a[386][anon_sym_DOLLAR_LPAREN] = actions(917);
	v->a[386][anon_sym_BQUOTE] = actions(919);
	v->a[386][sym_comment] = actions(3);
	v->a[386][sym__comment_word] = actions(907);
	v->a[386][sym__bare_dollar] = actions(921);
	v->a[387][ts_builtin_sym_end] = actions(881);
	v->a[387][sym_word] = actions(883);
	v->a[387][anon_sym_LBRACE] = actions(883);
	v->a[387][anon_sym_LPAREN] = actions(883);
	v->a[387][anon_sym_BANG] = actions(883);
	return (parse_table_484(v));
}

void	parse_table_484(t_parse_table_array *v)
{
	v->a[387][anon_sym_LT] = actions(883);
	v->a[387][anon_sym_GT] = actions(883);
	v->a[387][anon_sym_GT_GT] = actions(883);
	v->a[387][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(883);
	v->a[387][anon_sym_DOLLAR] = actions(883);
	v->a[387][anon_sym_DQUOTE] = actions(883);
	v->a[387][sym_raw_string] = actions(883);
	v->a[387][sym_number] = actions(883);
	v->a[387][anon_sym_DOLLAR_LBRACE] = actions(883);
	v->a[387][anon_sym_DOLLAR_LPAREN] = actions(883);
	v->a[387][anon_sym_BQUOTE] = actions(883);
	v->a[387][sym_comment] = actions(3);
	v->a[387][sym_variable_name] = actions(885);
	v->a[388][sym_arithmetic_expansion] = state(513);
	v->a[388][sym_concatenation] = state(518);
	v->a[388][sym_string] = state(513);
	v->a[388][sym_simple_expansion] = state(513);
	v->a[388][sym_expansion] = state(513);
	v->a[388][sym_command_substitution] = state(513);
	v->a[388][sym_word] = actions(1051);
	return (parse_table_485(v));
}

/* EOF parse_table_96.c */
