/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_592.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2960(t_small_parse_table_array *v)
{
	v->a[59200] = actions(700);
	v->a[59201] = 2;
	v->a[59202] = anon_sym_LT_LT;
	v->a[59203] = anon_sym_LT_LT_DASH;
	v->a[59204] = actions(914);
	v->a[59205] = 2;
	v->a[59206] = anon_sym_AMP_AMP;
	v->a[59207] = anon_sym_PIPE_PIPE;
	v->a[59208] = state(1134);
	v->a[59209] = 3;
	v->a[59210] = sym_file_redirect;
	v->a[59211] = sym_heredoc_redirect;
	v->a[59212] = aux_sym_redirected_statement_repeat1;
	v->a[59213] = actions(1942);
	v->a[59214] = 7;
	v->a[59215] = anon_sym_LT;
	v->a[59216] = anon_sym_GT;
	v->a[59217] = anon_sym_GT_GT;
	v->a[59218] = anon_sym_LT_AMP;
	v->a[59219] = anon_sym_GT_AMP;
	small_parse_table_2961(v);
}

void	small_parse_table_2961(t_small_parse_table_array *v)
{
	v->a[59220] = anon_sym_GT_PIPE;
	v->a[59221] = anon_sym_LT_GT;
	v->a[59222] = 11;
	v->a[59223] = actions(3);
	v->a[59224] = 1;
	v->a[59225] = sym_comment;
	v->a[59226] = actions(692);
	v->a[59227] = 1;
	v->a[59228] = anon_sym_PIPE;
	v->a[59229] = actions(724);
	v->a[59230] = 1;
	v->a[59231] = anon_sym_SEMI_SEMI;
	v->a[59232] = actions(1857);
	v->a[59233] = 1;
	v->a[59234] = aux_sym_heredoc_redirect_token1;
	v->a[59235] = actions(1946);
	v->a[59236] = 1;
	v->a[59237] = sym_file_descriptor;
	v->a[59238] = state(619);
	v->a[59239] = 1;
	small_parse_table_2962(v);
}

void	small_parse_table_2962(t_small_parse_table_array *v)
{
	v->a[59240] = sym_terminator;
	v->a[59241] = actions(696);
	v->a[59242] = 2;
	v->a[59243] = anon_sym_AMP;
	v->a[59244] = anon_sym_SEMI;
	v->a[59245] = actions(700);
	v->a[59246] = 2;
	v->a[59247] = anon_sym_LT_LT;
	v->a[59248] = anon_sym_LT_LT_DASH;
	v->a[59249] = actions(914);
	v->a[59250] = 2;
	v->a[59251] = anon_sym_AMP_AMP;
	v->a[59252] = anon_sym_PIPE_PIPE;
	v->a[59253] = state(1134);
	v->a[59254] = 3;
	v->a[59255] = sym_file_redirect;
	v->a[59256] = sym_heredoc_redirect;
	v->a[59257] = aux_sym_redirected_statement_repeat1;
	v->a[59258] = actions(1942);
	v->a[59259] = 7;
	small_parse_table_2963(v);
}

void	small_parse_table_2963(t_small_parse_table_array *v)
{
	v->a[59260] = anon_sym_LT;
	v->a[59261] = anon_sym_GT;
	v->a[59262] = anon_sym_GT_GT;
	v->a[59263] = anon_sym_LT_AMP;
	v->a[59264] = anon_sym_GT_AMP;
	v->a[59265] = anon_sym_GT_PIPE;
	v->a[59266] = anon_sym_LT_GT;
	v->a[59267] = 10;
	v->a[59268] = actions(3);
	v->a[59269] = 1;
	v->a[59270] = sym_comment;
	v->a[59271] = actions(862);
	v->a[59272] = 1;
	v->a[59273] = ts_builtin_sym_end;
	v->a[59274] = actions(1863);
	v->a[59275] = 1;
	v->a[59276] = aux_sym_heredoc_redirect_token1;
	v->a[59277] = actions(1865);
	v->a[59278] = 1;
	v->a[59279] = sym_file_descriptor;
	small_parse_table_2964(v);
}

void	small_parse_table_2964(t_small_parse_table_array *v)
{
	v->a[59280] = state(740);
	v->a[59281] = 1;
	v->a[59282] = sym_terminator;
	v->a[59283] = actions(700);
	v->a[59284] = 2;
	v->a[59285] = anon_sym_LT_LT;
	v->a[59286] = anon_sym_LT_LT_DASH;
	v->a[59287] = actions(719);
	v->a[59288] = 2;
	v->a[59289] = anon_sym_AMP_AMP;
	v->a[59290] = anon_sym_PIPE_PIPE;
	v->a[59291] = actions(717);
	v->a[59292] = 3;
	v->a[59293] = anon_sym_SEMI_SEMI;
	v->a[59294] = anon_sym_AMP;
	v->a[59295] = anon_sym_SEMI;
	v->a[59296] = state(1086);
	v->a[59297] = 3;
	v->a[59298] = sym_file_redirect;
	v->a[59299] = sym_heredoc_redirect;
	small_parse_table_2965(v);
}

/* EOF small_parse_table_592.c */
