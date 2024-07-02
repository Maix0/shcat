/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_552.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2760(t_small_parse_table_array *v)
{
	v->a[55200] = anon_sym_LT;
	v->a[55201] = anon_sym_GT;
	v->a[55202] = anon_sym_GT_GT;
	v->a[55203] = anon_sym_LT_AMP;
	v->a[55204] = anon_sym_GT_AMP;
	v->a[55205] = anon_sym_GT_PIPE;
	v->a[55206] = anon_sym_LT_GT;
	v->a[55207] = 11;
	v->a[55208] = actions(3);
	v->a[55209] = 1;
	v->a[55210] = sym_comment;
	v->a[55211] = actions(692);
	v->a[55212] = 1;
	v->a[55213] = anon_sym_PIPE;
	v->a[55214] = actions(862);
	v->a[55215] = 1;
	v->a[55216] = ts_builtin_sym_end;
	v->a[55217] = actions(1863);
	v->a[55218] = 1;
	v->a[55219] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2761(v);
}

void	small_parse_table_2761(t_small_parse_table_array *v)
{
	v->a[55220] = actions(1865);
	v->a[55221] = 1;
	v->a[55222] = sym_file_descriptor;
	v->a[55223] = state(773);
	v->a[55224] = 1;
	v->a[55225] = sym_terminator;
	v->a[55226] = actions(700);
	v->a[55227] = 2;
	v->a[55228] = anon_sym_LT_LT;
	v->a[55229] = anon_sym_LT_LT_DASH;
	v->a[55230] = actions(719);
	v->a[55231] = 2;
	v->a[55232] = anon_sym_AMP_AMP;
	v->a[55233] = anon_sym_PIPE_PIPE;
	v->a[55234] = actions(717);
	v->a[55235] = 3;
	v->a[55236] = anon_sym_SEMI_SEMI;
	v->a[55237] = anon_sym_AMP;
	v->a[55238] = anon_sym_SEMI;
	v->a[55239] = state(1086);
	small_parse_table_2762(v);
}

void	small_parse_table_2762(t_small_parse_table_array *v)
{
	v->a[55240] = 3;
	v->a[55241] = sym_file_redirect;
	v->a[55242] = sym_heredoc_redirect;
	v->a[55243] = aux_sym_redirected_statement_repeat1;
	v->a[55244] = actions(1861);
	v->a[55245] = 7;
	v->a[55246] = anon_sym_LT;
	v->a[55247] = anon_sym_GT;
	v->a[55248] = anon_sym_GT_GT;
	v->a[55249] = anon_sym_LT_AMP;
	v->a[55250] = anon_sym_GT_AMP;
	v->a[55251] = anon_sym_GT_PIPE;
	v->a[55252] = anon_sym_LT_GT;
	v->a[55253] = 11;
	v->a[55254] = actions(3);
	v->a[55255] = 1;
	v->a[55256] = sym_comment;
	v->a[55257] = actions(692);
	v->a[55258] = 1;
	v->a[55259] = anon_sym_PIPE;
	small_parse_table_2763(v);
}

void	small_parse_table_2763(t_small_parse_table_array *v)
{
	v->a[55260] = actions(862);
	v->a[55261] = 1;
	v->a[55262] = ts_builtin_sym_end;
	v->a[55263] = actions(1863);
	v->a[55264] = 1;
	v->a[55265] = aux_sym_heredoc_redirect_token1;
	v->a[55266] = actions(1865);
	v->a[55267] = 1;
	v->a[55268] = sym_file_descriptor;
	v->a[55269] = state(772);
	v->a[55270] = 1;
	v->a[55271] = sym_terminator;
	v->a[55272] = actions(700);
	v->a[55273] = 2;
	v->a[55274] = anon_sym_LT_LT;
	v->a[55275] = anon_sym_LT_LT_DASH;
	v->a[55276] = actions(719);
	v->a[55277] = 2;
	v->a[55278] = anon_sym_AMP_AMP;
	v->a[55279] = anon_sym_PIPE_PIPE;
	small_parse_table_2764(v);
}

void	small_parse_table_2764(t_small_parse_table_array *v)
{
	v->a[55280] = actions(717);
	v->a[55281] = 3;
	v->a[55282] = anon_sym_SEMI_SEMI;
	v->a[55283] = anon_sym_AMP;
	v->a[55284] = anon_sym_SEMI;
	v->a[55285] = state(1086);
	v->a[55286] = 3;
	v->a[55287] = sym_file_redirect;
	v->a[55288] = sym_heredoc_redirect;
	v->a[55289] = aux_sym_redirected_statement_repeat1;
	v->a[55290] = actions(1861);
	v->a[55291] = 7;
	v->a[55292] = anon_sym_LT;
	v->a[55293] = anon_sym_GT;
	v->a[55294] = anon_sym_GT_GT;
	v->a[55295] = anon_sym_LT_AMP;
	v->a[55296] = anon_sym_GT_AMP;
	v->a[55297] = anon_sym_GT_PIPE;
	v->a[55298] = anon_sym_LT_GT;
	v->a[55299] = 11;
	small_parse_table_2765(v);
}

/* EOF small_parse_table_552.c */
