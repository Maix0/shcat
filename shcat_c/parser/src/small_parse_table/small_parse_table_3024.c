/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3024.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15120(t_small_parse_table_array *v)
{
	v->a[302400] = actions(1765);
	v->a[302401] = 1;
	v->a[302402] = anon_sym_DQUOTE;
	v->a[302403] = actions(2959);
	v->a[302404] = 1;
	v->a[302405] = sym_variable_name;
	v->a[302406] = state(1213);
	v->a[302407] = 1;
	v->a[302408] = sym_string;
	v->a[302409] = actions(2957);
	v->a[302410] = 2;
	v->a[302411] = aux_sym__simple_variable_name_token1;
	v->a[302412] = aux_sym__multiline_variable_name_token1;
	v->a[302413] = actions(2955);
	v->a[302414] = 9;
	v->a[302415] = anon_sym_DASH;
	v->a[302416] = anon_sym_STAR;
	v->a[302417] = anon_sym_BANG;
	v->a[302418] = anon_sym_QMARK;
	v->a[302419] = anon_sym_DOLLAR;
	small_parse_table_15121(v);
}

void	small_parse_table_15121(t_small_parse_table_array *v)
{
	v->a[302420] = anon_sym_POUND;
	v->a[302421] = anon_sym_AT2;
	v->a[302422] = anon_sym_0;
	v->a[302423] = anon_sym__;
	v->a[302424] = 6;
	v->a[302425] = actions(3);
	v->a[302426] = 1;
	v->a[302427] = sym_comment;
	v->a[302428] = actions(12912);
	v->a[302429] = 1;
	v->a[302430] = anon_sym_DQUOTE;
	v->a[302431] = actions(12916);
	v->a[302432] = 1;
	v->a[302433] = sym_variable_name;
	v->a[302434] = state(6206);
	v->a[302435] = 1;
	v->a[302436] = sym_string;
	v->a[302437] = actions(12914);
	v->a[302438] = 2;
	v->a[302439] = aux_sym__simple_variable_name_token1;
	small_parse_table_15122(v);
}

void	small_parse_table_15122(t_small_parse_table_array *v)
{
	v->a[302440] = aux_sym__multiline_variable_name_token1;
	v->a[302441] = actions(12910);
	v->a[302442] = 9;
	v->a[302443] = anon_sym_DASH;
	v->a[302444] = anon_sym_STAR;
	v->a[302445] = anon_sym_BANG;
	v->a[302446] = anon_sym_QMARK;
	v->a[302447] = anon_sym_DOLLAR;
	v->a[302448] = anon_sym_POUND;
	v->a[302449] = anon_sym_AT2;
	v->a[302450] = anon_sym_0;
	v->a[302451] = anon_sym__;
	v->a[302452] = 6;
	v->a[302453] = actions(3);
	v->a[302454] = 1;
	v->a[302455] = sym_comment;
	v->a[302456] = actions(3701);
	v->a[302457] = 1;
	v->a[302458] = anon_sym_DQUOTE;
	v->a[302459] = actions(3705);
	small_parse_table_15123(v);
}

void	small_parse_table_15123(t_small_parse_table_array *v)
{
	v->a[302460] = 1;
	v->a[302461] = sym_variable_name;
	v->a[302462] = state(2025);
	v->a[302463] = 1;
	v->a[302464] = sym_string;
	v->a[302465] = actions(3703);
	v->a[302466] = 2;
	v->a[302467] = aux_sym__simple_variable_name_token1;
	v->a[302468] = aux_sym__multiline_variable_name_token1;
	v->a[302469] = actions(3699);
	v->a[302470] = 9;
	v->a[302471] = anon_sym_DASH;
	v->a[302472] = anon_sym_STAR;
	v->a[302473] = anon_sym_BANG;
	v->a[302474] = anon_sym_QMARK;
	v->a[302475] = anon_sym_DOLLAR;
	v->a[302476] = anon_sym_POUND;
	v->a[302477] = anon_sym_AT2;
	v->a[302478] = anon_sym_0;
	v->a[302479] = anon_sym__;
	small_parse_table_15124(v);
}

void	small_parse_table_15124(t_small_parse_table_array *v)
{
	v->a[302480] = 6;
	v->a[302481] = actions(3);
	v->a[302482] = 1;
	v->a[302483] = sym_comment;
	v->a[302484] = actions(13356);
	v->a[302485] = 1;
	v->a[302486] = anon_sym_DQUOTE;
	v->a[302487] = actions(13732);
	v->a[302488] = 1;
	v->a[302489] = sym_string_content;
	v->a[302490] = actions(13736);
	v->a[302491] = 1;
	v->a[302492] = sym_variable_name;
	v->a[302493] = actions(13734);
	v->a[302494] = 2;
	v->a[302495] = aux_sym__simple_variable_name_token1;
	v->a[302496] = aux_sym__multiline_variable_name_token1;
	v->a[302497] = actions(13730);
	v->a[302498] = 9;
	v->a[302499] = anon_sym_DASH;
	small_parse_table_15125(v);
}

/* EOF small_parse_table_3024.c */
