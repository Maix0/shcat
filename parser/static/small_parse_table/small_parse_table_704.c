/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_704.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3520(t_small_parse_table_array *v)
{
	v->a[70400] = actions(4120);
	v->a[70401] = 1;
	v->a[70402] = anon_sym_PIPE;
	v->a[70403] = actions(4122);
	v->a[70404] = 1;
	v->a[70405] = anon_sym_AMP_AMP;
	v->a[70406] = actions(4124);
	v->a[70407] = 1;
	v->a[70408] = anon_sym_PIPE_PIPE;
	v->a[70409] = actions(4126);
	v->a[70410] = 1;
	v->a[70411] = anon_sym_EQ;
	v->a[70412] = actions(4132);
	v->a[70413] = 1;
	v->a[70414] = anon_sym_COMMA;
	v->a[70415] = actions(4138);
	v->a[70416] = 1;
	v->a[70417] = anon_sym_CARET;
	v->a[70418] = actions(4140);
	v->a[70419] = 1;
	small_parse_table_3521(v);
}

void	small_parse_table_3521(t_small_parse_table_array *v)
{
	v->a[70420] = anon_sym_AMP;
	v->a[70421] = actions(4150);
	v->a[70422] = 1;
	v->a[70423] = anon_sym_QMARK;
	v->a[70424] = actions(4293);
	v->a[70425] = 1;
	v->a[70426] = anon_sym_RPAREN_RPAREN;
	v->a[70427] = state(3461);
	v->a[70428] = 1;
	v->a[70429] = aux_sym_arithmetic_expansion_repeat1;
	v->a[70430] = actions(4128);
	v->a[70431] = 2;
	v->a[70432] = anon_sym_LT;
	v->a[70433] = anon_sym_GT;
	v->a[70434] = actions(4130);
	v->a[70435] = 2;
	v->a[70436] = anon_sym_GT_GT;
	v->a[70437] = anon_sym_LT_LT;
	v->a[70438] = actions(4142);
	v->a[70439] = 2;
	small_parse_table_3522(v);
}

void	small_parse_table_3522(t_small_parse_table_array *v)
{
	v->a[70440] = anon_sym_EQ_EQ;
	v->a[70441] = anon_sym_BANG_EQ;
	v->a[70442] = actions(4144);
	v->a[70443] = 2;
	v->a[70444] = anon_sym_LT_EQ;
	v->a[70445] = anon_sym_GT_EQ;
	v->a[70446] = actions(4146);
	v->a[70447] = 2;
	v->a[70448] = anon_sym_PLUS;
	v->a[70449] = anon_sym_DASH;
	v->a[70450] = actions(4152);
	v->a[70451] = 2;
	v->a[70452] = anon_sym_PLUS_PLUS2;
	v->a[70453] = anon_sym_DASH_DASH2;
	v->a[70454] = actions(4148);
	v->a[70455] = 3;
	v->a[70456] = anon_sym_STAR;
	v->a[70457] = anon_sym_SLASH;
	v->a[70458] = anon_sym_PERCENT;
	v->a[70459] = actions(4136);
	small_parse_table_3523(v);
}

void	small_parse_table_3523(t_small_parse_table_array *v)
{
	v->a[70460] = 10;
	v->a[70461] = anon_sym_PLUS_EQ;
	v->a[70462] = anon_sym_DASH_EQ;
	v->a[70463] = anon_sym_STAR_EQ;
	v->a[70464] = anon_sym_SLASH_EQ;
	v->a[70465] = anon_sym_PERCENT_EQ;
	v->a[70466] = anon_sym_LT_LT_EQ;
	v->a[70467] = anon_sym_GT_GT_EQ;
	v->a[70468] = anon_sym_AMP_EQ;
	v->a[70469] = anon_sym_CARET_EQ;
	v->a[70470] = anon_sym_PIPE_EQ;
	v->a[70471] = 3;
	v->a[70472] = actions(57);
	v->a[70473] = 1;
	v->a[70474] = sym_comment;
	v->a[70475] = actions(4295);
	v->a[70476] = 13;
	v->a[70477] = anon_sym_PIPE;
	v->a[70478] = anon_sym_EQ;
	v->a[70479] = anon_sym_LT;
	small_parse_table_3524(v);
}

void	small_parse_table_3524(t_small_parse_table_array *v)
{
	v->a[70480] = anon_sym_GT;
	v->a[70481] = anon_sym_GT_GT;
	v->a[70482] = anon_sym_LT_LT;
	v->a[70483] = anon_sym_CARET;
	v->a[70484] = anon_sym_AMP;
	v->a[70485] = anon_sym_PLUS;
	v->a[70486] = anon_sym_DASH;
	v->a[70487] = anon_sym_STAR;
	v->a[70488] = anon_sym_SLASH;
	v->a[70489] = anon_sym_PERCENT;
	v->a[70490] = actions(4297);
	v->a[70491] = 22;
	v->a[70492] = anon_sym_AMP_AMP;
	v->a[70493] = anon_sym_PIPE_PIPE;
	v->a[70494] = anon_sym_COMMA;
	v->a[70495] = anon_sym_RPAREN_RPAREN;
	v->a[70496] = anon_sym_PLUS_EQ;
	v->a[70497] = anon_sym_DASH_EQ;
	v->a[70498] = anon_sym_STAR_EQ;
	v->a[70499] = anon_sym_SLASH_EQ;
	small_parse_table_3525(v);
}

/* EOF small_parse_table_704.c */
