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
	v->a[25400] = 1;
	v->a[25401] = anon_sym_PIPE;
	v->a[25402] = actions(652);
	v->a[25403] = 1;
	v->a[25404] = anon_sym_AMP_AMP;
	v->a[25405] = actions(654);
	v->a[25406] = 1;
	v->a[25407] = anon_sym_PIPE_PIPE;
	v->a[25408] = actions(664);
	v->a[25409] = 1;
	v->a[25410] = anon_sym_CARET;
	v->a[25411] = actions(666);
	v->a[25412] = 1;
	v->a[25413] = anon_sym_AMP;
	v->a[25414] = actions(721);
	v->a[25415] = 1;
	v->a[25416] = anon_sym_QMARK;
	v->a[25417] = actions(723);
	v->a[25418] = 1;
	v->a[25419] = anon_sym_EQ;
	small_parse_table_1271(v);
}

void	small_parse_table_1271(t_small_parse_table_array *v)
{
	v->a[25420] = actions(948);
	v->a[25421] = 1;
	v->a[25422] = anon_sym_RPAREN_RPAREN;
	v->a[25423] = actions(499);
	v->a[25424] = 2;
	v->a[25425] = anon_sym_PLUS_PLUS2;
	v->a[25426] = anon_sym_DASH_DASH2;
	v->a[25427] = actions(658);
	v->a[25428] = 2;
	v->a[25429] = anon_sym_LT;
	v->a[25430] = anon_sym_GT;
	v->a[25431] = actions(660);
	v->a[25432] = 2;
	v->a[25433] = anon_sym_GT_GT;
	v->a[25434] = anon_sym_LT_LT;
	v->a[25435] = actions(668);
	v->a[25436] = 2;
	v->a[25437] = anon_sym_EQ_EQ;
	v->a[25438] = anon_sym_BANG_EQ;
	v->a[25439] = actions(670);
	small_parse_table_1272(v);
}

void	small_parse_table_1272(t_small_parse_table_array *v)
{
	v->a[25440] = 2;
	v->a[25441] = anon_sym_LT_EQ;
	v->a[25442] = anon_sym_GT_EQ;
	v->a[25443] = actions(672);
	v->a[25444] = 2;
	v->a[25445] = anon_sym_PLUS;
	v->a[25446] = anon_sym_DASH;
	v->a[25447] = actions(674);
	v->a[25448] = 3;
	v->a[25449] = anon_sym_STAR;
	v->a[25450] = anon_sym_SLASH;
	v->a[25451] = anon_sym_PERCENT;
	v->a[25452] = actions(802);
	v->a[25453] = 10;
	v->a[25454] = anon_sym_PLUS_EQ;
	v->a[25455] = anon_sym_DASH_EQ;
	v->a[25456] = anon_sym_STAR_EQ;
	v->a[25457] = anon_sym_SLASH_EQ;
	v->a[25458] = anon_sym_PERCENT_EQ;
	v->a[25459] = anon_sym_LT_LT_EQ;
	small_parse_table_1273(v);
}

void	small_parse_table_1273(t_small_parse_table_array *v)
{
	v->a[25460] = anon_sym_GT_GT_EQ;
	v->a[25461] = anon_sym_AMP_EQ;
	v->a[25462] = anon_sym_CARET_EQ;
	v->a[25463] = anon_sym_PIPE_EQ;
	v->a[25464] = 12;
	v->a[25465] = actions(3);
	v->a[25466] = 1;
	v->a[25467] = sym_comment;
	v->a[25468] = actions(782);
	v->a[25469] = 1;
	v->a[25470] = anon_sym_PIPE;
	v->a[25471] = actions(792);
	v->a[25472] = 1;
	v->a[25473] = sym_file_descriptor;
	v->a[25474] = actions(812);
	v->a[25475] = 1;
	v->a[25476] = sym_variable_name;
	v->a[25477] = actions(950);
	v->a[25478] = 1;
	v->a[25479] = ts_builtin_sym_end;
	small_parse_table_1274(v);
}

void	small_parse_table_1274(t_small_parse_table_array *v)
{
	v->a[25480] = state(752);
	v->a[25481] = 1;
	v->a[25482] = sym_terminator;
	v->a[25483] = actions(790);
	v->a[25484] = 2;
	v->a[25485] = anon_sym_LT_LT;
	v->a[25486] = anon_sym_LT_LT_DASH;
	v->a[25487] = actions(810);
	v->a[25488] = 2;
	v->a[25489] = anon_sym_AMP_AMP;
	v->a[25490] = anon_sym_PIPE_PIPE;
	v->a[25491] = state(1048);
	v->a[25492] = 2;
	v->a[25493] = sym_variable_assignment;
	v->a[25494] = aux_sym__variable_assignments_repeat1;
	v->a[25495] = actions(808);
	v->a[25496] = 3;
	v->a[25497] = anon_sym_SEMI_SEMI;
	v->a[25498] = aux_sym_heredoc_redirect_token1;
	v->a[25499] = anon_sym_SEMI;
	small_parse_table_1275(v);
}

/* EOF small_parse_table_254.c */
