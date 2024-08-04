/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_102.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_510(t_parse_table_array *v)
{
	v->a[257][anon_sym_BQUOTE] = actions(833);
	v->a[257][sym_comment] = actions(3);
	v->a[257][anon_sym_SEMI] = actions(833);
	v->a[257][sym__concat] = actions(859);
	v->a[257][sym__bare_dollar] = actions(841);
	v->a[258][aux_sym_concatenation_repeat1] = state(291);
	v->a[258][ts_builtin_sym_end] = actions(878);
	v->a[258][sym_word] = actions(880);
	v->a[258][anon_sym_PIPE] = actions(880);
	v->a[258][anon_sym_SEMI_SEMI] = actions(880);
	v->a[258][anon_sym_AMP_AMP] = actions(880);
	v->a[258][anon_sym_PIPE_PIPE] = actions(880);
	v->a[258][anon_sym_LT] = actions(880);
	v->a[258][anon_sym_GT] = actions(880);
	v->a[258][anon_sym_GT_GT] = actions(880);
	v->a[258][anon_sym_LT_LT] = actions(880);
	v->a[258][aux_sym_heredoc_redirect_token1] = actions(880);
	v->a[258][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(880);
	v->a[258][aux_sym_concatenation_token1] = actions(882);
	v->a[258][anon_sym_DOLLAR] = actions(880);
	return (parse_table_511(v));
}

void	parse_table_511(t_parse_table_array *v)
{
	v->a[258][anon_sym_DQUOTE] = actions(880);
	v->a[258][sym_raw_string] = actions(880);
	v->a[258][sym_number] = actions(880);
	v->a[258][anon_sym_DOLLAR_LBRACE] = actions(880);
	v->a[258][anon_sym_DOLLAR_LPAREN] = actions(880);
	v->a[258][anon_sym_BQUOTE] = actions(880);
	v->a[258][sym_comment] = actions(3);
	v->a[258][anon_sym_SEMI] = actions(880);
	v->a[258][sym__concat] = actions(884);
	v->a[258][sym_variable_name] = actions(878);
	v->a[259][sym_arithmetic_expansion] = state(593);
	v->a[259][sym_concatenation] = state(256);
	v->a[259][sym_string] = state(593);
	v->a[259][sym_simple_expansion] = state(593);
	v->a[259][sym_expansion] = state(593);
	v->a[259][sym_command_substitution] = state(593);
	v->a[259][aux_sym_for_statement_repeat1] = state(256);
	v->a[259][sym_word] = actions(886);
	v->a[259][anon_sym_PIPE] = actions(421);
	v->a[259][anon_sym_AMP_AMP] = actions(421);
	return (parse_table_512(v));
}

void	parse_table_512(t_parse_table_array *v)
{
	v->a[259][anon_sym_PIPE_PIPE] = actions(421);
	v->a[259][anon_sym_LT] = actions(421);
	v->a[259][anon_sym_GT] = actions(421);
	v->a[259][anon_sym_GT_GT] = actions(421);
	v->a[259][anon_sym_LT_LT] = actions(421);
	v->a[259][aux_sym_heredoc_redirect_token1] = actions(421);
	v->a[259][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(704);
	v->a[259][anon_sym_DOLLAR] = actions(706);
	v->a[259][anon_sym_DQUOTE] = actions(708);
	v->a[259][sym_raw_string] = actions(886);
	v->a[259][sym_number] = actions(886);
	v->a[259][anon_sym_DOLLAR_LBRACE] = actions(710);
	v->a[259][anon_sym_DOLLAR_LPAREN] = actions(712);
	v->a[259][anon_sym_BQUOTE] = actions(714);
	v->a[259][sym_comment] = actions(3);
	v->a[260][sym_arithmetic_expansion] = state(589);
	v->a[260][sym_concatenation] = state(260);
	v->a[260][sym_string] = state(589);
	v->a[260][sym_simple_expansion] = state(589);
	v->a[260][sym_expansion] = state(589);
	return (parse_table_513(v));
}

void	parse_table_513(t_parse_table_array *v)
{
	v->a[260][sym_command_substitution] = state(589);
	v->a[260][aux_sym_for_statement_repeat1] = state(260);
	v->a[260][sym_word] = actions(888);
	v->a[260][anon_sym_PIPE] = actions(428);
	v->a[260][anon_sym_AMP_AMP] = actions(428);
	v->a[260][anon_sym_PIPE_PIPE] = actions(428);
	v->a[260][anon_sym_LT] = actions(428);
	v->a[260][anon_sym_GT] = actions(428);
	v->a[260][anon_sym_GT_GT] = actions(428);
	v->a[260][anon_sym_LT_LT] = actions(428);
	v->a[260][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(891);
	v->a[260][anon_sym_DOLLAR] = actions(894);
	v->a[260][anon_sym_DQUOTE] = actions(897);
	v->a[260][sym_raw_string] = actions(888);
	v->a[260][sym_number] = actions(888);
	v->a[260][anon_sym_DOLLAR_LBRACE] = actions(900);
	v->a[260][anon_sym_DOLLAR_LPAREN] = actions(903);
	v->a[260][anon_sym_BQUOTE] = actions(906);
	v->a[260][sym_comment] = actions(3);
	v->a[260][sym_variable_name] = actions(448);
	return (parse_table_514(v));
}

void	parse_table_514(t_parse_table_array *v)
{
	v->a[261][aux_sym_concatenation_repeat1] = state(284);
	v->a[261][sym_word] = actions(909);
	v->a[261][anon_sym_esac] = actions(909);
	v->a[261][anon_sym_PIPE] = actions(909);
	v->a[261][anon_sym_SEMI_SEMI] = actions(909);
	v->a[261][anon_sym_AMP_AMP] = actions(909);
	v->a[261][anon_sym_PIPE_PIPE] = actions(909);
	v->a[261][anon_sym_LT] = actions(909);
	v->a[261][anon_sym_GT] = actions(909);
	v->a[261][anon_sym_GT_GT] = actions(909);
	v->a[261][anon_sym_LT_LT] = actions(909);
	v->a[261][aux_sym_heredoc_redirect_token1] = actions(909);
	v->a[261][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(909);
	v->a[261][aux_sym_concatenation_token1] = actions(837);
	v->a[261][anon_sym_DOLLAR] = actions(909);
	v->a[261][anon_sym_DQUOTE] = actions(909);
	v->a[261][sym_raw_string] = actions(909);
	v->a[261][sym_number] = actions(909);
	v->a[261][anon_sym_DOLLAR_LBRACE] = actions(909);
	v->a[261][anon_sym_DOLLAR_LPAREN] = actions(909);
	return (parse_table_515(v));
}

/* EOF parse_table_102.c */
