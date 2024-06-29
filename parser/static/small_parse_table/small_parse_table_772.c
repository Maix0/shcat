/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_772.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3860(t_small_parse_table_array *v)
{
	v->a[77200] = actions(1074);
	v->a[77201] = 1;
	v->a[77202] = sym_comment;
	v->a[77203] = actions(2609);
	v->a[77204] = 1;
	v->a[77205] = anon_sym_LT_LT;
	v->a[77206] = actions(2611);
	v->a[77207] = 1;
	v->a[77208] = anon_sym_LT_LT_DASH;
	v->a[77209] = actions(2613);
	v->a[77210] = 1;
	v->a[77211] = sym_file_descriptor;
	v->a[77212] = actions(2607);
	v->a[77213] = 2;
	v->a[77214] = anon_sym_LT_AMP_DASH;
	v->a[77215] = anon_sym_GT_AMP_DASH;
	v->a[77216] = actions(2648);
	v->a[77217] = 2;
	v->a[77218] = anon_sym_AMP_AMP;
	v->a[77219] = anon_sym_PIPE_PIPE;
	small_parse_table_3861(v);
}

void	small_parse_table_3861(t_small_parse_table_array *v)
{
	v->a[77220] = actions(2605);
	v->a[77221] = 3;
	v->a[77222] = anon_sym_GT_GT;
	v->a[77223] = anon_sym_AMP_GT_GT;
	v->a[77224] = anon_sym_GT_PIPE;
	v->a[77225] = state(1433);
	v->a[77226] = 3;
	v->a[77227] = sym_file_redirect;
	v->a[77228] = sym_heredoc_redirect;
	v->a[77229] = aux_sym_redirected_statement_repeat1;
	v->a[77230] = actions(2603);
	v->a[77231] = 5;
	v->a[77232] = anon_sym_LT;
	v->a[77233] = anon_sym_GT;
	v->a[77234] = anon_sym_AMP_GT;
	v->a[77235] = anon_sym_LT_AMP;
	v->a[77236] = anon_sym_GT_AMP;
	v->a[77237] = 5;
	v->a[77238] = actions(3);
	v->a[77239] = 1;
	small_parse_table_3862(v);
}

void	small_parse_table_3862(t_small_parse_table_array *v)
{
	v->a[77240] = sym_comment;
	v->a[77241] = actions(2650);
	v->a[77242] = 1;
	v->a[77243] = anon_sym_PIPE;
	v->a[77244] = state(1449);
	v->a[77245] = 1;
	v->a[77246] = aux_sym_pipeline_repeat1;
	v->a[77247] = actions(2440);
	v->a[77248] = 2;
	v->a[77249] = sym_file_descriptor;
	v->a[77250] = aux_sym_heredoc_redirect_token1;
	v->a[77251] = actions(2444);
	v->a[77252] = 14;
	v->a[77253] = anon_sym_AMP_AMP;
	v->a[77254] = anon_sym_PIPE_PIPE;
	v->a[77255] = anon_sym_LT;
	v->a[77256] = anon_sym_GT;
	v->a[77257] = anon_sym_GT_GT;
	v->a[77258] = anon_sym_AMP_GT;
	v->a[77259] = anon_sym_AMP_GT_GT;
	small_parse_table_3863(v);
}

void	small_parse_table_3863(t_small_parse_table_array *v)
{
	v->a[77260] = anon_sym_LT_AMP;
	v->a[77261] = anon_sym_GT_AMP;
	v->a[77262] = anon_sym_GT_PIPE;
	v->a[77263] = anon_sym_LT_AMP_DASH;
	v->a[77264] = anon_sym_GT_AMP_DASH;
	v->a[77265] = anon_sym_LT_LT;
	v->a[77266] = anon_sym_LT_LT_DASH;
	v->a[77267] = 9;
	v->a[77268] = actions(804);
	v->a[77269] = 1;
	v->a[77270] = anon_sym_LT_LT;
	v->a[77271] = actions(1074);
	v->a[77272] = 1;
	v->a[77273] = sym_comment;
	v->a[77274] = actions(2496);
	v->a[77275] = 1;
	v->a[77276] = sym_file_descriptor;
	v->a[77277] = actions(2632);
	v->a[77278] = 1;
	v->a[77279] = anon_sym_LT_LT_DASH;
	small_parse_table_3864(v);
}

void	small_parse_table_3864(t_small_parse_table_array *v)
{
	v->a[77280] = actions(2652);
	v->a[77281] = 2;
	v->a[77282] = anon_sym_AMP_AMP;
	v->a[77283] = anon_sym_PIPE_PIPE;
	v->a[77284] = actions(2656);
	v->a[77285] = 2;
	v->a[77286] = anon_sym_LT_AMP_DASH;
	v->a[77287] = anon_sym_GT_AMP_DASH;
	v->a[77288] = actions(2654);
	v->a[77289] = 3;
	v->a[77290] = anon_sym_GT_GT;
	v->a[77291] = anon_sym_AMP_GT_GT;
	v->a[77292] = anon_sym_GT_PIPE;
	v->a[77293] = state(1397);
	v->a[77294] = 3;
	v->a[77295] = sym_file_redirect;
	v->a[77296] = sym_heredoc_redirect;
	v->a[77297] = aux_sym_redirected_statement_repeat1;
	v->a[77298] = actions(2490);
	v->a[77299] = 5;
	small_parse_table_3865(v);
}

/* EOF small_parse_table_772.c */
