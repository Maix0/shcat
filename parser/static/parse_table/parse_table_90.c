/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_90.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_450(t_parse_table_array *v)
{
	v->a[349][anon_sym_DOLLAR] = actions(352);
	v->a[349][anon_sym_DQUOTE] = actions(352);
	v->a[349][sym_raw_string] = actions(352);
	v->a[349][sym_number] = actions(352);
	v->a[349][anon_sym_DOLLAR_LBRACE] = actions(352);
	v->a[349][anon_sym_DOLLAR_LPAREN] = actions(352);
	v->a[349][anon_sym_BQUOTE] = actions(352);
	v->a[349][sym_comment] = actions(3);
	v->a[349][sym_variable_name] = actions(786);
	v->a[350][sym_arithmetic_expansion] = state(335);
	v->a[350][sym_string] = state(335);
	v->a[350][sym_simple_expansion] = state(335);
	v->a[350][sym_expansion] = state(335);
	v->a[350][sym_command_substitution] = state(335);
	v->a[350][sym_word] = actions(903);
	v->a[350][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(714);
	v->a[350][aux_sym_concatenation_token1] = actions(903);
	v->a[350][anon_sym_DOLLAR] = actions(716);
	v->a[350][anon_sym_DQUOTE] = actions(718);
	v->a[350][sym_raw_string] = actions(903);
	return (parse_table_451(v));
}

void	parse_table_451(t_parse_table_array *v)
{
	v->a[350][sym_number] = actions(903);
	v->a[350][anon_sym_DOLLAR_LBRACE] = actions(720);
	v->a[350][anon_sym_DOLLAR_LPAREN] = actions(722);
	v->a[350][anon_sym_BQUOTE] = actions(724);
	v->a[350][sym_comment] = actions(3);
	v->a[350][sym__comment_word] = actions(903);
	v->a[350][sym__bare_dollar] = actions(905);
	v->a[351][sym_word] = actions(573);
	v->a[351][anon_sym_PIPE] = actions(573);
	v->a[351][anon_sym_AMP_AMP] = actions(573);
	v->a[351][anon_sym_PIPE_PIPE] = actions(573);
	v->a[351][anon_sym_LT] = actions(573);
	v->a[351][anon_sym_GT] = actions(573);
	v->a[351][anon_sym_GT_GT] = actions(573);
	v->a[351][anon_sym_LT_LT] = actions(573);
	v->a[351][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(573);
	v->a[351][anon_sym_DOLLAR] = actions(573);
	v->a[351][anon_sym_DQUOTE] = actions(573);
	v->a[351][sym_raw_string] = actions(573);
	v->a[351][sym_number] = actions(573);
	return (parse_table_452(v));
}

void	parse_table_452(t_parse_table_array *v)
{
	v->a[351][anon_sym_DOLLAR_LBRACE] = actions(573);
	v->a[351][anon_sym_DOLLAR_LPAREN] = actions(573);
	v->a[351][anon_sym_BQUOTE] = actions(573);
	v->a[351][sym_comment] = actions(3);
	v->a[351][sym_variable_name] = actions(579);
	v->a[352][sym_arithmetic_expansion] = state(433);
	v->a[352][sym_string] = state(433);
	v->a[352][sym_simple_expansion] = state(433);
	v->a[352][sym_expansion] = state(433);
	v->a[352][sym_command_substitution] = state(433);
	v->a[352][sym_word] = actions(907);
	v->a[352][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(909);
	v->a[352][aux_sym_concatenation_token1] = actions(907);
	v->a[352][anon_sym_DOLLAR] = actions(911);
	v->a[352][anon_sym_DQUOTE] = actions(913);
	v->a[352][sym_raw_string] = actions(907);
	v->a[352][sym_number] = actions(907);
	v->a[352][anon_sym_DOLLAR_LBRACE] = actions(915);
	v->a[352][anon_sym_DOLLAR_LPAREN] = actions(917);
	v->a[352][anon_sym_BQUOTE] = actions(919);
	return (parse_table_453(v));
}

void	parse_table_453(t_parse_table_array *v)
{
	v->a[352][sym_comment] = actions(3);
	v->a[352][sym__comment_word] = actions(907);
	v->a[352][sym__bare_dollar] = actions(921);
	v->a[353][sym_word] = actions(923);
	v->a[353][anon_sym_LBRACE] = actions(923);
	v->a[353][anon_sym_LPAREN] = actions(923);
	v->a[353][anon_sym_RPAREN] = actions(923);
	v->a[353][anon_sym_BANG] = actions(923);
	v->a[353][anon_sym_LT] = actions(923);
	v->a[353][anon_sym_GT] = actions(923);
	v->a[353][anon_sym_GT_GT] = actions(923);
	v->a[353][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(923);
	v->a[353][anon_sym_DOLLAR] = actions(923);
	v->a[353][anon_sym_DQUOTE] = actions(923);
	v->a[353][sym_raw_string] = actions(923);
	v->a[353][sym_number] = actions(923);
	v->a[353][anon_sym_DOLLAR_LBRACE] = actions(923);
	v->a[353][anon_sym_DOLLAR_LPAREN] = actions(923);
	v->a[353][anon_sym_BQUOTE] = actions(923);
	v->a[353][sym_comment] = actions(3);
	return (parse_table_454(v));
}

void	parse_table_454(t_parse_table_array *v)
{
	v->a[353][sym_variable_name] = actions(925);
	v->a[354][sym_arithmetic_expansion] = state(452);
	v->a[354][sym_concatenation] = state(351);
	v->a[354][sym_string] = state(452);
	v->a[354][sym_simple_expansion] = state(452);
	v->a[354][sym_expansion] = state(452);
	v->a[354][sym_command_substitution] = state(452);
	v->a[354][sym_word] = actions(927);
	v->a[354][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(929);
	v->a[354][anon_sym_DOLLAR] = actions(931);
	v->a[354][anon_sym_DQUOTE] = actions(933);
	v->a[354][sym_raw_string] = actions(927);
	v->a[354][sym_number] = actions(927);
	v->a[354][anon_sym_DOLLAR_LBRACE] = actions(935);
	v->a[354][anon_sym_DOLLAR_LPAREN] = actions(937);
	v->a[354][anon_sym_BQUOTE] = actions(939);
	v->a[354][sym_comment] = actions(3);
	v->a[354][sym__comment_word] = actions(941);
	v->a[354][sym__empty_value] = actions(943);
	v->a[355][sym_word] = actions(945);
	return (parse_table_455(v));
}

/* EOF parse_table_90.c */
