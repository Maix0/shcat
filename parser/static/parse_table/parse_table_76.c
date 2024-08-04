/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_76.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_380(t_parse_table_array *v)
{
	v->a[162][sym_comment] = actions(3);
	v->a[162][anon_sym_SEMI] = actions(450);
	v->a[162][sym__bare_dollar] = actions(419);
	v->a[163][sym_arithmetic_expansion] = state(289);
	v->a[163][sym_concatenation] = state(570);
	v->a[163][sym_string] = state(289);
	v->a[163][sym_simple_expansion] = state(289);
	v->a[163][sym_expansion] = state(289);
	v->a[163][sym_command_substitution] = state(289);
	v->a[163][aux_sym_command_repeat2] = state(163);
	v->a[163][sym_word] = actions(452);
	v->a[163][anon_sym_PIPE] = actions(455);
	v->a[163][anon_sym_RPAREN] = actions(455);
	v->a[163][anon_sym_SEMI_SEMI] = actions(455);
	v->a[163][anon_sym_AMP_AMP] = actions(455);
	v->a[163][anon_sym_PIPE_PIPE] = actions(455);
	v->a[163][anon_sym_LT] = actions(455);
	v->a[163][anon_sym_GT] = actions(455);
	v->a[163][anon_sym_GT_GT] = actions(455);
	v->a[163][anon_sym_LT_LT] = actions(455);
	return (parse_table_381(v));
}

void	parse_table_381(t_parse_table_array *v)
{
	v->a[163][aux_sym_heredoc_redirect_token1] = actions(455);
	v->a[163][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(457);
	v->a[163][anon_sym_DOLLAR] = actions(460);
	v->a[163][anon_sym_DQUOTE] = actions(463);
	v->a[163][sym_raw_string] = actions(452);
	v->a[163][sym_number] = actions(452);
	v->a[163][anon_sym_DOLLAR_LBRACE] = actions(466);
	v->a[163][anon_sym_DOLLAR_LPAREN] = actions(469);
	v->a[163][anon_sym_BQUOTE] = actions(472);
	v->a[163][sym_comment] = actions(3);
	v->a[163][anon_sym_SEMI] = actions(455);
	v->a[163][sym__bare_dollar] = actions(475);
	v->a[164][sym_arithmetic_expansion] = state(289);
	v->a[164][sym_concatenation] = state(570);
	v->a[164][sym_string] = state(289);
	v->a[164][sym_simple_expansion] = state(289);
	v->a[164][sym_expansion] = state(289);
	v->a[164][sym_command_substitution] = state(289);
	v->a[164][aux_sym_command_repeat2] = state(163);
	v->a[164][sym_word] = actions(415);
	return (parse_table_382(v));
}

void	parse_table_382(t_parse_table_array *v)
{
	v->a[164][anon_sym_PIPE] = actions(403);
	v->a[164][anon_sym_RPAREN] = actions(403);
	v->a[164][anon_sym_SEMI_SEMI] = actions(403);
	v->a[164][anon_sym_AMP_AMP] = actions(403);
	v->a[164][anon_sym_PIPE_PIPE] = actions(403);
	v->a[164][anon_sym_LT] = actions(403);
	v->a[164][anon_sym_GT] = actions(403);
	v->a[164][anon_sym_GT_GT] = actions(403);
	v->a[164][anon_sym_LT_LT] = actions(403);
	v->a[164][aux_sym_heredoc_redirect_token1] = actions(403);
	v->a[164][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[164][anon_sym_DOLLAR] = actions(55);
	v->a[164][anon_sym_DQUOTE] = actions(57);
	v->a[164][sym_raw_string] = actions(415);
	v->a[164][sym_number] = actions(415);
	v->a[164][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[164][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[164][anon_sym_BQUOTE] = actions(65);
	v->a[164][sym_comment] = actions(3);
	v->a[164][anon_sym_SEMI] = actions(403);
	return (parse_table_383(v));
}

void	parse_table_383(t_parse_table_array *v)
{
	v->a[164][sym__bare_dollar] = actions(419);
	v->a[165][sym_arithmetic_expansion] = state(258);
	v->a[165][sym_concatenation] = state(165);
	v->a[165][sym_string] = state(258);
	v->a[165][sym_simple_expansion] = state(258);
	v->a[165][sym_expansion] = state(258);
	v->a[165][sym_command_substitution] = state(258);
	v->a[165][aux_sym_for_statement_repeat1] = state(165);
	v->a[165][ts_builtin_sym_end] = actions(448);
	v->a[165][sym_word] = actions(478);
	v->a[165][anon_sym_PIPE] = actions(428);
	v->a[165][anon_sym_SEMI_SEMI] = actions(428);
	v->a[165][anon_sym_AMP_AMP] = actions(428);
	v->a[165][anon_sym_PIPE_PIPE] = actions(428);
	v->a[165][anon_sym_LT] = actions(428);
	v->a[165][anon_sym_GT] = actions(428);
	v->a[165][anon_sym_GT_GT] = actions(428);
	v->a[165][anon_sym_LT_LT] = actions(428);
	v->a[165][aux_sym_heredoc_redirect_token1] = actions(428);
	v->a[165][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(481);
	return (parse_table_384(v));
}

void	parse_table_384(t_parse_table_array *v)
{
	v->a[165][anon_sym_DOLLAR] = actions(484);
	v->a[165][anon_sym_DQUOTE] = actions(487);
	v->a[165][sym_raw_string] = actions(478);
	v->a[165][sym_number] = actions(478);
	v->a[165][anon_sym_DOLLAR_LBRACE] = actions(490);
	v->a[165][anon_sym_DOLLAR_LPAREN] = actions(493);
	v->a[165][anon_sym_BQUOTE] = actions(496);
	v->a[165][sym_comment] = actions(3);
	v->a[165][anon_sym_SEMI] = actions(428);
	v->a[165][sym_variable_name] = actions(448);
	v->a[166][sym_arithmetic_expansion] = state(273);
	v->a[166][sym_concatenation] = state(564);
	v->a[166][sym_string] = state(273);
	v->a[166][sym_simple_expansion] = state(273);
	v->a[166][sym_expansion] = state(273);
	v->a[166][sym_command_substitution] = state(273);
	v->a[166][aux_sym_command_repeat2] = state(157);
	v->a[166][ts_builtin_sym_end] = actions(499);
	v->a[166][sym_word] = actions(409);
	v->a[166][anon_sym_PIPE] = actions(417);
	return (parse_table_385(v));
}

/* EOF parse_table_76.c */
