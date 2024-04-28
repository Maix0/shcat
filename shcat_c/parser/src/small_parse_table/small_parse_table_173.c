/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_173.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_865(t_small_parse_table_array *v)
{
	v->a[17300] = actions(1149);
	v->a[17301] = 1;
	v->a[17302] = anon_sym_DQUOTE;
	v->a[17303] = actions(1153);
	v->a[17304] = 1;
	v->a[17305] = aux_sym_number_token1;
	v->a[17306] = actions(1155);
	v->a[17307] = 1;
	v->a[17308] = aux_sym_number_token2;
	v->a[17309] = actions(1157);
	v->a[17310] = 1;
	v->a[17311] = anon_sym_DOLLAR_LBRACE;
	v->a[17312] = actions(1159);
	v->a[17313] = 1;
	v->a[17314] = anon_sym_DOLLAR_LPAREN;
	v->a[17315] = actions(1163);
	v->a[17316] = 1;
	v->a[17317] = anon_sym_DOLLAR_BQUOTE;
	v->a[17318] = actions(1169);
	v->a[17319] = 1;
	small_parse_table_866(v);
}

void	small_parse_table_866(t_small_parse_table_array *v)
{
	v->a[17320] = sym__brace_start;
	v->a[17321] = actions(1171);
	v->a[17322] = 1;
	v->a[17323] = sym_word;
	v->a[17324] = actions(1181);
	v->a[17325] = 1;
	v->a[17326] = sym__special_character;
	v->a[17327] = actions(1185);
	v->a[17328] = 1;
	v->a[17329] = sym_test_operator;
	v->a[17330] = actions(3050);
	v->a[17331] = 1;
	v->a[17332] = anon_sym_LPAREN;
	v->a[17333] = actions(3052);
	v->a[17334] = 1;
	v->a[17335] = anon_sym_BANG;
	v->a[17336] = actions(3058);
	v->a[17337] = 1;
	v->a[17338] = anon_sym_TILDE;
	v->a[17339] = actions(3060);
	small_parse_table_867(v);
}

void	small_parse_table_867(t_small_parse_table_array *v)
{
	v->a[17340] = 1;
	v->a[17341] = anon_sym_BQUOTE;
	v->a[17342] = actions(3064);
	v->a[17343] = 1;
	v->a[17344] = sym_variable_name;
	v->a[17345] = actions(3586);
	v->a[17346] = 1;
	v->a[17347] = aux_sym__simple_variable_name_token1;
	v->a[17348] = state(2387);
	v->a[17349] = 1;
	v->a[17350] = sym_command_substitution;
	v->a[17351] = state(2484);
	v->a[17352] = 1;
	v->a[17353] = aux_sym__literal_repeat1;
	v->a[17354] = state(2801);
	v->a[17355] = 1;
	v->a[17356] = sym__arithmetic_binary_expression;
	v->a[17357] = state(2803);
	v->a[17358] = 1;
	v->a[17359] = sym__arithmetic_ternary_expression;
	small_parse_table_868(v);
}

void	small_parse_table_868(t_small_parse_table_array *v)
{
	v->a[17360] = state(2809);
	v->a[17361] = 1;
	v->a[17362] = sym__arithmetic_unary_expression;
	v->a[17363] = state(2825);
	v->a[17364] = 1;
	v->a[17365] = sym__arithmetic_postfix_expression;
	v->a[17366] = state(3108);
	v->a[17367] = 1;
	v->a[17368] = sym__expression;
	v->a[17369] = actions(1129);
	v->a[17370] = 2;
	v->a[17371] = anon_sym_LPAREN_LPAREN;
	v->a[17372] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17373] = actions(1165);
	v->a[17374] = 2;
	v->a[17375] = anon_sym_LT_LPAREN;
	v->a[17376] = anon_sym_GT_LPAREN;
	v->a[17377] = actions(1183);
	v->a[17378] = 2;
	v->a[17379] = sym_raw_string;
	small_parse_table_869(v);
}

void	small_parse_table_869(t_small_parse_table_array *v)
{
	v->a[17380] = sym_ansi_c_string;
	v->a[17381] = actions(3054);
	v->a[17382] = 2;
	v->a[17383] = anon_sym_PLUS_PLUS2;
	v->a[17384] = anon_sym_DASH_DASH2;
	v->a[17385] = actions(3056);
	v->a[17386] = 2;
	v->a[17387] = anon_sym_DASH2;
	v->a[17388] = anon_sym_PLUS2;
	v->a[17389] = state(2397);
	v->a[17390] = 4;
	v->a[17391] = sym_string;
	v->a[17392] = sym_number;
	v->a[17393] = sym_simple_expansion;
	v->a[17394] = sym_expansion;
	v->a[17395] = state(2456);
	v->a[17396] = 4;
	v->a[17397] = sym_arithmetic_expansion;
	v->a[17398] = sym_brace_expression;
	v->a[17399] = sym_translated_string;
	small_parse_table_870(v);
}

/* EOF small_parse_table_173.c */
