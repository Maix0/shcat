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
	v->a[39400] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39401] = anon_sym_AMP;
	v->a[39402] = anon_sym_DOLLAR;
	v->a[39403] = anon_sym_DQUOTE;
	v->a[39404] = sym_raw_string;
	v->a[39405] = sym_number;
	v->a[39406] = anon_sym_DOLLAR_LBRACE;
	v->a[39407] = anon_sym_DOLLAR_LPAREN;
	v->a[39408] = anon_sym_BQUOTE;
	v->a[39409] = sym_word;
	v->a[39410] = anon_sym_SEMI;
	v->a[39411] = 3;
	v->a[39412] = actions(3);
	v->a[39413] = 1;
	v->a[39414] = sym_comment;
	v->a[39415] = actions(1093);
	v->a[39416] = 3;
	v->a[39417] = sym_file_descriptor;
	v->a[39418] = sym__concat;
	v->a[39419] = ts_builtin_sym_end;
	small_parse_table_1971(v);
}

void	small_parse_table_1971(t_small_parse_table_array *v)
{
	v->a[39420] = actions(1088);
	v->a[39421] = 26;
	v->a[39422] = anon_sym_PIPE;
	v->a[39423] = anon_sym_SEMI_SEMI;
	v->a[39424] = anon_sym_AMP_AMP;
	v->a[39425] = anon_sym_PIPE_PIPE;
	v->a[39426] = anon_sym_LT;
	v->a[39427] = anon_sym_GT;
	v->a[39428] = anon_sym_GT_GT;
	v->a[39429] = anon_sym_LT_AMP;
	v->a[39430] = anon_sym_GT_AMP;
	v->a[39431] = anon_sym_GT_PIPE;
	v->a[39432] = anon_sym_LT_GT;
	v->a[39433] = anon_sym_LT_LT;
	v->a[39434] = anon_sym_LT_LT_DASH;
	v->a[39435] = aux_sym_heredoc_redirect_token1;
	v->a[39436] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39437] = anon_sym_AMP;
	v->a[39438] = aux_sym_concatenation_token1;
	v->a[39439] = anon_sym_DOLLAR;
	small_parse_table_1972(v);
}

void	small_parse_table_1972(t_small_parse_table_array *v)
{
	v->a[39440] = anon_sym_DQUOTE;
	v->a[39441] = sym_raw_string;
	v->a[39442] = sym_number;
	v->a[39443] = anon_sym_DOLLAR_LBRACE;
	v->a[39444] = anon_sym_DOLLAR_LPAREN;
	v->a[39445] = anon_sym_BQUOTE;
	v->a[39446] = sym_word;
	v->a[39447] = anon_sym_SEMI;
	v->a[39448] = 8;
	v->a[39449] = actions(3);
	v->a[39450] = 1;
	v->a[39451] = sym_comment;
	v->a[39452] = actions(736);
	v->a[39453] = 1;
	v->a[39454] = anon_sym_PIPE;
	v->a[39455] = actions(746);
	v->a[39456] = 1;
	v->a[39457] = sym_file_descriptor;
	v->a[39458] = actions(1393);
	v->a[39459] = 1;
	small_parse_table_1973(v);
}

void	small_parse_table_1973(t_small_parse_table_array *v)
{
	v->a[39460] = sym_variable_name;
	v->a[39461] = state(1355);
	v->a[39462] = 2;
	v->a[39463] = sym_variable_assignment;
	v->a[39464] = aux_sym__variable_assignments_repeat1;
	v->a[39465] = state(1359);
	v->a[39466] = 3;
	v->a[39467] = sym_file_redirect;
	v->a[39468] = sym_heredoc_redirect;
	v->a[39469] = aux_sym_redirected_statement_repeat1;
	v->a[39470] = actions(960);
	v->a[39471] = 5;
	v->a[39472] = anon_sym_AMP_AMP;
	v->a[39473] = anon_sym_PIPE_PIPE;
	v->a[39474] = anon_sym_LT_LT;
	v->a[39475] = anon_sym_LT_LT_DASH;
	v->a[39476] = aux_sym_heredoc_redirect_token1;
	v->a[39477] = actions(734);
	v->a[39478] = 16;
	v->a[39479] = anon_sym_LT;
	small_parse_table_1974(v);
}

void	small_parse_table_1974(t_small_parse_table_array *v)
{
	v->a[39480] = anon_sym_GT;
	v->a[39481] = anon_sym_GT_GT;
	v->a[39482] = anon_sym_LT_AMP;
	v->a[39483] = anon_sym_GT_AMP;
	v->a[39484] = anon_sym_GT_PIPE;
	v->a[39485] = anon_sym_LT_GT;
	v->a[39486] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39487] = anon_sym_DOLLAR;
	v->a[39488] = anon_sym_DQUOTE;
	v->a[39489] = sym_raw_string;
	v->a[39490] = sym_number;
	v->a[39491] = anon_sym_DOLLAR_LBRACE;
	v->a[39492] = anon_sym_DOLLAR_LPAREN;
	v->a[39493] = anon_sym_BQUOTE;
	v->a[39494] = sym_word;
	v->a[39495] = 3;
	v->a[39496] = actions(3);
	v->a[39497] = 1;
	v->a[39498] = sym_comment;
	v->a[39499] = actions(1289);
	small_parse_table_1975(v);
}

/* EOF small_parse_table_394.c */
