/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_724.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3620(t_small_parse_table_array *v)
{
	v->a[72400] = 1;
	v->a[72401] = sym_variable_name;
	v->a[72402] = actions(2868);
	v->a[72403] = 1;
	v->a[72404] = anon_sym_DQUOTE;
	v->a[72405] = actions(2854);
	v->a[72406] = 2;
	v->a[72407] = aux_sym__simple_variable_name_token1;
	v->a[72408] = aux_sym__multiline_variable_name_token1;
	v->a[72409] = actions(2848);
	v->a[72410] = 9;
	v->a[72411] = anon_sym_BANG;
	v->a[72412] = anon_sym_DASH;
	v->a[72413] = anon_sym_STAR;
	v->a[72414] = anon_sym_QMARK;
	v->a[72415] = anon_sym_DOLLAR;
	v->a[72416] = anon_sym_POUND;
	v->a[72417] = anon_sym_AT;
	v->a[72418] = anon_sym_0;
	v->a[72419] = anon_sym__;
	small_parse_table_3621(v);
}

void	small_parse_table_3621(t_small_parse_table_array *v)
{
	v->a[72420] = 6;
	v->a[72421] = actions(3);
	v->a[72422] = 1;
	v->a[72423] = sym_comment;
	v->a[72424] = actions(2852);
	v->a[72425] = 1;
	v->a[72426] = sym_string_content;
	v->a[72427] = actions(2856);
	v->a[72428] = 1;
	v->a[72429] = sym_variable_name;
	v->a[72430] = actions(2870);
	v->a[72431] = 1;
	v->a[72432] = anon_sym_DQUOTE;
	v->a[72433] = actions(2854);
	v->a[72434] = 2;
	v->a[72435] = aux_sym__simple_variable_name_token1;
	v->a[72436] = aux_sym__multiline_variable_name_token1;
	v->a[72437] = actions(2848);
	v->a[72438] = 9;
	v->a[72439] = anon_sym_BANG;
	small_parse_table_3622(v);
}

void	small_parse_table_3622(t_small_parse_table_array *v)
{
	v->a[72440] = anon_sym_DASH;
	v->a[72441] = anon_sym_STAR;
	v->a[72442] = anon_sym_QMARK;
	v->a[72443] = anon_sym_DOLLAR;
	v->a[72444] = anon_sym_POUND;
	v->a[72445] = anon_sym_AT;
	v->a[72446] = anon_sym_0;
	v->a[72447] = anon_sym__;
	v->a[72448] = 6;
	v->a[72449] = actions(3);
	v->a[72450] = 1;
	v->a[72451] = sym_comment;
	v->a[72452] = actions(2852);
	v->a[72453] = 1;
	v->a[72454] = sym_string_content;
	v->a[72455] = actions(2856);
	v->a[72456] = 1;
	v->a[72457] = sym_variable_name;
	v->a[72458] = actions(2872);
	v->a[72459] = 1;
	small_parse_table_3623(v);
}

void	small_parse_table_3623(t_small_parse_table_array *v)
{
	v->a[72460] = anon_sym_DQUOTE;
	v->a[72461] = actions(2854);
	v->a[72462] = 2;
	v->a[72463] = aux_sym__simple_variable_name_token1;
	v->a[72464] = aux_sym__multiline_variable_name_token1;
	v->a[72465] = actions(2848);
	v->a[72466] = 9;
	v->a[72467] = anon_sym_BANG;
	v->a[72468] = anon_sym_DASH;
	v->a[72469] = anon_sym_STAR;
	v->a[72470] = anon_sym_QMARK;
	v->a[72471] = anon_sym_DOLLAR;
	v->a[72472] = anon_sym_POUND;
	v->a[72473] = anon_sym_AT;
	v->a[72474] = anon_sym_0;
	v->a[72475] = anon_sym__;
	v->a[72476] = 7;
	v->a[72477] = actions(3);
	v->a[72478] = 1;
	v->a[72479] = sym_comment;
	small_parse_table_3624(v);
}

void	small_parse_table_3624(t_small_parse_table_array *v)
{
	v->a[72480] = actions(1086);
	v->a[72481] = 1;
	v->a[72482] = sym_file_descriptor;
	v->a[72483] = actions(2874);
	v->a[72484] = 1;
	v->a[72485] = aux_sym_heredoc_redirect_token1;
	v->a[72486] = state(1926);
	v->a[72487] = 1;
	v->a[72488] = sym__heredoc_expression;
	v->a[72489] = actions(1068);
	v->a[72490] = 2;
	v->a[72491] = anon_sym_AMP_AMP;
	v->a[72492] = anon_sym_PIPE_PIPE;
	v->a[72493] = state(1600);
	v->a[72494] = 2;
	v->a[72495] = sym_file_redirect;
	v->a[72496] = aux_sym_redirected_statement_repeat2;
	v->a[72497] = actions(1070);
	v->a[72498] = 7;
	v->a[72499] = anon_sym_LT;
	small_parse_table_3625(v);
}

/* EOF small_parse_table_724.c */
