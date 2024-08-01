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
	v->a[32400] = actions(909);
	v->a[32401] = 17;
	v->a[32402] = anon_sym_PIPE;
	v->a[32403] = anon_sym_AMP_AMP;
	v->a[32404] = anon_sym_PIPE_PIPE;
	v->a[32405] = anon_sym_LT;
	v->a[32406] = anon_sym_GT;
	v->a[32407] = anon_sym_GT_GT;
	v->a[32408] = anon_sym_LT_LT;
	v->a[32409] = aux_sym_heredoc_redirect_token1;
	v->a[32410] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32411] = anon_sym_DOLLAR;
	v->a[32412] = anon_sym_DQUOTE;
	v->a[32413] = sym_raw_string;
	v->a[32414] = sym_number;
	v->a[32415] = anon_sym_DOLLAR_LBRACE;
	v->a[32416] = anon_sym_DOLLAR_LPAREN;
	v->a[32417] = anon_sym_BQUOTE;
	v->a[32418] = sym_word;
	v->a[32419] = 6;
	small_parse_table_1621(v);
}

void	small_parse_table_1621(t_small_parse_table_array *v)
{
	v->a[32420] = actions(3);
	v->a[32421] = 1;
	v->a[32422] = sym_comment;
	v->a[32423] = actions(1257);
	v->a[32424] = 1;
	v->a[32425] = sym_variable_name;
	v->a[32426] = actions(1323);
	v->a[32427] = 1;
	v->a[32428] = anon_sym_RPAREN;
	v->a[32429] = actions(1254);
	v->a[32430] = 3;
	v->a[32431] = anon_sym_LT;
	v->a[32432] = anon_sym_GT;
	v->a[32433] = anon_sym_GT_GT;
	v->a[32434] = actions(1249);
	v->a[32435] = 7;
	v->a[32436] = anon_sym_PIPE;
	v->a[32437] = anon_sym_SEMI_SEMI;
	v->a[32438] = anon_sym_AMP_AMP;
	v->a[32439] = anon_sym_PIPE_PIPE;
	small_parse_table_1622(v);
}

void	small_parse_table_1622(t_small_parse_table_array *v)
{
	v->a[32440] = anon_sym_LT_LT;
	v->a[32441] = aux_sym_heredoc_redirect_token1;
	v->a[32442] = anon_sym_SEMI;
	v->a[32443] = actions(1247);
	v->a[32444] = 9;
	v->a[32445] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32446] = anon_sym_DOLLAR;
	v->a[32447] = anon_sym_DQUOTE;
	v->a[32448] = sym_raw_string;
	v->a[32449] = sym_number;
	v->a[32450] = anon_sym_DOLLAR_LBRACE;
	v->a[32451] = anon_sym_DOLLAR_LPAREN;
	v->a[32452] = anon_sym_BQUOTE;
	v->a[32453] = sym_word;
	v->a[32454] = 15;
	v->a[32455] = actions(3);
	v->a[32456] = 1;
	v->a[32457] = sym_comment;
	v->a[32458] = actions(778);
	v->a[32459] = 1;
	small_parse_table_1623(v);
}

void	small_parse_table_1623(t_small_parse_table_array *v)
{
	v->a[32460] = anon_sym_LPAREN;
	v->a[32461] = actions(782);
	v->a[32462] = 1;
	v->a[32463] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32464] = actions(784);
	v->a[32465] = 1;
	v->a[32466] = anon_sym_DOLLAR;
	v->a[32467] = actions(786);
	v->a[32468] = 1;
	v->a[32469] = anon_sym_DQUOTE;
	v->a[32470] = actions(788);
	v->a[32471] = 1;
	v->a[32472] = anon_sym_DOLLAR_LBRACE;
	v->a[32473] = actions(790);
	v->a[32474] = 1;
	v->a[32475] = anon_sym_DOLLAR_LPAREN;
	v->a[32476] = actions(792);
	v->a[32477] = 1;
	v->a[32478] = anon_sym_BQUOTE;
	v->a[32479] = actions(794);
	small_parse_table_1624(v);
}

void	small_parse_table_1624(t_small_parse_table_array *v)
{
	v->a[32480] = 1;
	v->a[32481] = sym_extglob_pattern;
	v->a[32482] = state(597);
	v->a[32483] = 1;
	v->a[32484] = aux_sym_case_statement_repeat1;
	v->a[32485] = state(1232);
	v->a[32486] = 1;
	v->a[32487] = sym_case_item;
	v->a[32488] = state(1634);
	v->a[32489] = 1;
	v->a[32490] = sym__case_item_last;
	v->a[32491] = state(1538);
	v->a[32492] = 2;
	v->a[32493] = sym_concatenation;
	v->a[32494] = sym__extglob_blob;
	v->a[32495] = actions(774);
	v->a[32496] = 3;
	v->a[32497] = sym_raw_string;
	v->a[32498] = sym_number;
	v->a[32499] = sym_word;
	small_parse_table_1625(v);
}

/* EOF small_parse_table_324.c */
