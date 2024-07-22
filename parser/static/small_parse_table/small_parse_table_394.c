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
	v->a[39400] = aux_sym_command_repeat1;
	v->a[39401] = actions(113);
	v->a[39402] = 3;
	v->a[39403] = sym_raw_string;
	v->a[39404] = sym_number;
	v->a[39405] = sym_word;
	v->a[39406] = state(378);
	v->a[39407] = 5;
	v->a[39408] = sym_arithmetic_expansion;
	v->a[39409] = sym_string;
	v->a[39410] = sym_simple_expansion;
	v->a[39411] = sym_expansion;
	v->a[39412] = sym_command_substitution;
	v->a[39413] = actions(1093);
	v->a[39414] = 7;
	v->a[39415] = anon_sym_LT;
	v->a[39416] = anon_sym_GT;
	v->a[39417] = anon_sym_GT_GT;
	v->a[39418] = anon_sym_LT_AMP;
	v->a[39419] = anon_sym_GT_AMP;
	small_parse_table_1971(v);
}

void	small_parse_table_1971(t_small_parse_table_array *v)
{
	v->a[39420] = anon_sym_GT_PIPE;
	v->a[39421] = anon_sym_LT_GT;
	v->a[39422] = 3;
	v->a[39423] = actions(3);
	v->a[39424] = 1;
	v->a[39425] = sym_comment;
	v->a[39426] = actions(1132);
	v->a[39427] = 2;
	v->a[39428] = sym_file_descriptor;
	v->a[39429] = sym__bare_dollar;
	v->a[39430] = actions(1134);
	v->a[39431] = 26;
	v->a[39432] = anon_sym_esac;
	v->a[39433] = anon_sym_LPAREN;
	v->a[39434] = anon_sym_PIPE;
	v->a[39435] = anon_sym_SEMI_SEMI;
	v->a[39436] = anon_sym_AMP_AMP;
	v->a[39437] = anon_sym_PIPE_PIPE;
	v->a[39438] = anon_sym_LT;
	v->a[39439] = anon_sym_GT;
	small_parse_table_1972(v);
}

void	small_parse_table_1972(t_small_parse_table_array *v)
{
	v->a[39440] = anon_sym_GT_GT;
	v->a[39441] = anon_sym_LT_AMP;
	v->a[39442] = anon_sym_GT_AMP;
	v->a[39443] = anon_sym_GT_PIPE;
	v->a[39444] = anon_sym_LT_GT;
	v->a[39445] = anon_sym_LT_LT;
	v->a[39446] = anon_sym_LT_LT_DASH;
	v->a[39447] = aux_sym_heredoc_redirect_token1;
	v->a[39448] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39449] = anon_sym_DOLLAR;
	v->a[39450] = anon_sym_DQUOTE;
	v->a[39451] = sym_raw_string;
	v->a[39452] = sym_number;
	v->a[39453] = anon_sym_DOLLAR_LBRACE;
	v->a[39454] = anon_sym_DOLLAR_LPAREN;
	v->a[39455] = anon_sym_BQUOTE;
	v->a[39456] = sym_word;
	v->a[39457] = anon_sym_SEMI;
	v->a[39458] = 4;
	v->a[39459] = actions(3);
	small_parse_table_1973(v);
}

void	small_parse_table_1973(t_small_parse_table_array *v)
{
	v->a[39460] = 1;
	v->a[39461] = sym_comment;
	v->a[39462] = actions(1410);
	v->a[39463] = 2;
	v->a[39464] = anon_sym_esac;
	v->a[39465] = anon_sym_SEMI_SEMI;
	v->a[39466] = actions(1412);
	v->a[39467] = 2;
	v->a[39468] = sym_file_descriptor;
	v->a[39469] = sym_variable_name;
	v->a[39470] = actions(1408);
	v->a[39471] = 24;
	v->a[39472] = anon_sym_for;
	v->a[39473] = anon_sym_while;
	v->a[39474] = anon_sym_until;
	v->a[39475] = anon_sym_if;
	v->a[39476] = anon_sym_case;
	v->a[39477] = anon_sym_LPAREN;
	v->a[39478] = anon_sym_LBRACE;
	v->a[39479] = anon_sym_BANG;
	small_parse_table_1974(v);
}

void	small_parse_table_1974(t_small_parse_table_array *v)
{
	v->a[39480] = anon_sym_LT;
	v->a[39481] = anon_sym_GT;
	v->a[39482] = anon_sym_GT_GT;
	v->a[39483] = anon_sym_LT_AMP;
	v->a[39484] = anon_sym_GT_AMP;
	v->a[39485] = anon_sym_GT_PIPE;
	v->a[39486] = anon_sym_LT_GT;
	v->a[39487] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39488] = anon_sym_DOLLAR;
	v->a[39489] = anon_sym_DQUOTE;
	v->a[39490] = sym_raw_string;
	v->a[39491] = sym_number;
	v->a[39492] = anon_sym_DOLLAR_LBRACE;
	v->a[39493] = anon_sym_DOLLAR_LPAREN;
	v->a[39494] = anon_sym_BQUOTE;
	v->a[39495] = sym_word;
	v->a[39496] = 6;
	v->a[39497] = actions(3);
	v->a[39498] = 1;
	v->a[39499] = sym_comment;
	small_parse_table_1975(v);
}

/* EOF small_parse_table_394.c */
