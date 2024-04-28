/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2424.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12120(t_small_parse_table_array *v)
{
	v->a[242400] = anon_sym_PIPE_PIPE;
	v->a[242401] = anon_sym_AMP_AMP;
	v->a[242402] = anon_sym_PIPE;
	v->a[242403] = anon_sym_AMP;
	v->a[242404] = anon_sym_LT;
	v->a[242405] = anon_sym_GT;
	v->a[242406] = anon_sym_LT_LT;
	v->a[242407] = anon_sym_GT_GT;
	v->a[242408] = anon_sym_RPAREN;
	v->a[242409] = anon_sym_SEMI_SEMI;
	v->a[242410] = anon_sym_PIPE_AMP;
	v->a[242411] = anon_sym_AMP_GT;
	v->a[242412] = anon_sym_AMP_GT_GT;
	v->a[242413] = anon_sym_LT_AMP;
	v->a[242414] = anon_sym_GT_AMP;
	v->a[242415] = anon_sym_GT_PIPE;
	v->a[242416] = anon_sym_LT_AMP_DASH;
	v->a[242417] = anon_sym_GT_AMP_DASH;
	v->a[242418] = anon_sym_LT_LT_DASH;
	v->a[242419] = anon_sym_LT_LT_LT;
	small_parse_table_12121(v);
}

void	small_parse_table_12121(t_small_parse_table_array *v)
{
	v->a[242420] = aux_sym_concatenation_token1;
	v->a[242421] = anon_sym_BQUOTE;
	v->a[242422] = 7;
	v->a[242423] = actions(3);
	v->a[242424] = 1;
	v->a[242425] = sym_comment;
	v->a[242426] = actions(11448);
	v->a[242427] = 1;
	v->a[242428] = anon_sym_LT_LT_LT;
	v->a[242429] = state(4912);
	v->a[242430] = 1;
	v->a[242431] = sym_herestring_redirect;
	v->a[242432] = actions(4253);
	v->a[242433] = 2;
	v->a[242434] = anon_sym_PIPE;
	v->a[242435] = anon_sym_PIPE_AMP;
	v->a[242436] = actions(4272);
	v->a[242437] = 3;
	v->a[242438] = sym_file_descriptor;
	v->a[242439] = ts_builtin_sym_end;
	small_parse_table_12122(v);
}

void	small_parse_table_12122(t_small_parse_table_array *v)
{
	v->a[242440] = aux_sym_heredoc_redirect_token1;
	v->a[242441] = state(4650);
	v->a[242442] = 3;
	v->a[242443] = sym_file_redirect;
	v->a[242444] = sym_heredoc_redirect;
	v->a[242445] = aux_sym_redirected_statement_repeat1;
	v->a[242446] = actions(4270);
	v->a[242447] = 17;
	v->a[242448] = anon_sym_SEMI;
	v->a[242449] = anon_sym_PIPE_PIPE;
	v->a[242450] = anon_sym_AMP_AMP;
	v->a[242451] = anon_sym_AMP;
	v->a[242452] = anon_sym_LT;
	v->a[242453] = anon_sym_GT;
	v->a[242454] = anon_sym_LT_LT;
	v->a[242455] = anon_sym_GT_GT;
	v->a[242456] = anon_sym_SEMI_SEMI;
	v->a[242457] = anon_sym_AMP_GT;
	v->a[242458] = anon_sym_AMP_GT_GT;
	v->a[242459] = anon_sym_LT_AMP;
	small_parse_table_12123(v);
}

void	small_parse_table_12123(t_small_parse_table_array *v)
{
	v->a[242460] = anon_sym_GT_AMP;
	v->a[242461] = anon_sym_GT_PIPE;
	v->a[242462] = anon_sym_LT_AMP_DASH;
	v->a[242463] = anon_sym_GT_AMP_DASH;
	v->a[242464] = anon_sym_LT_LT_DASH;
	v->a[242465] = 6;
	v->a[242466] = actions(3);
	v->a[242467] = 1;
	v->a[242468] = sym_comment;
	v->a[242469] = actions(11450);
	v->a[242470] = 1;
	v->a[242471] = sym_variable_name;
	v->a[242472] = state(6772);
	v->a[242473] = 1;
	v->a[242474] = sym_subscript;
	v->a[242475] = actions(11290);
	v->a[242476] = 2;
	v->a[242477] = sym_file_descriptor;
	v->a[242478] = aux_sym_heredoc_redirect_token1;
	v->a[242479] = state(4282);
	small_parse_table_12124(v);
}

void	small_parse_table_12124(t_small_parse_table_array *v)
{
	v->a[242480] = 2;
	v->a[242481] = sym_variable_assignment;
	v->a[242482] = aux_sym_variable_assignments_repeat1;
	v->a[242483] = actions(11288);
	v->a[242484] = 21;
	v->a[242485] = anon_sym_SEMI;
	v->a[242486] = anon_sym_PIPE_PIPE;
	v->a[242487] = anon_sym_AMP_AMP;
	v->a[242488] = anon_sym_PIPE;
	v->a[242489] = anon_sym_AMP;
	v->a[242490] = anon_sym_LT;
	v->a[242491] = anon_sym_GT;
	v->a[242492] = anon_sym_LT_LT;
	v->a[242493] = anon_sym_GT_GT;
	v->a[242494] = anon_sym_SEMI_SEMI;
	v->a[242495] = anon_sym_SEMI_AMP;
	v->a[242496] = anon_sym_SEMI_SEMI_AMP;
	v->a[242497] = anon_sym_PIPE_AMP;
	v->a[242498] = anon_sym_AMP_GT;
	v->a[242499] = anon_sym_AMP_GT_GT;
	small_parse_table_12125(v);
}

/* EOF small_parse_table_2424.c */
