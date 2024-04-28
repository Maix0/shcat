/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2603.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13015(t_small_parse_table_array *v)
{
	v->a[260300] = 1;
	v->a[260301] = anon_sym_BANG2;
	v->a[260302] = actions(11764);
	v->a[260303] = 1;
	v->a[260304] = anon_sym_DOLLAR_LPAREN;
	v->a[260305] = actions(11766);
	v->a[260306] = 1;
	v->a[260307] = anon_sym_BQUOTE;
	v->a[260308] = actions(11768);
	v->a[260309] = 1;
	v->a[260310] = anon_sym_DOLLAR_BQUOTE;
	v->a[260311] = actions(11770);
	v->a[260312] = 1;
	v->a[260313] = aux_sym__simple_variable_name_token1;
	v->a[260314] = actions(11772);
	v->a[260315] = 1;
	v->a[260316] = sym_variable_name;
	v->a[260317] = actions(11964);
	v->a[260318] = 1;
	v->a[260319] = anon_sym_RBRACE3;
	small_parse_table_13016(v);
}

void	small_parse_table_13016(t_small_parse_table_array *v)
{
	v->a[260320] = state(3532);
	v->a[260321] = 1;
	v->a[260322] = sym_subscript;
	v->a[260323] = state(6428);
	v->a[260324] = 1;
	v->a[260325] = aux_sym__expansion_body_repeat1;
	v->a[260326] = state(6472);
	v->a[260327] = 1;
	v->a[260328] = sym_command_substitution;
	v->a[260329] = state(7046);
	v->a[260330] = 1;
	v->a[260331] = sym__expansion_body;
	v->a[260332] = actions(11762);
	v->a[260333] = 2;
	v->a[260334] = anon_sym_POUND2;
	v->a[260335] = anon_sym_EQ2;
	v->a[260336] = actions(8050);
	v->a[260337] = 3;
	v->a[260338] = sym__external_expansion_sym_hash;
	v->a[260339] = sym__external_expansion_sym_bang;
	small_parse_table_13017(v);
}

void	small_parse_table_13017(t_small_parse_table_array *v)
{
	v->a[260340] = sym__external_expansion_sym_equal;
	v->a[260341] = actions(11754);
	v->a[260342] = 4;
	v->a[260343] = anon_sym_DASH;
	v->a[260344] = anon_sym_STAR;
	v->a[260345] = anon_sym_QMARK;
	v->a[260346] = anon_sym_AT2;
	v->a[260347] = actions(11756);
	v->a[260348] = 5;
	v->a[260349] = anon_sym_BANG;
	v->a[260350] = anon_sym_DOLLAR;
	v->a[260351] = anon_sym_POUND;
	v->a[260352] = anon_sym_0;
	v->a[260353] = anon_sym__;
	v->a[260354] = 16;
	v->a[260355] = actions(3);
	v->a[260356] = 1;
	v->a[260357] = sym_comment;
	v->a[260358] = actions(11760);
	v->a[260359] = 1;
	small_parse_table_13018(v);
}

void	small_parse_table_13018(t_small_parse_table_array *v)
{
	v->a[260360] = anon_sym_BANG2;
	v->a[260361] = actions(11764);
	v->a[260362] = 1;
	v->a[260363] = anon_sym_DOLLAR_LPAREN;
	v->a[260364] = actions(11766);
	v->a[260365] = 1;
	v->a[260366] = anon_sym_BQUOTE;
	v->a[260367] = actions(11768);
	v->a[260368] = 1;
	v->a[260369] = anon_sym_DOLLAR_BQUOTE;
	v->a[260370] = actions(11770);
	v->a[260371] = 1;
	v->a[260372] = aux_sym__simple_variable_name_token1;
	v->a[260373] = actions(11772);
	v->a[260374] = 1;
	v->a[260375] = sym_variable_name;
	v->a[260376] = actions(11966);
	v->a[260377] = 1;
	v->a[260378] = anon_sym_RBRACE3;
	v->a[260379] = state(3532);
	small_parse_table_13019(v);
}

void	small_parse_table_13019(t_small_parse_table_array *v)
{
	v->a[260380] = 1;
	v->a[260381] = sym_subscript;
	v->a[260382] = state(6428);
	v->a[260383] = 1;
	v->a[260384] = aux_sym__expansion_body_repeat1;
	v->a[260385] = state(6472);
	v->a[260386] = 1;
	v->a[260387] = sym_command_substitution;
	v->a[260388] = state(7374);
	v->a[260389] = 1;
	v->a[260390] = sym__expansion_body;
	v->a[260391] = actions(11762);
	v->a[260392] = 2;
	v->a[260393] = anon_sym_POUND2;
	v->a[260394] = anon_sym_EQ2;
	v->a[260395] = actions(8050);
	v->a[260396] = 3;
	v->a[260397] = sym__external_expansion_sym_hash;
	v->a[260398] = sym__external_expansion_sym_bang;
	v->a[260399] = sym__external_expansion_sym_equal;
	small_parse_table_13020(v);
}

/* EOF small_parse_table_2603.c */
