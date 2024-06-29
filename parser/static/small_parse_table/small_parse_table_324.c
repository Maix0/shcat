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
	v->a[32400] = 3;
	v->a[32401] = actions(3);
	v->a[32402] = 1;
	v->a[32403] = sym_comment;
	v->a[32404] = actions(1195);
	v->a[32405] = 3;
	v->a[32406] = sym_file_descriptor;
	v->a[32407] = sym__concat;
	v->a[32408] = sym__bare_dollar;
	v->a[32409] = actions(1193);
	v->a[32410] = 31;
	v->a[32411] = anon_sym_LPAREN;
	v->a[32412] = anon_sym_PIPE;
	v->a[32413] = anon_sym_RPAREN;
	v->a[32414] = anon_sym_SEMI_SEMI;
	v->a[32415] = anon_sym_AMP_AMP;
	v->a[32416] = anon_sym_PIPE_PIPE;
	v->a[32417] = anon_sym_LT;
	v->a[32418] = anon_sym_GT;
	v->a[32419] = anon_sym_GT_GT;
	small_parse_table_1621(v);
}

void	small_parse_table_1621(t_small_parse_table_array *v)
{
	v->a[32420] = anon_sym_AMP_GT;
	v->a[32421] = anon_sym_AMP_GT_GT;
	v->a[32422] = anon_sym_LT_AMP;
	v->a[32423] = anon_sym_GT_AMP;
	v->a[32424] = anon_sym_GT_PIPE;
	v->a[32425] = anon_sym_LT_AMP_DASH;
	v->a[32426] = anon_sym_GT_AMP_DASH;
	v->a[32427] = anon_sym_LT_LT;
	v->a[32428] = anon_sym_LT_LT_DASH;
	v->a[32429] = aux_sym_heredoc_redirect_token1;
	v->a[32430] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32431] = anon_sym_AMP;
	v->a[32432] = aux_sym_concatenation_token1;
	v->a[32433] = anon_sym_DOLLAR;
	v->a[32434] = anon_sym_DQUOTE;
	v->a[32435] = sym_raw_string;
	v->a[32436] = sym_number;
	v->a[32437] = anon_sym_DOLLAR_LBRACE;
	v->a[32438] = anon_sym_DOLLAR_LPAREN;
	v->a[32439] = anon_sym_BQUOTE;
	small_parse_table_1622(v);
}

void	small_parse_table_1622(t_small_parse_table_array *v)
{
	v->a[32440] = sym_word;
	v->a[32441] = anon_sym_SEMI;
	v->a[32442] = 3;
	v->a[32443] = actions(3);
	v->a[32444] = 1;
	v->a[32445] = sym_comment;
	v->a[32446] = actions(1114);
	v->a[32447] = 4;
	v->a[32448] = sym_file_descriptor;
	v->a[32449] = sym__concat;
	v->a[32450] = sym__bare_dollar;
	v->a[32451] = ts_builtin_sym_end;
	v->a[32452] = actions(1112);
	v->a[32453] = 30;
	v->a[32454] = anon_sym_LPAREN;
	v->a[32455] = anon_sym_PIPE;
	v->a[32456] = anon_sym_SEMI_SEMI;
	v->a[32457] = anon_sym_AMP_AMP;
	v->a[32458] = anon_sym_PIPE_PIPE;
	v->a[32459] = anon_sym_LT;
	small_parse_table_1623(v);
}

void	small_parse_table_1623(t_small_parse_table_array *v)
{
	v->a[32460] = anon_sym_GT;
	v->a[32461] = anon_sym_GT_GT;
	v->a[32462] = anon_sym_AMP_GT;
	v->a[32463] = anon_sym_AMP_GT_GT;
	v->a[32464] = anon_sym_LT_AMP;
	v->a[32465] = anon_sym_GT_AMP;
	v->a[32466] = anon_sym_GT_PIPE;
	v->a[32467] = anon_sym_LT_AMP_DASH;
	v->a[32468] = anon_sym_GT_AMP_DASH;
	v->a[32469] = anon_sym_LT_LT;
	v->a[32470] = anon_sym_LT_LT_DASH;
	v->a[32471] = aux_sym_heredoc_redirect_token1;
	v->a[32472] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32473] = anon_sym_AMP;
	v->a[32474] = aux_sym_concatenation_token1;
	v->a[32475] = anon_sym_DOLLAR;
	v->a[32476] = anon_sym_DQUOTE;
	v->a[32477] = sym_raw_string;
	v->a[32478] = sym_number;
	v->a[32479] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1624(v);
}

void	small_parse_table_1624(t_small_parse_table_array *v)
{
	v->a[32480] = anon_sym_DOLLAR_LPAREN;
	v->a[32481] = anon_sym_BQUOTE;
	v->a[32482] = sym_word;
	v->a[32483] = anon_sym_SEMI;
	v->a[32484] = 3;
	v->a[32485] = actions(3);
	v->a[32486] = 1;
	v->a[32487] = sym_comment;
	v->a[32488] = actions(1126);
	v->a[32489] = 4;
	v->a[32490] = sym_file_descriptor;
	v->a[32491] = sym__concat;
	v->a[32492] = sym__bare_dollar;
	v->a[32493] = ts_builtin_sym_end;
	v->a[32494] = actions(1124);
	v->a[32495] = 30;
	v->a[32496] = anon_sym_LPAREN;
	v->a[32497] = anon_sym_PIPE;
	v->a[32498] = anon_sym_SEMI_SEMI;
	v->a[32499] = anon_sym_AMP_AMP;
	small_parse_table_1625(v);
}

/* EOF small_parse_table_324.c */
