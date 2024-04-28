/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1174.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5870(t_small_parse_table_array *v)
{
	v->a[117400] = 1;
	v->a[117401] = sym_comment;
	v->a[117402] = actions(363);
	v->a[117403] = 1;
	v->a[117404] = anon_sym_DOLLAR_LBRACK;
	v->a[117405] = actions(367);
	v->a[117406] = 1;
	v->a[117407] = anon_sym_DOLLAR;
	v->a[117408] = actions(371);
	v->a[117409] = 1;
	v->a[117410] = anon_sym_DQUOTE;
	v->a[117411] = actions(375);
	v->a[117412] = 1;
	v->a[117413] = aux_sym_number_token1;
	v->a[117414] = actions(377);
	v->a[117415] = 1;
	v->a[117416] = aux_sym_number_token2;
	v->a[117417] = actions(379);
	v->a[117418] = 1;
	v->a[117419] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_5871(v);
}

void	small_parse_table_5871(t_small_parse_table_array *v)
{
	v->a[117420] = actions(381);
	v->a[117421] = 1;
	v->a[117422] = anon_sym_DOLLAR_LPAREN;
	v->a[117423] = actions(385);
	v->a[117424] = 1;
	v->a[117425] = anon_sym_DOLLAR_BQUOTE;
	v->a[117426] = actions(391);
	v->a[117427] = 1;
	v->a[117428] = sym__brace_start;
	v->a[117429] = actions(1093);
	v->a[117430] = 1;
	v->a[117431] = anon_sym_LPAREN;
	v->a[117432] = actions(1095);
	v->a[117433] = 1;
	v->a[117434] = anon_sym_BANG;
	v->a[117435] = actions(1103);
	v->a[117436] = 1;
	v->a[117437] = anon_sym_TILDE;
	v->a[117438] = actions(5809);
	v->a[117439] = 1;
	small_parse_table_5872(v);
}

void	small_parse_table_5872(t_small_parse_table_array *v)
{
	v->a[117440] = anon_sym_BQUOTE;
	v->a[117441] = actions(5916);
	v->a[117442] = 1;
	v->a[117443] = sym__special_character;
	v->a[117444] = actions(6415);
	v->a[117445] = 1;
	v->a[117446] = sym_word;
	v->a[117447] = actions(6419);
	v->a[117448] = 1;
	v->a[117449] = sym_test_operator;
	v->a[117450] = state(2463);
	v->a[117451] = 1;
	v->a[117452] = aux_sym__literal_repeat1;
	v->a[117453] = state(3397);
	v->a[117454] = 1;
	v->a[117455] = sym__expression;
	v->a[117456] = actions(352);
	v->a[117457] = 2;
	v->a[117458] = anon_sym_LPAREN_LPAREN;
	v->a[117459] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_5873(v);
}

void	small_parse_table_5873(t_small_parse_table_array *v)
{
	v->a[117460] = actions(387);
	v->a[117461] = 2;
	v->a[117462] = anon_sym_LT_LPAREN;
	v->a[117463] = anon_sym_GT_LPAREN;
	v->a[117464] = actions(1099);
	v->a[117465] = 2;
	v->a[117466] = anon_sym_PLUS_PLUS2;
	v->a[117467] = anon_sym_DASH_DASH2;
	v->a[117468] = actions(1101);
	v->a[117469] = 2;
	v->a[117470] = anon_sym_DASH2;
	v->a[117471] = anon_sym_PLUS2;
	v->a[117472] = actions(6417);
	v->a[117473] = 2;
	v->a[117474] = sym_raw_string;
	v->a[117475] = sym_ansi_c_string;
	v->a[117476] = state(2594);
	v->a[117477] = 2;
	v->a[117478] = sym_ternary_expression;
	v->a[117479] = sym_postfix_expression;
	small_parse_table_5874(v);
}

void	small_parse_table_5874(t_small_parse_table_array *v)
{
	v->a[117480] = state(2851);
	v->a[117481] = 4;
	v->a[117482] = sym_binary_expression;
	v->a[117483] = sym_unary_expression;
	v->a[117484] = sym_parenthesized_expression;
	v->a[117485] = sym_concatenation;
	v->a[117486] = state(2455);
	v->a[117487] = 9;
	v->a[117488] = sym_arithmetic_expansion;
	v->a[117489] = sym_brace_expression;
	v->a[117490] = sym_string;
	v->a[117491] = sym_translated_string;
	v->a[117492] = sym_number;
	v->a[117493] = sym_simple_expansion;
	v->a[117494] = sym_expansion;
	v->a[117495] = sym_command_substitution;
	v->a[117496] = sym_process_substitution;
	v->a[117497] = 26;
	v->a[117498] = actions(71);
	v->a[117499] = 1;
	small_parse_table_5875(v);
}

/* EOF small_parse_table_1174.c */
