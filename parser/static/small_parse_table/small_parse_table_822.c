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
	v->a[82200] = anon_sym_LT;
	v->a[82201] = anon_sym_GT;
	v->a[82202] = anon_sym_AMP_GT;
	v->a[82203] = anon_sym_LT_AMP;
	v->a[82204] = anon_sym_GT_AMP;
	v->a[82205] = anon_sym_LT_LT;
	v->a[82206] = actions(2334);
	v->a[82207] = 9;
	v->a[82208] = sym_file_descriptor;
	v->a[82209] = anon_sym_AMP_AMP;
	v->a[82210] = anon_sym_PIPE_PIPE;
	v->a[82211] = anon_sym_GT_GT;
	v->a[82212] = anon_sym_AMP_GT_GT;
	v->a[82213] = anon_sym_GT_PIPE;
	v->a[82214] = anon_sym_LT_AMP_DASH;
	v->a[82215] = anon_sym_GT_AMP_DASH;
	v->a[82216] = anon_sym_LT_LT_DASH;
	v->a[82217] = 5;
	v->a[82218] = actions(3);
	v->a[82219] = 1;
	small_parse_table_4111(v);
}

void	small_parse_table_4111(t_small_parse_table_array *v)
{
	v->a[82220] = sym_comment;
	v->a[82221] = actions(3131);
	v->a[82222] = 1;
	v->a[82223] = aux_sym_concatenation_token1;
	v->a[82224] = actions(3134);
	v->a[82225] = 1;
	v->a[82226] = sym__concat;
	v->a[82227] = state(1580);
	v->a[82228] = 1;
	v->a[82229] = aux_sym_concatenation_repeat1;
	v->a[82230] = actions(983);
	v->a[82231] = 13;
	v->a[82232] = anon_sym_SEMI_SEMI;
	v->a[82233] = aux_sym_heredoc_redirect_token1;
	v->a[82234] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82235] = anon_sym_AMP;
	v->a[82236] = anon_sym_DOLLAR;
	v->a[82237] = anon_sym_DQUOTE;
	v->a[82238] = sym_raw_string;
	v->a[82239] = sym_number;
	small_parse_table_4112(v);
}

void	small_parse_table_4112(t_small_parse_table_array *v)
{
	v->a[82240] = anon_sym_DOLLAR_LBRACE;
	v->a[82241] = anon_sym_DOLLAR_LPAREN;
	v->a[82242] = anon_sym_BQUOTE;
	v->a[82243] = sym_word;
	v->a[82244] = anon_sym_SEMI;
	v->a[82245] = 10;
	v->a[82246] = actions(3);
	v->a[82247] = 1;
	v->a[82248] = sym_comment;
	v->a[82249] = actions(2911);
	v->a[82250] = 1;
	v->a[82251] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82252] = actions(2913);
	v->a[82253] = 1;
	v->a[82254] = anon_sym_DOLLAR;
	v->a[82255] = actions(2915);
	v->a[82256] = 1;
	v->a[82257] = anon_sym_DQUOTE;
	v->a[82258] = actions(2917);
	v->a[82259] = 1;
	small_parse_table_4113(v);
}

void	small_parse_table_4113(t_small_parse_table_array *v)
{
	v->a[82260] = anon_sym_DOLLAR_LBRACE;
	v->a[82261] = actions(2919);
	v->a[82262] = 1;
	v->a[82263] = anon_sym_DOLLAR_LPAREN;
	v->a[82264] = actions(2921);
	v->a[82265] = 1;
	v->a[82266] = anon_sym_BQUOTE;
	v->a[82267] = state(193);
	v->a[82268] = 2;
	v->a[82269] = sym_concatenation;
	v->a[82270] = aux_sym_for_statement_repeat1;
	v->a[82271] = actions(3137);
	v->a[82272] = 3;
	v->a[82273] = sym_raw_string;
	v->a[82274] = sym_number;
	v->a[82275] = sym_word;
	v->a[82276] = state(377);
	v->a[82277] = 5;
	v->a[82278] = sym_arithmetic_expansion;
	v->a[82279] = sym_string;
	small_parse_table_4114(v);
}

void	small_parse_table_4114(t_small_parse_table_array *v)
{
	v->a[82280] = sym_simple_expansion;
	v->a[82281] = sym_expansion;
	v->a[82282] = sym_command_substitution;
	v->a[82283] = 3;
	v->a[82284] = actions(3);
	v->a[82285] = 1;
	v->a[82286] = sym_comment;
	v->a[82287] = actions(1195);
	v->a[82288] = 3;
	v->a[82289] = sym_file_descriptor;
	v->a[82290] = sym__concat;
	v->a[82291] = aux_sym_heredoc_redirect_token1;
	v->a[82292] = actions(1193);
	v->a[82293] = 13;
	v->a[82294] = anon_sym_AMP_AMP;
	v->a[82295] = anon_sym_PIPE_PIPE;
	v->a[82296] = anon_sym_LT;
	v->a[82297] = anon_sym_GT;
	v->a[82298] = anon_sym_GT_GT;
	v->a[82299] = anon_sym_AMP_GT;
	small_parse_table_4115(v);
}

/* EOF small_parse_table_822.c */
