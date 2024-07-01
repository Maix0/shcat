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
	v->a[25402] = actions(712);
	v->a[25403] = 1;
	v->a[25404] = anon_sym_AMP_AMP;
	v->a[25405] = actions(714);
	v->a[25406] = 1;
	v->a[25407] = anon_sym_PIPE_PIPE;
	v->a[25408] = actions(716);
	v->a[25409] = 1;
	v->a[25410] = anon_sym_QMARK;
	v->a[25411] = actions(718);
	v->a[25412] = 1;
	v->a[25413] = anon_sym_EQ;
	v->a[25414] = actions(974);
	v->a[25415] = 1;
	v->a[25416] = anon_sym_RPAREN_RPAREN;
	v->a[25417] = actions(684);
	v->a[25418] = 2;
	v->a[25419] = anon_sym_GT_GT;
	small_parse_table_1271(v);
}

void	small_parse_table_1271(t_small_parse_table_array *v)
{
	v->a[25420] = anon_sym_LT_LT;
	v->a[25421] = actions(686);
	v->a[25422] = 2;
	v->a[25423] = anon_sym_PLUS;
	v->a[25424] = anon_sym_DASH;
	v->a[25425] = actions(690);
	v->a[25426] = 2;
	v->a[25427] = anon_sym_PLUS_PLUS2;
	v->a[25428] = anon_sym_DASH_DASH2;
	v->a[25429] = actions(700);
	v->a[25430] = 2;
	v->a[25431] = anon_sym_LT;
	v->a[25432] = anon_sym_GT;
	v->a[25433] = actions(706);
	v->a[25434] = 2;
	v->a[25435] = anon_sym_EQ_EQ;
	v->a[25436] = anon_sym_BANG_EQ;
	v->a[25437] = actions(708);
	v->a[25438] = 2;
	v->a[25439] = anon_sym_LT_EQ;
	small_parse_table_1272(v);
}

void	small_parse_table_1272(t_small_parse_table_array *v)
{
	v->a[25440] = anon_sym_GT_EQ;
	v->a[25441] = actions(688);
	v->a[25442] = 3;
	v->a[25443] = anon_sym_STAR;
	v->a[25444] = anon_sym_SLASH;
	v->a[25445] = anon_sym_PERCENT;
	v->a[25446] = actions(953);
	v->a[25447] = 10;
	v->a[25448] = anon_sym_PLUS_EQ;
	v->a[25449] = anon_sym_DASH_EQ;
	v->a[25450] = anon_sym_STAR_EQ;
	v->a[25451] = anon_sym_SLASH_EQ;
	v->a[25452] = anon_sym_PERCENT_EQ;
	v->a[25453] = anon_sym_LT_LT_EQ;
	v->a[25454] = anon_sym_GT_GT_EQ;
	v->a[25455] = anon_sym_AMP_EQ;
	v->a[25456] = anon_sym_CARET_EQ;
	v->a[25457] = anon_sym_PIPE_EQ;
	v->a[25458] = 11;
	v->a[25459] = actions(3);
	small_parse_table_1273(v);
}

void	small_parse_table_1273(t_small_parse_table_array *v)
{
	v->a[25460] = 1;
	v->a[25461] = sym_comment;
	v->a[25462] = actions(736);
	v->a[25463] = 1;
	v->a[25464] = anon_sym_PIPE;
	v->a[25465] = actions(746);
	v->a[25466] = 1;
	v->a[25467] = sym_file_descriptor;
	v->a[25468] = actions(957);
	v->a[25469] = 1;
	v->a[25470] = sym_variable_name;
	v->a[25471] = state(744);
	v->a[25472] = 1;
	v->a[25473] = sym_terminator;
	v->a[25474] = actions(744);
	v->a[25475] = 2;
	v->a[25476] = anon_sym_LT_LT;
	v->a[25477] = anon_sym_LT_LT_DASH;
	v->a[25478] = actions(955);
	v->a[25479] = 2;
	small_parse_table_1274(v);
}

void	small_parse_table_1274(t_small_parse_table_array *v)
{
	v->a[25480] = anon_sym_AMP_AMP;
	v->a[25481] = anon_sym_PIPE_PIPE;
	v->a[25482] = state(1134);
	v->a[25483] = 2;
	v->a[25484] = sym_variable_assignment;
	v->a[25485] = aux_sym__variable_assignments_repeat1;
	v->a[25486] = state(1194);
	v->a[25487] = 3;
	v->a[25488] = sym_file_redirect;
	v->a[25489] = sym_heredoc_redirect;
	v->a[25490] = aux_sym_redirected_statement_repeat1;
	v->a[25491] = actions(976);
	v->a[25492] = 4;
	v->a[25493] = anon_sym_SEMI_SEMI;
	v->a[25494] = aux_sym_heredoc_redirect_token1;
	v->a[25495] = anon_sym_AMP;
	v->a[25496] = anon_sym_SEMI;
	v->a[25497] = actions(734);
	v->a[25498] = 16;
	v->a[25499] = anon_sym_LT;
	small_parse_table_1275(v);
}

/* EOF small_parse_table_254.c */
