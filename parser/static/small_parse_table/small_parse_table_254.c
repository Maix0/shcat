/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_254.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1270(t_small_parse_table_array *v)
{
	v->a[25400] = anon_sym_GT_AMP;
	v->a[25401] = anon_sym_GT_PIPE;
	v->a[25402] = anon_sym_LT_GT;
	v->a[25403] = anon_sym_LT_LT;
	v->a[25404] = anon_sym_LT_LT_DASH;
	v->a[25405] = aux_sym_heredoc_redirect_token1;
	v->a[25406] = anon_sym_AMP;
	v->a[25407] = anon_sym_BQUOTE;
	v->a[25408] = anon_sym_SEMI;
	v->a[25409] = 17;
	v->a[25410] = actions(668);
	v->a[25411] = 1;
	v->a[25412] = anon_sym_AMP;
	v->a[25413] = actions(680);
	v->a[25414] = 1;
	v->a[25415] = sym_comment;
	v->a[25416] = actions(730);
	v->a[25417] = 1;
	v->a[25418] = anon_sym_CARET;
	v->a[25419] = actions(732);
	small_parse_table_1271(v);
}

void	small_parse_table_1271(t_small_parse_table_array *v)
{
	v->a[25420] = 1;
	v->a[25421] = anon_sym_PIPE;
	v->a[25422] = actions(734);
	v->a[25423] = 1;
	v->a[25424] = anon_sym_AMP_AMP;
	v->a[25425] = actions(736);
	v->a[25426] = 1;
	v->a[25427] = anon_sym_PIPE_PIPE;
	v->a[25428] = actions(738);
	v->a[25429] = 1;
	v->a[25430] = anon_sym_QMARK;
	v->a[25431] = actions(740);
	v->a[25432] = 1;
	v->a[25433] = anon_sym_EQ;
	v->a[25434] = actions(959);
	v->a[25435] = 1;
	v->a[25436] = anon_sym_RPAREN_RPAREN;
	v->a[25437] = actions(664);
	v->a[25438] = 2;
	v->a[25439] = anon_sym_LT;
	small_parse_table_1272(v);
}

void	small_parse_table_1272(t_small_parse_table_array *v)
{
	v->a[25440] = anon_sym_GT;
	v->a[25441] = actions(666);
	v->a[25442] = 2;
	v->a[25443] = anon_sym_GT_GT;
	v->a[25444] = anon_sym_LT_LT;
	v->a[25445] = actions(670);
	v->a[25446] = 2;
	v->a[25447] = anon_sym_EQ_EQ;
	v->a[25448] = anon_sym_BANG_EQ;
	v->a[25449] = actions(672);
	v->a[25450] = 2;
	v->a[25451] = anon_sym_LT_EQ;
	v->a[25452] = anon_sym_GT_EQ;
	v->a[25453] = actions(674);
	v->a[25454] = 2;
	v->a[25455] = anon_sym_PLUS;
	v->a[25456] = anon_sym_DASH;
	v->a[25457] = actions(678);
	v->a[25458] = 2;
	v->a[25459] = anon_sym_PLUS_PLUS2;
	small_parse_table_1273(v);
}

void	small_parse_table_1273(t_small_parse_table_array *v)
{
	v->a[25460] = anon_sym_DASH_DASH2;
	v->a[25461] = actions(676);
	v->a[25462] = 3;
	v->a[25463] = anon_sym_STAR;
	v->a[25464] = anon_sym_SLASH;
	v->a[25465] = anon_sym_PERCENT;
	v->a[25466] = actions(912);
	v->a[25467] = 10;
	v->a[25468] = anon_sym_PLUS_EQ;
	v->a[25469] = anon_sym_DASH_EQ;
	v->a[25470] = anon_sym_STAR_EQ;
	v->a[25471] = anon_sym_SLASH_EQ;
	v->a[25472] = anon_sym_PERCENT_EQ;
	v->a[25473] = anon_sym_LT_LT_EQ;
	v->a[25474] = anon_sym_GT_GT_EQ;
	v->a[25475] = anon_sym_AMP_EQ;
	v->a[25476] = anon_sym_CARET_EQ;
	v->a[25477] = anon_sym_PIPE_EQ;
	v->a[25478] = 12;
	v->a[25479] = actions(3);
	small_parse_table_1274(v);
}

void	small_parse_table_1274(t_small_parse_table_array *v)
{
	v->a[25480] = 1;
	v->a[25481] = sym_comment;
	v->a[25482] = actions(692);
	v->a[25483] = 1;
	v->a[25484] = anon_sym_PIPE;
	v->a[25485] = actions(694);
	v->a[25486] = 1;
	v->a[25487] = anon_sym_BQUOTE;
	v->a[25488] = actions(702);
	v->a[25489] = 1;
	v->a[25490] = sym_file_descriptor;
	v->a[25491] = actions(938);
	v->a[25492] = 1;
	v->a[25493] = sym_variable_name;
	v->a[25494] = state(832);
	v->a[25495] = 1;
	v->a[25496] = sym_terminator;
	v->a[25497] = actions(700);
	v->a[25498] = 2;
	v->a[25499] = anon_sym_LT_LT;
	small_parse_table_1275(v);
}

/* EOF small_parse_table_254.c */
