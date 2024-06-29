/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_232.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1160(t_small_parse_table_array *v)
{
	v->a[23200] = anon_sym_GT_GT;
	v->a[23201] = anon_sym_AMP_GT;
	v->a[23202] = anon_sym_AMP_GT_GT;
	v->a[23203] = anon_sym_LT_AMP;
	v->a[23204] = anon_sym_GT_AMP;
	v->a[23205] = anon_sym_GT_PIPE;
	v->a[23206] = anon_sym_LT_AMP_DASH;
	v->a[23207] = anon_sym_GT_AMP_DASH;
	v->a[23208] = anon_sym_LT_LT;
	v->a[23209] = anon_sym_LT_LT_DASH;
	v->a[23210] = aux_sym_heredoc_redirect_token1;
	v->a[23211] = anon_sym_AMP;
	v->a[23212] = anon_sym_SEMI;
	v->a[23213] = 14;
	v->a[23214] = actions(3);
	v->a[23215] = 1;
	v->a[23216] = sym_comment;
	v->a[23217] = actions(477);
	v->a[23218] = 1;
	v->a[23219] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1161(v);
}

void	small_parse_table_1161(t_small_parse_table_array *v)
{
	v->a[23220] = actions(479);
	v->a[23221] = 1;
	v->a[23222] = anon_sym_DOLLAR;
	v->a[23223] = actions(481);
	v->a[23224] = 1;
	v->a[23225] = anon_sym_DQUOTE;
	v->a[23226] = actions(483);
	v->a[23227] = 1;
	v->a[23228] = anon_sym_DOLLAR_LBRACE;
	v->a[23229] = actions(485);
	v->a[23230] = 1;
	v->a[23231] = anon_sym_DOLLAR_LPAREN;
	v->a[23232] = actions(487);
	v->a[23233] = 1;
	v->a[23234] = anon_sym_BQUOTE;
	v->a[23235] = actions(489);
	v->a[23236] = 1;
	v->a[23237] = sym__bare_dollar;
	v->a[23238] = actions(542);
	v->a[23239] = 1;
	small_parse_table_1162(v);
}

void	small_parse_table_1162(t_small_parse_table_array *v)
{
	v->a[23240] = sym_file_descriptor;
	v->a[23241] = state(218);
	v->a[23242] = 1;
	v->a[23243] = aux_sym_command_repeat2;
	v->a[23244] = state(712);
	v->a[23245] = 1;
	v->a[23246] = sym_concatenation;
	v->a[23247] = actions(511);
	v->a[23248] = 3;
	v->a[23249] = sym_raw_string;
	v->a[23250] = sym_number;
	v->a[23251] = sym_word;
	v->a[23252] = state(479);
	v->a[23253] = 5;
	v->a[23254] = sym_arithmetic_expansion;
	v->a[23255] = sym_string;
	v->a[23256] = sym_simple_expansion;
	v->a[23257] = sym_expansion;
	v->a[23258] = sym_command_substitution;
	v->a[23259] = actions(544);
	small_parse_table_1163(v);
}

void	small_parse_table_1163(t_small_parse_table_array *v)
{
	v->a[23260] = 19;
	v->a[23261] = anon_sym_PIPE;
	v->a[23262] = anon_sym_SEMI_SEMI;
	v->a[23263] = anon_sym_AMP_AMP;
	v->a[23264] = anon_sym_PIPE_PIPE;
	v->a[23265] = anon_sym_LT;
	v->a[23266] = anon_sym_GT;
	v->a[23267] = anon_sym_GT_GT;
	v->a[23268] = anon_sym_AMP_GT;
	v->a[23269] = anon_sym_AMP_GT_GT;
	v->a[23270] = anon_sym_LT_AMP;
	v->a[23271] = anon_sym_GT_AMP;
	v->a[23272] = anon_sym_GT_PIPE;
	v->a[23273] = anon_sym_LT_AMP_DASH;
	v->a[23274] = anon_sym_GT_AMP_DASH;
	v->a[23275] = anon_sym_LT_LT;
	v->a[23276] = anon_sym_LT_LT_DASH;
	v->a[23277] = aux_sym_heredoc_redirect_token1;
	v->a[23278] = anon_sym_AMP;
	v->a[23279] = anon_sym_SEMI;
	small_parse_table_1164(v);
}

void	small_parse_table_1164(t_small_parse_table_array *v)
{
	v->a[23280] = 12;
	v->a[23281] = actions(3);
	v->a[23282] = 1;
	v->a[23283] = sym_comment;
	v->a[23284] = actions(736);
	v->a[23285] = 1;
	v->a[23286] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23287] = actions(739);
	v->a[23288] = 1;
	v->a[23289] = anon_sym_DOLLAR;
	v->a[23290] = actions(742);
	v->a[23291] = 1;
	v->a[23292] = anon_sym_DQUOTE;
	v->a[23293] = actions(745);
	v->a[23294] = 1;
	v->a[23295] = anon_sym_DOLLAR_LBRACE;
	v->a[23296] = actions(748);
	v->a[23297] = 1;
	v->a[23298] = anon_sym_DOLLAR_LPAREN;
	v->a[23299] = actions(751);
	small_parse_table_1165(v);
}

/* EOF small_parse_table_232.c */
