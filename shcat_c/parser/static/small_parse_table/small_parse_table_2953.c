/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2953.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14765(t_small_parse_table_array *v)
{
	v->a[295300] = actions(13074);
	v->a[295301] = 1;
	v->a[295302] = anon_sym_DOLLAR_BQUOTE;
	v->a[295303] = actions(13184);
	v->a[295304] = 1;
	v->a[295305] = anon_sym_DOLLAR;
	v->a[295306] = actions(13186);
	v->a[295307] = 1;
	v->a[295308] = anon_sym_DQUOTE;
	v->a[295309] = state(5740);
	v->a[295310] = 1;
	v->a[295311] = aux_sym_string_repeat1;
	v->a[295312] = actions(13058);
	v->a[295313] = 2;
	v->a[295314] = anon_sym_LPAREN_LPAREN;
	v->a[295315] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[295316] = state(6127);
	v->a[295317] = 4;
	v->a[295318] = sym_arithmetic_expansion;
	v->a[295319] = sym_simple_expansion;
	small_parse_table_14766(v);
}

void	small_parse_table_14766(t_small_parse_table_array *v)
{
	v->a[295320] = sym_expansion;
	v->a[295321] = sym_command_substitution;
	v->a[295322] = 12;
	v->a[295323] = actions(3);
	v->a[295324] = 1;
	v->a[295325] = sym_comment;
	v->a[295326] = actions(13060);
	v->a[295327] = 1;
	v->a[295328] = anon_sym_DOLLAR_LBRACK;
	v->a[295329] = actions(13066);
	v->a[295330] = 1;
	v->a[295331] = sym_string_content;
	v->a[295332] = actions(13068);
	v->a[295333] = 1;
	v->a[295334] = anon_sym_DOLLAR_LBRACE;
	v->a[295335] = actions(13070);
	v->a[295336] = 1;
	v->a[295337] = anon_sym_DOLLAR_LPAREN;
	v->a[295338] = actions(13072);
	v->a[295339] = 1;
	small_parse_table_14767(v);
}

void	small_parse_table_14767(t_small_parse_table_array *v)
{
	v->a[295340] = anon_sym_BQUOTE;
	v->a[295341] = actions(13074);
	v->a[295342] = 1;
	v->a[295343] = anon_sym_DOLLAR_BQUOTE;
	v->a[295344] = actions(13188);
	v->a[295345] = 1;
	v->a[295346] = anon_sym_DOLLAR;
	v->a[295347] = actions(13190);
	v->a[295348] = 1;
	v->a[295349] = anon_sym_DQUOTE;
	v->a[295350] = state(5768);
	v->a[295351] = 1;
	v->a[295352] = aux_sym_string_repeat1;
	v->a[295353] = actions(13058);
	v->a[295354] = 2;
	v->a[295355] = anon_sym_LPAREN_LPAREN;
	v->a[295356] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[295357] = state(6127);
	v->a[295358] = 4;
	v->a[295359] = sym_arithmetic_expansion;
	small_parse_table_14768(v);
}

void	small_parse_table_14768(t_small_parse_table_array *v)
{
	v->a[295360] = sym_simple_expansion;
	v->a[295361] = sym_expansion;
	v->a[295362] = sym_command_substitution;
	v->a[295363] = 12;
	v->a[295364] = actions(3);
	v->a[295365] = 1;
	v->a[295366] = sym_comment;
	v->a[295367] = actions(13060);
	v->a[295368] = 1;
	v->a[295369] = anon_sym_DOLLAR_LBRACK;
	v->a[295370] = actions(13066);
	v->a[295371] = 1;
	v->a[295372] = sym_string_content;
	v->a[295373] = actions(13068);
	v->a[295374] = 1;
	v->a[295375] = anon_sym_DOLLAR_LBRACE;
	v->a[295376] = actions(13070);
	v->a[295377] = 1;
	v->a[295378] = anon_sym_DOLLAR_LPAREN;
	v->a[295379] = actions(13072);
	small_parse_table_14769(v);
}

void	small_parse_table_14769(t_small_parse_table_array *v)
{
	v->a[295380] = 1;
	v->a[295381] = anon_sym_BQUOTE;
	v->a[295382] = actions(13074);
	v->a[295383] = 1;
	v->a[295384] = anon_sym_DOLLAR_BQUOTE;
	v->a[295385] = actions(13192);
	v->a[295386] = 1;
	v->a[295387] = anon_sym_DOLLAR;
	v->a[295388] = actions(13194);
	v->a[295389] = 1;
	v->a[295390] = anon_sym_DQUOTE;
	v->a[295391] = state(5768);
	v->a[295392] = 1;
	v->a[295393] = aux_sym_string_repeat1;
	v->a[295394] = actions(13058);
	v->a[295395] = 2;
	v->a[295396] = anon_sym_LPAREN_LPAREN;
	v->a[295397] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[295398] = state(6127);
	v->a[295399] = 4;
	small_parse_table_14770(v);
}

/* EOF small_parse_table_2953.c */
