/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_244.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1220(t_small_parse_table_array *v)
{
	v->a[24400] = actions(668);
	v->a[24401] = 1;
	v->a[24402] = anon_sym_AMP;
	v->a[24403] = actions(680);
	v->a[24404] = 1;
	v->a[24405] = sym_comment;
	v->a[24406] = actions(730);
	v->a[24407] = 1;
	v->a[24408] = anon_sym_CARET;
	v->a[24409] = actions(732);
	v->a[24410] = 1;
	v->a[24411] = anon_sym_PIPE;
	v->a[24412] = actions(734);
	v->a[24413] = 1;
	v->a[24414] = anon_sym_AMP_AMP;
	v->a[24415] = actions(736);
	v->a[24416] = 1;
	v->a[24417] = anon_sym_PIPE_PIPE;
	v->a[24418] = actions(738);
	v->a[24419] = 1;
	small_parse_table_1221(v);
}

void	small_parse_table_1221(t_small_parse_table_array *v)
{
	v->a[24420] = anon_sym_QMARK;
	v->a[24421] = actions(740);
	v->a[24422] = 1;
	v->a[24423] = anon_sym_EQ;
	v->a[24424] = actions(923);
	v->a[24425] = 1;
	v->a[24426] = anon_sym_COLON;
	v->a[24427] = actions(664);
	v->a[24428] = 2;
	v->a[24429] = anon_sym_LT;
	v->a[24430] = anon_sym_GT;
	v->a[24431] = actions(666);
	v->a[24432] = 2;
	v->a[24433] = anon_sym_GT_GT;
	v->a[24434] = anon_sym_LT_LT;
	v->a[24435] = actions(670);
	v->a[24436] = 2;
	v->a[24437] = anon_sym_EQ_EQ;
	v->a[24438] = anon_sym_BANG_EQ;
	v->a[24439] = actions(672);
	small_parse_table_1222(v);
}

void	small_parse_table_1222(t_small_parse_table_array *v)
{
	v->a[24440] = 2;
	v->a[24441] = anon_sym_LT_EQ;
	v->a[24442] = anon_sym_GT_EQ;
	v->a[24443] = actions(674);
	v->a[24444] = 2;
	v->a[24445] = anon_sym_PLUS;
	v->a[24446] = anon_sym_DASH;
	v->a[24447] = actions(678);
	v->a[24448] = 2;
	v->a[24449] = anon_sym_PLUS_PLUS2;
	v->a[24450] = anon_sym_DASH_DASH2;
	v->a[24451] = actions(676);
	v->a[24452] = 3;
	v->a[24453] = anon_sym_STAR;
	v->a[24454] = anon_sym_SLASH;
	v->a[24455] = anon_sym_PERCENT;
	v->a[24456] = actions(912);
	v->a[24457] = 10;
	v->a[24458] = anon_sym_PLUS_EQ;
	v->a[24459] = anon_sym_DASH_EQ;
	small_parse_table_1223(v);
}

void	small_parse_table_1223(t_small_parse_table_array *v)
{
	v->a[24460] = anon_sym_STAR_EQ;
	v->a[24461] = anon_sym_SLASH_EQ;
	v->a[24462] = anon_sym_PERCENT_EQ;
	v->a[24463] = anon_sym_LT_LT_EQ;
	v->a[24464] = anon_sym_GT_GT_EQ;
	v->a[24465] = anon_sym_AMP_EQ;
	v->a[24466] = anon_sym_CARET_EQ;
	v->a[24467] = anon_sym_PIPE_EQ;
	v->a[24468] = 6;
	v->a[24469] = actions(3);
	v->a[24470] = 1;
	v->a[24471] = sym_comment;
	v->a[24472] = actions(361);
	v->a[24473] = 1;
	v->a[24474] = sym_file_descriptor;
	v->a[24475] = actions(929);
	v->a[24476] = 1;
	v->a[24477] = sym_variable_name;
	v->a[24478] = actions(927);
	v->a[24479] = 2;
	small_parse_table_1224(v);
}

void	small_parse_table_1224(t_small_parse_table_array *v)
{
	v->a[24480] = aux_sym__simple_variable_name_token1;
	v->a[24481] = aux_sym__multiline_variable_name_token1;
	v->a[24482] = actions(925);
	v->a[24483] = 9;
	v->a[24484] = anon_sym_BANG;
	v->a[24485] = anon_sym_DASH;
	v->a[24486] = anon_sym_STAR;
	v->a[24487] = anon_sym_QMARK;
	v->a[24488] = anon_sym_DOLLAR;
	v->a[24489] = anon_sym_POUND;
	v->a[24490] = anon_sym_AT;
	v->a[24491] = anon_sym_0;
	v->a[24492] = anon_sym__;
	v->a[24493] = actions(363);
	v->a[24494] = 20;
	v->a[24495] = anon_sym_PIPE;
	v->a[24496] = anon_sym_AMP_AMP;
	v->a[24497] = anon_sym_PIPE_PIPE;
	v->a[24498] = anon_sym_LT;
	v->a[24499] = anon_sym_GT;
	small_parse_table_1225(v);
}

/* EOF small_parse_table_244.c */
