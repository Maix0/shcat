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
	v->a[250][anon_sym_for] = actions(867);
	v->a[250][anon_sym_while] = actions(867);
	v->a[250][anon_sym_until] = actions(867);
	v->a[250][anon_sym_done] = actions(867);
	v->a[250][anon_sym_if] = actions(867);
	v->a[250][anon_sym_then] = actions(867);
	v->a[250][anon_sym_case] = actions(867);
	v->a[250][anon_sym_LPAREN] = actions(867);
	v->a[250][anon_sym_RPAREN] = actions(867);
	v->a[250][anon_sym_SEMI_SEMI] = actions(867);
	v->a[250][anon_sym_LBRACE] = actions(867);
	v->a[250][anon_sym_BANG] = actions(867);
	v->a[250][anon_sym_LT] = actions(867);
	v->a[250][anon_sym_GT] = actions(867);
	v->a[250][anon_sym_GT_GT] = actions(867);
	v->a[250][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(867);
	v->a[250][anon_sym_DOLLAR] = actions(867);
	v->a[250][anon_sym_DQUOTE] = actions(867);
	v->a[250][sym_raw_string] = actions(867);
	v->a[250][sym_number] = actions(867);
	return (parse_table_501(v));
}

void	parse_table_501(t_parse_table_array *v)
{
	v->a[250][anon_sym_DOLLAR_LBRACE] = actions(867);
	v->a[250][anon_sym_DOLLAR_LPAREN] = actions(867);
	v->a[250][anon_sym_BQUOTE] = actions(867);
	v->a[250][sym_comment] = actions(3);
	v->a[250][sym_variable_name] = actions(869);
	v->a[251][sym_arithmetic_expansion] = state(574);
	v->a[251][sym_concatenation] = state(570);
	v->a[251][sym_string] = state(574);
	v->a[251][sym_simple_expansion] = state(574);
	v->a[251][sym_expansion] = state(574);
	v->a[251][sym_command_substitution] = state(574);
	v->a[251][aux_sym_command_repeat2] = state(241);
	v->a[251][sym_word] = actions(871);
	v->a[251][anon_sym_PIPE] = actions(403);
	v->a[251][anon_sym_AMP_AMP] = actions(403);
	v->a[251][anon_sym_PIPE_PIPE] = actions(403);
	v->a[251][anon_sym_LT] = actions(403);
	v->a[251][anon_sym_GT] = actions(403);
	v->a[251][anon_sym_GT_GT] = actions(403);
	v->a[251][anon_sym_LT_LT] = actions(403);
	return (parse_table_502(v));
}

void	parse_table_502(t_parse_table_array *v)
{
	v->a[251][aux_sym_heredoc_redirect_token1] = actions(403);
	v->a[251][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[251][anon_sym_DOLLAR] = actions(55);
	v->a[251][anon_sym_DQUOTE] = actions(57);
	v->a[251][sym_raw_string] = actions(871);
	v->a[251][sym_number] = actions(871);
	v->a[251][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[251][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[251][anon_sym_BQUOTE] = actions(65);
	v->a[251][sym_comment] = actions(3);
	v->a[251][sym__bare_dollar] = actions(419);
	v->a[252][sym_arithmetic_expansion] = state(574);
	v->a[252][sym_concatenation] = state(570);
	v->a[252][sym_string] = state(574);
	v->a[252][sym_simple_expansion] = state(574);
	v->a[252][sym_expansion] = state(574);
	v->a[252][sym_command_substitution] = state(574);
	v->a[252][aux_sym_command_repeat2] = state(255);
	v->a[252][sym_word] = actions(871);
	v->a[252][anon_sym_PIPE] = actions(417);
	return (parse_table_503(v));
}

void	parse_table_503(t_parse_table_array *v)
{
	v->a[252][anon_sym_AMP_AMP] = actions(417);
	v->a[252][anon_sym_PIPE_PIPE] = actions(417);
	v->a[252][anon_sym_LT] = actions(417);
	v->a[252][anon_sym_GT] = actions(417);
	v->a[252][anon_sym_GT_GT] = actions(417);
	v->a[252][anon_sym_LT_LT] = actions(417);
	v->a[252][aux_sym_heredoc_redirect_token1] = actions(417);
	v->a[252][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[252][anon_sym_DOLLAR] = actions(55);
	v->a[252][anon_sym_DQUOTE] = actions(57);
	v->a[252][sym_raw_string] = actions(871);
	v->a[252][sym_number] = actions(871);
	v->a[252][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[252][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[252][anon_sym_BQUOTE] = actions(65);
	v->a[252][sym_comment] = actions(3);
	v->a[252][sym__bare_dollar] = actions(419);
	v->a[253][sym_arithmetic_expansion] = state(574);
	v->a[253][sym_concatenation] = state(570);
	v->a[253][sym_string] = state(574);
	return (parse_table_504(v));
}

void	parse_table_504(t_parse_table_array *v)
{
	v->a[253][sym_simple_expansion] = state(574);
	v->a[253][sym_expansion] = state(574);
	v->a[253][sym_command_substitution] = state(574);
	v->a[253][aux_sym_command_repeat2] = state(251);
	v->a[253][sym_word] = actions(871);
	v->a[253][anon_sym_PIPE] = actions(450);
	v->a[253][anon_sym_AMP_AMP] = actions(450);
	v->a[253][anon_sym_PIPE_PIPE] = actions(450);
	v->a[253][anon_sym_LT] = actions(450);
	v->a[253][anon_sym_GT] = actions(450);
	v->a[253][anon_sym_GT_GT] = actions(450);
	v->a[253][anon_sym_LT_LT] = actions(450);
	v->a[253][aux_sym_heredoc_redirect_token1] = actions(450);
	v->a[253][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[253][anon_sym_DOLLAR] = actions(55);
	v->a[253][anon_sym_DQUOTE] = actions(57);
	v->a[253][sym_raw_string] = actions(871);
	v->a[253][sym_number] = actions(871);
	v->a[253][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[253][anon_sym_DOLLAR_LPAREN] = actions(63);
	return (parse_table_505(v));
}

/* EOF parse_table_100.c */
