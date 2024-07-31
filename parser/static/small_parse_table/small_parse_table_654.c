/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_654.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3270(t_small_parse_table_array *v)
{
	v->a[65400] = anon_sym_0;
	v->a[65401] = 4;
	v->a[65402] = actions(3);
	v->a[65403] = 1;
	v->a[65404] = sym_comment;
	v->a[65405] = actions(1266);
	v->a[65406] = 1;
	v->a[65407] = sym_variable_name;
	v->a[65408] = actions(1264);
	v->a[65409] = 2;
	v->a[65410] = aux_sym__simple_variable_name_token1;
	v->a[65411] = aux_sym__multiline_variable_name_token1;
	v->a[65412] = actions(1262);
	v->a[65413] = 8;
	v->a[65414] = anon_sym_BANG;
	v->a[65415] = anon_sym_DASH;
	v->a[65416] = anon_sym_STAR;
	v->a[65417] = anon_sym_QMARK;
	v->a[65418] = anon_sym_DOLLAR;
	v->a[65419] = anon_sym_POUND;
	small_parse_table_3271(v);
}

void	small_parse_table_3271(t_small_parse_table_array *v)
{
	v->a[65420] = anon_sym_AT;
	v->a[65421] = anon_sym_0;
	v->a[65422] = 4;
	v->a[65423] = actions(3);
	v->a[65424] = 1;
	v->a[65425] = sym_comment;
	v->a[65426] = actions(2891);
	v->a[65427] = 1;
	v->a[65428] = sym_variable_name;
	v->a[65429] = actions(2889);
	v->a[65430] = 2;
	v->a[65431] = aux_sym__simple_variable_name_token1;
	v->a[65432] = aux_sym__multiline_variable_name_token1;
	v->a[65433] = actions(2887);
	v->a[65434] = 8;
	v->a[65435] = anon_sym_BANG;
	v->a[65436] = anon_sym_DASH;
	v->a[65437] = anon_sym_STAR;
	v->a[65438] = anon_sym_QMARK;
	v->a[65439] = anon_sym_DOLLAR;
	small_parse_table_3272(v);
}

void	small_parse_table_3272(t_small_parse_table_array *v)
{
	v->a[65440] = anon_sym_POUND;
	v->a[65441] = anon_sym_AT;
	v->a[65442] = anon_sym_0;
	v->a[65443] = 4;
	v->a[65444] = actions(3);
	v->a[65445] = 1;
	v->a[65446] = sym_comment;
	v->a[65447] = actions(2349);
	v->a[65448] = 1;
	v->a[65449] = sym_variable_name;
	v->a[65450] = actions(2347);
	v->a[65451] = 2;
	v->a[65452] = aux_sym__simple_variable_name_token1;
	v->a[65453] = aux_sym__multiline_variable_name_token1;
	v->a[65454] = actions(2345);
	v->a[65455] = 8;
	v->a[65456] = anon_sym_BANG;
	v->a[65457] = anon_sym_DASH;
	v->a[65458] = anon_sym_STAR;
	v->a[65459] = anon_sym_QMARK;
	small_parse_table_3273(v);
}

void	small_parse_table_3273(t_small_parse_table_array *v)
{
	v->a[65460] = anon_sym_DOLLAR;
	v->a[65461] = anon_sym_POUND;
	v->a[65462] = anon_sym_AT;
	v->a[65463] = anon_sym_0;
	v->a[65464] = 8;
	v->a[65465] = actions(407);
	v->a[65466] = 1;
	v->a[65467] = sym_comment;
	v->a[65468] = actions(2893);
	v->a[65469] = 1;
	v->a[65470] = anon_sym_DOLLAR;
	v->a[65471] = actions(2895);
	v->a[65472] = 1;
	v->a[65473] = anon_sym_DOLLAR_LBRACE;
	v->a[65474] = actions(2897);
	v->a[65475] = 1;
	v->a[65476] = anon_sym_DOLLAR_LPAREN;
	v->a[65477] = actions(2899);
	v->a[65478] = 1;
	v->a[65479] = anon_sym_BQUOTE;
	small_parse_table_3274(v);
}

void	small_parse_table_3274(t_small_parse_table_array *v)
{
	v->a[65480] = actions(2901);
	v->a[65481] = 1;
	v->a[65482] = sym_heredoc_content;
	v->a[65483] = actions(2903);
	v->a[65484] = 1;
	v->a[65485] = sym_heredoc_end;
	v->a[65486] = state(1467);
	v->a[65487] = 4;
	v->a[65488] = sym_simple_expansion;
	v->a[65489] = sym_expansion;
	v->a[65490] = sym_command_substitution;
	v->a[65491] = aux_sym_heredoc_body_repeat1;
	v->a[65492] = 2;
	v->a[65493] = actions(3);
	v->a[65494] = 1;
	v->a[65495] = sym_comment;
	v->a[65496] = actions(2517);
	v->a[65497] = 10;
	v->a[65498] = aux_sym_heredoc_redirect_token1;
	v->a[65499] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3275(v);
}

/* EOF small_parse_table_654.c */
