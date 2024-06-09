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
	v->a[76400] = sym_raw_string;
	v->a[76401] = sym_word;
	v->a[76402] = state(226);
	v->a[76403] = 2;
	v->a[76404] = sym_concatenation;
	v->a[76405] = aux_sym_for_statement_repeat1;
	v->a[76406] = state(431);
	v->a[76407] = 6;
	v->a[76408] = sym_arithmetic_expansion;
	v->a[76409] = sym_string;
	v->a[76410] = sym_number;
	v->a[76411] = sym_simple_expansion;
	v->a[76412] = sym_expansion;
	v->a[76413] = sym_command_substitution;
	v->a[76414] = 12;
	v->a[76415] = actions(3);
	v->a[76416] = 1;
	v->a[76417] = sym_comment;
	v->a[76418] = actions(933);
	v->a[76419] = 1;
	small_parse_table_3821(v);
}

void	small_parse_table_3821(t_small_parse_table_array *v)
{
	v->a[76420] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76421] = actions(935);
	v->a[76422] = 1;
	v->a[76423] = anon_sym_DOLLAR;
	v->a[76424] = actions(937);
	v->a[76425] = 1;
	v->a[76426] = anon_sym_DQUOTE;
	v->a[76427] = actions(939);
	v->a[76428] = 1;
	v->a[76429] = aux_sym_number_token1;
	v->a[76430] = actions(941);
	v->a[76431] = 1;
	v->a[76432] = aux_sym_number_token2;
	v->a[76433] = actions(943);
	v->a[76434] = 1;
	v->a[76435] = anon_sym_DOLLAR_LBRACE;
	v->a[76436] = actions(945);
	v->a[76437] = 1;
	v->a[76438] = anon_sym_DOLLAR_LPAREN;
	v->a[76439] = actions(947);
	small_parse_table_3822(v);
}

void	small_parse_table_3822(t_small_parse_table_array *v)
{
	v->a[76440] = 1;
	v->a[76441] = anon_sym_BQUOTE;
	v->a[76442] = actions(2641);
	v->a[76443] = 2;
	v->a[76444] = sym_raw_string;
	v->a[76445] = sym_word;
	v->a[76446] = state(1224);
	v->a[76447] = 2;
	v->a[76448] = sym_concatenation;
	v->a[76449] = aux_sym_for_statement_repeat1;
	v->a[76450] = state(1503);
	v->a[76451] = 6;
	v->a[76452] = sym_arithmetic_expansion;
	v->a[76453] = sym_string;
	v->a[76454] = sym_number;
	v->a[76455] = sym_simple_expansion;
	v->a[76456] = sym_expansion;
	v->a[76457] = sym_command_substitution;
	v->a[76458] = 3;
	v->a[76459] = actions(1404);
	small_parse_table_3823(v);
}

void	small_parse_table_3823(t_small_parse_table_array *v)
{
	v->a[76460] = 1;
	v->a[76461] = sym_comment;
	v->a[76462] = actions(1299);
	v->a[76463] = 7;
	v->a[76464] = anon_sym_PIPE;
	v->a[76465] = anon_sym_LT;
	v->a[76466] = anon_sym_GT;
	v->a[76467] = anon_sym_AMP_GT;
	v->a[76468] = anon_sym_LT_AMP;
	v->a[76469] = anon_sym_GT_AMP;
	v->a[76470] = anon_sym_LT_LT;
	v->a[76471] = actions(1301);
	v->a[76472] = 11;
	v->a[76473] = sym_file_descriptor;
	v->a[76474] = sym__concat;
	v->a[76475] = anon_sym_AMP_AMP;
	v->a[76476] = anon_sym_PIPE_PIPE;
	v->a[76477] = anon_sym_GT_GT;
	v->a[76478] = anon_sym_AMP_GT_GT;
	v->a[76479] = anon_sym_GT_PIPE;
	small_parse_table_3824(v);
}

void	small_parse_table_3824(t_small_parse_table_array *v)
{
	v->a[76480] = anon_sym_LT_AMP_DASH;
	v->a[76481] = anon_sym_GT_AMP_DASH;
	v->a[76482] = anon_sym_LT_LT_DASH;
	v->a[76483] = aux_sym_concatenation_token1;
	v->a[76484] = 3;
	v->a[76485] = actions(1404);
	v->a[76486] = 1;
	v->a[76487] = sym_comment;
	v->a[76488] = actions(1309);
	v->a[76489] = 7;
	v->a[76490] = anon_sym_PIPE;
	v->a[76491] = anon_sym_LT;
	v->a[76492] = anon_sym_GT;
	v->a[76493] = anon_sym_AMP_GT;
	v->a[76494] = anon_sym_LT_AMP;
	v->a[76495] = anon_sym_GT_AMP;
	v->a[76496] = anon_sym_LT_LT;
	v->a[76497] = actions(1311);
	v->a[76498] = 11;
	v->a[76499] = sym_file_descriptor;
	small_parse_table_3825(v);
}

/* EOF small_parse_table_764.c */
