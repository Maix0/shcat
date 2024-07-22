/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_440.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2200(t_small_parse_table_array *v)
{
	v->a[44000] = 1;
	v->a[44001] = sym_file_descriptor;
	v->a[44002] = actions(1460);
	v->a[44003] = 1;
	v->a[44004] = sym_variable_name;
	v->a[44005] = actions(1581);
	v->a[44006] = 1;
	v->a[44007] = anon_sym_RPAREN;
	v->a[44008] = actions(1454);
	v->a[44009] = 7;
	v->a[44010] = anon_sym_LT;
	v->a[44011] = anon_sym_GT;
	v->a[44012] = anon_sym_GT_GT;
	v->a[44013] = anon_sym_LT_AMP;
	v->a[44014] = anon_sym_GT_AMP;
	v->a[44015] = anon_sym_GT_PIPE;
	v->a[44016] = anon_sym_LT_GT;
	v->a[44017] = actions(1449);
	v->a[44018] = 8;
	v->a[44019] = anon_sym_PIPE;
	small_parse_table_2201(v);
}

void	small_parse_table_2201(t_small_parse_table_array *v)
{
	v->a[44020] = anon_sym_SEMI_SEMI;
	v->a[44021] = anon_sym_AMP_AMP;
	v->a[44022] = anon_sym_PIPE_PIPE;
	v->a[44023] = anon_sym_LT_LT;
	v->a[44024] = anon_sym_LT_LT_DASH;
	v->a[44025] = aux_sym_heredoc_redirect_token1;
	v->a[44026] = anon_sym_SEMI;
	v->a[44027] = actions(1447);
	v->a[44028] = 9;
	v->a[44029] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44030] = anon_sym_DOLLAR;
	v->a[44031] = anon_sym_DQUOTE;
	v->a[44032] = sym_raw_string;
	v->a[44033] = sym_number;
	v->a[44034] = anon_sym_DOLLAR_LBRACE;
	v->a[44035] = anon_sym_DOLLAR_LPAREN;
	v->a[44036] = anon_sym_BQUOTE;
	v->a[44037] = sym_word;
	v->a[44038] = 16;
	v->a[44039] = actions(501);
	small_parse_table_2202(v);
}

void	small_parse_table_2202(t_small_parse_table_array *v)
{
	v->a[44040] = 1;
	v->a[44041] = sym_comment;
	v->a[44042] = actions(1469);
	v->a[44043] = 1;
	v->a[44044] = anon_sym_LPAREN;
	v->a[44045] = actions(1471);
	v->a[44046] = 1;
	v->a[44047] = anon_sym_BANG;
	v->a[44048] = actions(1479);
	v->a[44049] = 1;
	v->a[44050] = anon_sym_TILDE;
	v->a[44051] = actions(1481);
	v->a[44052] = 1;
	v->a[44053] = anon_sym_DOLLAR;
	v->a[44054] = actions(1483);
	v->a[44055] = 1;
	v->a[44056] = anon_sym_DQUOTE;
	v->a[44057] = actions(1487);
	v->a[44058] = 1;
	v->a[44059] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2203(v);
}

void	small_parse_table_2203(t_small_parse_table_array *v)
{
	v->a[44060] = actions(1489);
	v->a[44061] = 1;
	v->a[44062] = anon_sym_DOLLAR_LPAREN;
	v->a[44063] = actions(1491);
	v->a[44064] = 1;
	v->a[44065] = anon_sym_BQUOTE;
	v->a[44066] = actions(1493);
	v->a[44067] = 1;
	v->a[44068] = sym_variable_name;
	v->a[44069] = actions(1584);
	v->a[44070] = 1;
	v->a[44071] = anon_sym_RPAREN_RPAREN;
	v->a[44072] = actions(1475);
	v->a[44073] = 2;
	v->a[44074] = anon_sym_PLUS_PLUS;
	v->a[44075] = anon_sym_DASH_DASH;
	v->a[44076] = actions(1477);
	v->a[44077] = 2;
	v->a[44078] = anon_sym_DASH2;
	v->a[44079] = anon_sym_PLUS2;
	small_parse_table_2204(v);
}

void	small_parse_table_2204(t_small_parse_table_array *v)
{
	v->a[44080] = actions(1485);
	v->a[44081] = 2;
	v->a[44082] = sym_number;
	v->a[44083] = aux_sym__simple_variable_name_token1;
	v->a[44084] = state(194);
	v->a[44085] = 3;
	v->a[44086] = sym_string;
	v->a[44087] = sym_simple_expansion;
	v->a[44088] = sym_expansion;
	v->a[44089] = state(287);
	v->a[44090] = 8;
	v->a[44091] = sym__arithmetic_expression;
	v->a[44092] = sym_arithmetic_literal;
	v->a[44093] = sym_arithmetic_binary_expression;
	v->a[44094] = sym_arithmetic_ternary_expression;
	v->a[44095] = sym_arithmetic_unary_expression;
	v->a[44096] = sym_arithmetic_postfix_expression;
	v->a[44097] = sym_arithmetic_parenthesized_expression;
	v->a[44098] = sym_command_substitution;
	v->a[44099] = 7;
	small_parse_table_2205(v);
}

/* EOF small_parse_table_440.c */
