/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_773.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3865(t_small_parse_table_array *v)
{
	v->a[77300] = anon_sym_DQUOTE;
	v->a[77301] = state(1647);
	v->a[77302] = 1;
	v->a[77303] = aux_sym_string_repeat1;
	v->a[77304] = state(1748);
	v->a[77305] = 4;
	v->a[77306] = sym_arithmetic_expansion;
	v->a[77307] = sym_simple_expansion;
	v->a[77308] = sym_expansion;
	v->a[77309] = sym_command_substitution;
	v->a[77310] = 4;
	v->a[77311] = actions(3);
	v->a[77312] = 1;
	v->a[77313] = sym_comment;
	v->a[77314] = actions(375);
	v->a[77315] = 1;
	v->a[77316] = sym_variable_name;
	v->a[77317] = actions(373);
	v->a[77318] = 2;
	v->a[77319] = aux_sym__simple_variable_name_token1;
	small_parse_table_3866(v);
}

void	small_parse_table_3866(t_small_parse_table_array *v)
{
	v->a[77320] = aux_sym__multiline_variable_name_token1;
	v->a[77321] = actions(371);
	v->a[77322] = 9;
	v->a[77323] = anon_sym_BANG;
	v->a[77324] = anon_sym_DASH;
	v->a[77325] = anon_sym_STAR;
	v->a[77326] = anon_sym_QMARK;
	v->a[77327] = anon_sym_DOLLAR;
	v->a[77328] = anon_sym_POUND;
	v->a[77329] = anon_sym_AT;
	v->a[77330] = anon_sym_0;
	v->a[77331] = anon_sym__;
	v->a[77332] = 4;
	v->a[77333] = actions(3);
	v->a[77334] = 1;
	v->a[77335] = sym_comment;
	v->a[77336] = actions(387);
	v->a[77337] = 1;
	v->a[77338] = sym_variable_name;
	v->a[77339] = actions(385);
	small_parse_table_3867(v);
}

void	small_parse_table_3867(t_small_parse_table_array *v)
{
	v->a[77340] = 2;
	v->a[77341] = aux_sym__simple_variable_name_token1;
	v->a[77342] = aux_sym__multiline_variable_name_token1;
	v->a[77343] = actions(383);
	v->a[77344] = 9;
	v->a[77345] = anon_sym_BANG;
	v->a[77346] = anon_sym_DASH;
	v->a[77347] = anon_sym_STAR;
	v->a[77348] = anon_sym_QMARK;
	v->a[77349] = anon_sym_DOLLAR;
	v->a[77350] = anon_sym_POUND;
	v->a[77351] = anon_sym_AT;
	v->a[77352] = anon_sym_0;
	v->a[77353] = anon_sym__;
	v->a[77354] = 10;
	v->a[77355] = actions(3);
	v->a[77356] = 1;
	v->a[77357] = sym_comment;
	v->a[77358] = actions(3104);
	v->a[77359] = 1;
	small_parse_table_3868(v);
}

void	small_parse_table_3868(t_small_parse_table_array *v)
{
	v->a[77360] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77361] = actions(3110);
	v->a[77362] = 1;
	v->a[77363] = sym_string_content;
	v->a[77364] = actions(3112);
	v->a[77365] = 1;
	v->a[77366] = anon_sym_DOLLAR_LBRACE;
	v->a[77367] = actions(3114);
	v->a[77368] = 1;
	v->a[77369] = anon_sym_DOLLAR_LPAREN;
	v->a[77370] = actions(3116);
	v->a[77371] = 1;
	v->a[77372] = anon_sym_BQUOTE;
	v->a[77373] = actions(3224);
	v->a[77374] = 1;
	v->a[77375] = anon_sym_DOLLAR;
	v->a[77376] = actions(3226);
	v->a[77377] = 1;
	v->a[77378] = anon_sym_DQUOTE;
	v->a[77379] = state(1661);
	small_parse_table_3869(v);
}

void	small_parse_table_3869(t_small_parse_table_array *v)
{
	v->a[77380] = 1;
	v->a[77381] = aux_sym_string_repeat1;
	v->a[77382] = state(1748);
	v->a[77383] = 4;
	v->a[77384] = sym_arithmetic_expansion;
	v->a[77385] = sym_simple_expansion;
	v->a[77386] = sym_expansion;
	v->a[77387] = sym_command_substitution;
	v->a[77388] = 10;
	v->a[77389] = actions(3);
	v->a[77390] = 1;
	v->a[77391] = sym_comment;
	v->a[77392] = actions(3104);
	v->a[77393] = 1;
	v->a[77394] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77395] = actions(3110);
	v->a[77396] = 1;
	v->a[77397] = sym_string_content;
	v->a[77398] = actions(3112);
	v->a[77399] = 1;
	small_parse_table_3870(v);
}

/* EOF small_parse_table_773.c */
