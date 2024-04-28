/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2993.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14965(t_small_parse_table_array *v)
{
	v->a[299300] = 2;
	v->a[299301] = anon_sym_LPAREN_LPAREN;
	v->a[299302] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[299303] = state(6127);
	v->a[299304] = 4;
	v->a[299305] = sym_arithmetic_expansion;
	v->a[299306] = sym_simple_expansion;
	v->a[299307] = sym_expansion;
	v->a[299308] = sym_command_substitution;
	v->a[299309] = 12;
	v->a[299310] = actions(3);
	v->a[299311] = 1;
	v->a[299312] = sym_comment;
	v->a[299313] = actions(13060);
	v->a[299314] = 1;
	v->a[299315] = anon_sym_DOLLAR_LBRACK;
	v->a[299316] = actions(13066);
	v->a[299317] = 1;
	v->a[299318] = sym_string_content;
	v->a[299319] = actions(13068);
	small_parse_table_14966(v);
}

void	small_parse_table_14966(t_small_parse_table_array *v)
{
	v->a[299320] = 1;
	v->a[299321] = anon_sym_DOLLAR_LBRACE;
	v->a[299322] = actions(13070);
	v->a[299323] = 1;
	v->a[299324] = anon_sym_DOLLAR_LPAREN;
	v->a[299325] = actions(13072);
	v->a[299326] = 1;
	v->a[299327] = anon_sym_BQUOTE;
	v->a[299328] = actions(13074);
	v->a[299329] = 1;
	v->a[299330] = anon_sym_DOLLAR_BQUOTE;
	v->a[299331] = actions(13590);
	v->a[299332] = 1;
	v->a[299333] = anon_sym_DOLLAR;
	v->a[299334] = actions(13592);
	v->a[299335] = 1;
	v->a[299336] = anon_sym_DQUOTE;
	v->a[299337] = state(5828);
	v->a[299338] = 1;
	v->a[299339] = aux_sym_string_repeat1;
	small_parse_table_14967(v);
}

void	small_parse_table_14967(t_small_parse_table_array *v)
{
	v->a[299340] = actions(13058);
	v->a[299341] = 2;
	v->a[299342] = anon_sym_LPAREN_LPAREN;
	v->a[299343] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[299344] = state(6127);
	v->a[299345] = 4;
	v->a[299346] = sym_arithmetic_expansion;
	v->a[299347] = sym_simple_expansion;
	v->a[299348] = sym_expansion;
	v->a[299349] = sym_command_substitution;
	v->a[299350] = 12;
	v->a[299351] = actions(3);
	v->a[299352] = 1;
	v->a[299353] = sym_comment;
	v->a[299354] = actions(13060);
	v->a[299355] = 1;
	v->a[299356] = anon_sym_DOLLAR_LBRACK;
	v->a[299357] = actions(13066);
	v->a[299358] = 1;
	v->a[299359] = sym_string_content;
	small_parse_table_14968(v);
}

void	small_parse_table_14968(t_small_parse_table_array *v)
{
	v->a[299360] = actions(13068);
	v->a[299361] = 1;
	v->a[299362] = anon_sym_DOLLAR_LBRACE;
	v->a[299363] = actions(13070);
	v->a[299364] = 1;
	v->a[299365] = anon_sym_DOLLAR_LPAREN;
	v->a[299366] = actions(13072);
	v->a[299367] = 1;
	v->a[299368] = anon_sym_BQUOTE;
	v->a[299369] = actions(13074);
	v->a[299370] = 1;
	v->a[299371] = anon_sym_DOLLAR_BQUOTE;
	v->a[299372] = actions(13594);
	v->a[299373] = 1;
	v->a[299374] = anon_sym_DOLLAR;
	v->a[299375] = actions(13596);
	v->a[299376] = 1;
	v->a[299377] = anon_sym_DQUOTE;
	v->a[299378] = state(5768);
	v->a[299379] = 1;
	small_parse_table_14969(v);
}

void	small_parse_table_14969(t_small_parse_table_array *v)
{
	v->a[299380] = aux_sym_string_repeat1;
	v->a[299381] = actions(13058);
	v->a[299382] = 2;
	v->a[299383] = anon_sym_LPAREN_LPAREN;
	v->a[299384] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[299385] = state(6127);
	v->a[299386] = 4;
	v->a[299387] = sym_arithmetic_expansion;
	v->a[299388] = sym_simple_expansion;
	v->a[299389] = sym_expansion;
	v->a[299390] = sym_command_substitution;
	v->a[299391] = 12;
	v->a[299392] = actions(3);
	v->a[299393] = 1;
	v->a[299394] = sym_comment;
	v->a[299395] = actions(13060);
	v->a[299396] = 1;
	v->a[299397] = anon_sym_DOLLAR_LBRACK;
	v->a[299398] = actions(13066);
	v->a[299399] = 1;
	small_parse_table_14970(v);
}

/* EOF small_parse_table_2993.c */
