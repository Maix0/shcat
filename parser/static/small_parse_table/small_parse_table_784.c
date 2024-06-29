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
	v->a[78400] = 10;
	v->a[78401] = actions(3);
	v->a[78402] = 1;
	v->a[78403] = sym_comment;
	v->a[78404] = actions(2809);
	v->a[78405] = 1;
	v->a[78406] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78407] = actions(2811);
	v->a[78408] = 1;
	v->a[78409] = anon_sym_DOLLAR;
	v->a[78410] = actions(2813);
	v->a[78411] = 1;
	v->a[78412] = anon_sym_DQUOTE;
	v->a[78413] = actions(2815);
	v->a[78414] = 1;
	v->a[78415] = anon_sym_DOLLAR_LBRACE;
	v->a[78416] = actions(2817);
	v->a[78417] = 1;
	v->a[78418] = anon_sym_DOLLAR_LPAREN;
	v->a[78419] = actions(2819);
	small_parse_table_3921(v);
}

void	small_parse_table_3921(t_small_parse_table_array *v)
{
	v->a[78420] = 1;
	v->a[78421] = anon_sym_BQUOTE;
	v->a[78422] = actions(2821);
	v->a[78423] = 1;
	v->a[78424] = sym__bare_dollar;
	v->a[78425] = actions(2807);
	v->a[78426] = 5;
	v->a[78427] = aux_sym_concatenation_token1;
	v->a[78428] = sym_raw_string;
	v->a[78429] = sym_number;
	v->a[78430] = sym__comment_word;
	v->a[78431] = sym_word;
	v->a[78432] = state(992);
	v->a[78433] = 5;
	v->a[78434] = sym_arithmetic_expansion;
	v->a[78435] = sym_string;
	v->a[78436] = sym_simple_expansion;
	v->a[78437] = sym_expansion;
	v->a[78438] = sym_command_substitution;
	v->a[78439] = 10;
	small_parse_table_3922(v);
}

void	small_parse_table_3922(t_small_parse_table_array *v)
{
	v->a[78440] = actions(3);
	v->a[78441] = 1;
	v->a[78442] = sym_comment;
	v->a[78443] = actions(904);
	v->a[78444] = 1;
	v->a[78445] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78446] = actions(908);
	v->a[78447] = 1;
	v->a[78448] = anon_sym_DQUOTE;
	v->a[78449] = actions(910);
	v->a[78450] = 1;
	v->a[78451] = anon_sym_DOLLAR_LBRACE;
	v->a[78452] = actions(912);
	v->a[78453] = 1;
	v->a[78454] = anon_sym_DOLLAR_LPAREN;
	v->a[78455] = actions(914);
	v->a[78456] = 1;
	v->a[78457] = anon_sym_BQUOTE;
	v->a[78458] = actions(2825);
	v->a[78459] = 1;
	small_parse_table_3923(v);
}

void	small_parse_table_3923(t_small_parse_table_array *v)
{
	v->a[78460] = anon_sym_DOLLAR;
	v->a[78461] = actions(2827);
	v->a[78462] = 1;
	v->a[78463] = sym__bare_dollar;
	v->a[78464] = actions(2823);
	v->a[78465] = 5;
	v->a[78466] = aux_sym_concatenation_token1;
	v->a[78467] = sym_raw_string;
	v->a[78468] = sym_number;
	v->a[78469] = sym__comment_word;
	v->a[78470] = sym_word;
	v->a[78471] = state(1040);
	v->a[78472] = 5;
	v->a[78473] = sym_arithmetic_expansion;
	v->a[78474] = sym_string;
	v->a[78475] = sym_simple_expansion;
	v->a[78476] = sym_expansion;
	v->a[78477] = sym_command_substitution;
	v->a[78478] = 10;
	v->a[78479] = actions(3);
	small_parse_table_3924(v);
}

void	small_parse_table_3924(t_small_parse_table_array *v)
{
	v->a[78480] = 1;
	v->a[78481] = sym_comment;
	v->a[78482] = actions(2701);
	v->a[78483] = 1;
	v->a[78484] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78485] = actions(2705);
	v->a[78486] = 1;
	v->a[78487] = anon_sym_DQUOTE;
	v->a[78488] = actions(2707);
	v->a[78489] = 1;
	v->a[78490] = anon_sym_DOLLAR_LBRACE;
	v->a[78491] = actions(2709);
	v->a[78492] = 1;
	v->a[78493] = anon_sym_DOLLAR_LPAREN;
	v->a[78494] = actions(2711);
	v->a[78495] = 1;
	v->a[78496] = anon_sym_BQUOTE;
	v->a[78497] = actions(2831);
	v->a[78498] = 1;
	v->a[78499] = anon_sym_DOLLAR;
	small_parse_table_3925(v);
}

/* EOF small_parse_table_784.c */
