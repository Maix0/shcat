/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_215.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1075(t_small_parse_table_array *v)
{
	v->a[21500] = anon_sym_GT_AMP;
	v->a[21501] = anon_sym_GT_PIPE;
	v->a[21502] = anon_sym_LT_GT;
	v->a[21503] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21504] = anon_sym_DOLLAR;
	v->a[21505] = anon_sym_DQUOTE;
	v->a[21506] = sym_raw_string;
	v->a[21507] = sym_number;
	v->a[21508] = anon_sym_DOLLAR_LBRACE;
	v->a[21509] = anon_sym_DOLLAR_LPAREN;
	v->a[21510] = anon_sym_BQUOTE;
	v->a[21511] = sym_word;
	v->a[21512] = 3;
	v->a[21513] = actions(680);
	v->a[21514] = 1;
	v->a[21515] = sym_comment;
	v->a[21516] = actions(726);
	v->a[21517] = 13;
	v->a[21518] = anon_sym_PIPE;
	v->a[21519] = anon_sym_EQ;
	small_parse_table_1076(v);
}

void	small_parse_table_1076(t_small_parse_table_array *v)
{
	v->a[21520] = anon_sym_LT;
	v->a[21521] = anon_sym_GT;
	v->a[21522] = anon_sym_GT_GT;
	v->a[21523] = anon_sym_LT_LT;
	v->a[21524] = anon_sym_CARET;
	v->a[21525] = anon_sym_AMP;
	v->a[21526] = anon_sym_PLUS;
	v->a[21527] = anon_sym_DASH;
	v->a[21528] = anon_sym_STAR;
	v->a[21529] = anon_sym_SLASH;
	v->a[21530] = anon_sym_PERCENT;
	v->a[21531] = actions(728);
	v->a[21532] = 21;
	v->a[21533] = anon_sym_AMP_AMP;
	v->a[21534] = anon_sym_PIPE_PIPE;
	v->a[21535] = anon_sym_RPAREN_RPAREN;
	v->a[21536] = anon_sym_PLUS_EQ;
	v->a[21537] = anon_sym_DASH_EQ;
	v->a[21538] = anon_sym_STAR_EQ;
	v->a[21539] = anon_sym_SLASH_EQ;
	small_parse_table_1077(v);
}

void	small_parse_table_1077(t_small_parse_table_array *v)
{
	v->a[21540] = anon_sym_PERCENT_EQ;
	v->a[21541] = anon_sym_LT_LT_EQ;
	v->a[21542] = anon_sym_GT_GT_EQ;
	v->a[21543] = anon_sym_AMP_EQ;
	v->a[21544] = anon_sym_CARET_EQ;
	v->a[21545] = anon_sym_PIPE_EQ;
	v->a[21546] = anon_sym_EQ_EQ;
	v->a[21547] = anon_sym_BANG_EQ;
	v->a[21548] = anon_sym_LT_EQ;
	v->a[21549] = anon_sym_GT_EQ;
	v->a[21550] = anon_sym_QMARK;
	v->a[21551] = anon_sym_COLON;
	v->a[21552] = anon_sym_PLUS_PLUS2;
	v->a[21553] = anon_sym_DASH_DASH2;
	v->a[21554] = 12;
	v->a[21555] = actions(668);
	v->a[21556] = 1;
	v->a[21557] = anon_sym_AMP;
	v->a[21558] = actions(680);
	v->a[21559] = 1;
	small_parse_table_1078(v);
}

void	small_parse_table_1078(t_small_parse_table_array *v)
{
	v->a[21560] = sym_comment;
	v->a[21561] = actions(730);
	v->a[21562] = 1;
	v->a[21563] = anon_sym_CARET;
	v->a[21564] = actions(660);
	v->a[21565] = 2;
	v->a[21566] = anon_sym_PIPE;
	v->a[21567] = anon_sym_EQ;
	v->a[21568] = actions(664);
	v->a[21569] = 2;
	v->a[21570] = anon_sym_LT;
	v->a[21571] = anon_sym_GT;
	v->a[21572] = actions(666);
	v->a[21573] = 2;
	v->a[21574] = anon_sym_GT_GT;
	v->a[21575] = anon_sym_LT_LT;
	v->a[21576] = actions(670);
	v->a[21577] = 2;
	v->a[21578] = anon_sym_EQ_EQ;
	v->a[21579] = anon_sym_BANG_EQ;
	small_parse_table_1079(v);
}

void	small_parse_table_1079(t_small_parse_table_array *v)
{
	v->a[21580] = actions(672);
	v->a[21581] = 2;
	v->a[21582] = anon_sym_LT_EQ;
	v->a[21583] = anon_sym_GT_EQ;
	v->a[21584] = actions(674);
	v->a[21585] = 2;
	v->a[21586] = anon_sym_PLUS;
	v->a[21587] = anon_sym_DASH;
	v->a[21588] = actions(678);
	v->a[21589] = 2;
	v->a[21590] = anon_sym_PLUS_PLUS2;
	v->a[21591] = anon_sym_DASH_DASH2;
	v->a[21592] = actions(676);
	v->a[21593] = 3;
	v->a[21594] = anon_sym_STAR;
	v->a[21595] = anon_sym_SLASH;
	v->a[21596] = anon_sym_PERCENT;
	v->a[21597] = actions(662);
	v->a[21598] = 15;
	v->a[21599] = anon_sym_AMP_AMP;
	small_parse_table_1080(v);
}

/* EOF small_parse_table_215.c */
