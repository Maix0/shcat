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
	v->a[76400] = anon_sym_DOLLAR_LBRACE;
	v->a[76401] = actions(3114);
	v->a[76402] = 1;
	v->a[76403] = anon_sym_DOLLAR_LPAREN;
	v->a[76404] = actions(3116);
	v->a[76405] = 1;
	v->a[76406] = anon_sym_BQUOTE;
	v->a[76407] = state(1638);
	v->a[76408] = 1;
	v->a[76409] = aux_sym_string_repeat1;
	v->a[76410] = state(1748);
	v->a[76411] = 4;
	v->a[76412] = sym_arithmetic_expansion;
	v->a[76413] = sym_simple_expansion;
	v->a[76414] = sym_expansion;
	v->a[76415] = sym_command_substitution;
	v->a[76416] = 10;
	v->a[76417] = actions(3);
	v->a[76418] = 1;
	v->a[76419] = sym_comment;
	small_parse_table_3821(v);
}

void	small_parse_table_3821(t_small_parse_table_array *v)
{
	v->a[76420] = actions(3104);
	v->a[76421] = 1;
	v->a[76422] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76423] = actions(3110);
	v->a[76424] = 1;
	v->a[76425] = sym_string_content;
	v->a[76426] = actions(3112);
	v->a[76427] = 1;
	v->a[76428] = anon_sym_DOLLAR_LBRACE;
	v->a[76429] = actions(3114);
	v->a[76430] = 1;
	v->a[76431] = anon_sym_DOLLAR_LPAREN;
	v->a[76432] = actions(3116);
	v->a[76433] = 1;
	v->a[76434] = anon_sym_BQUOTE;
	v->a[76435] = actions(3118);
	v->a[76436] = 1;
	v->a[76437] = anon_sym_DOLLAR;
	v->a[76438] = actions(3120);
	v->a[76439] = 1;
	small_parse_table_3822(v);
}

void	small_parse_table_3822(t_small_parse_table_array *v)
{
	v->a[76440] = anon_sym_DQUOTE;
	v->a[76441] = state(1661);
	v->a[76442] = 1;
	v->a[76443] = aux_sym_string_repeat1;
	v->a[76444] = state(1748);
	v->a[76445] = 4;
	v->a[76446] = sym_arithmetic_expansion;
	v->a[76447] = sym_simple_expansion;
	v->a[76448] = sym_expansion;
	v->a[76449] = sym_command_substitution;
	v->a[76450] = 4;
	v->a[76451] = actions(3);
	v->a[76452] = 1;
	v->a[76453] = sym_comment;
	v->a[76454] = actions(3124);
	v->a[76455] = 1;
	v->a[76456] = anon_sym_esac;
	v->a[76457] = actions(3126);
	v->a[76458] = 1;
	v->a[76459] = sym_extglob_pattern;
	small_parse_table_3823(v);
}

void	small_parse_table_3823(t_small_parse_table_array *v)
{
	v->a[76460] = actions(3122);
	v->a[76461] = 10;
	v->a[76462] = anon_sym_LPAREN;
	v->a[76463] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76464] = anon_sym_DOLLAR;
	v->a[76465] = anon_sym_DQUOTE;
	v->a[76466] = sym_raw_string;
	v->a[76467] = sym_number;
	v->a[76468] = anon_sym_DOLLAR_LBRACE;
	v->a[76469] = anon_sym_DOLLAR_LPAREN;
	v->a[76470] = anon_sym_BQUOTE;
	v->a[76471] = sym_word;
	v->a[76472] = 4;
	v->a[76473] = actions(3);
	v->a[76474] = 1;
	v->a[76475] = sym_comment;
	v->a[76476] = actions(3124);
	v->a[76477] = 1;
	v->a[76478] = anon_sym_esac;
	v->a[76479] = actions(3126);
	small_parse_table_3824(v);
}

void	small_parse_table_3824(t_small_parse_table_array *v)
{
	v->a[76480] = 1;
	v->a[76481] = sym_extglob_pattern;
	v->a[76482] = actions(3122);
	v->a[76483] = 10;
	v->a[76484] = anon_sym_LPAREN;
	v->a[76485] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76486] = anon_sym_DOLLAR;
	v->a[76487] = anon_sym_DQUOTE;
	v->a[76488] = sym_raw_string;
	v->a[76489] = sym_number;
	v->a[76490] = anon_sym_DOLLAR_LBRACE;
	v->a[76491] = anon_sym_DOLLAR_LPAREN;
	v->a[76492] = anon_sym_BQUOTE;
	v->a[76493] = sym_word;
	v->a[76494] = 4;
	v->a[76495] = actions(3);
	v->a[76496] = 1;
	v->a[76497] = sym_comment;
	v->a[76498] = actions(3132);
	v->a[76499] = 1;
	small_parse_table_3825(v);
}

/* EOF small_parse_table_764.c */
