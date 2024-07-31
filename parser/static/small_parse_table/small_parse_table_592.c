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
	v->a[59200] = anon_sym_LT;
	v->a[59201] = anon_sym_GT;
	v->a[59202] = anon_sym_LT_LT;
	v->a[59203] = actions(1700);
	v->a[59204] = 8;
	v->a[59205] = anon_sym_AMP_AMP;
	v->a[59206] = anon_sym_PIPE_PIPE;
	v->a[59207] = anon_sym_GT_GT;
	v->a[59208] = anon_sym_LT_AMP;
	v->a[59209] = anon_sym_GT_AMP;
	v->a[59210] = anon_sym_GT_PIPE;
	v->a[59211] = anon_sym_LT_GT;
	v->a[59212] = anon_sym_LT_LT_DASH;
	v->a[59213] = 3;
	v->a[59214] = actions(407);
	v->a[59215] = 1;
	v->a[59216] = sym_comment;
	v->a[59217] = actions(467);
	v->a[59218] = 4;
	v->a[59219] = anon_sym_PIPE;
	small_parse_table_2961(v);
}

void	small_parse_table_2961(t_small_parse_table_array *v)
{
	v->a[59220] = anon_sym_LT;
	v->a[59221] = anon_sym_GT;
	v->a[59222] = anon_sym_LT_LT;
	v->a[59223] = actions(469);
	v->a[59224] = 11;
	v->a[59225] = sym__concat;
	v->a[59226] = sym_variable_name;
	v->a[59227] = anon_sym_AMP_AMP;
	v->a[59228] = anon_sym_PIPE_PIPE;
	v->a[59229] = anon_sym_GT_GT;
	v->a[59230] = anon_sym_LT_AMP;
	v->a[59231] = anon_sym_GT_AMP;
	v->a[59232] = anon_sym_GT_PIPE;
	v->a[59233] = anon_sym_LT_GT;
	v->a[59234] = anon_sym_LT_LT_DASH;
	v->a[59235] = aux_sym_concatenation_token1;
	v->a[59236] = 5;
	v->a[59237] = actions(3);
	v->a[59238] = 1;
	v->a[59239] = sym_comment;
	small_parse_table_2962(v);
}

void	small_parse_table_2962(t_small_parse_table_array *v)
{
	v->a[59240] = actions(1577);
	v->a[59241] = 1;
	v->a[59242] = aux_sym_concatenation_token1;
	v->a[59243] = actions(1579);
	v->a[59244] = 1;
	v->a[59245] = sym__concat;
	v->a[59246] = state(1218);
	v->a[59247] = 1;
	v->a[59248] = aux_sym_concatenation_repeat1;
	v->a[59249] = actions(1071);
	v->a[59250] = 12;
	v->a[59251] = anon_sym_SEMI_SEMI;
	v->a[59252] = aux_sym_heredoc_redirect_token1;
	v->a[59253] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59254] = anon_sym_DOLLAR;
	v->a[59255] = anon_sym_DQUOTE;
	v->a[59256] = sym_raw_string;
	v->a[59257] = sym_number;
	v->a[59258] = anon_sym_DOLLAR_LBRACE;
	v->a[59259] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2963(v);
}

void	small_parse_table_2963(t_small_parse_table_array *v)
{
	v->a[59260] = anon_sym_BQUOTE;
	v->a[59261] = sym_word;
	v->a[59262] = anon_sym_SEMI;
	v->a[59263] = 8;
	v->a[59264] = actions(407);
	v->a[59265] = 1;
	v->a[59266] = sym_comment;
	v->a[59267] = actions(1678);
	v->a[59268] = 1;
	v->a[59269] = anon_sym_PIPE;
	v->a[59270] = actions(2366);
	v->a[59271] = 1;
	v->a[59272] = anon_sym_LT_LT;
	v->a[59273] = actions(2369);
	v->a[59274] = 1;
	v->a[59275] = anon_sym_LT_LT_DASH;
	v->a[59276] = actions(1686);
	v->a[59277] = 2;
	v->a[59278] = anon_sym_AMP_AMP;
	v->a[59279] = anon_sym_PIPE_PIPE;
	small_parse_table_2964(v);
}

void	small_parse_table_2964(t_small_parse_table_array *v)
{
	v->a[59280] = actions(2360);
	v->a[59281] = 2;
	v->a[59282] = anon_sym_LT;
	v->a[59283] = anon_sym_GT;
	v->a[59284] = state(1228);
	v->a[59285] = 3;
	v->a[59286] = sym_file_redirect;
	v->a[59287] = sym_heredoc_redirect;
	v->a[59288] = aux_sym_redirected_statement_repeat1;
	v->a[59289] = actions(2363);
	v->a[59290] = 5;
	v->a[59291] = anon_sym_GT_GT;
	v->a[59292] = anon_sym_LT_AMP;
	v->a[59293] = anon_sym_GT_AMP;
	v->a[59294] = anon_sym_GT_PIPE;
	v->a[59295] = anon_sym_LT_GT;
	v->a[59296] = 5;
	v->a[59297] = actions(407);
	v->a[59298] = 1;
	v->a[59299] = sym_comment;
	small_parse_table_2965(v);
}

/* EOF small_parse_table_592.c */
