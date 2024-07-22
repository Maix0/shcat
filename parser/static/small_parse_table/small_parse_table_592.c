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
	v->a[59200] = 1;
	v->a[59201] = anon_sym_SEMI;
	v->a[59202] = actions(1876);
	v->a[59203] = 1;
	v->a[59204] = aux_sym_heredoc_redirect_token1;
	v->a[59205] = actions(1878);
	v->a[59206] = 1;
	v->a[59207] = sym_file_descriptor;
	v->a[59208] = state(608);
	v->a[59209] = 1;
	v->a[59210] = sym_terminator;
	v->a[59211] = actions(784);
	v->a[59212] = 2;
	v->a[59213] = anon_sym_esac;
	v->a[59214] = anon_sym_SEMI_SEMI;
	v->a[59215] = actions(882);
	v->a[59216] = 2;
	v->a[59217] = anon_sym_AMP_AMP;
	v->a[59218] = anon_sym_PIPE_PIPE;
	v->a[59219] = actions(884);
	small_parse_table_2961(v);
}

void	small_parse_table_2961(t_small_parse_table_array *v)
{
	v->a[59220] = 2;
	v->a[59221] = anon_sym_LT_LT;
	v->a[59222] = anon_sym_LT_LT_DASH;
	v->a[59223] = state(1099);
	v->a[59224] = 3;
	v->a[59225] = sym_file_redirect;
	v->a[59226] = sym_heredoc_redirect;
	v->a[59227] = aux_sym_redirected_statement_repeat1;
	v->a[59228] = actions(1874);
	v->a[59229] = 7;
	v->a[59230] = anon_sym_LT;
	v->a[59231] = anon_sym_GT;
	v->a[59232] = anon_sym_GT_GT;
	v->a[59233] = anon_sym_LT_AMP;
	v->a[59234] = anon_sym_GT_AMP;
	v->a[59235] = anon_sym_GT_PIPE;
	v->a[59236] = anon_sym_LT_GT;
	v->a[59237] = 10;
	v->a[59238] = actions(3);
	v->a[59239] = 1;
	small_parse_table_2962(v);
}

void	small_parse_table_2962(t_small_parse_table_array *v)
{
	v->a[59240] = sym_comment;
	v->a[59241] = actions(782);
	v->a[59242] = 1;
	v->a[59243] = anon_sym_PIPE;
	v->a[59244] = actions(1945);
	v->a[59245] = 1;
	v->a[59246] = sym_file_descriptor;
	v->a[59247] = actions(2021);
	v->a[59248] = 1;
	v->a[59249] = aux_sym_heredoc_redirect_token1;
	v->a[59250] = state(549);
	v->a[59251] = 1;
	v->a[59252] = sym_terminator;
	v->a[59253] = actions(790);
	v->a[59254] = 2;
	v->a[59255] = anon_sym_LT_LT;
	v->a[59256] = anon_sym_LT_LT_DASH;
	v->a[59257] = actions(1028);
	v->a[59258] = 2;
	v->a[59259] = anon_sym_AMP_AMP;
	small_parse_table_2963(v);
}

void	small_parse_table_2963(t_small_parse_table_array *v)
{
	v->a[59260] = anon_sym_PIPE_PIPE;
	v->a[59261] = actions(1085);
	v->a[59262] = 2;
	v->a[59263] = anon_sym_SEMI_SEMI;
	v->a[59264] = anon_sym_SEMI;
	v->a[59265] = state(1194);
	v->a[59266] = 3;
	v->a[59267] = sym_file_redirect;
	v->a[59268] = sym_heredoc_redirect;
	v->a[59269] = aux_sym_redirected_statement_repeat1;
	v->a[59270] = actions(1941);
	v->a[59271] = 7;
	v->a[59272] = anon_sym_LT;
	v->a[59273] = anon_sym_GT;
	v->a[59274] = anon_sym_GT_GT;
	v->a[59275] = anon_sym_LT_AMP;
	v->a[59276] = anon_sym_GT_AMP;
	v->a[59277] = anon_sym_GT_PIPE;
	v->a[59278] = anon_sym_LT_GT;
	v->a[59279] = 10;
	small_parse_table_2964(v);
}

void	small_parse_table_2964(t_small_parse_table_array *v)
{
	v->a[59280] = actions(3);
	v->a[59281] = 1;
	v->a[59282] = sym_comment;
	v->a[59283] = actions(784);
	v->a[59284] = 1;
	v->a[59285] = anon_sym_BQUOTE;
	v->a[59286] = actions(1888);
	v->a[59287] = 1;
	v->a[59288] = aux_sym_heredoc_redirect_token1;
	v->a[59289] = actions(1890);
	v->a[59290] = 1;
	v->a[59291] = sym_file_descriptor;
	v->a[59292] = state(813);
	v->a[59293] = 1;
	v->a[59294] = sym_terminator;
	v->a[59295] = actions(786);
	v->a[59296] = 2;
	v->a[59297] = anon_sym_SEMI_SEMI;
	v->a[59298] = anon_sym_SEMI;
	v->a[59299] = actions(790);
	small_parse_table_2965(v);
}

/* EOF small_parse_table_592.c */
