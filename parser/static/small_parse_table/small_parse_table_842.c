/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_842.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4210(t_small_parse_table_array *v)
{
	v->a[84200] = actions(1598);
	v->a[84201] = 1;
	v->a[84202] = anon_sym_BQUOTE;
	v->a[84203] = actions(3244);
	v->a[84204] = 1;
	v->a[84205] = sym__bare_dollar;
	v->a[84206] = actions(3242);
	v->a[84207] = 5;
	v->a[84208] = aux_sym_concatenation_token1;
	v->a[84209] = sym_raw_string;
	v->a[84210] = sym_number;
	v->a[84211] = sym__comment_word;
	v->a[84212] = sym_word;
	v->a[84213] = state(1591);
	v->a[84214] = 5;
	v->a[84215] = sym_arithmetic_expansion;
	v->a[84216] = sym_string;
	v->a[84217] = sym_simple_expansion;
	v->a[84218] = sym_expansion;
	v->a[84219] = sym_command_substitution;
	small_parse_table_4211(v);
}

void	small_parse_table_4211(t_small_parse_table_array *v)
{
	v->a[84220] = 10;
	v->a[84221] = actions(3);
	v->a[84222] = 1;
	v->a[84223] = sym_comment;
	v->a[84224] = actions(1513);
	v->a[84225] = 1;
	v->a[84226] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84227] = actions(1515);
	v->a[84228] = 1;
	v->a[84229] = anon_sym_DOLLAR;
	v->a[84230] = actions(1517);
	v->a[84231] = 1;
	v->a[84232] = anon_sym_DQUOTE;
	v->a[84233] = actions(1519);
	v->a[84234] = 1;
	v->a[84235] = anon_sym_DOLLAR_LBRACE;
	v->a[84236] = actions(1521);
	v->a[84237] = 1;
	v->a[84238] = anon_sym_DOLLAR_LPAREN;
	v->a[84239] = actions(1523);
	small_parse_table_4212(v);
}

void	small_parse_table_4212(t_small_parse_table_array *v)
{
	v->a[84240] = 1;
	v->a[84241] = anon_sym_BQUOTE;
	v->a[84242] = actions(3248);
	v->a[84243] = 1;
	v->a[84244] = sym__bare_dollar;
	v->a[84245] = actions(3246);
	v->a[84246] = 5;
	v->a[84247] = aux_sym_concatenation_token1;
	v->a[84248] = sym_raw_string;
	v->a[84249] = sym_number;
	v->a[84250] = sym__comment_word;
	v->a[84251] = sym_word;
	v->a[84252] = state(1074);
	v->a[84253] = 5;
	v->a[84254] = sym_arithmetic_expansion;
	v->a[84255] = sym_string;
	v->a[84256] = sym_simple_expansion;
	v->a[84257] = sym_expansion;
	v->a[84258] = sym_command_substitution;
	v->a[84259] = 12;
	small_parse_table_4213(v);
}

void	small_parse_table_4213(t_small_parse_table_array *v)
{
	v->a[84260] = actions(3);
	v->a[84261] = 1;
	v->a[84262] = sym_comment;
	v->a[84263] = actions(3156);
	v->a[84264] = 1;
	v->a[84265] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84266] = actions(3160);
	v->a[84267] = 1;
	v->a[84268] = anon_sym_DQUOTE;
	v->a[84269] = actions(3162);
	v->a[84270] = 1;
	v->a[84271] = anon_sym_DOLLAR_LBRACE;
	v->a[84272] = actions(3164);
	v->a[84273] = 1;
	v->a[84274] = anon_sym_DOLLAR_LPAREN;
	v->a[84275] = actions(3166);
	v->a[84276] = 1;
	v->a[84277] = anon_sym_BQUOTE;
	v->a[84278] = actions(3252);
	v->a[84279] = 1;
	small_parse_table_4214(v);
}

void	small_parse_table_4214(t_small_parse_table_array *v)
{
	v->a[84280] = anon_sym_DOLLAR;
	v->a[84281] = actions(3254);
	v->a[84282] = 1;
	v->a[84283] = sym__comment_word;
	v->a[84284] = actions(3256);
	v->a[84285] = 1;
	v->a[84286] = sym__empty_value;
	v->a[84287] = state(1236);
	v->a[84288] = 1;
	v->a[84289] = sym_concatenation;
	v->a[84290] = actions(3250);
	v->a[84291] = 3;
	v->a[84292] = sym_raw_string;
	v->a[84293] = sym_number;
	v->a[84294] = sym_word;
	v->a[84295] = state(1286);
	v->a[84296] = 5;
	v->a[84297] = sym_arithmetic_expansion;
	v->a[84298] = sym_string;
	v->a[84299] = sym_simple_expansion;
	small_parse_table_4215(v);
}

/* EOF small_parse_table_842.c */
