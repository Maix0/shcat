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
	v->a[80201] = aux_sym_number_token1;
	v->a[80202] = actions(2859);
	v->a[80203] = 1;
	v->a[80204] = aux_sym_number_token2;
	v->a[80205] = actions(2861);
	v->a[80206] = 1;
	v->a[80207] = anon_sym_DOLLAR_LBRACE;
	v->a[80208] = actions(2863);
	v->a[80209] = 1;
	v->a[80210] = anon_sym_DOLLAR_LPAREN;
	v->a[80211] = actions(2865);
	v->a[80212] = 1;
	v->a[80213] = anon_sym_BQUOTE;
	v->a[80214] = actions(3298);
	v->a[80215] = 2;
	v->a[80216] = sym_raw_string;
	v->a[80217] = sym_word;
	v->a[80218] = state(798);
	v->a[80219] = 2;
	small_parse_table_4011(v);
}

void	small_parse_table_4011(t_small_parse_table_array *v)
{
	v->a[80220] = sym_concatenation;
	v->a[80221] = aux_sym_for_statement_repeat1;
	v->a[80222] = state(985);
	v->a[80223] = 6;
	v->a[80224] = sym_arithmetic_expansion;
	v->a[80225] = sym_string;
	v->a[80226] = sym_number;
	v->a[80227] = sym_simple_expansion;
	v->a[80228] = sym_expansion;
	v->a[80229] = sym_command_substitution;
	v->a[80230] = 12;
	v->a[80231] = actions(3);
	v->a[80232] = 1;
	v->a[80233] = sym_comment;
	v->a[80234] = actions(2929);
	v->a[80235] = 1;
	v->a[80236] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80237] = actions(2933);
	v->a[80238] = 1;
	v->a[80239] = anon_sym_DQUOTE;
	small_parse_table_4012(v);
}

void	small_parse_table_4012(t_small_parse_table_array *v)
{
	v->a[80240] = actions(2935);
	v->a[80241] = 1;
	v->a[80242] = aux_sym_number_token1;
	v->a[80243] = actions(2937);
	v->a[80244] = 1;
	v->a[80245] = aux_sym_number_token2;
	v->a[80246] = actions(2939);
	v->a[80247] = 1;
	v->a[80248] = anon_sym_DOLLAR_LBRACE;
	v->a[80249] = actions(2941);
	v->a[80250] = 1;
	v->a[80251] = anon_sym_DOLLAR_LPAREN;
	v->a[80252] = actions(2943);
	v->a[80253] = 1;
	v->a[80254] = anon_sym_BQUOTE;
	v->a[80255] = actions(3312);
	v->a[80256] = 1;
	v->a[80257] = sym__bare_dollar;
	v->a[80258] = actions(3322);
	v->a[80259] = 1;
	small_parse_table_4013(v);
}

void	small_parse_table_4013(t_small_parse_table_array *v)
{
	v->a[80260] = anon_sym_DOLLAR;
	v->a[80261] = actions(3310);
	v->a[80262] = 3;
	v->a[80263] = sym_raw_string;
	v->a[80264] = sym__comment_word;
	v->a[80265] = sym_word;
	v->a[80266] = state(827);
	v->a[80267] = 6;
	v->a[80268] = sym_arithmetic_expansion;
	v->a[80269] = sym_string;
	v->a[80270] = sym_number;
	v->a[80271] = sym_simple_expansion;
	v->a[80272] = sym_expansion;
	v->a[80273] = sym_command_substitution;
	v->a[80274] = 12;
	v->a[80275] = actions(3);
	v->a[80276] = 1;
	v->a[80277] = sym_comment;
	v->a[80278] = actions(1902);
	v->a[80279] = 1;
	small_parse_table_4014(v);
}

void	small_parse_table_4014(t_small_parse_table_array *v)
{
	v->a[80280] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80281] = actions(1904);
	v->a[80282] = 1;
	v->a[80283] = anon_sym_DOLLAR;
	v->a[80284] = actions(1906);
	v->a[80285] = 1;
	v->a[80286] = anon_sym_DQUOTE;
	v->a[80287] = actions(1908);
	v->a[80288] = 1;
	v->a[80289] = aux_sym_number_token1;
	v->a[80290] = actions(1910);
	v->a[80291] = 1;
	v->a[80292] = aux_sym_number_token2;
	v->a[80293] = actions(1912);
	v->a[80294] = 1;
	v->a[80295] = anon_sym_DOLLAR_LBRACE;
	v->a[80296] = actions(1914);
	v->a[80297] = 1;
	v->a[80298] = anon_sym_DOLLAR_LPAREN;
	v->a[80299] = actions(1916);
	small_parse_table_4015(v);
}

/* EOF small_parse_table_802.c */
