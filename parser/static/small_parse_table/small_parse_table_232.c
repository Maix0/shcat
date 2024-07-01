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
	v->a[23200] = actions(775);
	v->a[23201] = 1;
	v->a[23202] = anon_sym_DOLLAR_LPAREN;
	v->a[23203] = actions(777);
	v->a[23204] = 1;
	v->a[23205] = anon_sym_BQUOTE;
	v->a[23206] = actions(575);
	v->a[23207] = 2;
	v->a[23208] = sym_file_descriptor;
	v->a[23209] = ts_builtin_sym_end;
	v->a[23210] = state(236);
	v->a[23211] = 2;
	v->a[23212] = sym_concatenation;
	v->a[23213] = aux_sym_for_statement_repeat1;
	v->a[23214] = actions(765);
	v->a[23215] = 3;
	v->a[23216] = sym_raw_string;
	v->a[23217] = sym_number;
	v->a[23218] = sym_word;
	v->a[23219] = state(552);
	small_parse_table_1161(v);
}

void	small_parse_table_1161(t_small_parse_table_array *v)
{
	v->a[23220] = 5;
	v->a[23221] = sym_arithmetic_expansion;
	v->a[23222] = sym_string;
	v->a[23223] = sym_simple_expansion;
	v->a[23224] = sym_expansion;
	v->a[23225] = sym_command_substitution;
	v->a[23226] = actions(573);
	v->a[23227] = 17;
	v->a[23228] = anon_sym_PIPE;
	v->a[23229] = anon_sym_SEMI_SEMI;
	v->a[23230] = anon_sym_AMP_AMP;
	v->a[23231] = anon_sym_PIPE_PIPE;
	v->a[23232] = anon_sym_LT;
	v->a[23233] = anon_sym_GT;
	v->a[23234] = anon_sym_GT_GT;
	v->a[23235] = anon_sym_LT_AMP;
	v->a[23236] = anon_sym_GT_AMP;
	v->a[23237] = anon_sym_GT_PIPE;
	v->a[23238] = anon_sym_LT_AMP_DASH;
	v->a[23239] = anon_sym_GT_AMP_DASH;
	small_parse_table_1162(v);
}

void	small_parse_table_1162(t_small_parse_table_array *v)
{
	v->a[23240] = anon_sym_LT_LT;
	v->a[23241] = anon_sym_LT_LT_DASH;
	v->a[23242] = aux_sym_heredoc_redirect_token1;
	v->a[23243] = anon_sym_AMP;
	v->a[23244] = anon_sym_SEMI;
	v->a[23245] = 12;
	v->a[23246] = actions(3);
	v->a[23247] = 1;
	v->a[23248] = sym_comment;
	v->a[23249] = actions(575);
	v->a[23250] = 1;
	v->a[23251] = sym_file_descriptor;
	v->a[23252] = actions(717);
	v->a[23253] = 1;
	v->a[23254] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23255] = actions(719);
	v->a[23256] = 1;
	v->a[23257] = anon_sym_DOLLAR;
	v->a[23258] = actions(721);
	v->a[23259] = 1;
	small_parse_table_1163(v);
}

void	small_parse_table_1163(t_small_parse_table_array *v)
{
	v->a[23260] = anon_sym_DQUOTE;
	v->a[23261] = actions(723);
	v->a[23262] = 1;
	v->a[23263] = anon_sym_DOLLAR_LBRACE;
	v->a[23264] = actions(725);
	v->a[23265] = 1;
	v->a[23266] = anon_sym_DOLLAR_LPAREN;
	v->a[23267] = actions(727);
	v->a[23268] = 1;
	v->a[23269] = anon_sym_BQUOTE;
	v->a[23270] = state(220);
	v->a[23271] = 2;
	v->a[23272] = sym_concatenation;
	v->a[23273] = aux_sym_for_statement_repeat1;
	v->a[23274] = actions(715);
	v->a[23275] = 3;
	v->a[23276] = sym_raw_string;
	v->a[23277] = sym_number;
	v->a[23278] = sym_word;
	v->a[23279] = state(577);
	small_parse_table_1164(v);
}

void	small_parse_table_1164(t_small_parse_table_array *v)
{
	v->a[23280] = 5;
	v->a[23281] = sym_arithmetic_expansion;
	v->a[23282] = sym_string;
	v->a[23283] = sym_simple_expansion;
	v->a[23284] = sym_expansion;
	v->a[23285] = sym_command_substitution;
	v->a[23286] = actions(573);
	v->a[23287] = 18;
	v->a[23288] = anon_sym_esac;
	v->a[23289] = anon_sym_PIPE;
	v->a[23290] = anon_sym_SEMI_SEMI;
	v->a[23291] = anon_sym_AMP_AMP;
	v->a[23292] = anon_sym_PIPE_PIPE;
	v->a[23293] = anon_sym_LT;
	v->a[23294] = anon_sym_GT;
	v->a[23295] = anon_sym_GT_GT;
	v->a[23296] = anon_sym_LT_AMP;
	v->a[23297] = anon_sym_GT_AMP;
	v->a[23298] = anon_sym_GT_PIPE;
	v->a[23299] = anon_sym_LT_AMP_DASH;
	small_parse_table_1165(v);
}

/* EOF small_parse_table_232.c */
