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
	v->a[87200] = anon_sym_BQUOTE;
	v->a[87201] = actions(3437);
	v->a[87202] = 1;
	v->a[87203] = sym__bare_dollar;
	v->a[87204] = actions(3535);
	v->a[87205] = 1;
	v->a[87206] = anon_sym_DOLLAR;
	v->a[87207] = actions(3435);
	v->a[87208] = 5;
	v->a[87209] = aux_sym_concatenation_token1;
	v->a[87210] = sym_raw_string;
	v->a[87211] = sym_number;
	v->a[87212] = sym__comment_word;
	v->a[87213] = sym_word;
	v->a[87214] = state(460);
	v->a[87215] = 5;
	v->a[87216] = sym_arithmetic_expansion;
	v->a[87217] = sym_string;
	v->a[87218] = sym_simple_expansion;
	v->a[87219] = sym_expansion;
	small_parse_table_4361(v);
}

void	small_parse_table_4361(t_small_parse_table_array *v)
{
	v->a[87220] = sym_command_substitution;
	v->a[87221] = 10;
	v->a[87222] = actions(3);
	v->a[87223] = 1;
	v->a[87224] = sym_comment;
	v->a[87225] = actions(59);
	v->a[87226] = 1;
	v->a[87227] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87228] = actions(63);
	v->a[87229] = 1;
	v->a[87230] = anon_sym_DQUOTE;
	v->a[87231] = actions(67);
	v->a[87232] = 1;
	v->a[87233] = anon_sym_DOLLAR_LBRACE;
	v->a[87234] = actions(69);
	v->a[87235] = 1;
	v->a[87236] = anon_sym_DOLLAR_LPAREN;
	v->a[87237] = actions(71);
	v->a[87238] = 1;
	v->a[87239] = anon_sym_BQUOTE;
	small_parse_table_4362(v);
}

void	small_parse_table_4362(t_small_parse_table_array *v)
{
	v->a[87240] = actions(3152);
	v->a[87241] = 1;
	v->a[87242] = sym__bare_dollar;
	v->a[87243] = actions(3537);
	v->a[87244] = 1;
	v->a[87245] = anon_sym_DOLLAR;
	v->a[87246] = actions(3150);
	v->a[87247] = 5;
	v->a[87248] = aux_sym_concatenation_token1;
	v->a[87249] = sym_raw_string;
	v->a[87250] = sym_number;
	v->a[87251] = sym__comment_word;
	v->a[87252] = sym_word;
	v->a[87253] = state(326);
	v->a[87254] = 5;
	v->a[87255] = sym_arithmetic_expansion;
	v->a[87256] = sym_string;
	v->a[87257] = sym_simple_expansion;
	v->a[87258] = sym_expansion;
	v->a[87259] = sym_command_substitution;
	small_parse_table_4363(v);
}

void	small_parse_table_4363(t_small_parse_table_array *v)
{
	v->a[87260] = 11;
	v->a[87261] = actions(3);
	v->a[87262] = 1;
	v->a[87263] = sym_comment;
	v->a[87264] = actions(1963);
	v->a[87265] = 1;
	v->a[87266] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87267] = actions(1965);
	v->a[87268] = 1;
	v->a[87269] = anon_sym_DOLLAR;
	v->a[87270] = actions(1967);
	v->a[87271] = 1;
	v->a[87272] = anon_sym_DQUOTE;
	v->a[87273] = actions(1969);
	v->a[87274] = 1;
	v->a[87275] = anon_sym_DOLLAR_LBRACE;
	v->a[87276] = actions(1971);
	v->a[87277] = 1;
	v->a[87278] = anon_sym_DOLLAR_LPAREN;
	v->a[87279] = actions(1973);
	small_parse_table_4364(v);
}

void	small_parse_table_4364(t_small_parse_table_array *v)
{
	v->a[87280] = 1;
	v->a[87281] = anon_sym_BQUOTE;
	v->a[87282] = actions(1975);
	v->a[87283] = 1;
	v->a[87284] = sym_extglob_pattern;
	v->a[87285] = state(2240);
	v->a[87286] = 2;
	v->a[87287] = sym_concatenation;
	v->a[87288] = sym__extglob_blob;
	v->a[87289] = actions(3539);
	v->a[87290] = 3;
	v->a[87291] = sym_raw_string;
	v->a[87292] = sym_number;
	v->a[87293] = sym_word;
	v->a[87294] = state(2142);
	v->a[87295] = 5;
	v->a[87296] = sym_arithmetic_expansion;
	v->a[87297] = sym_string;
	v->a[87298] = sym_simple_expansion;
	v->a[87299] = sym_expansion;
	small_parse_table_4365(v);
}

/* EOF small_parse_table_872.c */
