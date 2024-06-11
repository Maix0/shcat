/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_843.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4215(t_small_parse_table_array *v)
{
	v->a[84300] = sym_expansion;
	v->a[84301] = sym_command_substitution;
	v->a[84302] = 10;
	v->a[84303] = actions(3);
	v->a[84304] = 1;
	v->a[84305] = sym_comment;
	v->a[84306] = actions(459);
	v->a[84307] = 1;
	v->a[84308] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84309] = actions(461);
	v->a[84310] = 1;
	v->a[84311] = anon_sym_DOLLAR;
	v->a[84312] = actions(463);
	v->a[84313] = 1;
	v->a[84314] = anon_sym_DQUOTE;
	v->a[84315] = actions(465);
	v->a[84316] = 1;
	v->a[84317] = anon_sym_DOLLAR_LBRACE;
	v->a[84318] = actions(467);
	v->a[84319] = 1;
	small_parse_table_4216(v);
}

void	small_parse_table_4216(t_small_parse_table_array *v)
{
	v->a[84320] = anon_sym_DOLLAR_LPAREN;
	v->a[84321] = actions(469);
	v->a[84322] = 1;
	v->a[84323] = anon_sym_BQUOTE;
	v->a[84324] = actions(3260);
	v->a[84325] = 1;
	v->a[84326] = sym__bare_dollar;
	v->a[84327] = actions(3258);
	v->a[84328] = 5;
	v->a[84329] = aux_sym_concatenation_token1;
	v->a[84330] = sym_raw_string;
	v->a[84331] = sym_number;
	v->a[84332] = sym__comment_word;
	v->a[84333] = sym_word;
	v->a[84334] = state(446);
	v->a[84335] = 5;
	v->a[84336] = sym_arithmetic_expansion;
	v->a[84337] = sym_string;
	v->a[84338] = sym_simple_expansion;
	v->a[84339] = sym_expansion;
	small_parse_table_4217(v);
}

void	small_parse_table_4217(t_small_parse_table_array *v)
{
	v->a[84340] = sym_command_substitution;
	v->a[84341] = 11;
	v->a[84342] = actions(3);
	v->a[84343] = 1;
	v->a[84344] = sym_comment;
	v->a[84345] = actions(1963);
	v->a[84346] = 1;
	v->a[84347] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84348] = actions(1965);
	v->a[84349] = 1;
	v->a[84350] = anon_sym_DOLLAR;
	v->a[84351] = actions(1967);
	v->a[84352] = 1;
	v->a[84353] = anon_sym_DQUOTE;
	v->a[84354] = actions(1969);
	v->a[84355] = 1;
	v->a[84356] = anon_sym_DOLLAR_LBRACE;
	v->a[84357] = actions(1971);
	v->a[84358] = 1;
	v->a[84359] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4218(v);
}

void	small_parse_table_4218(t_small_parse_table_array *v)
{
	v->a[84360] = actions(1973);
	v->a[84361] = 1;
	v->a[84362] = anon_sym_BQUOTE;
	v->a[84363] = actions(1975);
	v->a[84364] = 1;
	v->a[84365] = sym_extglob_pattern;
	v->a[84366] = state(2234);
	v->a[84367] = 2;
	v->a[84368] = sym_concatenation;
	v->a[84369] = sym__extglob_blob;
	v->a[84370] = actions(3262);
	v->a[84371] = 3;
	v->a[84372] = sym_raw_string;
	v->a[84373] = sym_number;
	v->a[84374] = sym_word;
	v->a[84375] = state(2153);
	v->a[84376] = 5;
	v->a[84377] = sym_arithmetic_expansion;
	v->a[84378] = sym_string;
	v->a[84379] = sym_simple_expansion;
	small_parse_table_4219(v);
}

void	small_parse_table_4219(t_small_parse_table_array *v)
{
	v->a[84380] = sym_expansion;
	v->a[84381] = sym_command_substitution;
	v->a[84382] = 10;
	v->a[84383] = actions(3);
	v->a[84384] = 1;
	v->a[84385] = sym_comment;
	v->a[84386] = actions(3266);
	v->a[84387] = 1;
	v->a[84388] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84389] = actions(3268);
	v->a[84390] = 1;
	v->a[84391] = anon_sym_DOLLAR;
	v->a[84392] = actions(3270);
	v->a[84393] = 1;
	v->a[84394] = anon_sym_DQUOTE;
	v->a[84395] = actions(3272);
	v->a[84396] = 1;
	v->a[84397] = anon_sym_DOLLAR_LBRACE;
	v->a[84398] = actions(3274);
	v->a[84399] = 1;
	small_parse_table_4220(v);
}

/* EOF small_parse_table_843.c */
