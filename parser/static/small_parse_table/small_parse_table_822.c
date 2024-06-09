/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_822.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4110(t_small_parse_table_array *v)
{
	v->a[82200] = sym_comment;
	v->a[82201] = actions(2587);
	v->a[82202] = 7;
	v->a[82203] = anon_sym_PIPE;
	v->a[82204] = anon_sym_LT;
	v->a[82205] = anon_sym_GT;
	v->a[82206] = anon_sym_AMP_GT;
	v->a[82207] = anon_sym_LT_AMP;
	v->a[82208] = anon_sym_GT_AMP;
	v->a[82209] = anon_sym_LT_LT;
	v->a[82210] = actions(2585);
	v->a[82211] = 9;
	v->a[82212] = sym_file_descriptor;
	v->a[82213] = anon_sym_AMP_AMP;
	v->a[82214] = anon_sym_PIPE_PIPE;
	v->a[82215] = anon_sym_GT_GT;
	v->a[82216] = anon_sym_AMP_GT_GT;
	v->a[82217] = anon_sym_GT_PIPE;
	v->a[82218] = anon_sym_LT_AMP_DASH;
	v->a[82219] = anon_sym_GT_AMP_DASH;
	small_parse_table_4111(v);
}

void	small_parse_table_4111(t_small_parse_table_array *v)
{
	v->a[82220] = anon_sym_LT_LT_DASH;
	v->a[82221] = 3;
	v->a[82222] = actions(3);
	v->a[82223] = 1;
	v->a[82224] = sym_comment;
	v->a[82225] = actions(1188);
	v->a[82226] = 1;
	v->a[82227] = sym__concat;
	v->a[82228] = actions(1186);
	v->a[82229] = 15;
	v->a[82230] = anon_sym_SEMI_SEMI;
	v->a[82231] = aux_sym_heredoc_redirect_token1;
	v->a[82232] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82233] = anon_sym_AMP;
	v->a[82234] = aux_sym_concatenation_token1;
	v->a[82235] = anon_sym_DOLLAR;
	v->a[82236] = anon_sym_DQUOTE;
	v->a[82237] = sym_raw_string;
	v->a[82238] = aux_sym_number_token1;
	v->a[82239] = aux_sym_number_token2;
	small_parse_table_4112(v);
}

void	small_parse_table_4112(t_small_parse_table_array *v)
{
	v->a[82240] = anon_sym_DOLLAR_LBRACE;
	v->a[82241] = anon_sym_DOLLAR_LPAREN;
	v->a[82242] = anon_sym_BQUOTE;
	v->a[82243] = sym_word;
	v->a[82244] = anon_sym_SEMI;
	v->a[82245] = 3;
	v->a[82246] = actions(3);
	v->a[82247] = 1;
	v->a[82248] = sym_comment;
	v->a[82249] = actions(1251);
	v->a[82250] = 3;
	v->a[82251] = sym_file_descriptor;
	v->a[82252] = sym__concat;
	v->a[82253] = aux_sym_heredoc_redirect_token1;
	v->a[82254] = actions(1253);
	v->a[82255] = 13;
	v->a[82256] = anon_sym_AMP_AMP;
	v->a[82257] = anon_sym_PIPE_PIPE;
	v->a[82258] = anon_sym_LT;
	v->a[82259] = anon_sym_GT;
	small_parse_table_4113(v);
}

void	small_parse_table_4113(t_small_parse_table_array *v)
{
	v->a[82260] = anon_sym_GT_GT;
	v->a[82261] = anon_sym_AMP_GT;
	v->a[82262] = anon_sym_AMP_GT_GT;
	v->a[82263] = anon_sym_LT_AMP;
	v->a[82264] = anon_sym_GT_AMP;
	v->a[82265] = anon_sym_GT_PIPE;
	v->a[82266] = anon_sym_LT_AMP_DASH;
	v->a[82267] = anon_sym_GT_AMP_DASH;
	v->a[82268] = aux_sym_concatenation_token1;
	v->a[82269] = 3;
	v->a[82270] = actions(1404);
	v->a[82271] = 1;
	v->a[82272] = sym_comment;
	v->a[82273] = actions(1840);
	v->a[82274] = 7;
	v->a[82275] = anon_sym_PIPE;
	v->a[82276] = anon_sym_LT;
	v->a[82277] = anon_sym_GT;
	v->a[82278] = anon_sym_AMP_GT;
	v->a[82279] = anon_sym_LT_AMP;
	small_parse_table_4114(v);
}

void	small_parse_table_4114(t_small_parse_table_array *v)
{
	v->a[82280] = anon_sym_GT_AMP;
	v->a[82281] = anon_sym_LT_LT;
	v->a[82282] = actions(1842);
	v->a[82283] = 9;
	v->a[82284] = sym_file_descriptor;
	v->a[82285] = anon_sym_AMP_AMP;
	v->a[82286] = anon_sym_PIPE_PIPE;
	v->a[82287] = anon_sym_GT_GT;
	v->a[82288] = anon_sym_AMP_GT_GT;
	v->a[82289] = anon_sym_GT_PIPE;
	v->a[82290] = anon_sym_LT_AMP_DASH;
	v->a[82291] = anon_sym_GT_AMP_DASH;
	v->a[82292] = anon_sym_LT_LT_DASH;
	v->a[82293] = 3;
	v->a[82294] = actions(1404);
	v->a[82295] = 1;
	v->a[82296] = sym_comment;
	v->a[82297] = actions(1840);
	v->a[82298] = 7;
	v->a[82299] = anon_sym_PIPE;
	small_parse_table_4115(v);
}

/* EOF small_parse_table_822.c */
