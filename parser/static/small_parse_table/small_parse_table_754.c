/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_754.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3770(t_small_parse_table_array *v)
{
	v->a[75400] = actions(2624);
	v->a[75401] = 20;
	v->a[75402] = anon_sym_PIPE;
	v->a[75403] = anon_sym_RPAREN;
	v->a[75404] = anon_sym_SEMI_SEMI;
	v->a[75405] = anon_sym_AMP_AMP;
	v->a[75406] = anon_sym_PIPE_PIPE;
	v->a[75407] = anon_sym_LT;
	v->a[75408] = anon_sym_GT;
	v->a[75409] = anon_sym_GT_GT;
	v->a[75410] = anon_sym_AMP_GT;
	v->a[75411] = anon_sym_AMP_GT_GT;
	v->a[75412] = anon_sym_LT_AMP;
	v->a[75413] = anon_sym_GT_AMP;
	v->a[75414] = anon_sym_GT_PIPE;
	v->a[75415] = anon_sym_LT_AMP_DASH;
	v->a[75416] = anon_sym_GT_AMP_DASH;
	v->a[75417] = anon_sym_LT_LT;
	v->a[75418] = anon_sym_LT_LT_DASH;
	v->a[75419] = anon_sym_AMP;
	small_parse_table_3771(v);
}

void	small_parse_table_3771(t_small_parse_table_array *v)
{
	v->a[75420] = anon_sym_BQUOTE;
	v->a[75421] = anon_sym_SEMI;
	v->a[75422] = 12;
	v->a[75423] = actions(3);
	v->a[75424] = 1;
	v->a[75425] = sym_comment;
	v->a[75426] = actions(951);
	v->a[75427] = 1;
	v->a[75428] = ts_builtin_sym_end;
	v->a[75429] = actions(2075);
	v->a[75430] = 1;
	v->a[75431] = sym_file_descriptor;
	v->a[75432] = actions(2775);
	v->a[75433] = 1;
	v->a[75434] = anon_sym_SEMI_SEMI;
	v->a[75435] = actions(2777);
	v->a[75436] = 1;
	v->a[75437] = aux_sym_heredoc_redirect_token1;
	v->a[75438] = actions(2779);
	v->a[75439] = 1;
	small_parse_table_3772(v);
}

void	small_parse_table_3772(t_small_parse_table_array *v)
{
	v->a[75440] = anon_sym_AMP;
	v->a[75441] = actions(2781);
	v->a[75442] = 1;
	v->a[75443] = anon_sym_SEMI;
	v->a[75444] = actions(861);
	v->a[75445] = 2;
	v->a[75446] = anon_sym_LT_LT;
	v->a[75447] = anon_sym_LT_LT_DASH;
	v->a[75448] = actions(934);
	v->a[75449] = 2;
	v->a[75450] = anon_sym_AMP_AMP;
	v->a[75451] = anon_sym_PIPE_PIPE;
	v->a[75452] = actions(2067);
	v->a[75453] = 2;
	v->a[75454] = anon_sym_LT_AMP_DASH;
	v->a[75455] = anon_sym_GT_AMP_DASH;
	v->a[75456] = state(1289);
	v->a[75457] = 3;
	v->a[75458] = sym_file_redirect;
	v->a[75459] = sym_heredoc_redirect;
	small_parse_table_3773(v);
}

void	small_parse_table_3773(t_small_parse_table_array *v)
{
	v->a[75460] = aux_sym_redirected_statement_repeat1;
	v->a[75461] = actions(2065);
	v->a[75462] = 8;
	v->a[75463] = anon_sym_LT;
	v->a[75464] = anon_sym_GT;
	v->a[75465] = anon_sym_GT_GT;
	v->a[75466] = anon_sym_AMP_GT;
	v->a[75467] = anon_sym_AMP_GT_GT;
	v->a[75468] = anon_sym_LT_AMP;
	v->a[75469] = anon_sym_GT_AMP;
	v->a[75470] = anon_sym_GT_PIPE;
	v->a[75471] = 12;
	v->a[75472] = actions(3);
	v->a[75473] = 1;
	v->a[75474] = sym_comment;
	v->a[75475] = actions(807);
	v->a[75476] = 1;
	v->a[75477] = anon_sym_PIPE;
	v->a[75478] = actions(840);
	v->a[75479] = 1;
	small_parse_table_3774(v);
}

void	small_parse_table_3774(t_small_parse_table_array *v)
{
	v->a[75480] = anon_sym_SEMI_SEMI;
	v->a[75481] = actions(2109);
	v->a[75482] = 1;
	v->a[75483] = aux_sym_heredoc_redirect_token1;
	v->a[75484] = actions(2111);
	v->a[75485] = 1;
	v->a[75486] = anon_sym_AMP;
	v->a[75487] = actions(2113);
	v->a[75488] = 1;
	v->a[75489] = anon_sym_SEMI;
	v->a[75490] = actions(2602);
	v->a[75491] = 1;
	v->a[75492] = sym_file_descriptor;
	v->a[75493] = actions(861);
	v->a[75494] = 2;
	v->a[75495] = anon_sym_LT_LT;
	v->a[75496] = anon_sym_LT_LT_DASH;
	v->a[75497] = actions(965);
	v->a[75498] = 2;
	v->a[75499] = anon_sym_AMP_AMP;
	small_parse_table_3775(v);
}

/* EOF small_parse_table_754.c */
