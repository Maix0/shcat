/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1154.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5770(t_small_parse_table_array *v)
{
	v->a[115400] = anon_sym_DOLLAR;
	v->a[115401] = actions(1149);
	v->a[115402] = 1;
	v->a[115403] = anon_sym_DQUOTE;
	v->a[115404] = actions(1153);
	v->a[115405] = 1;
	v->a[115406] = aux_sym_number_token1;
	v->a[115407] = actions(1155);
	v->a[115408] = 1;
	v->a[115409] = aux_sym_number_token2;
	v->a[115410] = actions(1157);
	v->a[115411] = 1;
	v->a[115412] = anon_sym_DOLLAR_LBRACE;
	v->a[115413] = actions(1159);
	v->a[115414] = 1;
	v->a[115415] = anon_sym_DOLLAR_LPAREN;
	v->a[115416] = actions(1163);
	v->a[115417] = 1;
	v->a[115418] = anon_sym_DOLLAR_BQUOTE;
	v->a[115419] = actions(1169);
	small_parse_table_5771(v);
}

void	small_parse_table_5771(t_small_parse_table_array *v)
{
	v->a[115420] = 1;
	v->a[115421] = sym__brace_start;
	v->a[115422] = actions(1187);
	v->a[115423] = 1;
	v->a[115424] = sym_word;
	v->a[115425] = actions(1189);
	v->a[115426] = 1;
	v->a[115427] = anon_sym_BANG;
	v->a[115428] = actions(1195);
	v->a[115429] = 1;
	v->a[115430] = anon_sym_TILDE;
	v->a[115431] = actions(1201);
	v->a[115432] = 1;
	v->a[115433] = sym_test_operator;
	v->a[115434] = actions(3060);
	v->a[115435] = 1;
	v->a[115436] = anon_sym_BQUOTE;
	v->a[115437] = actions(5779);
	v->a[115438] = 1;
	v->a[115439] = sym__special_character;
	small_parse_table_5772(v);
}

void	small_parse_table_5772(t_small_parse_table_array *v)
{
	v->a[115440] = state(2717);
	v->a[115441] = 1;
	v->a[115442] = aux_sym__literal_repeat1;
	v->a[115443] = state(3010);
	v->a[115444] = 1;
	v->a[115445] = sym__expression;
	v->a[115446] = actions(1129);
	v->a[115447] = 2;
	v->a[115448] = anon_sym_LPAREN_LPAREN;
	v->a[115449] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115450] = actions(1165);
	v->a[115451] = 2;
	v->a[115452] = anon_sym_LT_LPAREN;
	v->a[115453] = anon_sym_GT_LPAREN;
	v->a[115454] = actions(1191);
	v->a[115455] = 2;
	v->a[115456] = anon_sym_PLUS_PLUS2;
	v->a[115457] = anon_sym_DASH_DASH2;
	v->a[115458] = actions(1193);
	v->a[115459] = 2;
	small_parse_table_5773(v);
}

void	small_parse_table_5773(t_small_parse_table_array *v)
{
	v->a[115460] = anon_sym_DASH2;
	v->a[115461] = anon_sym_PLUS2;
	v->a[115462] = actions(1199);
	v->a[115463] = 2;
	v->a[115464] = sym_raw_string;
	v->a[115465] = sym_ansi_c_string;
	v->a[115466] = state(2594);
	v->a[115467] = 6;
	v->a[115468] = sym_binary_expression;
	v->a[115469] = sym_ternary_expression;
	v->a[115470] = sym_unary_expression;
	v->a[115471] = sym_postfix_expression;
	v->a[115472] = sym_parenthesized_expression;
	v->a[115473] = sym_concatenation;
	v->a[115474] = state(2503);
	v->a[115475] = 9;
	v->a[115476] = sym_arithmetic_expansion;
	v->a[115477] = sym_brace_expression;
	v->a[115478] = sym_string;
	v->a[115479] = sym_translated_string;
	small_parse_table_5774(v);
}

void	small_parse_table_5774(t_small_parse_table_array *v)
{
	v->a[115480] = sym_number;
	v->a[115481] = sym_simple_expansion;
	v->a[115482] = sym_expansion;
	v->a[115483] = sym_command_substitution;
	v->a[115484] = sym_process_substitution;
	v->a[115485] = 26;
	v->a[115486] = actions(71);
	v->a[115487] = 1;
	v->a[115488] = sym_comment;
	v->a[115489] = actions(107);
	v->a[115490] = 1;
	v->a[115491] = anon_sym_TILDE;
	v->a[115492] = actions(237);
	v->a[115493] = 1;
	v->a[115494] = sym_word;
	v->a[115495] = actions(248);
	v->a[115496] = 1;
	v->a[115497] = anon_sym_LPAREN;
	v->a[115498] = actions(250);
	v->a[115499] = 1;
	small_parse_table_5775(v);
}

/* EOF small_parse_table_1154.c */
