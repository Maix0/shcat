/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_422.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2110(t_small_parse_table_array *v)
{
	v->a[42200] = 30;
	v->a[42201] = anon_sym_PIPE;
	v->a[42202] = anon_sym_RPAREN;
	v->a[42203] = anon_sym_SEMI_SEMI;
	v->a[42204] = anon_sym_AMP_AMP;
	v->a[42205] = anon_sym_PIPE_PIPE;
	v->a[42206] = anon_sym_LT;
	v->a[42207] = anon_sym_GT;
	v->a[42208] = anon_sym_GT_GT;
	v->a[42209] = anon_sym_AMP_GT;
	v->a[42210] = anon_sym_AMP_GT_GT;
	v->a[42211] = anon_sym_LT_AMP;
	v->a[42212] = anon_sym_GT_AMP;
	v->a[42213] = anon_sym_GT_PIPE;
	v->a[42214] = anon_sym_LT_AMP_DASH;
	v->a[42215] = anon_sym_GT_AMP_DASH;
	v->a[42216] = anon_sym_LT_LT;
	v->a[42217] = anon_sym_LT_LT_DASH;
	v->a[42218] = aux_sym_heredoc_redirect_token1;
	v->a[42219] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2111(v);
}

void	small_parse_table_2111(t_small_parse_table_array *v)
{
	v->a[42220] = anon_sym_AMP;
	v->a[42221] = aux_sym_concatenation_token1;
	v->a[42222] = anon_sym_DOLLAR;
	v->a[42223] = anon_sym_DQUOTE;
	v->a[42224] = sym_raw_string;
	v->a[42225] = sym_number;
	v->a[42226] = anon_sym_DOLLAR_LBRACE;
	v->a[42227] = anon_sym_DOLLAR_LPAREN;
	v->a[42228] = anon_sym_BQUOTE;
	v->a[42229] = sym_word;
	v->a[42230] = anon_sym_SEMI;
	v->a[42231] = 17;
	v->a[42232] = actions(1074);
	v->a[42233] = 1;
	v->a[42234] = sym_comment;
	v->a[42235] = actions(1136);
	v->a[42236] = 1;
	v->a[42237] = anon_sym_PIPE;
	v->a[42238] = actions(1138);
	v->a[42239] = 1;
	small_parse_table_2112(v);
}

void	small_parse_table_2112(t_small_parse_table_array *v)
{
	v->a[42240] = anon_sym_AMP_AMP;
	v->a[42241] = actions(1140);
	v->a[42242] = 1;
	v->a[42243] = anon_sym_PIPE_PIPE;
	v->a[42244] = actions(1150);
	v->a[42245] = 1;
	v->a[42246] = anon_sym_CARET;
	v->a[42247] = actions(1152);
	v->a[42248] = 1;
	v->a[42249] = anon_sym_AMP;
	v->a[42250] = actions(1239);
	v->a[42251] = 1;
	v->a[42252] = anon_sym_EQ;
	v->a[42253] = actions(1241);
	v->a[42254] = 1;
	v->a[42255] = anon_sym_QMARK;
	v->a[42256] = actions(1462);
	v->a[42257] = 1;
	v->a[42258] = anon_sym_RPAREN_RPAREN;
	v->a[42259] = actions(1144);
	small_parse_table_2113(v);
}

void	small_parse_table_2113(t_small_parse_table_array *v)
{
	v->a[42260] = 2;
	v->a[42261] = anon_sym_LT;
	v->a[42262] = anon_sym_GT;
	v->a[42263] = actions(1146);
	v->a[42264] = 2;
	v->a[42265] = anon_sym_GT_GT;
	v->a[42266] = anon_sym_LT_LT;
	v->a[42267] = actions(1154);
	v->a[42268] = 2;
	v->a[42269] = anon_sym_EQ_EQ;
	v->a[42270] = anon_sym_BANG_EQ;
	v->a[42271] = actions(1156);
	v->a[42272] = 2;
	v->a[42273] = anon_sym_LT_EQ;
	v->a[42274] = anon_sym_GT_EQ;
	v->a[42275] = actions(1158);
	v->a[42276] = 2;
	v->a[42277] = anon_sym_PLUS;
	v->a[42278] = anon_sym_DASH;
	v->a[42279] = actions(1162);
	small_parse_table_2114(v);
}

void	small_parse_table_2114(t_small_parse_table_array *v)
{
	v->a[42280] = 2;
	v->a[42281] = anon_sym_PLUS_PLUS2;
	v->a[42282] = anon_sym_DASH_DASH2;
	v->a[42283] = actions(1160);
	v->a[42284] = 3;
	v->a[42285] = anon_sym_STAR;
	v->a[42286] = anon_sym_SLASH;
	v->a[42287] = anon_sym_PERCENT;
	v->a[42288] = actions(1252);
	v->a[42289] = 10;
	v->a[42290] = anon_sym_PLUS_EQ;
	v->a[42291] = anon_sym_DASH_EQ;
	v->a[42292] = anon_sym_STAR_EQ;
	v->a[42293] = anon_sym_SLASH_EQ;
	v->a[42294] = anon_sym_PERCENT_EQ;
	v->a[42295] = anon_sym_LT_LT_EQ;
	v->a[42296] = anon_sym_GT_GT_EQ;
	v->a[42297] = anon_sym_AMP_EQ;
	v->a[42298] = anon_sym_CARET_EQ;
	v->a[42299] = anon_sym_PIPE_EQ;
	small_parse_table_2115(v);
}

/* EOF small_parse_table_422.c */
