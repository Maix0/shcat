/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1004.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5020(t_small_parse_table_array *v)
{
	v->a[100400] = 1;
	v->a[100401] = sym_comment;
	v->a[100402] = actions(1131);
	v->a[100403] = 1;
	v->a[100404] = anon_sym_LPAREN;
	v->a[100405] = actions(1141);
	v->a[100406] = 1;
	v->a[100407] = anon_sym_DOLLAR_LBRACK;
	v->a[100408] = actions(1145);
	v->a[100409] = 1;
	v->a[100410] = anon_sym_DOLLAR;
	v->a[100411] = actions(1149);
	v->a[100412] = 1;
	v->a[100413] = anon_sym_DQUOTE;
	v->a[100414] = actions(1153);
	v->a[100415] = 1;
	v->a[100416] = aux_sym_number_token1;
	v->a[100417] = actions(1155);
	v->a[100418] = 1;
	v->a[100419] = aux_sym_number_token2;
	small_parse_table_5021(v);
}

void	small_parse_table_5021(t_small_parse_table_array *v)
{
	v->a[100420] = actions(1157);
	v->a[100421] = 1;
	v->a[100422] = anon_sym_DOLLAR_LBRACE;
	v->a[100423] = actions(1159);
	v->a[100424] = 1;
	v->a[100425] = anon_sym_DOLLAR_LPAREN;
	v->a[100426] = actions(1163);
	v->a[100427] = 1;
	v->a[100428] = anon_sym_DOLLAR_BQUOTE;
	v->a[100429] = actions(1169);
	v->a[100430] = 1;
	v->a[100431] = sym__brace_start;
	v->a[100432] = actions(1211);
	v->a[100433] = 1;
	v->a[100434] = sym_word;
	v->a[100435] = actions(1213);
	v->a[100436] = 1;
	v->a[100437] = anon_sym_BANG;
	v->a[100438] = actions(1219);
	v->a[100439] = 1;
	small_parse_table_5022(v);
}

void	small_parse_table_5022(t_small_parse_table_array *v)
{
	v->a[100440] = anon_sym_TILDE;
	v->a[100441] = actions(1221);
	v->a[100442] = 1;
	v->a[100443] = sym__special_character;
	v->a[100444] = actions(1225);
	v->a[100445] = 1;
	v->a[100446] = sym_test_operator;
	v->a[100447] = actions(3060);
	v->a[100448] = 1;
	v->a[100449] = anon_sym_BQUOTE;
	v->a[100450] = state(2484);
	v->a[100451] = 1;
	v->a[100452] = aux_sym__literal_repeat1;
	v->a[100453] = state(3335);
	v->a[100454] = 1;
	v->a[100455] = sym__expression;
	v->a[100456] = actions(1129);
	v->a[100457] = 2;
	v->a[100458] = anon_sym_LPAREN_LPAREN;
	v->a[100459] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_5023(v);
}

void	small_parse_table_5023(t_small_parse_table_array *v)
{
	v->a[100460] = actions(1165);
	v->a[100461] = 2;
	v->a[100462] = anon_sym_LT_LPAREN;
	v->a[100463] = anon_sym_GT_LPAREN;
	v->a[100464] = actions(1215);
	v->a[100465] = 2;
	v->a[100466] = anon_sym_PLUS_PLUS2;
	v->a[100467] = anon_sym_DASH_DASH2;
	v->a[100468] = actions(1217);
	v->a[100469] = 2;
	v->a[100470] = anon_sym_DASH2;
	v->a[100471] = anon_sym_PLUS2;
	v->a[100472] = actions(1223);
	v->a[100473] = 2;
	v->a[100474] = sym_raw_string;
	v->a[100475] = sym_ansi_c_string;
	v->a[100476] = state(2594);
	v->a[100477] = 6;
	v->a[100478] = sym_binary_expression;
	v->a[100479] = sym_ternary_expression;
	small_parse_table_5024(v);
}

void	small_parse_table_5024(t_small_parse_table_array *v)
{
	v->a[100480] = sym_unary_expression;
	v->a[100481] = sym_postfix_expression;
	v->a[100482] = sym_parenthesized_expression;
	v->a[100483] = sym_concatenation;
	v->a[100484] = state(2588);
	v->a[100485] = 9;
	v->a[100486] = sym_arithmetic_expansion;
	v->a[100487] = sym_brace_expression;
	v->a[100488] = sym_string;
	v->a[100489] = sym_translated_string;
	v->a[100490] = sym_number;
	v->a[100491] = sym_simple_expansion;
	v->a[100492] = sym_expansion;
	v->a[100493] = sym_command_substitution;
	v->a[100494] = sym_process_substitution;
	v->a[100495] = 26;
	v->a[100496] = actions(71);
	v->a[100497] = 1;
	v->a[100498] = sym_comment;
	v->a[100499] = actions(363);
	small_parse_table_5025(v);
}

/* EOF small_parse_table_1004.c */
