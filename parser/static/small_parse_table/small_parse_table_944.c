/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_944.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4720(t_small_parse_table_array *v)
{
	v->a[94400] = 1;
	v->a[94401] = sym__heredoc_body;
	v->a[94402] = state(1666);
	v->a[94403] = 1;
	v->a[94404] = sym__simple_heredoc_body;
	v->a[94405] = state(2167);
	v->a[94406] = 1;
	v->a[94407] = sym_heredoc_body;
	v->a[94408] = 2;
	v->a[94409] = actions(1074);
	v->a[94410] = 1;
	v->a[94411] = sym_comment;
	v->a[94412] = actions(1104);
	v->a[94413] = 5;
	v->a[94414] = sym__concat;
	v->a[94415] = anon_sym_PIPE;
	v->a[94416] = anon_sym_RPAREN;
	v->a[94417] = anon_sym_RBRACE;
	v->a[94418] = aux_sym_concatenation_token1;
	v->a[94419] = 6;
	small_parse_table_4721(v);
}

void	small_parse_table_4721(t_small_parse_table_array *v)
{
	v->a[94420] = actions(1074);
	v->a[94421] = 1;
	v->a[94422] = sym_comment;
	v->a[94423] = actions(4018);
	v->a[94424] = 1;
	v->a[94425] = sym__heredoc_body_beginning;
	v->a[94426] = actions(4022);
	v->a[94427] = 1;
	v->a[94428] = sym_simple_heredoc_body;
	v->a[94429] = state(1645);
	v->a[94430] = 1;
	v->a[94431] = sym__heredoc_body;
	v->a[94432] = state(1647);
	v->a[94433] = 1;
	v->a[94434] = sym__simple_heredoc_body;
	v->a[94435] = state(2167);
	v->a[94436] = 1;
	v->a[94437] = sym_heredoc_body;
	v->a[94438] = 6;
	v->a[94439] = actions(1074);
	small_parse_table_4722(v);
}

void	small_parse_table_4722(t_small_parse_table_array *v)
{
	v->a[94440] = 1;
	v->a[94441] = sym_comment;
	v->a[94442] = actions(4018);
	v->a[94443] = 1;
	v->a[94444] = sym__heredoc_body_beginning;
	v->a[94445] = actions(4022);
	v->a[94446] = 1;
	v->a[94447] = sym_simple_heredoc_body;
	v->a[94448] = state(1579);
	v->a[94449] = 1;
	v->a[94450] = sym__heredoc_body;
	v->a[94451] = state(1640);
	v->a[94452] = 1;
	v->a[94453] = sym__simple_heredoc_body;
	v->a[94454] = state(2167);
	v->a[94455] = 1;
	v->a[94456] = sym_heredoc_body;
	v->a[94457] = 5;
	v->a[94458] = actions(1074);
	v->a[94459] = 1;
	small_parse_table_4723(v);
}

void	small_parse_table_4723(t_small_parse_table_array *v)
{
	v->a[94460] = sym_comment;
	v->a[94461] = actions(4018);
	v->a[94462] = 1;
	v->a[94463] = sym__heredoc_body_beginning;
	v->a[94464] = actions(4022);
	v->a[94465] = 1;
	v->a[94466] = sym_simple_heredoc_body;
	v->a[94467] = state(2167);
	v->a[94468] = 1;
	v->a[94469] = sym_heredoc_body;
	v->a[94470] = state(1637);
	v->a[94471] = 2;
	v->a[94472] = sym__heredoc_body;
	v->a[94473] = sym__simple_heredoc_body;
	v->a[94474] = 5;
	v->a[94475] = actions(1074);
	v->a[94476] = 1;
	v->a[94477] = sym_comment;
	v->a[94478] = actions(4018);
	v->a[94479] = 1;
	small_parse_table_4724(v);
}

void	small_parse_table_4724(t_small_parse_table_array *v)
{
	v->a[94480] = sym__heredoc_body_beginning;
	v->a[94481] = actions(4022);
	v->a[94482] = 1;
	v->a[94483] = sym_simple_heredoc_body;
	v->a[94484] = state(2167);
	v->a[94485] = 1;
	v->a[94486] = sym_heredoc_body;
	v->a[94487] = state(1634);
	v->a[94488] = 2;
	v->a[94489] = sym__heredoc_body;
	v->a[94490] = sym__simple_heredoc_body;
	v->a[94491] = 2;
	v->a[94492] = actions(1074);
	v->a[94493] = 1;
	v->a[94494] = sym_comment;
	v->a[94495] = actions(1100);
	v->a[94496] = 5;
	v->a[94497] = sym__concat;
	v->a[94498] = anon_sym_PIPE;
	v->a[94499] = anon_sym_RPAREN;
	small_parse_table_4725(v);
}

/* EOF small_parse_table_944.c */
