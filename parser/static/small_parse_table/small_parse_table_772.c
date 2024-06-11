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
	v->a[77200] = actions(861);
	v->a[77201] = 2;
	v->a[77202] = anon_sym_LT_LT;
	v->a[77203] = anon_sym_LT_LT_DASH;
	v->a[77204] = actions(965);
	v->a[77205] = 2;
	v->a[77206] = anon_sym_AMP_AMP;
	v->a[77207] = anon_sym_PIPE_PIPE;
	v->a[77208] = actions(2598);
	v->a[77209] = 2;
	v->a[77210] = anon_sym_LT_AMP_DASH;
	v->a[77211] = anon_sym_GT_AMP_DASH;
	v->a[77212] = actions(1053);
	v->a[77213] = 3;
	v->a[77214] = anon_sym_SEMI_SEMI;
	v->a[77215] = anon_sym_AMP;
	v->a[77216] = anon_sym_SEMI;
	v->a[77217] = state(1322);
	v->a[77218] = 3;
	v->a[77219] = sym_file_redirect;
	small_parse_table_3861(v);
}

void	small_parse_table_3861(t_small_parse_table_array *v)
{
	v->a[77220] = sym_heredoc_redirect;
	v->a[77221] = aux_sym_redirected_statement_repeat1;
	v->a[77222] = actions(2596);
	v->a[77223] = 8;
	v->a[77224] = anon_sym_LT;
	v->a[77225] = anon_sym_GT;
	v->a[77226] = anon_sym_GT_GT;
	v->a[77227] = anon_sym_AMP_GT;
	v->a[77228] = anon_sym_AMP_GT_GT;
	v->a[77229] = anon_sym_LT_AMP;
	v->a[77230] = anon_sym_GT_AMP;
	v->a[77231] = anon_sym_GT_PIPE;
	v->a[77232] = 3;
	v->a[77233] = actions(3);
	v->a[77234] = 1;
	v->a[77235] = sym_comment;
	v->a[77236] = actions(1076);
	v->a[77237] = 3;
	v->a[77238] = sym_file_descriptor;
	v->a[77239] = sym__concat;
	small_parse_table_3862(v);
}

void	small_parse_table_3862(t_small_parse_table_array *v)
{
	v->a[77240] = sym_variable_name;
	v->a[77241] = actions(1074);
	v->a[77242] = 20;
	v->a[77243] = anon_sym_LT;
	v->a[77244] = anon_sym_GT;
	v->a[77245] = anon_sym_GT_GT;
	v->a[77246] = anon_sym_AMP_GT;
	v->a[77247] = anon_sym_AMP_GT_GT;
	v->a[77248] = anon_sym_LT_AMP;
	v->a[77249] = anon_sym_GT_AMP;
	v->a[77250] = anon_sym_GT_PIPE;
	v->a[77251] = anon_sym_LT_AMP_DASH;
	v->a[77252] = anon_sym_GT_AMP_DASH;
	v->a[77253] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77254] = aux_sym_concatenation_token1;
	v->a[77255] = anon_sym_DOLLAR;
	v->a[77256] = anon_sym_DQUOTE;
	v->a[77257] = sym_raw_string;
	v->a[77258] = sym_number;
	v->a[77259] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3863(v);
}

void	small_parse_table_3863(t_small_parse_table_array *v)
{
	v->a[77260] = anon_sym_DOLLAR_LPAREN;
	v->a[77261] = anon_sym_BQUOTE;
	v->a[77262] = sym_word;
	v->a[77263] = 3;
	v->a[77264] = actions(3);
	v->a[77265] = 1;
	v->a[77266] = sym_comment;
	v->a[77267] = actions(1145);
	v->a[77268] = 3;
	v->a[77269] = sym_file_descriptor;
	v->a[77270] = sym__concat;
	v->a[77271] = sym_variable_name;
	v->a[77272] = actions(1143);
	v->a[77273] = 20;
	v->a[77274] = anon_sym_LT;
	v->a[77275] = anon_sym_GT;
	v->a[77276] = anon_sym_GT_GT;
	v->a[77277] = anon_sym_AMP_GT;
	v->a[77278] = anon_sym_AMP_GT_GT;
	v->a[77279] = anon_sym_LT_AMP;
	small_parse_table_3864(v);
}

void	small_parse_table_3864(t_small_parse_table_array *v)
{
	v->a[77280] = anon_sym_GT_AMP;
	v->a[77281] = anon_sym_GT_PIPE;
	v->a[77282] = anon_sym_LT_AMP_DASH;
	v->a[77283] = anon_sym_GT_AMP_DASH;
	v->a[77284] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77285] = aux_sym_concatenation_token1;
	v->a[77286] = anon_sym_DOLLAR;
	v->a[77287] = anon_sym_DQUOTE;
	v->a[77288] = sym_raw_string;
	v->a[77289] = sym_number;
	v->a[77290] = anon_sym_DOLLAR_LBRACE;
	v->a[77291] = anon_sym_DOLLAR_LPAREN;
	v->a[77292] = anon_sym_BQUOTE;
	v->a[77293] = sym_word;
	v->a[77294] = 5;
	v->a[77295] = actions(3);
	v->a[77296] = 1;
	v->a[77297] = sym_comment;
	v->a[77298] = actions(811);
	v->a[77299] = 1;
	small_parse_table_3865(v);
}

/* EOF small_parse_table_772.c */
