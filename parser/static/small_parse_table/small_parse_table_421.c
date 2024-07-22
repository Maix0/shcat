/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_421.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2105(t_small_parse_table_array *v)
{
	v->a[42100] = anon_sym_LT_LT;
	v->a[42101] = anon_sym_LT_LT_DASH;
	v->a[42102] = aux_sym_heredoc_redirect_token1;
	v->a[42103] = anon_sym_SEMI;
	v->a[42104] = 16;
	v->a[42105] = actions(501);
	v->a[42106] = 1;
	v->a[42107] = sym_comment;
	v->a[42108] = actions(1469);
	v->a[42109] = 1;
	v->a[42110] = anon_sym_LPAREN;
	v->a[42111] = actions(1471);
	v->a[42112] = 1;
	v->a[42113] = anon_sym_BANG;
	v->a[42114] = actions(1473);
	v->a[42115] = 1;
	v->a[42116] = anon_sym_RPAREN_RPAREN;
	v->a[42117] = actions(1479);
	v->a[42118] = 1;
	v->a[42119] = anon_sym_TILDE;
	small_parse_table_2106(v);
}

void	small_parse_table_2106(t_small_parse_table_array *v)
{
	v->a[42120] = actions(1481);
	v->a[42121] = 1;
	v->a[42122] = anon_sym_DOLLAR;
	v->a[42123] = actions(1483);
	v->a[42124] = 1;
	v->a[42125] = anon_sym_DQUOTE;
	v->a[42126] = actions(1487);
	v->a[42127] = 1;
	v->a[42128] = anon_sym_DOLLAR_LBRACE;
	v->a[42129] = actions(1489);
	v->a[42130] = 1;
	v->a[42131] = anon_sym_DOLLAR_LPAREN;
	v->a[42132] = actions(1491);
	v->a[42133] = 1;
	v->a[42134] = anon_sym_BQUOTE;
	v->a[42135] = actions(1493);
	v->a[42136] = 1;
	v->a[42137] = sym_variable_name;
	v->a[42138] = actions(1475);
	v->a[42139] = 2;
	small_parse_table_2107(v);
}

void	small_parse_table_2107(t_small_parse_table_array *v)
{
	v->a[42140] = anon_sym_PLUS_PLUS;
	v->a[42141] = anon_sym_DASH_DASH;
	v->a[42142] = actions(1477);
	v->a[42143] = 2;
	v->a[42144] = anon_sym_DASH2;
	v->a[42145] = anon_sym_PLUS2;
	v->a[42146] = actions(1485);
	v->a[42147] = 2;
	v->a[42148] = sym_number;
	v->a[42149] = aux_sym__simple_variable_name_token1;
	v->a[42150] = state(194);
	v->a[42151] = 3;
	v->a[42152] = sym_string;
	v->a[42153] = sym_simple_expansion;
	v->a[42154] = sym_expansion;
	v->a[42155] = state(313);
	v->a[42156] = 8;
	v->a[42157] = sym__arithmetic_expression;
	v->a[42158] = sym_arithmetic_literal;
	v->a[42159] = sym_arithmetic_binary_expression;
	small_parse_table_2108(v);
}

void	small_parse_table_2108(t_small_parse_table_array *v)
{
	v->a[42160] = sym_arithmetic_ternary_expression;
	v->a[42161] = sym_arithmetic_unary_expression;
	v->a[42162] = sym_arithmetic_postfix_expression;
	v->a[42163] = sym_arithmetic_parenthesized_expression;
	v->a[42164] = sym_command_substitution;
	v->a[42165] = 7;
	v->a[42166] = actions(3);
	v->a[42167] = 1;
	v->a[42168] = sym_comment;
	v->a[42169] = actions(1457);
	v->a[42170] = 1;
	v->a[42171] = sym_file_descriptor;
	v->a[42172] = actions(1460);
	v->a[42173] = 1;
	v->a[42174] = sym_variable_name;
	v->a[42175] = actions(1495);
	v->a[42176] = 1;
	v->a[42177] = anon_sym_RPAREN;
	v->a[42178] = actions(1454);
	v->a[42179] = 7;
	small_parse_table_2109(v);
}

void	small_parse_table_2109(t_small_parse_table_array *v)
{
	v->a[42180] = anon_sym_LT;
	v->a[42181] = anon_sym_GT;
	v->a[42182] = anon_sym_GT_GT;
	v->a[42183] = anon_sym_LT_AMP;
	v->a[42184] = anon_sym_GT_AMP;
	v->a[42185] = anon_sym_GT_PIPE;
	v->a[42186] = anon_sym_LT_GT;
	v->a[42187] = actions(1449);
	v->a[42188] = 8;
	v->a[42189] = anon_sym_PIPE;
	v->a[42190] = anon_sym_SEMI_SEMI;
	v->a[42191] = anon_sym_AMP_AMP;
	v->a[42192] = anon_sym_PIPE_PIPE;
	v->a[42193] = anon_sym_LT_LT;
	v->a[42194] = anon_sym_LT_LT_DASH;
	v->a[42195] = aux_sym_heredoc_redirect_token1;
	v->a[42196] = anon_sym_SEMI;
	v->a[42197] = actions(1447);
	v->a[42198] = 9;
	v->a[42199] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2110(v);
}

/* EOF small_parse_table_421.c */
