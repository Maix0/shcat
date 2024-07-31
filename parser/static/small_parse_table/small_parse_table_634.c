/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_634.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3170(t_small_parse_table_array *v)
{
	v->a[63400] = state(1369);
	v->a[63401] = 1;
	v->a[63402] = aux_sym_string_repeat1;
	v->a[63403] = state(1477);
	v->a[63404] = 4;
	v->a[63405] = sym_arithmetic_expansion;
	v->a[63406] = sym_simple_expansion;
	v->a[63407] = sym_expansion;
	v->a[63408] = sym_command_substitution;
	v->a[63409] = 10;
	v->a[63410] = actions(3);
	v->a[63411] = 1;
	v->a[63412] = sym_comment;
	v->a[63413] = actions(2548);
	v->a[63414] = 1;
	v->a[63415] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63416] = actions(2554);
	v->a[63417] = 1;
	v->a[63418] = sym_string_content;
	v->a[63419] = actions(2556);
	small_parse_table_3171(v);
}

void	small_parse_table_3171(t_small_parse_table_array *v)
{
	v->a[63420] = 1;
	v->a[63421] = anon_sym_DOLLAR_LBRACE;
	v->a[63422] = actions(2558);
	v->a[63423] = 1;
	v->a[63424] = anon_sym_DOLLAR_LPAREN;
	v->a[63425] = actions(2560);
	v->a[63426] = 1;
	v->a[63427] = anon_sym_BQUOTE;
	v->a[63428] = actions(2785);
	v->a[63429] = 1;
	v->a[63430] = anon_sym_DOLLAR;
	v->a[63431] = actions(2787);
	v->a[63432] = 1;
	v->a[63433] = anon_sym_DQUOTE;
	v->a[63434] = state(1370);
	v->a[63435] = 1;
	v->a[63436] = aux_sym_string_repeat1;
	v->a[63437] = state(1477);
	v->a[63438] = 4;
	v->a[63439] = sym_arithmetic_expansion;
	small_parse_table_3172(v);
}

void	small_parse_table_3172(t_small_parse_table_array *v)
{
	v->a[63440] = sym_simple_expansion;
	v->a[63441] = sym_expansion;
	v->a[63442] = sym_command_substitution;
	v->a[63443] = 3;
	v->a[63444] = actions(407);
	v->a[63445] = 1;
	v->a[63446] = sym_comment;
	v->a[63447] = actions(1875);
	v->a[63448] = 4;
	v->a[63449] = anon_sym_PIPE;
	v->a[63450] = anon_sym_LT;
	v->a[63451] = anon_sym_GT;
	v->a[63452] = anon_sym_LT_LT;
	v->a[63453] = actions(1873);
	v->a[63454] = 8;
	v->a[63455] = anon_sym_AMP_AMP;
	v->a[63456] = anon_sym_PIPE_PIPE;
	v->a[63457] = anon_sym_GT_GT;
	v->a[63458] = anon_sym_LT_AMP;
	v->a[63459] = anon_sym_GT_AMP;
	small_parse_table_3173(v);
}

void	small_parse_table_3173(t_small_parse_table_array *v)
{
	v->a[63460] = anon_sym_GT_PIPE;
	v->a[63461] = anon_sym_LT_GT;
	v->a[63462] = anon_sym_LT_LT_DASH;
	v->a[63463] = 3;
	v->a[63464] = actions(407);
	v->a[63465] = 1;
	v->a[63466] = sym_comment;
	v->a[63467] = actions(1838);
	v->a[63468] = 4;
	v->a[63469] = anon_sym_PIPE;
	v->a[63470] = anon_sym_LT;
	v->a[63471] = anon_sym_GT;
	v->a[63472] = anon_sym_LT_LT;
	v->a[63473] = actions(1836);
	v->a[63474] = 8;
	v->a[63475] = anon_sym_AMP_AMP;
	v->a[63476] = anon_sym_PIPE_PIPE;
	v->a[63477] = anon_sym_GT_GT;
	v->a[63478] = anon_sym_LT_AMP;
	v->a[63479] = anon_sym_GT_AMP;
	small_parse_table_3174(v);
}

void	small_parse_table_3174(t_small_parse_table_array *v)
{
	v->a[63480] = anon_sym_GT_PIPE;
	v->a[63481] = anon_sym_LT_GT;
	v->a[63482] = anon_sym_LT_LT_DASH;
	v->a[63483] = 10;
	v->a[63484] = actions(3);
	v->a[63485] = 1;
	v->a[63486] = sym_comment;
	v->a[63487] = actions(2548);
	v->a[63488] = 1;
	v->a[63489] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63490] = actions(2554);
	v->a[63491] = 1;
	v->a[63492] = sym_string_content;
	v->a[63493] = actions(2556);
	v->a[63494] = 1;
	v->a[63495] = anon_sym_DOLLAR_LBRACE;
	v->a[63496] = actions(2558);
	v->a[63497] = 1;
	v->a[63498] = anon_sym_DOLLAR_LPAREN;
	v->a[63499] = actions(2560);
	small_parse_table_3175(v);
}

/* EOF small_parse_table_634.c */
