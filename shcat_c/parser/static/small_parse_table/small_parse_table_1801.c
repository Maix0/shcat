/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1801.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9005(t_small_parse_table_array *v)
{
	v->a[180100] = anon_sym_PIPE;
	v->a[180101] = actions(6895);
	v->a[180102] = 1;
	v->a[180103] = anon_sym_CARET;
	v->a[180104] = actions(6897);
	v->a[180105] = 1;
	v->a[180106] = anon_sym_AMP;
	v->a[180107] = actions(6911);
	v->a[180108] = 1;
	v->a[180109] = anon_sym_STAR_STAR;
	v->a[180110] = actions(6913);
	v->a[180111] = 1;
	v->a[180112] = anon_sym_EQ_TILDE;
	v->a[180113] = actions(6915);
	v->a[180114] = 1;
	v->a[180115] = anon_sym_QMARK;
	v->a[180116] = actions(7709);
	v->a[180117] = 1;
	v->a[180118] = anon_sym_COLON;
	v->a[180119] = actions(6885);
	small_parse_table_9006(v);
}

void	small_parse_table_9006(t_small_parse_table_array *v)
{
	v->a[180120] = 2;
	v->a[180121] = anon_sym_PLUS_PLUS;
	v->a[180122] = anon_sym_DASH_DASH;
	v->a[180123] = actions(6899);
	v->a[180124] = 2;
	v->a[180125] = anon_sym_EQ_EQ;
	v->a[180126] = anon_sym_BANG_EQ;
	v->a[180127] = actions(6901);
	v->a[180128] = 2;
	v->a[180129] = anon_sym_LT;
	v->a[180130] = anon_sym_GT;
	v->a[180131] = actions(6903);
	v->a[180132] = 2;
	v->a[180133] = anon_sym_LT_EQ;
	v->a[180134] = anon_sym_GT_EQ;
	v->a[180135] = actions(6905);
	v->a[180136] = 2;
	v->a[180137] = anon_sym_LT_LT;
	v->a[180138] = anon_sym_GT_GT;
	v->a[180139] = actions(6907);
	small_parse_table_9007(v);
}

void	small_parse_table_9007(t_small_parse_table_array *v)
{
	v->a[180140] = 2;
	v->a[180141] = anon_sym_PLUS;
	v->a[180142] = anon_sym_DASH;
	v->a[180143] = actions(6909);
	v->a[180144] = 3;
	v->a[180145] = anon_sym_STAR;
	v->a[180146] = anon_sym_SLASH;
	v->a[180147] = anon_sym_PERCENT;
	v->a[180148] = actions(6887);
	v->a[180149] = 11;
	v->a[180150] = anon_sym_PLUS_EQ;
	v->a[180151] = anon_sym_DASH_EQ;
	v->a[180152] = anon_sym_STAR_EQ;
	v->a[180153] = anon_sym_SLASH_EQ;
	v->a[180154] = anon_sym_PERCENT_EQ;
	v->a[180155] = anon_sym_STAR_STAR_EQ;
	v->a[180156] = anon_sym_LT_LT_EQ;
	v->a[180157] = anon_sym_GT_GT_EQ;
	v->a[180158] = anon_sym_AMP_EQ;
	v->a[180159] = anon_sym_CARET_EQ;
	small_parse_table_9008(v);
}

void	small_parse_table_9008(t_small_parse_table_array *v)
{
	v->a[180160] = anon_sym_PIPE_EQ;
	v->a[180161] = 5;
	v->a[180162] = actions(71);
	v->a[180163] = 1;
	v->a[180164] = sym_comment;
	v->a[180165] = actions(7607);
	v->a[180166] = 1;
	v->a[180167] = anon_sym_STAR_STAR;
	v->a[180168] = actions(6793);
	v->a[180169] = 2;
	v->a[180170] = anon_sym_PLUS_PLUS;
	v->a[180171] = anon_sym_DASH_DASH;
	v->a[180172] = actions(6807);
	v->a[180173] = 13;
	v->a[180174] = anon_sym_EQ;
	v->a[180175] = anon_sym_PIPE;
	v->a[180176] = anon_sym_CARET;
	v->a[180177] = anon_sym_AMP;
	v->a[180178] = anon_sym_LT;
	v->a[180179] = anon_sym_GT;
	small_parse_table_9009(v);
}

void	small_parse_table_9009(t_small_parse_table_array *v)
{
	v->a[180180] = anon_sym_LT_LT;
	v->a[180181] = anon_sym_GT_GT;
	v->a[180182] = anon_sym_PLUS;
	v->a[180183] = anon_sym_DASH;
	v->a[180184] = anon_sym_STAR;
	v->a[180185] = anon_sym_SLASH;
	v->a[180186] = anon_sym_PERCENT;
	v->a[180187] = actions(6805);
	v->a[180188] = 20;
	v->a[180189] = sym_test_operator;
	v->a[180190] = anon_sym_PLUS_EQ;
	v->a[180191] = anon_sym_DASH_EQ;
	v->a[180192] = anon_sym_STAR_EQ;
	v->a[180193] = anon_sym_SLASH_EQ;
	v->a[180194] = anon_sym_PERCENT_EQ;
	v->a[180195] = anon_sym_STAR_STAR_EQ;
	v->a[180196] = anon_sym_LT_LT_EQ;
	v->a[180197] = anon_sym_GT_GT_EQ;
	v->a[180198] = anon_sym_AMP_EQ;
	v->a[180199] = anon_sym_CARET_EQ;
	small_parse_table_9010(v);
}

/* EOF small_parse_table_1801.c */
