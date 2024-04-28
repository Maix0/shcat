/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1602.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8010(t_small_parse_table_array *v)
{
	v->a[160200] = 1;
	v->a[160201] = anon_sym_EQ_TILDE;
	v->a[160202] = actions(7202);
	v->a[160203] = 1;
	v->a[160204] = anon_sym_QMARK;
	v->a[160205] = actions(7206);
	v->a[160206] = 1;
	v->a[160207] = sym_test_operator;
	v->a[160208] = actions(7364);
	v->a[160209] = 1;
	v->a[160210] = anon_sym_COLON;
	v->a[160211] = actions(6793);
	v->a[160212] = 2;
	v->a[160213] = anon_sym_PLUS_PLUS;
	v->a[160214] = anon_sym_DASH_DASH;
	v->a[160215] = actions(7186);
	v->a[160216] = 2;
	v->a[160217] = anon_sym_EQ_EQ;
	v->a[160218] = anon_sym_BANG_EQ;
	v->a[160219] = actions(7188);
	small_parse_table_8011(v);
}

void	small_parse_table_8011(t_small_parse_table_array *v)
{
	v->a[160220] = 2;
	v->a[160221] = anon_sym_LT;
	v->a[160222] = anon_sym_GT;
	v->a[160223] = actions(7190);
	v->a[160224] = 2;
	v->a[160225] = anon_sym_LT_EQ;
	v->a[160226] = anon_sym_GT_EQ;
	v->a[160227] = actions(7192);
	v->a[160228] = 2;
	v->a[160229] = anon_sym_LT_LT;
	v->a[160230] = anon_sym_GT_GT;
	v->a[160231] = actions(7194);
	v->a[160232] = 2;
	v->a[160233] = anon_sym_PLUS;
	v->a[160234] = anon_sym_DASH;
	v->a[160235] = actions(7196);
	v->a[160236] = 3;
	v->a[160237] = anon_sym_STAR;
	v->a[160238] = anon_sym_SLASH;
	v->a[160239] = anon_sym_PERCENT;
	small_parse_table_8012(v);
}

void	small_parse_table_8012(t_small_parse_table_array *v)
{
	v->a[160240] = actions(7174);
	v->a[160241] = 11;
	v->a[160242] = anon_sym_PLUS_EQ;
	v->a[160243] = anon_sym_DASH_EQ;
	v->a[160244] = anon_sym_STAR_EQ;
	v->a[160245] = anon_sym_SLASH_EQ;
	v->a[160246] = anon_sym_PERCENT_EQ;
	v->a[160247] = anon_sym_STAR_STAR_EQ;
	v->a[160248] = anon_sym_LT_LT_EQ;
	v->a[160249] = anon_sym_GT_GT_EQ;
	v->a[160250] = anon_sym_AMP_EQ;
	v->a[160251] = anon_sym_CARET_EQ;
	v->a[160252] = anon_sym_PIPE_EQ;
	v->a[160253] = 5;
	v->a[160254] = actions(71);
	v->a[160255] = 1;
	v->a[160256] = sym_comment;
	v->a[160257] = actions(7220);
	v->a[160258] = 1;
	v->a[160259] = anon_sym_STAR_STAR;
	small_parse_table_8013(v);
}

void	small_parse_table_8013(t_small_parse_table_array *v)
{
	v->a[160260] = actions(6793);
	v->a[160261] = 2;
	v->a[160262] = anon_sym_PLUS_PLUS;
	v->a[160263] = anon_sym_DASH_DASH;
	v->a[160264] = actions(6807);
	v->a[160265] = 13;
	v->a[160266] = anon_sym_EQ;
	v->a[160267] = anon_sym_PIPE;
	v->a[160268] = anon_sym_CARET;
	v->a[160269] = anon_sym_AMP;
	v->a[160270] = anon_sym_LT;
	v->a[160271] = anon_sym_GT;
	v->a[160272] = anon_sym_LT_LT;
	v->a[160273] = anon_sym_GT_GT;
	v->a[160274] = anon_sym_PLUS;
	v->a[160275] = anon_sym_DASH;
	v->a[160276] = anon_sym_STAR;
	v->a[160277] = anon_sym_SLASH;
	v->a[160278] = anon_sym_PERCENT;
	v->a[160279] = actions(6805);
	small_parse_table_8014(v);
}

void	small_parse_table_8014(t_small_parse_table_array *v)
{
	v->a[160280] = 21;
	v->a[160281] = sym_test_operator;
	v->a[160282] = anon_sym_RPAREN_RPAREN;
	v->a[160283] = anon_sym_PLUS_EQ;
	v->a[160284] = anon_sym_DASH_EQ;
	v->a[160285] = anon_sym_STAR_EQ;
	v->a[160286] = anon_sym_SLASH_EQ;
	v->a[160287] = anon_sym_PERCENT_EQ;
	v->a[160288] = anon_sym_STAR_STAR_EQ;
	v->a[160289] = anon_sym_LT_LT_EQ;
	v->a[160290] = anon_sym_GT_GT_EQ;
	v->a[160291] = anon_sym_AMP_EQ;
	v->a[160292] = anon_sym_CARET_EQ;
	v->a[160293] = anon_sym_PIPE_EQ;
	v->a[160294] = anon_sym_PIPE_PIPE;
	v->a[160295] = anon_sym_AMP_AMP;
	v->a[160296] = anon_sym_EQ_EQ;
	v->a[160297] = anon_sym_BANG_EQ;
	v->a[160298] = anon_sym_LT_EQ;
	v->a[160299] = anon_sym_GT_EQ;
	small_parse_table_8015(v);
}

/* EOF small_parse_table_1602.c */
