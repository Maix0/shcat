/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1344.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6720(t_small_parse_table_array *v)
{
	v->a[134400] = aux_sym__multiline_variable_name_token1;
	v->a[134401] = actions(7530);
	v->a[134402] = 9;
	v->a[134403] = anon_sym_BANG;
	v->a[134404] = anon_sym_DASH;
	v->a[134405] = anon_sym_STAR;
	v->a[134406] = anon_sym_QMARK;
	v->a[134407] = anon_sym_DOLLAR;
	v->a[134408] = anon_sym_POUND;
	v->a[134409] = anon_sym_AT;
	v->a[134410] = anon_sym_0;
	v->a[134411] = anon_sym__;
	v->a[134412] = 6;
	v->a[134413] = actions(3);
	v->a[134414] = 1;
	v->a[134415] = sym_comment;
	v->a[134416] = actions(7534);
	v->a[134417] = 1;
	v->a[134418] = sym_string_content;
	v->a[134419] = actions(7538);
	small_parse_table_6721(v);
}

void	small_parse_table_6721(t_small_parse_table_array *v)
{
	v->a[134420] = 1;
	v->a[134421] = sym_variable_name;
	v->a[134422] = actions(7748);
	v->a[134423] = 1;
	v->a[134424] = anon_sym_DQUOTE;
	v->a[134425] = actions(7536);
	v->a[134426] = 2;
	v->a[134427] = aux_sym__simple_variable_name_token1;
	v->a[134428] = aux_sym__multiline_variable_name_token1;
	v->a[134429] = actions(7530);
	v->a[134430] = 9;
	v->a[134431] = anon_sym_BANG;
	v->a[134432] = anon_sym_DASH;
	v->a[134433] = anon_sym_STAR;
	v->a[134434] = anon_sym_QMARK;
	v->a[134435] = anon_sym_DOLLAR;
	v->a[134436] = anon_sym_POUND;
	v->a[134437] = anon_sym_AT;
	v->a[134438] = anon_sym_0;
	v->a[134439] = anon_sym__;
	small_parse_table_6722(v);
}

void	small_parse_table_6722(t_small_parse_table_array *v)
{
	v->a[134440] = 7;
	v->a[134441] = actions(3);
	v->a[134442] = 1;
	v->a[134443] = sym_comment;
	v->a[134444] = actions(7752);
	v->a[134445] = 1;
	v->a[134446] = anon_sym_RBRACE3;
	v->a[134447] = actions(7754);
	v->a[134448] = 1;
	v->a[134449] = aux_sym__simple_variable_name_token1;
	v->a[134450] = actions(7758);
	v->a[134451] = 1;
	v->a[134452] = sym_variable_name;
	v->a[134453] = state(3685);
	v->a[134454] = 1;
	v->a[134455] = sym__expansion_body;
	v->a[134456] = actions(7756);
	v->a[134457] = 2;
	v->a[134458] = anon_sym_0;
	v->a[134459] = anon_sym__;
	small_parse_table_6723(v);
}

void	small_parse_table_6723(t_small_parse_table_array *v)
{
	v->a[134460] = actions(7750);
	v->a[134461] = 7;
	v->a[134462] = anon_sym_BANG;
	v->a[134463] = anon_sym_DASH;
	v->a[134464] = anon_sym_STAR;
	v->a[134465] = anon_sym_QMARK;
	v->a[134466] = anon_sym_DOLLAR;
	v->a[134467] = anon_sym_POUND;
	v->a[134468] = anon_sym_AT;
	v->a[134469] = 11;
	v->a[134470] = actions(3);
	v->a[134471] = 1;
	v->a[134472] = sym_comment;
	v->a[134473] = actions(7760);
	v->a[134474] = 1;
	v->a[134475] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[134476] = actions(7762);
	v->a[134477] = 1;
	v->a[134478] = anon_sym_DOLLAR;
	v->a[134479] = actions(7764);
	small_parse_table_6724(v);
}

void	small_parse_table_6724(t_small_parse_table_array *v)
{
	v->a[134480] = 1;
	v->a[134481] = anon_sym_DQUOTE;
	v->a[134482] = actions(7766);
	v->a[134483] = 1;
	v->a[134484] = sym_string_content;
	v->a[134485] = actions(7768);
	v->a[134486] = 1;
	v->a[134487] = anon_sym_DOLLAR_LBRACE;
	v->a[134488] = actions(7770);
	v->a[134489] = 1;
	v->a[134490] = anon_sym_DOLLAR_LPAREN;
	v->a[134491] = actions(7772);
	v->a[134492] = 1;
	v->a[134493] = anon_sym_BQUOTE;
	v->a[134494] = actions(7774);
	v->a[134495] = 1;
	v->a[134496] = anon_sym_DOLLAR_BQUOTE;
	v->a[134497] = state(3115);
	v->a[134498] = 1;
	v->a[134499] = aux_sym_string_repeat1;
	small_parse_table_6725(v);
}

/* EOF small_parse_table_1344.c */
