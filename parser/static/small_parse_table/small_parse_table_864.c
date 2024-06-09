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
	v->a[86400] = 2;
	v->a[86401] = anon_sym_0;
	v->a[86402] = anon_sym__;
	v->a[86403] = actions(3588);
	v->a[86404] = 7;
	v->a[86405] = anon_sym_BANG;
	v->a[86406] = anon_sym_DASH;
	v->a[86407] = anon_sym_STAR;
	v->a[86408] = anon_sym_QMARK;
	v->a[86409] = anon_sym_DOLLAR;
	v->a[86410] = anon_sym_POUND;
	v->a[86411] = anon_sym_AT;
	v->a[86412] = 9;
	v->a[86413] = actions(3);
	v->a[86414] = 1;
	v->a[86415] = sym_comment;
	v->a[86416] = actions(2121);
	v->a[86417] = 1;
	v->a[86418] = anon_sym_DOLLAR;
	v->a[86419] = actions(2123);
	small_parse_table_4321(v);
}

void	small_parse_table_4321(t_small_parse_table_array *v)
{
	v->a[86420] = 1;
	v->a[86421] = anon_sym_DQUOTE;
	v->a[86422] = actions(2129);
	v->a[86423] = 1;
	v->a[86424] = anon_sym_DOLLAR_LBRACE;
	v->a[86425] = actions(2131);
	v->a[86426] = 1;
	v->a[86427] = anon_sym_DOLLAR_LPAREN;
	v->a[86428] = actions(2133);
	v->a[86429] = 1;
	v->a[86430] = anon_sym_BQUOTE;
	v->a[86431] = actions(3628);
	v->a[86432] = 1;
	v->a[86433] = sym_raw_string;
	v->a[86434] = actions(3626);
	v->a[86435] = 3;
	v->a[86436] = sym_variable_name;
	v->a[86437] = sym__expansion_word;
	v->a[86438] = sym_word;
	v->a[86439] = state(2019);
	small_parse_table_4322(v);
}

void	small_parse_table_4322(t_small_parse_table_array *v)
{
	v->a[86440] = 4;
	v->a[86441] = sym_string;
	v->a[86442] = sym_simple_expansion;
	v->a[86443] = sym_expansion;
	v->a[86444] = sym_command_substitution;
	v->a[86445] = 4;
	v->a[86446] = actions(3);
	v->a[86447] = 1;
	v->a[86448] = sym_comment;
	v->a[86449] = actions(3632);
	v->a[86450] = 1;
	v->a[86451] = anon_sym_esac;
	v->a[86452] = actions(3634);
	v->a[86453] = 1;
	v->a[86454] = sym_extglob_pattern;
	v->a[86455] = actions(3630);
	v->a[86456] = 11;
	v->a[86457] = anon_sym_LPAREN;
	v->a[86458] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86459] = anon_sym_DOLLAR;
	small_parse_table_4323(v);
}

void	small_parse_table_4323(t_small_parse_table_array *v)
{
	v->a[86460] = anon_sym_DQUOTE;
	v->a[86461] = sym_raw_string;
	v->a[86462] = aux_sym_number_token1;
	v->a[86463] = aux_sym_number_token2;
	v->a[86464] = anon_sym_DOLLAR_LBRACE;
	v->a[86465] = anon_sym_DOLLAR_LPAREN;
	v->a[86466] = anon_sym_BQUOTE;
	v->a[86467] = sym_word;
	v->a[86468] = 7;
	v->a[86469] = actions(3);
	v->a[86470] = 1;
	v->a[86471] = sym_comment;
	v->a[86472] = actions(3590);
	v->a[86473] = 1;
	v->a[86474] = aux_sym__simple_variable_name_token1;
	v->a[86475] = actions(3594);
	v->a[86476] = 1;
	v->a[86477] = sym_variable_name;
	v->a[86478] = actions(3636);
	v->a[86479] = 1;
	small_parse_table_4324(v);
}

void	small_parse_table_4324(t_small_parse_table_array *v)
{
	v->a[86480] = anon_sym_RBRACE;
	v->a[86481] = state(2162);
	v->a[86482] = 1;
	v->a[86483] = sym__expansion_body;
	v->a[86484] = actions(3592);
	v->a[86485] = 2;
	v->a[86486] = anon_sym_0;
	v->a[86487] = anon_sym__;
	v->a[86488] = actions(3588);
	v->a[86489] = 7;
	v->a[86490] = anon_sym_BANG;
	v->a[86491] = anon_sym_DASH;
	v->a[86492] = anon_sym_STAR;
	v->a[86493] = anon_sym_QMARK;
	v->a[86494] = anon_sym_DOLLAR;
	v->a[86495] = anon_sym_POUND;
	v->a[86496] = anon_sym_AT;
	v->a[86497] = 7;
	v->a[86498] = actions(3);
	v->a[86499] = 1;
	small_parse_table_4325(v);
}

/* EOF small_parse_table_864.c */
