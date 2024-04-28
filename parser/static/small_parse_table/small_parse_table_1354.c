/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1354.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6770(t_small_parse_table_array *v)
{
	v->a[135400] = aux_sym_number_token1;
	v->a[135401] = aux_sym_number_token2;
	v->a[135402] = anon_sym_DOLLAR_LPAREN;
	v->a[135403] = anon_sym_BQUOTE;
	v->a[135404] = aux_sym__simple_variable_name_token1;
	v->a[135405] = sym_word;
	v->a[135406] = actions(1326);
	v->a[135407] = 26;
	v->a[135408] = sym_file_descriptor;
	v->a[135409] = sym__concat;
	v->a[135410] = sym_variable_name;
	v->a[135411] = sym_test_operator;
	v->a[135412] = sym__brace_start;
	v->a[135413] = anon_sym_LPAREN_LPAREN;
	v->a[135414] = anon_sym_PIPE_PIPE;
	v->a[135415] = anon_sym_AMP_AMP;
	v->a[135416] = anon_sym_GT_GT;
	v->a[135417] = anon_sym_PIPE_AMP;
	v->a[135418] = anon_sym_AMP_GT_GT;
	v->a[135419] = anon_sym_GT_PIPE;
	small_parse_table_6771(v);
}

void	small_parse_table_6771(t_small_parse_table_array *v)
{
	v->a[135420] = anon_sym_LT_AMP_DASH;
	v->a[135421] = anon_sym_GT_AMP_DASH;
	v->a[135422] = anon_sym_LT_LT_DASH;
	v->a[135423] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135424] = anon_sym_DOLLAR_LBRACK;
	v->a[135425] = aux_sym_concatenation_token1;
	v->a[135426] = sym__special_character;
	v->a[135427] = anon_sym_DQUOTE;
	v->a[135428] = sym_raw_string;
	v->a[135429] = sym_ansi_c_string;
	v->a[135430] = anon_sym_DOLLAR_LBRACE;
	v->a[135431] = anon_sym_DOLLAR_BQUOTE;
	v->a[135432] = anon_sym_LT_LPAREN;
	v->a[135433] = anon_sym_GT_LPAREN;
	v->a[135434] = 3;
	v->a[135435] = actions(71);
	v->a[135436] = 1;
	v->a[135437] = sym_comment;
	v->a[135438] = actions(1251);
	v->a[135439] = 14;
	small_parse_table_6772(v);
}

void	small_parse_table_6772(t_small_parse_table_array *v)
{
	v->a[135440] = anon_sym_PIPE;
	v->a[135441] = anon_sym_LT;
	v->a[135442] = anon_sym_GT;
	v->a[135443] = anon_sym_LT_LT;
	v->a[135444] = anon_sym_AMP_GT;
	v->a[135445] = anon_sym_LT_AMP;
	v->a[135446] = anon_sym_GT_AMP;
	v->a[135447] = anon_sym_DOLLAR;
	v->a[135448] = aux_sym_number_token1;
	v->a[135449] = aux_sym_number_token2;
	v->a[135450] = anon_sym_DOLLAR_LPAREN;
	v->a[135451] = anon_sym_BQUOTE;
	v->a[135452] = aux_sym__simple_variable_name_token1;
	v->a[135453] = sym_word;
	v->a[135454] = actions(1253);
	v->a[135455] = 26;
	v->a[135456] = sym_file_descriptor;
	v->a[135457] = sym__concat;
	v->a[135458] = sym_variable_name;
	v->a[135459] = sym_test_operator;
	small_parse_table_6773(v);
}

void	small_parse_table_6773(t_small_parse_table_array *v)
{
	v->a[135460] = sym__brace_start;
	v->a[135461] = anon_sym_LPAREN_LPAREN;
	v->a[135462] = anon_sym_PIPE_PIPE;
	v->a[135463] = anon_sym_AMP_AMP;
	v->a[135464] = anon_sym_GT_GT;
	v->a[135465] = anon_sym_PIPE_AMP;
	v->a[135466] = anon_sym_AMP_GT_GT;
	v->a[135467] = anon_sym_GT_PIPE;
	v->a[135468] = anon_sym_LT_AMP_DASH;
	v->a[135469] = anon_sym_GT_AMP_DASH;
	v->a[135470] = anon_sym_LT_LT_DASH;
	v->a[135471] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135472] = anon_sym_DOLLAR_LBRACK;
	v->a[135473] = aux_sym_concatenation_token1;
	v->a[135474] = sym__special_character;
	v->a[135475] = anon_sym_DQUOTE;
	v->a[135476] = sym_raw_string;
	v->a[135477] = sym_ansi_c_string;
	v->a[135478] = anon_sym_DOLLAR_LBRACE;
	v->a[135479] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_6774(v);
}

void	small_parse_table_6774(t_small_parse_table_array *v)
{
	v->a[135480] = anon_sym_LT_LPAREN;
	v->a[135481] = anon_sym_GT_LPAREN;
	v->a[135482] = 3;
	v->a[135483] = actions(71);
	v->a[135484] = 1;
	v->a[135485] = sym_comment;
	v->a[135486] = actions(1352);
	v->a[135487] = 14;
	v->a[135488] = anon_sym_PIPE;
	v->a[135489] = anon_sym_LT;
	v->a[135490] = anon_sym_GT;
	v->a[135491] = anon_sym_LT_LT;
	v->a[135492] = anon_sym_AMP_GT;
	v->a[135493] = anon_sym_LT_AMP;
	v->a[135494] = anon_sym_GT_AMP;
	v->a[135495] = anon_sym_DOLLAR;
	v->a[135496] = sym__special_character;
	v->a[135497] = aux_sym_number_token1;
	v->a[135498] = aux_sym_number_token2;
	v->a[135499] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_6775(v);
}

/* EOF small_parse_table_1354.c */
