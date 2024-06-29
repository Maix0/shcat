/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_894.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4470(t_small_parse_table_array *v)
{
	v->a[89400] = 2;
	v->a[89401] = aux_sym__simple_variable_name_token1;
	v->a[89402] = aux_sym__multiline_variable_name_token1;
	v->a[89403] = actions(413);
	v->a[89404] = 9;
	v->a[89405] = anon_sym_BANG;
	v->a[89406] = anon_sym_DASH;
	v->a[89407] = anon_sym_STAR;
	v->a[89408] = anon_sym_QMARK;
	v->a[89409] = anon_sym_DOLLAR;
	v->a[89410] = anon_sym_POUND;
	v->a[89411] = anon_sym_AT;
	v->a[89412] = anon_sym_0;
	v->a[89413] = anon_sym__;
	v->a[89414] = 10;
	v->a[89415] = actions(3);
	v->a[89416] = 1;
	v->a[89417] = sym_comment;
	v->a[89418] = actions(3414);
	v->a[89419] = 1;
	small_parse_table_4471(v);
}

void	small_parse_table_4471(t_small_parse_table_array *v)
{
	v->a[89420] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89421] = actions(3420);
	v->a[89422] = 1;
	v->a[89423] = sym_string_content;
	v->a[89424] = actions(3422);
	v->a[89425] = 1;
	v->a[89426] = anon_sym_DOLLAR_LBRACE;
	v->a[89427] = actions(3424);
	v->a[89428] = 1;
	v->a[89429] = anon_sym_DOLLAR_LPAREN;
	v->a[89430] = actions(3426);
	v->a[89431] = 1;
	v->a[89432] = anon_sym_BQUOTE;
	v->a[89433] = actions(3526);
	v->a[89434] = 1;
	v->a[89435] = anon_sym_DOLLAR;
	v->a[89436] = actions(3528);
	v->a[89437] = 1;
	v->a[89438] = anon_sym_DQUOTE;
	v->a[89439] = state(1850);
	small_parse_table_4472(v);
}

void	small_parse_table_4472(t_small_parse_table_array *v)
{
	v->a[89440] = 1;
	v->a[89441] = aux_sym_string_repeat1;
	v->a[89442] = state(1963);
	v->a[89443] = 4;
	v->a[89444] = sym_arithmetic_expansion;
	v->a[89445] = sym_simple_expansion;
	v->a[89446] = sym_expansion;
	v->a[89447] = sym_command_substitution;
	v->a[89448] = 10;
	v->a[89449] = actions(3);
	v->a[89450] = 1;
	v->a[89451] = sym_comment;
	v->a[89452] = actions(3414);
	v->a[89453] = 1;
	v->a[89454] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89455] = actions(3420);
	v->a[89456] = 1;
	v->a[89457] = sym_string_content;
	v->a[89458] = actions(3422);
	v->a[89459] = 1;
	small_parse_table_4473(v);
}

void	small_parse_table_4473(t_small_parse_table_array *v)
{
	v->a[89460] = anon_sym_DOLLAR_LBRACE;
	v->a[89461] = actions(3424);
	v->a[89462] = 1;
	v->a[89463] = anon_sym_DOLLAR_LPAREN;
	v->a[89464] = actions(3426);
	v->a[89465] = 1;
	v->a[89466] = anon_sym_BQUOTE;
	v->a[89467] = actions(3530);
	v->a[89468] = 1;
	v->a[89469] = anon_sym_DOLLAR;
	v->a[89470] = actions(3532);
	v->a[89471] = 1;
	v->a[89472] = anon_sym_DQUOTE;
	v->a[89473] = state(1833);
	v->a[89474] = 1;
	v->a[89475] = aux_sym_string_repeat1;
	v->a[89476] = state(1963);
	v->a[89477] = 4;
	v->a[89478] = sym_arithmetic_expansion;
	v->a[89479] = sym_simple_expansion;
	small_parse_table_4474(v);
}

void	small_parse_table_4474(t_small_parse_table_array *v)
{
	v->a[89480] = sym_expansion;
	v->a[89481] = sym_command_substitution;
	v->a[89482] = 4;
	v->a[89483] = actions(3);
	v->a[89484] = 1;
	v->a[89485] = sym_comment;
	v->a[89486] = actions(435);
	v->a[89487] = 1;
	v->a[89488] = sym_variable_name;
	v->a[89489] = actions(433);
	v->a[89490] = 2;
	v->a[89491] = aux_sym__simple_variable_name_token1;
	v->a[89492] = aux_sym__multiline_variable_name_token1;
	v->a[89493] = actions(431);
	v->a[89494] = 9;
	v->a[89495] = anon_sym_BANG;
	v->a[89496] = anon_sym_DASH;
	v->a[89497] = anon_sym_STAR;
	v->a[89498] = anon_sym_QMARK;
	v->a[89499] = anon_sym_DOLLAR;
	small_parse_table_4475(v);
}

/* EOF small_parse_table_894.c */
