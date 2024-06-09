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
	v->a[23200] = sym_expansion;
	v->a[23201] = sym_command_substitution;
	v->a[23202] = actions(572);
	v->a[23203] = 19;
	v->a[23204] = anon_sym_PIPE;
	v->a[23205] = anon_sym_SEMI_SEMI;
	v->a[23206] = anon_sym_AMP_AMP;
	v->a[23207] = anon_sym_PIPE_PIPE;
	v->a[23208] = anon_sym_LT;
	v->a[23209] = anon_sym_GT;
	v->a[23210] = anon_sym_GT_GT;
	v->a[23211] = anon_sym_AMP_GT;
	v->a[23212] = anon_sym_AMP_GT_GT;
	v->a[23213] = anon_sym_LT_AMP;
	v->a[23214] = anon_sym_GT_AMP;
	v->a[23215] = anon_sym_GT_PIPE;
	v->a[23216] = anon_sym_LT_AMP_DASH;
	v->a[23217] = anon_sym_GT_AMP_DASH;
	v->a[23218] = anon_sym_LT_LT;
	v->a[23219] = anon_sym_LT_LT_DASH;
	small_parse_table_1161(v);
}

void	small_parse_table_1161(t_small_parse_table_array *v)
{
	v->a[23220] = aux_sym_heredoc_redirect_token1;
	v->a[23221] = anon_sym_AMP;
	v->a[23222] = anon_sym_SEMI;
	v->a[23223] = 16;
	v->a[23224] = actions(3);
	v->a[23225] = 1;
	v->a[23226] = sym_comment;
	v->a[23227] = actions(457);
	v->a[23228] = 1;
	v->a[23229] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23230] = actions(459);
	v->a[23231] = 1;
	v->a[23232] = anon_sym_DOLLAR;
	v->a[23233] = actions(461);
	v->a[23234] = 1;
	v->a[23235] = anon_sym_DQUOTE;
	v->a[23236] = actions(463);
	v->a[23237] = 1;
	v->a[23238] = aux_sym_number_token1;
	v->a[23239] = actions(465);
	small_parse_table_1162(v);
}

void	small_parse_table_1162(t_small_parse_table_array *v)
{
	v->a[23240] = 1;
	v->a[23241] = aux_sym_number_token2;
	v->a[23242] = actions(467);
	v->a[23243] = 1;
	v->a[23244] = anon_sym_DOLLAR_LBRACE;
	v->a[23245] = actions(469);
	v->a[23246] = 1;
	v->a[23247] = anon_sym_DOLLAR_LPAREN;
	v->a[23248] = actions(471);
	v->a[23249] = 1;
	v->a[23250] = anon_sym_BQUOTE;
	v->a[23251] = actions(475);
	v->a[23252] = 1;
	v->a[23253] = sym__bare_dollar;
	v->a[23254] = actions(563);
	v->a[23255] = 1;
	v->a[23256] = sym_file_descriptor;
	v->a[23257] = state(206);
	v->a[23258] = 1;
	v->a[23259] = aux_sym_command_repeat2;
	small_parse_table_1163(v);
}

void	small_parse_table_1163(t_small_parse_table_array *v)
{
	v->a[23260] = state(717);
	v->a[23261] = 1;
	v->a[23262] = sym_concatenation;
	v->a[23263] = actions(453);
	v->a[23264] = 2;
	v->a[23265] = sym_raw_string;
	v->a[23266] = sym_word;
	v->a[23267] = state(358);
	v->a[23268] = 6;
	v->a[23269] = sym_arithmetic_expansion;
	v->a[23270] = sym_string;
	v->a[23271] = sym_number;
	v->a[23272] = sym_simple_expansion;
	v->a[23273] = sym_expansion;
	v->a[23274] = sym_command_substitution;
	v->a[23275] = actions(561);
	v->a[23276] = 20;
	v->a[23277] = anon_sym_esac;
	v->a[23278] = anon_sym_PIPE;
	v->a[23279] = anon_sym_SEMI_SEMI;
	small_parse_table_1164(v);
}

void	small_parse_table_1164(t_small_parse_table_array *v)
{
	v->a[23280] = anon_sym_AMP_AMP;
	v->a[23281] = anon_sym_PIPE_PIPE;
	v->a[23282] = anon_sym_LT;
	v->a[23283] = anon_sym_GT;
	v->a[23284] = anon_sym_GT_GT;
	v->a[23285] = anon_sym_AMP_GT;
	v->a[23286] = anon_sym_AMP_GT_GT;
	v->a[23287] = anon_sym_LT_AMP;
	v->a[23288] = anon_sym_GT_AMP;
	v->a[23289] = anon_sym_GT_PIPE;
	v->a[23290] = anon_sym_LT_AMP_DASH;
	v->a[23291] = anon_sym_GT_AMP_DASH;
	v->a[23292] = anon_sym_LT_LT;
	v->a[23293] = anon_sym_LT_LT_DASH;
	v->a[23294] = aux_sym_heredoc_redirect_token1;
	v->a[23295] = anon_sym_AMP;
	v->a[23296] = anon_sym_SEMI;
	v->a[23297] = 14;
	v->a[23298] = actions(3);
	v->a[23299] = 1;
	small_parse_table_1165(v);
}

/* EOF small_parse_table_232.c */
