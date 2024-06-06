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
	v->a[23200] = sym__concat;
	v->a[23201] = sym_test_operator;
	v->a[23202] = sym__bare_dollar;
	v->a[23203] = sym__brace_start;
	v->a[23204] = aux_sym_heredoc_redirect_token1;
	v->a[23205] = actions(3123);
	v->a[23206] = 36;
	v->a[23207] = anon_sym_esac;
	v->a[23208] = anon_sym_LPAREN;
	v->a[23209] = anon_sym_PIPE;
	v->a[23210] = anon_sym_SEMI_SEMI;
	v->a[23211] = anon_sym_SEMI_AMP;
	v->a[23212] = anon_sym_SEMI_SEMI_AMP;
	v->a[23213] = anon_sym_PIPE_AMP;
	v->a[23214] = anon_sym_AMP_AMP;
	v->a[23215] = anon_sym_PIPE_PIPE;
	v->a[23216] = anon_sym_LT;
	v->a[23217] = anon_sym_GT;
	v->a[23218] = anon_sym_GT_GT;
	v->a[23219] = anon_sym_AMP_GT;
	small_parse_table_1161(v);
}

void	small_parse_table_1161(t_small_parse_table_array *v)
{
	v->a[23220] = anon_sym_AMP_GT_GT;
	v->a[23221] = anon_sym_LT_AMP;
	v->a[23222] = anon_sym_GT_AMP;
	v->a[23223] = anon_sym_GT_PIPE;
	v->a[23224] = anon_sym_LT_AMP_DASH;
	v->a[23225] = anon_sym_GT_AMP_DASH;
	v->a[23226] = anon_sym_LT_LT;
	v->a[23227] = anon_sym_LT_LT_DASH;
	v->a[23228] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23229] = anon_sym_AMP;
	v->a[23230] = aux_sym_concatenation_token1;
	v->a[23231] = anon_sym_DOLLAR;
	v->a[23232] = sym__special_character;
	v->a[23233] = anon_sym_DQUOTE;
	v->a[23234] = sym_raw_string;
	v->a[23235] = aux_sym_number_token1;
	v->a[23236] = aux_sym_number_token2;
	v->a[23237] = anon_sym_DOLLAR_LBRACE;
	v->a[23238] = anon_sym_DOLLAR_LPAREN;
	v->a[23239] = anon_sym_BQUOTE;
	small_parse_table_1162(v);
}

void	small_parse_table_1162(t_small_parse_table_array *v)
{
	v->a[23240] = anon_sym_DOLLAR_BQUOTE;
	v->a[23241] = sym_word;
	v->a[23242] = anon_sym_SEMI;
	v->a[23243] = 12;
	v->a[23244] = actions(3);
	v->a[23245] = 1;
	v->a[23246] = sym_comment;
	v->a[23247] = actions(1995);
	v->a[23248] = 1;
	v->a[23249] = anon_sym_RPAREN;
	v->a[23250] = actions(2710);
	v->a[23251] = 1;
	v->a[23252] = aux_sym_heredoc_redirect_token1;
	v->a[23253] = actions(2962);
	v->a[23254] = 1;
	v->a[23255] = sym_variable_name;
	v->a[23256] = actions(2516);
	v->a[23257] = 2;
	v->a[23258] = anon_sym_PIPE;
	v->a[23259] = anon_sym_PIPE_AMP;
	small_parse_table_1163(v);
}

void	small_parse_table_1163(t_small_parse_table_array *v)
{
	v->a[23260] = actions(2945);
	v->a[23261] = 2;
	v->a[23262] = anon_sym_LT_LT;
	v->a[23263] = anon_sym_LT_LT_DASH;
	v->a[23264] = actions(2960);
	v->a[23265] = 2;
	v->a[23266] = anon_sym_AMP_AMP;
	v->a[23267] = anon_sym_PIPE_PIPE;
	v->a[23268] = state(2076);
	v->a[23269] = 2;
	v->a[23270] = sym_variable_assignment;
	v->a[23271] = aux_sym_variable_assignments_repeat1;
	v->a[23272] = actions(2526);
	v->a[23273] = 3;
	v->a[23274] = sym_file_descriptor;
	v->a[23275] = sym_test_operator;
	v->a[23276] = sym__brace_start;
	v->a[23277] = actions(2712);
	v->a[23278] = 3;
	v->a[23279] = anon_sym_SEMI_SEMI;
	small_parse_table_1164(v);
}

void	small_parse_table_1164(t_small_parse_table_array *v)
{
	v->a[23280] = anon_sym_AMP;
	v->a[23281] = anon_sym_SEMI;
	v->a[23282] = state(2109);
	v->a[23283] = 3;
	v->a[23284] = sym_file_redirect;
	v->a[23285] = sym_heredoc_redirect;
	v->a[23286] = aux_sym_redirected_statement_repeat1;
	v->a[23287] = actions(2512);
	v->a[23288] = 22;
	v->a[23289] = anon_sym_LT;
	v->a[23290] = anon_sym_GT;
	v->a[23291] = anon_sym_GT_GT;
	v->a[23292] = anon_sym_AMP_GT;
	v->a[23293] = anon_sym_AMP_GT_GT;
	v->a[23294] = anon_sym_LT_AMP;
	v->a[23295] = anon_sym_GT_AMP;
	v->a[23296] = anon_sym_GT_PIPE;
	v->a[23297] = anon_sym_LT_AMP_DASH;
	v->a[23298] = anon_sym_GT_AMP_DASH;
	v->a[23299] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1165(v);
}

/* EOF small_parse_table_232.c */
