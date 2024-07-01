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
	v->a[77200] = anon_sym_BANG;
	v->a[77201] = anon_sym_DASH;
	v->a[77202] = anon_sym_STAR;
	v->a[77203] = anon_sym_QMARK;
	v->a[77204] = anon_sym_DOLLAR;
	v->a[77205] = anon_sym_POUND;
	v->a[77206] = anon_sym_AT;
	v->a[77207] = anon_sym_0;
	v->a[77208] = anon_sym__;
	v->a[77209] = 10;
	v->a[77210] = actions(3);
	v->a[77211] = 1;
	v->a[77212] = sym_comment;
	v->a[77213] = actions(3071);
	v->a[77214] = 1;
	v->a[77215] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77216] = actions(3077);
	v->a[77217] = 1;
	v->a[77218] = sym_string_content;
	v->a[77219] = actions(3079);
	small_parse_table_3861(v);
}

void	small_parse_table_3861(t_small_parse_table_array *v)
{
	v->a[77220] = 1;
	v->a[77221] = anon_sym_DOLLAR_LBRACE;
	v->a[77222] = actions(3081);
	v->a[77223] = 1;
	v->a[77224] = anon_sym_DOLLAR_LPAREN;
	v->a[77225] = actions(3083);
	v->a[77226] = 1;
	v->a[77227] = anon_sym_BQUOTE;
	v->a[77228] = actions(3189);
	v->a[77229] = 1;
	v->a[77230] = anon_sym_DOLLAR;
	v->a[77231] = actions(3191);
	v->a[77232] = 1;
	v->a[77233] = anon_sym_DQUOTE;
	v->a[77234] = state(1643);
	v->a[77235] = 1;
	v->a[77236] = aux_sym_string_repeat1;
	v->a[77237] = state(1739);
	v->a[77238] = 4;
	v->a[77239] = sym_arithmetic_expansion;
	small_parse_table_3862(v);
}

void	small_parse_table_3862(t_small_parse_table_array *v)
{
	v->a[77240] = sym_simple_expansion;
	v->a[77241] = sym_expansion;
	v->a[77242] = sym_command_substitution;
	v->a[77243] = 4;
	v->a[77244] = actions(3);
	v->a[77245] = 1;
	v->a[77246] = sym_comment;
	v->a[77247] = actions(3197);
	v->a[77248] = 1;
	v->a[77249] = sym_variable_name;
	v->a[77250] = actions(3195);
	v->a[77251] = 2;
	v->a[77252] = aux_sym__simple_variable_name_token1;
	v->a[77253] = aux_sym__multiline_variable_name_token1;
	v->a[77254] = actions(3193);
	v->a[77255] = 9;
	v->a[77256] = anon_sym_BANG;
	v->a[77257] = anon_sym_DASH;
	v->a[77258] = anon_sym_STAR;
	v->a[77259] = anon_sym_QMARK;
	small_parse_table_3863(v);
}

void	small_parse_table_3863(t_small_parse_table_array *v)
{
	v->a[77260] = anon_sym_DOLLAR;
	v->a[77261] = anon_sym_POUND;
	v->a[77262] = anon_sym_AT;
	v->a[77263] = anon_sym_0;
	v->a[77264] = anon_sym__;
	v->a[77265] = 10;
	v->a[77266] = actions(3);
	v->a[77267] = 1;
	v->a[77268] = sym_comment;
	v->a[77269] = actions(3071);
	v->a[77270] = 1;
	v->a[77271] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77272] = actions(3077);
	v->a[77273] = 1;
	v->a[77274] = sym_string_content;
	v->a[77275] = actions(3079);
	v->a[77276] = 1;
	v->a[77277] = anon_sym_DOLLAR_LBRACE;
	v->a[77278] = actions(3081);
	v->a[77279] = 1;
	small_parse_table_3864(v);
}

void	small_parse_table_3864(t_small_parse_table_array *v)
{
	v->a[77280] = anon_sym_DOLLAR_LPAREN;
	v->a[77281] = actions(3083);
	v->a[77282] = 1;
	v->a[77283] = anon_sym_BQUOTE;
	v->a[77284] = actions(3199);
	v->a[77285] = 1;
	v->a[77286] = anon_sym_DOLLAR;
	v->a[77287] = actions(3201);
	v->a[77288] = 1;
	v->a[77289] = anon_sym_DQUOTE;
	v->a[77290] = state(1680);
	v->a[77291] = 1;
	v->a[77292] = aux_sym_string_repeat1;
	v->a[77293] = state(1739);
	v->a[77294] = 4;
	v->a[77295] = sym_arithmetic_expansion;
	v->a[77296] = sym_simple_expansion;
	v->a[77297] = sym_expansion;
	v->a[77298] = sym_command_substitution;
	v->a[77299] = 4;
	small_parse_table_3865(v);
}

/* EOF small_parse_table_772.c */
