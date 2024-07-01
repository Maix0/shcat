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
	v->a[76400] = 1;
	v->a[76401] = anon_sym_DOLLAR_LBRACE;
	v->a[76402] = actions(1786);
	v->a[76403] = 1;
	v->a[76404] = anon_sym_DOLLAR_LPAREN;
	v->a[76405] = actions(1788);
	v->a[76406] = 1;
	v->a[76407] = anon_sym_BQUOTE;
	v->a[76408] = actions(1790);
	v->a[76409] = 1;
	v->a[76410] = sym_extglob_pattern;
	v->a[76411] = state(2097);
	v->a[76412] = 2;
	v->a[76413] = sym_concatenation;
	v->a[76414] = sym__extglob_blob;
	v->a[76415] = actions(2907);
	v->a[76416] = 3;
	v->a[76417] = sym_raw_string;
	v->a[76418] = sym_number;
	v->a[76419] = sym_word;
	small_parse_table_3821(v);
}

void	small_parse_table_3821(t_small_parse_table_array *v)
{
	v->a[76420] = state(2014);
	v->a[76421] = 5;
	v->a[76422] = sym_arithmetic_expansion;
	v->a[76423] = sym_string;
	v->a[76424] = sym_simple_expansion;
	v->a[76425] = sym_expansion;
	v->a[76426] = sym_command_substitution;
	v->a[76427] = 10;
	v->a[76428] = actions(3);
	v->a[76429] = 1;
	v->a[76430] = sym_comment;
	v->a[76431] = actions(2715);
	v->a[76432] = 1;
	v->a[76433] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76434] = actions(2719);
	v->a[76435] = 1;
	v->a[76436] = anon_sym_DQUOTE;
	v->a[76437] = actions(2721);
	v->a[76438] = 1;
	v->a[76439] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3822(v);
}

void	small_parse_table_3822(t_small_parse_table_array *v)
{
	v->a[76440] = actions(2723);
	v->a[76441] = 1;
	v->a[76442] = anon_sym_DOLLAR_LPAREN;
	v->a[76443] = actions(2725);
	v->a[76444] = 1;
	v->a[76445] = anon_sym_BQUOTE;
	v->a[76446] = actions(2911);
	v->a[76447] = 1;
	v->a[76448] = anon_sym_DOLLAR;
	v->a[76449] = actions(2913);
	v->a[76450] = 1;
	v->a[76451] = sym__bare_dollar;
	v->a[76452] = actions(2909);
	v->a[76453] = 5;
	v->a[76454] = aux_sym_concatenation_token1;
	v->a[76455] = sym_raw_string;
	v->a[76456] = sym_number;
	v->a[76457] = sym__comment_word;
	v->a[76458] = sym_word;
	v->a[76459] = state(891);
	small_parse_table_3823(v);
}

void	small_parse_table_3823(t_small_parse_table_array *v)
{
	v->a[76460] = 5;
	v->a[76461] = sym_arithmetic_expansion;
	v->a[76462] = sym_string;
	v->a[76463] = sym_simple_expansion;
	v->a[76464] = sym_expansion;
	v->a[76465] = sym_command_substitution;
	v->a[76466] = 10;
	v->a[76467] = actions(3);
	v->a[76468] = 1;
	v->a[76469] = sym_comment;
	v->a[76470] = actions(27);
	v->a[76471] = 1;
	v->a[76472] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76473] = actions(29);
	v->a[76474] = 1;
	v->a[76475] = anon_sym_DOLLAR;
	v->a[76476] = actions(31);
	v->a[76477] = 1;
	v->a[76478] = anon_sym_DQUOTE;
	v->a[76479] = actions(35);
	small_parse_table_3824(v);
}

void	small_parse_table_3824(t_small_parse_table_array *v)
{
	v->a[76480] = 1;
	v->a[76481] = anon_sym_DOLLAR_LBRACE;
	v->a[76482] = actions(37);
	v->a[76483] = 1;
	v->a[76484] = anon_sym_DOLLAR_LPAREN;
	v->a[76485] = actions(39);
	v->a[76486] = 1;
	v->a[76487] = anon_sym_BQUOTE;
	v->a[76488] = actions(2917);
	v->a[76489] = 1;
	v->a[76490] = sym__bare_dollar;
	v->a[76491] = actions(2915);
	v->a[76492] = 5;
	v->a[76493] = aux_sym_concatenation_token1;
	v->a[76494] = sym_raw_string;
	v->a[76495] = sym_number;
	v->a[76496] = sym__comment_word;
	v->a[76497] = sym_word;
	v->a[76498] = state(401);
	v->a[76499] = 5;
	small_parse_table_3825(v);
}

/* EOF small_parse_table_764.c */
