/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_324.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1620(t_small_parse_table_array *v)
{
	v->a[32400] = sym_raw_string;
	v->a[32401] = sym_number;
	v->a[32402] = anon_sym_DOLLAR_LBRACE;
	v->a[32403] = anon_sym_DOLLAR_LPAREN;
	v->a[32404] = anon_sym_BQUOTE;
	v->a[32405] = sym_word;
	v->a[32406] = anon_sym_SEMI;
	v->a[32407] = 6;
	v->a[32408] = actions(3);
	v->a[32409] = 1;
	v->a[32410] = sym_comment;
	v->a[32411] = actions(1081);
	v->a[32412] = 1;
	v->a[32413] = aux_sym_concatenation_token1;
	v->a[32414] = actions(1233);
	v->a[32415] = 1;
	v->a[32416] = sym__concat;
	v->a[32417] = state(365);
	v->a[32418] = 1;
	v->a[32419] = aux_sym_concatenation_repeat1;
	small_parse_table_1621(v);
}

void	small_parse_table_1621(t_small_parse_table_array *v)
{
	v->a[32420] = actions(1043);
	v->a[32421] = 2;
	v->a[32422] = sym_file_descriptor;
	v->a[32423] = sym__bare_dollar;
	v->a[32424] = actions(1045);
	v->a[32425] = 26;
	v->a[32426] = anon_sym_LPAREN;
	v->a[32427] = anon_sym_PIPE;
	v->a[32428] = anon_sym_SEMI_SEMI;
	v->a[32429] = anon_sym_AMP_AMP;
	v->a[32430] = anon_sym_PIPE_PIPE;
	v->a[32431] = anon_sym_LT;
	v->a[32432] = anon_sym_GT;
	v->a[32433] = anon_sym_GT_GT;
	v->a[32434] = anon_sym_LT_AMP;
	v->a[32435] = anon_sym_GT_AMP;
	v->a[32436] = anon_sym_GT_PIPE;
	v->a[32437] = anon_sym_LT_GT;
	v->a[32438] = anon_sym_LT_LT;
	v->a[32439] = anon_sym_LT_LT_DASH;
	small_parse_table_1622(v);
}

void	small_parse_table_1622(t_small_parse_table_array *v)
{
	v->a[32440] = aux_sym_heredoc_redirect_token1;
	v->a[32441] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32442] = anon_sym_AMP;
	v->a[32443] = anon_sym_DOLLAR;
	v->a[32444] = anon_sym_DQUOTE;
	v->a[32445] = sym_raw_string;
	v->a[32446] = sym_number;
	v->a[32447] = anon_sym_DOLLAR_LBRACE;
	v->a[32448] = anon_sym_DOLLAR_LPAREN;
	v->a[32449] = anon_sym_BQUOTE;
	v->a[32450] = sym_word;
	v->a[32451] = anon_sym_SEMI;
	v->a[32452] = 3;
	v->a[32453] = actions(3);
	v->a[32454] = 1;
	v->a[32455] = sym_comment;
	v->a[32456] = actions(792);
	v->a[32457] = 3;
	v->a[32458] = sym_file_descriptor;
	v->a[32459] = sym__concat;
	small_parse_table_1623(v);
}

void	small_parse_table_1623(t_small_parse_table_array *v)
{
	v->a[32460] = sym__bare_dollar;
	v->a[32461] = actions(790);
	v->a[32462] = 28;
	v->a[32463] = anon_sym_LPAREN;
	v->a[32464] = anon_sym_PIPE;
	v->a[32465] = anon_sym_RPAREN;
	v->a[32466] = anon_sym_SEMI_SEMI;
	v->a[32467] = anon_sym_AMP_AMP;
	v->a[32468] = anon_sym_PIPE_PIPE;
	v->a[32469] = anon_sym_LT;
	v->a[32470] = anon_sym_GT;
	v->a[32471] = anon_sym_GT_GT;
	v->a[32472] = anon_sym_LT_AMP;
	v->a[32473] = anon_sym_GT_AMP;
	v->a[32474] = anon_sym_GT_PIPE;
	v->a[32475] = anon_sym_LT_GT;
	v->a[32476] = anon_sym_LT_LT;
	v->a[32477] = anon_sym_LT_LT_DASH;
	v->a[32478] = aux_sym_heredoc_redirect_token1;
	v->a[32479] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1624(v);
}

void	small_parse_table_1624(t_small_parse_table_array *v)
{
	v->a[32480] = anon_sym_AMP;
	v->a[32481] = aux_sym_concatenation_token1;
	v->a[32482] = anon_sym_DOLLAR;
	v->a[32483] = anon_sym_DQUOTE;
	v->a[32484] = sym_raw_string;
	v->a[32485] = sym_number;
	v->a[32486] = anon_sym_DOLLAR_LBRACE;
	v->a[32487] = anon_sym_DOLLAR_LPAREN;
	v->a[32488] = anon_sym_BQUOTE;
	v->a[32489] = sym_word;
	v->a[32490] = anon_sym_SEMI;
	v->a[32491] = 3;
	v->a[32492] = actions(3);
	v->a[32493] = 1;
	v->a[32494] = sym_comment;
	v->a[32495] = actions(784);
	v->a[32496] = 4;
	v->a[32497] = sym_file_descriptor;
	v->a[32498] = sym__concat;
	v->a[32499] = sym__bare_dollar;
	small_parse_table_1625(v);
}

/* EOF small_parse_table_324.c */
