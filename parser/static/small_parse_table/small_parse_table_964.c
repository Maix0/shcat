/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_964.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4820(t_small_parse_table_array *v)
{
	v->a[96400] = actions(3856);
	v->a[96401] = 1;
	v->a[96402] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96403] = actions(3862);
	v->a[96404] = 1;
	v->a[96405] = sym_string_content;
	v->a[96406] = actions(3864);
	v->a[96407] = 1;
	v->a[96408] = anon_sym_DOLLAR_LBRACE;
	v->a[96409] = actions(3866);
	v->a[96410] = 1;
	v->a[96411] = anon_sym_DOLLAR_LPAREN;
	v->a[96412] = actions(3868);
	v->a[96413] = 1;
	v->a[96414] = anon_sym_BQUOTE;
	v->a[96415] = actions(4126);
	v->a[96416] = 1;
	v->a[96417] = anon_sym_DOLLAR;
	v->a[96418] = actions(4128);
	v->a[96419] = 1;
	small_parse_table_4821(v);
}

void	small_parse_table_4821(t_small_parse_table_array *v)
{
	v->a[96420] = anon_sym_DQUOTE;
	v->a[96421] = state(1987);
	v->a[96422] = 1;
	v->a[96423] = aux_sym_string_repeat1;
	v->a[96424] = state(2107);
	v->a[96425] = 4;
	v->a[96426] = sym_arithmetic_expansion;
	v->a[96427] = sym_simple_expansion;
	v->a[96428] = sym_expansion;
	v->a[96429] = sym_command_substitution;
	v->a[96430] = 10;
	v->a[96431] = actions(3);
	v->a[96432] = 1;
	v->a[96433] = sym_comment;
	v->a[96434] = actions(3856);
	v->a[96435] = 1;
	v->a[96436] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96437] = actions(3862);
	v->a[96438] = 1;
	v->a[96439] = sym_string_content;
	small_parse_table_4822(v);
}

void	small_parse_table_4822(t_small_parse_table_array *v)
{
	v->a[96440] = actions(3864);
	v->a[96441] = 1;
	v->a[96442] = anon_sym_DOLLAR_LBRACE;
	v->a[96443] = actions(3866);
	v->a[96444] = 1;
	v->a[96445] = anon_sym_DOLLAR_LPAREN;
	v->a[96446] = actions(3868);
	v->a[96447] = 1;
	v->a[96448] = anon_sym_BQUOTE;
	v->a[96449] = actions(4130);
	v->a[96450] = 1;
	v->a[96451] = anon_sym_DOLLAR;
	v->a[96452] = actions(4132);
	v->a[96453] = 1;
	v->a[96454] = anon_sym_DQUOTE;
	v->a[96455] = state(2052);
	v->a[96456] = 1;
	v->a[96457] = aux_sym_string_repeat1;
	v->a[96458] = state(2107);
	v->a[96459] = 4;
	small_parse_table_4823(v);
}

void	small_parse_table_4823(t_small_parse_table_array *v)
{
	v->a[96460] = sym_arithmetic_expansion;
	v->a[96461] = sym_simple_expansion;
	v->a[96462] = sym_expansion;
	v->a[96463] = sym_command_substitution;
	v->a[96464] = 4;
	v->a[96465] = actions(3);
	v->a[96466] = 1;
	v->a[96467] = sym_comment;
	v->a[96468] = actions(2039);
	v->a[96469] = 1;
	v->a[96470] = sym_variable_name;
	v->a[96471] = actions(2037);
	v->a[96472] = 2;
	v->a[96473] = aux_sym__simple_variable_name_token1;
	v->a[96474] = aux_sym__multiline_variable_name_token1;
	v->a[96475] = actions(2035);
	v->a[96476] = 9;
	v->a[96477] = anon_sym_BANG;
	v->a[96478] = anon_sym_DASH;
	v->a[96479] = anon_sym_STAR;
	small_parse_table_4824(v);
}

void	small_parse_table_4824(t_small_parse_table_array *v)
{
	v->a[96480] = anon_sym_QMARK;
	v->a[96481] = anon_sym_DOLLAR;
	v->a[96482] = anon_sym_POUND;
	v->a[96483] = anon_sym_AT;
	v->a[96484] = anon_sym_0;
	v->a[96485] = anon_sym__;
	v->a[96486] = 10;
	v->a[96487] = actions(3);
	v->a[96488] = 1;
	v->a[96489] = sym_comment;
	v->a[96490] = actions(3856);
	v->a[96491] = 1;
	v->a[96492] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96493] = actions(3862);
	v->a[96494] = 1;
	v->a[96495] = sym_string_content;
	v->a[96496] = actions(3864);
	v->a[96497] = 1;
	v->a[96498] = anon_sym_DOLLAR_LBRACE;
	v->a[96499] = actions(3866);
	small_parse_table_4825(v);
}

/* EOF small_parse_table_964.c */
