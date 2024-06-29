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
	v->a[31400] = 21;
	v->a[31401] = anon_sym_AMP_AMP;
	v->a[31402] = anon_sym_PIPE_PIPE;
	v->a[31403] = anon_sym_RPAREN_RPAREN;
	v->a[31404] = anon_sym_PLUS_EQ;
	v->a[31405] = anon_sym_DASH_EQ;
	v->a[31406] = anon_sym_STAR_EQ;
	v->a[31407] = anon_sym_SLASH_EQ;
	v->a[31408] = anon_sym_PERCENT_EQ;
	v->a[31409] = anon_sym_LT_LT_EQ;
	v->a[31410] = anon_sym_GT_GT_EQ;
	v->a[31411] = anon_sym_AMP_EQ;
	v->a[31412] = anon_sym_CARET_EQ;
	v->a[31413] = anon_sym_PIPE_EQ;
	v->a[31414] = anon_sym_EQ_EQ;
	v->a[31415] = anon_sym_BANG_EQ;
	v->a[31416] = anon_sym_LT_EQ;
	v->a[31417] = anon_sym_GT_EQ;
	v->a[31418] = anon_sym_QMARK;
	v->a[31419] = anon_sym_COLON;
	small_parse_table_1571(v);
}

void	small_parse_table_1571(t_small_parse_table_array *v)
{
	v->a[31420] = anon_sym_PLUS_PLUS2;
	v->a[31421] = anon_sym_DASH_DASH2;
	v->a[31422] = 6;
	v->a[31423] = actions(3);
	v->a[31424] = 1;
	v->a[31425] = sym_comment;
	v->a[31426] = actions(1176);
	v->a[31427] = 1;
	v->a[31428] = aux_sym_concatenation_token1;
	v->a[31429] = actions(1178);
	v->a[31430] = 1;
	v->a[31431] = sym__concat;
	v->a[31432] = state(372);
	v->a[31433] = 1;
	v->a[31434] = aux_sym_concatenation_repeat1;
	v->a[31435] = actions(538);
	v->a[31436] = 3;
	v->a[31437] = sym_file_descriptor;
	v->a[31438] = sym_variable_name;
	v->a[31439] = ts_builtin_sym_end;
	small_parse_table_1572(v);
}

void	small_parse_table_1572(t_small_parse_table_array *v)
{
	v->a[31440] = actions(540);
	v->a[31441] = 28;
	v->a[31442] = anon_sym_PIPE;
	v->a[31443] = anon_sym_SEMI_SEMI;
	v->a[31444] = anon_sym_AMP_AMP;
	v->a[31445] = anon_sym_PIPE_PIPE;
	v->a[31446] = anon_sym_LT;
	v->a[31447] = anon_sym_GT;
	v->a[31448] = anon_sym_GT_GT;
	v->a[31449] = anon_sym_AMP_GT;
	v->a[31450] = anon_sym_AMP_GT_GT;
	v->a[31451] = anon_sym_LT_AMP;
	v->a[31452] = anon_sym_GT_AMP;
	v->a[31453] = anon_sym_GT_PIPE;
	v->a[31454] = anon_sym_LT_AMP_DASH;
	v->a[31455] = anon_sym_GT_AMP_DASH;
	v->a[31456] = anon_sym_LT_LT;
	v->a[31457] = anon_sym_LT_LT_DASH;
	v->a[31458] = aux_sym_heredoc_redirect_token1;
	v->a[31459] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1573(v);
}

void	small_parse_table_1573(t_small_parse_table_array *v)
{
	v->a[31460] = anon_sym_AMP;
	v->a[31461] = anon_sym_DOLLAR;
	v->a[31462] = anon_sym_DQUOTE;
	v->a[31463] = sym_raw_string;
	v->a[31464] = sym_number;
	v->a[31465] = anon_sym_DOLLAR_LBRACE;
	v->a[31466] = anon_sym_DOLLAR_LPAREN;
	v->a[31467] = anon_sym_BQUOTE;
	v->a[31468] = sym_word;
	v->a[31469] = anon_sym_SEMI;
	v->a[31470] = 6;
	v->a[31471] = actions(3);
	v->a[31472] = 1;
	v->a[31473] = sym_comment;
	v->a[31474] = actions(1176);
	v->a[31475] = 1;
	v->a[31476] = aux_sym_concatenation_token1;
	v->a[31477] = actions(1217);
	v->a[31478] = 1;
	v->a[31479] = sym__concat;
	small_parse_table_1574(v);
}

void	small_parse_table_1574(t_small_parse_table_array *v)
{
	v->a[31480] = state(309);
	v->a[31481] = 1;
	v->a[31482] = aux_sym_concatenation_repeat1;
	v->a[31483] = actions(961);
	v->a[31484] = 3;
	v->a[31485] = sym_file_descriptor;
	v->a[31486] = sym_variable_name;
	v->a[31487] = ts_builtin_sym_end;
	v->a[31488] = actions(957);
	v->a[31489] = 28;
	v->a[31490] = anon_sym_PIPE;
	v->a[31491] = anon_sym_SEMI_SEMI;
	v->a[31492] = anon_sym_AMP_AMP;
	v->a[31493] = anon_sym_PIPE_PIPE;
	v->a[31494] = anon_sym_LT;
	v->a[31495] = anon_sym_GT;
	v->a[31496] = anon_sym_GT_GT;
	v->a[31497] = anon_sym_AMP_GT;
	v->a[31498] = anon_sym_AMP_GT_GT;
	v->a[31499] = anon_sym_LT_AMP;
	small_parse_table_1575(v);
}

/* EOF small_parse_table_314.c */
