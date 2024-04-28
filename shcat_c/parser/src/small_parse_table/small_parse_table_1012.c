/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1012.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5060(t_small_parse_table_array *v)
{
	v->a[101200] = 26;
	v->a[101201] = actions(71);
	v->a[101202] = 1;
	v->a[101203] = sym_comment;
	v->a[101204] = actions(1127);
	v->a[101205] = 1;
	v->a[101206] = sym_word;
	v->a[101207] = actions(1131);
	v->a[101208] = 1;
	v->a[101209] = anon_sym_LPAREN;
	v->a[101210] = actions(1133);
	v->a[101211] = 1;
	v->a[101212] = anon_sym_BANG;
	v->a[101213] = actions(1139);
	v->a[101214] = 1;
	v->a[101215] = anon_sym_TILDE;
	v->a[101216] = actions(1141);
	v->a[101217] = 1;
	v->a[101218] = anon_sym_DOLLAR_LBRACK;
	v->a[101219] = actions(1145);
	small_parse_table_5061(v);
}

void	small_parse_table_5061(t_small_parse_table_array *v)
{
	v->a[101220] = 1;
	v->a[101221] = anon_sym_DOLLAR;
	v->a[101222] = actions(1147);
	v->a[101223] = 1;
	v->a[101224] = sym__special_character;
	v->a[101225] = actions(1149);
	v->a[101226] = 1;
	v->a[101227] = anon_sym_DQUOTE;
	v->a[101228] = actions(1153);
	v->a[101229] = 1;
	v->a[101230] = aux_sym_number_token1;
	v->a[101231] = actions(1155);
	v->a[101232] = 1;
	v->a[101233] = aux_sym_number_token2;
	v->a[101234] = actions(1157);
	v->a[101235] = 1;
	v->a[101236] = anon_sym_DOLLAR_LBRACE;
	v->a[101237] = actions(1159);
	v->a[101238] = 1;
	v->a[101239] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_5062(v);
}

void	small_parse_table_5062(t_small_parse_table_array *v)
{
	v->a[101240] = actions(1163);
	v->a[101241] = 1;
	v->a[101242] = anon_sym_DOLLAR_BQUOTE;
	v->a[101243] = actions(1167);
	v->a[101244] = 1;
	v->a[101245] = sym_test_operator;
	v->a[101246] = actions(1169);
	v->a[101247] = 1;
	v->a[101248] = sym__brace_start;
	v->a[101249] = actions(3060);
	v->a[101250] = 1;
	v->a[101251] = anon_sym_BQUOTE;
	v->a[101252] = state(2484);
	v->a[101253] = 1;
	v->a[101254] = aux_sym__literal_repeat1;
	v->a[101255] = state(3022);
	v->a[101256] = 1;
	v->a[101257] = sym__expression;
	v->a[101258] = actions(1129);
	v->a[101259] = 2;
	small_parse_table_5063(v);
}

void	small_parse_table_5063(t_small_parse_table_array *v)
{
	v->a[101260] = anon_sym_LPAREN_LPAREN;
	v->a[101261] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[101262] = actions(1135);
	v->a[101263] = 2;
	v->a[101264] = anon_sym_PLUS_PLUS2;
	v->a[101265] = anon_sym_DASH_DASH2;
	v->a[101266] = actions(1137);
	v->a[101267] = 2;
	v->a[101268] = anon_sym_DASH2;
	v->a[101269] = anon_sym_PLUS2;
	v->a[101270] = actions(1151);
	v->a[101271] = 2;
	v->a[101272] = sym_raw_string;
	v->a[101273] = sym_ansi_c_string;
	v->a[101274] = actions(1165);
	v->a[101275] = 2;
	v->a[101276] = anon_sym_LT_LPAREN;
	v->a[101277] = anon_sym_GT_LPAREN;
	v->a[101278] = state(2594);
	v->a[101279] = 6;
	small_parse_table_5064(v);
}

void	small_parse_table_5064(t_small_parse_table_array *v)
{
	v->a[101280] = sym_binary_expression;
	v->a[101281] = sym_ternary_expression;
	v->a[101282] = sym_unary_expression;
	v->a[101283] = sym_postfix_expression;
	v->a[101284] = sym_parenthesized_expression;
	v->a[101285] = sym_concatenation;
	v->a[101286] = state(2573);
	v->a[101287] = 9;
	v->a[101288] = sym_arithmetic_expansion;
	v->a[101289] = sym_brace_expression;
	v->a[101290] = sym_string;
	v->a[101291] = sym_translated_string;
	v->a[101292] = sym_number;
	v->a[101293] = sym_simple_expansion;
	v->a[101294] = sym_expansion;
	v->a[101295] = sym_command_substitution;
	v->a[101296] = sym_process_substitution;
	v->a[101297] = 5;
	v->a[101298] = actions(3);
	v->a[101299] = 1;
	small_parse_table_5065(v);
}

/* EOF small_parse_table_1012.c */
