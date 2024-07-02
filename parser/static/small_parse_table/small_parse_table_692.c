/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_692.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3460(t_small_parse_table_array *v)
{
	v->a[69200] = 1;
	v->a[69201] = sym_comment;
	v->a[69202] = actions(2426);
	v->a[69203] = 1;
	v->a[69204] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69205] = actions(2428);
	v->a[69206] = 1;
	v->a[69207] = anon_sym_DOLLAR;
	v->a[69208] = actions(2430);
	v->a[69209] = 1;
	v->a[69210] = anon_sym_DQUOTE;
	v->a[69211] = actions(2432);
	v->a[69212] = 1;
	v->a[69213] = anon_sym_DOLLAR_LBRACE;
	v->a[69214] = actions(2434);
	v->a[69215] = 1;
	v->a[69216] = anon_sym_DOLLAR_LPAREN;
	v->a[69217] = actions(2436);
	v->a[69218] = 1;
	v->a[69219] = anon_sym_BQUOTE;
	small_parse_table_3461(v);
}

void	small_parse_table_3461(t_small_parse_table_array *v)
{
	v->a[69220] = actions(2612);
	v->a[69221] = 1;
	v->a[69222] = sym__bare_dollar;
	v->a[69223] = actions(2608);
	v->a[69224] = 5;
	v->a[69225] = aux_sym_concatenation_token1;
	v->a[69226] = sym_raw_string;
	v->a[69227] = sym_number;
	v->a[69228] = sym__comment_word;
	v->a[69229] = sym_word;
	v->a[69230] = state(1425);
	v->a[69231] = 5;
	v->a[69232] = sym_arithmetic_expansion;
	v->a[69233] = sym_string;
	v->a[69234] = sym_simple_expansion;
	v->a[69235] = sym_expansion;
	v->a[69236] = sym_command_substitution;
	v->a[69237] = 11;
	v->a[69238] = actions(3);
	v->a[69239] = 1;
	small_parse_table_3462(v);
}

void	small_parse_table_3462(t_small_parse_table_array *v)
{
	v->a[69240] = sym_comment;
	v->a[69241] = actions(1641);
	v->a[69242] = 1;
	v->a[69243] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69244] = actions(1643);
	v->a[69245] = 1;
	v->a[69246] = anon_sym_DOLLAR;
	v->a[69247] = actions(1645);
	v->a[69248] = 1;
	v->a[69249] = anon_sym_DQUOTE;
	v->a[69250] = actions(1647);
	v->a[69251] = 1;
	v->a[69252] = anon_sym_DOLLAR_LBRACE;
	v->a[69253] = actions(1649);
	v->a[69254] = 1;
	v->a[69255] = anon_sym_DOLLAR_LPAREN;
	v->a[69256] = actions(1651);
	v->a[69257] = 1;
	v->a[69258] = anon_sym_BQUOTE;
	v->a[69259] = actions(1653);
	small_parse_table_3463(v);
}

void	small_parse_table_3463(t_small_parse_table_array *v)
{
	v->a[69260] = 1;
	v->a[69261] = sym_extglob_pattern;
	v->a[69262] = state(1920);
	v->a[69263] = 2;
	v->a[69264] = sym_concatenation;
	v->a[69265] = sym__extglob_blob;
	v->a[69266] = actions(2735);
	v->a[69267] = 3;
	v->a[69268] = sym_raw_string;
	v->a[69269] = sym_number;
	v->a[69270] = sym_word;
	v->a[69271] = state(1836);
	v->a[69272] = 5;
	v->a[69273] = sym_arithmetic_expansion;
	v->a[69274] = sym_string;
	v->a[69275] = sym_simple_expansion;
	v->a[69276] = sym_expansion;
	v->a[69277] = sym_command_substitution;
	v->a[69278] = 10;
	v->a[69279] = actions(3);
	small_parse_table_3464(v);
}

void	small_parse_table_3464(t_small_parse_table_array *v)
{
	v->a[69280] = 1;
	v->a[69281] = sym_comment;
	v->a[69282] = actions(850);
	v->a[69283] = 1;
	v->a[69284] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69285] = actions(852);
	v->a[69286] = 1;
	v->a[69287] = anon_sym_DOLLAR;
	v->a[69288] = actions(854);
	v->a[69289] = 1;
	v->a[69290] = anon_sym_DQUOTE;
	v->a[69291] = actions(856);
	v->a[69292] = 1;
	v->a[69293] = anon_sym_DOLLAR_LBRACE;
	v->a[69294] = actions(858);
	v->a[69295] = 1;
	v->a[69296] = anon_sym_DOLLAR_LPAREN;
	v->a[69297] = actions(860);
	v->a[69298] = 1;
	v->a[69299] = anon_sym_BQUOTE;
	small_parse_table_3465(v);
}

/* EOF small_parse_table_692.c */
