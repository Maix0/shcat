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
	v->a[39400] = 1;
	v->a[39401] = aux_sym_concatenation_token1;
	v->a[39402] = actions(1519);
	v->a[39403] = 1;
	v->a[39404] = sym__concat;
	v->a[39405] = state(513);
	v->a[39406] = 1;
	v->a[39407] = aux_sym_concatenation_repeat1;
	v->a[39408] = actions(1129);
	v->a[39409] = 30;
	v->a[39410] = anon_sym_esac;
	v->a[39411] = anon_sym_PIPE;
	v->a[39412] = anon_sym_SEMI_SEMI;
	v->a[39413] = anon_sym_AMP_AMP;
	v->a[39414] = anon_sym_PIPE_PIPE;
	v->a[39415] = anon_sym_LT;
	v->a[39416] = anon_sym_GT;
	v->a[39417] = anon_sym_GT_GT;
	v->a[39418] = anon_sym_AMP_GT;
	v->a[39419] = anon_sym_AMP_GT_GT;
	small_parse_table_1971(v);
}

void	small_parse_table_1971(t_small_parse_table_array *v)
{
	v->a[39420] = anon_sym_LT_AMP;
	v->a[39421] = anon_sym_GT_AMP;
	v->a[39422] = anon_sym_GT_PIPE;
	v->a[39423] = anon_sym_LT_AMP_DASH;
	v->a[39424] = anon_sym_GT_AMP_DASH;
	v->a[39425] = anon_sym_LT_LT;
	v->a[39426] = anon_sym_LT_LT_DASH;
	v->a[39427] = aux_sym_heredoc_redirect_token1;
	v->a[39428] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39429] = anon_sym_AMP;
	v->a[39430] = anon_sym_DOLLAR;
	v->a[39431] = anon_sym_DQUOTE;
	v->a[39432] = sym_raw_string;
	v->a[39433] = aux_sym_number_token1;
	v->a[39434] = aux_sym_number_token2;
	v->a[39435] = anon_sym_DOLLAR_LBRACE;
	v->a[39436] = anon_sym_DOLLAR_LPAREN;
	v->a[39437] = anon_sym_BQUOTE;
	v->a[39438] = sym_word;
	v->a[39439] = anon_sym_SEMI;
	small_parse_table_1972(v);
}

void	small_parse_table_1972(t_small_parse_table_array *v)
{
	v->a[39440] = 3;
	v->a[39441] = actions(3);
	v->a[39442] = 1;
	v->a[39443] = sym_comment;
	v->a[39444] = actions(1194);
	v->a[39445] = 4;
	v->a[39446] = sym_file_descriptor;
	v->a[39447] = sym__concat;
	v->a[39448] = sym_variable_name;
	v->a[39449] = ts_builtin_sym_end;
	v->a[39450] = actions(1196);
	v->a[39451] = 30;
	v->a[39452] = anon_sym_PIPE;
	v->a[39453] = anon_sym_SEMI_SEMI;
	v->a[39454] = anon_sym_AMP_AMP;
	v->a[39455] = anon_sym_PIPE_PIPE;
	v->a[39456] = anon_sym_LT;
	v->a[39457] = anon_sym_GT;
	v->a[39458] = anon_sym_GT_GT;
	v->a[39459] = anon_sym_AMP_GT;
	small_parse_table_1973(v);
}

void	small_parse_table_1973(t_small_parse_table_array *v)
{
	v->a[39460] = anon_sym_AMP_GT_GT;
	v->a[39461] = anon_sym_LT_AMP;
	v->a[39462] = anon_sym_GT_AMP;
	v->a[39463] = anon_sym_GT_PIPE;
	v->a[39464] = anon_sym_LT_AMP_DASH;
	v->a[39465] = anon_sym_GT_AMP_DASH;
	v->a[39466] = anon_sym_LT_LT;
	v->a[39467] = anon_sym_LT_LT_DASH;
	v->a[39468] = aux_sym_heredoc_redirect_token1;
	v->a[39469] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39470] = anon_sym_AMP;
	v->a[39471] = aux_sym_concatenation_token1;
	v->a[39472] = anon_sym_DOLLAR;
	v->a[39473] = anon_sym_DQUOTE;
	v->a[39474] = sym_raw_string;
	v->a[39475] = aux_sym_number_token1;
	v->a[39476] = aux_sym_number_token2;
	v->a[39477] = anon_sym_DOLLAR_LBRACE;
	v->a[39478] = anon_sym_DOLLAR_LPAREN;
	v->a[39479] = anon_sym_BQUOTE;
	small_parse_table_1974(v);
}

void	small_parse_table_1974(t_small_parse_table_array *v)
{
	v->a[39480] = sym_word;
	v->a[39481] = anon_sym_SEMI;
	v->a[39482] = 3;
	v->a[39483] = actions(3);
	v->a[39484] = 1;
	v->a[39485] = sym_comment;
	v->a[39486] = actions(1319);
	v->a[39487] = 3;
	v->a[39488] = sym_file_descriptor;
	v->a[39489] = sym__concat;
	v->a[39490] = sym_variable_name;
	v->a[39491] = actions(1317);
	v->a[39492] = 31;
	v->a[39493] = anon_sym_esac;
	v->a[39494] = anon_sym_PIPE;
	v->a[39495] = anon_sym_SEMI_SEMI;
	v->a[39496] = anon_sym_AMP_AMP;
	v->a[39497] = anon_sym_PIPE_PIPE;
	v->a[39498] = anon_sym_LT;
	v->a[39499] = anon_sym_GT;
	small_parse_table_1975(v);
}

/* EOF small_parse_table_394.c */
