/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_460.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2300(t_small_parse_table_array *v)
{
	v->a[46000] = anon_sym_DQUOTE;
	v->a[46001] = sym_raw_string;
	v->a[46002] = sym_number;
	v->a[46003] = anon_sym_DOLLAR_LBRACE;
	v->a[46004] = anon_sym_DOLLAR_LPAREN;
	v->a[46005] = anon_sym_BQUOTE;
	v->a[46006] = sym_word;
	v->a[46007] = 16;
	v->a[46008] = actions(501);
	v->a[46009] = 1;
	v->a[46010] = sym_comment;
	v->a[46011] = actions(1469);
	v->a[46012] = 1;
	v->a[46013] = anon_sym_LPAREN;
	v->a[46014] = actions(1471);
	v->a[46015] = 1;
	v->a[46016] = anon_sym_BANG;
	v->a[46017] = actions(1479);
	v->a[46018] = 1;
	v->a[46019] = anon_sym_TILDE;
	small_parse_table_2301(v);
}

void	small_parse_table_2301(t_small_parse_table_array *v)
{
	v->a[46020] = actions(1481);
	v->a[46021] = 1;
	v->a[46022] = anon_sym_DOLLAR;
	v->a[46023] = actions(1483);
	v->a[46024] = 1;
	v->a[46025] = anon_sym_DQUOTE;
	v->a[46026] = actions(1487);
	v->a[46027] = 1;
	v->a[46028] = anon_sym_DOLLAR_LBRACE;
	v->a[46029] = actions(1489);
	v->a[46030] = 1;
	v->a[46031] = anon_sym_DOLLAR_LPAREN;
	v->a[46032] = actions(1491);
	v->a[46033] = 1;
	v->a[46034] = anon_sym_BQUOTE;
	v->a[46035] = actions(1493);
	v->a[46036] = 1;
	v->a[46037] = sym_variable_name;
	v->a[46038] = actions(1665);
	v->a[46039] = 1;
	small_parse_table_2302(v);
}

void	small_parse_table_2302(t_small_parse_table_array *v)
{
	v->a[46040] = anon_sym_RPAREN_RPAREN;
	v->a[46041] = actions(1475);
	v->a[46042] = 2;
	v->a[46043] = anon_sym_PLUS_PLUS;
	v->a[46044] = anon_sym_DASH_DASH;
	v->a[46045] = actions(1477);
	v->a[46046] = 2;
	v->a[46047] = anon_sym_DASH2;
	v->a[46048] = anon_sym_PLUS2;
	v->a[46049] = actions(1485);
	v->a[46050] = 2;
	v->a[46051] = sym_number;
	v->a[46052] = aux_sym__simple_variable_name_token1;
	v->a[46053] = state(194);
	v->a[46054] = 3;
	v->a[46055] = sym_string;
	v->a[46056] = sym_simple_expansion;
	v->a[46057] = sym_expansion;
	v->a[46058] = state(318);
	v->a[46059] = 8;
	small_parse_table_2303(v);
}

void	small_parse_table_2303(t_small_parse_table_array *v)
{
	v->a[46060] = sym__arithmetic_expression;
	v->a[46061] = sym_arithmetic_literal;
	v->a[46062] = sym_arithmetic_binary_expression;
	v->a[46063] = sym_arithmetic_ternary_expression;
	v->a[46064] = sym_arithmetic_unary_expression;
	v->a[46065] = sym_arithmetic_postfix_expression;
	v->a[46066] = sym_arithmetic_parenthesized_expression;
	v->a[46067] = sym_command_substitution;
	v->a[46068] = 7;
	v->a[46069] = actions(3);
	v->a[46070] = 1;
	v->a[46071] = sym_comment;
	v->a[46072] = actions(1457);
	v->a[46073] = 1;
	v->a[46074] = sym_file_descriptor;
	v->a[46075] = actions(1460);
	v->a[46076] = 1;
	v->a[46077] = sym_variable_name;
	v->a[46078] = actions(1667);
	v->a[46079] = 1;
	small_parse_table_2304(v);
}

void	small_parse_table_2304(t_small_parse_table_array *v)
{
	v->a[46080] = anon_sym_RPAREN;
	v->a[46081] = actions(1454);
	v->a[46082] = 7;
	v->a[46083] = anon_sym_LT;
	v->a[46084] = anon_sym_GT;
	v->a[46085] = anon_sym_GT_GT;
	v->a[46086] = anon_sym_LT_AMP;
	v->a[46087] = anon_sym_GT_AMP;
	v->a[46088] = anon_sym_GT_PIPE;
	v->a[46089] = anon_sym_LT_GT;
	v->a[46090] = actions(1449);
	v->a[46091] = 8;
	v->a[46092] = anon_sym_PIPE;
	v->a[46093] = anon_sym_SEMI_SEMI;
	v->a[46094] = anon_sym_AMP_AMP;
	v->a[46095] = anon_sym_PIPE_PIPE;
	v->a[46096] = anon_sym_LT_LT;
	v->a[46097] = anon_sym_LT_LT_DASH;
	v->a[46098] = aux_sym_heredoc_redirect_token1;
	v->a[46099] = anon_sym_SEMI;
	small_parse_table_2305(v);
}

/* EOF small_parse_table_460.c */
