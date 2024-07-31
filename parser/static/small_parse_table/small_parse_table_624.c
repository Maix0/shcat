/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_624.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3120(t_small_parse_table_array *v)
{
	v->a[62400] = actions(2554);
	v->a[62401] = 1;
	v->a[62402] = sym_string_content;
	v->a[62403] = actions(2556);
	v->a[62404] = 1;
	v->a[62405] = anon_sym_DOLLAR_LBRACE;
	v->a[62406] = actions(2558);
	v->a[62407] = 1;
	v->a[62408] = anon_sym_DOLLAR_LPAREN;
	v->a[62409] = actions(2560);
	v->a[62410] = 1;
	v->a[62411] = anon_sym_BQUOTE;
	v->a[62412] = actions(2681);
	v->a[62413] = 1;
	v->a[62414] = anon_sym_DOLLAR;
	v->a[62415] = actions(2683);
	v->a[62416] = 1;
	v->a[62417] = anon_sym_DQUOTE;
	v->a[62418] = state(1370);
	v->a[62419] = 1;
	small_parse_table_3121(v);
}

void	small_parse_table_3121(t_small_parse_table_array *v)
{
	v->a[62420] = aux_sym_string_repeat1;
	v->a[62421] = state(1477);
	v->a[62422] = 4;
	v->a[62423] = sym_arithmetic_expansion;
	v->a[62424] = sym_simple_expansion;
	v->a[62425] = sym_expansion;
	v->a[62426] = sym_command_substitution;
	v->a[62427] = 10;
	v->a[62428] = actions(3);
	v->a[62429] = 1;
	v->a[62430] = sym_comment;
	v->a[62431] = actions(2548);
	v->a[62432] = 1;
	v->a[62433] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62434] = actions(2554);
	v->a[62435] = 1;
	v->a[62436] = sym_string_content;
	v->a[62437] = actions(2556);
	v->a[62438] = 1;
	v->a[62439] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3122(v);
}

void	small_parse_table_3122(t_small_parse_table_array *v)
{
	v->a[62440] = actions(2558);
	v->a[62441] = 1;
	v->a[62442] = anon_sym_DOLLAR_LPAREN;
	v->a[62443] = actions(2560);
	v->a[62444] = 1;
	v->a[62445] = anon_sym_BQUOTE;
	v->a[62446] = actions(2685);
	v->a[62447] = 1;
	v->a[62448] = anon_sym_DOLLAR;
	v->a[62449] = actions(2687);
	v->a[62450] = 1;
	v->a[62451] = anon_sym_DQUOTE;
	v->a[62452] = state(1403);
	v->a[62453] = 1;
	v->a[62454] = aux_sym_string_repeat1;
	v->a[62455] = state(1477);
	v->a[62456] = 4;
	v->a[62457] = sym_arithmetic_expansion;
	v->a[62458] = sym_simple_expansion;
	v->a[62459] = sym_expansion;
	small_parse_table_3123(v);
}

void	small_parse_table_3123(t_small_parse_table_array *v)
{
	v->a[62460] = sym_command_substitution;
	v->a[62461] = 10;
	v->a[62462] = actions(3);
	v->a[62463] = 1;
	v->a[62464] = sym_comment;
	v->a[62465] = actions(2548);
	v->a[62466] = 1;
	v->a[62467] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62468] = actions(2554);
	v->a[62469] = 1;
	v->a[62470] = sym_string_content;
	v->a[62471] = actions(2556);
	v->a[62472] = 1;
	v->a[62473] = anon_sym_DOLLAR_LBRACE;
	v->a[62474] = actions(2558);
	v->a[62475] = 1;
	v->a[62476] = anon_sym_DOLLAR_LPAREN;
	v->a[62477] = actions(2560);
	v->a[62478] = 1;
	v->a[62479] = anon_sym_BQUOTE;
	small_parse_table_3124(v);
}

void	small_parse_table_3124(t_small_parse_table_array *v)
{
	v->a[62480] = actions(2689);
	v->a[62481] = 1;
	v->a[62482] = anon_sym_DOLLAR;
	v->a[62483] = actions(2691);
	v->a[62484] = 1;
	v->a[62485] = anon_sym_DQUOTE;
	v->a[62486] = state(1350);
	v->a[62487] = 1;
	v->a[62488] = aux_sym_string_repeat1;
	v->a[62489] = state(1477);
	v->a[62490] = 4;
	v->a[62491] = sym_arithmetic_expansion;
	v->a[62492] = sym_simple_expansion;
	v->a[62493] = sym_expansion;
	v->a[62494] = sym_command_substitution;
	v->a[62495] = 8;
	v->a[62496] = actions(3);
	v->a[62497] = 1;
	v->a[62498] = sym_comment;
	v->a[62499] = actions(2566);
	small_parse_table_3125(v);
}

/* EOF small_parse_table_624.c */
