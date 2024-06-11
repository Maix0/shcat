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
	v->a[23200] = aux_sym_command_repeat2;
	v->a[23201] = state(729);
	v->a[23202] = 1;
	v->a[23203] = sym_concatenation;
	v->a[23204] = actions(511);
	v->a[23205] = 3;
	v->a[23206] = sym_raw_string;
	v->a[23207] = sym_number;
	v->a[23208] = sym_word;
	v->a[23209] = state(519);
	v->a[23210] = 5;
	v->a[23211] = sym_arithmetic_expansion;
	v->a[23212] = sym_string;
	v->a[23213] = sym_simple_expansion;
	v->a[23214] = sym_expansion;
	v->a[23215] = sym_command_substitution;
	v->a[23216] = actions(557);
	v->a[23217] = 20;
	v->a[23218] = anon_sym_PIPE;
	v->a[23219] = anon_sym_SEMI_SEMI;
	small_parse_table_1161(v);
}

void	small_parse_table_1161(t_small_parse_table_array *v)
{
	v->a[23220] = anon_sym_AMP_AMP;
	v->a[23221] = anon_sym_PIPE_PIPE;
	v->a[23222] = anon_sym_LT;
	v->a[23223] = anon_sym_GT;
	v->a[23224] = anon_sym_GT_GT;
	v->a[23225] = anon_sym_AMP_GT;
	v->a[23226] = anon_sym_AMP_GT_GT;
	v->a[23227] = anon_sym_LT_AMP;
	v->a[23228] = anon_sym_GT_AMP;
	v->a[23229] = anon_sym_GT_PIPE;
	v->a[23230] = anon_sym_LT_AMP_DASH;
	v->a[23231] = anon_sym_GT_AMP_DASH;
	v->a[23232] = anon_sym_LT_LT;
	v->a[23233] = anon_sym_LT_LT_DASH;
	v->a[23234] = aux_sym_heredoc_redirect_token1;
	v->a[23235] = anon_sym_AMP;
	v->a[23236] = anon_sym_BQUOTE;
	v->a[23237] = anon_sym_SEMI;
	v->a[23238] = 6;
	v->a[23239] = actions(3);
	small_parse_table_1162(v);
}

void	small_parse_table_1162(t_small_parse_table_array *v)
{
	v->a[23240] = 1;
	v->a[23241] = sym_comment;
	v->a[23242] = actions(379);
	v->a[23243] = 1;
	v->a[23244] = sym_file_descriptor;
	v->a[23245] = actions(435);
	v->a[23246] = 1;
	v->a[23247] = sym_variable_name;
	v->a[23248] = actions(433);
	v->a[23249] = 2;
	v->a[23250] = aux_sym__simple_variable_name_token1;
	v->a[23251] = aux_sym__multiline_variable_name_token1;
	v->a[23252] = actions(431);
	v->a[23253] = 9;
	v->a[23254] = anon_sym_BANG;
	v->a[23255] = anon_sym_DASH;
	v->a[23256] = anon_sym_STAR;
	v->a[23257] = anon_sym_QMARK;
	v->a[23258] = anon_sym_DOLLAR;
	v->a[23259] = anon_sym_POUND;
	small_parse_table_1163(v);
}

void	small_parse_table_1163(t_small_parse_table_array *v)
{
	v->a[23260] = anon_sym_AT;
	v->a[23261] = anon_sym_0;
	v->a[23262] = anon_sym__;
	v->a[23263] = actions(381);
	v->a[23264] = 24;
	v->a[23265] = anon_sym_PIPE;
	v->a[23266] = anon_sym_AMP_AMP;
	v->a[23267] = anon_sym_PIPE_PIPE;
	v->a[23268] = anon_sym_LT;
	v->a[23269] = anon_sym_GT;
	v->a[23270] = anon_sym_GT_GT;
	v->a[23271] = anon_sym_AMP_GT;
	v->a[23272] = anon_sym_AMP_GT_GT;
	v->a[23273] = anon_sym_LT_AMP;
	v->a[23274] = anon_sym_GT_AMP;
	v->a[23275] = anon_sym_GT_PIPE;
	v->a[23276] = anon_sym_LT_AMP_DASH;
	v->a[23277] = anon_sym_GT_AMP_DASH;
	v->a[23278] = anon_sym_LT_LT;
	v->a[23279] = anon_sym_LT_LT_DASH;
	small_parse_table_1164(v);
}

void	small_parse_table_1164(t_small_parse_table_array *v)
{
	v->a[23280] = aux_sym_heredoc_redirect_token1;
	v->a[23281] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23282] = anon_sym_DQUOTE;
	v->a[23283] = sym_raw_string;
	v->a[23284] = sym_number;
	v->a[23285] = anon_sym_DOLLAR_LBRACE;
	v->a[23286] = anon_sym_DOLLAR_LPAREN;
	v->a[23287] = anon_sym_BQUOTE;
	v->a[23288] = sym_word;
	v->a[23289] = 5;
	v->a[23290] = actions(3);
	v->a[23291] = 1;
	v->a[23292] = sym_comment;
	v->a[23293] = state(728);
	v->a[23294] = 1;
	v->a[23295] = sym_concatenation;
	v->a[23296] = actions(717);
	v->a[23297] = 3;
	v->a[23298] = sym_file_descriptor;
	v->a[23299] = sym_variable_name;
	small_parse_table_1165(v);
}

/* EOF small_parse_table_232.c */
