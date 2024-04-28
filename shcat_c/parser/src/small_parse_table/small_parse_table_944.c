/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_944.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4720(t_small_parse_table_array *v)
{
	v->a[94400] = sym__brace_start;
	v->a[94401] = actions(3060);
	v->a[94402] = 1;
	v->a[94403] = anon_sym_BQUOTE;
	v->a[94404] = state(2484);
	v->a[94405] = 1;
	v->a[94406] = aux_sym__literal_repeat1;
	v->a[94407] = state(2978);
	v->a[94408] = 1;
	v->a[94409] = sym__expression;
	v->a[94410] = actions(1129);
	v->a[94411] = 2;
	v->a[94412] = anon_sym_LPAREN_LPAREN;
	v->a[94413] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[94414] = actions(1135);
	v->a[94415] = 2;
	v->a[94416] = anon_sym_PLUS_PLUS2;
	v->a[94417] = anon_sym_DASH_DASH2;
	v->a[94418] = actions(1137);
	v->a[94419] = 2;
	small_parse_table_4721(v);
}

void	small_parse_table_4721(t_small_parse_table_array *v)
{
	v->a[94420] = anon_sym_DASH2;
	v->a[94421] = anon_sym_PLUS2;
	v->a[94422] = actions(1151);
	v->a[94423] = 2;
	v->a[94424] = sym_raw_string;
	v->a[94425] = sym_ansi_c_string;
	v->a[94426] = actions(1165);
	v->a[94427] = 2;
	v->a[94428] = anon_sym_LT_LPAREN;
	v->a[94429] = anon_sym_GT_LPAREN;
	v->a[94430] = state(2594);
	v->a[94431] = 6;
	v->a[94432] = sym_binary_expression;
	v->a[94433] = sym_ternary_expression;
	v->a[94434] = sym_unary_expression;
	v->a[94435] = sym_postfix_expression;
	v->a[94436] = sym_parenthesized_expression;
	v->a[94437] = sym_concatenation;
	v->a[94438] = state(2573);
	v->a[94439] = 9;
	small_parse_table_4722(v);
}

void	small_parse_table_4722(t_small_parse_table_array *v)
{
	v->a[94440] = sym_arithmetic_expansion;
	v->a[94441] = sym_brace_expression;
	v->a[94442] = sym_string;
	v->a[94443] = sym_translated_string;
	v->a[94444] = sym_number;
	v->a[94445] = sym_simple_expansion;
	v->a[94446] = sym_expansion;
	v->a[94447] = sym_command_substitution;
	v->a[94448] = sym_process_substitution;
	v->a[94449] = 26;
	v->a[94450] = actions(71);
	v->a[94451] = 1;
	v->a[94452] = sym_comment;
	v->a[94453] = actions(1127);
	v->a[94454] = 1;
	v->a[94455] = sym_word;
	v->a[94456] = actions(1131);
	v->a[94457] = 1;
	v->a[94458] = anon_sym_LPAREN;
	v->a[94459] = actions(1133);
	small_parse_table_4723(v);
}

void	small_parse_table_4723(t_small_parse_table_array *v)
{
	v->a[94460] = 1;
	v->a[94461] = anon_sym_BANG;
	v->a[94462] = actions(1139);
	v->a[94463] = 1;
	v->a[94464] = anon_sym_TILDE;
	v->a[94465] = actions(1141);
	v->a[94466] = 1;
	v->a[94467] = anon_sym_DOLLAR_LBRACK;
	v->a[94468] = actions(1145);
	v->a[94469] = 1;
	v->a[94470] = anon_sym_DOLLAR;
	v->a[94471] = actions(1147);
	v->a[94472] = 1;
	v->a[94473] = sym__special_character;
	v->a[94474] = actions(1149);
	v->a[94475] = 1;
	v->a[94476] = anon_sym_DQUOTE;
	v->a[94477] = actions(1153);
	v->a[94478] = 1;
	v->a[94479] = aux_sym_number_token1;
	small_parse_table_4724(v);
}

void	small_parse_table_4724(t_small_parse_table_array *v)
{
	v->a[94480] = actions(1155);
	v->a[94481] = 1;
	v->a[94482] = aux_sym_number_token2;
	v->a[94483] = actions(1157);
	v->a[94484] = 1;
	v->a[94485] = anon_sym_DOLLAR_LBRACE;
	v->a[94486] = actions(1159);
	v->a[94487] = 1;
	v->a[94488] = anon_sym_DOLLAR_LPAREN;
	v->a[94489] = actions(1163);
	v->a[94490] = 1;
	v->a[94491] = anon_sym_DOLLAR_BQUOTE;
	v->a[94492] = actions(1167);
	v->a[94493] = 1;
	v->a[94494] = sym_test_operator;
	v->a[94495] = actions(1169);
	v->a[94496] = 1;
	v->a[94497] = sym__brace_start;
	v->a[94498] = actions(3060);
	v->a[94499] = 1;
	small_parse_table_4725(v);
}

/* EOF small_parse_table_944.c */
