/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_654.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3270(t_small_parse_table_array *v)
{
	v->a[65400] = 19;
	v->a[65401] = anon_sym_PIPE;
	v->a[65402] = anon_sym_RPAREN;
	v->a[65403] = anon_sym_SEMI_SEMI;
	v->a[65404] = anon_sym_AMP_AMP;
	v->a[65405] = anon_sym_PIPE_PIPE;
	v->a[65406] = anon_sym_LT;
	v->a[65407] = anon_sym_GT;
	v->a[65408] = anon_sym_GT_GT;
	v->a[65409] = anon_sym_AMP_GT;
	v->a[65410] = anon_sym_AMP_GT_GT;
	v->a[65411] = anon_sym_LT_AMP;
	v->a[65412] = anon_sym_GT_AMP;
	v->a[65413] = anon_sym_GT_PIPE;
	v->a[65414] = anon_sym_LT_AMP_DASH;
	v->a[65415] = anon_sym_GT_AMP_DASH;
	v->a[65416] = anon_sym_LT_LT;
	v->a[65417] = anon_sym_LT_LT_DASH;
	v->a[65418] = anon_sym_AMP;
	v->a[65419] = anon_sym_SEMI;
	small_parse_table_3271(v);
}

void	small_parse_table_3271(t_small_parse_table_array *v)
{
	v->a[65420] = 11;
	v->a[65421] = actions(3);
	v->a[65422] = 1;
	v->a[65423] = sym_comment;
	v->a[65424] = actions(766);
	v->a[65425] = 1;
	v->a[65426] = anon_sym_PIPE;
	v->a[65427] = actions(2031);
	v->a[65428] = 1;
	v->a[65429] = aux_sym_heredoc_redirect_token1;
	v->a[65430] = actions(2066);
	v->a[65431] = 1;
	v->a[65432] = sym_file_descriptor;
	v->a[65433] = state(692);
	v->a[65434] = 1;
	v->a[65435] = sym_terminator;
	v->a[65436] = actions(804);
	v->a[65437] = 2;
	v->a[65438] = anon_sym_LT_LT;
	v->a[65439] = anon_sym_LT_LT_DASH;
	small_parse_table_3272(v);
}

void	small_parse_table_3272(t_small_parse_table_array *v)
{
	v->a[65440] = actions(893);
	v->a[65441] = 2;
	v->a[65442] = anon_sym_AMP_AMP;
	v->a[65443] = anon_sym_PIPE_PIPE;
	v->a[65444] = actions(2064);
	v->a[65445] = 2;
	v->a[65446] = anon_sym_LT_AMP_DASH;
	v->a[65447] = anon_sym_GT_AMP_DASH;
	v->a[65448] = actions(800);
	v->a[65449] = 3;
	v->a[65450] = anon_sym_SEMI_SEMI;
	v->a[65451] = anon_sym_AMP;
	v->a[65452] = anon_sym_SEMI;
	v->a[65453] = state(1256);
	v->a[65454] = 3;
	v->a[65455] = sym_file_redirect;
	v->a[65456] = sym_heredoc_redirect;
	v->a[65457] = aux_sym_redirected_statement_repeat1;
	v->a[65458] = actions(2062);
	v->a[65459] = 8;
	small_parse_table_3273(v);
}

void	small_parse_table_3273(t_small_parse_table_array *v)
{
	v->a[65460] = anon_sym_LT;
	v->a[65461] = anon_sym_GT;
	v->a[65462] = anon_sym_GT_GT;
	v->a[65463] = anon_sym_AMP_GT;
	v->a[65464] = anon_sym_AMP_GT_GT;
	v->a[65465] = anon_sym_LT_AMP;
	v->a[65466] = anon_sym_GT_AMP;
	v->a[65467] = anon_sym_GT_PIPE;
	v->a[65468] = 11;
	v->a[65469] = actions(3);
	v->a[65470] = 1;
	v->a[65471] = sym_comment;
	v->a[65472] = actions(2003);
	v->a[65473] = 1;
	v->a[65474] = aux_sym_heredoc_redirect_token1;
	v->a[65475] = actions(2005);
	v->a[65476] = 1;
	v->a[65477] = sym_file_descriptor;
	v->a[65478] = state(756);
	v->a[65479] = 1;
	small_parse_table_3274(v);
}

void	small_parse_table_3274(t_small_parse_table_array *v)
{
	v->a[65480] = sym_terminator;
	v->a[65481] = actions(764);
	v->a[65482] = 2;
	v->a[65483] = anon_sym_esac;
	v->a[65484] = anon_sym_SEMI_SEMI;
	v->a[65485] = actions(768);
	v->a[65486] = 2;
	v->a[65487] = anon_sym_AMP_AMP;
	v->a[65488] = anon_sym_PIPE_PIPE;
	v->a[65489] = actions(770);
	v->a[65490] = 2;
	v->a[65491] = anon_sym_LT_LT;
	v->a[65492] = anon_sym_LT_LT_DASH;
	v->a[65493] = actions(772);
	v->a[65494] = 2;
	v->a[65495] = anon_sym_AMP;
	v->a[65496] = anon_sym_SEMI;
	v->a[65497] = actions(2001);
	v->a[65498] = 2;
	v->a[65499] = anon_sym_LT_AMP_DASH;
	small_parse_table_3275(v);
}

/* EOF small_parse_table_654.c */
