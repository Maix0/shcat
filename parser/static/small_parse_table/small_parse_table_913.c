/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_913.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4565(t_small_parse_table_array *v)
{
	v->a[91300] = sym_arithmetic_expansion;
	v->a[91301] = sym_simple_expansion;
	v->a[91302] = sym_expansion;
	v->a[91303] = sym_command_substitution;
	v->a[91304] = 4;
	v->a[91305] = actions(3);
	v->a[91306] = 1;
	v->a[91307] = sym_comment;
	v->a[91308] = actions(3758);
	v->a[91309] = 1;
	v->a[91310] = anon_sym_esac;
	v->a[91311] = actions(3760);
	v->a[91312] = 1;
	v->a[91313] = sym_extglob_pattern;
	v->a[91314] = actions(3756);
	v->a[91315] = 10;
	v->a[91316] = anon_sym_LPAREN;
	v->a[91317] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91318] = anon_sym_DOLLAR;
	v->a[91319] = anon_sym_DQUOTE;
	small_parse_table_4566(v);
}

void	small_parse_table_4566(t_small_parse_table_array *v)
{
	v->a[91320] = sym_raw_string;
	v->a[91321] = sym_number;
	v->a[91322] = anon_sym_DOLLAR_LBRACE;
	v->a[91323] = anon_sym_DOLLAR_LPAREN;
	v->a[91324] = anon_sym_BQUOTE;
	v->a[91325] = sym_word;
	v->a[91326] = 10;
	v->a[91327] = actions(3);
	v->a[91328] = 1;
	v->a[91329] = sym_comment;
	v->a[91330] = actions(3414);
	v->a[91331] = 1;
	v->a[91332] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91333] = actions(3420);
	v->a[91334] = 1;
	v->a[91335] = sym_string_content;
	v->a[91336] = actions(3422);
	v->a[91337] = 1;
	v->a[91338] = anon_sym_DOLLAR_LBRACE;
	v->a[91339] = actions(3424);
	small_parse_table_4567(v);
}

void	small_parse_table_4567(t_small_parse_table_array *v)
{
	v->a[91340] = 1;
	v->a[91341] = anon_sym_DOLLAR_LPAREN;
	v->a[91342] = actions(3426);
	v->a[91343] = 1;
	v->a[91344] = anon_sym_BQUOTE;
	v->a[91345] = actions(3762);
	v->a[91346] = 1;
	v->a[91347] = anon_sym_DOLLAR;
	v->a[91348] = actions(3764);
	v->a[91349] = 1;
	v->a[91350] = anon_sym_DQUOTE;
	v->a[91351] = state(1896);
	v->a[91352] = 1;
	v->a[91353] = aux_sym_string_repeat1;
	v->a[91354] = state(1963);
	v->a[91355] = 4;
	v->a[91356] = sym_arithmetic_expansion;
	v->a[91357] = sym_simple_expansion;
	v->a[91358] = sym_expansion;
	v->a[91359] = sym_command_substitution;
	small_parse_table_4568(v);
}

void	small_parse_table_4568(t_small_parse_table_array *v)
{
	v->a[91360] = 4;
	v->a[91361] = actions(3);
	v->a[91362] = 1;
	v->a[91363] = sym_comment;
	v->a[91364] = actions(453);
	v->a[91365] = 1;
	v->a[91366] = sym_variable_name;
	v->a[91367] = actions(451);
	v->a[91368] = 2;
	v->a[91369] = aux_sym__simple_variable_name_token1;
	v->a[91370] = aux_sym__multiline_variable_name_token1;
	v->a[91371] = actions(449);
	v->a[91372] = 9;
	v->a[91373] = anon_sym_BANG;
	v->a[91374] = anon_sym_DASH;
	v->a[91375] = anon_sym_STAR;
	v->a[91376] = anon_sym_QMARK;
	v->a[91377] = anon_sym_DOLLAR;
	v->a[91378] = anon_sym_POUND;
	v->a[91379] = anon_sym_AT;
	small_parse_table_4569(v);
}

void	small_parse_table_4569(t_small_parse_table_array *v)
{
	v->a[91380] = anon_sym_0;
	v->a[91381] = anon_sym__;
	v->a[91382] = 4;
	v->a[91383] = actions(3);
	v->a[91384] = 1;
	v->a[91385] = sym_comment;
	v->a[91386] = actions(411);
	v->a[91387] = 1;
	v->a[91388] = sym_variable_name;
	v->a[91389] = actions(409);
	v->a[91390] = 2;
	v->a[91391] = aux_sym__simple_variable_name_token1;
	v->a[91392] = aux_sym__multiline_variable_name_token1;
	v->a[91393] = actions(407);
	v->a[91394] = 9;
	v->a[91395] = anon_sym_BANG;
	v->a[91396] = anon_sym_DASH;
	v->a[91397] = anon_sym_STAR;
	v->a[91398] = anon_sym_QMARK;
	v->a[91399] = anon_sym_DOLLAR;
	small_parse_table_4570(v);
}

/* EOF small_parse_table_913.c */
