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
	v->a[77200] = 8;
	v->a[77201] = sym_file_descriptor;
	v->a[77202] = anon_sym_AMP_AMP;
	v->a[77203] = anon_sym_PIPE_PIPE;
	v->a[77204] = anon_sym_GT_GT;
	v->a[77205] = anon_sym_GT_PIPE;
	v->a[77206] = anon_sym_LT_AMP_DASH;
	v->a[77207] = anon_sym_GT_AMP_DASH;
	v->a[77208] = anon_sym_LT_LT_DASH;
	v->a[77209] = 12;
	v->a[77210] = actions(3);
	v->a[77211] = 1;
	v->a[77212] = sym_comment;
	v->a[77213] = actions(2663);
	v->a[77214] = 1;
	v->a[77215] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77216] = actions(2667);
	v->a[77217] = 1;
	v->a[77218] = anon_sym_DQUOTE;
	v->a[77219] = actions(2669);
	small_parse_table_3861(v);
}

void	small_parse_table_3861(t_small_parse_table_array *v)
{
	v->a[77220] = 1;
	v->a[77221] = anon_sym_DOLLAR_LBRACE;
	v->a[77222] = actions(2671);
	v->a[77223] = 1;
	v->a[77224] = anon_sym_DOLLAR_LPAREN;
	v->a[77225] = actions(2673);
	v->a[77226] = 1;
	v->a[77227] = anon_sym_BQUOTE;
	v->a[77228] = actions(2830);
	v->a[77229] = 1;
	v->a[77230] = anon_sym_DOLLAR;
	v->a[77231] = actions(2832);
	v->a[77232] = 1;
	v->a[77233] = sym__comment_word;
	v->a[77234] = actions(2834);
	v->a[77235] = 1;
	v->a[77236] = sym__empty_value;
	v->a[77237] = state(1183);
	v->a[77238] = 1;
	v->a[77239] = sym_concatenation;
	small_parse_table_3862(v);
}

void	small_parse_table_3862(t_small_parse_table_array *v)
{
	v->a[77240] = actions(2956);
	v->a[77241] = 3;
	v->a[77242] = sym_raw_string;
	v->a[77243] = sym_number;
	v->a[77244] = sym_word;
	v->a[77245] = state(1008);
	v->a[77246] = 5;
	v->a[77247] = sym_arithmetic_expansion;
	v->a[77248] = sym_string;
	v->a[77249] = sym_simple_expansion;
	v->a[77250] = sym_expansion;
	v->a[77251] = sym_command_substitution;
	v->a[77252] = 10;
	v->a[77253] = actions(3);
	v->a[77254] = 1;
	v->a[77255] = sym_comment;
	v->a[77256] = actions(2627);
	v->a[77257] = 1;
	v->a[77258] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77259] = actions(2631);
	small_parse_table_3863(v);
}

void	small_parse_table_3863(t_small_parse_table_array *v)
{
	v->a[77260] = 1;
	v->a[77261] = anon_sym_DQUOTE;
	v->a[77262] = actions(2633);
	v->a[77263] = 1;
	v->a[77264] = anon_sym_DOLLAR_LBRACE;
	v->a[77265] = actions(2635);
	v->a[77266] = 1;
	v->a[77267] = anon_sym_DOLLAR_LPAREN;
	v->a[77268] = actions(2637);
	v->a[77269] = 1;
	v->a[77270] = anon_sym_BQUOTE;
	v->a[77271] = actions(2639);
	v->a[77272] = 1;
	v->a[77273] = sym__bare_dollar;
	v->a[77274] = actions(2958);
	v->a[77275] = 1;
	v->a[77276] = anon_sym_DOLLAR;
	v->a[77277] = actions(2625);
	v->a[77278] = 5;
	v->a[77279] = aux_sym_concatenation_token1;
	small_parse_table_3864(v);
}

void	small_parse_table_3864(t_small_parse_table_array *v)
{
	v->a[77280] = sym_raw_string;
	v->a[77281] = sym_number;
	v->a[77282] = sym__comment_word;
	v->a[77283] = sym_word;
	v->a[77284] = state(1123);
	v->a[77285] = 5;
	v->a[77286] = sym_arithmetic_expansion;
	v->a[77287] = sym_string;
	v->a[77288] = sym_simple_expansion;
	v->a[77289] = sym_expansion;
	v->a[77290] = sym_command_substitution;
	v->a[77291] = 10;
	v->a[77292] = actions(3);
	v->a[77293] = 1;
	v->a[77294] = sym_comment;
	v->a[77295] = actions(1116);
	v->a[77296] = 1;
	v->a[77297] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77298] = actions(1118);
	v->a[77299] = 1;
	small_parse_table_3865(v);
}

/* EOF small_parse_table_772.c */
