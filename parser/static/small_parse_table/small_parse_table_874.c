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
	v->a[87400] = anon_sym_BQUOTE;
	v->a[87401] = sym_word;
	v->a[87402] = 7;
	v->a[87403] = actions(3);
	v->a[87404] = 1;
	v->a[87405] = sym_comment;
	v->a[87406] = actions(3590);
	v->a[87407] = 1;
	v->a[87408] = aux_sym__simple_variable_name_token1;
	v->a[87409] = actions(3594);
	v->a[87410] = 1;
	v->a[87411] = sym_variable_name;
	v->a[87412] = actions(3710);
	v->a[87413] = 1;
	v->a[87414] = anon_sym_RBRACE;
	v->a[87415] = state(2105);
	v->a[87416] = 1;
	v->a[87417] = sym__expansion_body;
	v->a[87418] = actions(3592);
	v->a[87419] = 2;
	small_parse_table_4371(v);
}

void	small_parse_table_4371(t_small_parse_table_array *v)
{
	v->a[87420] = anon_sym_0;
	v->a[87421] = anon_sym__;
	v->a[87422] = actions(3588);
	v->a[87423] = 7;
	v->a[87424] = anon_sym_BANG;
	v->a[87425] = anon_sym_DASH;
	v->a[87426] = anon_sym_STAR;
	v->a[87427] = anon_sym_QMARK;
	v->a[87428] = anon_sym_DOLLAR;
	v->a[87429] = anon_sym_POUND;
	v->a[87430] = anon_sym_AT;
	v->a[87431] = 10;
	v->a[87432] = actions(3);
	v->a[87433] = 1;
	v->a[87434] = sym_comment;
	v->a[87435] = actions(3570);
	v->a[87436] = 1;
	v->a[87437] = anon_sym_DQUOTE;
	v->a[87438] = actions(3712);
	v->a[87439] = 1;
	small_parse_table_4372(v);
}

void	small_parse_table_4372(t_small_parse_table_array *v)
{
	v->a[87440] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87441] = actions(3714);
	v->a[87442] = 1;
	v->a[87443] = anon_sym_DOLLAR;
	v->a[87444] = actions(3716);
	v->a[87445] = 1;
	v->a[87446] = sym_string_content;
	v->a[87447] = actions(3718);
	v->a[87448] = 1;
	v->a[87449] = anon_sym_DOLLAR_LBRACE;
	v->a[87450] = actions(3720);
	v->a[87451] = 1;
	v->a[87452] = anon_sym_DOLLAR_LPAREN;
	v->a[87453] = actions(3722);
	v->a[87454] = 1;
	v->a[87455] = anon_sym_BQUOTE;
	v->a[87456] = state(1738);
	v->a[87457] = 1;
	v->a[87458] = aux_sym_string_repeat1;
	v->a[87459] = state(1869);
	small_parse_table_4373(v);
}

void	small_parse_table_4373(t_small_parse_table_array *v)
{
	v->a[87460] = 4;
	v->a[87461] = sym_arithmetic_expansion;
	v->a[87462] = sym_simple_expansion;
	v->a[87463] = sym_expansion;
	v->a[87464] = sym_command_substitution;
	v->a[87465] = 4;
	v->a[87466] = actions(3);
	v->a[87467] = 1;
	v->a[87468] = sym_comment;
	v->a[87469] = actions(2109);
	v->a[87470] = 1;
	v->a[87471] = sym_variable_name;
	v->a[87472] = actions(2107);
	v->a[87473] = 2;
	v->a[87474] = aux_sym__simple_variable_name_token1;
	v->a[87475] = aux_sym__multiline_variable_name_token1;
	v->a[87476] = actions(2105);
	v->a[87477] = 9;
	v->a[87478] = anon_sym_BANG;
	v->a[87479] = anon_sym_DASH;
	small_parse_table_4374(v);
}

void	small_parse_table_4374(t_small_parse_table_array *v)
{
	v->a[87480] = anon_sym_STAR;
	v->a[87481] = anon_sym_QMARK;
	v->a[87482] = anon_sym_DOLLAR;
	v->a[87483] = anon_sym_POUND;
	v->a[87484] = anon_sym_AT;
	v->a[87485] = anon_sym_0;
	v->a[87486] = anon_sym__;
	v->a[87487] = 10;
	v->a[87488] = actions(3);
	v->a[87489] = 1;
	v->a[87490] = sym_comment;
	v->a[87491] = actions(3712);
	v->a[87492] = 1;
	v->a[87493] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87494] = actions(3716);
	v->a[87495] = 1;
	v->a[87496] = sym_string_content;
	v->a[87497] = actions(3718);
	v->a[87498] = 1;
	v->a[87499] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4375(v);
}

/* EOF small_parse_table_874.c */
