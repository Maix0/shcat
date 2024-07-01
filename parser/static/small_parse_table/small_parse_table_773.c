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
	v->a[77300] = actions(3);
	v->a[77301] = 1;
	v->a[77302] = sym_comment;
	v->a[77303] = actions(2971);
	v->a[77304] = 1;
	v->a[77305] = sym_variable_name;
	v->a[77306] = actions(2969);
	v->a[77307] = 2;
	v->a[77308] = aux_sym__simple_variable_name_token1;
	v->a[77309] = aux_sym__multiline_variable_name_token1;
	v->a[77310] = actions(2967);
	v->a[77311] = 9;
	v->a[77312] = anon_sym_BANG;
	v->a[77313] = anon_sym_DASH;
	v->a[77314] = anon_sym_STAR;
	v->a[77315] = anon_sym_QMARK;
	v->a[77316] = anon_sym_DOLLAR;
	v->a[77317] = anon_sym_POUND;
	v->a[77318] = anon_sym_AT;
	v->a[77319] = anon_sym_0;
	small_parse_table_3866(v);
}

void	small_parse_table_3866(t_small_parse_table_array *v)
{
	v->a[77320] = anon_sym__;
	v->a[77321] = 10;
	v->a[77322] = actions(3);
	v->a[77323] = 1;
	v->a[77324] = sym_comment;
	v->a[77325] = actions(3071);
	v->a[77326] = 1;
	v->a[77327] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77328] = actions(3077);
	v->a[77329] = 1;
	v->a[77330] = sym_string_content;
	v->a[77331] = actions(3079);
	v->a[77332] = 1;
	v->a[77333] = anon_sym_DOLLAR_LBRACE;
	v->a[77334] = actions(3081);
	v->a[77335] = 1;
	v->a[77336] = anon_sym_DOLLAR_LPAREN;
	v->a[77337] = actions(3083);
	v->a[77338] = 1;
	v->a[77339] = anon_sym_BQUOTE;
	small_parse_table_3867(v);
}

void	small_parse_table_3867(t_small_parse_table_array *v)
{
	v->a[77340] = actions(3203);
	v->a[77341] = 1;
	v->a[77342] = anon_sym_DOLLAR;
	v->a[77343] = actions(3205);
	v->a[77344] = 1;
	v->a[77345] = anon_sym_DQUOTE;
	v->a[77346] = state(1653);
	v->a[77347] = 1;
	v->a[77348] = aux_sym_string_repeat1;
	v->a[77349] = state(1739);
	v->a[77350] = 4;
	v->a[77351] = sym_arithmetic_expansion;
	v->a[77352] = sym_simple_expansion;
	v->a[77353] = sym_expansion;
	v->a[77354] = sym_command_substitution;
	v->a[77355] = 10;
	v->a[77356] = actions(3);
	v->a[77357] = 1;
	v->a[77358] = sym_comment;
	v->a[77359] = actions(3071);
	small_parse_table_3868(v);
}

void	small_parse_table_3868(t_small_parse_table_array *v)
{
	v->a[77360] = 1;
	v->a[77361] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77362] = actions(3077);
	v->a[77363] = 1;
	v->a[77364] = sym_string_content;
	v->a[77365] = actions(3079);
	v->a[77366] = 1;
	v->a[77367] = anon_sym_DOLLAR_LBRACE;
	v->a[77368] = actions(3081);
	v->a[77369] = 1;
	v->a[77370] = anon_sym_DOLLAR_LPAREN;
	v->a[77371] = actions(3083);
	v->a[77372] = 1;
	v->a[77373] = anon_sym_BQUOTE;
	v->a[77374] = actions(3207);
	v->a[77375] = 1;
	v->a[77376] = anon_sym_DOLLAR;
	v->a[77377] = actions(3209);
	v->a[77378] = 1;
	v->a[77379] = anon_sym_DQUOTE;
	small_parse_table_3869(v);
}

void	small_parse_table_3869(t_small_parse_table_array *v)
{
	v->a[77380] = state(1681);
	v->a[77381] = 1;
	v->a[77382] = aux_sym_string_repeat1;
	v->a[77383] = state(1739);
	v->a[77384] = 4;
	v->a[77385] = sym_arithmetic_expansion;
	v->a[77386] = sym_simple_expansion;
	v->a[77387] = sym_expansion;
	v->a[77388] = sym_command_substitution;
	v->a[77389] = 10;
	v->a[77390] = actions(3);
	v->a[77391] = 1;
	v->a[77392] = sym_comment;
	v->a[77393] = actions(3071);
	v->a[77394] = 1;
	v->a[77395] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77396] = actions(3077);
	v->a[77397] = 1;
	v->a[77398] = sym_string_content;
	v->a[77399] = actions(3079);
	small_parse_table_3870(v);
}

/* EOF small_parse_table_773.c */
