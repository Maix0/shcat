/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_802.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4010(t_small_parse_table_array *v)
{
	v->a[80200] = 1;
	v->a[80201] = sym_comment;
	v->a[80202] = actions(4534);
	v->a[80203] = 1;
	v->a[80204] = aux_sym_concatenation_token1;
	v->a[80205] = actions(4544);
	v->a[80206] = 1;
	v->a[80207] = sym__concat;
	v->a[80208] = state(1686);
	v->a[80209] = 1;
	v->a[80210] = aux_sym_concatenation_repeat1;
	v->a[80211] = actions(2690);
	v->a[80212] = 4;
	v->a[80213] = sym_file_descriptor;
	v->a[80214] = sym_test_operator;
	v->a[80215] = sym__brace_start;
	v->a[80216] = aux_sym_heredoc_redirect_token1;
	v->a[80217] = actions(2688);
	v->a[80218] = 24;
	v->a[80219] = anon_sym_AMP_AMP;
	small_parse_table_4011(v);
}

void	small_parse_table_4011(t_small_parse_table_array *v)
{
	v->a[80220] = anon_sym_PIPE_PIPE;
	v->a[80221] = anon_sym_LT;
	v->a[80222] = anon_sym_GT;
	v->a[80223] = anon_sym_GT_GT;
	v->a[80224] = anon_sym_AMP_GT;
	v->a[80225] = anon_sym_AMP_GT_GT;
	v->a[80226] = anon_sym_LT_AMP;
	v->a[80227] = anon_sym_GT_AMP;
	v->a[80228] = anon_sym_GT_PIPE;
	v->a[80229] = anon_sym_LT_AMP_DASH;
	v->a[80230] = anon_sym_GT_AMP_DASH;
	v->a[80231] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80232] = anon_sym_DOLLAR;
	v->a[80233] = sym__special_character;
	v->a[80234] = anon_sym_DQUOTE;
	v->a[80235] = sym_raw_string;
	v->a[80236] = aux_sym_number_token1;
	v->a[80237] = aux_sym_number_token2;
	v->a[80238] = anon_sym_DOLLAR_LBRACE;
	v->a[80239] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4012(v);
}

void	small_parse_table_4012(t_small_parse_table_array *v)
{
	v->a[80240] = anon_sym_BQUOTE;
	v->a[80241] = anon_sym_DOLLAR_BQUOTE;
	v->a[80242] = sym_word;
	v->a[80243] = 6;
	v->a[80244] = actions(3);
	v->a[80245] = 1;
	v->a[80246] = sym_comment;
	v->a[80247] = actions(4534);
	v->a[80248] = 1;
	v->a[80249] = aux_sym_concatenation_token1;
	v->a[80250] = actions(4546);
	v->a[80251] = 1;
	v->a[80252] = sym__concat;
	v->a[80253] = state(1686);
	v->a[80254] = 1;
	v->a[80255] = aux_sym_concatenation_repeat1;
	v->a[80256] = actions(2696);
	v->a[80257] = 4;
	v->a[80258] = sym_file_descriptor;
	v->a[80259] = sym_test_operator;
	small_parse_table_4013(v);
}

void	small_parse_table_4013(t_small_parse_table_array *v)
{
	v->a[80260] = sym__brace_start;
	v->a[80261] = aux_sym_heredoc_redirect_token1;
	v->a[80262] = actions(2694);
	v->a[80263] = 24;
	v->a[80264] = anon_sym_AMP_AMP;
	v->a[80265] = anon_sym_PIPE_PIPE;
	v->a[80266] = anon_sym_LT;
	v->a[80267] = anon_sym_GT;
	v->a[80268] = anon_sym_GT_GT;
	v->a[80269] = anon_sym_AMP_GT;
	v->a[80270] = anon_sym_AMP_GT_GT;
	v->a[80271] = anon_sym_LT_AMP;
	v->a[80272] = anon_sym_GT_AMP;
	v->a[80273] = anon_sym_GT_PIPE;
	v->a[80274] = anon_sym_LT_AMP_DASH;
	v->a[80275] = anon_sym_GT_AMP_DASH;
	v->a[80276] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80277] = anon_sym_DOLLAR;
	v->a[80278] = sym__special_character;
	v->a[80279] = anon_sym_DQUOTE;
	small_parse_table_4014(v);
}

void	small_parse_table_4014(t_small_parse_table_array *v)
{
	v->a[80280] = sym_raw_string;
	v->a[80281] = aux_sym_number_token1;
	v->a[80282] = aux_sym_number_token2;
	v->a[80283] = anon_sym_DOLLAR_LBRACE;
	v->a[80284] = anon_sym_DOLLAR_LPAREN;
	v->a[80285] = anon_sym_BQUOTE;
	v->a[80286] = anon_sym_DOLLAR_BQUOTE;
	v->a[80287] = sym_word;
	v->a[80288] = 3;
	v->a[80289] = actions(57);
	v->a[80290] = 1;
	v->a[80291] = sym_comment;
	v->a[80292] = actions(2662);
	v->a[80293] = 12;
	v->a[80294] = anon_sym_PIPE;
	v->a[80295] = anon_sym_LT;
	v->a[80296] = anon_sym_GT;
	v->a[80297] = anon_sym_AMP_GT;
	v->a[80298] = anon_sym_LT_AMP;
	v->a[80299] = anon_sym_GT_AMP;
	small_parse_table_4015(v);
}

/* EOF small_parse_table_802.c */
