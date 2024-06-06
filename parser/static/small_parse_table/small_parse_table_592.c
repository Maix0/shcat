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
	v->a[59200] = actions(3038);
	v->a[59201] = 31;
	v->a[59202] = anon_sym_PIPE;
	v->a[59203] = anon_sym_SEMI_SEMI;
	v->a[59204] = anon_sym_PIPE_AMP;
	v->a[59205] = anon_sym_AMP_AMP;
	v->a[59206] = anon_sym_PIPE_PIPE;
	v->a[59207] = anon_sym_LT;
	v->a[59208] = anon_sym_GT;
	v->a[59209] = anon_sym_GT_GT;
	v->a[59210] = anon_sym_AMP_GT;
	v->a[59211] = anon_sym_AMP_GT_GT;
	v->a[59212] = anon_sym_LT_AMP;
	v->a[59213] = anon_sym_GT_AMP;
	v->a[59214] = anon_sym_GT_PIPE;
	v->a[59215] = anon_sym_LT_AMP_DASH;
	v->a[59216] = anon_sym_GT_AMP_DASH;
	v->a[59217] = anon_sym_LT_LT;
	v->a[59218] = anon_sym_LT_LT_DASH;
	v->a[59219] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2961(v);
}

void	small_parse_table_2961(t_small_parse_table_array *v)
{
	v->a[59220] = anon_sym_AMP;
	v->a[59221] = anon_sym_DOLLAR;
	v->a[59222] = sym__special_character;
	v->a[59223] = anon_sym_DQUOTE;
	v->a[59224] = sym_raw_string;
	v->a[59225] = aux_sym_number_token1;
	v->a[59226] = aux_sym_number_token2;
	v->a[59227] = anon_sym_DOLLAR_LBRACE;
	v->a[59228] = anon_sym_DOLLAR_LPAREN;
	v->a[59229] = anon_sym_BQUOTE;
	v->a[59230] = anon_sym_DOLLAR_BQUOTE;
	v->a[59231] = sym_word;
	v->a[59232] = anon_sym_SEMI;
	v->a[59233] = 8;
	v->a[59234] = actions(3);
	v->a[59235] = 1;
	v->a[59236] = sym_comment;
	v->a[59237] = actions(3632);
	v->a[59238] = 1;
	v->a[59239] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2962(v);
}

void	small_parse_table_2962(t_small_parse_table_array *v)
{
	v->a[59240] = actions(3634);
	v->a[59241] = 1;
	v->a[59242] = sym_file_descriptor;
	v->a[59243] = actions(3927);
	v->a[59244] = 1;
	v->a[59245] = anon_sym_RPAREN;
	v->a[59246] = actions(3637);
	v->a[59247] = 3;
	v->a[59248] = sym_variable_name;
	v->a[59249] = sym_test_operator;
	v->a[59250] = sym__brace_start;
	v->a[59251] = actions(3627);
	v->a[59252] = 9;
	v->a[59253] = anon_sym_PIPE;
	v->a[59254] = anon_sym_SEMI_SEMI;
	v->a[59255] = anon_sym_PIPE_AMP;
	v->a[59256] = anon_sym_AMP_AMP;
	v->a[59257] = anon_sym_PIPE_PIPE;
	v->a[59258] = anon_sym_LT_LT;
	v->a[59259] = anon_sym_LT_LT_DASH;
	small_parse_table_2963(v);
}

void	small_parse_table_2963(t_small_parse_table_array *v)
{
	v->a[59260] = anon_sym_AMP;
	v->a[59261] = anon_sym_SEMI;
	v->a[59262] = actions(3629);
	v->a[59263] = 10;
	v->a[59264] = anon_sym_LT;
	v->a[59265] = anon_sym_GT;
	v->a[59266] = anon_sym_GT_GT;
	v->a[59267] = anon_sym_AMP_GT;
	v->a[59268] = anon_sym_AMP_GT_GT;
	v->a[59269] = anon_sym_LT_AMP;
	v->a[59270] = anon_sym_GT_AMP;
	v->a[59271] = anon_sym_GT_PIPE;
	v->a[59272] = anon_sym_LT_AMP_DASH;
	v->a[59273] = anon_sym_GT_AMP_DASH;
	v->a[59274] = actions(3625);
	v->a[59275] = 12;
	v->a[59276] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59277] = anon_sym_DOLLAR;
	v->a[59278] = sym__special_character;
	v->a[59279] = anon_sym_DQUOTE;
	small_parse_table_2964(v);
}

void	small_parse_table_2964(t_small_parse_table_array *v)
{
	v->a[59280] = sym_raw_string;
	v->a[59281] = aux_sym_number_token1;
	v->a[59282] = aux_sym_number_token2;
	v->a[59283] = anon_sym_DOLLAR_LBRACE;
	v->a[59284] = anon_sym_DOLLAR_LPAREN;
	v->a[59285] = anon_sym_BQUOTE;
	v->a[59286] = anon_sym_DOLLAR_BQUOTE;
	v->a[59287] = sym_word;
	v->a[59288] = 8;
	v->a[59289] = actions(3);
	v->a[59290] = 1;
	v->a[59291] = sym_comment;
	v->a[59292] = actions(3632);
	v->a[59293] = 1;
	v->a[59294] = aux_sym_heredoc_redirect_token1;
	v->a[59295] = actions(3634);
	v->a[59296] = 1;
	v->a[59297] = sym_file_descriptor;
	v->a[59298] = actions(3930);
	v->a[59299] = 1;
	small_parse_table_2965(v);
}

/* EOF small_parse_table_592.c */
