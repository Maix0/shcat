/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_370.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1850(t_small_parse_table_array *v)
{
	v->a[37000] = sym_number;
	v->a[37001] = sym__comment_word;
	v->a[37002] = sym_word;
	v->a[37003] = state(1450);
	v->a[37004] = 5;
	v->a[37005] = sym_arithmetic_expansion;
	v->a[37006] = sym_string;
	v->a[37007] = sym_simple_expansion;
	v->a[37008] = sym_expansion;
	v->a[37009] = sym_command_substitution;
	v->a[37010] = 12;
	v->a[37011] = actions(3);
	v->a[37012] = 1;
	v->a[37013] = sym_comment;
	v->a[37014] = actions(1535);
	v->a[37015] = 1;
	v->a[37016] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37017] = actions(1539);
	v->a[37018] = 1;
	v->a[37019] = anon_sym_DQUOTE;
	small_parse_table_1851(v);
}

void	small_parse_table_1851(t_small_parse_table_array *v)
{
	v->a[37020] = actions(1541);
	v->a[37021] = 1;
	v->a[37022] = anon_sym_DOLLAR_LBRACE;
	v->a[37023] = actions(1543);
	v->a[37024] = 1;
	v->a[37025] = anon_sym_DOLLAR_LPAREN;
	v->a[37026] = actions(1545);
	v->a[37027] = 1;
	v->a[37028] = anon_sym_BQUOTE;
	v->a[37029] = actions(1585);
	v->a[37030] = 1;
	v->a[37031] = anon_sym_DOLLAR;
	v->a[37032] = actions(1587);
	v->a[37033] = 1;
	v->a[37034] = sym__comment_word;
	v->a[37035] = actions(1589);
	v->a[37036] = 1;
	v->a[37037] = sym__empty_value;
	v->a[37038] = state(950);
	v->a[37039] = 1;
	small_parse_table_1852(v);
}

void	small_parse_table_1852(t_small_parse_table_array *v)
{
	v->a[37040] = sym_concatenation;
	v->a[37041] = actions(1583);
	v->a[37042] = 3;
	v->a[37043] = sym_raw_string;
	v->a[37044] = sym_number;
	v->a[37045] = sym_word;
	v->a[37046] = state(847);
	v->a[37047] = 5;
	v->a[37048] = sym_arithmetic_expansion;
	v->a[37049] = sym_string;
	v->a[37050] = sym_simple_expansion;
	v->a[37051] = sym_expansion;
	v->a[37052] = sym_command_substitution;
	v->a[37053] = 10;
	v->a[37054] = actions(3);
	v->a[37055] = 1;
	v->a[37056] = sym_comment;
	v->a[37057] = actions(1535);
	v->a[37058] = 1;
	v->a[37059] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1853(v);
}

void	small_parse_table_1853(t_small_parse_table_array *v)
{
	v->a[37060] = actions(1539);
	v->a[37061] = 1;
	v->a[37062] = anon_sym_DQUOTE;
	v->a[37063] = actions(1541);
	v->a[37064] = 1;
	v->a[37065] = anon_sym_DOLLAR_LBRACE;
	v->a[37066] = actions(1543);
	v->a[37067] = 1;
	v->a[37068] = anon_sym_DOLLAR_LPAREN;
	v->a[37069] = actions(1545);
	v->a[37070] = 1;
	v->a[37071] = anon_sym_BQUOTE;
	v->a[37072] = actions(1547);
	v->a[37073] = 1;
	v->a[37074] = sym__bare_dollar;
	v->a[37075] = actions(1591);
	v->a[37076] = 1;
	v->a[37077] = anon_sym_DOLLAR;
	v->a[37078] = actions(1533);
	v->a[37079] = 5;
	small_parse_table_1854(v);
}

void	small_parse_table_1854(t_small_parse_table_array *v)
{
	v->a[37080] = aux_sym_concatenation_token1;
	v->a[37081] = sym_raw_string;
	v->a[37082] = sym_number;
	v->a[37083] = sym__comment_word;
	v->a[37084] = sym_word;
	v->a[37085] = state(778);
	v->a[37086] = 5;
	v->a[37087] = sym_arithmetic_expansion;
	v->a[37088] = sym_string;
	v->a[37089] = sym_simple_expansion;
	v->a[37090] = sym_expansion;
	v->a[37091] = sym_command_substitution;
	v->a[37092] = 12;
	v->a[37093] = actions(3);
	v->a[37094] = 1;
	v->a[37095] = sym_comment;
	v->a[37096] = actions(1535);
	v->a[37097] = 1;
	v->a[37098] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37099] = actions(1539);
	small_parse_table_1855(v);
}

/* EOF small_parse_table_370.c */
