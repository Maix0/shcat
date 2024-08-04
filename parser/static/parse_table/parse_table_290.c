/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_290.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1450(t_parse_table_array *v)
{
	v->a[1309][anon_sym_LT] = actions(2633);
	v->a[1309][anon_sym_GT] = actions(2633);
	v->a[1309][anon_sym_GT_GT] = actions(2633);
	v->a[1309][anon_sym_LT_LT] = actions(2063);
	v->a[1309][aux_sym_heredoc_redirect_token1] = actions(2065);
	v->a[1309][sym_comment] = actions(3);
	v->a[1310][sym_simple_expansion] = state(1310);
	v->a[1310][sym_expansion] = state(1310);
	v->a[1310][sym_command_substitution] = state(1310);
	v->a[1310][aux_sym_heredoc_body_repeat1] = state(1310);
	v->a[1310][anon_sym_DOLLAR] = actions(2708);
	v->a[1310][anon_sym_DOLLAR_LBRACE] = actions(2711);
	v->a[1310][anon_sym_DOLLAR_LPAREN] = actions(2714);
	v->a[1310][anon_sym_BQUOTE] = actions(2717);
	v->a[1310][sym_comment] = actions(1436);
	v->a[1310][sym_heredoc_content] = actions(2720);
	v->a[1310][sym_heredoc_end] = actions(2723);
	v->a[1311][sym_file_redirect] = state(1311);
	v->a[1311][aux_sym_redirected_statement_repeat2] = state(1311);
	v->a[1311][anon_sym_PIPE] = actions(2080);
	return (parse_table_1451(v));
}

void	parse_table_1451(t_parse_table_array *v)
{
	v->a[1311][anon_sym_AMP_AMP] = actions(2080);
	v->a[1311][anon_sym_PIPE_PIPE] = actions(2080);
	v->a[1311][anon_sym_LT] = actions(2725);
	v->a[1311][anon_sym_GT] = actions(2725);
	v->a[1311][anon_sym_GT_GT] = actions(2725);
	v->a[1311][anon_sym_LT_LT] = actions(2080);
	v->a[1311][aux_sym_heredoc_redirect_token1] = actions(2078);
	v->a[1311][sym_comment] = actions(3);
	v->a[1312][anon_sym_RPAREN_RPAREN] = actions(2728);
	v->a[1312][anon_sym_PLUS] = actions(2730);
	v->a[1312][anon_sym_DASH] = actions(2730);
	v->a[1312][anon_sym_STAR] = actions(2728);
	v->a[1312][anon_sym_SLASH] = actions(2728);
	v->a[1312][anon_sym_PERCENT] = actions(2728);
	v->a[1312][anon_sym_QMARK] = actions(2728);
	v->a[1312][anon_sym_COLON] = actions(2728);
	v->a[1312][anon_sym_PLUS_PLUS] = actions(2728);
	v->a[1312][anon_sym_DASH_DASH] = actions(2728);
	v->a[1312][sym_comment] = actions(1436);
	v->a[1313][sym_file_redirect] = state(1311);
	return (parse_table_1452(v));
}

void	parse_table_1452(t_parse_table_array *v)
{
	v->a[1313][aux_sym_redirected_statement_repeat2] = state(1311);
	v->a[1313][anon_sym_PIPE] = actions(2091);
	v->a[1313][anon_sym_AMP_AMP] = actions(2091);
	v->a[1313][anon_sym_PIPE_PIPE] = actions(2091);
	v->a[1313][anon_sym_LT] = actions(2633);
	v->a[1313][anon_sym_GT] = actions(2633);
	v->a[1313][anon_sym_GT_GT] = actions(2633);
	v->a[1313][anon_sym_LT_LT] = actions(2091);
	v->a[1313][aux_sym_heredoc_redirect_token1] = actions(2093);
	v->a[1313][sym_comment] = actions(3);
	v->a[1314][anon_sym_RPAREN_RPAREN] = actions(2732);
	v->a[1314][anon_sym_PLUS] = actions(2702);
	v->a[1314][anon_sym_DASH] = actions(2702);
	v->a[1314][anon_sym_STAR] = actions(2704);
	v->a[1314][anon_sym_SLASH] = actions(2704);
	v->a[1314][anon_sym_PERCENT] = actions(2704);
	v->a[1314][anon_sym_QMARK] = actions(2732);
	v->a[1314][anon_sym_COLON] = actions(2732);
	v->a[1314][anon_sym_PLUS_PLUS] = actions(2706);
	v->a[1314][anon_sym_DASH_DASH] = actions(2706);
	return (parse_table_1453(v));
}

void	parse_table_1453(t_parse_table_array *v)
{
	v->a[1314][sym_comment] = actions(1436);
	v->a[1315][anon_sym_RPAREN_RPAREN] = actions(2734);
	v->a[1315][anon_sym_PLUS] = actions(2736);
	v->a[1315][anon_sym_DASH] = actions(2736);
	v->a[1315][anon_sym_STAR] = actions(2734);
	v->a[1315][anon_sym_SLASH] = actions(2734);
	v->a[1315][anon_sym_PERCENT] = actions(2734);
	v->a[1315][anon_sym_QMARK] = actions(2734);
	v->a[1315][anon_sym_COLON] = actions(2734);
	v->a[1315][anon_sym_PLUS_PLUS] = actions(2734);
	v->a[1315][anon_sym_DASH_DASH] = actions(2734);
	v->a[1315][sym_comment] = actions(1436);
	v->a[1316][anon_sym_RPAREN_RPAREN] = actions(2738);
	v->a[1316][anon_sym_PLUS] = actions(2740);
	v->a[1316][anon_sym_DASH] = actions(2740);
	v->a[1316][anon_sym_STAR] = actions(2704);
	v->a[1316][anon_sym_SLASH] = actions(2704);
	v->a[1316][anon_sym_PERCENT] = actions(2704);
	v->a[1316][anon_sym_QMARK] = actions(2738);
	v->a[1316][anon_sym_COLON] = actions(2738);
	return (parse_table_1454(v));
}

void	parse_table_1454(t_parse_table_array *v)
{
	v->a[1316][anon_sym_PLUS_PLUS] = actions(2706);
	v->a[1316][anon_sym_DASH_DASH] = actions(2706);
	v->a[1316][sym_comment] = actions(1436);
	v->a[1317][sym_simple_expansion] = state(1310);
	v->a[1317][sym_expansion] = state(1310);
	v->a[1317][sym_command_substitution] = state(1310);
	v->a[1317][aux_sym_heredoc_body_repeat1] = state(1310);
	v->a[1317][anon_sym_DOLLAR] = actions(2686);
	v->a[1317][anon_sym_DOLLAR_LBRACE] = actions(2688);
	v->a[1317][anon_sym_DOLLAR_LPAREN] = actions(2690);
	v->a[1317][anon_sym_BQUOTE] = actions(2692);
	v->a[1317][sym_comment] = actions(1436);
	v->a[1317][sym_heredoc_content] = actions(2742);
	v->a[1317][sym_heredoc_end] = actions(2744);
	v->a[1318][anon_sym_RPAREN_RPAREN] = actions(2738);
	v->a[1318][anon_sym_PLUS] = actions(2740);
	v->a[1318][anon_sym_DASH] = actions(2740);
	v->a[1318][anon_sym_STAR] = actions(2738);
	v->a[1318][anon_sym_SLASH] = actions(2738);
	v->a[1318][anon_sym_PERCENT] = actions(2738);
	return (parse_table_1455(v));
}

/* EOF parse_table_290.c */
