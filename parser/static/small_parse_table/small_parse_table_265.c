/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_265.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1325(t_small_parse_table_array *v)
{
	v->a[26500] = actions(710);
	v->a[26501] = 1;
	v->a[26502] = anon_sym_PIPE;
	v->a[26503] = actions(712);
	v->a[26504] = 1;
	v->a[26505] = anon_sym_AMP_AMP;
	v->a[26506] = actions(714);
	v->a[26507] = 1;
	v->a[26508] = anon_sym_PIPE_PIPE;
	v->a[26509] = actions(716);
	v->a[26510] = 1;
	v->a[26511] = anon_sym_QMARK;
	v->a[26512] = actions(718);
	v->a[26513] = 1;
	v->a[26514] = anon_sym_EQ;
	v->a[26515] = actions(999);
	v->a[26516] = 1;
	v->a[26517] = anon_sym_RPAREN_RPAREN;
	v->a[26518] = actions(684);
	v->a[26519] = 2;
	small_parse_table_1326(v);
}

void	small_parse_table_1326(t_small_parse_table_array *v)
{
	v->a[26520] = anon_sym_GT_GT;
	v->a[26521] = anon_sym_LT_LT;
	v->a[26522] = actions(686);
	v->a[26523] = 2;
	v->a[26524] = anon_sym_PLUS;
	v->a[26525] = anon_sym_DASH;
	v->a[26526] = actions(690);
	v->a[26527] = 2;
	v->a[26528] = anon_sym_PLUS_PLUS2;
	v->a[26529] = anon_sym_DASH_DASH2;
	v->a[26530] = actions(700);
	v->a[26531] = 2;
	v->a[26532] = anon_sym_LT;
	v->a[26533] = anon_sym_GT;
	v->a[26534] = actions(706);
	v->a[26535] = 2;
	v->a[26536] = anon_sym_EQ_EQ;
	v->a[26537] = anon_sym_BANG_EQ;
	v->a[26538] = actions(708);
	v->a[26539] = 2;
	small_parse_table_1327(v);
}

void	small_parse_table_1327(t_small_parse_table_array *v)
{
	v->a[26540] = anon_sym_LT_EQ;
	v->a[26541] = anon_sym_GT_EQ;
	v->a[26542] = actions(688);
	v->a[26543] = 3;
	v->a[26544] = anon_sym_STAR;
	v->a[26545] = anon_sym_SLASH;
	v->a[26546] = anon_sym_PERCENT;
	v->a[26547] = actions(953);
	v->a[26548] = 10;
	v->a[26549] = anon_sym_PLUS_EQ;
	v->a[26550] = anon_sym_DASH_EQ;
	v->a[26551] = anon_sym_STAR_EQ;
	v->a[26552] = anon_sym_SLASH_EQ;
	v->a[26553] = anon_sym_PERCENT_EQ;
	v->a[26554] = anon_sym_LT_LT_EQ;
	v->a[26555] = anon_sym_GT_GT_EQ;
	v->a[26556] = anon_sym_AMP_EQ;
	v->a[26557] = anon_sym_CARET_EQ;
	v->a[26558] = anon_sym_PIPE_EQ;
	v->a[26559] = 5;
	small_parse_table_1328(v);
}

void	small_parse_table_1328(t_small_parse_table_array *v)
{
	v->a[26560] = actions(664);
	v->a[26561] = 1;
	v->a[26562] = sym_comment;
	v->a[26563] = actions(942);
	v->a[26564] = 2;
	v->a[26565] = anon_sym_PLUS_PLUS2;
	v->a[26566] = anon_sym_DASH_DASH2;
	v->a[26567] = actions(938);
	v->a[26568] = 3;
	v->a[26569] = anon_sym_STAR;
	v->a[26570] = anon_sym_SLASH;
	v->a[26571] = anon_sym_PERCENT;
	v->a[26572] = actions(696);
	v->a[26573] = 10;
	v->a[26574] = anon_sym_PIPE;
	v->a[26575] = anon_sym_EQ;
	v->a[26576] = anon_sym_LT;
	v->a[26577] = anon_sym_GT;
	v->a[26578] = anon_sym_GT_GT;
	v->a[26579] = anon_sym_LT_LT;
	small_parse_table_1329(v);
}

void	small_parse_table_1329(t_small_parse_table_array *v)
{
	v->a[26580] = anon_sym_CARET;
	v->a[26581] = anon_sym_AMP;
	v->a[26582] = anon_sym_PLUS;
	v->a[26583] = anon_sym_DASH;
	v->a[26584] = actions(698);
	v->a[26585] = 18;
	v->a[26586] = anon_sym_RPAREN;
	v->a[26587] = anon_sym_AMP_AMP;
	v->a[26588] = anon_sym_PIPE_PIPE;
	v->a[26589] = anon_sym_PLUS_EQ;
	v->a[26590] = anon_sym_DASH_EQ;
	v->a[26591] = anon_sym_STAR_EQ;
	v->a[26592] = anon_sym_SLASH_EQ;
	v->a[26593] = anon_sym_PERCENT_EQ;
	v->a[26594] = anon_sym_LT_LT_EQ;
	v->a[26595] = anon_sym_GT_GT_EQ;
	v->a[26596] = anon_sym_AMP_EQ;
	v->a[26597] = anon_sym_CARET_EQ;
	v->a[26598] = anon_sym_PIPE_EQ;
	v->a[26599] = anon_sym_EQ_EQ;
	small_parse_table_1330(v);
}

/* EOF small_parse_table_265.c */
