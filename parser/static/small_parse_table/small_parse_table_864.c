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
	v->a[86400] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86401] = actions(914);
	v->a[86402] = 1;
	v->a[86403] = anon_sym_DQUOTE;
	v->a[86404] = actions(916);
	v->a[86405] = 1;
	v->a[86406] = anon_sym_DOLLAR_LBRACE;
	v->a[86407] = actions(918);
	v->a[86408] = 1;
	v->a[86409] = anon_sym_DOLLAR_LPAREN;
	v->a[86410] = actions(920);
	v->a[86411] = 1;
	v->a[86412] = anon_sym_BQUOTE;
	v->a[86413] = actions(3224);
	v->a[86414] = 1;
	v->a[86415] = sym__bare_dollar;
	v->a[86416] = actions(3489);
	v->a[86417] = 1;
	v->a[86418] = anon_sym_DOLLAR;
	v->a[86419] = actions(3222);
	small_parse_table_4321(v);
}

void	small_parse_table_4321(t_small_parse_table_array *v)
{
	v->a[86420] = 5;
	v->a[86421] = aux_sym_concatenation_token1;
	v->a[86422] = sym_raw_string;
	v->a[86423] = sym_number;
	v->a[86424] = sym__comment_word;
	v->a[86425] = sym_word;
	v->a[86426] = state(1347);
	v->a[86427] = 5;
	v->a[86428] = sym_arithmetic_expansion;
	v->a[86429] = sym_string;
	v->a[86430] = sym_simple_expansion;
	v->a[86431] = sym_expansion;
	v->a[86432] = sym_command_substitution;
	v->a[86433] = 12;
	v->a[86434] = actions(3);
	v->a[86435] = 1;
	v->a[86436] = sym_comment;
	v->a[86437] = actions(884);
	v->a[86438] = 1;
	v->a[86439] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4322(v);
}

void	small_parse_table_4322(t_small_parse_table_array *v)
{
	v->a[86440] = actions(886);
	v->a[86441] = 1;
	v->a[86442] = anon_sym_DOLLAR;
	v->a[86443] = actions(888);
	v->a[86444] = 1;
	v->a[86445] = anon_sym_DQUOTE;
	v->a[86446] = actions(890);
	v->a[86447] = 1;
	v->a[86448] = anon_sym_DOLLAR_LBRACE;
	v->a[86449] = actions(892);
	v->a[86450] = 1;
	v->a[86451] = anon_sym_DOLLAR_LPAREN;
	v->a[86452] = actions(894);
	v->a[86453] = 1;
	v->a[86454] = anon_sym_BQUOTE;
	v->a[86455] = actions(3491);
	v->a[86456] = 1;
	v->a[86457] = aux_sym_heredoc_redirect_token1;
	v->a[86458] = state(1613);
	v->a[86459] = 1;
	small_parse_table_4323(v);
}

void	small_parse_table_4323(t_small_parse_table_array *v)
{
	v->a[86460] = aux_sym__heredoc_command;
	v->a[86461] = state(2098);
	v->a[86462] = 1;
	v->a[86463] = sym_concatenation;
	v->a[86464] = actions(872);
	v->a[86465] = 3;
	v->a[86466] = sym_raw_string;
	v->a[86467] = sym_number;
	v->a[86468] = sym_word;
	v->a[86469] = state(1944);
	v->a[86470] = 5;
	v->a[86471] = sym_arithmetic_expansion;
	v->a[86472] = sym_string;
	v->a[86473] = sym_simple_expansion;
	v->a[86474] = sym_expansion;
	v->a[86475] = sym_command_substitution;
	v->a[86476] = 10;
	v->a[86477] = actions(3);
	v->a[86478] = 1;
	v->a[86479] = sym_comment;
	small_parse_table_4324(v);
}

void	small_parse_table_4324(t_small_parse_table_array *v)
{
	v->a[86480] = actions(1513);
	v->a[86481] = 1;
	v->a[86482] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86483] = actions(1517);
	v->a[86484] = 1;
	v->a[86485] = anon_sym_DQUOTE;
	v->a[86486] = actions(1519);
	v->a[86487] = 1;
	v->a[86488] = anon_sym_DOLLAR_LBRACE;
	v->a[86489] = actions(1521);
	v->a[86490] = 1;
	v->a[86491] = anon_sym_DOLLAR_LPAREN;
	v->a[86492] = actions(1523);
	v->a[86493] = 1;
	v->a[86494] = anon_sym_BQUOTE;
	v->a[86495] = actions(3248);
	v->a[86496] = 1;
	v->a[86497] = sym__bare_dollar;
	v->a[86498] = actions(3493);
	v->a[86499] = 1;
	small_parse_table_4325(v);
}

/* EOF small_parse_table_864.c */
