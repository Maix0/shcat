/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1003.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5015(t_small_parse_table_array *v)
{
	v->a[100300] = actions(4466);
	v->a[100301] = 1;
	v->a[100302] = sym_simple_heredoc_body;
	v->a[100303] = state(2281);
	v->a[100304] = 1;
	v->a[100305] = sym_heredoc_body;
	v->a[100306] = state(1762);
	v->a[100307] = 2;
	v->a[100308] = sym__heredoc_body;
	v->a[100309] = sym__simple_heredoc_body;
	v->a[100310] = 5;
	v->a[100311] = actions(1094);
	v->a[100312] = 1;
	v->a[100313] = sym_comment;
	v->a[100314] = actions(4464);
	v->a[100315] = 1;
	v->a[100316] = sym__heredoc_body_beginning;
	v->a[100317] = actions(4470);
	v->a[100318] = 1;
	v->a[100319] = sym_simple_heredoc_body;
	small_parse_table_5016(v);
}

void	small_parse_table_5016(t_small_parse_table_array *v)
{
	v->a[100320] = state(2390);
	v->a[100321] = 1;
	v->a[100322] = sym_heredoc_body;
	v->a[100323] = state(1362);
	v->a[100324] = 2;
	v->a[100325] = sym__heredoc_body;
	v->a[100326] = sym__simple_heredoc_body;
	v->a[100327] = 4;
	v->a[100328] = actions(1094);
	v->a[100329] = 1;
	v->a[100330] = sym_comment;
	v->a[100331] = actions(4500);
	v->a[100332] = 1;
	v->a[100333] = anon_sym_RBRACE;
	v->a[100334] = state(2218);
	v->a[100335] = 1;
	v->a[100336] = aux_sym__concatenation_in_expansion_repeat1;
	v->a[100337] = actions(4502);
	v->a[100338] = 2;
	v->a[100339] = sym__concat;
	small_parse_table_5017(v);
}

void	small_parse_table_5017(t_small_parse_table_array *v)
{
	v->a[100340] = aux_sym_concatenation_token1;
	v->a[100341] = 2;
	v->a[100342] = actions(1094);
	v->a[100343] = 1;
	v->a[100344] = sym_comment;
	v->a[100345] = actions(1159);
	v->a[100346] = 4;
	v->a[100347] = sym__concat;
	v->a[100348] = anon_sym_PIPE;
	v->a[100349] = anon_sym_RPAREN;
	v->a[100350] = aux_sym_concatenation_token1;
	v->a[100351] = 4;
	v->a[100352] = actions(1094);
	v->a[100353] = 1;
	v->a[100354] = sym_comment;
	v->a[100355] = actions(4504);
	v->a[100356] = 1;
	v->a[100357] = anon_sym_RBRACE;
	v->a[100358] = state(2217);
	v->a[100359] = 1;
	small_parse_table_5018(v);
}

void	small_parse_table_5018(t_small_parse_table_array *v)
{
	v->a[100360] = aux_sym__concatenation_in_expansion_repeat1;
	v->a[100361] = actions(4506);
	v->a[100362] = 2;
	v->a[100363] = sym__concat;
	v->a[100364] = aux_sym_concatenation_token1;
	v->a[100365] = 4;
	v->a[100366] = actions(1094);
	v->a[100367] = 1;
	v->a[100368] = sym_comment;
	v->a[100369] = actions(4509);
	v->a[100370] = 1;
	v->a[100371] = anon_sym_RBRACE;
	v->a[100372] = state(2217);
	v->a[100373] = 1;
	v->a[100374] = aux_sym__concatenation_in_expansion_repeat1;
	v->a[100375] = actions(4502);
	v->a[100376] = 2;
	v->a[100377] = sym__concat;
	v->a[100378] = aux_sym_concatenation_token1;
	v->a[100379] = 2;
	small_parse_table_5019(v);
}

void	small_parse_table_5019(t_small_parse_table_array *v)
{
	v->a[100380] = actions(1094);
	v->a[100381] = 1;
	v->a[100382] = sym_comment;
	v->a[100383] = actions(1004);
	v->a[100384] = 4;
	v->a[100385] = sym__concat;
	v->a[100386] = anon_sym_PIPE;
	v->a[100387] = anon_sym_RPAREN;
	v->a[100388] = aux_sym_concatenation_token1;
	v->a[100389] = 2;
	v->a[100390] = actions(1094);
	v->a[100391] = 1;
	v->a[100392] = sym_comment;
	v->a[100393] = actions(1100);
	v->a[100394] = 4;
	v->a[100395] = sym__concat;
	v->a[100396] = anon_sym_PIPE;
	v->a[100397] = anon_sym_RPAREN;
	v->a[100398] = aux_sym_concatenation_token1;
	v->a[100399] = 4;
	small_parse_table_5020(v);
}

/* EOF small_parse_table_1003.c */
