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
	v->a[80200] = actions(2963);
	v->a[80201] = 1;
	v->a[80202] = sym__bare_dollar;
	v->a[80203] = actions(2959);
	v->a[80204] = 5;
	v->a[80205] = aux_sym_concatenation_token1;
	v->a[80206] = sym_raw_string;
	v->a[80207] = sym_number;
	v->a[80208] = sym__comment_word;
	v->a[80209] = sym_word;
	v->a[80210] = state(923);
	v->a[80211] = 5;
	v->a[80212] = sym_arithmetic_expansion;
	v->a[80213] = sym_string;
	v->a[80214] = sym_simple_expansion;
	v->a[80215] = sym_expansion;
	v->a[80216] = sym_command_substitution;
	v->a[80217] = 10;
	v->a[80218] = actions(3);
	v->a[80219] = 1;
	small_parse_table_4011(v);
}

void	small_parse_table_4011(t_small_parse_table_array *v)
{
	v->a[80220] = sym_comment;
	v->a[80221] = actions(1883);
	v->a[80222] = 1;
	v->a[80223] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80224] = actions(1887);
	v->a[80225] = 1;
	v->a[80226] = anon_sym_DQUOTE;
	v->a[80227] = actions(1889);
	v->a[80228] = 1;
	v->a[80229] = anon_sym_DOLLAR_LBRACE;
	v->a[80230] = actions(1891);
	v->a[80231] = 1;
	v->a[80232] = anon_sym_DOLLAR_LPAREN;
	v->a[80233] = actions(1893);
	v->a[80234] = 1;
	v->a[80235] = anon_sym_BQUOTE;
	v->a[80236] = actions(2987);
	v->a[80237] = 1;
	v->a[80238] = anon_sym_DOLLAR;
	v->a[80239] = actions(2989);
	small_parse_table_4012(v);
}

void	small_parse_table_4012(t_small_parse_table_array *v)
{
	v->a[80240] = 1;
	v->a[80241] = sym__bare_dollar;
	v->a[80242] = actions(2985);
	v->a[80243] = 5;
	v->a[80244] = aux_sym_concatenation_token1;
	v->a[80245] = sym_raw_string;
	v->a[80246] = sym_number;
	v->a[80247] = sym__comment_word;
	v->a[80248] = sym_word;
	v->a[80249] = state(2074);
	v->a[80250] = 5;
	v->a[80251] = sym_arithmetic_expansion;
	v->a[80252] = sym_string;
	v->a[80253] = sym_simple_expansion;
	v->a[80254] = sym_expansion;
	v->a[80255] = sym_command_substitution;
	v->a[80256] = 10;
	v->a[80257] = actions(3);
	v->a[80258] = 1;
	v->a[80259] = sym_comment;
	small_parse_table_4013(v);
}

void	small_parse_table_4013(t_small_parse_table_array *v)
{
	v->a[80260] = actions(497);
	v->a[80261] = 1;
	v->a[80262] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80263] = actions(499);
	v->a[80264] = 1;
	v->a[80265] = anon_sym_DOLLAR;
	v->a[80266] = actions(501);
	v->a[80267] = 1;
	v->a[80268] = anon_sym_DQUOTE;
	v->a[80269] = actions(503);
	v->a[80270] = 1;
	v->a[80271] = anon_sym_DOLLAR_LBRACE;
	v->a[80272] = actions(505);
	v->a[80273] = 1;
	v->a[80274] = anon_sym_DOLLAR_LPAREN;
	v->a[80275] = actions(507);
	v->a[80276] = 1;
	v->a[80277] = anon_sym_BQUOTE;
	v->a[80278] = actions(2983);
	v->a[80279] = 1;
	small_parse_table_4014(v);
}

void	small_parse_table_4014(t_small_parse_table_array *v)
{
	v->a[80280] = sym__bare_dollar;
	v->a[80281] = actions(2979);
	v->a[80282] = 5;
	v->a[80283] = aux_sym_concatenation_token1;
	v->a[80284] = sym_raw_string;
	v->a[80285] = sym_number;
	v->a[80286] = sym__comment_word;
	v->a[80287] = sym_word;
	v->a[80288] = state(546);
	v->a[80289] = 5;
	v->a[80290] = sym_arithmetic_expansion;
	v->a[80291] = sym_string;
	v->a[80292] = sym_simple_expansion;
	v->a[80293] = sym_expansion;
	v->a[80294] = sym_command_substitution;
	v->a[80295] = 10;
	v->a[80296] = actions(3);
	v->a[80297] = 1;
	v->a[80298] = sym_comment;
	v->a[80299] = actions(704);
	small_parse_table_4015(v);
}

/* EOF small_parse_table_802.c */
