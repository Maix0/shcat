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
	v->a[77200] = 1;
	v->a[77201] = sym_comment;
	v->a[77202] = actions(1347);
	v->a[77203] = 1;
	v->a[77204] = sym_variable_name;
	v->a[77205] = actions(1345);
	v->a[77206] = 2;
	v->a[77207] = aux_sym__simple_variable_name_token1;
	v->a[77208] = aux_sym__multiline_variable_name_token1;
	v->a[77209] = actions(1343);
	v->a[77210] = 9;
	v->a[77211] = anon_sym_BANG;
	v->a[77212] = anon_sym_DASH;
	v->a[77213] = anon_sym_STAR;
	v->a[77214] = anon_sym_QMARK;
	v->a[77215] = anon_sym_DOLLAR;
	v->a[77216] = anon_sym_POUND;
	v->a[77217] = anon_sym_AT;
	v->a[77218] = anon_sym_0;
	v->a[77219] = anon_sym__;
	small_parse_table_3861(v);
}

void	small_parse_table_3861(t_small_parse_table_array *v)
{
	v->a[77220] = 10;
	v->a[77221] = actions(3);
	v->a[77222] = 1;
	v->a[77223] = sym_comment;
	v->a[77224] = actions(3104);
	v->a[77225] = 1;
	v->a[77226] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77227] = actions(3110);
	v->a[77228] = 1;
	v->a[77229] = sym_string_content;
	v->a[77230] = actions(3112);
	v->a[77231] = 1;
	v->a[77232] = anon_sym_DOLLAR_LBRACE;
	v->a[77233] = actions(3114);
	v->a[77234] = 1;
	v->a[77235] = anon_sym_DOLLAR_LPAREN;
	v->a[77236] = actions(3116);
	v->a[77237] = 1;
	v->a[77238] = anon_sym_BQUOTE;
	v->a[77239] = actions(3216);
	small_parse_table_3862(v);
}

void	small_parse_table_3862(t_small_parse_table_array *v)
{
	v->a[77240] = 1;
	v->a[77241] = anon_sym_DOLLAR;
	v->a[77242] = actions(3218);
	v->a[77243] = 1;
	v->a[77244] = anon_sym_DQUOTE;
	v->a[77245] = state(1625);
	v->a[77246] = 1;
	v->a[77247] = aux_sym_string_repeat1;
	v->a[77248] = state(1748);
	v->a[77249] = 4;
	v->a[77250] = sym_arithmetic_expansion;
	v->a[77251] = sym_simple_expansion;
	v->a[77252] = sym_expansion;
	v->a[77253] = sym_command_substitution;
	v->a[77254] = 4;
	v->a[77255] = actions(3);
	v->a[77256] = 1;
	v->a[77257] = sym_comment;
	v->a[77258] = actions(1835);
	v->a[77259] = 1;
	small_parse_table_3863(v);
}

void	small_parse_table_3863(t_small_parse_table_array *v)
{
	v->a[77260] = sym_variable_name;
	v->a[77261] = actions(1833);
	v->a[77262] = 2;
	v->a[77263] = aux_sym__simple_variable_name_token1;
	v->a[77264] = aux_sym__multiline_variable_name_token1;
	v->a[77265] = actions(1831);
	v->a[77266] = 9;
	v->a[77267] = anon_sym_BANG;
	v->a[77268] = anon_sym_DASH;
	v->a[77269] = anon_sym_STAR;
	v->a[77270] = anon_sym_QMARK;
	v->a[77271] = anon_sym_DOLLAR;
	v->a[77272] = anon_sym_POUND;
	v->a[77273] = anon_sym_AT;
	v->a[77274] = anon_sym_0;
	v->a[77275] = anon_sym__;
	v->a[77276] = 10;
	v->a[77277] = actions(3);
	v->a[77278] = 1;
	v->a[77279] = sym_comment;
	small_parse_table_3864(v);
}

void	small_parse_table_3864(t_small_parse_table_array *v)
{
	v->a[77280] = actions(3104);
	v->a[77281] = 1;
	v->a[77282] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77283] = actions(3110);
	v->a[77284] = 1;
	v->a[77285] = sym_string_content;
	v->a[77286] = actions(3112);
	v->a[77287] = 1;
	v->a[77288] = anon_sym_DOLLAR_LBRACE;
	v->a[77289] = actions(3114);
	v->a[77290] = 1;
	v->a[77291] = anon_sym_DOLLAR_LPAREN;
	v->a[77292] = actions(3116);
	v->a[77293] = 1;
	v->a[77294] = anon_sym_BQUOTE;
	v->a[77295] = actions(3220);
	v->a[77296] = 1;
	v->a[77297] = anon_sym_DOLLAR;
	v->a[77298] = actions(3222);
	v->a[77299] = 1;
	small_parse_table_3865(v);
}

/* EOF small_parse_table_772.c */
