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
	v->a[42200] = anon_sym_DOLLAR;
	v->a[42201] = anon_sym_DQUOTE;
	v->a[42202] = sym_raw_string;
	v->a[42203] = aux_sym_number_token1;
	v->a[42204] = aux_sym_number_token2;
	v->a[42205] = anon_sym_DOLLAR_LBRACE;
	v->a[42206] = anon_sym_DOLLAR_LPAREN;
	v->a[42207] = anon_sym_BQUOTE;
	v->a[42208] = sym_word;
	v->a[42209] = 17;
	v->a[42210] = actions(1404);
	v->a[42211] = 1;
	v->a[42212] = sym_comment;
	v->a[42213] = actions(1418);
	v->a[42214] = 1;
	v->a[42215] = anon_sym_AMP;
	v->a[42216] = actions(1420);
	v->a[42217] = 1;
	v->a[42218] = anon_sym_PIPE;
	v->a[42219] = actions(1422);
	small_parse_table_2111(v);
}

void	small_parse_table_2111(t_small_parse_table_array *v)
{
	v->a[42220] = 1;
	v->a[42221] = anon_sym_AMP_AMP;
	v->a[42222] = actions(1424);
	v->a[42223] = 1;
	v->a[42224] = anon_sym_PIPE_PIPE;
	v->a[42225] = actions(1426);
	v->a[42226] = 1;
	v->a[42227] = anon_sym_EQ;
	v->a[42228] = actions(1428);
	v->a[42229] = 1;
	v->a[42230] = anon_sym_CARET;
	v->a[42231] = actions(1430);
	v->a[42232] = 1;
	v->a[42233] = anon_sym_QMARK;
	v->a[42234] = actions(1594);
	v->a[42235] = 1;
	v->a[42236] = anon_sym_RPAREN_RPAREN;
	v->a[42237] = actions(1402);
	v->a[42238] = 2;
	v->a[42239] = anon_sym_PLUS_PLUS2;
	small_parse_table_2112(v);
}

void	small_parse_table_2112(t_small_parse_table_array *v)
{
	v->a[42240] = anon_sym_DASH_DASH2;
	v->a[42241] = actions(1408);
	v->a[42242] = 2;
	v->a[42243] = anon_sym_LT;
	v->a[42244] = anon_sym_GT;
	v->a[42245] = actions(1410);
	v->a[42246] = 2;
	v->a[42247] = anon_sym_GT_GT;
	v->a[42248] = anon_sym_LT_LT;
	v->a[42249] = actions(1412);
	v->a[42250] = 2;
	v->a[42251] = anon_sym_LT_EQ;
	v->a[42252] = anon_sym_GT_EQ;
	v->a[42253] = actions(1414);
	v->a[42254] = 2;
	v->a[42255] = anon_sym_PLUS;
	v->a[42256] = anon_sym_DASH;
	v->a[42257] = actions(1416);
	v->a[42258] = 2;
	v->a[42259] = anon_sym_EQ_EQ;
	small_parse_table_2113(v);
}

void	small_parse_table_2113(t_small_parse_table_array *v)
{
	v->a[42260] = anon_sym_BANG_EQ;
	v->a[42261] = actions(1406);
	v->a[42262] = 3;
	v->a[42263] = anon_sym_STAR;
	v->a[42264] = anon_sym_SLASH;
	v->a[42265] = anon_sym_PERCENT;
	v->a[42266] = actions(1543);
	v->a[42267] = 10;
	v->a[42268] = anon_sym_PLUS_EQ;
	v->a[42269] = anon_sym_DASH_EQ;
	v->a[42270] = anon_sym_STAR_EQ;
	v->a[42271] = anon_sym_SLASH_EQ;
	v->a[42272] = anon_sym_PERCENT_EQ;
	v->a[42273] = anon_sym_LT_LT_EQ;
	v->a[42274] = anon_sym_GT_GT_EQ;
	v->a[42275] = anon_sym_AMP_EQ;
	v->a[42276] = anon_sym_CARET_EQ;
	v->a[42277] = anon_sym_PIPE_EQ;
	v->a[42278] = 19;
	v->a[42279] = actions(3);
	small_parse_table_2114(v);
}

void	small_parse_table_2114(t_small_parse_table_array *v)
{
	v->a[42280] = 1;
	v->a[42281] = sym_comment;
	v->a[42282] = actions(27);
	v->a[42283] = 1;
	v->a[42284] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42285] = actions(29);
	v->a[42286] = 1;
	v->a[42287] = anon_sym_DOLLAR;
	v->a[42288] = actions(31);
	v->a[42289] = 1;
	v->a[42290] = anon_sym_DQUOTE;
	v->a[42291] = actions(35);
	v->a[42292] = 1;
	v->a[42293] = aux_sym_number_token1;
	v->a[42294] = actions(37);
	v->a[42295] = 1;
	v->a[42296] = aux_sym_number_token2;
	v->a[42297] = actions(39);
	v->a[42298] = 1;
	v->a[42299] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2115(v);
}

/* EOF small_parse_table_422.c */
