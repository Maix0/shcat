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
	v->a[78400] = actions(3340);
	v->a[78401] = 1;
	v->a[78402] = anon_sym_DQUOTE;
	v->a[78403] = state(1685);
	v->a[78404] = 1;
	v->a[78405] = aux_sym_string_repeat1;
	v->a[78406] = state(1748);
	v->a[78407] = 4;
	v->a[78408] = sym_arithmetic_expansion;
	v->a[78409] = sym_simple_expansion;
	v->a[78410] = sym_expansion;
	v->a[78411] = sym_command_substitution;
	v->a[78412] = 4;
	v->a[78413] = actions(3);
	v->a[78414] = 1;
	v->a[78415] = sym_comment;
	v->a[78416] = actions(393);
	v->a[78417] = 1;
	v->a[78418] = sym_variable_name;
	v->a[78419] = actions(391);
	small_parse_table_3921(v);
}

void	small_parse_table_3921(t_small_parse_table_array *v)
{
	v->a[78420] = 2;
	v->a[78421] = aux_sym__simple_variable_name_token1;
	v->a[78422] = aux_sym__multiline_variable_name_token1;
	v->a[78423] = actions(389);
	v->a[78424] = 9;
	v->a[78425] = anon_sym_BANG;
	v->a[78426] = anon_sym_DASH;
	v->a[78427] = anon_sym_STAR;
	v->a[78428] = anon_sym_QMARK;
	v->a[78429] = anon_sym_DOLLAR;
	v->a[78430] = anon_sym_POUND;
	v->a[78431] = anon_sym_AT;
	v->a[78432] = anon_sym_0;
	v->a[78433] = anon_sym__;
	v->a[78434] = 4;
	v->a[78435] = actions(3);
	v->a[78436] = 1;
	v->a[78437] = sym_comment;
	v->a[78438] = actions(2376);
	v->a[78439] = 1;
	small_parse_table_3922(v);
}

void	small_parse_table_3922(t_small_parse_table_array *v)
{
	v->a[78440] = sym_variable_name;
	v->a[78441] = actions(2374);
	v->a[78442] = 2;
	v->a[78443] = aux_sym__simple_variable_name_token1;
	v->a[78444] = aux_sym__multiline_variable_name_token1;
	v->a[78445] = actions(2372);
	v->a[78446] = 9;
	v->a[78447] = anon_sym_BANG;
	v->a[78448] = anon_sym_DASH;
	v->a[78449] = anon_sym_STAR;
	v->a[78450] = anon_sym_QMARK;
	v->a[78451] = anon_sym_DOLLAR;
	v->a[78452] = anon_sym_POUND;
	v->a[78453] = anon_sym_AT;
	v->a[78454] = anon_sym_0;
	v->a[78455] = anon_sym__;
	v->a[78456] = 10;
	v->a[78457] = actions(3);
	v->a[78458] = 1;
	v->a[78459] = sym_comment;
	small_parse_table_3923(v);
}

void	small_parse_table_3923(t_small_parse_table_array *v)
{
	v->a[78460] = actions(3104);
	v->a[78461] = 1;
	v->a[78462] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78463] = actions(3110);
	v->a[78464] = 1;
	v->a[78465] = sym_string_content;
	v->a[78466] = actions(3112);
	v->a[78467] = 1;
	v->a[78468] = anon_sym_DOLLAR_LBRACE;
	v->a[78469] = actions(3114);
	v->a[78470] = 1;
	v->a[78471] = anon_sym_DOLLAR_LPAREN;
	v->a[78472] = actions(3116);
	v->a[78473] = 1;
	v->a[78474] = anon_sym_BQUOTE;
	v->a[78475] = actions(3342);
	v->a[78476] = 1;
	v->a[78477] = anon_sym_DOLLAR;
	v->a[78478] = actions(3344);
	v->a[78479] = 1;
	small_parse_table_3924(v);
}

void	small_parse_table_3924(t_small_parse_table_array *v)
{
	v->a[78480] = anon_sym_DQUOTE;
	v->a[78481] = state(1661);
	v->a[78482] = 1;
	v->a[78483] = aux_sym_string_repeat1;
	v->a[78484] = state(1748);
	v->a[78485] = 4;
	v->a[78486] = sym_arithmetic_expansion;
	v->a[78487] = sym_simple_expansion;
	v->a[78488] = sym_expansion;
	v->a[78489] = sym_command_substitution;
	v->a[78490] = 10;
	v->a[78491] = actions(3);
	v->a[78492] = 1;
	v->a[78493] = sym_comment;
	v->a[78494] = actions(3104);
	v->a[78495] = 1;
	v->a[78496] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78497] = actions(3110);
	v->a[78498] = 1;
	v->a[78499] = sym_string_content;
	small_parse_table_3925(v);
}

/* EOF small_parse_table_784.c */
