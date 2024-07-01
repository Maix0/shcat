/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_872.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4360(t_small_parse_table_array *v)
{
	v->a[87200] = 1;
	v->a[87201] = aux_sym_string_repeat1;
	v->a[87202] = state(1959);
	v->a[87203] = 4;
	v->a[87204] = sym_arithmetic_expansion;
	v->a[87205] = sym_simple_expansion;
	v->a[87206] = sym_expansion;
	v->a[87207] = sym_command_substitution;
	v->a[87208] = 10;
	v->a[87209] = actions(3);
	v->a[87210] = 1;
	v->a[87211] = sym_comment;
	v->a[87212] = actions(3414);
	v->a[87213] = 1;
	v->a[87214] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87215] = actions(3420);
	v->a[87216] = 1;
	v->a[87217] = sym_string_content;
	v->a[87218] = actions(3422);
	v->a[87219] = 1;
	small_parse_table_4361(v);
}

void	small_parse_table_4361(t_small_parse_table_array *v)
{
	v->a[87220] = anon_sym_DOLLAR_LBRACE;
	v->a[87221] = actions(3424);
	v->a[87222] = 1;
	v->a[87223] = anon_sym_DOLLAR_LPAREN;
	v->a[87224] = actions(3426);
	v->a[87225] = 1;
	v->a[87226] = anon_sym_BQUOTE;
	v->a[87227] = actions(3548);
	v->a[87228] = 1;
	v->a[87229] = anon_sym_DOLLAR;
	v->a[87230] = actions(3550);
	v->a[87231] = 1;
	v->a[87232] = anon_sym_DQUOTE;
	v->a[87233] = state(1859);
	v->a[87234] = 1;
	v->a[87235] = aux_sym_string_repeat1;
	v->a[87236] = state(1959);
	v->a[87237] = 4;
	v->a[87238] = sym_arithmetic_expansion;
	v->a[87239] = sym_simple_expansion;
	small_parse_table_4362(v);
}

void	small_parse_table_4362(t_small_parse_table_array *v)
{
	v->a[87240] = sym_expansion;
	v->a[87241] = sym_command_substitution;
	v->a[87242] = 4;
	v->a[87243] = actions(3);
	v->a[87244] = 1;
	v->a[87245] = sym_comment;
	v->a[87246] = actions(411);
	v->a[87247] = 1;
	v->a[87248] = sym_variable_name;
	v->a[87249] = actions(409);
	v->a[87250] = 2;
	v->a[87251] = aux_sym__simple_variable_name_token1;
	v->a[87252] = aux_sym__multiline_variable_name_token1;
	v->a[87253] = actions(407);
	v->a[87254] = 9;
	v->a[87255] = anon_sym_BANG;
	v->a[87256] = anon_sym_DASH;
	v->a[87257] = anon_sym_STAR;
	v->a[87258] = anon_sym_QMARK;
	v->a[87259] = anon_sym_DOLLAR;
	small_parse_table_4363(v);
}

void	small_parse_table_4363(t_small_parse_table_array *v)
{
	v->a[87260] = anon_sym_POUND;
	v->a[87261] = anon_sym_AT;
	v->a[87262] = anon_sym_0;
	v->a[87263] = anon_sym__;
	v->a[87264] = 10;
	v->a[87265] = actions(3);
	v->a[87266] = 1;
	v->a[87267] = sym_comment;
	v->a[87268] = actions(3414);
	v->a[87269] = 1;
	v->a[87270] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87271] = actions(3420);
	v->a[87272] = 1;
	v->a[87273] = sym_string_content;
	v->a[87274] = actions(3422);
	v->a[87275] = 1;
	v->a[87276] = anon_sym_DOLLAR_LBRACE;
	v->a[87277] = actions(3424);
	v->a[87278] = 1;
	v->a[87279] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4364(v);
}

void	small_parse_table_4364(t_small_parse_table_array *v)
{
	v->a[87280] = actions(3426);
	v->a[87281] = 1;
	v->a[87282] = anon_sym_BQUOTE;
	v->a[87283] = actions(3552);
	v->a[87284] = 1;
	v->a[87285] = anon_sym_DOLLAR;
	v->a[87286] = actions(3554);
	v->a[87287] = 1;
	v->a[87288] = anon_sym_DQUOTE;
	v->a[87289] = state(1844);
	v->a[87290] = 1;
	v->a[87291] = aux_sym_string_repeat1;
	v->a[87292] = state(1959);
	v->a[87293] = 4;
	v->a[87294] = sym_arithmetic_expansion;
	v->a[87295] = sym_simple_expansion;
	v->a[87296] = sym_expansion;
	v->a[87297] = sym_command_substitution;
	v->a[87298] = 10;
	v->a[87299] = actions(3);
	small_parse_table_4365(v);
}

/* EOF small_parse_table_872.c */
