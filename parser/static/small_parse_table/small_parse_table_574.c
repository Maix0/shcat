/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_574.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2870(t_small_parse_table_array *v)
{
	v->a[57400] = 2;
	v->a[57401] = actions(1436);
	v->a[57402] = 1;
	v->a[57403] = sym_comment;
	v->a[57404] = actions(1054);
	v->a[57405] = 5;
	v->a[57406] = sym__concat;
	v->a[57407] = anon_sym_PIPE;
	v->a[57408] = anon_sym_RPAREN;
	v->a[57409] = anon_sym_RBRACE;
	v->a[57410] = aux_sym_concatenation_token1;
	v->a[57411] = 5;
	v->a[57412] = actions(1436);
	v->a[57413] = 1;
	v->a[57414] = sym_comment;
	v->a[57415] = actions(2962);
	v->a[57416] = 1;
	v->a[57417] = sym__heredoc_body_beginning;
	v->a[57418] = actions(2964);
	v->a[57419] = 1;
	small_parse_table_2871(v);
}

void	small_parse_table_2871(t_small_parse_table_array *v)
{
	v->a[57420] = sym_simple_heredoc_body;
	v->a[57421] = state(1662);
	v->a[57422] = 1;
	v->a[57423] = sym_heredoc_body;
	v->a[57424] = state(1260);
	v->a[57425] = 2;
	v->a[57426] = sym__heredoc_body;
	v->a[57427] = sym__simple_heredoc_body;
	v->a[57428] = 5;
	v->a[57429] = actions(1436);
	v->a[57430] = 1;
	v->a[57431] = sym_comment;
	v->a[57432] = actions(2962);
	v->a[57433] = 1;
	v->a[57434] = sym__heredoc_body_beginning;
	v->a[57435] = actions(2975);
	v->a[57436] = 1;
	v->a[57437] = sym_simple_heredoc_body;
	v->a[57438] = state(1756);
	v->a[57439] = 1;
	small_parse_table_2872(v);
}

void	small_parse_table_2872(t_small_parse_table_array *v)
{
	v->a[57440] = sym_heredoc_body;
	v->a[57441] = state(1410);
	v->a[57442] = 2;
	v->a[57443] = sym__heredoc_body;
	v->a[57444] = sym__simple_heredoc_body;
	v->a[57445] = 6;
	v->a[57446] = actions(1436);
	v->a[57447] = 1;
	v->a[57448] = sym_comment;
	v->a[57449] = actions(2962);
	v->a[57450] = 1;
	v->a[57451] = sym__heredoc_body_beginning;
	v->a[57452] = actions(2975);
	v->a[57453] = 1;
	v->a[57454] = sym_simple_heredoc_body;
	v->a[57455] = state(1435);
	v->a[57456] = 1;
	v->a[57457] = sym__heredoc_body;
	v->a[57458] = state(1436);
	v->a[57459] = 1;
	small_parse_table_2873(v);
}

void	small_parse_table_2873(t_small_parse_table_array *v)
{
	v->a[57460] = sym__simple_heredoc_body;
	v->a[57461] = state(1756);
	v->a[57462] = 1;
	v->a[57463] = sym_heredoc_body;
	v->a[57464] = 4;
	v->a[57465] = actions(1436);
	v->a[57466] = 1;
	v->a[57467] = sym_comment;
	v->a[57468] = actions(2979);
	v->a[57469] = 1;
	v->a[57470] = anon_sym_elif;
	v->a[57471] = actions(2977);
	v->a[57472] = 2;
	v->a[57473] = anon_sym_fi;
	v->a[57474] = anon_sym_else;
	v->a[57475] = state(1503);
	v->a[57476] = 2;
	v->a[57477] = sym_elif_clause;
	v->a[57478] = aux_sym_if_statement_repeat1;
	v->a[57479] = 5;
	small_parse_table_2874(v);
}

void	small_parse_table_2874(t_small_parse_table_array *v)
{
	v->a[57480] = actions(1436);
	v->a[57481] = 1;
	v->a[57482] = sym_comment;
	v->a[57483] = actions(2962);
	v->a[57484] = 1;
	v->a[57485] = sym__heredoc_body_beginning;
	v->a[57486] = actions(2975);
	v->a[57487] = 1;
	v->a[57488] = sym_simple_heredoc_body;
	v->a[57489] = state(1756);
	v->a[57490] = 1;
	v->a[57491] = sym_heredoc_body;
	v->a[57492] = state(1427);
	v->a[57493] = 2;
	v->a[57494] = sym__heredoc_body;
	v->a[57495] = sym__simple_heredoc_body;
	v->a[57496] = 4;
	v->a[57497] = actions(1436);
	v->a[57498] = 1;
	v->a[57499] = sym_comment;
	small_parse_table_2875(v);
}

/* EOF small_parse_table_574.c */
