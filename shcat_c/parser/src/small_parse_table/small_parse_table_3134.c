/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3134.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15670(t_small_parse_table_array *v)
{
	v->a[313400] = sym__simple_heredoc_body;
	v->a[313401] = 6;
	v->a[313402] = actions(71);
	v->a[313403] = 1;
	v->a[313404] = sym_comment;
	v->a[313405] = actions(14564);
	v->a[313406] = 1;
	v->a[313407] = anon_sym_PIPE;
	v->a[313408] = actions(14698);
	v->a[313409] = 1;
	v->a[313410] = anon_sym_RPAREN;
	v->a[313411] = actions(14755);
	v->a[313412] = 1;
	v->a[313413] = sym__special_character;
	v->a[313414] = state(6545);
	v->a[313415] = 1;
	v->a[313416] = aux_sym__literal_repeat1;
	v->a[313417] = state(6595);
	v->a[313418] = 1;
	v->a[313419] = aux_sym_case_item_repeat1;
	small_parse_table_15671(v);
}

void	small_parse_table_15671(t_small_parse_table_array *v)
{
	v->a[313420] = 5;
	v->a[313421] = actions(71);
	v->a[313422] = 1;
	v->a[313423] = sym_comment;
	v->a[313424] = actions(14710);
	v->a[313425] = 1;
	v->a[313426] = sym__heredoc_body_beginning;
	v->a[313427] = actions(14757);
	v->a[313428] = 1;
	v->a[313429] = sym_simple_heredoc_body;
	v->a[313430] = state(7011);
	v->a[313431] = 1;
	v->a[313432] = sym_heredoc_body;
	v->a[313433] = state(5568);
	v->a[313434] = 2;
	v->a[313435] = sym__heredoc_body;
	v->a[313436] = sym__simple_heredoc_body;
	v->a[313437] = 3;
	v->a[313438] = actions(71);
	v->a[313439] = 1;
	small_parse_table_15672(v);
}

void	small_parse_table_15672(t_small_parse_table_array *v)
{
	v->a[313440] = sym_comment;
	v->a[313441] = actions(14759);
	v->a[313442] = 1;
	v->a[313443] = sym__concat;
	v->a[313444] = actions(6818);
	v->a[313445] = 4;
	v->a[313446] = sym__external_expansion_sym_hash;
	v->a[313447] = sym__external_expansion_sym_bang;
	v->a[313448] = sym__external_expansion_sym_equal;
	v->a[313449] = anon_sym_RBRACE3;
	v->a[313450] = 4;
	v->a[313451] = actions(3);
	v->a[313452] = 1;
	v->a[313453] = sym_comment;
	v->a[313454] = actions(14761);
	v->a[313455] = 1;
	v->a[313456] = anon_sym_in;
	v->a[313457] = actions(14765);
	v->a[313458] = 1;
	v->a[313459] = aux_sym_heredoc_redirect_token1;
	small_parse_table_15673(v);
}

void	small_parse_table_15673(t_small_parse_table_array *v)
{
	v->a[313460] = actions(14763);
	v->a[313461] = 3;
	v->a[313462] = anon_sym_SEMI;
	v->a[313463] = anon_sym_AMP;
	v->a[313464] = anon_sym_SEMI_SEMI;
	v->a[313465] = 6;
	v->a[313466] = actions(71);
	v->a[313467] = 1;
	v->a[313468] = sym_comment;
	v->a[313469] = actions(14564);
	v->a[313470] = 1;
	v->a[313471] = anon_sym_PIPE;
	v->a[313472] = actions(14600);
	v->a[313473] = 1;
	v->a[313474] = anon_sym_RPAREN;
	v->a[313475] = actions(14755);
	v->a[313476] = 1;
	v->a[313477] = sym__special_character;
	v->a[313478] = state(6545);
	v->a[313479] = 1;
	small_parse_table_15674(v);
}

void	small_parse_table_15674(t_small_parse_table_array *v)
{
	v->a[313480] = aux_sym__literal_repeat1;
	v->a[313481] = state(6627);
	v->a[313482] = 1;
	v->a[313483] = aux_sym_case_item_repeat1;
	v->a[313484] = 5;
	v->a[313485] = actions(71);
	v->a[313486] = 1;
	v->a[313487] = sym_comment;
	v->a[313488] = actions(14767);
	v->a[313489] = 1;
	v->a[313490] = anon_sym_SLASH;
	v->a[313491] = actions(14769);
	v->a[313492] = 1;
	v->a[313493] = anon_sym_RBRACE3;
	v->a[313494] = state(6475);
	v->a[313495] = 1;
	v->a[313496] = aux_sym__concatenation_in_expansion_repeat1;
	v->a[313497] = actions(14590);
	v->a[313498] = 2;
	v->a[313499] = sym__concat;
	small_parse_table_15675(v);
}

/* EOF small_parse_table_3134.c */
