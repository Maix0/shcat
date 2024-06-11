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
	v->a[42400] = anon_sym_QMARK;
	v->a[42401] = 6;
	v->a[42402] = actions(3);
	v->a[42403] = 1;
	v->a[42404] = sym_comment;
	v->a[42405] = actions(1219);
	v->a[42406] = 1;
	v->a[42407] = sym_file_descriptor;
	v->a[42408] = actions(1344);
	v->a[42409] = 1;
	v->a[42410] = aux_sym_concatenation_token1;
	v->a[42411] = actions(1494);
	v->a[42412] = 1;
	v->a[42413] = sym__concat;
	v->a[42414] = state(456);
	v->a[42415] = 1;
	v->a[42416] = aux_sym_concatenation_repeat1;
	v->a[42417] = actions(1215);
	v->a[42418] = 29;
	v->a[42419] = anon_sym_PIPE;
	small_parse_table_2121(v);
}

void	small_parse_table_2121(t_small_parse_table_array *v)
{
	v->a[42420] = anon_sym_RPAREN;
	v->a[42421] = anon_sym_SEMI_SEMI;
	v->a[42422] = anon_sym_AMP_AMP;
	v->a[42423] = anon_sym_PIPE_PIPE;
	v->a[42424] = anon_sym_LT;
	v->a[42425] = anon_sym_GT;
	v->a[42426] = anon_sym_GT_GT;
	v->a[42427] = anon_sym_AMP_GT;
	v->a[42428] = anon_sym_AMP_GT_GT;
	v->a[42429] = anon_sym_LT_AMP;
	v->a[42430] = anon_sym_GT_AMP;
	v->a[42431] = anon_sym_GT_PIPE;
	v->a[42432] = anon_sym_LT_AMP_DASH;
	v->a[42433] = anon_sym_GT_AMP_DASH;
	v->a[42434] = anon_sym_LT_LT;
	v->a[42435] = anon_sym_LT_LT_DASH;
	v->a[42436] = aux_sym_heredoc_redirect_token1;
	v->a[42437] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42438] = anon_sym_AMP;
	v->a[42439] = anon_sym_DOLLAR;
	small_parse_table_2122(v);
}

void	small_parse_table_2122(t_small_parse_table_array *v)
{
	v->a[42440] = anon_sym_DQUOTE;
	v->a[42441] = sym_raw_string;
	v->a[42442] = sym_number;
	v->a[42443] = anon_sym_DOLLAR_LBRACE;
	v->a[42444] = anon_sym_DOLLAR_LPAREN;
	v->a[42445] = anon_sym_BQUOTE;
	v->a[42446] = sym_word;
	v->a[42447] = anon_sym_SEMI;
	v->a[42448] = 17;
	v->a[42449] = actions(1094);
	v->a[42450] = 1;
	v->a[42451] = sym_comment;
	v->a[42452] = actions(1108);
	v->a[42453] = 1;
	v->a[42454] = anon_sym_PIPE;
	v->a[42455] = actions(1110);
	v->a[42456] = 1;
	v->a[42457] = anon_sym_AMP_AMP;
	v->a[42458] = actions(1112);
	v->a[42459] = 1;
	small_parse_table_2123(v);
}

void	small_parse_table_2123(t_small_parse_table_array *v)
{
	v->a[42460] = anon_sym_CARET;
	v->a[42461] = actions(1114);
	v->a[42462] = 1;
	v->a[42463] = anon_sym_AMP;
	v->a[42464] = actions(1126);
	v->a[42465] = 1;
	v->a[42466] = anon_sym_PIPE_PIPE;
	v->a[42467] = actions(1128);
	v->a[42468] = 1;
	v->a[42469] = anon_sym_QMARK;
	v->a[42470] = actions(1155);
	v->a[42471] = 1;
	v->a[42472] = anon_sym_EQ;
	v->a[42473] = actions(1496);
	v->a[42474] = 1;
	v->a[42475] = anon_sym_COLON;
	v->a[42476] = actions(1082);
	v->a[42477] = 2;
	v->a[42478] = anon_sym_LT;
	v->a[42479] = anon_sym_GT;
	small_parse_table_2124(v);
}

void	small_parse_table_2124(t_small_parse_table_array *v)
{
	v->a[42480] = actions(1084);
	v->a[42481] = 2;
	v->a[42482] = anon_sym_GT_GT;
	v->a[42483] = anon_sym_LT_LT;
	v->a[42484] = actions(1086);
	v->a[42485] = 2;
	v->a[42486] = anon_sym_LT_EQ;
	v->a[42487] = anon_sym_GT_EQ;
	v->a[42488] = actions(1088);
	v->a[42489] = 2;
	v->a[42490] = anon_sym_PLUS;
	v->a[42491] = anon_sym_DASH;
	v->a[42492] = actions(1092);
	v->a[42493] = 2;
	v->a[42494] = anon_sym_PLUS_PLUS2;
	v->a[42495] = anon_sym_DASH_DASH2;
	v->a[42496] = actions(1116);
	v->a[42497] = 2;
	v->a[42498] = anon_sym_EQ_EQ;
	v->a[42499] = anon_sym_BANG_EQ;
	small_parse_table_2125(v);
}

/* EOF small_parse_table_424.c */
