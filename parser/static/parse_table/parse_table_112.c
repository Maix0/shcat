/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_112.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_560(t_parse_table_array *v)
{
	v->a[297][sym_variable_name] = actions(1044);
	v->a[298][sym_command_name] = state(162);
	v->a[298][sym_variable_assignment] = state(792);
	v->a[298][sym_file_redirect] = state(1083);
	v->a[298][sym_arithmetic_expansion] = state(277);
	v->a[298][sym_concatenation] = state(555);
	v->a[298][sym_string] = state(277);
	v->a[298][sym_simple_expansion] = state(277);
	v->a[298][sym_expansion] = state(277);
	v->a[298][sym_command_substitution] = state(277);
	v->a[298][aux_sym_command_repeat1] = state(792);
	v->a[298][sym_word] = actions(214);
	v->a[298][anon_sym_LT] = actions(758);
	v->a[298][anon_sym_GT] = actions(758);
	v->a[298][anon_sym_GT_GT] = actions(758);
	v->a[298][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[298][anon_sym_DOLLAR] = actions(55);
	v->a[298][anon_sym_DQUOTE] = actions(57);
	v->a[298][sym_raw_string] = actions(214);
	v->a[298][sym_number] = actions(214);
	return (parse_table_561(v));
}

void	parse_table_561(t_parse_table_array *v)
{
	v->a[298][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[298][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[298][anon_sym_BQUOTE] = actions(65);
	v->a[298][sym_comment] = actions(3);
	v->a[298][sym_variable_name] = actions(341);
	v->a[299][sym_word] = actions(973);
	v->a[299][anon_sym_esac] = actions(973);
	v->a[299][anon_sym_PIPE] = actions(973);
	v->a[299][anon_sym_SEMI_SEMI] = actions(973);
	v->a[299][anon_sym_AMP_AMP] = actions(973);
	v->a[299][anon_sym_PIPE_PIPE] = actions(973);
	v->a[299][anon_sym_LT] = actions(973);
	v->a[299][anon_sym_GT] = actions(973);
	v->a[299][anon_sym_GT_GT] = actions(973);
	v->a[299][anon_sym_LT_LT] = actions(973);
	v->a[299][aux_sym_heredoc_redirect_token1] = actions(973);
	v->a[299][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(973);
	v->a[299][aux_sym_concatenation_token1] = actions(973);
	v->a[299][anon_sym_DOLLAR] = actions(973);
	v->a[299][anon_sym_DQUOTE] = actions(973);
	return (parse_table_562(v));
}

void	parse_table_562(t_parse_table_array *v)
{
	v->a[299][sym_raw_string] = actions(973);
	v->a[299][sym_number] = actions(973);
	v->a[299][anon_sym_DOLLAR_LBRACE] = actions(973);
	v->a[299][anon_sym_DOLLAR_LPAREN] = actions(973);
	v->a[299][anon_sym_BQUOTE] = actions(973);
	v->a[299][sym_comment] = actions(3);
	v->a[299][anon_sym_SEMI] = actions(973);
	v->a[299][sym__concat] = actions(981);
	v->a[299][sym__bare_dollar] = actions(981);
	v->a[300][sym_word] = actions(1040);
	v->a[300][anon_sym_for] = actions(1040);
	v->a[300][anon_sym_while] = actions(1040);
	v->a[300][anon_sym_until] = actions(1040);
	v->a[300][anon_sym_if] = actions(1040);
	v->a[300][anon_sym_case] = actions(1040);
	v->a[300][anon_sym_esac] = actions(1042);
	v->a[300][anon_sym_LPAREN] = actions(1040);
	v->a[300][anon_sym_SEMI_SEMI] = actions(1042);
	v->a[300][anon_sym_LBRACE] = actions(1040);
	v->a[300][anon_sym_BANG] = actions(1040);
	return (parse_table_563(v));
}

void	parse_table_563(t_parse_table_array *v)
{
	v->a[300][anon_sym_LT] = actions(1040);
	v->a[300][anon_sym_GT] = actions(1040);
	v->a[300][anon_sym_GT_GT] = actions(1040);
	v->a[300][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1040);
	v->a[300][anon_sym_DOLLAR] = actions(1040);
	v->a[300][anon_sym_DQUOTE] = actions(1040);
	v->a[300][sym_raw_string] = actions(1040);
	v->a[300][sym_number] = actions(1040);
	v->a[300][anon_sym_DOLLAR_LBRACE] = actions(1040);
	v->a[300][anon_sym_DOLLAR_LPAREN] = actions(1040);
	v->a[300][anon_sym_BQUOTE] = actions(1040);
	v->a[300][sym_comment] = actions(3);
	v->a[300][sym_variable_name] = actions(1044);
	v->a[301][ts_builtin_sym_end] = actions(1050);
	v->a[301][sym_word] = actions(1052);
	v->a[301][anon_sym_PIPE] = actions(1052);
	v->a[301][anon_sym_SEMI_SEMI] = actions(1052);
	v->a[301][anon_sym_AMP_AMP] = actions(1052);
	v->a[301][anon_sym_PIPE_PIPE] = actions(1052);
	v->a[301][anon_sym_LT] = actions(1052);
	return (parse_table_564(v));
}

void	parse_table_564(t_parse_table_array *v)
{
	v->a[301][anon_sym_GT] = actions(1052);
	v->a[301][anon_sym_GT_GT] = actions(1052);
	v->a[301][anon_sym_LT_LT] = actions(1052);
	v->a[301][aux_sym_heredoc_redirect_token1] = actions(1052);
	v->a[301][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1052);
	v->a[301][aux_sym_concatenation_token1] = actions(1052);
	v->a[301][anon_sym_DOLLAR] = actions(1052);
	v->a[301][anon_sym_DQUOTE] = actions(1052);
	v->a[301][sym_raw_string] = actions(1052);
	v->a[301][sym_number] = actions(1052);
	v->a[301][anon_sym_DOLLAR_LBRACE] = actions(1052);
	v->a[301][anon_sym_DOLLAR_LPAREN] = actions(1052);
	v->a[301][anon_sym_BQUOTE] = actions(1052);
	v->a[301][sym_comment] = actions(3);
	v->a[301][anon_sym_SEMI] = actions(1052);
	v->a[301][sym__concat] = actions(1050);
	v->a[301][sym__bare_dollar] = actions(1050);
	v->a[302][sym_word] = actions(1040);
	v->a[302][anon_sym_for] = actions(1040);
	v->a[302][anon_sym_while] = actions(1040);
	return (parse_table_565(v));
}

/* EOF parse_table_112.c */
