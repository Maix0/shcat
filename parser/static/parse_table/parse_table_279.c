/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_279.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1395(t_parse_table_array *v)
{
	v->a[1215][anon_sym_SEMI_SEMI] = actions(2353);
	v->a[1215][anon_sym_AMP_AMP] = actions(2353);
	v->a[1215][anon_sym_PIPE_PIPE] = actions(2353);
	v->a[1215][anon_sym_LT] = actions(2353);
	v->a[1215][anon_sym_GT] = actions(2353);
	v->a[1215][anon_sym_GT_GT] = actions(2353);
	v->a[1215][anon_sym_LT_LT] = actions(2353);
	v->a[1215][aux_sym_heredoc_redirect_token1] = actions(2357);
	v->a[1215][sym_comment] = actions(3);
	v->a[1215][anon_sym_SEMI] = actions(2353);
	v->a[1216][anon_sym_esac] = actions(2035);
	v->a[1216][anon_sym_PIPE] = actions(2035);
	v->a[1216][anon_sym_SEMI_SEMI] = actions(2035);
	v->a[1216][anon_sym_AMP_AMP] = actions(2035);
	v->a[1216][anon_sym_PIPE_PIPE] = actions(2035);
	v->a[1216][anon_sym_LT] = actions(2035);
	v->a[1216][anon_sym_GT] = actions(2035);
	v->a[1216][anon_sym_GT_GT] = actions(2035);
	v->a[1216][anon_sym_LT_LT] = actions(2035);
	v->a[1216][aux_sym_heredoc_redirect_token1] = actions(2033);
	return (parse_table_1396(v));
}

void	parse_table_1396(t_parse_table_array *v)
{
	v->a[1216][sym_comment] = actions(3);
	v->a[1216][anon_sym_SEMI] = actions(2035);
	v->a[1217][anon_sym_BANG] = actions(1469);
	v->a[1217][anon_sym_DASH] = actions(1469);
	v->a[1217][anon_sym_STAR] = actions(1469);
	v->a[1217][anon_sym_QMARK] = actions(1469);
	v->a[1217][anon_sym_DOLLAR] = actions(1469);
	v->a[1217][anon_sym_POUND] = actions(1469);
	v->a[1217][sym_comment] = actions(3);
	v->a[1217][aux_sym__simple_variable_name_token1] = actions(1471);
	v->a[1217][aux_sym__multiline_variable_name_token1] = actions(1471);
	v->a[1217][anon_sym_AT] = actions(1469);
	v->a[1217][anon_sym_0] = actions(1469);
	v->a[1217][sym_variable_name] = actions(1473);
	v->a[1218][anon_sym_BANG] = actions(1208);
	v->a[1218][anon_sym_DASH] = actions(1208);
	v->a[1218][anon_sym_STAR] = actions(1208);
	v->a[1218][anon_sym_QMARK] = actions(1208);
	v->a[1218][anon_sym_DOLLAR] = actions(1208);
	v->a[1218][anon_sym_POUND] = actions(1208);
	return (parse_table_1397(v));
}

void	parse_table_1397(t_parse_table_array *v)
{
	v->a[1218][sym_comment] = actions(3);
	v->a[1218][aux_sym__simple_variable_name_token1] = actions(1210);
	v->a[1218][aux_sym__multiline_variable_name_token1] = actions(1210);
	v->a[1218][anon_sym_AT] = actions(1208);
	v->a[1218][anon_sym_0] = actions(1208);
	v->a[1218][sym_variable_name] = actions(1212);
	v->a[1219][anon_sym_BANG] = actions(861);
	v->a[1219][anon_sym_DASH] = actions(861);
	v->a[1219][anon_sym_STAR] = actions(861);
	v->a[1219][anon_sym_QMARK] = actions(861);
	v->a[1219][anon_sym_DOLLAR] = actions(861);
	v->a[1219][anon_sym_POUND] = actions(861);
	v->a[1219][sym_comment] = actions(3);
	v->a[1219][aux_sym__simple_variable_name_token1] = actions(863);
	v->a[1219][aux_sym__multiline_variable_name_token1] = actions(863);
	v->a[1219][anon_sym_AT] = actions(861);
	v->a[1219][anon_sym_0] = actions(861);
	v->a[1219][sym_variable_name] = actions(865);
	v->a[1220][aux_sym_pipeline_repeat1] = state(1220);
	v->a[1220][anon_sym_PIPE] = actions(2630);
	return (parse_table_1398(v));
}

void	parse_table_1398(t_parse_table_array *v)
{
	v->a[1220][anon_sym_SEMI_SEMI] = actions(1979);
	v->a[1220][anon_sym_AMP_AMP] = actions(1979);
	v->a[1220][anon_sym_PIPE_PIPE] = actions(1979);
	v->a[1220][anon_sym_LT] = actions(1979);
	v->a[1220][anon_sym_GT] = actions(1979);
	v->a[1220][anon_sym_GT_GT] = actions(1979);
	v->a[1220][anon_sym_LT_LT] = actions(1979);
	v->a[1220][aux_sym_heredoc_redirect_token1] = actions(1974);
	v->a[1220][sym_comment] = actions(3);
	v->a[1220][anon_sym_SEMI] = actions(1979);
	v->a[1221][sym_file_redirect] = state(1225);
	v->a[1221][sym_heredoc_redirect] = state(1225);
	v->a[1221][aux_sym_redirected_statement_repeat1] = state(1225);
	v->a[1221][anon_sym_PIPE] = actions(580);
	v->a[1221][anon_sym_AMP_AMP] = actions(1033);
	v->a[1221][anon_sym_PIPE_PIPE] = actions(1033);
	v->a[1221][anon_sym_LT] = actions(2633);
	v->a[1221][anon_sym_GT] = actions(2633);
	v->a[1221][anon_sym_GT_GT] = actions(2633);
	v->a[1221][anon_sym_LT_LT] = actions(597);
	return (parse_table_1399(v));
}

void	parse_table_1399(t_parse_table_array *v)
{
	v->a[1221][aux_sym_heredoc_redirect_token1] = actions(2635);
	v->a[1221][sym_comment] = actions(3);
	v->a[1222][sym_file_redirect] = state(1225);
	v->a[1222][sym_heredoc_redirect] = state(1225);
	v->a[1222][aux_sym_redirected_statement_repeat1] = state(1225);
	v->a[1222][anon_sym_PIPE] = actions(580);
	v->a[1222][anon_sym_AMP_AMP] = actions(1033);
	v->a[1222][anon_sym_PIPE_PIPE] = actions(1033);
	v->a[1222][anon_sym_LT] = actions(2633);
	v->a[1222][anon_sym_GT] = actions(2633);
	v->a[1222][anon_sym_GT_GT] = actions(2633);
	v->a[1222][anon_sym_LT_LT] = actions(597);
	v->a[1222][aux_sym_heredoc_redirect_token1] = actions(2637);
	v->a[1222][sym_comment] = actions(3);
	v->a[1223][aux_sym_concatenation_repeat1] = state(1223);
	v->a[1223][anon_sym_PIPE] = actions(973);
	v->a[1223][anon_sym_AMP_AMP] = actions(981);
	v->a[1223][anon_sym_PIPE_PIPE] = actions(981);
	v->a[1223][anon_sym_LT] = actions(973);
	v->a[1223][anon_sym_GT] = actions(973);
	return (parse_table_1400(v));
}

/* EOF parse_table_279.c */
