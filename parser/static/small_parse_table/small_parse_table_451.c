/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_451.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2255(t_small_parse_table_array *v)
{
	v->a[45100] = anon_sym_GT_GT;
	v->a[45101] = anon_sym_LT_AMP;
	v->a[45102] = anon_sym_GT_AMP;
	v->a[45103] = anon_sym_GT_PIPE;
	v->a[45104] = anon_sym_LT_GT;
	v->a[45105] = anon_sym_LT_LT;
	v->a[45106] = anon_sym_LT_LT_DASH;
	v->a[45107] = aux_sym_heredoc_redirect_token1;
	v->a[45108] = anon_sym_AMP;
	v->a[45109] = anon_sym_BQUOTE;
	v->a[45110] = anon_sym_SEMI;
	v->a[45111] = 16;
	v->a[45112] = actions(680);
	v->a[45113] = 1;
	v->a[45114] = sym_comment;
	v->a[45115] = actions(1574);
	v->a[45116] = 1;
	v->a[45117] = anon_sym_LPAREN;
	v->a[45118] = actions(1576);
	v->a[45119] = 1;
	small_parse_table_2256(v);
}

void	small_parse_table_2256(t_small_parse_table_array *v)
{
	v->a[45120] = anon_sym_BANG;
	v->a[45121] = actions(1584);
	v->a[45122] = 1;
	v->a[45123] = anon_sym_TILDE;
	v->a[45124] = actions(1586);
	v->a[45125] = 1;
	v->a[45126] = anon_sym_DOLLAR;
	v->a[45127] = actions(1588);
	v->a[45128] = 1;
	v->a[45129] = anon_sym_DQUOTE;
	v->a[45130] = actions(1592);
	v->a[45131] = 1;
	v->a[45132] = anon_sym_DOLLAR_LBRACE;
	v->a[45133] = actions(1594);
	v->a[45134] = 1;
	v->a[45135] = anon_sym_DOLLAR_LPAREN;
	v->a[45136] = actions(1596);
	v->a[45137] = 1;
	v->a[45138] = anon_sym_BQUOTE;
	v->a[45139] = actions(1598);
	small_parse_table_2257(v);
}

void	small_parse_table_2257(t_small_parse_table_array *v)
{
	v->a[45140] = 1;
	v->a[45141] = sym_variable_name;
	v->a[45142] = actions(1625);
	v->a[45143] = 1;
	v->a[45144] = anon_sym_RPAREN_RPAREN;
	v->a[45145] = actions(1580);
	v->a[45146] = 2;
	v->a[45147] = anon_sym_PLUS_PLUS;
	v->a[45148] = anon_sym_DASH_DASH;
	v->a[45149] = actions(1582);
	v->a[45150] = 2;
	v->a[45151] = anon_sym_DASH2;
	v->a[45152] = anon_sym_PLUS2;
	v->a[45153] = actions(1590);
	v->a[45154] = 2;
	v->a[45155] = sym_number;
	v->a[45156] = aux_sym__simple_variable_name_token1;
	v->a[45157] = state(238);
	v->a[45158] = 3;
	v->a[45159] = sym_string;
	small_parse_table_2258(v);
}

void	small_parse_table_2258(t_small_parse_table_array *v)
{
	v->a[45160] = sym_simple_expansion;
	v->a[45161] = sym_expansion;
	v->a[45162] = state(260);
	v->a[45163] = 8;
	v->a[45164] = sym__arithmetic_expression;
	v->a[45165] = sym_arithmetic_literal;
	v->a[45166] = sym_arithmetic_binary_expression;
	v->a[45167] = sym_arithmetic_ternary_expression;
	v->a[45168] = sym_arithmetic_unary_expression;
	v->a[45169] = sym_arithmetic_postfix_expression;
	v->a[45170] = sym_arithmetic_parenthesized_expression;
	v->a[45171] = sym_command_substitution;
	v->a[45172] = 6;
	v->a[45173] = actions(3);
	v->a[45174] = 1;
	v->a[45175] = sym_comment;
	v->a[45176] = actions(1182);
	v->a[45177] = 1;
	v->a[45178] = aux_sym_concatenation_token1;
	v->a[45179] = actions(1627);
	small_parse_table_2259(v);
}

void	small_parse_table_2259(t_small_parse_table_array *v)
{
	v->a[45180] = 1;
	v->a[45181] = sym__concat;
	v->a[45182] = state(439);
	v->a[45183] = 1;
	v->a[45184] = aux_sym_concatenation_repeat1;
	v->a[45185] = actions(1043);
	v->a[45186] = 2;
	v->a[45187] = sym_file_descriptor;
	v->a[45188] = sym__bare_dollar;
	v->a[45189] = actions(1045);
	v->a[45190] = 22;
	v->a[45191] = anon_sym_PIPE;
	v->a[45192] = anon_sym_AMP_AMP;
	v->a[45193] = anon_sym_PIPE_PIPE;
	v->a[45194] = anon_sym_LT;
	v->a[45195] = anon_sym_GT;
	v->a[45196] = anon_sym_GT_GT;
	v->a[45197] = anon_sym_LT_AMP;
	v->a[45198] = anon_sym_GT_AMP;
	v->a[45199] = anon_sym_GT_PIPE;
	small_parse_table_2260(v);
}

/* EOF small_parse_table_451.c */
