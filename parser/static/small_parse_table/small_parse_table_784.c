/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_784.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3920(t_small_parse_table_array *v)
{
	v->a[78400] = 1;
	v->a[78401] = anon_sym_DQUOTE;
	v->a[78402] = actions(3186);
	v->a[78403] = 1;
	v->a[78404] = aux_sym_number_token1;
	v->a[78405] = actions(3188);
	v->a[78406] = 1;
	v->a[78407] = aux_sym_number_token2;
	v->a[78408] = actions(3190);
	v->a[78409] = 1;
	v->a[78410] = anon_sym_DOLLAR_LBRACE;
	v->a[78411] = actions(3192);
	v->a[78412] = 1;
	v->a[78413] = anon_sym_DOLLAR_LPAREN;
	v->a[78414] = actions(3194);
	v->a[78415] = 1;
	v->a[78416] = anon_sym_BQUOTE;
	v->a[78417] = actions(3196);
	v->a[78418] = 1;
	v->a[78419] = sym__bare_dollar;
	small_parse_table_3921(v);
}

void	small_parse_table_3921(t_small_parse_table_array *v)
{
	v->a[78420] = actions(3212);
	v->a[78421] = 1;
	v->a[78422] = anon_sym_DOLLAR;
	v->a[78423] = actions(3178);
	v->a[78424] = 3;
	v->a[78425] = sym_raw_string;
	v->a[78426] = sym__comment_word;
	v->a[78427] = sym_word;
	v->a[78428] = state(1879);
	v->a[78429] = 6;
	v->a[78430] = sym_arithmetic_expansion;
	v->a[78431] = sym_string;
	v->a[78432] = sym_number;
	v->a[78433] = sym_simple_expansion;
	v->a[78434] = sym_expansion;
	v->a[78435] = sym_command_substitution;
	v->a[78436] = 12;
	v->a[78437] = actions(3);
	v->a[78438] = 1;
	v->a[78439] = sym_comment;
	small_parse_table_3922(v);
}

void	small_parse_table_3922(t_small_parse_table_array *v)
{
	v->a[78440] = actions(2781);
	v->a[78441] = 1;
	v->a[78442] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78443] = actions(2783);
	v->a[78444] = 1;
	v->a[78445] = anon_sym_DOLLAR;
	v->a[78446] = actions(2785);
	v->a[78447] = 1;
	v->a[78448] = anon_sym_DQUOTE;
	v->a[78449] = actions(2787);
	v->a[78450] = 1;
	v->a[78451] = aux_sym_number_token1;
	v->a[78452] = actions(2789);
	v->a[78453] = 1;
	v->a[78454] = aux_sym_number_token2;
	v->a[78455] = actions(2791);
	v->a[78456] = 1;
	v->a[78457] = anon_sym_DOLLAR_LBRACE;
	v->a[78458] = actions(2793);
	v->a[78459] = 1;
	small_parse_table_3923(v);
}

void	small_parse_table_3923(t_small_parse_table_array *v)
{
	v->a[78460] = anon_sym_DOLLAR_LPAREN;
	v->a[78461] = actions(2795);
	v->a[78462] = 1;
	v->a[78463] = anon_sym_BQUOTE;
	v->a[78464] = actions(3085);
	v->a[78465] = 1;
	v->a[78466] = sym__bare_dollar;
	v->a[78467] = actions(3081);
	v->a[78468] = 3;
	v->a[78469] = sym_raw_string;
	v->a[78470] = sym__comment_word;
	v->a[78471] = sym_word;
	v->a[78472] = state(1320);
	v->a[78473] = 6;
	v->a[78474] = sym_arithmetic_expansion;
	v->a[78475] = sym_string;
	v->a[78476] = sym_number;
	v->a[78477] = sym_simple_expansion;
	v->a[78478] = sym_expansion;
	v->a[78479] = sym_command_substitution;
	small_parse_table_3924(v);
}

void	small_parse_table_3924(t_small_parse_table_array *v)
{
	v->a[78480] = 12;
	v->a[78481] = actions(3);
	v->a[78482] = 1;
	v->a[78483] = sym_comment;
	v->a[78484] = actions(978);
	v->a[78485] = 1;
	v->a[78486] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78487] = actions(980);
	v->a[78488] = 1;
	v->a[78489] = anon_sym_DOLLAR;
	v->a[78490] = actions(982);
	v->a[78491] = 1;
	v->a[78492] = anon_sym_DQUOTE;
	v->a[78493] = actions(984);
	v->a[78494] = 1;
	v->a[78495] = aux_sym_number_token1;
	v->a[78496] = actions(986);
	v->a[78497] = 1;
	v->a[78498] = aux_sym_number_token2;
	v->a[78499] = actions(988);
	small_parse_table_3925(v);
}

/* EOF small_parse_table_784.c */
