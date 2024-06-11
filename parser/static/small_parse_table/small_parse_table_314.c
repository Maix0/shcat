/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_314.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1570(t_small_parse_table_array *v)
{
	v->a[31400] = anon_sym_AMP_AMP;
	v->a[31401] = anon_sym_PIPE_PIPE;
	v->a[31402] = anon_sym_LT;
	v->a[31403] = anon_sym_GT;
	v->a[31404] = anon_sym_GT_GT;
	v->a[31405] = anon_sym_AMP_GT;
	v->a[31406] = anon_sym_AMP_GT_GT;
	v->a[31407] = anon_sym_LT_AMP;
	v->a[31408] = anon_sym_GT_AMP;
	v->a[31409] = anon_sym_GT_PIPE;
	v->a[31410] = anon_sym_LT_AMP_DASH;
	v->a[31411] = anon_sym_GT_AMP_DASH;
	v->a[31412] = anon_sym_LT_LT;
	v->a[31413] = anon_sym_LT_LT_DASH;
	v->a[31414] = aux_sym_heredoc_redirect_token1;
	v->a[31415] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31416] = anon_sym_AMP;
	v->a[31417] = anon_sym_DOLLAR;
	v->a[31418] = anon_sym_DQUOTE;
	v->a[31419] = sym_raw_string;
	small_parse_table_1571(v);
}

void	small_parse_table_1571(t_small_parse_table_array *v)
{
	v->a[31420] = sym_number;
	v->a[31421] = anon_sym_DOLLAR_LBRACE;
	v->a[31422] = anon_sym_DOLLAR_LPAREN;
	v->a[31423] = anon_sym_BQUOTE;
	v->a[31424] = sym_word;
	v->a[31425] = anon_sym_SEMI;
	v->a[31426] = 15;
	v->a[31427] = actions(1094);
	v->a[31428] = 1;
	v->a[31429] = sym_comment;
	v->a[31430] = actions(1108);
	v->a[31431] = 1;
	v->a[31432] = anon_sym_PIPE;
	v->a[31433] = actions(1110);
	v->a[31434] = 1;
	v->a[31435] = anon_sym_AMP_AMP;
	v->a[31436] = actions(1112);
	v->a[31437] = 1;
	v->a[31438] = anon_sym_CARET;
	v->a[31439] = actions(1114);
	small_parse_table_1572(v);
}

void	small_parse_table_1572(t_small_parse_table_array *v)
{
	v->a[31440] = 1;
	v->a[31441] = anon_sym_AMP;
	v->a[31442] = actions(1126);
	v->a[31443] = 1;
	v->a[31444] = anon_sym_PIPE_PIPE;
	v->a[31445] = actions(1229);
	v->a[31446] = 1;
	v->a[31447] = anon_sym_EQ;
	v->a[31448] = actions(1082);
	v->a[31449] = 2;
	v->a[31450] = anon_sym_LT;
	v->a[31451] = anon_sym_GT;
	v->a[31452] = actions(1084);
	v->a[31453] = 2;
	v->a[31454] = anon_sym_GT_GT;
	v->a[31455] = anon_sym_LT_LT;
	v->a[31456] = actions(1086);
	v->a[31457] = 2;
	v->a[31458] = anon_sym_LT_EQ;
	v->a[31459] = anon_sym_GT_EQ;
	small_parse_table_1573(v);
}

void	small_parse_table_1573(t_small_parse_table_array *v)
{
	v->a[31460] = actions(1088);
	v->a[31461] = 2;
	v->a[31462] = anon_sym_PLUS;
	v->a[31463] = anon_sym_DASH;
	v->a[31464] = actions(1092);
	v->a[31465] = 2;
	v->a[31466] = anon_sym_PLUS_PLUS2;
	v->a[31467] = anon_sym_DASH_DASH2;
	v->a[31468] = actions(1116);
	v->a[31469] = 2;
	v->a[31470] = anon_sym_EQ_EQ;
	v->a[31471] = anon_sym_BANG_EQ;
	v->a[31472] = actions(1090);
	v->a[31473] = 3;
	v->a[31474] = anon_sym_STAR;
	v->a[31475] = anon_sym_SLASH;
	v->a[31476] = anon_sym_PERCENT;
	v->a[31477] = actions(1231);
	v->a[31478] = 13;
	v->a[31479] = anon_sym_RPAREN_RPAREN;
	small_parse_table_1574(v);
}

void	small_parse_table_1574(t_small_parse_table_array *v)
{
	v->a[31480] = anon_sym_PLUS_EQ;
	v->a[31481] = anon_sym_DASH_EQ;
	v->a[31482] = anon_sym_STAR_EQ;
	v->a[31483] = anon_sym_SLASH_EQ;
	v->a[31484] = anon_sym_PERCENT_EQ;
	v->a[31485] = anon_sym_LT_LT_EQ;
	v->a[31486] = anon_sym_GT_GT_EQ;
	v->a[31487] = anon_sym_AMP_EQ;
	v->a[31488] = anon_sym_CARET_EQ;
	v->a[31489] = anon_sym_PIPE_EQ;
	v->a[31490] = anon_sym_QMARK;
	v->a[31491] = anon_sym_COLON;
	v->a[31492] = 3;
	v->a[31493] = actions(3);
	v->a[31494] = 1;
	v->a[31495] = sym_comment;
	v->a[31496] = actions(1187);
	v->a[31497] = 3;
	v->a[31498] = sym_file_descriptor;
	v->a[31499] = sym__concat;
	small_parse_table_1575(v);
}

/* EOF small_parse_table_314.c */
