/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_894.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4470(t_small_parse_table_array *v)
{
	v->a[89400] = anon_sym__;
	v->a[89401] = 3;
	v->a[89402] = actions(3);
	v->a[89403] = 1;
	v->a[89404] = sym_comment;
	v->a[89405] = actions(3870);
	v->a[89406] = 1;
	v->a[89407] = sym_extglob_pattern;
	v->a[89408] = actions(3868);
	v->a[89409] = 11;
	v->a[89410] = anon_sym_LPAREN;
	v->a[89411] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89412] = anon_sym_DOLLAR;
	v->a[89413] = anon_sym_DQUOTE;
	v->a[89414] = sym_raw_string;
	v->a[89415] = aux_sym_number_token1;
	v->a[89416] = aux_sym_number_token2;
	v->a[89417] = anon_sym_DOLLAR_LBRACE;
	v->a[89418] = anon_sym_DOLLAR_LPAREN;
	v->a[89419] = anon_sym_BQUOTE;
	small_parse_table_4471(v);
}

void	small_parse_table_4471(t_small_parse_table_array *v)
{
	v->a[89420] = sym_word;
	v->a[89421] = 10;
	v->a[89422] = actions(3);
	v->a[89423] = 1;
	v->a[89424] = sym_comment;
	v->a[89425] = actions(3452);
	v->a[89426] = 1;
	v->a[89427] = anon_sym_DQUOTE;
	v->a[89428] = actions(3712);
	v->a[89429] = 1;
	v->a[89430] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89431] = actions(3716);
	v->a[89432] = 1;
	v->a[89433] = sym_string_content;
	v->a[89434] = actions(3718);
	v->a[89435] = 1;
	v->a[89436] = anon_sym_DOLLAR_LBRACE;
	v->a[89437] = actions(3720);
	v->a[89438] = 1;
	v->a[89439] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4472(v);
}

void	small_parse_table_4472(t_small_parse_table_array *v)
{
	v->a[89440] = actions(3722);
	v->a[89441] = 1;
	v->a[89442] = anon_sym_BQUOTE;
	v->a[89443] = actions(3872);
	v->a[89444] = 1;
	v->a[89445] = anon_sym_DOLLAR;
	v->a[89446] = state(1738);
	v->a[89447] = 1;
	v->a[89448] = aux_sym_string_repeat1;
	v->a[89449] = state(1869);
	v->a[89450] = 4;
	v->a[89451] = sym_arithmetic_expansion;
	v->a[89452] = sym_simple_expansion;
	v->a[89453] = sym_expansion;
	v->a[89454] = sym_command_substitution;
	v->a[89455] = 10;
	v->a[89456] = actions(3);
	v->a[89457] = 1;
	v->a[89458] = sym_comment;
	v->a[89459] = actions(3712);
	small_parse_table_4473(v);
}

void	small_parse_table_4473(t_small_parse_table_array *v)
{
	v->a[89460] = 1;
	v->a[89461] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89462] = actions(3716);
	v->a[89463] = 1;
	v->a[89464] = sym_string_content;
	v->a[89465] = actions(3718);
	v->a[89466] = 1;
	v->a[89467] = anon_sym_DOLLAR_LBRACE;
	v->a[89468] = actions(3720);
	v->a[89469] = 1;
	v->a[89470] = anon_sym_DOLLAR_LPAREN;
	v->a[89471] = actions(3722);
	v->a[89472] = 1;
	v->a[89473] = anon_sym_BQUOTE;
	v->a[89474] = actions(3874);
	v->a[89475] = 1;
	v->a[89476] = anon_sym_DOLLAR;
	v->a[89477] = actions(3876);
	v->a[89478] = 1;
	v->a[89479] = anon_sym_DQUOTE;
	small_parse_table_4474(v);
}

void	small_parse_table_4474(t_small_parse_table_array *v)
{
	v->a[89480] = state(1803);
	v->a[89481] = 1;
	v->a[89482] = aux_sym_string_repeat1;
	v->a[89483] = state(1869);
	v->a[89484] = 4;
	v->a[89485] = sym_arithmetic_expansion;
	v->a[89486] = sym_simple_expansion;
	v->a[89487] = sym_expansion;
	v->a[89488] = sym_command_substitution;
	v->a[89489] = 6;
	v->a[89490] = actions(1404);
	v->a[89491] = 1;
	v->a[89492] = sym_comment;
	v->a[89493] = actions(3752);
	v->a[89494] = 1;
	v->a[89495] = anon_sym_LT_LT;
	v->a[89496] = actions(3754);
	v->a[89497] = 1;
	v->a[89498] = anon_sym_LT_LT_DASH;
	v->a[89499] = actions(3882);
	small_parse_table_4475(v);
}

/* EOF small_parse_table_894.c */
