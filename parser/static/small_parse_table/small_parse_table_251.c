/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_251.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1255(t_small_parse_table_array *v)
{
	v->a[25100] = 2;
	v->a[25101] = anon_sym_LT;
	v->a[25102] = anon_sym_GT;
	v->a[25103] = actions(660);
	v->a[25104] = 2;
	v->a[25105] = anon_sym_GT_GT;
	v->a[25106] = anon_sym_LT_LT;
	v->a[25107] = actions(668);
	v->a[25108] = 2;
	v->a[25109] = anon_sym_EQ_EQ;
	v->a[25110] = anon_sym_BANG_EQ;
	v->a[25111] = actions(670);
	v->a[25112] = 2;
	v->a[25113] = anon_sym_LT_EQ;
	v->a[25114] = anon_sym_GT_EQ;
	v->a[25115] = actions(672);
	v->a[25116] = 2;
	v->a[25117] = anon_sym_PLUS;
	v->a[25118] = anon_sym_DASH;
	v->a[25119] = actions(674);
	small_parse_table_1256(v);
}

void	small_parse_table_1256(t_small_parse_table_array *v)
{
	v->a[25120] = 3;
	v->a[25121] = anon_sym_STAR;
	v->a[25122] = anon_sym_SLASH;
	v->a[25123] = anon_sym_PERCENT;
	v->a[25124] = actions(802);
	v->a[25125] = 10;
	v->a[25126] = anon_sym_PLUS_EQ;
	v->a[25127] = anon_sym_DASH_EQ;
	v->a[25128] = anon_sym_STAR_EQ;
	v->a[25129] = anon_sym_SLASH_EQ;
	v->a[25130] = anon_sym_PERCENT_EQ;
	v->a[25131] = anon_sym_LT_LT_EQ;
	v->a[25132] = anon_sym_GT_GT_EQ;
	v->a[25133] = anon_sym_AMP_EQ;
	v->a[25134] = anon_sym_CARET_EQ;
	v->a[25135] = anon_sym_PIPE_EQ;
	v->a[25136] = 3;
	v->a[25137] = actions(501);
	v->a[25138] = 1;
	v->a[25139] = sym_comment;
	small_parse_table_1257(v);
}

void	small_parse_table_1257(t_small_parse_table_array *v)
{
	v->a[25140] = actions(537);
	v->a[25141] = 13;
	v->a[25142] = anon_sym_PIPE;
	v->a[25143] = anon_sym_EQ;
	v->a[25144] = anon_sym_LT;
	v->a[25145] = anon_sym_GT;
	v->a[25146] = anon_sym_GT_GT;
	v->a[25147] = anon_sym_LT_LT;
	v->a[25148] = anon_sym_CARET;
	v->a[25149] = anon_sym_AMP;
	v->a[25150] = anon_sym_PLUS;
	v->a[25151] = anon_sym_DASH;
	v->a[25152] = anon_sym_STAR;
	v->a[25153] = anon_sym_SLASH;
	v->a[25154] = anon_sym_PERCENT;
	v->a[25155] = actions(539);
	v->a[25156] = 20;
	v->a[25157] = anon_sym_RPAREN;
	v->a[25158] = anon_sym_AMP_AMP;
	v->a[25159] = anon_sym_PIPE_PIPE;
	small_parse_table_1258(v);
}

void	small_parse_table_1258(t_small_parse_table_array *v)
{
	v->a[25160] = anon_sym_PLUS_EQ;
	v->a[25161] = anon_sym_DASH_EQ;
	v->a[25162] = anon_sym_STAR_EQ;
	v->a[25163] = anon_sym_SLASH_EQ;
	v->a[25164] = anon_sym_PERCENT_EQ;
	v->a[25165] = anon_sym_LT_LT_EQ;
	v->a[25166] = anon_sym_GT_GT_EQ;
	v->a[25167] = anon_sym_AMP_EQ;
	v->a[25168] = anon_sym_CARET_EQ;
	v->a[25169] = anon_sym_PIPE_EQ;
	v->a[25170] = anon_sym_EQ_EQ;
	v->a[25171] = anon_sym_BANG_EQ;
	v->a[25172] = anon_sym_LT_EQ;
	v->a[25173] = anon_sym_GT_EQ;
	v->a[25174] = anon_sym_QMARK;
	v->a[25175] = anon_sym_PLUS_PLUS2;
	v->a[25176] = anon_sym_DASH_DASH2;
	v->a[25177] = 16;
	v->a[25178] = actions(501);
	v->a[25179] = 1;
	small_parse_table_1259(v);
}

void	small_parse_table_1259(t_small_parse_table_array *v)
{
	v->a[25180] = sym_comment;
	v->a[25181] = actions(754);
	v->a[25182] = 1;
	v->a[25183] = anon_sym_PIPE;
	v->a[25184] = actions(756);
	v->a[25185] = 1;
	v->a[25186] = anon_sym_AMP_AMP;
	v->a[25187] = actions(758);
	v->a[25188] = 1;
	v->a[25189] = anon_sym_PIPE_PIPE;
	v->a[25190] = actions(764);
	v->a[25191] = 1;
	v->a[25192] = anon_sym_CARET;
	v->a[25193] = actions(766);
	v->a[25194] = 1;
	v->a[25195] = anon_sym_AMP;
	v->a[25196] = actions(776);
	v->a[25197] = 1;
	v->a[25198] = anon_sym_QMARK;
	v->a[25199] = actions(895);
	small_parse_table_1260(v);
}

/* EOF small_parse_table_251.c */
