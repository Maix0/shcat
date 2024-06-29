/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_302.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1510(t_small_parse_table_array *v)
{
	v->a[30200] = anon_sym_PLUS;
	v->a[30201] = anon_sym_DASH;
	v->a[30202] = anon_sym_STAR;
	v->a[30203] = anon_sym_SLASH;
	v->a[30204] = anon_sym_PERCENT;
	v->a[30205] = actions(1188);
	v->a[30206] = 19;
	v->a[30207] = anon_sym_AMP_AMP;
	v->a[30208] = anon_sym_PIPE_PIPE;
	v->a[30209] = anon_sym_RPAREN_RPAREN;
	v->a[30210] = anon_sym_PLUS_EQ;
	v->a[30211] = anon_sym_DASH_EQ;
	v->a[30212] = anon_sym_STAR_EQ;
	v->a[30213] = anon_sym_SLASH_EQ;
	v->a[30214] = anon_sym_PERCENT_EQ;
	v->a[30215] = anon_sym_LT_LT_EQ;
	v->a[30216] = anon_sym_GT_GT_EQ;
	v->a[30217] = anon_sym_AMP_EQ;
	v->a[30218] = anon_sym_CARET_EQ;
	v->a[30219] = anon_sym_PIPE_EQ;
	small_parse_table_1511(v);
}

void	small_parse_table_1511(t_small_parse_table_array *v)
{
	v->a[30220] = anon_sym_EQ_EQ;
	v->a[30221] = anon_sym_BANG_EQ;
	v->a[30222] = anon_sym_LT_EQ;
	v->a[30223] = anon_sym_GT_EQ;
	v->a[30224] = anon_sym_QMARK;
	v->a[30225] = anon_sym_COLON;
	v->a[30226] = 7;
	v->a[30227] = actions(1074);
	v->a[30228] = 1;
	v->a[30229] = sym_comment;
	v->a[30230] = actions(1146);
	v->a[30231] = 2;
	v->a[30232] = anon_sym_GT_GT;
	v->a[30233] = anon_sym_LT_LT;
	v->a[30234] = actions(1158);
	v->a[30235] = 2;
	v->a[30236] = anon_sym_PLUS;
	v->a[30237] = anon_sym_DASH;
	v->a[30238] = actions(1162);
	v->a[30239] = 2;
	small_parse_table_1512(v);
}

void	small_parse_table_1512(t_small_parse_table_array *v)
{
	v->a[30240] = anon_sym_PLUS_PLUS2;
	v->a[30241] = anon_sym_DASH_DASH2;
	v->a[30242] = actions(1160);
	v->a[30243] = 3;
	v->a[30244] = anon_sym_STAR;
	v->a[30245] = anon_sym_SLASH;
	v->a[30246] = anon_sym_PERCENT;
	v->a[30247] = actions(1186);
	v->a[30248] = 6;
	v->a[30249] = anon_sym_PIPE;
	v->a[30250] = anon_sym_EQ;
	v->a[30251] = anon_sym_LT;
	v->a[30252] = anon_sym_GT;
	v->a[30253] = anon_sym_CARET;
	v->a[30254] = anon_sym_AMP;
	v->a[30255] = actions(1188);
	v->a[30256] = 19;
	v->a[30257] = anon_sym_AMP_AMP;
	v->a[30258] = anon_sym_PIPE_PIPE;
	v->a[30259] = anon_sym_RPAREN_RPAREN;
	small_parse_table_1513(v);
}

void	small_parse_table_1513(t_small_parse_table_array *v)
{
	v->a[30260] = anon_sym_PLUS_EQ;
	v->a[30261] = anon_sym_DASH_EQ;
	v->a[30262] = anon_sym_STAR_EQ;
	v->a[30263] = anon_sym_SLASH_EQ;
	v->a[30264] = anon_sym_PERCENT_EQ;
	v->a[30265] = anon_sym_LT_LT_EQ;
	v->a[30266] = anon_sym_GT_GT_EQ;
	v->a[30267] = anon_sym_AMP_EQ;
	v->a[30268] = anon_sym_CARET_EQ;
	v->a[30269] = anon_sym_PIPE_EQ;
	v->a[30270] = anon_sym_EQ_EQ;
	v->a[30271] = anon_sym_BANG_EQ;
	v->a[30272] = anon_sym_LT_EQ;
	v->a[30273] = anon_sym_GT_EQ;
	v->a[30274] = anon_sym_QMARK;
	v->a[30275] = anon_sym_COLON;
	v->a[30276] = 7;
	v->a[30277] = actions(3);
	v->a[30278] = 1;
	v->a[30279] = sym_comment;
	small_parse_table_1514(v);
}

void	small_parse_table_1514(t_small_parse_table_array *v)
{
	v->a[30280] = actions(959);
	v->a[30281] = 1;
	v->a[30282] = aux_sym_concatenation_token1;
	v->a[30283] = actions(1027);
	v->a[30284] = 1;
	v->a[30285] = sym__concat;
	v->a[30286] = actions(1190);
	v->a[30287] = 1;
	v->a[30288] = anon_sym_LPAREN;
	v->a[30289] = state(400);
	v->a[30290] = 1;
	v->a[30291] = aux_sym_concatenation_repeat1;
	v->a[30292] = actions(1000);
	v->a[30293] = 2;
	v->a[30294] = sym_file_descriptor;
	v->a[30295] = sym__bare_dollar;
	v->a[30296] = actions(993);
	v->a[30297] = 28;
	v->a[30298] = anon_sym_PIPE;
	v->a[30299] = anon_sym_SEMI_SEMI;
	small_parse_table_1515(v);
}

/* EOF small_parse_table_302.c */
