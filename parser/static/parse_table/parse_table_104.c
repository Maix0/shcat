/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_104.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_520(t_parse_table_array *v)
{
	v->a[265][anon_sym_BQUOTE] = actions(919);
	v->a[265][sym_comment] = actions(3);
	v->a[265][anon_sym_SEMI] = actions(919);
	v->a[265][sym__concat] = actions(884);
	v->a[265][sym_variable_name] = actions(917);
	v->a[266][aux_sym_concatenation_repeat1] = state(271);
	v->a[266][ts_builtin_sym_end] = actions(921);
	v->a[266][sym_word] = actions(923);
	v->a[266][anon_sym_PIPE] = actions(923);
	v->a[266][anon_sym_SEMI_SEMI] = actions(923);
	v->a[266][anon_sym_AMP_AMP] = actions(923);
	v->a[266][anon_sym_PIPE_PIPE] = actions(923);
	v->a[266][anon_sym_LT] = actions(923);
	v->a[266][anon_sym_GT] = actions(923);
	v->a[266][anon_sym_GT_GT] = actions(923);
	v->a[266][anon_sym_LT_LT] = actions(923);
	v->a[266][aux_sym_heredoc_redirect_token1] = actions(923);
	v->a[266][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(923);
	v->a[266][aux_sym_concatenation_token1] = actions(851);
	v->a[266][anon_sym_DOLLAR] = actions(923);
	return (parse_table_521(v));
}

void	parse_table_521(t_parse_table_array *v)
{
	v->a[266][anon_sym_DQUOTE] = actions(923);
	v->a[266][sym_raw_string] = actions(923);
	v->a[266][sym_number] = actions(923);
	v->a[266][anon_sym_DOLLAR_LBRACE] = actions(923);
	v->a[266][anon_sym_DOLLAR_LPAREN] = actions(923);
	v->a[266][anon_sym_BQUOTE] = actions(923);
	v->a[266][sym_comment] = actions(3);
	v->a[266][anon_sym_SEMI] = actions(923);
	v->a[266][sym__concat] = actions(925);
	v->a[266][sym__bare_dollar] = actions(921);
	v->a[267][aux_sym_concatenation_repeat1] = state(279);
	v->a[267][sym_word] = actions(923);
	v->a[267][anon_sym_PIPE] = actions(923);
	v->a[267][anon_sym_RPAREN] = actions(923);
	v->a[267][anon_sym_SEMI_SEMI] = actions(923);
	v->a[267][anon_sym_AMP_AMP] = actions(923);
	v->a[267][anon_sym_PIPE_PIPE] = actions(923);
	v->a[267][anon_sym_LT] = actions(923);
	v->a[267][anon_sym_GT] = actions(923);
	v->a[267][anon_sym_GT_GT] = actions(923);
	return (parse_table_522(v));
}

void	parse_table_522(t_parse_table_array *v)
{
	v->a[267][anon_sym_LT_LT] = actions(923);
	v->a[267][aux_sym_heredoc_redirect_token1] = actions(923);
	v->a[267][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(923);
	v->a[267][aux_sym_concatenation_token1] = actions(927);
	v->a[267][anon_sym_DOLLAR] = actions(923);
	v->a[267][anon_sym_DQUOTE] = actions(923);
	v->a[267][sym_raw_string] = actions(923);
	v->a[267][sym_number] = actions(923);
	v->a[267][anon_sym_DOLLAR_LBRACE] = actions(923);
	v->a[267][anon_sym_DOLLAR_LPAREN] = actions(923);
	v->a[267][anon_sym_BQUOTE] = actions(923);
	v->a[267][sym_comment] = actions(3);
	v->a[267][anon_sym_SEMI] = actions(923);
	v->a[267][sym__concat] = actions(929);
	v->a[267][sym_variable_name] = actions(921);
	v->a[268][sym__expansion_expression] = state(1650);
	v->a[268][sym__expansion_regex] = state(1649);
	v->a[268][anon_sym_RBRACE] = actions(931);
	v->a[268][anon_sym_BANG] = actions(933);
	v->a[268][anon_sym_DASH] = actions(935);
	return (parse_table_523(v));
}

void	parse_table_523(t_parse_table_array *v)
{
	v->a[268][anon_sym_STAR] = actions(933);
	v->a[268][anon_sym_PERCENT] = actions(937);
	v->a[268][anon_sym_QMARK] = actions(935);
	v->a[268][anon_sym_DOLLAR] = actions(933);
	v->a[268][anon_sym_POUND] = actions(939);
	v->a[268][anon_sym_COLON_DASH] = actions(941);
	v->a[268][anon_sym_DASH3] = actions(941);
	v->a[268][anon_sym_COLON_EQ] = actions(941);
	v->a[268][anon_sym_EQ2] = actions(941);
	v->a[268][anon_sym_COLON_QMARK] = actions(941);
	v->a[268][anon_sym_QMARK2] = actions(941);
	v->a[268][anon_sym_COLON_PLUS] = actions(941);
	v->a[268][anon_sym_PLUS3] = actions(941);
	v->a[268][anon_sym_PERCENT_PERCENT] = actions(943);
	v->a[268][sym_comment] = actions(3);
	v->a[268][aux_sym__simple_variable_name_token1] = actions(945);
	v->a[268][anon_sym_AT] = actions(933);
	v->a[268][anon_sym_0] = actions(935);
	v->a[268][sym_variable_name] = actions(947);
	v->a[268][sym__immediate_double_hash] = actions(943);
	return (parse_table_524(v));
}

void	parse_table_524(t_parse_table_array *v)
{
	v->a[269][sym_arithmetic_expansion] = state(600);
	v->a[269][sym_concatenation] = state(775);
	v->a[269][sym_string] = state(600);
	v->a[269][sym_simple_expansion] = state(600);
	v->a[269][sym_expansion] = state(600);
	v->a[269][sym_command_substitution] = state(600);
	v->a[269][aux_sym_command_repeat2] = state(269);
	v->a[269][sym_word] = actions(949);
	v->a[269][anon_sym_PIPE] = actions(455);
	v->a[269][anon_sym_AMP_AMP] = actions(455);
	v->a[269][anon_sym_PIPE_PIPE] = actions(455);
	v->a[269][anon_sym_LT] = actions(455);
	v->a[269][anon_sym_GT] = actions(455);
	v->a[269][anon_sym_GT_GT] = actions(455);
	v->a[269][anon_sym_LT_LT] = actions(455);
	v->a[269][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(952);
	v->a[269][anon_sym_DOLLAR] = actions(955);
	v->a[269][anon_sym_DQUOTE] = actions(958);
	v->a[269][sym_raw_string] = actions(949);
	v->a[269][sym_number] = actions(949);
	return (parse_table_525(v));
}

/* EOF parse_table_104.c */
