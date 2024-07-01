/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_642.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3210(t_small_parse_table_array *v)
{
	v->a[64200] = anon_sym_LT;
	v->a[64201] = anon_sym_GT;
	v->a[64202] = anon_sym_GT_GT;
	v->a[64203] = anon_sym_LT_AMP;
	v->a[64204] = anon_sym_GT_AMP;
	v->a[64205] = anon_sym_GT_PIPE;
	v->a[64206] = anon_sym_LT_AMP_DASH;
	v->a[64207] = anon_sym_GT_AMP_DASH;
	v->a[64208] = anon_sym_LT_LT;
	v->a[64209] = anon_sym_LT_LT_DASH;
	v->a[64210] = anon_sym_AMP;
	v->a[64211] = anon_sym_SEMI;
	v->a[64212] = 6;
	v->a[64213] = actions(3);
	v->a[64214] = 1;
	v->a[64215] = sym_comment;
	v->a[64216] = actions(2021);
	v->a[64217] = 1;
	v->a[64218] = aux_sym_concatenation_token1;
	v->a[64219] = actions(2023);
	small_parse_table_3211(v);
}

void	small_parse_table_3211(t_small_parse_table_array *v)
{
	v->a[64220] = 1;
	v->a[64221] = sym__concat;
	v->a[64222] = state(1180);
	v->a[64223] = 1;
	v->a[64224] = aux_sym_concatenation_repeat1;
	v->a[64225] = actions(1238);
	v->a[64226] = 3;
	v->a[64227] = sym_file_descriptor;
	v->a[64228] = sym_variable_name;
	v->a[64229] = aux_sym_heredoc_redirect_token1;
	v->a[64230] = actions(1234);
	v->a[64231] = 16;
	v->a[64232] = anon_sym_PIPE;
	v->a[64233] = anon_sym_SEMI_SEMI;
	v->a[64234] = anon_sym_AMP_AMP;
	v->a[64235] = anon_sym_PIPE_PIPE;
	v->a[64236] = anon_sym_LT;
	v->a[64237] = anon_sym_GT;
	v->a[64238] = anon_sym_GT_GT;
	v->a[64239] = anon_sym_LT_AMP;
	small_parse_table_3212(v);
}

void	small_parse_table_3212(t_small_parse_table_array *v)
{
	v->a[64240] = anon_sym_GT_AMP;
	v->a[64241] = anon_sym_GT_PIPE;
	v->a[64242] = anon_sym_LT_AMP_DASH;
	v->a[64243] = anon_sym_GT_AMP_DASH;
	v->a[64244] = anon_sym_LT_LT;
	v->a[64245] = anon_sym_LT_LT_DASH;
	v->a[64246] = anon_sym_AMP;
	v->a[64247] = anon_sym_SEMI;
	v->a[64248] = 8;
	v->a[64249] = actions(3);
	v->a[64250] = 1;
	v->a[64251] = sym_comment;
	v->a[64252] = actions(2136);
	v->a[64253] = 1;
	v->a[64254] = sym_file_descriptor;
	v->a[64255] = actions(2139);
	v->a[64256] = 1;
	v->a[64257] = sym_variable_name;
	v->a[64258] = state(1385);
	v->a[64259] = 1;
	small_parse_table_3213(v);
}

void	small_parse_table_3213(t_small_parse_table_array *v)
{
	v->a[64260] = sym_file_redirect;
	v->a[64261] = actions(2133);
	v->a[64262] = 2;
	v->a[64263] = anon_sym_LT_AMP_DASH;
	v->a[64264] = anon_sym_GT_AMP_DASH;
	v->a[64265] = state(1132);
	v->a[64266] = 2;
	v->a[64267] = sym_variable_assignment;
	v->a[64268] = aux_sym_command_repeat1;
	v->a[64269] = actions(2130);
	v->a[64270] = 6;
	v->a[64271] = anon_sym_LT;
	v->a[64272] = anon_sym_GT;
	v->a[64273] = anon_sym_GT_GT;
	v->a[64274] = anon_sym_LT_AMP;
	v->a[64275] = anon_sym_GT_AMP;
	v->a[64276] = anon_sym_GT_PIPE;
	v->a[64277] = actions(2128);
	v->a[64278] = 9;
	v->a[64279] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3214(v);
}

void	small_parse_table_3214(t_small_parse_table_array *v)
{
	v->a[64280] = anon_sym_DOLLAR;
	v->a[64281] = anon_sym_DQUOTE;
	v->a[64282] = sym_raw_string;
	v->a[64283] = sym_number;
	v->a[64284] = anon_sym_DOLLAR_LBRACE;
	v->a[64285] = anon_sym_DOLLAR_LPAREN;
	v->a[64286] = anon_sym_BQUOTE;
	v->a[64287] = sym_word;
	v->a[64288] = 11;
	v->a[64289] = actions(3);
	v->a[64290] = 1;
	v->a[64291] = sym_comment;
	v->a[64292] = actions(2017);
	v->a[64293] = 1;
	v->a[64294] = aux_sym_heredoc_redirect_token1;
	v->a[64295] = actions(2019);
	v->a[64296] = 1;
	v->a[64297] = sym_file_descriptor;
	v->a[64298] = state(730);
	v->a[64299] = 1;
	small_parse_table_3215(v);
}

/* EOF small_parse_table_642.c */
