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
	v->a[23200] = sym_command_substitution;
	v->a[23201] = actions(676);
	v->a[23202] = 15;
	v->a[23203] = anon_sym_PIPE;
	v->a[23204] = anon_sym_SEMI_SEMI;
	v->a[23205] = anon_sym_AMP_AMP;
	v->a[23206] = anon_sym_PIPE_PIPE;
	v->a[23207] = anon_sym_LT;
	v->a[23208] = anon_sym_GT;
	v->a[23209] = anon_sym_GT_GT;
	v->a[23210] = anon_sym_LT_AMP;
	v->a[23211] = anon_sym_GT_AMP;
	v->a[23212] = anon_sym_GT_PIPE;
	v->a[23213] = anon_sym_LT_GT;
	v->a[23214] = anon_sym_LT_LT;
	v->a[23215] = anon_sym_LT_LT_DASH;
	v->a[23216] = aux_sym_heredoc_redirect_token1;
	v->a[23217] = anon_sym_SEMI;
	v->a[23218] = 12;
	v->a[23219] = actions(3);
	small_parse_table_1161(v);
}

void	small_parse_table_1161(t_small_parse_table_array *v)
{
	v->a[23220] = 1;
	v->a[23221] = sym_comment;
	v->a[23222] = actions(834);
	v->a[23223] = 1;
	v->a[23224] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23225] = actions(837);
	v->a[23226] = 1;
	v->a[23227] = anon_sym_DOLLAR;
	v->a[23228] = actions(840);
	v->a[23229] = 1;
	v->a[23230] = anon_sym_DQUOTE;
	v->a[23231] = actions(843);
	v->a[23232] = 1;
	v->a[23233] = anon_sym_DOLLAR_LBRACE;
	v->a[23234] = actions(846);
	v->a[23235] = 1;
	v->a[23236] = anon_sym_DOLLAR_LPAREN;
	v->a[23237] = actions(849);
	v->a[23238] = 1;
	v->a[23239] = anon_sym_BQUOTE;
	small_parse_table_1162(v);
}

void	small_parse_table_1162(t_small_parse_table_array *v)
{
	v->a[23240] = actions(648);
	v->a[23241] = 2;
	v->a[23242] = sym_file_descriptor;
	v->a[23243] = ts_builtin_sym_end;
	v->a[23244] = state(251);
	v->a[23245] = 2;
	v->a[23246] = sym_concatenation;
	v->a[23247] = aux_sym_for_statement_repeat1;
	v->a[23248] = actions(831);
	v->a[23249] = 3;
	v->a[23250] = sym_raw_string;
	v->a[23251] = sym_number;
	v->a[23252] = sym_word;
	v->a[23253] = state(533);
	v->a[23254] = 5;
	v->a[23255] = sym_arithmetic_expansion;
	v->a[23256] = sym_string;
	v->a[23257] = sym_simple_expansion;
	v->a[23258] = sym_expansion;
	v->a[23259] = sym_command_substitution;
	small_parse_table_1163(v);
}

void	small_parse_table_1163(t_small_parse_table_array *v)
{
	v->a[23260] = actions(628);
	v->a[23261] = 15;
	v->a[23262] = anon_sym_PIPE;
	v->a[23263] = anon_sym_SEMI_SEMI;
	v->a[23264] = anon_sym_AMP_AMP;
	v->a[23265] = anon_sym_PIPE_PIPE;
	v->a[23266] = anon_sym_LT;
	v->a[23267] = anon_sym_GT;
	v->a[23268] = anon_sym_GT_GT;
	v->a[23269] = anon_sym_LT_AMP;
	v->a[23270] = anon_sym_GT_AMP;
	v->a[23271] = anon_sym_GT_PIPE;
	v->a[23272] = anon_sym_LT_GT;
	v->a[23273] = anon_sym_LT_LT;
	v->a[23274] = anon_sym_LT_LT_DASH;
	v->a[23275] = aux_sym_heredoc_redirect_token1;
	v->a[23276] = anon_sym_SEMI;
	v->a[23277] = 6;
	v->a[23278] = actions(3);
	v->a[23279] = 1;
	small_parse_table_1164(v);
}

void	small_parse_table_1164(t_small_parse_table_array *v)
{
	v->a[23280] = sym_comment;
	v->a[23281] = actions(856);
	v->a[23282] = 1;
	v->a[23283] = sym_variable_name;
	v->a[23284] = actions(367);
	v->a[23285] = 2;
	v->a[23286] = sym_file_descriptor;
	v->a[23287] = sym__bare_dollar;
	v->a[23288] = actions(854);
	v->a[23289] = 2;
	v->a[23290] = aux_sym__simple_variable_name_token1;
	v->a[23291] = aux_sym__multiline_variable_name_token1;
	v->a[23292] = actions(852);
	v->a[23293] = 8;
	v->a[23294] = anon_sym_BANG;
	v->a[23295] = anon_sym_DASH;
	v->a[23296] = anon_sym_STAR;
	v->a[23297] = anon_sym_QMARK;
	v->a[23298] = anon_sym_DOLLAR;
	v->a[23299] = anon_sym_POUND;
	small_parse_table_1165(v);
}

/* EOF small_parse_table_232.c */
