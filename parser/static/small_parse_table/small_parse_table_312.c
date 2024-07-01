/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_312.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1560(t_small_parse_table_array *v)
{
	v->a[31200] = anon_sym_AMP_AMP;
	v->a[31201] = anon_sym_PIPE_PIPE;
	v->a[31202] = anon_sym_LT;
	v->a[31203] = anon_sym_GT;
	v->a[31204] = anon_sym_GT_GT;
	v->a[31205] = anon_sym_LT_AMP;
	v->a[31206] = anon_sym_GT_AMP;
	v->a[31207] = anon_sym_GT_PIPE;
	v->a[31208] = anon_sym_LT_AMP_DASH;
	v->a[31209] = anon_sym_GT_AMP_DASH;
	v->a[31210] = anon_sym_LT_LT;
	v->a[31211] = anon_sym_LT_LT_DASH;
	v->a[31212] = aux_sym_heredoc_redirect_token1;
	v->a[31213] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31214] = anon_sym_AMP;
	v->a[31215] = anon_sym_DOLLAR;
	v->a[31216] = anon_sym_DQUOTE;
	v->a[31217] = sym_raw_string;
	v->a[31218] = sym_number;
	v->a[31219] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1561(v);
}

void	small_parse_table_1561(t_small_parse_table_array *v)
{
	v->a[31220] = anon_sym_DOLLAR_LPAREN;
	v->a[31221] = anon_sym_BQUOTE;
	v->a[31222] = sym_word;
	v->a[31223] = anon_sym_SEMI;
	v->a[31224] = 13;
	v->a[31225] = actions(870);
	v->a[31226] = 1;
	v->a[31227] = sym_comment;
	v->a[31228] = actions(872);
	v->a[31229] = 1;
	v->a[31230] = anon_sym_EQ;
	v->a[31231] = actions(1051);
	v->a[31232] = 1;
	v->a[31233] = anon_sym_PIPE;
	v->a[31234] = actions(1061);
	v->a[31235] = 1;
	v->a[31236] = anon_sym_CARET;
	v->a[31237] = actions(1063);
	v->a[31238] = 1;
	v->a[31239] = anon_sym_AMP;
	small_parse_table_1562(v);
}

void	small_parse_table_1562(t_small_parse_table_array *v)
{
	v->a[31240] = actions(1057);
	v->a[31241] = 2;
	v->a[31242] = anon_sym_LT;
	v->a[31243] = anon_sym_GT;
	v->a[31244] = actions(1059);
	v->a[31245] = 2;
	v->a[31246] = anon_sym_GT_GT;
	v->a[31247] = anon_sym_LT_LT;
	v->a[31248] = actions(1065);
	v->a[31249] = 2;
	v->a[31250] = anon_sym_EQ_EQ;
	v->a[31251] = anon_sym_BANG_EQ;
	v->a[31252] = actions(1067);
	v->a[31253] = 2;
	v->a[31254] = anon_sym_LT_EQ;
	v->a[31255] = anon_sym_GT_EQ;
	v->a[31256] = actions(1069);
	v->a[31257] = 2;
	v->a[31258] = anon_sym_PLUS;
	v->a[31259] = anon_sym_DASH;
	small_parse_table_1563(v);
}

void	small_parse_table_1563(t_small_parse_table_array *v)
{
	v->a[31260] = actions(1075);
	v->a[31261] = 2;
	v->a[31262] = anon_sym_PLUS_PLUS2;
	v->a[31263] = anon_sym_DASH_DASH2;
	v->a[31264] = actions(1071);
	v->a[31265] = 3;
	v->a[31266] = anon_sym_STAR;
	v->a[31267] = anon_sym_SLASH;
	v->a[31268] = anon_sym_PERCENT;
	v->a[31269] = actions(874);
	v->a[31270] = 14;
	v->a[31271] = anon_sym_RPAREN;
	v->a[31272] = anon_sym_AMP_AMP;
	v->a[31273] = anon_sym_PIPE_PIPE;
	v->a[31274] = anon_sym_PLUS_EQ;
	v->a[31275] = anon_sym_DASH_EQ;
	v->a[31276] = anon_sym_STAR_EQ;
	v->a[31277] = anon_sym_SLASH_EQ;
	v->a[31278] = anon_sym_PERCENT_EQ;
	v->a[31279] = anon_sym_LT_LT_EQ;
	small_parse_table_1564(v);
}

void	small_parse_table_1564(t_small_parse_table_array *v)
{
	v->a[31280] = anon_sym_GT_GT_EQ;
	v->a[31281] = anon_sym_AMP_EQ;
	v->a[31282] = anon_sym_CARET_EQ;
	v->a[31283] = anon_sym_PIPE_EQ;
	v->a[31284] = anon_sym_QMARK;
	v->a[31285] = 3;
	v->a[31286] = actions(870);
	v->a[31287] = 1;
	v->a[31288] = sym_comment;
	v->a[31289] = actions(980);
	v->a[31290] = 13;
	v->a[31291] = anon_sym_PIPE;
	v->a[31292] = anon_sym_EQ;
	v->a[31293] = anon_sym_LT;
	v->a[31294] = anon_sym_GT;
	v->a[31295] = anon_sym_GT_GT;
	v->a[31296] = anon_sym_LT_LT;
	v->a[31297] = anon_sym_CARET;
	v->a[31298] = anon_sym_AMP;
	v->a[31299] = anon_sym_PLUS;
	small_parse_table_1565(v);
}

/* EOF small_parse_table_312.c */
