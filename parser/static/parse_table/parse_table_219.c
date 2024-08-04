/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_219.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1095(t_parse_table_array *v)
{
	v->a[797][sym_simple_expansion] = state(292);
	v->a[797][sym_expansion] = state(292);
	v->a[797][sym_command_substitution] = state(292);
	v->a[797][aux_sym_for_statement_repeat1] = state(159);
	v->a[797][sym_word] = actions(1856);
	v->a[797][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1479);
	v->a[797][anon_sym_DOLLAR] = actions(1481);
	v->a[797][anon_sym_DQUOTE] = actions(1483);
	v->a[797][sym_raw_string] = actions(1856);
	v->a[797][sym_number] = actions(1856);
	v->a[797][anon_sym_DOLLAR_LBRACE] = actions(1485);
	v->a[797][anon_sym_DOLLAR_LPAREN] = actions(1487);
	v->a[797][anon_sym_BQUOTE] = actions(1489);
	v->a[797][sym_comment] = actions(3);
	v->a[798][sym_arithmetic_expansion] = state(402);
	v->a[798][sym_concatenation] = state(195);
	v->a[798][sym_string] = state(402);
	v->a[798][sym_simple_expansion] = state(402);
	v->a[798][sym_expansion] = state(402);
	v->a[798][sym_command_substitution] = state(402);
	return (parse_table_1096(v));
}

void	parse_table_1096(t_parse_table_array *v)
{
	v->a[798][aux_sym_for_statement_repeat1] = state(195);
	v->a[798][sym_word] = actions(702);
	v->a[798][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(704);
	v->a[798][anon_sym_DOLLAR] = actions(706);
	v->a[798][anon_sym_DQUOTE] = actions(708);
	v->a[798][sym_raw_string] = actions(702);
	v->a[798][sym_number] = actions(702);
	v->a[798][anon_sym_DOLLAR_LBRACE] = actions(710);
	v->a[798][anon_sym_DOLLAR_LPAREN] = actions(712);
	v->a[798][anon_sym_BQUOTE] = actions(714);
	v->a[798][sym_comment] = actions(3);
	v->a[799][sym_arithmetic_expansion] = state(782);
	v->a[799][sym_concatenation] = state(590);
	v->a[799][sym_string] = state(782);
	v->a[799][sym_simple_expansion] = state(782);
	v->a[799][sym_expansion] = state(782);
	v->a[799][sym_command_substitution] = state(782);
	v->a[799][aux_sym_for_statement_repeat1] = state(590);
	v->a[799][sym_word] = actions(1858);
	v->a[799][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1643);
	return (parse_table_1097(v));
}

void	parse_table_1097(t_parse_table_array *v)
{
	v->a[799][anon_sym_DOLLAR] = actions(1645);
	v->a[799][anon_sym_DQUOTE] = actions(1647);
	v->a[799][sym_raw_string] = actions(1858);
	v->a[799][sym_number] = actions(1858);
	v->a[799][anon_sym_DOLLAR_LBRACE] = actions(1649);
	v->a[799][anon_sym_DOLLAR_LPAREN] = actions(1651);
	v->a[799][anon_sym_BQUOTE] = actions(1653);
	v->a[799][sym_comment] = actions(3);
	v->a[800][ts_builtin_sym_end] = actions(1116);
	v->a[800][anon_sym_PIPE] = actions(1114);
	v->a[800][anon_sym_RPAREN] = actions(1114);
	v->a[800][anon_sym_SEMI_SEMI] = actions(1114);
	v->a[800][anon_sym_AMP_AMP] = actions(1114);
	v->a[800][anon_sym_PIPE_PIPE] = actions(1114);
	v->a[800][anon_sym_LT] = actions(1114);
	v->a[800][anon_sym_GT] = actions(1114);
	v->a[800][anon_sym_GT_GT] = actions(1114);
	v->a[800][anon_sym_LT_LT] = actions(1114);
	v->a[800][aux_sym_heredoc_redirect_token1] = actions(1116);
	v->a[800][aux_sym_concatenation_token1] = actions(1114);
	return (parse_table_1098(v));
}

void	parse_table_1098(t_parse_table_array *v)
{
	v->a[800][anon_sym_BQUOTE] = actions(1114);
	v->a[800][sym_comment] = actions(3);
	v->a[800][anon_sym_SEMI] = actions(1114);
	v->a[800][sym__concat] = actions(1116);
	v->a[800][sym_variable_name] = actions(1116);
	v->a[801][sym_arithmetic_expansion] = state(362);
	v->a[801][sym_concatenation] = state(182);
	v->a[801][sym_string] = state(362);
	v->a[801][sym_simple_expansion] = state(362);
	v->a[801][sym_expansion] = state(362);
	v->a[801][sym_command_substitution] = state(362);
	v->a[801][aux_sym_for_statement_repeat1] = state(182);
	v->a[801][sym_word] = actions(625);
	v->a[801][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(627);
	v->a[801][anon_sym_DOLLAR] = actions(629);
	v->a[801][anon_sym_DQUOTE] = actions(631);
	v->a[801][sym_raw_string] = actions(625);
	v->a[801][sym_number] = actions(625);
	v->a[801][anon_sym_DOLLAR_LBRACE] = actions(633);
	v->a[801][anon_sym_DOLLAR_LPAREN] = actions(635);
	return (parse_table_1099(v));
}

void	parse_table_1099(t_parse_table_array *v)
{
	v->a[801][anon_sym_BQUOTE] = actions(637);
	v->a[801][sym_comment] = actions(3);
	v->a[802][sym_arithmetic_expansion] = state(607);
	v->a[802][sym_concatenation] = state(366);
	v->a[802][sym_string] = state(607);
	v->a[802][sym_simple_expansion] = state(607);
	v->a[802][sym_expansion] = state(607);
	v->a[802][sym_command_substitution] = state(607);
	v->a[802][aux_sym_for_statement_repeat1] = state(366);
	v->a[802][sym_word] = actions(1142);
	v->a[802][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1144);
	v->a[802][anon_sym_DOLLAR] = actions(1146);
	v->a[802][anon_sym_DQUOTE] = actions(1148);
	v->a[802][sym_raw_string] = actions(1142);
	v->a[802][sym_number] = actions(1142);
	v->a[802][anon_sym_DOLLAR_LBRACE] = actions(1150);
	v->a[802][anon_sym_DOLLAR_LPAREN] = actions(1152);
	v->a[802][anon_sym_BQUOTE] = actions(1154);
	v->a[802][sym_comment] = actions(3);
	v->a[803][sym_arithmetic_expansion] = state(857);
	return (parse_table_1100(v));
}

/* EOF parse_table_219.c */
