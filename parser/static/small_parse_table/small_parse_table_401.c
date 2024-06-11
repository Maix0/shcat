/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_401.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2005(t_small_parse_table_array *v)
{
	v->a[40100] = anon_sym_GT_GT;
	v->a[40101] = anon_sym_AMP_GT;
	v->a[40102] = anon_sym_AMP_GT_GT;
	v->a[40103] = anon_sym_LT_AMP;
	v->a[40104] = anon_sym_GT_AMP;
	v->a[40105] = anon_sym_GT_PIPE;
	v->a[40106] = anon_sym_LT_AMP_DASH;
	v->a[40107] = anon_sym_GT_AMP_DASH;
	v->a[40108] = anon_sym_LT_LT;
	v->a[40109] = anon_sym_LT_LT_DASH;
	v->a[40110] = aux_sym_heredoc_redirect_token1;
	v->a[40111] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40112] = anon_sym_AMP;
	v->a[40113] = aux_sym_concatenation_token1;
	v->a[40114] = anon_sym_DOLLAR;
	v->a[40115] = anon_sym_DQUOTE;
	v->a[40116] = sym_raw_string;
	v->a[40117] = sym_number;
	v->a[40118] = anon_sym_DOLLAR_LBRACE;
	v->a[40119] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2006(v);
}

void	small_parse_table_2006(t_small_parse_table_array *v)
{
	v->a[40120] = anon_sym_BQUOTE;
	v->a[40121] = sym_word;
	v->a[40122] = anon_sym_SEMI;
	v->a[40123] = 15;
	v->a[40124] = actions(1094);
	v->a[40125] = 1;
	v->a[40126] = sym_comment;
	v->a[40127] = actions(1229);
	v->a[40128] = 1;
	v->a[40129] = anon_sym_EQ;
	v->a[40130] = actions(1298);
	v->a[40131] = 1;
	v->a[40132] = anon_sym_PIPE;
	v->a[40133] = actions(1302);
	v->a[40134] = 1;
	v->a[40135] = anon_sym_AMP_AMP;
	v->a[40136] = actions(1304);
	v->a[40137] = 1;
	v->a[40138] = anon_sym_PIPE_PIPE;
	v->a[40139] = actions(1314);
	small_parse_table_2007(v);
}

void	small_parse_table_2007(t_small_parse_table_array *v)
{
	v->a[40140] = 1;
	v->a[40141] = anon_sym_CARET;
	v->a[40142] = actions(1316);
	v->a[40143] = 1;
	v->a[40144] = anon_sym_AMP;
	v->a[40145] = actions(1308);
	v->a[40146] = 2;
	v->a[40147] = anon_sym_LT;
	v->a[40148] = anon_sym_GT;
	v->a[40149] = actions(1310);
	v->a[40150] = 2;
	v->a[40151] = anon_sym_GT_GT;
	v->a[40152] = anon_sym_LT_LT;
	v->a[40153] = actions(1318);
	v->a[40154] = 2;
	v->a[40155] = anon_sym_EQ_EQ;
	v->a[40156] = anon_sym_BANG_EQ;
	v->a[40157] = actions(1320);
	v->a[40158] = 2;
	v->a[40159] = anon_sym_LT_EQ;
	small_parse_table_2008(v);
}

void	small_parse_table_2008(t_small_parse_table_array *v)
{
	v->a[40160] = anon_sym_GT_EQ;
	v->a[40161] = actions(1322);
	v->a[40162] = 2;
	v->a[40163] = anon_sym_PLUS;
	v->a[40164] = anon_sym_DASH;
	v->a[40165] = actions(1328);
	v->a[40166] = 2;
	v->a[40167] = anon_sym_PLUS_PLUS2;
	v->a[40168] = anon_sym_DASH_DASH2;
	v->a[40169] = actions(1324);
	v->a[40170] = 3;
	v->a[40171] = anon_sym_STAR;
	v->a[40172] = anon_sym_SLASH;
	v->a[40173] = anon_sym_PERCENT;
	v->a[40174] = actions(1231);
	v->a[40175] = 12;
	v->a[40176] = anon_sym_RPAREN;
	v->a[40177] = anon_sym_PLUS_EQ;
	v->a[40178] = anon_sym_DASH_EQ;
	v->a[40179] = anon_sym_STAR_EQ;
	small_parse_table_2009(v);
}

void	small_parse_table_2009(t_small_parse_table_array *v)
{
	v->a[40180] = anon_sym_SLASH_EQ;
	v->a[40181] = anon_sym_PERCENT_EQ;
	v->a[40182] = anon_sym_LT_LT_EQ;
	v->a[40183] = anon_sym_GT_GT_EQ;
	v->a[40184] = anon_sym_AMP_EQ;
	v->a[40185] = anon_sym_CARET_EQ;
	v->a[40186] = anon_sym_PIPE_EQ;
	v->a[40187] = anon_sym_QMARK;
	v->a[40188] = 3;
	v->a[40189] = actions(3);
	v->a[40190] = 1;
	v->a[40191] = sym_comment;
	v->a[40192] = actions(1147);
	v->a[40193] = 4;
	v->a[40194] = sym_file_descriptor;
	v->a[40195] = sym__concat;
	v->a[40196] = sym_variable_name;
	v->a[40197] = ts_builtin_sym_end;
	v->a[40198] = actions(1149);
	v->a[40199] = 29;
	small_parse_table_2010(v);
}

/* EOF small_parse_table_401.c */
