/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_424.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2120(t_small_parse_table_array *v)
{
	v->a[42400] = 2;
	v->a[42401] = anon_sym_EQ_EQ;
	v->a[42402] = anon_sym_BANG_EQ;
	v->a[42403] = actions(1406);
	v->a[42404] = 3;
	v->a[42405] = anon_sym_STAR;
	v->a[42406] = anon_sym_SLASH;
	v->a[42407] = anon_sym_PERCENT;
	v->a[42408] = actions(1543);
	v->a[42409] = 10;
	v->a[42410] = anon_sym_PLUS_EQ;
	v->a[42411] = anon_sym_DASH_EQ;
	v->a[42412] = anon_sym_STAR_EQ;
	v->a[42413] = anon_sym_SLASH_EQ;
	v->a[42414] = anon_sym_PERCENT_EQ;
	v->a[42415] = anon_sym_LT_LT_EQ;
	v->a[42416] = anon_sym_GT_GT_EQ;
	v->a[42417] = anon_sym_AMP_EQ;
	v->a[42418] = anon_sym_CARET_EQ;
	v->a[42419] = anon_sym_PIPE_EQ;
	small_parse_table_2121(v);
}

void	small_parse_table_2121(t_small_parse_table_array *v)
{
	v->a[42420] = 3;
	v->a[42421] = actions(3);
	v->a[42422] = 1;
	v->a[42423] = sym_comment;
	v->a[42424] = actions(1319);
	v->a[42425] = 2;
	v->a[42426] = sym_file_descriptor;
	v->a[42427] = sym__concat;
	v->a[42428] = actions(1317);
	v->a[42429] = 31;
	v->a[42430] = anon_sym_esac;
	v->a[42431] = anon_sym_PIPE;
	v->a[42432] = anon_sym_SEMI_SEMI;
	v->a[42433] = anon_sym_AMP_AMP;
	v->a[42434] = anon_sym_PIPE_PIPE;
	v->a[42435] = anon_sym_LT;
	v->a[42436] = anon_sym_GT;
	v->a[42437] = anon_sym_GT_GT;
	v->a[42438] = anon_sym_AMP_GT;
	v->a[42439] = anon_sym_AMP_GT_GT;
	small_parse_table_2122(v);
}

void	small_parse_table_2122(t_small_parse_table_array *v)
{
	v->a[42440] = anon_sym_LT_AMP;
	v->a[42441] = anon_sym_GT_AMP;
	v->a[42442] = anon_sym_GT_PIPE;
	v->a[42443] = anon_sym_LT_AMP_DASH;
	v->a[42444] = anon_sym_GT_AMP_DASH;
	v->a[42445] = anon_sym_LT_LT;
	v->a[42446] = anon_sym_LT_LT_DASH;
	v->a[42447] = aux_sym_heredoc_redirect_token1;
	v->a[42448] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42449] = anon_sym_AMP;
	v->a[42450] = aux_sym_concatenation_token1;
	v->a[42451] = anon_sym_DOLLAR;
	v->a[42452] = anon_sym_DQUOTE;
	v->a[42453] = sym_raw_string;
	v->a[42454] = aux_sym_number_token1;
	v->a[42455] = aux_sym_number_token2;
	v->a[42456] = anon_sym_DOLLAR_LBRACE;
	v->a[42457] = anon_sym_DOLLAR_LPAREN;
	v->a[42458] = anon_sym_BQUOTE;
	v->a[42459] = sym_word;
	small_parse_table_2123(v);
}

void	small_parse_table_2123(t_small_parse_table_array *v)
{
	v->a[42460] = anon_sym_SEMI;
	v->a[42461] = 17;
	v->a[42462] = actions(1404);
	v->a[42463] = 1;
	v->a[42464] = sym_comment;
	v->a[42465] = actions(1418);
	v->a[42466] = 1;
	v->a[42467] = anon_sym_AMP;
	v->a[42468] = actions(1420);
	v->a[42469] = 1;
	v->a[42470] = anon_sym_PIPE;
	v->a[42471] = actions(1422);
	v->a[42472] = 1;
	v->a[42473] = anon_sym_AMP_AMP;
	v->a[42474] = actions(1424);
	v->a[42475] = 1;
	v->a[42476] = anon_sym_PIPE_PIPE;
	v->a[42477] = actions(1426);
	v->a[42478] = 1;
	v->a[42479] = anon_sym_EQ;
	small_parse_table_2124(v);
}

void	small_parse_table_2124(t_small_parse_table_array *v)
{
	v->a[42480] = actions(1428);
	v->a[42481] = 1;
	v->a[42482] = anon_sym_CARET;
	v->a[42483] = actions(1430);
	v->a[42484] = 1;
	v->a[42485] = anon_sym_QMARK;
	v->a[42486] = actions(1598);
	v->a[42487] = 1;
	v->a[42488] = anon_sym_RPAREN_RPAREN;
	v->a[42489] = actions(1402);
	v->a[42490] = 2;
	v->a[42491] = anon_sym_PLUS_PLUS2;
	v->a[42492] = anon_sym_DASH_DASH2;
	v->a[42493] = actions(1408);
	v->a[42494] = 2;
	v->a[42495] = anon_sym_LT;
	v->a[42496] = anon_sym_GT;
	v->a[42497] = actions(1410);
	v->a[42498] = 2;
	v->a[42499] = anon_sym_GT_GT;
	small_parse_table_2125(v);
}

/* EOF small_parse_table_424.c */
