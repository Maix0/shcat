/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_382.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1910(t_small_parse_table_array *v)
{
	v->a[38200] = anon_sym_PIPE_PIPE;
	v->a[38201] = anon_sym_LT;
	v->a[38202] = anon_sym_GT;
	v->a[38203] = anon_sym_GT_GT;
	v->a[38204] = anon_sym_AMP_GT;
	v->a[38205] = anon_sym_AMP_GT_GT;
	v->a[38206] = anon_sym_LT_AMP;
	v->a[38207] = anon_sym_GT_AMP;
	v->a[38208] = anon_sym_GT_PIPE;
	v->a[38209] = anon_sym_LT_AMP_DASH;
	v->a[38210] = anon_sym_GT_AMP_DASH;
	v->a[38211] = anon_sym_LT_LT;
	v->a[38212] = anon_sym_LT_LT_DASH;
	v->a[38213] = aux_sym_heredoc_redirect_token1;
	v->a[38214] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38215] = anon_sym_AMP;
	v->a[38216] = anon_sym_DOLLAR;
	v->a[38217] = anon_sym_DQUOTE;
	v->a[38218] = sym_raw_string;
	v->a[38219] = sym_number;
	small_parse_table_1911(v);
}

void	small_parse_table_1911(t_small_parse_table_array *v)
{
	v->a[38220] = anon_sym_DOLLAR_LBRACE;
	v->a[38221] = anon_sym_DOLLAR_LPAREN;
	v->a[38222] = anon_sym_BQUOTE;
	v->a[38223] = sym_word;
	v->a[38224] = anon_sym_SEMI;
	v->a[38225] = 17;
	v->a[38226] = actions(1074);
	v->a[38227] = 1;
	v->a[38228] = sym_comment;
	v->a[38229] = actions(1136);
	v->a[38230] = 1;
	v->a[38231] = anon_sym_PIPE;
	v->a[38232] = actions(1138);
	v->a[38233] = 1;
	v->a[38234] = anon_sym_AMP_AMP;
	v->a[38235] = actions(1140);
	v->a[38236] = 1;
	v->a[38237] = anon_sym_PIPE_PIPE;
	v->a[38238] = actions(1150);
	v->a[38239] = 1;
	small_parse_table_1912(v);
}

void	small_parse_table_1912(t_small_parse_table_array *v)
{
	v->a[38240] = anon_sym_CARET;
	v->a[38241] = actions(1152);
	v->a[38242] = 1;
	v->a[38243] = anon_sym_AMP;
	v->a[38244] = actions(1239);
	v->a[38245] = 1;
	v->a[38246] = anon_sym_EQ;
	v->a[38247] = actions(1241);
	v->a[38248] = 1;
	v->a[38249] = anon_sym_QMARK;
	v->a[38250] = actions(1396);
	v->a[38251] = 1;
	v->a[38252] = anon_sym_RPAREN_RPAREN;
	v->a[38253] = actions(1144);
	v->a[38254] = 2;
	v->a[38255] = anon_sym_LT;
	v->a[38256] = anon_sym_GT;
	v->a[38257] = actions(1146);
	v->a[38258] = 2;
	v->a[38259] = anon_sym_GT_GT;
	small_parse_table_1913(v);
}

void	small_parse_table_1913(t_small_parse_table_array *v)
{
	v->a[38260] = anon_sym_LT_LT;
	v->a[38261] = actions(1154);
	v->a[38262] = 2;
	v->a[38263] = anon_sym_EQ_EQ;
	v->a[38264] = anon_sym_BANG_EQ;
	v->a[38265] = actions(1156);
	v->a[38266] = 2;
	v->a[38267] = anon_sym_LT_EQ;
	v->a[38268] = anon_sym_GT_EQ;
	v->a[38269] = actions(1158);
	v->a[38270] = 2;
	v->a[38271] = anon_sym_PLUS;
	v->a[38272] = anon_sym_DASH;
	v->a[38273] = actions(1162);
	v->a[38274] = 2;
	v->a[38275] = anon_sym_PLUS_PLUS2;
	v->a[38276] = anon_sym_DASH_DASH2;
	v->a[38277] = actions(1160);
	v->a[38278] = 3;
	v->a[38279] = anon_sym_STAR;
	small_parse_table_1914(v);
}

void	small_parse_table_1914(t_small_parse_table_array *v)
{
	v->a[38280] = anon_sym_SLASH;
	v->a[38281] = anon_sym_PERCENT;
	v->a[38282] = actions(1252);
	v->a[38283] = 10;
	v->a[38284] = anon_sym_PLUS_EQ;
	v->a[38285] = anon_sym_DASH_EQ;
	v->a[38286] = anon_sym_STAR_EQ;
	v->a[38287] = anon_sym_SLASH_EQ;
	v->a[38288] = anon_sym_PERCENT_EQ;
	v->a[38289] = anon_sym_LT_LT_EQ;
	v->a[38290] = anon_sym_GT_GT_EQ;
	v->a[38291] = anon_sym_AMP_EQ;
	v->a[38292] = anon_sym_CARET_EQ;
	v->a[38293] = anon_sym_PIPE_EQ;
	v->a[38294] = 17;
	v->a[38295] = actions(1074);
	v->a[38296] = 1;
	v->a[38297] = sym_comment;
	v->a[38298] = actions(1136);
	v->a[38299] = 1;
	small_parse_table_1915(v);
}

/* EOF small_parse_table_382.c */
