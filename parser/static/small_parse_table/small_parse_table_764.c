/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_764.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3820(t_small_parse_table_array *v)
{
	v->a[76400] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76401] = actions(3064);
	v->a[76402] = 1;
	v->a[76403] = sym_string_content;
	v->a[76404] = actions(3066);
	v->a[76405] = 1;
	v->a[76406] = anon_sym_DOLLAR_LBRACE;
	v->a[76407] = actions(3068);
	v->a[76408] = 1;
	v->a[76409] = anon_sym_DOLLAR_LPAREN;
	v->a[76410] = actions(3070);
	v->a[76411] = 1;
	v->a[76412] = anon_sym_BQUOTE;
	v->a[76413] = actions(3254);
	v->a[76414] = 1;
	v->a[76415] = anon_sym_DOLLAR;
	v->a[76416] = actions(3256);
	v->a[76417] = 1;
	v->a[76418] = anon_sym_DQUOTE;
	v->a[76419] = state(1648);
	small_parse_table_3821(v);
}

void	small_parse_table_3821(t_small_parse_table_array *v)
{
	v->a[76420] = 1;
	v->a[76421] = aux_sym_string_repeat1;
	v->a[76422] = state(1748);
	v->a[76423] = 4;
	v->a[76424] = sym_arithmetic_expansion;
	v->a[76425] = sym_simple_expansion;
	v->a[76426] = sym_expansion;
	v->a[76427] = sym_command_substitution;
	v->a[76428] = 10;
	v->a[76429] = actions(3);
	v->a[76430] = 1;
	v->a[76431] = sym_comment;
	v->a[76432] = actions(3058);
	v->a[76433] = 1;
	v->a[76434] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76435] = actions(3064);
	v->a[76436] = 1;
	v->a[76437] = sym_string_content;
	v->a[76438] = actions(3066);
	v->a[76439] = 1;
	small_parse_table_3822(v);
}

void	small_parse_table_3822(t_small_parse_table_array *v)
{
	v->a[76440] = anon_sym_DOLLAR_LBRACE;
	v->a[76441] = actions(3068);
	v->a[76442] = 1;
	v->a[76443] = anon_sym_DOLLAR_LPAREN;
	v->a[76444] = actions(3070);
	v->a[76445] = 1;
	v->a[76446] = anon_sym_BQUOTE;
	v->a[76447] = actions(3258);
	v->a[76448] = 1;
	v->a[76449] = anon_sym_DOLLAR;
	v->a[76450] = actions(3260);
	v->a[76451] = 1;
	v->a[76452] = anon_sym_DQUOTE;
	v->a[76453] = state(1640);
	v->a[76454] = 1;
	v->a[76455] = aux_sym_string_repeat1;
	v->a[76456] = state(1748);
	v->a[76457] = 4;
	v->a[76458] = sym_arithmetic_expansion;
	v->a[76459] = sym_simple_expansion;
	small_parse_table_3823(v);
}

void	small_parse_table_3823(t_small_parse_table_array *v)
{
	v->a[76460] = sym_expansion;
	v->a[76461] = sym_command_substitution;
	v->a[76462] = 8;
	v->a[76463] = actions(3);
	v->a[76464] = 1;
	v->a[76465] = sym_comment;
	v->a[76466] = actions(3040);
	v->a[76467] = 1;
	v->a[76468] = anon_sym_POUND;
	v->a[76469] = actions(3042);
	v->a[76470] = 1;
	v->a[76471] = aux_sym__simple_variable_name_token1;
	v->a[76472] = actions(3044);
	v->a[76473] = 1;
	v->a[76474] = anon_sym_0;
	v->a[76475] = actions(3046);
	v->a[76476] = 1;
	v->a[76477] = sym_variable_name;
	v->a[76478] = actions(3262);
	v->a[76479] = 1;
	small_parse_table_3824(v);
}

void	small_parse_table_3824(t_small_parse_table_array *v)
{
	v->a[76480] = anon_sym_RBRACE;
	v->a[76481] = state(2105);
	v->a[76482] = 1;
	v->a[76483] = sym__expansion_body;
	v->a[76484] = actions(3038);
	v->a[76485] = 6;
	v->a[76486] = anon_sym_BANG;
	v->a[76487] = anon_sym_DASH;
	v->a[76488] = anon_sym_STAR;
	v->a[76489] = anon_sym_QMARK;
	v->a[76490] = anon_sym_DOLLAR;
	v->a[76491] = anon_sym_AT;
	v->a[76492] = 8;
	v->a[76493] = actions(3);
	v->a[76494] = 1;
	v->a[76495] = sym_comment;
	v->a[76496] = actions(3040);
	v->a[76497] = 1;
	v->a[76498] = anon_sym_POUND;
	v->a[76499] = actions(3042);
	small_parse_table_3825(v);
}

/* EOF small_parse_table_764.c */
