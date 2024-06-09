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
	v->a[31400] = actions(567);
	v->a[31401] = 30;
	v->a[31402] = anon_sym_PIPE;
	v->a[31403] = anon_sym_RPAREN;
	v->a[31404] = anon_sym_SEMI_SEMI;
	v->a[31405] = anon_sym_AMP_AMP;
	v->a[31406] = anon_sym_PIPE_PIPE;
	v->a[31407] = anon_sym_LT;
	v->a[31408] = anon_sym_GT;
	v->a[31409] = anon_sym_GT_GT;
	v->a[31410] = anon_sym_AMP_GT;
	v->a[31411] = anon_sym_AMP_GT_GT;
	v->a[31412] = anon_sym_LT_AMP;
	v->a[31413] = anon_sym_GT_AMP;
	v->a[31414] = anon_sym_GT_PIPE;
	v->a[31415] = anon_sym_LT_AMP_DASH;
	v->a[31416] = anon_sym_GT_AMP_DASH;
	v->a[31417] = anon_sym_LT_LT;
	v->a[31418] = anon_sym_LT_LT_DASH;
	v->a[31419] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1571(v);
}

void	small_parse_table_1571(t_small_parse_table_array *v)
{
	v->a[31420] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31421] = anon_sym_AMP;
	v->a[31422] = anon_sym_DOLLAR;
	v->a[31423] = anon_sym_DQUOTE;
	v->a[31424] = sym_raw_string;
	v->a[31425] = aux_sym_number_token1;
	v->a[31426] = aux_sym_number_token2;
	v->a[31427] = anon_sym_DOLLAR_LBRACE;
	v->a[31428] = anon_sym_DOLLAR_LPAREN;
	v->a[31429] = anon_sym_BQUOTE;
	v->a[31430] = sym_word;
	v->a[31431] = anon_sym_SEMI;
	v->a[31432] = 3;
	v->a[31433] = actions(3);
	v->a[31434] = 1;
	v->a[31435] = sym_comment;
	v->a[31436] = actions(1251);
	v->a[31437] = 4;
	v->a[31438] = sym_file_descriptor;
	v->a[31439] = sym__concat;
	small_parse_table_1572(v);
}

void	small_parse_table_1572(t_small_parse_table_array *v)
{
	v->a[31440] = sym__bare_dollar;
	v->a[31441] = ts_builtin_sym_end;
	v->a[31442] = actions(1253);
	v->a[31443] = 31;
	v->a[31444] = anon_sym_LPAREN;
	v->a[31445] = anon_sym_PIPE;
	v->a[31446] = anon_sym_SEMI_SEMI;
	v->a[31447] = anon_sym_AMP_AMP;
	v->a[31448] = anon_sym_PIPE_PIPE;
	v->a[31449] = anon_sym_LT;
	v->a[31450] = anon_sym_GT;
	v->a[31451] = anon_sym_GT_GT;
	v->a[31452] = anon_sym_AMP_GT;
	v->a[31453] = anon_sym_AMP_GT_GT;
	v->a[31454] = anon_sym_LT_AMP;
	v->a[31455] = anon_sym_GT_AMP;
	v->a[31456] = anon_sym_GT_PIPE;
	v->a[31457] = anon_sym_LT_AMP_DASH;
	v->a[31458] = anon_sym_GT_AMP_DASH;
	v->a[31459] = anon_sym_LT_LT;
	small_parse_table_1573(v);
}

void	small_parse_table_1573(t_small_parse_table_array *v)
{
	v->a[31460] = anon_sym_LT_LT_DASH;
	v->a[31461] = aux_sym_heredoc_redirect_token1;
	v->a[31462] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31463] = anon_sym_AMP;
	v->a[31464] = aux_sym_concatenation_token1;
	v->a[31465] = anon_sym_DOLLAR;
	v->a[31466] = anon_sym_DQUOTE;
	v->a[31467] = sym_raw_string;
	v->a[31468] = aux_sym_number_token1;
	v->a[31469] = aux_sym_number_token2;
	v->a[31470] = anon_sym_DOLLAR_LBRACE;
	v->a[31471] = anon_sym_DOLLAR_LPAREN;
	v->a[31472] = anon_sym_BQUOTE;
	v->a[31473] = sym_word;
	v->a[31474] = anon_sym_SEMI;
	v->a[31475] = 6;
	v->a[31476] = actions(3);
	v->a[31477] = 1;
	v->a[31478] = sym_comment;
	v->a[31479] = actions(1200);
	small_parse_table_1574(v);
}

void	small_parse_table_1574(t_small_parse_table_array *v)
{
	v->a[31480] = 1;
	v->a[31481] = aux_sym_concatenation_token1;
	v->a[31482] = actions(1204);
	v->a[31483] = 1;
	v->a[31484] = sym__concat;
	v->a[31485] = state(379);
	v->a[31486] = 1;
	v->a[31487] = aux_sym_concatenation_repeat1;
	v->a[31488] = actions(555);
	v->a[31489] = 2;
	v->a[31490] = sym_file_descriptor;
	v->a[31491] = sym_variable_name;
	v->a[31492] = actions(553);
	v->a[31493] = 30;
	v->a[31494] = anon_sym_esac;
	v->a[31495] = anon_sym_PIPE;
	v->a[31496] = anon_sym_SEMI_SEMI;
	v->a[31497] = anon_sym_AMP_AMP;
	v->a[31498] = anon_sym_PIPE_PIPE;
	v->a[31499] = anon_sym_LT;
	small_parse_table_1575(v);
}

/* EOF small_parse_table_314.c */
