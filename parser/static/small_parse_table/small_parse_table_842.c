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
	v->a[84200] = sym_comment;
	v->a[84201] = actions(3424);
	v->a[84202] = 1;
	v->a[84203] = anon_sym_PERCENT;
	v->a[84204] = actions(3438);
	v->a[84205] = 1;
	v->a[84206] = anon_sym_RBRACE;
	v->a[84207] = state(2217);
	v->a[84208] = 2;
	v->a[84209] = sym_expansion_expression;
	v->a[84210] = sym_expansion_regex;
	v->a[84211] = actions(3426);
	v->a[84212] = 3;
	v->a[84213] = sym__immediate_double_hash;
	v->a[84214] = anon_sym_POUND;
	v->a[84215] = anon_sym_PERCENT_PERCENT;
	v->a[84216] = actions(3428);
	v->a[84217] = 8;
	v->a[84218] = anon_sym_COLON_DASH;
	v->a[84219] = anon_sym_DASH3;
	small_parse_table_4211(v);
}

void	small_parse_table_4211(t_small_parse_table_array *v)
{
	v->a[84220] = anon_sym_COLON_EQ;
	v->a[84221] = anon_sym_EQ2;
	v->a[84222] = anon_sym_COLON_QMARK;
	v->a[84223] = anon_sym_QMARK2;
	v->a[84224] = anon_sym_COLON_PLUS;
	v->a[84225] = anon_sym_PLUS3;
	v->a[84226] = 6;
	v->a[84227] = actions(3);
	v->a[84228] = 1;
	v->a[84229] = sym_comment;
	v->a[84230] = actions(3442);
	v->a[84231] = 1;
	v->a[84232] = anon_sym_DQUOTE;
	v->a[84233] = actions(3444);
	v->a[84234] = 1;
	v->a[84235] = sym_string_content;
	v->a[84236] = actions(3448);
	v->a[84237] = 1;
	v->a[84238] = sym_variable_name;
	v->a[84239] = actions(3446);
	small_parse_table_4212(v);
}

void	small_parse_table_4212(t_small_parse_table_array *v)
{
	v->a[84240] = 2;
	v->a[84241] = aux_sym__simple_variable_name_token1;
	v->a[84242] = aux_sym__multiline_variable_name_token1;
	v->a[84243] = actions(3440);
	v->a[84244] = 9;
	v->a[84245] = anon_sym_BANG;
	v->a[84246] = anon_sym_DASH;
	v->a[84247] = anon_sym_STAR;
	v->a[84248] = anon_sym_QMARK;
	v->a[84249] = anon_sym_DOLLAR;
	v->a[84250] = anon_sym_POUND;
	v->a[84251] = anon_sym_AT;
	v->a[84252] = anon_sym_0;
	v->a[84253] = anon_sym__;
	v->a[84254] = 6;
	v->a[84255] = actions(3);
	v->a[84256] = 1;
	v->a[84257] = sym_comment;
	v->a[84258] = actions(3444);
	v->a[84259] = 1;
	small_parse_table_4213(v);
}

void	small_parse_table_4213(t_small_parse_table_array *v)
{
	v->a[84260] = sym_string_content;
	v->a[84261] = actions(3448);
	v->a[84262] = 1;
	v->a[84263] = sym_variable_name;
	v->a[84264] = actions(3450);
	v->a[84265] = 1;
	v->a[84266] = anon_sym_DQUOTE;
	v->a[84267] = actions(3446);
	v->a[84268] = 2;
	v->a[84269] = aux_sym__simple_variable_name_token1;
	v->a[84270] = aux_sym__multiline_variable_name_token1;
	v->a[84271] = actions(3440);
	v->a[84272] = 9;
	v->a[84273] = anon_sym_BANG;
	v->a[84274] = anon_sym_DASH;
	v->a[84275] = anon_sym_STAR;
	v->a[84276] = anon_sym_QMARK;
	v->a[84277] = anon_sym_DOLLAR;
	v->a[84278] = anon_sym_POUND;
	v->a[84279] = anon_sym_AT;
	small_parse_table_4214(v);
}

void	small_parse_table_4214(t_small_parse_table_array *v)
{
	v->a[84280] = anon_sym_0;
	v->a[84281] = anon_sym__;
	v->a[84282] = 6;
	v->a[84283] = actions(3);
	v->a[84284] = 1;
	v->a[84285] = sym_comment;
	v->a[84286] = actions(3444);
	v->a[84287] = 1;
	v->a[84288] = sym_string_content;
	v->a[84289] = actions(3448);
	v->a[84290] = 1;
	v->a[84291] = sym_variable_name;
	v->a[84292] = actions(3452);
	v->a[84293] = 1;
	v->a[84294] = anon_sym_DQUOTE;
	v->a[84295] = actions(3446);
	v->a[84296] = 2;
	v->a[84297] = aux_sym__simple_variable_name_token1;
	v->a[84298] = aux_sym__multiline_variable_name_token1;
	v->a[84299] = actions(3440);
	small_parse_table_4215(v);
}

/* EOF small_parse_table_842.c */
