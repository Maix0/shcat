/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_974.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4870(t_small_parse_table_array *v)
{
	v->a[97400] = actions(4232);
	v->a[97401] = 1;
	v->a[97402] = anon_sym_DQUOTE;
	v->a[97403] = state(1987);
	v->a[97404] = 1;
	v->a[97405] = aux_sym_string_repeat1;
	v->a[97406] = state(2107);
	v->a[97407] = 4;
	v->a[97408] = sym_arithmetic_expansion;
	v->a[97409] = sym_simple_expansion;
	v->a[97410] = sym_expansion;
	v->a[97411] = sym_command_substitution;
	v->a[97412] = 4;
	v->a[97413] = actions(3);
	v->a[97414] = 1;
	v->a[97415] = sym_comment;
	v->a[97416] = actions(4072);
	v->a[97417] = 1;
	v->a[97418] = anon_sym_esac;
	v->a[97419] = actions(4074);
	small_parse_table_4871(v);
}

void	small_parse_table_4871(t_small_parse_table_array *v)
{
	v->a[97420] = 1;
	v->a[97421] = sym_extglob_pattern;
	v->a[97422] = actions(4070);
	v->a[97423] = 10;
	v->a[97424] = anon_sym_LPAREN;
	v->a[97425] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97426] = anon_sym_DOLLAR;
	v->a[97427] = anon_sym_DQUOTE;
	v->a[97428] = sym_raw_string;
	v->a[97429] = sym_number;
	v->a[97430] = anon_sym_DOLLAR_LBRACE;
	v->a[97431] = anon_sym_DOLLAR_LPAREN;
	v->a[97432] = anon_sym_BQUOTE;
	v->a[97433] = sym_word;
	v->a[97434] = 10;
	v->a[97435] = actions(3);
	v->a[97436] = 1;
	v->a[97437] = sym_comment;
	v->a[97438] = actions(3856);
	v->a[97439] = 1;
	small_parse_table_4872(v);
}

void	small_parse_table_4872(t_small_parse_table_array *v)
{
	v->a[97440] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97441] = actions(3862);
	v->a[97442] = 1;
	v->a[97443] = sym_string_content;
	v->a[97444] = actions(3864);
	v->a[97445] = 1;
	v->a[97446] = anon_sym_DOLLAR_LBRACE;
	v->a[97447] = actions(3866);
	v->a[97448] = 1;
	v->a[97449] = anon_sym_DOLLAR_LPAREN;
	v->a[97450] = actions(3868);
	v->a[97451] = 1;
	v->a[97452] = anon_sym_BQUOTE;
	v->a[97453] = actions(4234);
	v->a[97454] = 1;
	v->a[97455] = anon_sym_DOLLAR;
	v->a[97456] = actions(4236);
	v->a[97457] = 1;
	v->a[97458] = anon_sym_DQUOTE;
	v->a[97459] = state(1987);
	small_parse_table_4873(v);
}

void	small_parse_table_4873(t_small_parse_table_array *v)
{
	v->a[97460] = 1;
	v->a[97461] = aux_sym_string_repeat1;
	v->a[97462] = state(2107);
	v->a[97463] = 4;
	v->a[97464] = sym_arithmetic_expansion;
	v->a[97465] = sym_simple_expansion;
	v->a[97466] = sym_expansion;
	v->a[97467] = sym_command_substitution;
	v->a[97468] = 10;
	v->a[97469] = actions(3);
	v->a[97470] = 1;
	v->a[97471] = sym_comment;
	v->a[97472] = actions(3856);
	v->a[97473] = 1;
	v->a[97474] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97475] = actions(3862);
	v->a[97476] = 1;
	v->a[97477] = sym_string_content;
	v->a[97478] = actions(3864);
	v->a[97479] = 1;
	small_parse_table_4874(v);
}

void	small_parse_table_4874(t_small_parse_table_array *v)
{
	v->a[97480] = anon_sym_DOLLAR_LBRACE;
	v->a[97481] = actions(3866);
	v->a[97482] = 1;
	v->a[97483] = anon_sym_DOLLAR_LPAREN;
	v->a[97484] = actions(3868);
	v->a[97485] = 1;
	v->a[97486] = anon_sym_BQUOTE;
	v->a[97487] = actions(4238);
	v->a[97488] = 1;
	v->a[97489] = anon_sym_DOLLAR;
	v->a[97490] = actions(4240);
	v->a[97491] = 1;
	v->a[97492] = anon_sym_DQUOTE;
	v->a[97493] = state(2053);
	v->a[97494] = 1;
	v->a[97495] = aux_sym_string_repeat1;
	v->a[97496] = state(2107);
	v->a[97497] = 4;
	v->a[97498] = sym_arithmetic_expansion;
	v->a[97499] = sym_simple_expansion;
	small_parse_table_4875(v);
}

/* EOF small_parse_table_974.c */
