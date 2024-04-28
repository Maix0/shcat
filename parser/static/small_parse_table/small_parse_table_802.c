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
	v->a[80200] = anon_sym_LT_LT;
	v->a[80201] = anon_sym_GT_GT;
	v->a[80202] = anon_sym_RPAREN;
	v->a[80203] = anon_sym_SEMI_SEMI;
	v->a[80204] = anon_sym_PIPE_AMP;
	v->a[80205] = anon_sym_AMP_GT;
	v->a[80206] = anon_sym_AMP_GT_GT;
	v->a[80207] = anon_sym_LT_AMP;
	v->a[80208] = anon_sym_GT_AMP;
	v->a[80209] = anon_sym_GT_PIPE;
	v->a[80210] = anon_sym_LT_AMP_DASH;
	v->a[80211] = anon_sym_GT_AMP_DASH;
	v->a[80212] = anon_sym_LT_LT_DASH;
	v->a[80213] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80214] = anon_sym_DOLLAR_LBRACK;
	v->a[80215] = aux_sym_concatenation_token1;
	v->a[80216] = anon_sym_DOLLAR;
	v->a[80217] = sym__special_character;
	v->a[80218] = anon_sym_DQUOTE;
	v->a[80219] = sym_raw_string;
	small_parse_table_4011(v);
}

void	small_parse_table_4011(t_small_parse_table_array *v)
{
	v->a[80220] = sym_ansi_c_string;
	v->a[80221] = aux_sym_number_token1;
	v->a[80222] = aux_sym_number_token2;
	v->a[80223] = anon_sym_DOLLAR_LBRACE;
	v->a[80224] = anon_sym_DOLLAR_LPAREN;
	v->a[80225] = anon_sym_BQUOTE;
	v->a[80226] = anon_sym_DOLLAR_BQUOTE;
	v->a[80227] = anon_sym_LT_LPAREN;
	v->a[80228] = anon_sym_GT_LPAREN;
	v->a[80229] = aux_sym__simple_variable_name_token1;
	v->a[80230] = sym_word;
	v->a[80231] = 6;
	v->a[80232] = actions(3);
	v->a[80233] = 1;
	v->a[80234] = sym_comment;
	v->a[80235] = actions(5920);
	v->a[80236] = 1;
	v->a[80237] = aux_sym_concatenation_token1;
	v->a[80238] = actions(5922);
	v->a[80239] = 1;
	small_parse_table_4012(v);
}

void	small_parse_table_4012(t_small_parse_table_array *v)
{
	v->a[80240] = sym__concat;
	v->a[80241] = state(1704);
	v->a[80242] = 1;
	v->a[80243] = aux_sym_concatenation_repeat1;
	v->a[80244] = actions(1267);
	v->a[80245] = 4;
	v->a[80246] = sym_file_descriptor;
	v->a[80247] = sym_test_operator;
	v->a[80248] = sym__brace_start;
	v->a[80249] = aux_sym_heredoc_redirect_token1;
	v->a[80250] = actions(1265);
	v->a[80251] = 38;
	v->a[80252] = anon_sym_LPAREN_LPAREN;
	v->a[80253] = anon_sym_SEMI;
	v->a[80254] = anon_sym_PIPE_PIPE;
	v->a[80255] = anon_sym_AMP_AMP;
	v->a[80256] = anon_sym_PIPE;
	v->a[80257] = anon_sym_AMP;
	v->a[80258] = anon_sym_LT;
	v->a[80259] = anon_sym_GT;
	small_parse_table_4013(v);
}

void	small_parse_table_4013(t_small_parse_table_array *v)
{
	v->a[80260] = anon_sym_LT_LT;
	v->a[80261] = anon_sym_GT_GT;
	v->a[80262] = anon_sym_RPAREN;
	v->a[80263] = anon_sym_SEMI_SEMI;
	v->a[80264] = anon_sym_PIPE_AMP;
	v->a[80265] = anon_sym_AMP_GT;
	v->a[80266] = anon_sym_AMP_GT_GT;
	v->a[80267] = anon_sym_LT_AMP;
	v->a[80268] = anon_sym_GT_AMP;
	v->a[80269] = anon_sym_GT_PIPE;
	v->a[80270] = anon_sym_LT_AMP_DASH;
	v->a[80271] = anon_sym_GT_AMP_DASH;
	v->a[80272] = anon_sym_LT_LT_DASH;
	v->a[80273] = anon_sym_LT_LT_LT;
	v->a[80274] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80275] = anon_sym_DOLLAR_LBRACK;
	v->a[80276] = anon_sym_DOLLAR;
	v->a[80277] = sym__special_character;
	v->a[80278] = anon_sym_DQUOTE;
	v->a[80279] = sym_raw_string;
	small_parse_table_4014(v);
}

void	small_parse_table_4014(t_small_parse_table_array *v)
{
	v->a[80280] = sym_ansi_c_string;
	v->a[80281] = aux_sym_number_token1;
	v->a[80282] = aux_sym_number_token2;
	v->a[80283] = anon_sym_DOLLAR_LBRACE;
	v->a[80284] = anon_sym_DOLLAR_LPAREN;
	v->a[80285] = anon_sym_BQUOTE;
	v->a[80286] = anon_sym_DOLLAR_BQUOTE;
	v->a[80287] = anon_sym_LT_LPAREN;
	v->a[80288] = anon_sym_GT_LPAREN;
	v->a[80289] = sym_word;
	v->a[80290] = 6;
	v->a[80291] = actions(3);
	v->a[80292] = 1;
	v->a[80293] = sym_comment;
	v->a[80294] = actions(5920);
	v->a[80295] = 1;
	v->a[80296] = aux_sym_concatenation_token1;
	v->a[80297] = actions(5924);
	v->a[80298] = 1;
	v->a[80299] = sym__concat;
	small_parse_table_4015(v);
}

/* EOF small_parse_table_802.c */
