/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1373.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6865(t_small_parse_table_array *v)
{
	v->a[137300] = actions(7768);
	v->a[137301] = 1;
	v->a[137302] = anon_sym_DOLLAR_LBRACE;
	v->a[137303] = actions(7770);
	v->a[137304] = 1;
	v->a[137305] = anon_sym_DOLLAR_LPAREN;
	v->a[137306] = actions(7772);
	v->a[137307] = 1;
	v->a[137308] = anon_sym_BQUOTE;
	v->a[137309] = actions(7774);
	v->a[137310] = 1;
	v->a[137311] = anon_sym_DOLLAR_BQUOTE;
	v->a[137312] = actions(8013);
	v->a[137313] = 1;
	v->a[137314] = anon_sym_DOLLAR;
	v->a[137315] = state(3061);
	v->a[137316] = 1;
	v->a[137317] = aux_sym_string_repeat1;
	v->a[137318] = state(3218);
	v->a[137319] = 4;
	small_parse_table_6866(v);
}

void	small_parse_table_6866(t_small_parse_table_array *v)
{
	v->a[137320] = sym_arithmetic_expansion;
	v->a[137321] = sym_simple_expansion;
	v->a[137322] = sym_expansion;
	v->a[137323] = sym_command_substitution;
	v->a[137324] = 7;
	v->a[137325] = actions(3);
	v->a[137326] = 1;
	v->a[137327] = sym_comment;
	v->a[137328] = actions(7754);
	v->a[137329] = 1;
	v->a[137330] = aux_sym__simple_variable_name_token1;
	v->a[137331] = actions(7758);
	v->a[137332] = 1;
	v->a[137333] = sym_variable_name;
	v->a[137334] = actions(8015);
	v->a[137335] = 1;
	v->a[137336] = anon_sym_RBRACE3;
	v->a[137337] = state(3660);
	v->a[137338] = 1;
	v->a[137339] = sym__expansion_body;
	small_parse_table_6867(v);
}

void	small_parse_table_6867(t_small_parse_table_array *v)
{
	v->a[137340] = actions(7756);
	v->a[137341] = 2;
	v->a[137342] = anon_sym_0;
	v->a[137343] = anon_sym__;
	v->a[137344] = actions(7750);
	v->a[137345] = 7;
	v->a[137346] = anon_sym_BANG;
	v->a[137347] = anon_sym_DASH;
	v->a[137348] = anon_sym_STAR;
	v->a[137349] = anon_sym_QMARK;
	v->a[137350] = anon_sym_DOLLAR;
	v->a[137351] = anon_sym_POUND;
	v->a[137352] = anon_sym_AT;
	v->a[137353] = 5;
	v->a[137354] = actions(3);
	v->a[137355] = 1;
	v->a[137356] = sym_comment;
	v->a[137357] = actions(7534);
	v->a[137358] = 1;
	v->a[137359] = sym_string_content;
	small_parse_table_6868(v);
}

void	small_parse_table_6868(t_small_parse_table_array *v)
{
	v->a[137360] = actions(7538);
	v->a[137361] = 1;
	v->a[137362] = sym_variable_name;
	v->a[137363] = actions(7536);
	v->a[137364] = 2;
	v->a[137365] = aux_sym__simple_variable_name_token1;
	v->a[137366] = aux_sym__multiline_variable_name_token1;
	v->a[137367] = actions(7530);
	v->a[137368] = 9;
	v->a[137369] = anon_sym_BANG;
	v->a[137370] = anon_sym_DASH;
	v->a[137371] = anon_sym_STAR;
	v->a[137372] = anon_sym_QMARK;
	v->a[137373] = anon_sym_DOLLAR;
	v->a[137374] = anon_sym_POUND;
	v->a[137375] = anon_sym_AT;
	v->a[137376] = anon_sym_0;
	v->a[137377] = anon_sym__;
	v->a[137378] = 7;
	v->a[137379] = actions(3);
	small_parse_table_6869(v);
}

void	small_parse_table_6869(t_small_parse_table_array *v)
{
	v->a[137380] = 1;
	v->a[137381] = sym_comment;
	v->a[137382] = actions(7754);
	v->a[137383] = 1;
	v->a[137384] = aux_sym__simple_variable_name_token1;
	v->a[137385] = actions(7758);
	v->a[137386] = 1;
	v->a[137387] = sym_variable_name;
	v->a[137388] = actions(8017);
	v->a[137389] = 1;
	v->a[137390] = anon_sym_RBRACE3;
	v->a[137391] = state(3680);
	v->a[137392] = 1;
	v->a[137393] = sym__expansion_body;
	v->a[137394] = actions(7756);
	v->a[137395] = 2;
	v->a[137396] = anon_sym_0;
	v->a[137397] = anon_sym__;
	v->a[137398] = actions(7750);
	v->a[137399] = 7;
	small_parse_table_6870(v);
}

/* EOF small_parse_table_1373.c */
