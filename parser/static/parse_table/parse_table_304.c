/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_304.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1520(t_parse_table_array *v)
{
	v->a[1467][sym_elif_clause] = state(1503);
	v->a[1467][sym_else_clause] = state(1732);
	v->a[1467][aux_sym_if_statement_repeat1] = state(1503);
	v->a[1467][anon_sym_fi] = actions(2954);
	v->a[1467][anon_sym_elif] = actions(2930);
	v->a[1467][anon_sym_else] = actions(2932);
	v->a[1467][sym_comment] = actions(1436);
	v->a[1468][aux_sym__case_item_last_repeat1] = state(1547);
	v->a[1468][aux_sym_concatenation_repeat1] = state(1492);
	v->a[1468][anon_sym_PIPE] = actions(2942);
	v->a[1468][anon_sym_RPAREN] = actions(2956);
	v->a[1468][aux_sym_concatenation_token1] = actions(2946);
	v->a[1468][sym_comment] = actions(1436);
	v->a[1468][sym__concat] = actions(2946);
	v->a[1469][anon_sym_RPAREN] = actions(1085);
	v->a[1469][anon_sym_RBRACE] = actions(1085);
	v->a[1469][anon_sym_DQUOTE] = actions(1085);
	v->a[1469][sym_raw_string] = actions(1085);
	v->a[1469][aux_sym__expansion_regex_token1] = actions(1083);
	v->a[1469][sym_comment] = actions(3);
	return (parse_table_1521(v));
}

void	parse_table_1521(t_parse_table_array *v)
{
	v->a[1469][sym_regex] = actions(1083);
	v->a[1470][anon_sym_RPAREN] = actions(1089);
	v->a[1470][anon_sym_RBRACE] = actions(1089);
	v->a[1470][anon_sym_DQUOTE] = actions(1089);
	v->a[1470][sym_raw_string] = actions(1089);
	v->a[1470][aux_sym__expansion_regex_token1] = actions(1087);
	v->a[1470][sym_comment] = actions(3);
	v->a[1470][sym_regex] = actions(1087);
	v->a[1471][anon_sym_RPAREN] = actions(1106);
	v->a[1471][anon_sym_RBRACE] = actions(1106);
	v->a[1471][anon_sym_DQUOTE] = actions(1106);
	v->a[1471][sym_raw_string] = actions(1106);
	v->a[1471][aux_sym__expansion_regex_token1] = actions(1108);
	v->a[1471][sym_comment] = actions(3);
	v->a[1471][sym_regex] = actions(1108);
	v->a[1472][anon_sym_in] = actions(1052);
	v->a[1472][anon_sym_SEMI_SEMI] = actions(1052);
	v->a[1472][aux_sym_heredoc_redirect_token1] = actions(1050);
	v->a[1472][aux_sym_concatenation_token1] = actions(1052);
	v->a[1472][sym_comment] = actions(3);
	return (parse_table_1522(v));
}

void	parse_table_1522(t_parse_table_array *v)
{
	v->a[1472][anon_sym_SEMI] = actions(1052);
	v->a[1472][sym__concat] = actions(1050);
	v->a[1473][anon_sym_DOLLAR] = actions(1114);
	v->a[1473][anon_sym_DOLLAR_LBRACE] = actions(1116);
	v->a[1473][anon_sym_DOLLAR_LPAREN] = actions(1116);
	v->a[1473][anon_sym_BQUOTE] = actions(1116);
	v->a[1473][sym_comment] = actions(1436);
	v->a[1473][sym_heredoc_content] = actions(1116);
	v->a[1473][sym_heredoc_end] = actions(1116);
	v->a[1474][anon_sym_in] = actions(1124);
	v->a[1474][anon_sym_SEMI_SEMI] = actions(1124);
	v->a[1474][aux_sym_heredoc_redirect_token1] = actions(1126);
	v->a[1474][aux_sym_concatenation_token1] = actions(1124);
	v->a[1474][sym_comment] = actions(3);
	v->a[1474][anon_sym_SEMI] = actions(1124);
	v->a[1474][sym__concat] = actions(1126);
	v->a[1475][sym_elif_clause] = state(1503);
	v->a[1475][sym_else_clause] = state(1704);
	v->a[1475][aux_sym_if_statement_repeat1] = state(1503);
	v->a[1475][anon_sym_fi] = actions(2958);
	return (parse_table_1523(v));
}

void	parse_table_1523(t_parse_table_array *v)
{
	v->a[1475][anon_sym_elif] = actions(2930);
	v->a[1475][anon_sym_else] = actions(2932);
	v->a[1475][sym_comment] = actions(1436);
	v->a[1476][sym__heredoc_body] = state(1063);
	v->a[1476][sym_heredoc_body] = state(1664);
	v->a[1476][sym__simple_heredoc_body] = state(1061);
	v->a[1476][sym_comment] = actions(1436);
	v->a[1476][sym_simple_heredoc_body] = actions(2960);
	v->a[1476][sym__heredoc_body_beginning] = actions(2962);
	v->a[1477][sym__heredoc_body] = state(1247);
	v->a[1477][sym_heredoc_body] = state(1662);
	v->a[1477][sym__simple_heredoc_body] = state(1247);
	v->a[1477][sym_comment] = actions(1436);
	v->a[1477][sym_simple_heredoc_body] = actions(2964);
	v->a[1477][sym__heredoc_body_beginning] = actions(2962);
	v->a[1478][anon_sym_PIPE] = actions(1050);
	v->a[1478][anon_sym_RPAREN] = actions(1050);
	v->a[1478][anon_sym_RBRACE] = actions(1050);
	v->a[1478][aux_sym_concatenation_token1] = actions(1050);
	v->a[1478][sym_comment] = actions(1436);
	return (parse_table_1524(v));
}

void	parse_table_1524(t_parse_table_array *v)
{
	v->a[1478][sym__concat] = actions(1050);
	v->a[1479][anon_sym_PIPE] = actions(1108);
	v->a[1479][anon_sym_RPAREN] = actions(1108);
	v->a[1479][anon_sym_RBRACE] = actions(1108);
	v->a[1479][aux_sym_concatenation_token1] = actions(1108);
	v->a[1479][sym_comment] = actions(1436);
	v->a[1479][sym__concat] = actions(1108);
	v->a[1480][anon_sym_PIPE] = actions(1087);
	v->a[1480][anon_sym_RPAREN] = actions(1087);
	v->a[1480][anon_sym_RBRACE] = actions(1087);
	v->a[1480][aux_sym_concatenation_token1] = actions(1087);
	v->a[1480][sym_comment] = actions(1436);
	v->a[1480][sym__concat] = actions(1087);
	v->a[1481][anon_sym_PIPE] = actions(1083);
	v->a[1481][anon_sym_RPAREN] = actions(1083);
	v->a[1481][anon_sym_RBRACE] = actions(1083);
	v->a[1481][aux_sym_concatenation_token1] = actions(1083);
	v->a[1481][sym_comment] = actions(1436);
	v->a[1481][sym__concat] = actions(1083);
	v->a[1482][anon_sym_PIPE] = actions(1050);
	return (parse_table_1525(v));
}

/* EOF parse_table_304.c */
