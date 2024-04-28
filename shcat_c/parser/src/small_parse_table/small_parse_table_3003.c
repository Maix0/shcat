/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3003.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15015(t_small_parse_table_array *v)
{
	v->a[300300] = actions(13066);
	v->a[300301] = 1;
	v->a[300302] = sym_string_content;
	v->a[300303] = actions(13068);
	v->a[300304] = 1;
	v->a[300305] = anon_sym_DOLLAR_LBRACE;
	v->a[300306] = actions(13070);
	v->a[300307] = 1;
	v->a[300308] = anon_sym_DOLLAR_LPAREN;
	v->a[300309] = actions(13072);
	v->a[300310] = 1;
	v->a[300311] = anon_sym_BQUOTE;
	v->a[300312] = actions(13074);
	v->a[300313] = 1;
	v->a[300314] = anon_sym_DOLLAR_BQUOTE;
	v->a[300315] = actions(13686);
	v->a[300316] = 1;
	v->a[300317] = anon_sym_DOLLAR;
	v->a[300318] = actions(13688);
	v->a[300319] = 1;
	small_parse_table_15016(v);
}

void	small_parse_table_15016(t_small_parse_table_array *v)
{
	v->a[300320] = anon_sym_DQUOTE;
	v->a[300321] = state(5853);
	v->a[300322] = 1;
	v->a[300323] = aux_sym_string_repeat1;
	v->a[300324] = actions(13058);
	v->a[300325] = 2;
	v->a[300326] = anon_sym_LPAREN_LPAREN;
	v->a[300327] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[300328] = state(6127);
	v->a[300329] = 4;
	v->a[300330] = sym_arithmetic_expansion;
	v->a[300331] = sym_simple_expansion;
	v->a[300332] = sym_expansion;
	v->a[300333] = sym_command_substitution;
	v->a[300334] = 12;
	v->a[300335] = actions(3);
	v->a[300336] = 1;
	v->a[300337] = sym_comment;
	v->a[300338] = actions(13060);
	v->a[300339] = 1;
	small_parse_table_15017(v);
}

void	small_parse_table_15017(t_small_parse_table_array *v)
{
	v->a[300340] = anon_sym_DOLLAR_LBRACK;
	v->a[300341] = actions(13066);
	v->a[300342] = 1;
	v->a[300343] = sym_string_content;
	v->a[300344] = actions(13068);
	v->a[300345] = 1;
	v->a[300346] = anon_sym_DOLLAR_LBRACE;
	v->a[300347] = actions(13070);
	v->a[300348] = 1;
	v->a[300349] = anon_sym_DOLLAR_LPAREN;
	v->a[300350] = actions(13072);
	v->a[300351] = 1;
	v->a[300352] = anon_sym_BQUOTE;
	v->a[300353] = actions(13074);
	v->a[300354] = 1;
	v->a[300355] = anon_sym_DOLLAR_BQUOTE;
	v->a[300356] = actions(13690);
	v->a[300357] = 1;
	v->a[300358] = anon_sym_DOLLAR;
	v->a[300359] = actions(13692);
	small_parse_table_15018(v);
}

void	small_parse_table_15018(t_small_parse_table_array *v)
{
	v->a[300360] = 1;
	v->a[300361] = anon_sym_DQUOTE;
	v->a[300362] = state(5768);
	v->a[300363] = 1;
	v->a[300364] = aux_sym_string_repeat1;
	v->a[300365] = actions(13058);
	v->a[300366] = 2;
	v->a[300367] = anon_sym_LPAREN_LPAREN;
	v->a[300368] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[300369] = state(6127);
	v->a[300370] = 4;
	v->a[300371] = sym_arithmetic_expansion;
	v->a[300372] = sym_simple_expansion;
	v->a[300373] = sym_expansion;
	v->a[300374] = sym_command_substitution;
	v->a[300375] = 12;
	v->a[300376] = actions(3);
	v->a[300377] = 1;
	v->a[300378] = sym_comment;
	v->a[300379] = actions(13060);
	small_parse_table_15019(v);
}

void	small_parse_table_15019(t_small_parse_table_array *v)
{
	v->a[300380] = 1;
	v->a[300381] = anon_sym_DOLLAR_LBRACK;
	v->a[300382] = actions(13066);
	v->a[300383] = 1;
	v->a[300384] = sym_string_content;
	v->a[300385] = actions(13068);
	v->a[300386] = 1;
	v->a[300387] = anon_sym_DOLLAR_LBRACE;
	v->a[300388] = actions(13070);
	v->a[300389] = 1;
	v->a[300390] = anon_sym_DOLLAR_LPAREN;
	v->a[300391] = actions(13072);
	v->a[300392] = 1;
	v->a[300393] = anon_sym_BQUOTE;
	v->a[300394] = actions(13074);
	v->a[300395] = 1;
	v->a[300396] = anon_sym_DOLLAR_BQUOTE;
	v->a[300397] = actions(13694);
	v->a[300398] = 1;
	v->a[300399] = anon_sym_DOLLAR;
	small_parse_table_15020(v);
}

/* EOF small_parse_table_3003.c */
