/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_204.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1020(t_small_parse_table_array *v)
{
	v->a[20400] = actions(485);
	v->a[20401] = 1;
	v->a[20402] = anon_sym_EQ;
	v->a[20403] = actions(690);
	v->a[20404] = 1;
	v->a[20405] = anon_sym_RPAREN_RPAREN;
	v->a[20406] = actions(405);
	v->a[20407] = 2;
	v->a[20408] = anon_sym_PLUS_PLUS2;
	v->a[20409] = anon_sym_DASH_DASH2;
	v->a[20410] = actions(417);
	v->a[20411] = 2;
	v->a[20412] = anon_sym_LT;
	v->a[20413] = anon_sym_GT;
	v->a[20414] = actions(419);
	v->a[20415] = 2;
	v->a[20416] = anon_sym_GT_GT;
	v->a[20417] = anon_sym_LT_LT;
	v->a[20418] = actions(427);
	v->a[20419] = 2;
	small_parse_table_1021(v);
}

void	small_parse_table_1021(t_small_parse_table_array *v)
{
	v->a[20420] = anon_sym_EQ_EQ;
	v->a[20421] = anon_sym_BANG_EQ;
	v->a[20422] = actions(429);
	v->a[20423] = 2;
	v->a[20424] = anon_sym_LT_EQ;
	v->a[20425] = anon_sym_GT_EQ;
	v->a[20426] = actions(431);
	v->a[20427] = 2;
	v->a[20428] = anon_sym_PLUS;
	v->a[20429] = anon_sym_DASH;
	v->a[20430] = actions(433);
	v->a[20431] = 3;
	v->a[20432] = anon_sym_STAR;
	v->a[20433] = anon_sym_SLASH;
	v->a[20434] = anon_sym_PERCENT;
	v->a[20435] = actions(493);
	v->a[20436] = 10;
	v->a[20437] = anon_sym_PLUS_EQ;
	v->a[20438] = anon_sym_DASH_EQ;
	v->a[20439] = anon_sym_STAR_EQ;
	small_parse_table_1022(v);
}

void	small_parse_table_1022(t_small_parse_table_array *v)
{
	v->a[20440] = anon_sym_SLASH_EQ;
	v->a[20441] = anon_sym_PERCENT_EQ;
	v->a[20442] = anon_sym_LT_LT_EQ;
	v->a[20443] = anon_sym_GT_GT_EQ;
	v->a[20444] = anon_sym_AMP_EQ;
	v->a[20445] = anon_sym_CARET_EQ;
	v->a[20446] = anon_sym_PIPE_EQ;
	v->a[20447] = 16;
	v->a[20448] = actions(407);
	v->a[20449] = 1;
	v->a[20450] = sym_comment;
	v->a[20451] = actions(567);
	v->a[20452] = 1;
	v->a[20453] = anon_sym_PIPE;
	v->a[20454] = actions(571);
	v->a[20455] = 1;
	v->a[20456] = anon_sym_AMP_AMP;
	v->a[20457] = actions(573);
	v->a[20458] = 1;
	v->a[20459] = anon_sym_PIPE_PIPE;
	small_parse_table_1023(v);
}

void	small_parse_table_1023(t_small_parse_table_array *v)
{
	v->a[20460] = actions(575);
	v->a[20461] = 1;
	v->a[20462] = anon_sym_EQ;
	v->a[20463] = actions(583);
	v->a[20464] = 1;
	v->a[20465] = anon_sym_CARET;
	v->a[20466] = actions(585);
	v->a[20467] = 1;
	v->a[20468] = anon_sym_AMP;
	v->a[20469] = actions(595);
	v->a[20470] = 1;
	v->a[20471] = anon_sym_QMARK;
	v->a[20472] = actions(577);
	v->a[20473] = 2;
	v->a[20474] = anon_sym_LT;
	v->a[20475] = anon_sym_GT;
	v->a[20476] = actions(579);
	v->a[20477] = 2;
	v->a[20478] = anon_sym_GT_GT;
	v->a[20479] = anon_sym_LT_LT;
	small_parse_table_1024(v);
}

void	small_parse_table_1024(t_small_parse_table_array *v)
{
	v->a[20480] = actions(587);
	v->a[20481] = 2;
	v->a[20482] = anon_sym_EQ_EQ;
	v->a[20483] = anon_sym_BANG_EQ;
	v->a[20484] = actions(589);
	v->a[20485] = 2;
	v->a[20486] = anon_sym_LT_EQ;
	v->a[20487] = anon_sym_GT_EQ;
	v->a[20488] = actions(591);
	v->a[20489] = 2;
	v->a[20490] = anon_sym_PLUS;
	v->a[20491] = anon_sym_DASH;
	v->a[20492] = actions(597);
	v->a[20493] = 2;
	v->a[20494] = anon_sym_PLUS_PLUS2;
	v->a[20495] = anon_sym_DASH_DASH2;
	v->a[20496] = actions(593);
	v->a[20497] = 3;
	v->a[20498] = anon_sym_STAR;
	v->a[20499] = anon_sym_SLASH;
	small_parse_table_1025(v);
}

/* EOF small_parse_table_204.c */
