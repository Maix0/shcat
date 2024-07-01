/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_864.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4320(t_small_parse_table_array *v)
{
	v->a[86400] = 1;
	v->a[86401] = sym_comment;
	v->a[86402] = actions(3414);
	v->a[86403] = 1;
	v->a[86404] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86405] = actions(3420);
	v->a[86406] = 1;
	v->a[86407] = sym_string_content;
	v->a[86408] = actions(3422);
	v->a[86409] = 1;
	v->a[86410] = anon_sym_DOLLAR_LBRACE;
	v->a[86411] = actions(3424);
	v->a[86412] = 1;
	v->a[86413] = anon_sym_DOLLAR_LPAREN;
	v->a[86414] = actions(3426);
	v->a[86415] = 1;
	v->a[86416] = anon_sym_BQUOTE;
	v->a[86417] = actions(3468);
	v->a[86418] = 1;
	v->a[86419] = anon_sym_DOLLAR;
	small_parse_table_4321(v);
}

void	small_parse_table_4321(t_small_parse_table_array *v)
{
	v->a[86420] = actions(3470);
	v->a[86421] = 1;
	v->a[86422] = anon_sym_DQUOTE;
	v->a[86423] = state(1819);
	v->a[86424] = 1;
	v->a[86425] = aux_sym_string_repeat1;
	v->a[86426] = state(1959);
	v->a[86427] = 4;
	v->a[86428] = sym_arithmetic_expansion;
	v->a[86429] = sym_simple_expansion;
	v->a[86430] = sym_expansion;
	v->a[86431] = sym_command_substitution;
	v->a[86432] = 10;
	v->a[86433] = actions(3);
	v->a[86434] = 1;
	v->a[86435] = sym_comment;
	v->a[86436] = actions(3414);
	v->a[86437] = 1;
	v->a[86438] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86439] = actions(3420);
	small_parse_table_4322(v);
}

void	small_parse_table_4322(t_small_parse_table_array *v)
{
	v->a[86440] = 1;
	v->a[86441] = sym_string_content;
	v->a[86442] = actions(3422);
	v->a[86443] = 1;
	v->a[86444] = anon_sym_DOLLAR_LBRACE;
	v->a[86445] = actions(3424);
	v->a[86446] = 1;
	v->a[86447] = anon_sym_DOLLAR_LPAREN;
	v->a[86448] = actions(3426);
	v->a[86449] = 1;
	v->a[86450] = anon_sym_BQUOTE;
	v->a[86451] = actions(3472);
	v->a[86452] = 1;
	v->a[86453] = anon_sym_DOLLAR;
	v->a[86454] = actions(3474);
	v->a[86455] = 1;
	v->a[86456] = anon_sym_DQUOTE;
	v->a[86457] = state(1906);
	v->a[86458] = 1;
	v->a[86459] = aux_sym_string_repeat1;
	small_parse_table_4323(v);
}

void	small_parse_table_4323(t_small_parse_table_array *v)
{
	v->a[86460] = state(1959);
	v->a[86461] = 4;
	v->a[86462] = sym_arithmetic_expansion;
	v->a[86463] = sym_simple_expansion;
	v->a[86464] = sym_expansion;
	v->a[86465] = sym_command_substitution;
	v->a[86466] = 10;
	v->a[86467] = actions(3);
	v->a[86468] = 1;
	v->a[86469] = sym_comment;
	v->a[86470] = actions(3414);
	v->a[86471] = 1;
	v->a[86472] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86473] = actions(3420);
	v->a[86474] = 1;
	v->a[86475] = sym_string_content;
	v->a[86476] = actions(3422);
	v->a[86477] = 1;
	v->a[86478] = anon_sym_DOLLAR_LBRACE;
	v->a[86479] = actions(3424);
	small_parse_table_4324(v);
}

void	small_parse_table_4324(t_small_parse_table_array *v)
{
	v->a[86480] = 1;
	v->a[86481] = anon_sym_DOLLAR_LPAREN;
	v->a[86482] = actions(3426);
	v->a[86483] = 1;
	v->a[86484] = anon_sym_BQUOTE;
	v->a[86485] = actions(3476);
	v->a[86486] = 1;
	v->a[86487] = anon_sym_DOLLAR;
	v->a[86488] = actions(3478);
	v->a[86489] = 1;
	v->a[86490] = anon_sym_DQUOTE;
	v->a[86491] = state(1818);
	v->a[86492] = 1;
	v->a[86493] = aux_sym_string_repeat1;
	v->a[86494] = state(1959);
	v->a[86495] = 4;
	v->a[86496] = sym_arithmetic_expansion;
	v->a[86497] = sym_simple_expansion;
	v->a[86498] = sym_expansion;
	v->a[86499] = sym_command_substitution;
	small_parse_table_4325(v);
}

/* EOF small_parse_table_864.c */
