/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_694.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3470(t_small_parse_table_array *v)
{
	v->a[69400] = 2;
	v->a[69401] = anon_sym_EQ_EQ;
	v->a[69402] = anon_sym_BANG_EQ;
	v->a[69403] = actions(4144);
	v->a[69404] = 2;
	v->a[69405] = anon_sym_LT_EQ;
	v->a[69406] = anon_sym_GT_EQ;
	v->a[69407] = actions(4146);
	v->a[69408] = 2;
	v->a[69409] = anon_sym_PLUS;
	v->a[69410] = anon_sym_DASH;
	v->a[69411] = actions(4152);
	v->a[69412] = 2;
	v->a[69413] = anon_sym_PLUS_PLUS2;
	v->a[69414] = anon_sym_DASH_DASH2;
	v->a[69415] = actions(4148);
	v->a[69416] = 3;
	v->a[69417] = anon_sym_STAR;
	v->a[69418] = anon_sym_SLASH;
	v->a[69419] = anon_sym_PERCENT;
	small_parse_table_3471(v);
}

void	small_parse_table_3471(t_small_parse_table_array *v)
{
	v->a[69420] = actions(4136);
	v->a[69421] = 10;
	v->a[69422] = anon_sym_PLUS_EQ;
	v->a[69423] = anon_sym_DASH_EQ;
	v->a[69424] = anon_sym_STAR_EQ;
	v->a[69425] = anon_sym_SLASH_EQ;
	v->a[69426] = anon_sym_PERCENT_EQ;
	v->a[69427] = anon_sym_LT_LT_EQ;
	v->a[69428] = anon_sym_GT_GT_EQ;
	v->a[69429] = anon_sym_AMP_EQ;
	v->a[69430] = anon_sym_CARET_EQ;
	v->a[69431] = anon_sym_PIPE_EQ;
	v->a[69432] = 6;
	v->a[69433] = actions(3);
	v->a[69434] = 1;
	v->a[69435] = sym_comment;
	v->a[69436] = actions(816);
	v->a[69437] = 1;
	v->a[69438] = sym_file_descriptor;
	v->a[69439] = actions(4279);
	small_parse_table_3472(v);
}

void	small_parse_table_3472(t_small_parse_table_array *v)
{
	v->a[69440] = 1;
	v->a[69441] = sym_variable_name;
	v->a[69442] = actions(4277);
	v->a[69443] = 2;
	v->a[69444] = aux_sym__simple_variable_name_token1;
	v->a[69445] = aux_sym__multiline_variable_name_token1;
	v->a[69446] = actions(4275);
	v->a[69447] = 9;
	v->a[69448] = anon_sym_BANG;
	v->a[69449] = anon_sym_DASH;
	v->a[69450] = anon_sym_STAR;
	v->a[69451] = anon_sym_QMARK;
	v->a[69452] = anon_sym_DOLLAR;
	v->a[69453] = anon_sym_POUND;
	v->a[69454] = anon_sym_AT;
	v->a[69455] = anon_sym_0;
	v->a[69456] = anon_sym__;
	v->a[69457] = actions(810);
	v->a[69458] = 22;
	v->a[69459] = anon_sym_PIPE;
	small_parse_table_3473(v);
}

void	small_parse_table_3473(t_small_parse_table_array *v)
{
	v->a[69460] = anon_sym_SEMI_SEMI;
	v->a[69461] = anon_sym_SEMI_AMP;
	v->a[69462] = anon_sym_SEMI_SEMI_AMP;
	v->a[69463] = anon_sym_PIPE_AMP;
	v->a[69464] = anon_sym_AMP_AMP;
	v->a[69465] = anon_sym_PIPE_PIPE;
	v->a[69466] = anon_sym_LT;
	v->a[69467] = anon_sym_GT;
	v->a[69468] = anon_sym_GT_GT;
	v->a[69469] = anon_sym_AMP_GT;
	v->a[69470] = anon_sym_AMP_GT_GT;
	v->a[69471] = anon_sym_LT_AMP;
	v->a[69472] = anon_sym_GT_AMP;
	v->a[69473] = anon_sym_GT_PIPE;
	v->a[69474] = anon_sym_LT_AMP_DASH;
	v->a[69475] = anon_sym_GT_AMP_DASH;
	v->a[69476] = anon_sym_LT_LT;
	v->a[69477] = anon_sym_LT_LT_DASH;
	v->a[69478] = aux_sym_heredoc_redirect_token1;
	v->a[69479] = anon_sym_AMP;
	small_parse_table_3474(v);
}

void	small_parse_table_3474(t_small_parse_table_array *v)
{
	v->a[69480] = anon_sym_SEMI;
	v->a[69481] = 6;
	v->a[69482] = actions(57);
	v->a[69483] = 1;
	v->a[69484] = sym_comment;
	v->a[69485] = actions(4252);
	v->a[69486] = 1;
	v->a[69487] = aux_sym_concatenation_token1;
	v->a[69488] = actions(4285);
	v->a[69489] = 1;
	v->a[69490] = sym__concat;
	v->a[69491] = state(1450);
	v->a[69492] = 1;
	v->a[69493] = aux_sym_concatenation_repeat1;
	v->a[69494] = actions(2688);
	v->a[69495] = 14;
	v->a[69496] = anon_sym_PIPE;
	v->a[69497] = anon_sym_LT;
	v->a[69498] = anon_sym_GT;
	v->a[69499] = anon_sym_AMP_GT;
	small_parse_table_3475(v);
}

/* EOF small_parse_table_694.c */
