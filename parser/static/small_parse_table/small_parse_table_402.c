/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_402.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2010(t_small_parse_table_array *v)
{
	v->a[40200] = anon_sym_PIPE;
	v->a[40201] = anon_sym_SEMI_SEMI;
	v->a[40202] = anon_sym_AMP_AMP;
	v->a[40203] = anon_sym_PIPE_PIPE;
	v->a[40204] = anon_sym_LT;
	v->a[40205] = anon_sym_GT;
	v->a[40206] = anon_sym_GT_GT;
	v->a[40207] = anon_sym_AMP_GT;
	v->a[40208] = anon_sym_AMP_GT_GT;
	v->a[40209] = anon_sym_LT_AMP;
	v->a[40210] = anon_sym_GT_AMP;
	v->a[40211] = anon_sym_GT_PIPE;
	v->a[40212] = anon_sym_LT_AMP_DASH;
	v->a[40213] = anon_sym_GT_AMP_DASH;
	v->a[40214] = anon_sym_LT_LT;
	v->a[40215] = anon_sym_LT_LT_DASH;
	v->a[40216] = aux_sym_heredoc_redirect_token1;
	v->a[40217] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40218] = anon_sym_AMP;
	v->a[40219] = aux_sym_concatenation_token1;
	small_parse_table_2011(v);
}

void	small_parse_table_2011(t_small_parse_table_array *v)
{
	v->a[40220] = anon_sym_DOLLAR;
	v->a[40221] = anon_sym_DQUOTE;
	v->a[40222] = sym_raw_string;
	v->a[40223] = sym_number;
	v->a[40224] = anon_sym_DOLLAR_LBRACE;
	v->a[40225] = anon_sym_DOLLAR_LPAREN;
	v->a[40226] = anon_sym_BQUOTE;
	v->a[40227] = sym_word;
	v->a[40228] = anon_sym_SEMI;
	v->a[40229] = 7;
	v->a[40230] = actions(1094);
	v->a[40231] = 1;
	v->a[40232] = sym_comment;
	v->a[40233] = actions(1310);
	v->a[40234] = 2;
	v->a[40235] = anon_sym_GT_GT;
	v->a[40236] = anon_sym_LT_LT;
	v->a[40237] = actions(1322);
	v->a[40238] = 2;
	v->a[40239] = anon_sym_PLUS;
	small_parse_table_2012(v);
}

void	small_parse_table_2012(t_small_parse_table_array *v)
{
	v->a[40240] = anon_sym_DASH;
	v->a[40241] = actions(1328);
	v->a[40242] = 2;
	v->a[40243] = anon_sym_PLUS_PLUS2;
	v->a[40244] = anon_sym_DASH_DASH2;
	v->a[40245] = actions(1324);
	v->a[40246] = 3;
	v->a[40247] = anon_sym_STAR;
	v->a[40248] = anon_sym_SLASH;
	v->a[40249] = anon_sym_PERCENT;
	v->a[40250] = actions(1245);
	v->a[40251] = 6;
	v->a[40252] = anon_sym_PIPE;
	v->a[40253] = anon_sym_EQ;
	v->a[40254] = anon_sym_LT;
	v->a[40255] = anon_sym_GT;
	v->a[40256] = anon_sym_CARET;
	v->a[40257] = anon_sym_AMP;
	v->a[40258] = actions(1247);
	v->a[40259] = 18;
	small_parse_table_2013(v);
}

void	small_parse_table_2013(t_small_parse_table_array *v)
{
	v->a[40260] = anon_sym_RPAREN;
	v->a[40261] = anon_sym_AMP_AMP;
	v->a[40262] = anon_sym_PIPE_PIPE;
	v->a[40263] = anon_sym_PLUS_EQ;
	v->a[40264] = anon_sym_DASH_EQ;
	v->a[40265] = anon_sym_STAR_EQ;
	v->a[40266] = anon_sym_SLASH_EQ;
	v->a[40267] = anon_sym_PERCENT_EQ;
	v->a[40268] = anon_sym_LT_LT_EQ;
	v->a[40269] = anon_sym_GT_GT_EQ;
	v->a[40270] = anon_sym_AMP_EQ;
	v->a[40271] = anon_sym_CARET_EQ;
	v->a[40272] = anon_sym_PIPE_EQ;
	v->a[40273] = anon_sym_EQ_EQ;
	v->a[40274] = anon_sym_BANG_EQ;
	v->a[40275] = anon_sym_LT_EQ;
	v->a[40276] = anon_sym_GT_EQ;
	v->a[40277] = anon_sym_QMARK;
	v->a[40278] = 4;
	v->a[40279] = actions(1094);
	small_parse_table_2014(v);
}

void	small_parse_table_2014(t_small_parse_table_array *v)
{
	v->a[40280] = 1;
	v->a[40281] = sym_comment;
	v->a[40282] = actions(1328);
	v->a[40283] = 2;
	v->a[40284] = anon_sym_PLUS_PLUS2;
	v->a[40285] = anon_sym_DASH_DASH2;
	v->a[40286] = actions(1245);
	v->a[40287] = 13;
	v->a[40288] = anon_sym_PIPE;
	v->a[40289] = anon_sym_EQ;
	v->a[40290] = anon_sym_LT;
	v->a[40291] = anon_sym_GT;
	v->a[40292] = anon_sym_GT_GT;
	v->a[40293] = anon_sym_LT_LT;
	v->a[40294] = anon_sym_CARET;
	v->a[40295] = anon_sym_AMP;
	v->a[40296] = anon_sym_PLUS;
	v->a[40297] = anon_sym_DASH;
	v->a[40298] = anon_sym_STAR;
	v->a[40299] = anon_sym_SLASH;
	small_parse_table_2015(v);
}

/* EOF small_parse_table_402.c */
