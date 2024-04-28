/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_952.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4760(t_small_parse_table_array *v)
{
	v->a[95200] = 1;
	v->a[95201] = anon_sym_BANG;
	v->a[95202] = actions(1139);
	v->a[95203] = 1;
	v->a[95204] = anon_sym_TILDE;
	v->a[95205] = actions(1141);
	v->a[95206] = 1;
	v->a[95207] = anon_sym_DOLLAR_LBRACK;
	v->a[95208] = actions(1145);
	v->a[95209] = 1;
	v->a[95210] = anon_sym_DOLLAR;
	v->a[95211] = actions(1147);
	v->a[95212] = 1;
	v->a[95213] = sym__special_character;
	v->a[95214] = actions(1149);
	v->a[95215] = 1;
	v->a[95216] = anon_sym_DQUOTE;
	v->a[95217] = actions(1153);
	v->a[95218] = 1;
	v->a[95219] = aux_sym_number_token1;
	small_parse_table_4761(v);
}

void	small_parse_table_4761(t_small_parse_table_array *v)
{
	v->a[95220] = actions(1155);
	v->a[95221] = 1;
	v->a[95222] = aux_sym_number_token2;
	v->a[95223] = actions(1157);
	v->a[95224] = 1;
	v->a[95225] = anon_sym_DOLLAR_LBRACE;
	v->a[95226] = actions(1159);
	v->a[95227] = 1;
	v->a[95228] = anon_sym_DOLLAR_LPAREN;
	v->a[95229] = actions(1163);
	v->a[95230] = 1;
	v->a[95231] = anon_sym_DOLLAR_BQUOTE;
	v->a[95232] = actions(1167);
	v->a[95233] = 1;
	v->a[95234] = sym_test_operator;
	v->a[95235] = actions(1169);
	v->a[95236] = 1;
	v->a[95237] = sym__brace_start;
	v->a[95238] = actions(3060);
	v->a[95239] = 1;
	small_parse_table_4762(v);
}

void	small_parse_table_4762(t_small_parse_table_array *v)
{
	v->a[95240] = anon_sym_BQUOTE;
	v->a[95241] = state(2484);
	v->a[95242] = 1;
	v->a[95243] = aux_sym__literal_repeat1;
	v->a[95244] = state(2969);
	v->a[95245] = 1;
	v->a[95246] = sym__expression;
	v->a[95247] = actions(1129);
	v->a[95248] = 2;
	v->a[95249] = anon_sym_LPAREN_LPAREN;
	v->a[95250] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95251] = actions(1135);
	v->a[95252] = 2;
	v->a[95253] = anon_sym_PLUS_PLUS2;
	v->a[95254] = anon_sym_DASH_DASH2;
	v->a[95255] = actions(1137);
	v->a[95256] = 2;
	v->a[95257] = anon_sym_DASH2;
	v->a[95258] = anon_sym_PLUS2;
	v->a[95259] = actions(1151);
	small_parse_table_4763(v);
}

void	small_parse_table_4763(t_small_parse_table_array *v)
{
	v->a[95260] = 2;
	v->a[95261] = sym_raw_string;
	v->a[95262] = sym_ansi_c_string;
	v->a[95263] = actions(1165);
	v->a[95264] = 2;
	v->a[95265] = anon_sym_LT_LPAREN;
	v->a[95266] = anon_sym_GT_LPAREN;
	v->a[95267] = state(2594);
	v->a[95268] = 6;
	v->a[95269] = sym_binary_expression;
	v->a[95270] = sym_ternary_expression;
	v->a[95271] = sym_unary_expression;
	v->a[95272] = sym_postfix_expression;
	v->a[95273] = sym_parenthesized_expression;
	v->a[95274] = sym_concatenation;
	v->a[95275] = state(2573);
	v->a[95276] = 9;
	v->a[95277] = sym_arithmetic_expansion;
	v->a[95278] = sym_brace_expression;
	v->a[95279] = sym_string;
	small_parse_table_4764(v);
}

void	small_parse_table_4764(t_small_parse_table_array *v)
{
	v->a[95280] = sym_translated_string;
	v->a[95281] = sym_number;
	v->a[95282] = sym_simple_expansion;
	v->a[95283] = sym_expansion;
	v->a[95284] = sym_command_substitution;
	v->a[95285] = sym_process_substitution;
	v->a[95286] = 26;
	v->a[95287] = actions(71);
	v->a[95288] = 1;
	v->a[95289] = sym_comment;
	v->a[95290] = actions(1127);
	v->a[95291] = 1;
	v->a[95292] = sym_word;
	v->a[95293] = actions(1131);
	v->a[95294] = 1;
	v->a[95295] = anon_sym_LPAREN;
	v->a[95296] = actions(1133);
	v->a[95297] = 1;
	v->a[95298] = anon_sym_BANG;
	v->a[95299] = actions(1139);
	small_parse_table_4765(v);
}

/* EOF small_parse_table_952.c */
