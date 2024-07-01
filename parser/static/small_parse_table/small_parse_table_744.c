/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_744.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3720(t_small_parse_table_array *v)
{
	v->a[74400] = 1;
	v->a[74401] = sym__bare_dollar;
	v->a[74402] = actions(2677);
	v->a[74403] = 1;
	v->a[74404] = anon_sym_DOLLAR;
	v->a[74405] = actions(2585);
	v->a[74406] = 5;
	v->a[74407] = aux_sym_concatenation_token1;
	v->a[74408] = sym_raw_string;
	v->a[74409] = sym_number;
	v->a[74410] = sym__comment_word;
	v->a[74411] = sym_word;
	v->a[74412] = state(556);
	v->a[74413] = 5;
	v->a[74414] = sym_arithmetic_expansion;
	v->a[74415] = sym_string;
	v->a[74416] = sym_simple_expansion;
	v->a[74417] = sym_expansion;
	v->a[74418] = sym_command_substitution;
	v->a[74419] = 10;
	small_parse_table_3721(v);
}

void	small_parse_table_3721(t_small_parse_table_array *v)
{
	v->a[74420] = actions(3);
	v->a[74421] = 1;
	v->a[74422] = sym_comment;
	v->a[74423] = actions(910);
	v->a[74424] = 1;
	v->a[74425] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74426] = actions(914);
	v->a[74427] = 1;
	v->a[74428] = anon_sym_DQUOTE;
	v->a[74429] = actions(916);
	v->a[74430] = 1;
	v->a[74431] = anon_sym_DOLLAR_LBRACE;
	v->a[74432] = actions(918);
	v->a[74433] = 1;
	v->a[74434] = anon_sym_DOLLAR_LPAREN;
	v->a[74435] = actions(920);
	v->a[74436] = 1;
	v->a[74437] = anon_sym_BQUOTE;
	v->a[74438] = actions(2577);
	v->a[74439] = 1;
	small_parse_table_3722(v);
}

void	small_parse_table_3722(t_small_parse_table_array *v)
{
	v->a[74440] = sym__bare_dollar;
	v->a[74441] = actions(2679);
	v->a[74442] = 1;
	v->a[74443] = anon_sym_DOLLAR;
	v->a[74444] = actions(2573);
	v->a[74445] = 5;
	v->a[74446] = aux_sym_concatenation_token1;
	v->a[74447] = sym_raw_string;
	v->a[74448] = sym_number;
	v->a[74449] = sym__comment_word;
	v->a[74450] = sym_word;
	v->a[74451] = state(1040);
	v->a[74452] = 5;
	v->a[74453] = sym_arithmetic_expansion;
	v->a[74454] = sym_string;
	v->a[74455] = sym_simple_expansion;
	v->a[74456] = sym_expansion;
	v->a[74457] = sym_command_substitution;
	v->a[74458] = 12;
	v->a[74459] = actions(3);
	small_parse_table_3723(v);
}

void	small_parse_table_3723(t_small_parse_table_array *v)
{
	v->a[74460] = 1;
	v->a[74461] = sym_comment;
	v->a[74462] = actions(894);
	v->a[74463] = 1;
	v->a[74464] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74465] = actions(896);
	v->a[74466] = 1;
	v->a[74467] = anon_sym_DOLLAR;
	v->a[74468] = actions(898);
	v->a[74469] = 1;
	v->a[74470] = anon_sym_DQUOTE;
	v->a[74471] = actions(900);
	v->a[74472] = 1;
	v->a[74473] = anon_sym_DOLLAR_LBRACE;
	v->a[74474] = actions(902);
	v->a[74475] = 1;
	v->a[74476] = anon_sym_DOLLAR_LPAREN;
	v->a[74477] = actions(904);
	v->a[74478] = 1;
	v->a[74479] = anon_sym_BQUOTE;
	small_parse_table_3724(v);
}

void	small_parse_table_3724(t_small_parse_table_array *v)
{
	v->a[74480] = actions(2681);
	v->a[74481] = 1;
	v->a[74482] = aux_sym_heredoc_redirect_token1;
	v->a[74483] = state(1480);
	v->a[74484] = 1;
	v->a[74485] = aux_sym__heredoc_command;
	v->a[74486] = state(1937);
	v->a[74487] = 1;
	v->a[74488] = sym_concatenation;
	v->a[74489] = actions(882);
	v->a[74490] = 3;
	v->a[74491] = sym_raw_string;
	v->a[74492] = sym_number;
	v->a[74493] = sym_word;
	v->a[74494] = state(1774);
	v->a[74495] = 5;
	v->a[74496] = sym_arithmetic_expansion;
	v->a[74497] = sym_string;
	v->a[74498] = sym_simple_expansion;
	v->a[74499] = sym_expansion;
	small_parse_table_3725(v);
}

/* EOF small_parse_table_744.c */
