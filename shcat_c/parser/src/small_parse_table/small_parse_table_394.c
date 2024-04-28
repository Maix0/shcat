/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_394.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1970(t_small_parse_table_array *v)
{
	v->a[39400] = sym__concat;
	v->a[39401] = state(996);
	v->a[39402] = 1;
	v->a[39403] = aux_sym_concatenation_repeat1;
	v->a[39404] = actions(1253);
	v->a[39405] = 6;
	v->a[39406] = sym_file_descriptor;
	v->a[39407] = sym_test_operator;
	v->a[39408] = sym__bare_dollar;
	v->a[39409] = sym__brace_start;
	v->a[39410] = ts_builtin_sym_end;
	v->a[39411] = aux_sym_heredoc_redirect_token1;
	v->a[39412] = actions(1251);
	v->a[39413] = 40;
	v->a[39414] = anon_sym_LPAREN_LPAREN;
	v->a[39415] = anon_sym_SEMI;
	v->a[39416] = anon_sym_PIPE_PIPE;
	v->a[39417] = anon_sym_AMP_AMP;
	v->a[39418] = anon_sym_PIPE;
	v->a[39419] = anon_sym_AMP;
	small_parse_table_1971(v);
}

void	small_parse_table_1971(t_small_parse_table_array *v)
{
	v->a[39420] = anon_sym_EQ_EQ;
	v->a[39421] = anon_sym_LT;
	v->a[39422] = anon_sym_GT;
	v->a[39423] = anon_sym_LT_LT;
	v->a[39424] = anon_sym_GT_GT;
	v->a[39425] = anon_sym_LPAREN;
	v->a[39426] = anon_sym_SEMI_SEMI;
	v->a[39427] = anon_sym_PIPE_AMP;
	v->a[39428] = anon_sym_EQ_TILDE;
	v->a[39429] = anon_sym_AMP_GT;
	v->a[39430] = anon_sym_AMP_GT_GT;
	v->a[39431] = anon_sym_LT_AMP;
	v->a[39432] = anon_sym_GT_AMP;
	v->a[39433] = anon_sym_GT_PIPE;
	v->a[39434] = anon_sym_LT_AMP_DASH;
	v->a[39435] = anon_sym_GT_AMP_DASH;
	v->a[39436] = anon_sym_LT_LT_DASH;
	v->a[39437] = anon_sym_LT_LT_LT;
	v->a[39438] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39439] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_1972(v);
}

void	small_parse_table_1972(t_small_parse_table_array *v)
{
	v->a[39440] = anon_sym_DOLLAR;
	v->a[39441] = sym__special_character;
	v->a[39442] = anon_sym_DQUOTE;
	v->a[39443] = sym_raw_string;
	v->a[39444] = sym_ansi_c_string;
	v->a[39445] = aux_sym_number_token1;
	v->a[39446] = aux_sym_number_token2;
	v->a[39447] = anon_sym_DOLLAR_LBRACE;
	v->a[39448] = anon_sym_DOLLAR_LPAREN;
	v->a[39449] = anon_sym_BQUOTE;
	v->a[39450] = anon_sym_DOLLAR_BQUOTE;
	v->a[39451] = anon_sym_LT_LPAREN;
	v->a[39452] = anon_sym_GT_LPAREN;
	v->a[39453] = sym_word;
	v->a[39454] = 30;
	v->a[39455] = actions(71);
	v->a[39456] = 1;
	v->a[39457] = sym_comment;
	v->a[39458] = actions(314);
	v->a[39459] = 1;
	small_parse_table_1973(v);
}

void	small_parse_table_1973(t_small_parse_table_array *v)
{
	v->a[39460] = anon_sym_DOLLAR_LBRACK;
	v->a[39461] = actions(316);
	v->a[39462] = 1;
	v->a[39463] = anon_sym_DOLLAR;
	v->a[39464] = actions(320);
	v->a[39465] = 1;
	v->a[39466] = anon_sym_DQUOTE;
	v->a[39467] = actions(324);
	v->a[39468] = 1;
	v->a[39469] = aux_sym_number_token1;
	v->a[39470] = actions(326);
	v->a[39471] = 1;
	v->a[39472] = aux_sym_number_token2;
	v->a[39473] = actions(328);
	v->a[39474] = 1;
	v->a[39475] = anon_sym_DOLLAR_LBRACE;
	v->a[39476] = actions(330);
	v->a[39477] = 1;
	v->a[39478] = anon_sym_DOLLAR_LPAREN;
	v->a[39479] = actions(332);
	small_parse_table_1974(v);
}

void	small_parse_table_1974(t_small_parse_table_array *v)
{
	v->a[39480] = 1;
	v->a[39481] = anon_sym_BQUOTE;
	v->a[39482] = actions(334);
	v->a[39483] = 1;
	v->a[39484] = anon_sym_DOLLAR_BQUOTE;
	v->a[39485] = actions(342);
	v->a[39486] = 1;
	v->a[39487] = sym_test_operator;
	v->a[39488] = actions(344);
	v->a[39489] = 1;
	v->a[39490] = sym__brace_start;
	v->a[39491] = actions(1394);
	v->a[39492] = 1;
	v->a[39493] = anon_sym_LT_LT_LT;
	v->a[39494] = actions(1396);
	v->a[39495] = 1;
	v->a[39496] = sym_file_descriptor;
	v->a[39497] = actions(2723);
	v->a[39498] = 1;
	v->a[39499] = sym_word;
	small_parse_table_1975(v);
}

/* EOF small_parse_table_394.c */
