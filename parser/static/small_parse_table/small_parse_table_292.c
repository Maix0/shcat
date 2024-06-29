/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_292.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1460(t_small_parse_table_array *v)
{
	v->a[29200] = state(351);
	v->a[29201] = 1;
	v->a[29202] = aux_sym_concatenation_repeat1;
	v->a[29203] = actions(548);
	v->a[29204] = 2;
	v->a[29205] = sym_file_descriptor;
	v->a[29206] = sym_variable_name;
	v->a[29207] = actions(546);
	v->a[29208] = 29;
	v->a[29209] = anon_sym_PIPE;
	v->a[29210] = anon_sym_RPAREN;
	v->a[29211] = anon_sym_SEMI_SEMI;
	v->a[29212] = anon_sym_AMP_AMP;
	v->a[29213] = anon_sym_PIPE_PIPE;
	v->a[29214] = anon_sym_LT;
	v->a[29215] = anon_sym_GT;
	v->a[29216] = anon_sym_GT_GT;
	v->a[29217] = anon_sym_AMP_GT;
	v->a[29218] = anon_sym_AMP_GT_GT;
	v->a[29219] = anon_sym_LT_AMP;
	small_parse_table_1461(v);
}

void	small_parse_table_1461(t_small_parse_table_array *v)
{
	v->a[29220] = anon_sym_GT_AMP;
	v->a[29221] = anon_sym_GT_PIPE;
	v->a[29222] = anon_sym_LT_AMP_DASH;
	v->a[29223] = anon_sym_GT_AMP_DASH;
	v->a[29224] = anon_sym_LT_LT;
	v->a[29225] = anon_sym_LT_LT_DASH;
	v->a[29226] = aux_sym_heredoc_redirect_token1;
	v->a[29227] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29228] = anon_sym_AMP;
	v->a[29229] = anon_sym_DOLLAR;
	v->a[29230] = anon_sym_DQUOTE;
	v->a[29231] = sym_raw_string;
	v->a[29232] = sym_number;
	v->a[29233] = anon_sym_DOLLAR_LBRACE;
	v->a[29234] = anon_sym_DOLLAR_LPAREN;
	v->a[29235] = anon_sym_BQUOTE;
	v->a[29236] = sym_word;
	v->a[29237] = anon_sym_SEMI;
	v->a[29238] = 3;
	v->a[29239] = actions(1074);
	small_parse_table_1462(v);
}

void	small_parse_table_1462(t_small_parse_table_array *v)
{
	v->a[29240] = 1;
	v->a[29241] = sym_comment;
	v->a[29242] = actions(1102);
	v->a[29243] = 13;
	v->a[29244] = anon_sym_PIPE;
	v->a[29245] = anon_sym_EQ;
	v->a[29246] = anon_sym_LT;
	v->a[29247] = anon_sym_GT;
	v->a[29248] = anon_sym_GT_GT;
	v->a[29249] = anon_sym_LT_LT;
	v->a[29250] = anon_sym_CARET;
	v->a[29251] = anon_sym_AMP;
	v->a[29252] = anon_sym_PLUS;
	v->a[29253] = anon_sym_DASH;
	v->a[29254] = anon_sym_STAR;
	v->a[29255] = anon_sym_SLASH;
	v->a[29256] = anon_sym_PERCENT;
	v->a[29257] = actions(1104);
	v->a[29258] = 21;
	v->a[29259] = anon_sym_AMP_AMP;
	small_parse_table_1463(v);
}

void	small_parse_table_1463(t_small_parse_table_array *v)
{
	v->a[29260] = anon_sym_PIPE_PIPE;
	v->a[29261] = anon_sym_RPAREN_RPAREN;
	v->a[29262] = anon_sym_PLUS_EQ;
	v->a[29263] = anon_sym_DASH_EQ;
	v->a[29264] = anon_sym_STAR_EQ;
	v->a[29265] = anon_sym_SLASH_EQ;
	v->a[29266] = anon_sym_PERCENT_EQ;
	v->a[29267] = anon_sym_LT_LT_EQ;
	v->a[29268] = anon_sym_GT_GT_EQ;
	v->a[29269] = anon_sym_AMP_EQ;
	v->a[29270] = anon_sym_CARET_EQ;
	v->a[29271] = anon_sym_PIPE_EQ;
	v->a[29272] = anon_sym_EQ_EQ;
	v->a[29273] = anon_sym_BANG_EQ;
	v->a[29274] = anon_sym_LT_EQ;
	v->a[29275] = anon_sym_GT_EQ;
	v->a[29276] = anon_sym_QMARK;
	v->a[29277] = anon_sym_COLON;
	v->a[29278] = anon_sym_PLUS_PLUS2;
	v->a[29279] = anon_sym_DASH_DASH2;
	small_parse_table_1464(v);
}

void	small_parse_table_1464(t_small_parse_table_array *v)
{
	v->a[29280] = 6;
	v->a[29281] = actions(3);
	v->a[29282] = 1;
	v->a[29283] = sym_comment;
	v->a[29284] = actions(1106);
	v->a[29285] = 1;
	v->a[29286] = aux_sym_concatenation_token1;
	v->a[29287] = actions(1109);
	v->a[29288] = 1;
	v->a[29289] = sym__concat;
	v->a[29290] = state(327);
	v->a[29291] = 1;
	v->a[29292] = aux_sym_concatenation_repeat1;
	v->a[29293] = actions(988);
	v->a[29294] = 3;
	v->a[29295] = sym_file_descriptor;
	v->a[29296] = sym__bare_dollar;
	v->a[29297] = ts_builtin_sym_end;
	v->a[29298] = actions(983);
	v->a[29299] = 28;
	small_parse_table_1465(v);
}

/* EOF small_parse_table_292.c */
