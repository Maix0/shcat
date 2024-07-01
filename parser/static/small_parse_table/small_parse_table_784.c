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
	v->a[78400] = sym_command_substitution;
	v->a[78401] = 4;
	v->a[78402] = actions(3);
	v->a[78403] = 1;
	v->a[78404] = sym_comment;
	v->a[78405] = actions(3341);
	v->a[78406] = 1;
	v->a[78407] = anon_sym_esac;
	v->a[78408] = actions(3343);
	v->a[78409] = 1;
	v->a[78410] = sym_extglob_pattern;
	v->a[78411] = actions(3339);
	v->a[78412] = 10;
	v->a[78413] = anon_sym_LPAREN;
	v->a[78414] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78415] = anon_sym_DOLLAR;
	v->a[78416] = anon_sym_DQUOTE;
	v->a[78417] = sym_raw_string;
	v->a[78418] = sym_number;
	v->a[78419] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3921(v);
}

void	small_parse_table_3921(t_small_parse_table_array *v)
{
	v->a[78420] = anon_sym_DOLLAR_LPAREN;
	v->a[78421] = anon_sym_BQUOTE;
	v->a[78422] = sym_word;
	v->a[78423] = 4;
	v->a[78424] = actions(3);
	v->a[78425] = 1;
	v->a[78426] = sym_comment;
	v->a[78427] = actions(3347);
	v->a[78428] = 1;
	v->a[78429] = anon_sym_esac;
	v->a[78430] = actions(3349);
	v->a[78431] = 1;
	v->a[78432] = sym_extglob_pattern;
	v->a[78433] = actions(3345);
	v->a[78434] = 10;
	v->a[78435] = anon_sym_LPAREN;
	v->a[78436] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78437] = anon_sym_DOLLAR;
	v->a[78438] = anon_sym_DQUOTE;
	v->a[78439] = sym_raw_string;
	small_parse_table_3922(v);
}

void	small_parse_table_3922(t_small_parse_table_array *v)
{
	v->a[78440] = sym_number;
	v->a[78441] = anon_sym_DOLLAR_LBRACE;
	v->a[78442] = anon_sym_DOLLAR_LPAREN;
	v->a[78443] = anon_sym_BQUOTE;
	v->a[78444] = sym_word;
	v->a[78445] = 4;
	v->a[78446] = actions(3);
	v->a[78447] = 1;
	v->a[78448] = sym_comment;
	v->a[78449] = actions(1166);
	v->a[78450] = 1;
	v->a[78451] = sym_variable_name;
	v->a[78452] = actions(1164);
	v->a[78453] = 2;
	v->a[78454] = aux_sym__simple_variable_name_token1;
	v->a[78455] = aux_sym__multiline_variable_name_token1;
	v->a[78456] = actions(1162);
	v->a[78457] = 9;
	v->a[78458] = anon_sym_BANG;
	v->a[78459] = anon_sym_DASH;
	small_parse_table_3923(v);
}

void	small_parse_table_3923(t_small_parse_table_array *v)
{
	v->a[78460] = anon_sym_STAR;
	v->a[78461] = anon_sym_QMARK;
	v->a[78462] = anon_sym_DOLLAR;
	v->a[78463] = anon_sym_POUND;
	v->a[78464] = anon_sym_AT;
	v->a[78465] = anon_sym_0;
	v->a[78466] = anon_sym__;
	v->a[78467] = 10;
	v->a[78468] = actions(3);
	v->a[78469] = 1;
	v->a[78470] = sym_comment;
	v->a[78471] = actions(3071);
	v->a[78472] = 1;
	v->a[78473] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78474] = actions(3077);
	v->a[78475] = 1;
	v->a[78476] = sym_string_content;
	v->a[78477] = actions(3079);
	v->a[78478] = 1;
	v->a[78479] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3924(v);
}

void	small_parse_table_3924(t_small_parse_table_array *v)
{
	v->a[78480] = actions(3081);
	v->a[78481] = 1;
	v->a[78482] = anon_sym_DOLLAR_LPAREN;
	v->a[78483] = actions(3083);
	v->a[78484] = 1;
	v->a[78485] = anon_sym_BQUOTE;
	v->a[78486] = actions(3351);
	v->a[78487] = 1;
	v->a[78488] = anon_sym_DOLLAR;
	v->a[78489] = actions(3353);
	v->a[78490] = 1;
	v->a[78491] = anon_sym_DQUOTE;
	v->a[78492] = state(1692);
	v->a[78493] = 1;
	v->a[78494] = aux_sym_string_repeat1;
	v->a[78495] = state(1739);
	v->a[78496] = 4;
	v->a[78497] = sym_arithmetic_expansion;
	v->a[78498] = sym_simple_expansion;
	v->a[78499] = sym_expansion;
	small_parse_table_3925(v);
}

/* EOF small_parse_table_784.c */
