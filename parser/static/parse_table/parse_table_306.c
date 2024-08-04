/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_306.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1530(t_parse_table_array *v)
{
	v->a[1498][sym__heredoc_body_beginning] = actions(2962);
	v->a[1499][anon_sym_PIPE] = actions(1054);
	v->a[1499][anon_sym_RPAREN] = actions(1054);
	v->a[1499][anon_sym_RBRACE] = actions(1054);
	v->a[1499][aux_sym_concatenation_token1] = actions(1054);
	v->a[1499][sym_comment] = actions(1436);
	v->a[1499][sym__concat] = actions(1054);
	v->a[1500][sym__heredoc_body] = state(1260);
	v->a[1500][sym_heredoc_body] = state(1662);
	v->a[1500][sym__simple_heredoc_body] = state(1260);
	v->a[1500][sym_comment] = actions(1436);
	v->a[1500][sym_simple_heredoc_body] = actions(2964);
	v->a[1500][sym__heredoc_body_beginning] = actions(2962);
	v->a[1501][sym__heredoc_body] = state(1410);
	v->a[1501][sym_heredoc_body] = state(1756);
	v->a[1501][sym__simple_heredoc_body] = state(1410);
	v->a[1501][sym_comment] = actions(1436);
	v->a[1501][sym_simple_heredoc_body] = actions(2975);
	v->a[1501][sym__heredoc_body_beginning] = actions(2962);
	v->a[1502][sym__heredoc_body] = state(1435);
	return (parse_table_1531(v));
}

void	parse_table_1531(t_parse_table_array *v)
{
	v->a[1502][sym_heredoc_body] = state(1756);
	v->a[1502][sym__simple_heredoc_body] = state(1436);
	v->a[1502][sym_comment] = actions(1436);
	v->a[1502][sym_simple_heredoc_body] = actions(2975);
	v->a[1502][sym__heredoc_body_beginning] = actions(2962);
	v->a[1503][sym_elif_clause] = state(1503);
	v->a[1503][aux_sym_if_statement_repeat1] = state(1503);
	v->a[1503][anon_sym_fi] = actions(2977);
	v->a[1503][anon_sym_elif] = actions(2979);
	v->a[1503][anon_sym_else] = actions(2977);
	v->a[1503][sym_comment] = actions(1436);
	v->a[1504][sym__heredoc_body] = state(1427);
	v->a[1504][sym_heredoc_body] = state(1756);
	v->a[1504][sym__simple_heredoc_body] = state(1427);
	v->a[1504][sym_comment] = actions(1436);
	v->a[1504][sym_simple_heredoc_body] = actions(2975);
	v->a[1504][sym__heredoc_body_beginning] = actions(2962);
	v->a[1505][aux_sym_concatenation_repeat1] = state(1492);
	v->a[1505][anon_sym_PIPE] = actions(2982);
	v->a[1505][anon_sym_RPAREN] = actions(2982);
	return (parse_table_1532(v));
}

void	parse_table_1532(t_parse_table_array *v)
{
	v->a[1505][aux_sym_concatenation_token1] = actions(2946);
	v->a[1505][sym_comment] = actions(1436);
	v->a[1505][sym__concat] = actions(2946);
	v->a[1506][sym__heredoc_body] = state(1420);
	v->a[1506][sym_heredoc_body] = state(1756);
	v->a[1506][sym__simple_heredoc_body] = state(1420);
	v->a[1506][sym_comment] = actions(1436);
	v->a[1506][sym_simple_heredoc_body] = actions(2975);
	v->a[1506][sym__heredoc_body_beginning] = actions(2962);
	v->a[1507][sym_terminator] = state(1571);
	v->a[1507][anon_sym_in] = actions(2984);
	v->a[1507][anon_sym_SEMI_SEMI] = actions(1348);
	v->a[1507][aux_sym_heredoc_redirect_token1] = actions(2889);
	v->a[1507][sym_comment] = actions(3);
	v->a[1507][anon_sym_SEMI] = actions(1348);
	v->a[1508][sym__heredoc_body] = state(1421);
	v->a[1508][sym_heredoc_body] = state(1756);
	v->a[1508][sym__simple_heredoc_body] = state(1424);
	v->a[1508][sym_comment] = actions(1436);
	v->a[1508][sym_simple_heredoc_body] = actions(2975);
	return (parse_table_1533(v));
}

void	parse_table_1533(t_parse_table_array *v)
{
	v->a[1508][sym__heredoc_body_beginning] = actions(2962);
	v->a[1509][sym__heredoc_body] = state(1425);
	v->a[1509][sym_heredoc_body] = state(1756);
	v->a[1509][sym__simple_heredoc_body] = state(1426);
	v->a[1509][sym_comment] = actions(1436);
	v->a[1509][sym_simple_heredoc_body] = actions(2975);
	v->a[1509][sym__heredoc_body_beginning] = actions(2962);
	v->a[1510][sym_terminator] = state(1599);
	v->a[1510][anon_sym_in] = actions(2887);
	v->a[1510][anon_sym_SEMI_SEMI] = actions(1348);
	v->a[1510][aux_sym_heredoc_redirect_token1] = actions(2889);
	v->a[1510][sym_comment] = actions(3);
	v->a[1510][anon_sym_SEMI] = actions(1348);
	v->a[1511][sym__heredoc_body] = state(1261);
	v->a[1511][sym_heredoc_body] = state(1662);
	v->a[1511][sym__simple_heredoc_body] = state(1262);
	v->a[1511][sym_comment] = actions(1436);
	v->a[1511][sym_simple_heredoc_body] = actions(2964);
	v->a[1511][sym__heredoc_body_beginning] = actions(2962);
	v->a[1512][sym__heredoc_body] = state(1007);
	return (parse_table_1534(v));
}

void	parse_table_1534(t_parse_table_array *v)
{
	v->a[1512][sym_heredoc_body] = state(1664);
	v->a[1512][sym__simple_heredoc_body] = state(1009);
	v->a[1512][sym_comment] = actions(1436);
	v->a[1512][sym_simple_heredoc_body] = actions(2960);
	v->a[1512][sym__heredoc_body_beginning] = actions(2962);
	v->a[1513][sym__heredoc_body] = state(1002);
	v->a[1513][sym_heredoc_body] = state(1664);
	v->a[1513][sym__simple_heredoc_body] = state(1002);
	v->a[1513][sym_comment] = actions(1436);
	v->a[1513][sym_simple_heredoc_body] = actions(2960);
	v->a[1513][sym__heredoc_body_beginning] = actions(2962);
	v->a[1514][sym__heredoc_body] = state(1018);
	v->a[1514][sym_heredoc_body] = state(1664);
	v->a[1514][sym__simple_heredoc_body] = state(1062);
	v->a[1514][sym_comment] = actions(1436);
	v->a[1514][sym_simple_heredoc_body] = actions(2960);
	v->a[1514][sym__heredoc_body_beginning] = actions(2962);
	v->a[1515][aux_sym__concatenation_in_expansion_repeat1] = state(1517);
	v->a[1515][anon_sym_RBRACE] = actions(2986);
	v->a[1515][aux_sym_concatenation_token1] = actions(2988);
	return (parse_table_1535(v));
}

/* EOF parse_table_306.c */
