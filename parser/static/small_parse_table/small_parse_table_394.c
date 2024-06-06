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
	v->a[39400] = ts_builtin_sym_end;
	v->a[39401] = aux_sym_heredoc_redirect_token1;
	v->a[39402] = actions(3022);
	v->a[39403] = 33;
	v->a[39404] = anon_sym_PIPE;
	v->a[39405] = anon_sym_SEMI_SEMI;
	v->a[39406] = anon_sym_PIPE_AMP;
	v->a[39407] = anon_sym_AMP_AMP;
	v->a[39408] = anon_sym_PIPE_PIPE;
	v->a[39409] = anon_sym_LT;
	v->a[39410] = anon_sym_GT;
	v->a[39411] = anon_sym_GT_GT;
	v->a[39412] = anon_sym_AMP_GT;
	v->a[39413] = anon_sym_AMP_GT_GT;
	v->a[39414] = anon_sym_LT_AMP;
	v->a[39415] = anon_sym_GT_AMP;
	v->a[39416] = anon_sym_GT_PIPE;
	v->a[39417] = anon_sym_LT_AMP_DASH;
	v->a[39418] = anon_sym_GT_AMP_DASH;
	v->a[39419] = anon_sym_LT_LT;
	small_parse_table_1971(v);
}

void	small_parse_table_1971(t_small_parse_table_array *v)
{
	v->a[39420] = anon_sym_LT_LT_DASH;
	v->a[39421] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39422] = anon_sym_AMP;
	v->a[39423] = aux_sym_concatenation_token1;
	v->a[39424] = anon_sym_DOLLAR;
	v->a[39425] = sym__special_character;
	v->a[39426] = anon_sym_DQUOTE;
	v->a[39427] = sym_raw_string;
	v->a[39428] = aux_sym_number_token1;
	v->a[39429] = aux_sym_number_token2;
	v->a[39430] = anon_sym_DOLLAR_LBRACE;
	v->a[39431] = anon_sym_DOLLAR_LPAREN;
	v->a[39432] = anon_sym_BQUOTE;
	v->a[39433] = anon_sym_DOLLAR_BQUOTE;
	v->a[39434] = aux_sym__simple_variable_name_token1;
	v->a[39435] = sym_word;
	v->a[39436] = anon_sym_SEMI;
	v->a[39437] = 3;
	v->a[39438] = actions(3);
	v->a[39439] = 1;
	small_parse_table_1972(v);
}

void	small_parse_table_1972(t_small_parse_table_array *v)
{
	v->a[39440] = sym_comment;
	v->a[39441] = actions(3020);
	v->a[39442] = 6;
	v->a[39443] = sym_file_descriptor;
	v->a[39444] = sym__concat;
	v->a[39445] = sym_test_operator;
	v->a[39446] = sym__bare_dollar;
	v->a[39447] = sym__brace_start;
	v->a[39448] = aux_sym_heredoc_redirect_token1;
	v->a[39449] = actions(3018);
	v->a[39450] = 34;
	v->a[39451] = anon_sym_LPAREN;
	v->a[39452] = anon_sym_PIPE;
	v->a[39453] = anon_sym_RPAREN;
	v->a[39454] = anon_sym_SEMI_SEMI;
	v->a[39455] = anon_sym_PIPE_AMP;
	v->a[39456] = anon_sym_AMP_AMP;
	v->a[39457] = anon_sym_PIPE_PIPE;
	v->a[39458] = anon_sym_LT;
	v->a[39459] = anon_sym_GT;
	small_parse_table_1973(v);
}

void	small_parse_table_1973(t_small_parse_table_array *v)
{
	v->a[39460] = anon_sym_GT_GT;
	v->a[39461] = anon_sym_AMP_GT;
	v->a[39462] = anon_sym_AMP_GT_GT;
	v->a[39463] = anon_sym_LT_AMP;
	v->a[39464] = anon_sym_GT_AMP;
	v->a[39465] = anon_sym_GT_PIPE;
	v->a[39466] = anon_sym_LT_AMP_DASH;
	v->a[39467] = anon_sym_GT_AMP_DASH;
	v->a[39468] = anon_sym_LT_LT;
	v->a[39469] = anon_sym_LT_LT_DASH;
	v->a[39470] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39471] = anon_sym_AMP;
	v->a[39472] = aux_sym_concatenation_token1;
	v->a[39473] = anon_sym_DOLLAR;
	v->a[39474] = sym__special_character;
	v->a[39475] = anon_sym_DQUOTE;
	v->a[39476] = sym_raw_string;
	v->a[39477] = aux_sym_number_token1;
	v->a[39478] = aux_sym_number_token2;
	v->a[39479] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1974(v);
}

void	small_parse_table_1974(t_small_parse_table_array *v)
{
	v->a[39480] = anon_sym_DOLLAR_LPAREN;
	v->a[39481] = anon_sym_BQUOTE;
	v->a[39482] = anon_sym_DOLLAR_BQUOTE;
	v->a[39483] = sym_word;
	v->a[39484] = anon_sym_SEMI;
	v->a[39485] = 3;
	v->a[39486] = actions(3);
	v->a[39487] = 1;
	v->a[39488] = sym_comment;
	v->a[39489] = actions(3034);
	v->a[39490] = 7;
	v->a[39491] = sym_file_descriptor;
	v->a[39492] = sym__concat;
	v->a[39493] = sym_variable_name;
	v->a[39494] = sym_test_operator;
	v->a[39495] = sym__brace_start;
	v->a[39496] = ts_builtin_sym_end;
	v->a[39497] = aux_sym_heredoc_redirect_token1;
	v->a[39498] = actions(3032);
	v->a[39499] = 33;
	small_parse_table_1975(v);
}

/* EOF small_parse_table_394.c */
