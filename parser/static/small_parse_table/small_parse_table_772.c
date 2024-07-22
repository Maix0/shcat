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
	v->a[77200] = anon_sym_DQUOTE;
	v->a[77201] = state(1610);
	v->a[77202] = 1;
	v->a[77203] = aux_sym_string_repeat1;
	v->a[77204] = state(1748);
	v->a[77205] = 4;
	v->a[77206] = sym_arithmetic_expansion;
	v->a[77207] = sym_simple_expansion;
	v->a[77208] = sym_expansion;
	v->a[77209] = sym_command_substitution;
	v->a[77210] = 8;
	v->a[77211] = actions(3);
	v->a[77212] = 1;
	v->a[77213] = sym_comment;
	v->a[77214] = actions(3040);
	v->a[77215] = 1;
	v->a[77216] = anon_sym_POUND;
	v->a[77217] = actions(3042);
	v->a[77218] = 1;
	v->a[77219] = aux_sym__simple_variable_name_token1;
	small_parse_table_3861(v);
}

void	small_parse_table_3861(t_small_parse_table_array *v)
{
	v->a[77220] = actions(3044);
	v->a[77221] = 1;
	v->a[77222] = anon_sym_0;
	v->a[77223] = actions(3046);
	v->a[77224] = 1;
	v->a[77225] = sym_variable_name;
	v->a[77226] = actions(3342);
	v->a[77227] = 1;
	v->a[77228] = anon_sym_RBRACE;
	v->a[77229] = state(2017);
	v->a[77230] = 1;
	v->a[77231] = sym__expansion_body;
	v->a[77232] = actions(3038);
	v->a[77233] = 6;
	v->a[77234] = anon_sym_BANG;
	v->a[77235] = anon_sym_DASH;
	v->a[77236] = anon_sym_STAR;
	v->a[77237] = anon_sym_QMARK;
	v->a[77238] = anon_sym_DOLLAR;
	v->a[77239] = anon_sym_AT;
	small_parse_table_3862(v);
}

void	small_parse_table_3862(t_small_parse_table_array *v)
{
	v->a[77240] = 10;
	v->a[77241] = actions(3);
	v->a[77242] = 1;
	v->a[77243] = sym_comment;
	v->a[77244] = actions(3058);
	v->a[77245] = 1;
	v->a[77246] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77247] = actions(3064);
	v->a[77248] = 1;
	v->a[77249] = sym_string_content;
	v->a[77250] = actions(3066);
	v->a[77251] = 1;
	v->a[77252] = anon_sym_DOLLAR_LBRACE;
	v->a[77253] = actions(3068);
	v->a[77254] = 1;
	v->a[77255] = anon_sym_DOLLAR_LPAREN;
	v->a[77256] = actions(3070);
	v->a[77257] = 1;
	v->a[77258] = anon_sym_BQUOTE;
	v->a[77259] = actions(3344);
	small_parse_table_3863(v);
}

void	small_parse_table_3863(t_small_parse_table_array *v)
{
	v->a[77260] = 1;
	v->a[77261] = anon_sym_DOLLAR;
	v->a[77262] = actions(3346);
	v->a[77263] = 1;
	v->a[77264] = anon_sym_DQUOTE;
	v->a[77265] = state(1610);
	v->a[77266] = 1;
	v->a[77267] = aux_sym_string_repeat1;
	v->a[77268] = state(1748);
	v->a[77269] = 4;
	v->a[77270] = sym_arithmetic_expansion;
	v->a[77271] = sym_simple_expansion;
	v->a[77272] = sym_expansion;
	v->a[77273] = sym_command_substitution;
	v->a[77274] = 10;
	v->a[77275] = actions(3);
	v->a[77276] = 1;
	v->a[77277] = sym_comment;
	v->a[77278] = actions(3058);
	v->a[77279] = 1;
	small_parse_table_3864(v);
}

void	small_parse_table_3864(t_small_parse_table_array *v)
{
	v->a[77280] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77281] = actions(3064);
	v->a[77282] = 1;
	v->a[77283] = sym_string_content;
	v->a[77284] = actions(3066);
	v->a[77285] = 1;
	v->a[77286] = anon_sym_DOLLAR_LBRACE;
	v->a[77287] = actions(3068);
	v->a[77288] = 1;
	v->a[77289] = anon_sym_DOLLAR_LPAREN;
	v->a[77290] = actions(3070);
	v->a[77291] = 1;
	v->a[77292] = anon_sym_BQUOTE;
	v->a[77293] = actions(3348);
	v->a[77294] = 1;
	v->a[77295] = anon_sym_DOLLAR;
	v->a[77296] = actions(3350);
	v->a[77297] = 1;
	v->a[77298] = anon_sym_DQUOTE;
	v->a[77299] = state(1667);
	small_parse_table_3865(v);
}

/* EOF small_parse_table_772.c */
