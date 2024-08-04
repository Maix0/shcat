/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_303.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1515(t_parse_table_array *v)
{
	v->a[1452][sym_heredoc_content] = actions(1050);
	v->a[1452][sym_heredoc_end] = actions(1050);
	v->a[1453][anon_sym_in] = actions(1106);
	v->a[1453][anon_sym_SEMI_SEMI] = actions(1106);
	v->a[1453][aux_sym_heredoc_redirect_token1] = actions(1108);
	v->a[1453][aux_sym_concatenation_token1] = actions(1106);
	v->a[1453][sym_comment] = actions(3);
	v->a[1453][anon_sym_SEMI] = actions(1106);
	v->a[1453][sym__concat] = actions(1108);
	v->a[1454][sym_elif_clause] = state(1503);
	v->a[1454][sym_else_clause] = state(1699);
	v->a[1454][aux_sym_if_statement_repeat1] = state(1503);
	v->a[1454][anon_sym_fi] = actions(2928);
	v->a[1454][anon_sym_elif] = actions(2930);
	v->a[1454][anon_sym_else] = actions(2932);
	v->a[1454][sym_comment] = actions(1436);
	v->a[1455][anon_sym_RPAREN] = actions(2934);
	v->a[1455][anon_sym_RBRACE] = actions(2934);
	v->a[1455][anon_sym_DQUOTE] = actions(2934);
	v->a[1455][sym_raw_string] = actions(2934);
	return (parse_table_1516(v));
}

void	parse_table_1516(t_parse_table_array *v)
{
	v->a[1455][aux_sym__expansion_regex_token1] = actions(2936);
	v->a[1455][sym_comment] = actions(3);
	v->a[1455][sym_regex] = actions(2936);
	v->a[1456][sym_elif_clause] = state(1503);
	v->a[1456][sym_else_clause] = state(1663);
	v->a[1456][aux_sym_if_statement_repeat1] = state(1503);
	v->a[1456][anon_sym_fi] = actions(2938);
	v->a[1456][anon_sym_elif] = actions(2930);
	v->a[1456][anon_sym_else] = actions(2932);
	v->a[1456][sym_comment] = actions(1436);
	v->a[1457][sym_elif_clause] = state(1503);
	v->a[1457][sym_else_clause] = state(1639);
	v->a[1457][aux_sym_if_statement_repeat1] = state(1503);
	v->a[1457][anon_sym_fi] = actions(2940);
	v->a[1457][anon_sym_elif] = actions(2930);
	v->a[1457][anon_sym_else] = actions(2932);
	v->a[1457][sym_comment] = actions(1436);
	v->a[1458][anon_sym_in] = actions(1048);
	v->a[1458][anon_sym_SEMI_SEMI] = actions(1048);
	v->a[1458][aux_sym_heredoc_redirect_token1] = actions(1046);
	return (parse_table_1517(v));
}

void	parse_table_1517(t_parse_table_array *v)
{
	v->a[1458][aux_sym_concatenation_token1] = actions(1048);
	v->a[1458][sym_comment] = actions(3);
	v->a[1458][anon_sym_SEMI] = actions(1048);
	v->a[1458][sym__concat] = actions(1046);
	v->a[1459][anon_sym_in] = actions(1056);
	v->a[1459][anon_sym_SEMI_SEMI] = actions(1056);
	v->a[1459][aux_sym_heredoc_redirect_token1] = actions(1054);
	v->a[1459][aux_sym_concatenation_token1] = actions(1056);
	v->a[1459][sym_comment] = actions(3);
	v->a[1459][anon_sym_SEMI] = actions(1056);
	v->a[1459][sym__concat] = actions(1054);
	v->a[1460][aux_sym__case_item_last_repeat1] = state(1523);
	v->a[1460][aux_sym_concatenation_repeat1] = state(1492);
	v->a[1460][anon_sym_PIPE] = actions(2942);
	v->a[1460][anon_sym_RPAREN] = actions(2944);
	v->a[1460][aux_sym_concatenation_token1] = actions(2946);
	v->a[1460][sym_comment] = actions(1436);
	v->a[1460][sym__concat] = actions(2946);
	v->a[1461][anon_sym_RPAREN] = actions(1124);
	v->a[1461][anon_sym_RBRACE] = actions(1124);
	return (parse_table_1518(v));
}

void	parse_table_1518(t_parse_table_array *v)
{
	v->a[1461][anon_sym_DQUOTE] = actions(1124);
	v->a[1461][sym_raw_string] = actions(1124);
	v->a[1461][aux_sym__expansion_regex_token1] = actions(1126);
	v->a[1461][sym_comment] = actions(3);
	v->a[1461][sym_regex] = actions(1126);
	v->a[1462][aux_sym__case_item_last_repeat1] = state(1541);
	v->a[1462][aux_sym_concatenation_repeat1] = state(1492);
	v->a[1462][anon_sym_PIPE] = actions(2942);
	v->a[1462][anon_sym_RPAREN] = actions(2948);
	v->a[1462][aux_sym_concatenation_token1] = actions(2946);
	v->a[1462][sym_comment] = actions(1436);
	v->a[1462][sym__concat] = actions(2946);
	v->a[1463][aux_sym__case_item_last_repeat1] = state(1539);
	v->a[1463][aux_sym_concatenation_repeat1] = state(1492);
	v->a[1463][anon_sym_PIPE] = actions(2942);
	v->a[1463][anon_sym_RPAREN] = actions(2950);
	v->a[1463][aux_sym_concatenation_token1] = actions(2946);
	v->a[1463][sym_comment] = actions(1436);
	v->a[1463][sym__concat] = actions(2946);
	v->a[1464][sym_elif_clause] = state(1503);
	return (parse_table_1519(v));
}

void	parse_table_1519(t_parse_table_array *v)
{
	v->a[1464][sym_else_clause] = state(1617);
	v->a[1464][aux_sym_if_statement_repeat1] = state(1503);
	v->a[1464][anon_sym_fi] = actions(2952);
	v->a[1464][anon_sym_elif] = actions(2930);
	v->a[1464][anon_sym_else] = actions(2932);
	v->a[1464][sym_comment] = actions(1436);
	v->a[1465][anon_sym_in] = actions(1091);
	v->a[1465][anon_sym_SEMI_SEMI] = actions(1091);
	v->a[1465][aux_sym_heredoc_redirect_token1] = actions(1093);
	v->a[1465][aux_sym_concatenation_token1] = actions(1091);
	v->a[1465][sym_comment] = actions(3);
	v->a[1465][anon_sym_SEMI] = actions(1091);
	v->a[1465][sym__concat] = actions(1093);
	v->a[1466][anon_sym_DOLLAR] = actions(1052);
	v->a[1466][anon_sym_DOLLAR_LBRACE] = actions(1050);
	v->a[1466][anon_sym_DOLLAR_LPAREN] = actions(1050);
	v->a[1466][anon_sym_BQUOTE] = actions(1050);
	v->a[1466][sym_comment] = actions(1436);
	v->a[1466][sym_heredoc_content] = actions(1050);
	v->a[1466][sym_heredoc_end] = actions(1050);
	return (parse_table_1520(v));
}

/* EOF parse_table_303.c */
