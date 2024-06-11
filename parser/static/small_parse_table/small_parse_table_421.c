/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_421.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2105(t_small_parse_table_array *v)
{
	v->a[42100] = actions(1316);
	v->a[42101] = 1;
	v->a[42102] = anon_sym_AMP;
	v->a[42103] = actions(1326);
	v->a[42104] = 1;
	v->a[42105] = anon_sym_QMARK;
	v->a[42106] = actions(1308);
	v->a[42107] = 2;
	v->a[42108] = anon_sym_LT;
	v->a[42109] = anon_sym_GT;
	v->a[42110] = actions(1310);
	v->a[42111] = 2;
	v->a[42112] = anon_sym_GT_GT;
	v->a[42113] = anon_sym_LT_LT;
	v->a[42114] = actions(1318);
	v->a[42115] = 2;
	v->a[42116] = anon_sym_EQ_EQ;
	v->a[42117] = anon_sym_BANG_EQ;
	v->a[42118] = actions(1320);
	v->a[42119] = 2;
	small_parse_table_2106(v);
}

void	small_parse_table_2106(t_small_parse_table_array *v)
{
	v->a[42120] = anon_sym_LT_EQ;
	v->a[42121] = anon_sym_GT_EQ;
	v->a[42122] = actions(1322);
	v->a[42123] = 2;
	v->a[42124] = anon_sym_PLUS;
	v->a[42125] = anon_sym_DASH;
	v->a[42126] = actions(1328);
	v->a[42127] = 2;
	v->a[42128] = anon_sym_PLUS_PLUS2;
	v->a[42129] = anon_sym_DASH_DASH2;
	v->a[42130] = actions(1324);
	v->a[42131] = 3;
	v->a[42132] = anon_sym_STAR;
	v->a[42133] = anon_sym_SLASH;
	v->a[42134] = anon_sym_PERCENT;
	v->a[42135] = actions(1080);
	v->a[42136] = 11;
	v->a[42137] = anon_sym_RPAREN;
	v->a[42138] = anon_sym_PLUS_EQ;
	v->a[42139] = anon_sym_DASH_EQ;
	small_parse_table_2107(v);
}

void	small_parse_table_2107(t_small_parse_table_array *v)
{
	v->a[42140] = anon_sym_STAR_EQ;
	v->a[42141] = anon_sym_SLASH_EQ;
	v->a[42142] = anon_sym_PERCENT_EQ;
	v->a[42143] = anon_sym_LT_LT_EQ;
	v->a[42144] = anon_sym_GT_GT_EQ;
	v->a[42145] = anon_sym_AMP_EQ;
	v->a[42146] = anon_sym_CARET_EQ;
	v->a[42147] = anon_sym_PIPE_EQ;
	v->a[42148] = 11;
	v->a[42149] = actions(1094);
	v->a[42150] = 1;
	v->a[42151] = sym_comment;
	v->a[42152] = actions(1316);
	v->a[42153] = 1;
	v->a[42154] = anon_sym_AMP;
	v->a[42155] = actions(1308);
	v->a[42156] = 2;
	v->a[42157] = anon_sym_LT;
	v->a[42158] = anon_sym_GT;
	v->a[42159] = actions(1310);
	small_parse_table_2108(v);
}

void	small_parse_table_2108(t_small_parse_table_array *v)
{
	v->a[42160] = 2;
	v->a[42161] = anon_sym_GT_GT;
	v->a[42162] = anon_sym_LT_LT;
	v->a[42163] = actions(1318);
	v->a[42164] = 2;
	v->a[42165] = anon_sym_EQ_EQ;
	v->a[42166] = anon_sym_BANG_EQ;
	v->a[42167] = actions(1320);
	v->a[42168] = 2;
	v->a[42169] = anon_sym_LT_EQ;
	v->a[42170] = anon_sym_GT_EQ;
	v->a[42171] = actions(1322);
	v->a[42172] = 2;
	v->a[42173] = anon_sym_PLUS;
	v->a[42174] = anon_sym_DASH;
	v->a[42175] = actions(1328);
	v->a[42176] = 2;
	v->a[42177] = anon_sym_PLUS_PLUS2;
	v->a[42178] = anon_sym_DASH_DASH2;
	v->a[42179] = actions(1078);
	small_parse_table_2109(v);
}

void	small_parse_table_2109(t_small_parse_table_array *v)
{
	v->a[42180] = 3;
	v->a[42181] = anon_sym_PIPE;
	v->a[42182] = anon_sym_EQ;
	v->a[42183] = anon_sym_CARET;
	v->a[42184] = actions(1324);
	v->a[42185] = 3;
	v->a[42186] = anon_sym_STAR;
	v->a[42187] = anon_sym_SLASH;
	v->a[42188] = anon_sym_PERCENT;
	v->a[42189] = actions(1080);
	v->a[42190] = 14;
	v->a[42191] = anon_sym_RPAREN;
	v->a[42192] = anon_sym_AMP_AMP;
	v->a[42193] = anon_sym_PIPE_PIPE;
	v->a[42194] = anon_sym_PLUS_EQ;
	v->a[42195] = anon_sym_DASH_EQ;
	v->a[42196] = anon_sym_STAR_EQ;
	v->a[42197] = anon_sym_SLASH_EQ;
	v->a[42198] = anon_sym_PERCENT_EQ;
	v->a[42199] = anon_sym_LT_LT_EQ;
	small_parse_table_2110(v);
}

/* EOF small_parse_table_421.c */
