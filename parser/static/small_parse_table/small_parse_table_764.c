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
	v->a[76400] = actions(3113);
	v->a[76401] = 1;
	v->a[76402] = anon_sym_DOLLAR;
	v->a[76403] = actions(3115);
	v->a[76404] = 1;
	v->a[76405] = anon_sym_DQUOTE;
	v->a[76406] = state(1681);
	v->a[76407] = 1;
	v->a[76408] = aux_sym_string_repeat1;
	v->a[76409] = state(1739);
	v->a[76410] = 4;
	v->a[76411] = sym_arithmetic_expansion;
	v->a[76412] = sym_simple_expansion;
	v->a[76413] = sym_expansion;
	v->a[76414] = sym_command_substitution;
	v->a[76415] = 10;
	v->a[76416] = actions(3);
	v->a[76417] = 1;
	v->a[76418] = sym_comment;
	v->a[76419] = actions(3071);
	small_parse_table_3821(v);
}

void	small_parse_table_3821(t_small_parse_table_array *v)
{
	v->a[76420] = 1;
	v->a[76421] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76422] = actions(3077);
	v->a[76423] = 1;
	v->a[76424] = sym_string_content;
	v->a[76425] = actions(3079);
	v->a[76426] = 1;
	v->a[76427] = anon_sym_DOLLAR_LBRACE;
	v->a[76428] = actions(3081);
	v->a[76429] = 1;
	v->a[76430] = anon_sym_DOLLAR_LPAREN;
	v->a[76431] = actions(3083);
	v->a[76432] = 1;
	v->a[76433] = anon_sym_BQUOTE;
	v->a[76434] = actions(3117);
	v->a[76435] = 1;
	v->a[76436] = anon_sym_DOLLAR;
	v->a[76437] = actions(3119);
	v->a[76438] = 1;
	v->a[76439] = anon_sym_DQUOTE;
	small_parse_table_3822(v);
}

void	small_parse_table_3822(t_small_parse_table_array *v)
{
	v->a[76440] = state(1681);
	v->a[76441] = 1;
	v->a[76442] = aux_sym_string_repeat1;
	v->a[76443] = state(1739);
	v->a[76444] = 4;
	v->a[76445] = sym_arithmetic_expansion;
	v->a[76446] = sym_simple_expansion;
	v->a[76447] = sym_expansion;
	v->a[76448] = sym_command_substitution;
	v->a[76449] = 10;
	v->a[76450] = actions(3);
	v->a[76451] = 1;
	v->a[76452] = sym_comment;
	v->a[76453] = actions(3071);
	v->a[76454] = 1;
	v->a[76455] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76456] = actions(3077);
	v->a[76457] = 1;
	v->a[76458] = sym_string_content;
	v->a[76459] = actions(3079);
	small_parse_table_3823(v);
}

void	small_parse_table_3823(t_small_parse_table_array *v)
{
	v->a[76460] = 1;
	v->a[76461] = anon_sym_DOLLAR_LBRACE;
	v->a[76462] = actions(3081);
	v->a[76463] = 1;
	v->a[76464] = anon_sym_DOLLAR_LPAREN;
	v->a[76465] = actions(3083);
	v->a[76466] = 1;
	v->a[76467] = anon_sym_BQUOTE;
	v->a[76468] = actions(3121);
	v->a[76469] = 1;
	v->a[76470] = anon_sym_DOLLAR;
	v->a[76471] = actions(3123);
	v->a[76472] = 1;
	v->a[76473] = anon_sym_DQUOTE;
	v->a[76474] = state(1681);
	v->a[76475] = 1;
	v->a[76476] = aux_sym_string_repeat1;
	v->a[76477] = state(1739);
	v->a[76478] = 4;
	v->a[76479] = sym_arithmetic_expansion;
	small_parse_table_3824(v);
}

void	small_parse_table_3824(t_small_parse_table_array *v)
{
	v->a[76480] = sym_simple_expansion;
	v->a[76481] = sym_expansion;
	v->a[76482] = sym_command_substitution;
	v->a[76483] = 10;
	v->a[76484] = actions(3);
	v->a[76485] = 1;
	v->a[76486] = sym_comment;
	v->a[76487] = actions(3071);
	v->a[76488] = 1;
	v->a[76489] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76490] = actions(3077);
	v->a[76491] = 1;
	v->a[76492] = sym_string_content;
	v->a[76493] = actions(3079);
	v->a[76494] = 1;
	v->a[76495] = anon_sym_DOLLAR_LBRACE;
	v->a[76496] = actions(3081);
	v->a[76497] = 1;
	v->a[76498] = anon_sym_DOLLAR_LPAREN;
	v->a[76499] = actions(3083);
	small_parse_table_3825(v);
}

/* EOF small_parse_table_764.c */
