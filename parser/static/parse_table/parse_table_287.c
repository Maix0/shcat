/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_287.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1435(t_parse_table_array *v)
{
	v->a[1282][anon_sym_PIPE] = actions(1961);
	v->a[1282][anon_sym_AMP_AMP] = actions(1963);
	v->a[1282][anon_sym_PIPE_PIPE] = actions(1963);
	v->a[1282][anon_sym_LT] = actions(1961);
	v->a[1282][anon_sym_GT] = actions(1961);
	v->a[1282][anon_sym_GT_GT] = actions(1963);
	v->a[1282][anon_sym_LT_LT] = actions(1963);
	v->a[1282][sym_comment] = actions(1436);
	v->a[1282][sym_variable_name] = actions(2683);
	v->a[1283][sym_simple_expansion] = state(1317);
	v->a[1283][sym_expansion] = state(1317);
	v->a[1283][sym_command_substitution] = state(1317);
	v->a[1283][aux_sym_heredoc_body_repeat1] = state(1317);
	v->a[1283][anon_sym_DOLLAR] = actions(2686);
	v->a[1283][anon_sym_DOLLAR_LBRACE] = actions(2688);
	v->a[1283][anon_sym_DOLLAR_LPAREN] = actions(2690);
	v->a[1283][anon_sym_BQUOTE] = actions(2692);
	v->a[1283][sym_comment] = actions(1436);
	v->a[1283][sym_heredoc_content] = actions(2694);
	v->a[1283][sym_heredoc_end] = actions(2696);
	return (parse_table_1436(v));
}

void	parse_table_1436(t_parse_table_array *v)
{
	v->a[1284][sym_file_redirect] = state(1225);
	v->a[1284][sym_heredoc_redirect] = state(1225);
	v->a[1284][aux_sym_redirected_statement_repeat1] = state(1225);
	v->a[1284][anon_sym_AMP_AMP] = actions(1033);
	v->a[1284][anon_sym_PIPE_PIPE] = actions(1033);
	v->a[1284][anon_sym_LT] = actions(2633);
	v->a[1284][anon_sym_GT] = actions(2633);
	v->a[1284][anon_sym_GT_GT] = actions(2633);
	v->a[1284][anon_sym_LT_LT] = actions(597);
	v->a[1284][aux_sym_heredoc_redirect_token1] = actions(2637);
	v->a[1284][sym_comment] = actions(3);
	v->a[1285][anon_sym_PIPE] = actions(1058);
	v->a[1285][anon_sym_AMP_AMP] = actions(1060);
	v->a[1285][anon_sym_PIPE_PIPE] = actions(1060);
	v->a[1285][anon_sym_LT] = actions(1058);
	v->a[1285][anon_sym_GT] = actions(1058);
	v->a[1285][anon_sym_GT_GT] = actions(1060);
	v->a[1285][anon_sym_LT_LT] = actions(1060);
	v->a[1285][aux_sym_concatenation_token1] = actions(1060);
	v->a[1285][sym_comment] = actions(1436);
	return (parse_table_1437(v));
}

void	parse_table_1437(t_parse_table_array *v)
{
	v->a[1285][sym__concat] = actions(1060);
	v->a[1285][sym_variable_name] = actions(1060);
	v->a[1286][anon_sym_RPAREN_RPAREN] = actions(1126);
	v->a[1286][anon_sym_PLUS] = actions(1124);
	v->a[1286][anon_sym_DASH] = actions(1124);
	v->a[1286][anon_sym_STAR] = actions(1126);
	v->a[1286][anon_sym_SLASH] = actions(1126);
	v->a[1286][anon_sym_PERCENT] = actions(1126);
	v->a[1286][anon_sym_QMARK] = actions(1126);
	v->a[1286][anon_sym_COLON] = actions(1126);
	v->a[1286][anon_sym_PLUS_PLUS] = actions(1126);
	v->a[1286][anon_sym_DASH_DASH] = actions(1126);
	v->a[1286][sym_comment] = actions(1436);
	v->a[1287][sym_file_redirect] = state(1319);
	v->a[1287][sym_heredoc_redirect] = state(1319);
	v->a[1287][aux_sym_redirected_statement_repeat1] = state(1319);
	v->a[1287][anon_sym_PIPE] = actions(580);
	v->a[1287][anon_sym_AMP_AMP] = actions(827);
	v->a[1287][anon_sym_PIPE_PIPE] = actions(827);
	v->a[1287][anon_sym_LT] = actions(816);
	return (parse_table_1438(v));
}

void	parse_table_1438(t_parse_table_array *v)
{
	v->a[1287][anon_sym_GT] = actions(816);
	v->a[1287][anon_sym_GT_GT] = actions(827);
	v->a[1287][anon_sym_LT_LT] = actions(827);
	v->a[1287][sym_comment] = actions(1436);
	v->a[1288][anon_sym_PIPE] = actions(1048);
	v->a[1288][anon_sym_AMP_AMP] = actions(1046);
	v->a[1288][anon_sym_PIPE_PIPE] = actions(1046);
	v->a[1288][anon_sym_LT] = actions(1048);
	v->a[1288][anon_sym_GT] = actions(1048);
	v->a[1288][anon_sym_GT_GT] = actions(1046);
	v->a[1288][anon_sym_LT_LT] = actions(1046);
	v->a[1288][aux_sym_concatenation_token1] = actions(1046);
	v->a[1288][sym_comment] = actions(1436);
	v->a[1288][sym__concat] = actions(1046);
	v->a[1288][sym_variable_name] = actions(1046);
	v->a[1289][anon_sym_PIPE] = actions(1089);
	v->a[1289][anon_sym_AMP_AMP] = actions(1087);
	v->a[1289][anon_sym_PIPE_PIPE] = actions(1087);
	v->a[1289][anon_sym_LT] = actions(1089);
	v->a[1289][anon_sym_GT] = actions(1089);
	return (parse_table_1439(v));
}

void	parse_table_1439(t_parse_table_array *v)
{
	v->a[1289][anon_sym_GT_GT] = actions(1087);
	v->a[1289][anon_sym_LT_LT] = actions(1087);
	v->a[1289][aux_sym_concatenation_token1] = actions(1087);
	v->a[1289][sym_comment] = actions(1436);
	v->a[1289][sym__concat] = actions(1087);
	v->a[1289][sym_variable_name] = actions(1087);
	v->a[1290][anon_sym_PIPE] = actions(1114);
	v->a[1290][anon_sym_AMP_AMP] = actions(1116);
	v->a[1290][anon_sym_PIPE_PIPE] = actions(1116);
	v->a[1290][anon_sym_LT] = actions(1114);
	v->a[1290][anon_sym_GT] = actions(1114);
	v->a[1290][anon_sym_GT_GT] = actions(1116);
	v->a[1290][anon_sym_LT_LT] = actions(1116);
	v->a[1290][aux_sym_concatenation_token1] = actions(1116);
	v->a[1290][sym_comment] = actions(1436);
	v->a[1290][sym__concat] = actions(1116);
	v->a[1290][sym_variable_name] = actions(1116);
	v->a[1291][anon_sym_PIPE] = actions(1124);
	v->a[1291][anon_sym_AMP_AMP] = actions(1126);
	v->a[1291][anon_sym_PIPE_PIPE] = actions(1126);
	return (parse_table_1440(v));
}

/* EOF parse_table_287.c */
