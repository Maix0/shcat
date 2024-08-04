/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_81.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_405(t_parse_table_array *v)
{
	v->a[180][sym_word] = actions(602);
	v->a[180][anon_sym_PIPE] = actions(403);
	v->a[180][anon_sym_SEMI_SEMI] = actions(403);
	v->a[180][anon_sym_AMP_AMP] = actions(403);
	v->a[180][anon_sym_PIPE_PIPE] = actions(403);
	v->a[180][anon_sym_LT] = actions(403);
	v->a[180][anon_sym_GT] = actions(403);
	v->a[180][anon_sym_GT_GT] = actions(403);
	v->a[180][anon_sym_LT_LT] = actions(403);
	v->a[180][aux_sym_heredoc_redirect_token1] = actions(403);
	v->a[180][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[180][anon_sym_DOLLAR] = actions(55);
	v->a[180][anon_sym_DQUOTE] = actions(57);
	v->a[180][sym_raw_string] = actions(602);
	v->a[180][sym_number] = actions(602);
	v->a[180][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[180][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[180][anon_sym_BQUOTE] = actions(403);
	v->a[180][sym_comment] = actions(3);
	v->a[180][anon_sym_SEMI] = actions(403);
	return (parse_table_406(v));
}

void	parse_table_406(t_parse_table_array *v)
{
	v->a[180][sym__bare_dollar] = actions(419);
	v->a[181][sym_arithmetic_expansion] = state(402);
	v->a[181][sym_concatenation] = state(181);
	v->a[181][sym_string] = state(402);
	v->a[181][sym_simple_expansion] = state(402);
	v->a[181][sym_expansion] = state(402);
	v->a[181][sym_command_substitution] = state(402);
	v->a[181][aux_sym_for_statement_repeat1] = state(181);
	v->a[181][sym_word] = actions(604);
	v->a[181][anon_sym_PIPE] = actions(428);
	v->a[181][anon_sym_RPAREN] = actions(428);
	v->a[181][anon_sym_SEMI_SEMI] = actions(428);
	v->a[181][anon_sym_AMP_AMP] = actions(428);
	v->a[181][anon_sym_PIPE_PIPE] = actions(428);
	v->a[181][anon_sym_LT] = actions(428);
	v->a[181][anon_sym_GT] = actions(428);
	v->a[181][anon_sym_GT_GT] = actions(428);
	v->a[181][anon_sym_LT_LT] = actions(428);
	v->a[181][aux_sym_heredoc_redirect_token1] = actions(428);
	v->a[181][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(607);
	return (parse_table_407(v));
}

void	parse_table_407(t_parse_table_array *v)
{
	v->a[181][anon_sym_DOLLAR] = actions(610);
	v->a[181][anon_sym_DQUOTE] = actions(613);
	v->a[181][sym_raw_string] = actions(604);
	v->a[181][sym_number] = actions(604);
	v->a[181][anon_sym_DOLLAR_LBRACE] = actions(616);
	v->a[181][anon_sym_DOLLAR_LPAREN] = actions(619);
	v->a[181][anon_sym_BQUOTE] = actions(622);
	v->a[181][sym_comment] = actions(3);
	v->a[181][anon_sym_SEMI] = actions(428);
	v->a[182][sym_arithmetic_expansion] = state(362);
	v->a[182][sym_concatenation] = state(187);
	v->a[182][sym_string] = state(362);
	v->a[182][sym_simple_expansion] = state(362);
	v->a[182][sym_expansion] = state(362);
	v->a[182][sym_command_substitution] = state(362);
	v->a[182][aux_sym_for_statement_repeat1] = state(187);
	v->a[182][sym_word] = actions(625);
	v->a[182][anon_sym_esac] = actions(421);
	v->a[182][anon_sym_PIPE] = actions(421);
	v->a[182][anon_sym_SEMI_SEMI] = actions(421);
	return (parse_table_408(v));
}

void	parse_table_408(t_parse_table_array *v)
{
	v->a[182][anon_sym_AMP_AMP] = actions(421);
	v->a[182][anon_sym_PIPE_PIPE] = actions(421);
	v->a[182][anon_sym_LT] = actions(421);
	v->a[182][anon_sym_GT] = actions(421);
	v->a[182][anon_sym_GT_GT] = actions(421);
	v->a[182][anon_sym_LT_LT] = actions(421);
	v->a[182][aux_sym_heredoc_redirect_token1] = actions(421);
	v->a[182][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(627);
	v->a[182][anon_sym_DOLLAR] = actions(629);
	v->a[182][anon_sym_DQUOTE] = actions(631);
	v->a[182][sym_raw_string] = actions(625);
	v->a[182][sym_number] = actions(625);
	v->a[182][anon_sym_DOLLAR_LBRACE] = actions(633);
	v->a[182][anon_sym_DOLLAR_LPAREN] = actions(635);
	v->a[182][anon_sym_BQUOTE] = actions(637);
	v->a[182][sym_comment] = actions(3);
	v->a[182][anon_sym_SEMI] = actions(421);
	v->a[183][sym_word] = actions(343);
	v->a[183][anon_sym_PIPE] = actions(343);
	v->a[183][anon_sym_AMP_AMP] = actions(343);
	return (parse_table_409(v));
}

void	parse_table_409(t_parse_table_array *v)
{
	v->a[183][anon_sym_PIPE_PIPE] = actions(343);
	v->a[183][anon_sym_BANG] = actions(639);
	v->a[183][anon_sym_LT] = actions(343);
	v->a[183][anon_sym_GT] = actions(343);
	v->a[183][anon_sym_GT_GT] = actions(343);
	v->a[183][anon_sym_LT_LT] = actions(343);
	v->a[183][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(343);
	v->a[183][anon_sym_DASH] = actions(639);
	v->a[183][anon_sym_STAR] = actions(639);
	v->a[183][anon_sym_QMARK] = actions(639);
	v->a[183][anon_sym_DOLLAR] = actions(639);
	v->a[183][anon_sym_DQUOTE] = actions(343);
	v->a[183][sym_raw_string] = actions(343);
	v->a[183][sym_number] = actions(343);
	v->a[183][anon_sym_POUND] = actions(639);
	v->a[183][anon_sym_DOLLAR_LBRACE] = actions(343);
	v->a[183][anon_sym_DOLLAR_LPAREN] = actions(343);
	v->a[183][anon_sym_BQUOTE] = actions(343);
	v->a[183][sym_comment] = actions(3);
	v->a[183][aux_sym__simple_variable_name_token1] = actions(641);
	return (parse_table_410(v));
}

/* EOF parse_table_81.c */
