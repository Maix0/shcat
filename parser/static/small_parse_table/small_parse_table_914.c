/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_914.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4570(t_small_parse_table_array *v)
{
	v->a[91400] = anon_sym_POUND;
	v->a[91401] = anon_sym_AT;
	v->a[91402] = anon_sym_0;
	v->a[91403] = anon_sym__;
	v->a[91404] = 10;
	v->a[91405] = actions(3);
	v->a[91406] = 1;
	v->a[91407] = sym_comment;
	v->a[91408] = actions(3414);
	v->a[91409] = 1;
	v->a[91410] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91411] = actions(3420);
	v->a[91412] = 1;
	v->a[91413] = sym_string_content;
	v->a[91414] = actions(3422);
	v->a[91415] = 1;
	v->a[91416] = anon_sym_DOLLAR_LBRACE;
	v->a[91417] = actions(3424);
	v->a[91418] = 1;
	v->a[91419] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4571(v);
}

void	small_parse_table_4571(t_small_parse_table_array *v)
{
	v->a[91420] = actions(3426);
	v->a[91421] = 1;
	v->a[91422] = anon_sym_BQUOTE;
	v->a[91423] = actions(3766);
	v->a[91424] = 1;
	v->a[91425] = anon_sym_DOLLAR;
	v->a[91426] = actions(3768);
	v->a[91427] = 1;
	v->a[91428] = anon_sym_DQUOTE;
	v->a[91429] = state(1908);
	v->a[91430] = 1;
	v->a[91431] = aux_sym_string_repeat1;
	v->a[91432] = state(1963);
	v->a[91433] = 4;
	v->a[91434] = sym_arithmetic_expansion;
	v->a[91435] = sym_simple_expansion;
	v->a[91436] = sym_expansion;
	v->a[91437] = sym_command_substitution;
	v->a[91438] = 4;
	v->a[91439] = actions(3);
	small_parse_table_4572(v);
}

void	small_parse_table_4572(t_small_parse_table_array *v)
{
	v->a[91440] = 1;
	v->a[91441] = sym_comment;
	v->a[91442] = actions(399);
	v->a[91443] = 1;
	v->a[91444] = sym_variable_name;
	v->a[91445] = actions(397);
	v->a[91446] = 2;
	v->a[91447] = aux_sym__simple_variable_name_token1;
	v->a[91448] = aux_sym__multiline_variable_name_token1;
	v->a[91449] = actions(395);
	v->a[91450] = 9;
	v->a[91451] = anon_sym_BANG;
	v->a[91452] = anon_sym_DASH;
	v->a[91453] = anon_sym_STAR;
	v->a[91454] = anon_sym_QMARK;
	v->a[91455] = anon_sym_DOLLAR;
	v->a[91456] = anon_sym_POUND;
	v->a[91457] = anon_sym_AT;
	v->a[91458] = anon_sym_0;
	v->a[91459] = anon_sym__;
	small_parse_table_4573(v);
}

void	small_parse_table_4573(t_small_parse_table_array *v)
{
	v->a[91460] = 4;
	v->a[91461] = actions(3);
	v->a[91462] = 1;
	v->a[91463] = sym_comment;
	v->a[91464] = actions(937);
	v->a[91465] = 1;
	v->a[91466] = sym_variable_name;
	v->a[91467] = actions(935);
	v->a[91468] = 2;
	v->a[91469] = aux_sym__simple_variable_name_token1;
	v->a[91470] = aux_sym__multiline_variable_name_token1;
	v->a[91471] = actions(933);
	v->a[91472] = 9;
	v->a[91473] = anon_sym_BANG;
	v->a[91474] = anon_sym_DASH;
	v->a[91475] = anon_sym_STAR;
	v->a[91476] = anon_sym_QMARK;
	v->a[91477] = anon_sym_DOLLAR;
	v->a[91478] = anon_sym_POUND;
	v->a[91479] = anon_sym_AT;
	small_parse_table_4574(v);
}

void	small_parse_table_4574(t_small_parse_table_array *v)
{
	v->a[91480] = anon_sym_0;
	v->a[91481] = anon_sym__;
	v->a[91482] = 10;
	v->a[91483] = actions(3);
	v->a[91484] = 1;
	v->a[91485] = sym_comment;
	v->a[91486] = actions(3414);
	v->a[91487] = 1;
	v->a[91488] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91489] = actions(3420);
	v->a[91490] = 1;
	v->a[91491] = sym_string_content;
	v->a[91492] = actions(3422);
	v->a[91493] = 1;
	v->a[91494] = anon_sym_DOLLAR_LBRACE;
	v->a[91495] = actions(3424);
	v->a[91496] = 1;
	v->a[91497] = anon_sym_DOLLAR_LPAREN;
	v->a[91498] = actions(3426);
	v->a[91499] = 1;
	small_parse_table_4575(v);
}

/* EOF small_parse_table_914.c */
