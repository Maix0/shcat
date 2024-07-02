/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_572.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2860(t_small_parse_table_array *v)
{
	v->a[57200] = sym_heredoc_redirect;
	v->a[57201] = aux_sym_redirected_statement_repeat1;
	v->a[57202] = actions(997);
	v->a[57203] = 16;
	v->a[57204] = anon_sym_PIPE;
	v->a[57205] = anon_sym_SEMI_SEMI;
	v->a[57206] = anon_sym_AMP_AMP;
	v->a[57207] = anon_sym_PIPE_PIPE;
	v->a[57208] = anon_sym_LT;
	v->a[57209] = anon_sym_GT;
	v->a[57210] = anon_sym_GT_GT;
	v->a[57211] = anon_sym_LT_AMP;
	v->a[57212] = anon_sym_GT_AMP;
	v->a[57213] = anon_sym_GT_PIPE;
	v->a[57214] = anon_sym_LT_GT;
	v->a[57215] = anon_sym_LT_LT;
	v->a[57216] = anon_sym_LT_LT_DASH;
	v->a[57217] = anon_sym_AMP;
	v->a[57218] = anon_sym_BQUOTE;
	v->a[57219] = anon_sym_SEMI;
	small_parse_table_2861(v);
}

void	small_parse_table_2861(t_small_parse_table_array *v)
{
	v->a[57220] = 6;
	v->a[57221] = actions(3);
	v->a[57222] = 1;
	v->a[57223] = sym_comment;
	v->a[57224] = actions(1925);
	v->a[57225] = 1;
	v->a[57226] = aux_sym_concatenation_token1;
	v->a[57227] = actions(1927);
	v->a[57228] = 1;
	v->a[57229] = sym__concat;
	v->a[57230] = state(1083);
	v->a[57231] = 1;
	v->a[57232] = aux_sym_concatenation_repeat1;
	v->a[57233] = actions(1158);
	v->a[57234] = 2;
	v->a[57235] = sym_file_descriptor;
	v->a[57236] = sym_variable_name;
	v->a[57237] = actions(1154);
	v->a[57238] = 16;
	v->a[57239] = anon_sym_LT;
	small_parse_table_2862(v);
}

void	small_parse_table_2862(t_small_parse_table_array *v)
{
	v->a[57240] = anon_sym_GT;
	v->a[57241] = anon_sym_GT_GT;
	v->a[57242] = anon_sym_LT_AMP;
	v->a[57243] = anon_sym_GT_AMP;
	v->a[57244] = anon_sym_GT_PIPE;
	v->a[57245] = anon_sym_LT_GT;
	v->a[57246] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57247] = anon_sym_DOLLAR;
	v->a[57248] = anon_sym_DQUOTE;
	v->a[57249] = sym_raw_string;
	v->a[57250] = sym_number;
	v->a[57251] = anon_sym_DOLLAR_LBRACE;
	v->a[57252] = anon_sym_DOLLAR_LPAREN;
	v->a[57253] = anon_sym_BQUOTE;
	v->a[57254] = sym_word;
	v->a[57255] = 7;
	v->a[57256] = actions(3);
	v->a[57257] = 1;
	v->a[57258] = sym_comment;
	v->a[57259] = actions(1937);
	small_parse_table_2863(v);
}

void	small_parse_table_2863(t_small_parse_table_array *v)
{
	v->a[57260] = 1;
	v->a[57261] = aux_sym_heredoc_redirect_token1;
	v->a[57262] = actions(1939);
	v->a[57263] = 1;
	v->a[57264] = sym_file_descriptor;
	v->a[57265] = actions(1934);
	v->a[57266] = 2;
	v->a[57267] = anon_sym_LT_LT;
	v->a[57268] = anon_sym_LT_LT_DASH;
	v->a[57269] = state(1012);
	v->a[57270] = 3;
	v->a[57271] = sym_file_redirect;
	v->a[57272] = sym_heredoc_redirect;
	v->a[57273] = aux_sym_redirected_statement_repeat1;
	v->a[57274] = actions(1929);
	v->a[57275] = 7;
	v->a[57276] = anon_sym_PIPE;
	v->a[57277] = anon_sym_SEMI_SEMI;
	v->a[57278] = anon_sym_AMP_AMP;
	v->a[57279] = anon_sym_PIPE_PIPE;
	small_parse_table_2864(v);
}

void	small_parse_table_2864(t_small_parse_table_array *v)
{
	v->a[57280] = anon_sym_AMP;
	v->a[57281] = anon_sym_BQUOTE;
	v->a[57282] = anon_sym_SEMI;
	v->a[57283] = actions(1931);
	v->a[57284] = 7;
	v->a[57285] = anon_sym_LT;
	v->a[57286] = anon_sym_GT;
	v->a[57287] = anon_sym_GT_GT;
	v->a[57288] = anon_sym_LT_AMP;
	v->a[57289] = anon_sym_GT_AMP;
	v->a[57290] = anon_sym_GT_PIPE;
	v->a[57291] = anon_sym_LT_GT;
	v->a[57292] = 10;
	v->a[57293] = actions(3);
	v->a[57294] = 1;
	v->a[57295] = sym_comment;
	v->a[57296] = actions(692);
	v->a[57297] = 1;
	v->a[57298] = anon_sym_PIPE;
	v->a[57299] = actions(1944);
	small_parse_table_2865(v);
}

/* EOF small_parse_table_572.c */
