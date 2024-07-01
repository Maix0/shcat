/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_262.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1310(t_small_parse_table_array *v)
{
	v->a[26200] = anon_sym_PLUS_EQ;
	v->a[26201] = anon_sym_DASH_EQ;
	v->a[26202] = anon_sym_STAR_EQ;
	v->a[26203] = anon_sym_SLASH_EQ;
	v->a[26204] = anon_sym_PERCENT_EQ;
	v->a[26205] = anon_sym_LT_LT_EQ;
	v->a[26206] = anon_sym_GT_GT_EQ;
	v->a[26207] = anon_sym_AMP_EQ;
	v->a[26208] = anon_sym_CARET_EQ;
	v->a[26209] = anon_sym_PIPE_EQ;
	v->a[26210] = anon_sym_EQ_EQ;
	v->a[26211] = anon_sym_BANG_EQ;
	v->a[26212] = anon_sym_LT_EQ;
	v->a[26213] = anon_sym_GT_EQ;
	v->a[26214] = anon_sym_QMARK;
	v->a[26215] = anon_sym_COLON;
	v->a[26216] = anon_sym_PLUS_PLUS2;
	v->a[26217] = anon_sym_DASH_DASH2;
	v->a[26218] = 16;
	v->a[26219] = actions(842);
	small_parse_table_1311(v);
}

void	small_parse_table_1311(t_small_parse_table_array *v)
{
	v->a[26220] = 1;
	v->a[26221] = anon_sym_PIPE;
	v->a[26222] = actions(844);
	v->a[26223] = 1;
	v->a[26224] = anon_sym_AMP_AMP;
	v->a[26225] = actions(846);
	v->a[26226] = 1;
	v->a[26227] = anon_sym_PIPE_PIPE;
	v->a[26228] = actions(856);
	v->a[26229] = 1;
	v->a[26230] = anon_sym_CARET;
	v->a[26231] = actions(858);
	v->a[26232] = 1;
	v->a[26233] = anon_sym_AMP;
	v->a[26234] = actions(870);
	v->a[26235] = 1;
	v->a[26236] = sym_comment;
	v->a[26237] = actions(1021);
	v->a[26238] = 1;
	v->a[26239] = anon_sym_EQ;
	small_parse_table_1312(v);
}

void	small_parse_table_1312(t_small_parse_table_array *v)
{
	v->a[26240] = actions(1023);
	v->a[26241] = 1;
	v->a[26242] = anon_sym_QMARK;
	v->a[26243] = actions(850);
	v->a[26244] = 2;
	v->a[26245] = anon_sym_LT;
	v->a[26246] = anon_sym_GT;
	v->a[26247] = actions(852);
	v->a[26248] = 2;
	v->a[26249] = anon_sym_GT_GT;
	v->a[26250] = anon_sym_LT_LT;
	v->a[26251] = actions(860);
	v->a[26252] = 2;
	v->a[26253] = anon_sym_EQ_EQ;
	v->a[26254] = anon_sym_BANG_EQ;
	v->a[26255] = actions(862);
	v->a[26256] = 2;
	v->a[26257] = anon_sym_LT_EQ;
	v->a[26258] = anon_sym_GT_EQ;
	v->a[26259] = actions(864);
	small_parse_table_1313(v);
}

void	small_parse_table_1313(t_small_parse_table_array *v)
{
	v->a[26260] = 2;
	v->a[26261] = anon_sym_PLUS;
	v->a[26262] = anon_sym_DASH;
	v->a[26263] = actions(868);
	v->a[26264] = 2;
	v->a[26265] = anon_sym_PLUS_PLUS2;
	v->a[26266] = anon_sym_DASH_DASH2;
	v->a[26267] = actions(866);
	v->a[26268] = 3;
	v->a[26269] = anon_sym_STAR;
	v->a[26270] = anon_sym_SLASH;
	v->a[26271] = anon_sym_PERCENT;
	v->a[26272] = actions(874);
	v->a[26273] = 12;
	v->a[26274] = anon_sym_RPAREN_RPAREN;
	v->a[26275] = anon_sym_PLUS_EQ;
	v->a[26276] = anon_sym_DASH_EQ;
	v->a[26277] = anon_sym_STAR_EQ;
	v->a[26278] = anon_sym_SLASH_EQ;
	v->a[26279] = anon_sym_PERCENT_EQ;
	small_parse_table_1314(v);
}

void	small_parse_table_1314(t_small_parse_table_array *v)
{
	v->a[26280] = anon_sym_LT_LT_EQ;
	v->a[26281] = anon_sym_GT_GT_EQ;
	v->a[26282] = anon_sym_AMP_EQ;
	v->a[26283] = anon_sym_CARET_EQ;
	v->a[26284] = anon_sym_PIPE_EQ;
	v->a[26285] = anon_sym_COLON;
	v->a[26286] = 6;
	v->a[26287] = actions(870);
	v->a[26288] = 1;
	v->a[26289] = sym_comment;
	v->a[26290] = actions(864);
	v->a[26291] = 2;
	v->a[26292] = anon_sym_PLUS;
	v->a[26293] = anon_sym_DASH;
	v->a[26294] = actions(868);
	v->a[26295] = 2;
	v->a[26296] = anon_sym_PLUS_PLUS2;
	v->a[26297] = anon_sym_DASH_DASH2;
	v->a[26298] = actions(866);
	v->a[26299] = 3;
	small_parse_table_1315(v);
}

/* EOF small_parse_table_262.c */
