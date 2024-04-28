/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1344.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6720(t_small_parse_table_array *v)
{
	v->a[134400] = anon_sym_DASH_DASH;
	v->a[134401] = anon_sym_PLUS_EQ;
	v->a[134402] = anon_sym_DASH_EQ;
	v->a[134403] = anon_sym_STAR_EQ;
	v->a[134404] = anon_sym_SLASH_EQ;
	v->a[134405] = anon_sym_PERCENT_EQ;
	v->a[134406] = anon_sym_STAR_STAR_EQ;
	v->a[134407] = anon_sym_LT_LT_EQ;
	v->a[134408] = anon_sym_GT_GT_EQ;
	v->a[134409] = anon_sym_AMP_EQ;
	v->a[134410] = anon_sym_CARET_EQ;
	v->a[134411] = anon_sym_PIPE_EQ;
	v->a[134412] = anon_sym_PIPE_PIPE;
	v->a[134413] = anon_sym_AMP_AMP;
	v->a[134414] = anon_sym_EQ_EQ;
	v->a[134415] = anon_sym_BANG_EQ;
	v->a[134416] = anon_sym_LT_EQ;
	v->a[134417] = anon_sym_GT_EQ;
	v->a[134418] = anon_sym_RBRACK_RBRACK;
	v->a[134419] = anon_sym_EQ_TILDE;
	small_parse_table_6721(v);
}

void	small_parse_table_6721(t_small_parse_table_array *v)
{
	v->a[134420] = anon_sym_QMARK;
	v->a[134421] = anon_sym_COLON;
	v->a[134422] = 3;
	v->a[134423] = actions(71);
	v->a[134424] = 1;
	v->a[134425] = sym_comment;
	v->a[134426] = actions(1316);
	v->a[134427] = 14;
	v->a[134428] = anon_sym_PIPE;
	v->a[134429] = anon_sym_LT;
	v->a[134430] = anon_sym_GT;
	v->a[134431] = anon_sym_LT_LT;
	v->a[134432] = anon_sym_AMP_GT;
	v->a[134433] = anon_sym_LT_AMP;
	v->a[134434] = anon_sym_GT_AMP;
	v->a[134435] = anon_sym_DOLLAR;
	v->a[134436] = sym__special_character;
	v->a[134437] = aux_sym_number_token1;
	v->a[134438] = aux_sym_number_token2;
	v->a[134439] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_6722(v);
}

void	small_parse_table_6722(t_small_parse_table_array *v)
{
	v->a[134440] = anon_sym_BQUOTE;
	v->a[134441] = sym_word;
	v->a[134442] = actions(1318);
	v->a[134443] = 26;
	v->a[134444] = sym_file_descriptor;
	v->a[134445] = sym__concat;
	v->a[134446] = sym_test_operator;
	v->a[134447] = sym__brace_start;
	v->a[134448] = anon_sym_LPAREN_LPAREN;
	v->a[134449] = anon_sym_PIPE_PIPE;
	v->a[134450] = anon_sym_AMP_AMP;
	v->a[134451] = anon_sym_GT_GT;
	v->a[134452] = anon_sym_PIPE_AMP;
	v->a[134453] = anon_sym_RBRACK;
	v->a[134454] = anon_sym_AMP_GT_GT;
	v->a[134455] = anon_sym_GT_PIPE;
	v->a[134456] = anon_sym_LT_AMP_DASH;
	v->a[134457] = anon_sym_GT_AMP_DASH;
	v->a[134458] = anon_sym_LT_LT_DASH;
	v->a[134459] = anon_sym_LT_LT_LT;
	small_parse_table_6723(v);
}

void	small_parse_table_6723(t_small_parse_table_array *v)
{
	v->a[134460] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[134461] = anon_sym_DOLLAR_LBRACK;
	v->a[134462] = aux_sym_concatenation_token1;
	v->a[134463] = anon_sym_DQUOTE;
	v->a[134464] = sym_raw_string;
	v->a[134465] = sym_ansi_c_string;
	v->a[134466] = anon_sym_DOLLAR_LBRACE;
	v->a[134467] = anon_sym_DOLLAR_BQUOTE;
	v->a[134468] = anon_sym_LT_LPAREN;
	v->a[134469] = anon_sym_GT_LPAREN;
	v->a[134470] = 7;
	v->a[134471] = actions(71);
	v->a[134472] = 1;
	v->a[134473] = sym_comment;
	v->a[134474] = actions(1097);
	v->a[134475] = 1;
	v->a[134476] = anon_sym_RBRACK;
	v->a[134477] = actions(6652);
	v->a[134478] = 1;
	v->a[134479] = sym__special_character;
	small_parse_table_6724(v);
}

void	small_parse_table_6724(t_small_parse_table_array *v)
{
	v->a[134480] = actions(6755);
	v->a[134481] = 1;
	v->a[134482] = sym__concat;
	v->a[134483] = state(2474);
	v->a[134484] = 1;
	v->a[134485] = aux_sym__literal_repeat1;
	v->a[134486] = actions(243);
	v->a[134487] = 14;
	v->a[134488] = anon_sym_EQ;
	v->a[134489] = anon_sym_PIPE;
	v->a[134490] = anon_sym_CARET;
	v->a[134491] = anon_sym_AMP;
	v->a[134492] = anon_sym_LT;
	v->a[134493] = anon_sym_GT;
	v->a[134494] = anon_sym_LT_LT;
	v->a[134495] = anon_sym_GT_GT;
	v->a[134496] = anon_sym_PLUS;
	v->a[134497] = anon_sym_DASH;
	v->a[134498] = anon_sym_STAR;
	v->a[134499] = anon_sym_SLASH;
	small_parse_table_6725(v);
}

/* EOF small_parse_table_1344.c */
