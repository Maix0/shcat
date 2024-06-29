/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_624.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3120(t_small_parse_table_array *v)
{
	v->a[62400] = anon_sym_PIPE_PIPE;
	v->a[62401] = anon_sym_LT;
	v->a[62402] = anon_sym_GT;
	v->a[62403] = anon_sym_GT_GT;
	v->a[62404] = anon_sym_AMP_GT;
	v->a[62405] = anon_sym_AMP_GT_GT;
	v->a[62406] = anon_sym_LT_AMP;
	v->a[62407] = anon_sym_GT_AMP;
	v->a[62408] = anon_sym_GT_PIPE;
	v->a[62409] = anon_sym_LT_AMP_DASH;
	v->a[62410] = anon_sym_GT_AMP_DASH;
	v->a[62411] = anon_sym_LT_LT;
	v->a[62412] = anon_sym_LT_LT_DASH;
	v->a[62413] = anon_sym_AMP;
	v->a[62414] = anon_sym_SEMI;
	v->a[62415] = 12;
	v->a[62416] = actions(3);
	v->a[62417] = 1;
	v->a[62418] = sym_comment;
	v->a[62419] = actions(766);
	small_parse_table_3121(v);
}

void	small_parse_table_3121(t_small_parse_table_array *v)
{
	v->a[62420] = 1;
	v->a[62421] = anon_sym_PIPE;
	v->a[62422] = actions(840);
	v->a[62423] = 1;
	v->a[62424] = ts_builtin_sym_end;
	v->a[62425] = actions(2017);
	v->a[62426] = 1;
	v->a[62427] = aux_sym_heredoc_redirect_token1;
	v->a[62428] = actions(2019);
	v->a[62429] = 1;
	v->a[62430] = sym_file_descriptor;
	v->a[62431] = state(772);
	v->a[62432] = 1;
	v->a[62433] = sym_terminator;
	v->a[62434] = actions(804);
	v->a[62435] = 2;
	v->a[62436] = anon_sym_LT_LT;
	v->a[62437] = anon_sym_LT_LT_DASH;
	v->a[62438] = actions(835);
	v->a[62439] = 2;
	small_parse_table_3122(v);
}

void	small_parse_table_3122(t_small_parse_table_array *v)
{
	v->a[62440] = anon_sym_AMP_AMP;
	v->a[62441] = anon_sym_PIPE_PIPE;
	v->a[62442] = actions(2015);
	v->a[62443] = 2;
	v->a[62444] = anon_sym_LT_AMP_DASH;
	v->a[62445] = anon_sym_GT_AMP_DASH;
	v->a[62446] = actions(833);
	v->a[62447] = 3;
	v->a[62448] = anon_sym_SEMI_SEMI;
	v->a[62449] = anon_sym_AMP;
	v->a[62450] = anon_sym_SEMI;
	v->a[62451] = state(1133);
	v->a[62452] = 3;
	v->a[62453] = sym_file_redirect;
	v->a[62454] = sym_heredoc_redirect;
	v->a[62455] = aux_sym_redirected_statement_repeat1;
	v->a[62456] = actions(2013);
	v->a[62457] = 8;
	v->a[62458] = anon_sym_LT;
	v->a[62459] = anon_sym_GT;
	small_parse_table_3123(v);
}

void	small_parse_table_3123(t_small_parse_table_array *v)
{
	v->a[62460] = anon_sym_GT_GT;
	v->a[62461] = anon_sym_AMP_GT;
	v->a[62462] = anon_sym_AMP_GT_GT;
	v->a[62463] = anon_sym_LT_AMP;
	v->a[62464] = anon_sym_GT_AMP;
	v->a[62465] = anon_sym_GT_PIPE;
	v->a[62466] = 12;
	v->a[62467] = actions(3);
	v->a[62468] = 1;
	v->a[62469] = sym_comment;
	v->a[62470] = actions(766);
	v->a[62471] = 1;
	v->a[62472] = anon_sym_PIPE;
	v->a[62473] = actions(2003);
	v->a[62474] = 1;
	v->a[62475] = aux_sym_heredoc_redirect_token1;
	v->a[62476] = actions(2005);
	v->a[62477] = 1;
	v->a[62478] = sym_file_descriptor;
	v->a[62479] = state(764);
	small_parse_table_3124(v);
}

void	small_parse_table_3124(t_small_parse_table_array *v)
{
	v->a[62480] = 1;
	v->a[62481] = sym_terminator;
	v->a[62482] = actions(764);
	v->a[62483] = 2;
	v->a[62484] = anon_sym_esac;
	v->a[62485] = anon_sym_SEMI_SEMI;
	v->a[62486] = actions(768);
	v->a[62487] = 2;
	v->a[62488] = anon_sym_AMP_AMP;
	v->a[62489] = anon_sym_PIPE_PIPE;
	v->a[62490] = actions(770);
	v->a[62491] = 2;
	v->a[62492] = anon_sym_LT_LT;
	v->a[62493] = anon_sym_LT_LT_DASH;
	v->a[62494] = actions(772);
	v->a[62495] = 2;
	v->a[62496] = anon_sym_AMP;
	v->a[62497] = anon_sym_SEMI;
	v->a[62498] = actions(2001);
	v->a[62499] = 2;
	small_parse_table_3125(v);
}

/* EOF small_parse_table_624.c */
