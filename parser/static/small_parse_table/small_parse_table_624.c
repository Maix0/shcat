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
	v->a[62400] = sym_variable_name;
	v->a[62401] = aux_sym_heredoc_redirect_token1;
	v->a[62402] = actions(1198);
	v->a[62403] = 19;
	v->a[62404] = anon_sym_PIPE;
	v->a[62405] = anon_sym_SEMI_SEMI;
	v->a[62406] = anon_sym_AMP_AMP;
	v->a[62407] = anon_sym_PIPE_PIPE;
	v->a[62408] = anon_sym_LT;
	v->a[62409] = anon_sym_GT;
	v->a[62410] = anon_sym_GT_GT;
	v->a[62411] = anon_sym_AMP_GT;
	v->a[62412] = anon_sym_AMP_GT_GT;
	v->a[62413] = anon_sym_LT_AMP;
	v->a[62414] = anon_sym_GT_AMP;
	v->a[62415] = anon_sym_GT_PIPE;
	v->a[62416] = anon_sym_LT_AMP_DASH;
	v->a[62417] = anon_sym_GT_AMP_DASH;
	v->a[62418] = anon_sym_LT_LT;
	v->a[62419] = anon_sym_LT_LT_DASH;
	small_parse_table_3121(v);
}

void	small_parse_table_3121(t_small_parse_table_array *v)
{
	v->a[62420] = anon_sym_AMP;
	v->a[62421] = anon_sym_BQUOTE;
	v->a[62422] = anon_sym_SEMI;
	v->a[62423] = 6;
	v->a[62424] = actions(3);
	v->a[62425] = 1;
	v->a[62426] = sym_comment;
	v->a[62427] = actions(2217);
	v->a[62428] = 1;
	v->a[62429] = aux_sym_concatenation_token1;
	v->a[62430] = actions(2223);
	v->a[62431] = 1;
	v->a[62432] = sym__concat;
	v->a[62433] = state(1003);
	v->a[62434] = 1;
	v->a[62435] = aux_sym_concatenation_repeat1;
	v->a[62436] = actions(1127);
	v->a[62437] = 3;
	v->a[62438] = sym_file_descriptor;
	v->a[62439] = sym_variable_name;
	small_parse_table_3122(v);
}

void	small_parse_table_3122(t_small_parse_table_array *v)
{
	v->a[62440] = aux_sym_heredoc_redirect_token1;
	v->a[62441] = actions(1129);
	v->a[62442] = 19;
	v->a[62443] = anon_sym_esac;
	v->a[62444] = anon_sym_PIPE;
	v->a[62445] = anon_sym_SEMI_SEMI;
	v->a[62446] = anon_sym_AMP_AMP;
	v->a[62447] = anon_sym_PIPE_PIPE;
	v->a[62448] = anon_sym_LT;
	v->a[62449] = anon_sym_GT;
	v->a[62450] = anon_sym_GT_GT;
	v->a[62451] = anon_sym_AMP_GT;
	v->a[62452] = anon_sym_AMP_GT_GT;
	v->a[62453] = anon_sym_LT_AMP;
	v->a[62454] = anon_sym_GT_AMP;
	v->a[62455] = anon_sym_GT_PIPE;
	v->a[62456] = anon_sym_LT_AMP_DASH;
	v->a[62457] = anon_sym_GT_AMP_DASH;
	v->a[62458] = anon_sym_LT_LT;
	v->a[62459] = anon_sym_LT_LT_DASH;
	small_parse_table_3123(v);
}

void	small_parse_table_3123(t_small_parse_table_array *v)
{
	v->a[62460] = anon_sym_AMP;
	v->a[62461] = anon_sym_SEMI;
	v->a[62462] = 3;
	v->a[62463] = actions(3);
	v->a[62464] = 1;
	v->a[62465] = sym_comment;
	v->a[62466] = actions(1329);
	v->a[62467] = 4;
	v->a[62468] = sym_file_descriptor;
	v->a[62469] = sym__concat;
	v->a[62470] = ts_builtin_sym_end;
	v->a[62471] = aux_sym_heredoc_redirect_token1;
	v->a[62472] = actions(1327);
	v->a[62473] = 21;
	v->a[62474] = anon_sym_PIPE;
	v->a[62475] = anon_sym_RPAREN;
	v->a[62476] = anon_sym_SEMI_SEMI;
	v->a[62477] = anon_sym_AMP_AMP;
	v->a[62478] = anon_sym_PIPE_PIPE;
	v->a[62479] = anon_sym_LT;
	small_parse_table_3124(v);
}

void	small_parse_table_3124(t_small_parse_table_array *v)
{
	v->a[62480] = anon_sym_GT;
	v->a[62481] = anon_sym_GT_GT;
	v->a[62482] = anon_sym_AMP_GT;
	v->a[62483] = anon_sym_AMP_GT_GT;
	v->a[62484] = anon_sym_LT_AMP;
	v->a[62485] = anon_sym_GT_AMP;
	v->a[62486] = anon_sym_GT_PIPE;
	v->a[62487] = anon_sym_LT_AMP_DASH;
	v->a[62488] = anon_sym_GT_AMP_DASH;
	v->a[62489] = anon_sym_LT_LT;
	v->a[62490] = anon_sym_LT_LT_DASH;
	v->a[62491] = anon_sym_AMP;
	v->a[62492] = aux_sym_concatenation_token1;
	v->a[62493] = anon_sym_BQUOTE;
	v->a[62494] = anon_sym_SEMI;
	v->a[62495] = 3;
	v->a[62496] = actions(3);
	v->a[62497] = 1;
	v->a[62498] = sym_comment;
	v->a[62499] = actions(1255);
	small_parse_table_3125(v);
}

/* EOF small_parse_table_624.c */
