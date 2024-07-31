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
	v->a[32400] = sym_expansion;
	v->a[32401] = sym_command_substitution;
	v->a[32402] = actions(965);
	v->a[32403] = 7;
	v->a[32404] = anon_sym_LT;
	v->a[32405] = anon_sym_GT;
	v->a[32406] = anon_sym_GT_GT;
	v->a[32407] = anon_sym_LT_AMP;
	v->a[32408] = anon_sym_GT_AMP;
	v->a[32409] = anon_sym_GT_PIPE;
	v->a[32410] = anon_sym_LT_GT;
	v->a[32411] = 3;
	v->a[32412] = actions(3);
	v->a[32413] = 1;
	v->a[32414] = sym_comment;
	v->a[32415] = actions(1167);
	v->a[32416] = 1;
	v->a[32417] = sym__concat;
	v->a[32418] = actions(1169);
	v->a[32419] = 26;
	small_parse_table_1621(v);
}

void	small_parse_table_1621(t_small_parse_table_array *v)
{
	v->a[32420] = anon_sym_PIPE;
	v->a[32421] = anon_sym_RPAREN;
	v->a[32422] = anon_sym_SEMI_SEMI;
	v->a[32423] = anon_sym_AMP_AMP;
	v->a[32424] = anon_sym_PIPE_PIPE;
	v->a[32425] = anon_sym_LT;
	v->a[32426] = anon_sym_GT;
	v->a[32427] = anon_sym_GT_GT;
	v->a[32428] = anon_sym_LT_AMP;
	v->a[32429] = anon_sym_GT_AMP;
	v->a[32430] = anon_sym_GT_PIPE;
	v->a[32431] = anon_sym_LT_GT;
	v->a[32432] = anon_sym_LT_LT;
	v->a[32433] = anon_sym_LT_LT_DASH;
	v->a[32434] = aux_sym_heredoc_redirect_token1;
	v->a[32435] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32436] = aux_sym_concatenation_token1;
	v->a[32437] = anon_sym_DOLLAR;
	v->a[32438] = anon_sym_DQUOTE;
	v->a[32439] = sym_raw_string;
	small_parse_table_1622(v);
}

void	small_parse_table_1622(t_small_parse_table_array *v)
{
	v->a[32440] = sym_number;
	v->a[32441] = anon_sym_DOLLAR_LBRACE;
	v->a[32442] = anon_sym_DOLLAR_LPAREN;
	v->a[32443] = anon_sym_BQUOTE;
	v->a[32444] = sym_word;
	v->a[32445] = anon_sym_SEMI;
	v->a[32446] = 3;
	v->a[32447] = actions(3);
	v->a[32448] = 1;
	v->a[32449] = sym_comment;
	v->a[32450] = actions(1147);
	v->a[32451] = 1;
	v->a[32452] = sym__concat;
	v->a[32453] = actions(1145);
	v->a[32454] = 26;
	v->a[32455] = anon_sym_PIPE;
	v->a[32456] = anon_sym_RPAREN;
	v->a[32457] = anon_sym_SEMI_SEMI;
	v->a[32458] = anon_sym_AMP_AMP;
	v->a[32459] = anon_sym_PIPE_PIPE;
	small_parse_table_1623(v);
}

void	small_parse_table_1623(t_small_parse_table_array *v)
{
	v->a[32460] = anon_sym_LT;
	v->a[32461] = anon_sym_GT;
	v->a[32462] = anon_sym_GT_GT;
	v->a[32463] = anon_sym_LT_AMP;
	v->a[32464] = anon_sym_GT_AMP;
	v->a[32465] = anon_sym_GT_PIPE;
	v->a[32466] = anon_sym_LT_GT;
	v->a[32467] = anon_sym_LT_LT;
	v->a[32468] = anon_sym_LT_LT_DASH;
	v->a[32469] = aux_sym_heredoc_redirect_token1;
	v->a[32470] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32471] = aux_sym_concatenation_token1;
	v->a[32472] = anon_sym_DOLLAR;
	v->a[32473] = anon_sym_DQUOTE;
	v->a[32474] = sym_raw_string;
	v->a[32475] = sym_number;
	v->a[32476] = anon_sym_DOLLAR_LBRACE;
	v->a[32477] = anon_sym_DOLLAR_LPAREN;
	v->a[32478] = anon_sym_BQUOTE;
	v->a[32479] = sym_word;
	small_parse_table_1624(v);
}

void	small_parse_table_1624(t_small_parse_table_array *v)
{
	v->a[32480] = anon_sym_SEMI;
	v->a[32481] = 3;
	v->a[32482] = actions(3);
	v->a[32483] = 1;
	v->a[32484] = sym_comment;
	v->a[32485] = actions(445);
	v->a[32486] = 2;
	v->a[32487] = sym__concat;
	v->a[32488] = ts_builtin_sym_end;
	v->a[32489] = actions(443);
	v->a[32490] = 25;
	v->a[32491] = anon_sym_PIPE;
	v->a[32492] = anon_sym_SEMI_SEMI;
	v->a[32493] = anon_sym_AMP_AMP;
	v->a[32494] = anon_sym_PIPE_PIPE;
	v->a[32495] = anon_sym_LT;
	v->a[32496] = anon_sym_GT;
	v->a[32497] = anon_sym_GT_GT;
	v->a[32498] = anon_sym_LT_AMP;
	v->a[32499] = anon_sym_GT_AMP;
	small_parse_table_1625(v);
}

/* EOF small_parse_table_324.c */
