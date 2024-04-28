/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2963.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14815(t_small_parse_table_array *v)
{
	v->a[296300] = actions(13066);
	v->a[296301] = 1;
	v->a[296302] = sym_string_content;
	v->a[296303] = actions(13068);
	v->a[296304] = 1;
	v->a[296305] = anon_sym_DOLLAR_LBRACE;
	v->a[296306] = actions(13070);
	v->a[296307] = 1;
	v->a[296308] = anon_sym_DOLLAR_LPAREN;
	v->a[296309] = actions(13072);
	v->a[296310] = 1;
	v->a[296311] = anon_sym_BQUOTE;
	v->a[296312] = actions(13074);
	v->a[296313] = 1;
	v->a[296314] = anon_sym_DOLLAR_BQUOTE;
	v->a[296315] = actions(13276);
	v->a[296316] = 1;
	v->a[296317] = anon_sym_DOLLAR;
	v->a[296318] = actions(13278);
	v->a[296319] = 1;
	small_parse_table_14816(v);
}

void	small_parse_table_14816(t_small_parse_table_array *v)
{
	v->a[296320] = anon_sym_DQUOTE;
	v->a[296321] = state(5768);
	v->a[296322] = 1;
	v->a[296323] = aux_sym_string_repeat1;
	v->a[296324] = actions(13058);
	v->a[296325] = 2;
	v->a[296326] = anon_sym_LPAREN_LPAREN;
	v->a[296327] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[296328] = state(6127);
	v->a[296329] = 4;
	v->a[296330] = sym_arithmetic_expansion;
	v->a[296331] = sym_simple_expansion;
	v->a[296332] = sym_expansion;
	v->a[296333] = sym_command_substitution;
	v->a[296334] = 12;
	v->a[296335] = actions(3);
	v->a[296336] = 1;
	v->a[296337] = sym_comment;
	v->a[296338] = actions(13060);
	v->a[296339] = 1;
	small_parse_table_14817(v);
}

void	small_parse_table_14817(t_small_parse_table_array *v)
{
	v->a[296340] = anon_sym_DOLLAR_LBRACK;
	v->a[296341] = actions(13066);
	v->a[296342] = 1;
	v->a[296343] = sym_string_content;
	v->a[296344] = actions(13068);
	v->a[296345] = 1;
	v->a[296346] = anon_sym_DOLLAR_LBRACE;
	v->a[296347] = actions(13070);
	v->a[296348] = 1;
	v->a[296349] = anon_sym_DOLLAR_LPAREN;
	v->a[296350] = actions(13072);
	v->a[296351] = 1;
	v->a[296352] = anon_sym_BQUOTE;
	v->a[296353] = actions(13074);
	v->a[296354] = 1;
	v->a[296355] = anon_sym_DOLLAR_BQUOTE;
	v->a[296356] = actions(13280);
	v->a[296357] = 1;
	v->a[296358] = anon_sym_DOLLAR;
	v->a[296359] = actions(13282);
	small_parse_table_14818(v);
}

void	small_parse_table_14818(t_small_parse_table_array *v)
{
	v->a[296360] = 1;
	v->a[296361] = anon_sym_DQUOTE;
	v->a[296362] = state(5715);
	v->a[296363] = 1;
	v->a[296364] = aux_sym_string_repeat1;
	v->a[296365] = actions(13058);
	v->a[296366] = 2;
	v->a[296367] = anon_sym_LPAREN_LPAREN;
	v->a[296368] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[296369] = state(6127);
	v->a[296370] = 4;
	v->a[296371] = sym_arithmetic_expansion;
	v->a[296372] = sym_simple_expansion;
	v->a[296373] = sym_expansion;
	v->a[296374] = sym_command_substitution;
	v->a[296375] = 12;
	v->a[296376] = actions(3);
	v->a[296377] = 1;
	v->a[296378] = sym_comment;
	v->a[296379] = actions(13060);
	small_parse_table_14819(v);
}

void	small_parse_table_14819(t_small_parse_table_array *v)
{
	v->a[296380] = 1;
	v->a[296381] = anon_sym_DOLLAR_LBRACK;
	v->a[296382] = actions(13066);
	v->a[296383] = 1;
	v->a[296384] = sym_string_content;
	v->a[296385] = actions(13068);
	v->a[296386] = 1;
	v->a[296387] = anon_sym_DOLLAR_LBRACE;
	v->a[296388] = actions(13070);
	v->a[296389] = 1;
	v->a[296390] = anon_sym_DOLLAR_LPAREN;
	v->a[296391] = actions(13072);
	v->a[296392] = 1;
	v->a[296393] = anon_sym_BQUOTE;
	v->a[296394] = actions(13074);
	v->a[296395] = 1;
	v->a[296396] = anon_sym_DOLLAR_BQUOTE;
	v->a[296397] = actions(13284);
	v->a[296398] = 1;
	v->a[296399] = anon_sym_DOLLAR;
	small_parse_table_14820(v);
}

/* EOF small_parse_table_2963.c */
