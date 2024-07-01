/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_874.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4370(t_small_parse_table_array *v)
{
	v->a[87400] = 9;
	v->a[87401] = anon_sym_BANG;
	v->a[87402] = anon_sym_DASH;
	v->a[87403] = anon_sym_STAR;
	v->a[87404] = anon_sym_QMARK;
	v->a[87405] = anon_sym_DOLLAR;
	v->a[87406] = anon_sym_POUND;
	v->a[87407] = anon_sym_AT;
	v->a[87408] = anon_sym_0;
	v->a[87409] = anon_sym__;
	v->a[87410] = 4;
	v->a[87411] = actions(3);
	v->a[87412] = 1;
	v->a[87413] = sym_comment;
	v->a[87414] = actions(393);
	v->a[87415] = 1;
	v->a[87416] = sym_variable_name;
	v->a[87417] = actions(391);
	v->a[87418] = 2;
	v->a[87419] = aux_sym__simple_variable_name_token1;
	small_parse_table_4371(v);
}

void	small_parse_table_4371(t_small_parse_table_array *v)
{
	v->a[87420] = aux_sym__multiline_variable_name_token1;
	v->a[87421] = actions(389);
	v->a[87422] = 9;
	v->a[87423] = anon_sym_BANG;
	v->a[87424] = anon_sym_DASH;
	v->a[87425] = anon_sym_STAR;
	v->a[87426] = anon_sym_QMARK;
	v->a[87427] = anon_sym_DOLLAR;
	v->a[87428] = anon_sym_POUND;
	v->a[87429] = anon_sym_AT;
	v->a[87430] = anon_sym_0;
	v->a[87431] = anon_sym__;
	v->a[87432] = 4;
	v->a[87433] = actions(3);
	v->a[87434] = 1;
	v->a[87435] = sym_comment;
	v->a[87436] = actions(405);
	v->a[87437] = 1;
	v->a[87438] = sym_variable_name;
	v->a[87439] = actions(403);
	small_parse_table_4372(v);
}

void	small_parse_table_4372(t_small_parse_table_array *v)
{
	v->a[87440] = 2;
	v->a[87441] = aux_sym__simple_variable_name_token1;
	v->a[87442] = aux_sym__multiline_variable_name_token1;
	v->a[87443] = actions(401);
	v->a[87444] = 9;
	v->a[87445] = anon_sym_BANG;
	v->a[87446] = anon_sym_DASH;
	v->a[87447] = anon_sym_STAR;
	v->a[87448] = anon_sym_QMARK;
	v->a[87449] = anon_sym_DOLLAR;
	v->a[87450] = anon_sym_POUND;
	v->a[87451] = anon_sym_AT;
	v->a[87452] = anon_sym_0;
	v->a[87453] = anon_sym__;
	v->a[87454] = 10;
	v->a[87455] = actions(3);
	v->a[87456] = 1;
	v->a[87457] = sym_comment;
	v->a[87458] = actions(3414);
	v->a[87459] = 1;
	small_parse_table_4373(v);
}

void	small_parse_table_4373(t_small_parse_table_array *v)
{
	v->a[87460] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87461] = actions(3420);
	v->a[87462] = 1;
	v->a[87463] = sym_string_content;
	v->a[87464] = actions(3422);
	v->a[87465] = 1;
	v->a[87466] = anon_sym_DOLLAR_LBRACE;
	v->a[87467] = actions(3424);
	v->a[87468] = 1;
	v->a[87469] = anon_sym_DOLLAR_LPAREN;
	v->a[87470] = actions(3426);
	v->a[87471] = 1;
	v->a[87472] = anon_sym_BQUOTE;
	v->a[87473] = actions(3564);
	v->a[87474] = 1;
	v->a[87475] = anon_sym_DOLLAR;
	v->a[87476] = actions(3566);
	v->a[87477] = 1;
	v->a[87478] = anon_sym_DQUOTE;
	v->a[87479] = state(1906);
	small_parse_table_4374(v);
}

void	small_parse_table_4374(t_small_parse_table_array *v)
{
	v->a[87480] = 1;
	v->a[87481] = aux_sym_string_repeat1;
	v->a[87482] = state(1959);
	v->a[87483] = 4;
	v->a[87484] = sym_arithmetic_expansion;
	v->a[87485] = sym_simple_expansion;
	v->a[87486] = sym_expansion;
	v->a[87487] = sym_command_substitution;
	v->a[87488] = 10;
	v->a[87489] = actions(3);
	v->a[87490] = 1;
	v->a[87491] = sym_comment;
	v->a[87492] = actions(3414);
	v->a[87493] = 1;
	v->a[87494] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87495] = actions(3420);
	v->a[87496] = 1;
	v->a[87497] = sym_string_content;
	v->a[87498] = actions(3422);
	v->a[87499] = 1;
	small_parse_table_4375(v);
}

/* EOF small_parse_table_874.c */
