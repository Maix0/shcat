/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_374.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1870(t_small_parse_table_array *v)
{
	v->a[37400] = actions(1563);
	v->a[37401] = 1;
	v->a[37402] = anon_sym_BQUOTE;
	v->a[37403] = actions(1659);
	v->a[37404] = 1;
	v->a[37405] = sym__comment_word;
	v->a[37406] = actions(1661);
	v->a[37407] = 1;
	v->a[37408] = sym__empty_value;
	v->a[37409] = state(520);
	v->a[37410] = 1;
	v->a[37411] = sym_concatenation;
	v->a[37412] = actions(1657);
	v->a[37413] = 3;
	v->a[37414] = sym_raw_string;
	v->a[37415] = sym_number;
	v->a[37416] = sym_word;
	v->a[37417] = state(265);
	v->a[37418] = 5;
	v->a[37419] = sym_arithmetic_expansion;
	small_parse_table_1871(v);
}

void	small_parse_table_1871(t_small_parse_table_array *v)
{
	v->a[37420] = sym_string;
	v->a[37421] = sym_simple_expansion;
	v->a[37422] = sym_expansion;
	v->a[37423] = sym_command_substitution;
	v->a[37424] = 12;
	v->a[37425] = actions(3);
	v->a[37426] = 1;
	v->a[37427] = sym_comment;
	v->a[37428] = actions(1665);
	v->a[37429] = 1;
	v->a[37430] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37431] = actions(1667);
	v->a[37432] = 1;
	v->a[37433] = anon_sym_DOLLAR;
	v->a[37434] = actions(1669);
	v->a[37435] = 1;
	v->a[37436] = anon_sym_DQUOTE;
	v->a[37437] = actions(1671);
	v->a[37438] = 1;
	v->a[37439] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1872(v);
}

void	small_parse_table_1872(t_small_parse_table_array *v)
{
	v->a[37440] = actions(1673);
	v->a[37441] = 1;
	v->a[37442] = anon_sym_DOLLAR_LPAREN;
	v->a[37443] = actions(1675);
	v->a[37444] = 1;
	v->a[37445] = anon_sym_BQUOTE;
	v->a[37446] = actions(1677);
	v->a[37447] = 1;
	v->a[37448] = sym__comment_word;
	v->a[37449] = actions(1679);
	v->a[37450] = 1;
	v->a[37451] = sym__empty_value;
	v->a[37452] = state(1377);
	v->a[37453] = 1;
	v->a[37454] = sym_concatenation;
	v->a[37455] = actions(1663);
	v->a[37456] = 3;
	v->a[37457] = sym_raw_string;
	v->a[37458] = sym_number;
	v->a[37459] = sym_word;
	small_parse_table_1873(v);
}

void	small_parse_table_1873(t_small_parse_table_array *v)
{
	v->a[37460] = state(1276);
	v->a[37461] = 5;
	v->a[37462] = sym_arithmetic_expansion;
	v->a[37463] = sym_string;
	v->a[37464] = sym_simple_expansion;
	v->a[37465] = sym_expansion;
	v->a[37466] = sym_command_substitution;
	v->a[37467] = 10;
	v->a[37468] = actions(3);
	v->a[37469] = 1;
	v->a[37470] = sym_comment;
	v->a[37471] = actions(723);
	v->a[37472] = 1;
	v->a[37473] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37474] = actions(725);
	v->a[37475] = 1;
	v->a[37476] = anon_sym_DOLLAR;
	v->a[37477] = actions(727);
	v->a[37478] = 1;
	v->a[37479] = anon_sym_DQUOTE;
	small_parse_table_1874(v);
}

void	small_parse_table_1874(t_small_parse_table_array *v)
{
	v->a[37480] = actions(729);
	v->a[37481] = 1;
	v->a[37482] = anon_sym_DOLLAR_LBRACE;
	v->a[37483] = actions(731);
	v->a[37484] = 1;
	v->a[37485] = anon_sym_DOLLAR_LPAREN;
	v->a[37486] = actions(733);
	v->a[37487] = 1;
	v->a[37488] = anon_sym_BQUOTE;
	v->a[37489] = actions(1683);
	v->a[37490] = 1;
	v->a[37491] = sym__bare_dollar;
	v->a[37492] = actions(1681);
	v->a[37493] = 5;
	v->a[37494] = aux_sym_concatenation_token1;
	v->a[37495] = sym_raw_string;
	v->a[37496] = sym_number;
	v->a[37497] = sym__comment_word;
	v->a[37498] = sym_word;
	v->a[37499] = state(491);
	small_parse_table_1875(v);
}

/* EOF small_parse_table_374.c */
