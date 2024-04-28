/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_953.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4765(t_small_parse_table_array *v)
{
	v->a[95300] = 1;
	v->a[95301] = anon_sym_TILDE;
	v->a[95302] = actions(1141);
	v->a[95303] = 1;
	v->a[95304] = anon_sym_DOLLAR_LBRACK;
	v->a[95305] = actions(1145);
	v->a[95306] = 1;
	v->a[95307] = anon_sym_DOLLAR;
	v->a[95308] = actions(1147);
	v->a[95309] = 1;
	v->a[95310] = sym__special_character;
	v->a[95311] = actions(1149);
	v->a[95312] = 1;
	v->a[95313] = anon_sym_DQUOTE;
	v->a[95314] = actions(1153);
	v->a[95315] = 1;
	v->a[95316] = aux_sym_number_token1;
	v->a[95317] = actions(1155);
	v->a[95318] = 1;
	v->a[95319] = aux_sym_number_token2;
	small_parse_table_4766(v);
}

void	small_parse_table_4766(t_small_parse_table_array *v)
{
	v->a[95320] = actions(1157);
	v->a[95321] = 1;
	v->a[95322] = anon_sym_DOLLAR_LBRACE;
	v->a[95323] = actions(1159);
	v->a[95324] = 1;
	v->a[95325] = anon_sym_DOLLAR_LPAREN;
	v->a[95326] = actions(1163);
	v->a[95327] = 1;
	v->a[95328] = anon_sym_DOLLAR_BQUOTE;
	v->a[95329] = actions(1167);
	v->a[95330] = 1;
	v->a[95331] = sym_test_operator;
	v->a[95332] = actions(1169);
	v->a[95333] = 1;
	v->a[95334] = sym__brace_start;
	v->a[95335] = actions(3060);
	v->a[95336] = 1;
	v->a[95337] = anon_sym_BQUOTE;
	v->a[95338] = state(2484);
	v->a[95339] = 1;
	small_parse_table_4767(v);
}

void	small_parse_table_4767(t_small_parse_table_array *v)
{
	v->a[95340] = aux_sym__literal_repeat1;
	v->a[95341] = state(2968);
	v->a[95342] = 1;
	v->a[95343] = sym__expression;
	v->a[95344] = actions(1129);
	v->a[95345] = 2;
	v->a[95346] = anon_sym_LPAREN_LPAREN;
	v->a[95347] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95348] = actions(1135);
	v->a[95349] = 2;
	v->a[95350] = anon_sym_PLUS_PLUS2;
	v->a[95351] = anon_sym_DASH_DASH2;
	v->a[95352] = actions(1137);
	v->a[95353] = 2;
	v->a[95354] = anon_sym_DASH2;
	v->a[95355] = anon_sym_PLUS2;
	v->a[95356] = actions(1151);
	v->a[95357] = 2;
	v->a[95358] = sym_raw_string;
	v->a[95359] = sym_ansi_c_string;
	small_parse_table_4768(v);
}

void	small_parse_table_4768(t_small_parse_table_array *v)
{
	v->a[95360] = actions(1165);
	v->a[95361] = 2;
	v->a[95362] = anon_sym_LT_LPAREN;
	v->a[95363] = anon_sym_GT_LPAREN;
	v->a[95364] = state(2594);
	v->a[95365] = 6;
	v->a[95366] = sym_binary_expression;
	v->a[95367] = sym_ternary_expression;
	v->a[95368] = sym_unary_expression;
	v->a[95369] = sym_postfix_expression;
	v->a[95370] = sym_parenthesized_expression;
	v->a[95371] = sym_concatenation;
	v->a[95372] = state(2573);
	v->a[95373] = 9;
	v->a[95374] = sym_arithmetic_expansion;
	v->a[95375] = sym_brace_expression;
	v->a[95376] = sym_string;
	v->a[95377] = sym_translated_string;
	v->a[95378] = sym_number;
	v->a[95379] = sym_simple_expansion;
	small_parse_table_4769(v);
}

void	small_parse_table_4769(t_small_parse_table_array *v)
{
	v->a[95380] = sym_expansion;
	v->a[95381] = sym_command_substitution;
	v->a[95382] = sym_process_substitution;
	v->a[95383] = 26;
	v->a[95384] = actions(71);
	v->a[95385] = 1;
	v->a[95386] = sym_comment;
	v->a[95387] = actions(1127);
	v->a[95388] = 1;
	v->a[95389] = sym_word;
	v->a[95390] = actions(1131);
	v->a[95391] = 1;
	v->a[95392] = anon_sym_LPAREN;
	v->a[95393] = actions(1133);
	v->a[95394] = 1;
	v->a[95395] = anon_sym_BANG;
	v->a[95396] = actions(1139);
	v->a[95397] = 1;
	v->a[95398] = anon_sym_TILDE;
	v->a[95399] = actions(1141);
	small_parse_table_4770(v);
}

/* EOF small_parse_table_953.c */
