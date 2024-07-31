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
	v->a[23201] = anon_sym_LT_AMP;
	v->a[23202] = anon_sym_GT_AMP;
	v->a[23203] = anon_sym_GT_PIPE;
	v->a[23204] = anon_sym_LT_GT;
	v->a[23205] = anon_sym_LT_LT;
	v->a[23206] = anon_sym_LT_LT_DASH;
	v->a[23207] = aux_sym_heredoc_redirect_token1;
	v->a[23208] = anon_sym_SEMI;
	v->a[23209] = 12;
	v->a[23210] = actions(3);
	v->a[23211] = 1;
	v->a[23212] = sym_comment;
	v->a[23213] = actions(53);
	v->a[23214] = 1;
	v->a[23215] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23216] = actions(55);
	v->a[23217] = 1;
	v->a[23218] = anon_sym_DOLLAR;
	v->a[23219] = actions(57);
	small_parse_table_1161(v);
}

void	small_parse_table_1161(t_small_parse_table_array *v)
{
	v->a[23220] = 1;
	v->a[23221] = anon_sym_DQUOTE;
	v->a[23222] = actions(61);
	v->a[23223] = 1;
	v->a[23224] = anon_sym_DOLLAR_LBRACE;
	v->a[23225] = actions(63);
	v->a[23226] = 1;
	v->a[23227] = anon_sym_DOLLAR_LPAREN;
	v->a[23228] = actions(535);
	v->a[23229] = 1;
	v->a[23230] = sym__bare_dollar;
	v->a[23231] = state(274);
	v->a[23232] = 1;
	v->a[23233] = aux_sym_command_repeat2;
	v->a[23234] = state(614);
	v->a[23235] = 1;
	v->a[23236] = sym_concatenation;
	v->a[23237] = actions(778);
	v->a[23238] = 3;
	v->a[23239] = sym_raw_string;
	small_parse_table_1162(v);
}

void	small_parse_table_1162(t_small_parse_table_array *v)
{
	v->a[23240] = sym_number;
	v->a[23241] = sym_word;
	v->a[23242] = state(449);
	v->a[23243] = 5;
	v->a[23244] = sym_arithmetic_expansion;
	v->a[23245] = sym_string;
	v->a[23246] = sym_simple_expansion;
	v->a[23247] = sym_expansion;
	v->a[23248] = sym_command_substitution;
	v->a[23249] = actions(497);
	v->a[23250] = 16;
	v->a[23251] = anon_sym_PIPE;
	v->a[23252] = anon_sym_SEMI_SEMI;
	v->a[23253] = anon_sym_AMP_AMP;
	v->a[23254] = anon_sym_PIPE_PIPE;
	v->a[23255] = anon_sym_LT;
	v->a[23256] = anon_sym_GT;
	v->a[23257] = anon_sym_GT_GT;
	v->a[23258] = anon_sym_LT_AMP;
	v->a[23259] = anon_sym_GT_AMP;
	small_parse_table_1163(v);
}

void	small_parse_table_1163(t_small_parse_table_array *v)
{
	v->a[23260] = anon_sym_GT_PIPE;
	v->a[23261] = anon_sym_LT_GT;
	v->a[23262] = anon_sym_LT_LT;
	v->a[23263] = anon_sym_LT_LT_DASH;
	v->a[23264] = aux_sym_heredoc_redirect_token1;
	v->a[23265] = anon_sym_BQUOTE;
	v->a[23266] = anon_sym_SEMI;
	v->a[23267] = 11;
	v->a[23268] = actions(3);
	v->a[23269] = 1;
	v->a[23270] = sym_comment;
	v->a[23271] = actions(746);
	v->a[23272] = 1;
	v->a[23273] = anon_sym_PIPE;
	v->a[23274] = actions(842);
	v->a[23275] = 1;
	v->a[23276] = anon_sym_RPAREN;
	v->a[23277] = actions(862);
	v->a[23278] = 1;
	v->a[23279] = sym_variable_name;
	small_parse_table_1164(v);
}

void	small_parse_table_1164(t_small_parse_table_array *v)
{
	v->a[23280] = state(530);
	v->a[23281] = 1;
	v->a[23282] = sym_terminator;
	v->a[23283] = actions(850);
	v->a[23284] = 2;
	v->a[23285] = anon_sym_LT_LT;
	v->a[23286] = anon_sym_LT_LT_DASH;
	v->a[23287] = actions(860);
	v->a[23288] = 2;
	v->a[23289] = anon_sym_AMP_AMP;
	v->a[23290] = anon_sym_PIPE_PIPE;
	v->a[23291] = state(959);
	v->a[23292] = 2;
	v->a[23293] = sym_variable_assignment;
	v->a[23294] = aux_sym__variable_assignments_repeat1;
	v->a[23295] = actions(858);
	v->a[23296] = 3;
	v->a[23297] = anon_sym_SEMI_SEMI;
	v->a[23298] = aux_sym_heredoc_redirect_token1;
	v->a[23299] = anon_sym_SEMI;
	small_parse_table_1165(v);
}

/* EOF small_parse_table_232.c */
