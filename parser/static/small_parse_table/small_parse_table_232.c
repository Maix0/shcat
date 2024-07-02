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
	v->a[23200] = actions(467);
	v->a[23201] = 1;
	v->a[23202] = anon_sym_DQUOTE;
	v->a[23203] = actions(469);
	v->a[23204] = 1;
	v->a[23205] = anon_sym_DOLLAR_LBRACE;
	v->a[23206] = actions(471);
	v->a[23207] = 1;
	v->a[23208] = anon_sym_DOLLAR_LPAREN;
	v->a[23209] = actions(473);
	v->a[23210] = 1;
	v->a[23211] = anon_sym_BQUOTE;
	v->a[23212] = actions(475);
	v->a[23213] = 1;
	v->a[23214] = sym__bare_dollar;
	v->a[23215] = actions(503);
	v->a[23216] = 1;
	v->a[23217] = sym_file_descriptor;
	v->a[23218] = state(246);
	v->a[23219] = 1;
	small_parse_table_1161(v);
}

void	small_parse_table_1161(t_small_parse_table_array *v)
{
	v->a[23220] = aux_sym_command_repeat2;
	v->a[23221] = state(662);
	v->a[23222] = 1;
	v->a[23223] = sym_concatenation;
	v->a[23224] = actions(493);
	v->a[23225] = 3;
	v->a[23226] = sym_raw_string;
	v->a[23227] = sym_number;
	v->a[23228] = sym_word;
	v->a[23229] = state(490);
	v->a[23230] = 5;
	v->a[23231] = sym_arithmetic_expansion;
	v->a[23232] = sym_string;
	v->a[23233] = sym_simple_expansion;
	v->a[23234] = sym_expansion;
	v->a[23235] = sym_command_substitution;
	v->a[23236] = actions(501);
	v->a[23237] = 16;
	v->a[23238] = anon_sym_PIPE;
	v->a[23239] = anon_sym_SEMI_SEMI;
	small_parse_table_1162(v);
}

void	small_parse_table_1162(t_small_parse_table_array *v)
{
	v->a[23240] = anon_sym_AMP_AMP;
	v->a[23241] = anon_sym_PIPE_PIPE;
	v->a[23242] = anon_sym_LT;
	v->a[23243] = anon_sym_GT;
	v->a[23244] = anon_sym_GT_GT;
	v->a[23245] = anon_sym_LT_AMP;
	v->a[23246] = anon_sym_GT_AMP;
	v->a[23247] = anon_sym_GT_PIPE;
	v->a[23248] = anon_sym_LT_GT;
	v->a[23249] = anon_sym_LT_LT;
	v->a[23250] = anon_sym_LT_LT_DASH;
	v->a[23251] = aux_sym_heredoc_redirect_token1;
	v->a[23252] = anon_sym_AMP;
	v->a[23253] = anon_sym_SEMI;
	v->a[23254] = 12;
	v->a[23255] = actions(3);
	v->a[23256] = 1;
	v->a[23257] = sym_comment;
	v->a[23258] = actions(511);
	v->a[23259] = 1;
	small_parse_table_1163(v);
}

void	small_parse_table_1163(t_small_parse_table_array *v)
{
	v->a[23260] = sym_file_descriptor;
	v->a[23261] = actions(850);
	v->a[23262] = 1;
	v->a[23263] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23264] = actions(852);
	v->a[23265] = 1;
	v->a[23266] = anon_sym_DOLLAR;
	v->a[23267] = actions(854);
	v->a[23268] = 1;
	v->a[23269] = anon_sym_DQUOTE;
	v->a[23270] = actions(856);
	v->a[23271] = 1;
	v->a[23272] = anon_sym_DOLLAR_LBRACE;
	v->a[23273] = actions(858);
	v->a[23274] = 1;
	v->a[23275] = anon_sym_DOLLAR_LPAREN;
	v->a[23276] = actions(860);
	v->a[23277] = 1;
	v->a[23278] = anon_sym_BQUOTE;
	v->a[23279] = state(253);
	small_parse_table_1164(v);
}

void	small_parse_table_1164(t_small_parse_table_array *v)
{
	v->a[23280] = 2;
	v->a[23281] = sym_concatenation;
	v->a[23282] = aux_sym_for_statement_repeat1;
	v->a[23283] = actions(848);
	v->a[23284] = 3;
	v->a[23285] = sym_raw_string;
	v->a[23286] = sym_number;
	v->a[23287] = sym_word;
	v->a[23288] = state(475);
	v->a[23289] = 5;
	v->a[23290] = sym_arithmetic_expansion;
	v->a[23291] = sym_string;
	v->a[23292] = sym_simple_expansion;
	v->a[23293] = sym_expansion;
	v->a[23294] = sym_command_substitution;
	v->a[23295] = actions(509);
	v->a[23296] = 17;
	v->a[23297] = anon_sym_esac;
	v->a[23298] = anon_sym_PIPE;
	v->a[23299] = anon_sym_SEMI_SEMI;
	small_parse_table_1165(v);
}

/* EOF small_parse_table_232.c */
