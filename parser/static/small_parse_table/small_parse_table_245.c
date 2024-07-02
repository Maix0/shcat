/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_245.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1225(t_small_parse_table_array *v)
{
	v->a[24500] = anon_sym_GT_GT;
	v->a[24501] = anon_sym_LT_AMP;
	v->a[24502] = anon_sym_GT_AMP;
	v->a[24503] = anon_sym_GT_PIPE;
	v->a[24504] = anon_sym_LT_GT;
	v->a[24505] = anon_sym_LT_LT;
	v->a[24506] = anon_sym_LT_LT_DASH;
	v->a[24507] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24508] = anon_sym_DQUOTE;
	v->a[24509] = sym_raw_string;
	v->a[24510] = sym_number;
	v->a[24511] = anon_sym_DOLLAR_LBRACE;
	v->a[24512] = anon_sym_DOLLAR_LPAREN;
	v->a[24513] = anon_sym_BQUOTE;
	v->a[24514] = sym_word;
	v->a[24515] = 17;
	v->a[24516] = actions(668);
	v->a[24517] = 1;
	v->a[24518] = anon_sym_AMP;
	v->a[24519] = actions(680);
	small_parse_table_1226(v);
}

void	small_parse_table_1226(t_small_parse_table_array *v)
{
	v->a[24520] = 1;
	v->a[24521] = sym_comment;
	v->a[24522] = actions(730);
	v->a[24523] = 1;
	v->a[24524] = anon_sym_CARET;
	v->a[24525] = actions(732);
	v->a[24526] = 1;
	v->a[24527] = anon_sym_PIPE;
	v->a[24528] = actions(734);
	v->a[24529] = 1;
	v->a[24530] = anon_sym_AMP_AMP;
	v->a[24531] = actions(736);
	v->a[24532] = 1;
	v->a[24533] = anon_sym_PIPE_PIPE;
	v->a[24534] = actions(738);
	v->a[24535] = 1;
	v->a[24536] = anon_sym_QMARK;
	v->a[24537] = actions(740);
	v->a[24538] = 1;
	v->a[24539] = anon_sym_EQ;
	small_parse_table_1227(v);
}

void	small_parse_table_1227(t_small_parse_table_array *v)
{
	v->a[24540] = actions(931);
	v->a[24541] = 1;
	v->a[24542] = anon_sym_RPAREN_RPAREN;
	v->a[24543] = actions(664);
	v->a[24544] = 2;
	v->a[24545] = anon_sym_LT;
	v->a[24546] = anon_sym_GT;
	v->a[24547] = actions(666);
	v->a[24548] = 2;
	v->a[24549] = anon_sym_GT_GT;
	v->a[24550] = anon_sym_LT_LT;
	v->a[24551] = actions(670);
	v->a[24552] = 2;
	v->a[24553] = anon_sym_EQ_EQ;
	v->a[24554] = anon_sym_BANG_EQ;
	v->a[24555] = actions(672);
	v->a[24556] = 2;
	v->a[24557] = anon_sym_LT_EQ;
	v->a[24558] = anon_sym_GT_EQ;
	v->a[24559] = actions(674);
	small_parse_table_1228(v);
}

void	small_parse_table_1228(t_small_parse_table_array *v)
{
	v->a[24560] = 2;
	v->a[24561] = anon_sym_PLUS;
	v->a[24562] = anon_sym_DASH;
	v->a[24563] = actions(678);
	v->a[24564] = 2;
	v->a[24565] = anon_sym_PLUS_PLUS2;
	v->a[24566] = anon_sym_DASH_DASH2;
	v->a[24567] = actions(676);
	v->a[24568] = 3;
	v->a[24569] = anon_sym_STAR;
	v->a[24570] = anon_sym_SLASH;
	v->a[24571] = anon_sym_PERCENT;
	v->a[24572] = actions(912);
	v->a[24573] = 10;
	v->a[24574] = anon_sym_PLUS_EQ;
	v->a[24575] = anon_sym_DASH_EQ;
	v->a[24576] = anon_sym_STAR_EQ;
	v->a[24577] = anon_sym_SLASH_EQ;
	v->a[24578] = anon_sym_PERCENT_EQ;
	v->a[24579] = anon_sym_LT_LT_EQ;
	small_parse_table_1229(v);
}

void	small_parse_table_1229(t_small_parse_table_array *v)
{
	v->a[24580] = anon_sym_GT_GT_EQ;
	v->a[24581] = anon_sym_AMP_EQ;
	v->a[24582] = anon_sym_CARET_EQ;
	v->a[24583] = anon_sym_PIPE_EQ;
	v->a[24584] = 12;
	v->a[24585] = actions(3);
	v->a[24586] = 1;
	v->a[24587] = sym_comment;
	v->a[24588] = actions(540);
	v->a[24589] = 1;
	v->a[24590] = sym_file_descriptor;
	v->a[24591] = actions(801);
	v->a[24592] = 1;
	v->a[24593] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24594] = actions(804);
	v->a[24595] = 1;
	v->a[24596] = anon_sym_DOLLAR;
	v->a[24597] = actions(807);
	v->a[24598] = 1;
	v->a[24599] = anon_sym_DQUOTE;
	small_parse_table_1230(v);
}

/* EOF small_parse_table_245.c */
