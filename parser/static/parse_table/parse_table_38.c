/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_38.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_190(t_parse_table_array *v)
{
	v->a[116][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(508);
	v->a[116][aux_sym_concatenation_token1] = actions(510);
	v->a[116][anon_sym_DOLLAR] = actions(508);
	v->a[116][anon_sym_DQUOTE] = actions(508);
	v->a[116][sym_raw_string] = actions(508);
	v->a[116][sym_number] = actions(508);
	v->a[116][anon_sym_DOLLAR_LBRACE] = actions(508);
	v->a[116][anon_sym_DOLLAR_LPAREN] = actions(508);
	v->a[116][anon_sym_BQUOTE] = actions(508);
	v->a[116][sym_comment] = actions(3);
	v->a[116][anon_sym_SEMI] = actions(508);
	v->a[116][anon_sym_SEMI_SEMI] = actions(508);
	v->a[116][aux_sym_terminator_token1] = actions(508);
	v->a[116][sym__concat] = actions(512);
	v->a[116][sym__bare_dollar] = actions(506);
	v->a[117][sym_arithmetic_expansion] = state(277);
	v->a[117][sym_concatenation] = state(117);
	v->a[117][sym_string] = state(277);
	v->a[117][sym_simple_expansion] = state(277);
	v->a[117][sym_expansion] = state(277);
	return (parse_table_191(v));
}

void	parse_table_191(t_parse_table_array *v)
{
	v->a[117][sym_command_substitution] = state(277);
	v->a[117][aux_sym_file_redirect_repeat1] = state(117);
	v->a[117][sym_word] = actions(514);
	v->a[117][anon_sym_PIPE] = actions(218);
	v->a[117][anon_sym_AMP_AMP] = actions(218);
	v->a[117][anon_sym_PIPE_PIPE] = actions(218);
	v->a[117][anon_sym_LT] = actions(218);
	v->a[117][anon_sym_GT] = actions(218);
	v->a[117][anon_sym_GT_GT] = actions(218);
	v->a[117][anon_sym_LT_LT] = actions(218);
	v->a[117][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(517);
	v->a[117][anon_sym_DOLLAR] = actions(520);
	v->a[117][anon_sym_DQUOTE] = actions(523);
	v->a[117][sym_raw_string] = actions(514);
	v->a[117][sym_number] = actions(514);
	v->a[117][anon_sym_DOLLAR_LBRACE] = actions(526);
	v->a[117][anon_sym_DOLLAR_LPAREN] = actions(529);
	v->a[117][anon_sym_BQUOTE] = actions(532);
	v->a[117][sym_comment] = actions(3);
	v->a[117][sym_variable_name] = actions(213);
	return (parse_table_192(v));
}

void	parse_table_192(t_parse_table_array *v)
{
	v->a[118][sym_arithmetic_expansion] = state(277);
	v->a[118][sym_concatenation] = state(117);
	v->a[118][sym_string] = state(277);
	v->a[118][sym_simple_expansion] = state(277);
	v->a[118][sym_expansion] = state(277);
	v->a[118][sym_command_substitution] = state(277);
	v->a[118][aux_sym_file_redirect_repeat1] = state(117);
	v->a[118][sym_word] = actions(205);
	v->a[118][anon_sym_PIPE] = actions(205);
	v->a[118][anon_sym_AMP_AMP] = actions(205);
	v->a[118][anon_sym_PIPE_PIPE] = actions(205);
	v->a[118][anon_sym_LT] = actions(205);
	v->a[118][anon_sym_GT] = actions(205);
	v->a[118][anon_sym_GT_GT] = actions(205);
	v->a[118][anon_sym_LT_LT] = actions(205);
	v->a[118][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(205);
	v->a[118][anon_sym_DOLLAR] = actions(205);
	v->a[118][anon_sym_DQUOTE] = actions(205);
	v->a[118][sym_raw_string] = actions(205);
	v->a[118][sym_number] = actions(205);
	return (parse_table_193(v));
}

void	parse_table_193(t_parse_table_array *v)
{
	v->a[118][anon_sym_DOLLAR_LBRACE] = actions(205);
	v->a[118][anon_sym_DOLLAR_LPAREN] = actions(205);
	v->a[118][anon_sym_BQUOTE] = actions(205);
	v->a[118][sym_comment] = actions(3);
	v->a[118][sym_variable_name] = actions(203);
	v->a[119][aux_sym_concatenation_repeat1] = state(119);
	v->a[119][sym_word] = actions(496);
	v->a[119][anon_sym_RPAREN] = actions(496);
	v->a[119][anon_sym_PIPE] = actions(496);
	v->a[119][anon_sym_AMP_AMP] = actions(496);
	v->a[119][anon_sym_PIPE_PIPE] = actions(496);
	v->a[119][anon_sym_LT] = actions(496);
	v->a[119][anon_sym_GT] = actions(496);
	v->a[119][anon_sym_GT_GT] = actions(496);
	v->a[119][anon_sym_LT_LT] = actions(496);
	v->a[119][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(496);
	v->a[119][aux_sym_concatenation_token1] = actions(535);
	v->a[119][anon_sym_DOLLAR] = actions(496);
	v->a[119][anon_sym_DQUOTE] = actions(496);
	v->a[119][sym_raw_string] = actions(496);
	return (parse_table_194(v));
}

void	parse_table_194(t_parse_table_array *v)
{
	v->a[119][sym_number] = actions(496);
	v->a[119][anon_sym_DOLLAR_LBRACE] = actions(496);
	v->a[119][anon_sym_DOLLAR_LPAREN] = actions(496);
	v->a[119][anon_sym_BQUOTE] = actions(496);
	v->a[119][sym_comment] = actions(3);
	v->a[119][anon_sym_SEMI] = actions(496);
	v->a[119][anon_sym_SEMI_SEMI] = actions(496);
	v->a[119][aux_sym_terminator_token1] = actions(496);
	v->a[119][sym__concat] = actions(538);
	v->a[119][sym__bare_dollar] = actions(504);
	v->a[120][sym_arithmetic_expansion] = state(271);
	v->a[120][sym_concatenation] = state(368);
	v->a[120][sym_string] = state(271);
	v->a[120][sym_simple_expansion] = state(271);
	v->a[120][sym_expansion] = state(271);
	v->a[120][sym_command_substitution] = state(271);
	v->a[120][aux_sym_command_repeat2] = state(120);
	v->a[120][sym_word] = actions(541);
	v->a[120][anon_sym_PIPE] = actions(261);
	v->a[120][anon_sym_AMP_AMP] = actions(261);
	return (parse_table_195(v));
}

/* EOF parse_table_38.c */
