/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1002.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5010(t_small_parse_table_array *v)
{
	v->a[100200] = 1;
	v->a[100201] = sym_test_operator;
	v->a[100202] = actions(3060);
	v->a[100203] = 1;
	v->a[100204] = anon_sym_BQUOTE;
	v->a[100205] = state(2484);
	v->a[100206] = 1;
	v->a[100207] = aux_sym__literal_repeat1;
	v->a[100208] = state(3330);
	v->a[100209] = 1;
	v->a[100210] = sym__expression;
	v->a[100211] = actions(1129);
	v->a[100212] = 2;
	v->a[100213] = anon_sym_LPAREN_LPAREN;
	v->a[100214] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[100215] = actions(1165);
	v->a[100216] = 2;
	v->a[100217] = anon_sym_LT_LPAREN;
	v->a[100218] = anon_sym_GT_LPAREN;
	v->a[100219] = actions(1215);
	small_parse_table_5011(v);
}

void	small_parse_table_5011(t_small_parse_table_array *v)
{
	v->a[100220] = 2;
	v->a[100221] = anon_sym_PLUS_PLUS2;
	v->a[100222] = anon_sym_DASH_DASH2;
	v->a[100223] = actions(1217);
	v->a[100224] = 2;
	v->a[100225] = anon_sym_DASH2;
	v->a[100226] = anon_sym_PLUS2;
	v->a[100227] = actions(1223);
	v->a[100228] = 2;
	v->a[100229] = sym_raw_string;
	v->a[100230] = sym_ansi_c_string;
	v->a[100231] = state(2594);
	v->a[100232] = 6;
	v->a[100233] = sym_binary_expression;
	v->a[100234] = sym_ternary_expression;
	v->a[100235] = sym_unary_expression;
	v->a[100236] = sym_postfix_expression;
	v->a[100237] = sym_parenthesized_expression;
	v->a[100238] = sym_concatenation;
	v->a[100239] = state(2588);
	small_parse_table_5012(v);
}

void	small_parse_table_5012(t_small_parse_table_array *v)
{
	v->a[100240] = 9;
	v->a[100241] = sym_arithmetic_expansion;
	v->a[100242] = sym_brace_expression;
	v->a[100243] = sym_string;
	v->a[100244] = sym_translated_string;
	v->a[100245] = sym_number;
	v->a[100246] = sym_simple_expansion;
	v->a[100247] = sym_expansion;
	v->a[100248] = sym_command_substitution;
	v->a[100249] = sym_process_substitution;
	v->a[100250] = 26;
	v->a[100251] = actions(71);
	v->a[100252] = 1;
	v->a[100253] = sym_comment;
	v->a[100254] = actions(1131);
	v->a[100255] = 1;
	v->a[100256] = anon_sym_LPAREN;
	v->a[100257] = actions(1141);
	v->a[100258] = 1;
	v->a[100259] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_5013(v);
}

void	small_parse_table_5013(t_small_parse_table_array *v)
{
	v->a[100260] = actions(1145);
	v->a[100261] = 1;
	v->a[100262] = anon_sym_DOLLAR;
	v->a[100263] = actions(1149);
	v->a[100264] = 1;
	v->a[100265] = anon_sym_DQUOTE;
	v->a[100266] = actions(1153);
	v->a[100267] = 1;
	v->a[100268] = aux_sym_number_token1;
	v->a[100269] = actions(1155);
	v->a[100270] = 1;
	v->a[100271] = aux_sym_number_token2;
	v->a[100272] = actions(1157);
	v->a[100273] = 1;
	v->a[100274] = anon_sym_DOLLAR_LBRACE;
	v->a[100275] = actions(1159);
	v->a[100276] = 1;
	v->a[100277] = anon_sym_DOLLAR_LPAREN;
	v->a[100278] = actions(1163);
	v->a[100279] = 1;
	small_parse_table_5014(v);
}

void	small_parse_table_5014(t_small_parse_table_array *v)
{
	v->a[100280] = anon_sym_DOLLAR_BQUOTE;
	v->a[100281] = actions(1169);
	v->a[100282] = 1;
	v->a[100283] = sym__brace_start;
	v->a[100284] = actions(1211);
	v->a[100285] = 1;
	v->a[100286] = sym_word;
	v->a[100287] = actions(1213);
	v->a[100288] = 1;
	v->a[100289] = anon_sym_BANG;
	v->a[100290] = actions(1219);
	v->a[100291] = 1;
	v->a[100292] = anon_sym_TILDE;
	v->a[100293] = actions(1221);
	v->a[100294] = 1;
	v->a[100295] = sym__special_character;
	v->a[100296] = actions(1225);
	v->a[100297] = 1;
	v->a[100298] = sym_test_operator;
	v->a[100299] = actions(3060);
	small_parse_table_5015(v);
}

/* EOF small_parse_table_1002.c */
