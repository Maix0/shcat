/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_684.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3420(t_small_parse_table_array *v)
{
	v->a[68400] = aux_sym_concatenation_token1;
	v->a[68401] = actions(2103);
	v->a[68402] = 1;
	v->a[68403] = sym__concat;
	v->a[68404] = state(1251);
	v->a[68405] = 1;
	v->a[68406] = aux_sym_concatenation_repeat1;
	v->a[68407] = actions(548);
	v->a[68408] = 2;
	v->a[68409] = sym_file_descriptor;
	v->a[68410] = aux_sym_heredoc_redirect_token1;
	v->a[68411] = actions(546);
	v->a[68412] = 18;
	v->a[68413] = anon_sym_PIPE;
	v->a[68414] = anon_sym_SEMI_SEMI;
	v->a[68415] = anon_sym_AMP_AMP;
	v->a[68416] = anon_sym_PIPE_PIPE;
	v->a[68417] = anon_sym_LT;
	v->a[68418] = anon_sym_GT;
	v->a[68419] = anon_sym_GT_GT;
	small_parse_table_3421(v);
}

void	small_parse_table_3421(t_small_parse_table_array *v)
{
	v->a[68420] = anon_sym_AMP_GT;
	v->a[68421] = anon_sym_AMP_GT_GT;
	v->a[68422] = anon_sym_LT_AMP;
	v->a[68423] = anon_sym_GT_AMP;
	v->a[68424] = anon_sym_GT_PIPE;
	v->a[68425] = anon_sym_LT_AMP_DASH;
	v->a[68426] = anon_sym_GT_AMP_DASH;
	v->a[68427] = anon_sym_LT_LT;
	v->a[68428] = anon_sym_LT_LT_DASH;
	v->a[68429] = anon_sym_AMP;
	v->a[68430] = anon_sym_SEMI;
	v->a[68431] = 3;
	v->a[68432] = actions(3);
	v->a[68433] = 1;
	v->a[68434] = sym_comment;
	v->a[68435] = actions(2223);
	v->a[68436] = 3;
	v->a[68437] = sym_file_descriptor;
	v->a[68438] = ts_builtin_sym_end;
	v->a[68439] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3422(v);
}

void	small_parse_table_3422(t_small_parse_table_array *v)
{
	v->a[68440] = actions(2225);
	v->a[68441] = 20;
	v->a[68442] = anon_sym_PIPE;
	v->a[68443] = anon_sym_RPAREN;
	v->a[68444] = anon_sym_SEMI_SEMI;
	v->a[68445] = anon_sym_AMP_AMP;
	v->a[68446] = anon_sym_PIPE_PIPE;
	v->a[68447] = anon_sym_LT;
	v->a[68448] = anon_sym_GT;
	v->a[68449] = anon_sym_GT_GT;
	v->a[68450] = anon_sym_AMP_GT;
	v->a[68451] = anon_sym_AMP_GT_GT;
	v->a[68452] = anon_sym_LT_AMP;
	v->a[68453] = anon_sym_GT_AMP;
	v->a[68454] = anon_sym_GT_PIPE;
	v->a[68455] = anon_sym_LT_AMP_DASH;
	v->a[68456] = anon_sym_GT_AMP_DASH;
	v->a[68457] = anon_sym_LT_LT;
	v->a[68458] = anon_sym_LT_LT_DASH;
	v->a[68459] = anon_sym_AMP;
	small_parse_table_3423(v);
}

void	small_parse_table_3423(t_small_parse_table_array *v)
{
	v->a[68460] = anon_sym_BQUOTE;
	v->a[68461] = anon_sym_SEMI;
	v->a[68462] = 7;
	v->a[68463] = actions(3);
	v->a[68464] = 1;
	v->a[68465] = sym_comment;
	v->a[68466] = actions(2229);
	v->a[68467] = 1;
	v->a[68468] = aux_sym_heredoc_redirect_token1;
	v->a[68469] = actions(2231);
	v->a[68470] = 1;
	v->a[68471] = sym_file_descriptor;
	v->a[68472] = actions(2041);
	v->a[68473] = 2;
	v->a[68474] = anon_sym_LT_AMP_DASH;
	v->a[68475] = anon_sym_GT_AMP_DASH;
	v->a[68476] = state(1218);
	v->a[68477] = 2;
	v->a[68478] = sym_file_redirect;
	v->a[68479] = aux_sym_redirected_statement_repeat2;
	small_parse_table_3424(v);
}

void	small_parse_table_3424(t_small_parse_table_array *v)
{
	v->a[68480] = actions(2039);
	v->a[68481] = 8;
	v->a[68482] = anon_sym_LT;
	v->a[68483] = anon_sym_GT;
	v->a[68484] = anon_sym_GT_GT;
	v->a[68485] = anon_sym_AMP_GT;
	v->a[68486] = anon_sym_AMP_GT_GT;
	v->a[68487] = anon_sym_LT_AMP;
	v->a[68488] = anon_sym_GT_AMP;
	v->a[68489] = anon_sym_GT_PIPE;
	v->a[68490] = actions(2227);
	v->a[68491] = 9;
	v->a[68492] = anon_sym_PIPE;
	v->a[68493] = anon_sym_RPAREN;
	v->a[68494] = anon_sym_SEMI_SEMI;
	v->a[68495] = anon_sym_AMP_AMP;
	v->a[68496] = anon_sym_PIPE_PIPE;
	v->a[68497] = anon_sym_LT_LT;
	v->a[68498] = anon_sym_LT_LT_DASH;
	v->a[68499] = anon_sym_AMP;
	small_parse_table_3425(v);
}

/* EOF small_parse_table_684.c */
