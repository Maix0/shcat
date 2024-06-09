/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_893.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4465(t_small_parse_table_array *v)
{
	v->a[89300] = 1;
	v->a[89301] = anon_sym_DOLLAR_LBRACE;
	v->a[89302] = actions(3720);
	v->a[89303] = 1;
	v->a[89304] = anon_sym_DOLLAR_LPAREN;
	v->a[89305] = actions(3722);
	v->a[89306] = 1;
	v->a[89307] = anon_sym_BQUOTE;
	v->a[89308] = actions(3860);
	v->a[89309] = 1;
	v->a[89310] = anon_sym_DOLLAR;
	v->a[89311] = actions(3862);
	v->a[89312] = 1;
	v->a[89313] = anon_sym_DQUOTE;
	v->a[89314] = state(1779);
	v->a[89315] = 1;
	v->a[89316] = aux_sym_string_repeat1;
	v->a[89317] = state(1869);
	v->a[89318] = 4;
	v->a[89319] = sym_arithmetic_expansion;
	small_parse_table_4466(v);
}

void	small_parse_table_4466(t_small_parse_table_array *v)
{
	v->a[89320] = sym_simple_expansion;
	v->a[89321] = sym_expansion;
	v->a[89322] = sym_command_substitution;
	v->a[89323] = 4;
	v->a[89324] = actions(3);
	v->a[89325] = 1;
	v->a[89326] = sym_comment;
	v->a[89327] = actions(523);
	v->a[89328] = 1;
	v->a[89329] = sym_variable_name;
	v->a[89330] = actions(521);
	v->a[89331] = 2;
	v->a[89332] = aux_sym__simple_variable_name_token1;
	v->a[89333] = aux_sym__multiline_variable_name_token1;
	v->a[89334] = actions(519);
	v->a[89335] = 9;
	v->a[89336] = anon_sym_BANG;
	v->a[89337] = anon_sym_DASH;
	v->a[89338] = anon_sym_STAR;
	v->a[89339] = anon_sym_QMARK;
	small_parse_table_4467(v);
}

void	small_parse_table_4467(t_small_parse_table_array *v)
{
	v->a[89340] = anon_sym_DOLLAR;
	v->a[89341] = anon_sym_POUND;
	v->a[89342] = anon_sym_AT;
	v->a[89343] = anon_sym_0;
	v->a[89344] = anon_sym__;
	v->a[89345] = 10;
	v->a[89346] = actions(3);
	v->a[89347] = 1;
	v->a[89348] = sym_comment;
	v->a[89349] = actions(3712);
	v->a[89350] = 1;
	v->a[89351] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89352] = actions(3716);
	v->a[89353] = 1;
	v->a[89354] = sym_string_content;
	v->a[89355] = actions(3718);
	v->a[89356] = 1;
	v->a[89357] = anon_sym_DOLLAR_LBRACE;
	v->a[89358] = actions(3720);
	v->a[89359] = 1;
	small_parse_table_4468(v);
}

void	small_parse_table_4468(t_small_parse_table_array *v)
{
	v->a[89360] = anon_sym_DOLLAR_LPAREN;
	v->a[89361] = actions(3722);
	v->a[89362] = 1;
	v->a[89363] = anon_sym_BQUOTE;
	v->a[89364] = actions(3864);
	v->a[89365] = 1;
	v->a[89366] = anon_sym_DOLLAR;
	v->a[89367] = actions(3866);
	v->a[89368] = 1;
	v->a[89369] = anon_sym_DQUOTE;
	v->a[89370] = state(1787);
	v->a[89371] = 1;
	v->a[89372] = aux_sym_string_repeat1;
	v->a[89373] = state(1869);
	v->a[89374] = 4;
	v->a[89375] = sym_arithmetic_expansion;
	v->a[89376] = sym_simple_expansion;
	v->a[89377] = sym_expansion;
	v->a[89378] = sym_command_substitution;
	v->a[89379] = 4;
	small_parse_table_4469(v);
}

void	small_parse_table_4469(t_small_parse_table_array *v)
{
	v->a[89380] = actions(3);
	v->a[89381] = 1;
	v->a[89382] = sym_comment;
	v->a[89383] = actions(451);
	v->a[89384] = 1;
	v->a[89385] = sym_variable_name;
	v->a[89386] = actions(449);
	v->a[89387] = 2;
	v->a[89388] = aux_sym__simple_variable_name_token1;
	v->a[89389] = aux_sym__multiline_variable_name_token1;
	v->a[89390] = actions(447);
	v->a[89391] = 9;
	v->a[89392] = anon_sym_BANG;
	v->a[89393] = anon_sym_DASH;
	v->a[89394] = anon_sym_STAR;
	v->a[89395] = anon_sym_QMARK;
	v->a[89396] = anon_sym_DOLLAR;
	v->a[89397] = anon_sym_POUND;
	v->a[89398] = anon_sym_AT;
	v->a[89399] = anon_sym_0;
	small_parse_table_4470(v);
}

/* EOF small_parse_table_893.c */
