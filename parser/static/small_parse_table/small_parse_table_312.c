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
	v->a[31200] = actions(1088);
	v->a[31201] = 2;
	v->a[31202] = anon_sym_PLUS;
	v->a[31203] = anon_sym_DASH;
	v->a[31204] = actions(1092);
	v->a[31205] = 2;
	v->a[31206] = anon_sym_PLUS_PLUS2;
	v->a[31207] = anon_sym_DASH_DASH2;
	v->a[31208] = actions(1116);
	v->a[31209] = 2;
	v->a[31210] = anon_sym_EQ_EQ;
	v->a[31211] = anon_sym_BANG_EQ;
	v->a[31212] = actions(1090);
	v->a[31213] = 3;
	v->a[31214] = anon_sym_STAR;
	v->a[31215] = anon_sym_SLASH;
	v->a[31216] = anon_sym_PERCENT;
	v->a[31217] = actions(1078);
	v->a[31218] = 4;
	v->a[31219] = anon_sym_PIPE;
	small_parse_table_1561(v);
}

void	small_parse_table_1561(t_small_parse_table_array *v)
{
	v->a[31220] = anon_sym_EQ;
	v->a[31221] = anon_sym_CARET;
	v->a[31222] = anon_sym_AMP;
	v->a[31223] = actions(1080);
	v->a[31224] = 15;
	v->a[31225] = anon_sym_AMP_AMP;
	v->a[31226] = anon_sym_PIPE_PIPE;
	v->a[31227] = anon_sym_RPAREN_RPAREN;
	v->a[31228] = anon_sym_PLUS_EQ;
	v->a[31229] = anon_sym_DASH_EQ;
	v->a[31230] = anon_sym_STAR_EQ;
	v->a[31231] = anon_sym_SLASH_EQ;
	v->a[31232] = anon_sym_PERCENT_EQ;
	v->a[31233] = anon_sym_LT_LT_EQ;
	v->a[31234] = anon_sym_GT_GT_EQ;
	v->a[31235] = anon_sym_AMP_EQ;
	v->a[31236] = anon_sym_CARET_EQ;
	v->a[31237] = anon_sym_PIPE_EQ;
	v->a[31238] = anon_sym_QMARK;
	v->a[31239] = anon_sym_COLON;
	small_parse_table_1562(v);
}

void	small_parse_table_1562(t_small_parse_table_array *v)
{
	v->a[31240] = 6;
	v->a[31241] = actions(3);
	v->a[31242] = 1;
	v->a[31243] = sym_comment;
	v->a[31244] = actions(1096);
	v->a[31245] = 1;
	v->a[31246] = aux_sym_concatenation_token1;
	v->a[31247] = actions(1098);
	v->a[31248] = 1;
	v->a[31249] = sym__concat;
	v->a[31250] = state(349);
	v->a[31251] = 1;
	v->a[31252] = aux_sym_concatenation_repeat1;
	v->a[31253] = actions(1219);
	v->a[31254] = 3;
	v->a[31255] = sym_file_descriptor;
	v->a[31256] = sym_variable_name;
	v->a[31257] = ts_builtin_sym_end;
	v->a[31258] = actions(1215);
	v->a[31259] = 28;
	small_parse_table_1563(v);
}

void	small_parse_table_1563(t_small_parse_table_array *v)
{
	v->a[31260] = anon_sym_PIPE;
	v->a[31261] = anon_sym_SEMI_SEMI;
	v->a[31262] = anon_sym_AMP_AMP;
	v->a[31263] = anon_sym_PIPE_PIPE;
	v->a[31264] = anon_sym_LT;
	v->a[31265] = anon_sym_GT;
	v->a[31266] = anon_sym_GT_GT;
	v->a[31267] = anon_sym_AMP_GT;
	v->a[31268] = anon_sym_AMP_GT_GT;
	v->a[31269] = anon_sym_LT_AMP;
	v->a[31270] = anon_sym_GT_AMP;
	v->a[31271] = anon_sym_GT_PIPE;
	v->a[31272] = anon_sym_LT_AMP_DASH;
	v->a[31273] = anon_sym_GT_AMP_DASH;
	v->a[31274] = anon_sym_LT_LT;
	v->a[31275] = anon_sym_LT_LT_DASH;
	v->a[31276] = aux_sym_heredoc_redirect_token1;
	v->a[31277] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31278] = anon_sym_AMP;
	v->a[31279] = anon_sym_DOLLAR;
	small_parse_table_1564(v);
}

void	small_parse_table_1564(t_small_parse_table_array *v)
{
	v->a[31280] = anon_sym_DQUOTE;
	v->a[31281] = sym_raw_string;
	v->a[31282] = sym_number;
	v->a[31283] = anon_sym_DOLLAR_LBRACE;
	v->a[31284] = anon_sym_DOLLAR_LPAREN;
	v->a[31285] = anon_sym_BQUOTE;
	v->a[31286] = sym_word;
	v->a[31287] = anon_sym_SEMI;
	v->a[31288] = 3;
	v->a[31289] = actions(3);
	v->a[31290] = 1;
	v->a[31291] = sym_comment;
	v->a[31292] = actions(1205);
	v->a[31293] = 3;
	v->a[31294] = sym_file_descriptor;
	v->a[31295] = sym__concat;
	v->a[31296] = sym__bare_dollar;
	v->a[31297] = actions(1203);
	v->a[31298] = 31;
	v->a[31299] = anon_sym_LPAREN;
	small_parse_table_1565(v);
}

/* EOF small_parse_table_312.c */
