/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_650.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3250(t_small_parse_table_array *v)
{
	v->a[65000] = 1;
	v->a[65001] = sym_extglob_pattern;
	v->a[65002] = actions(2635);
	v->a[65003] = 10;
	v->a[65004] = anon_sym_LPAREN;
	v->a[65005] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65006] = anon_sym_DOLLAR;
	v->a[65007] = anon_sym_DQUOTE;
	v->a[65008] = sym_raw_string;
	v->a[65009] = sym_number;
	v->a[65010] = anon_sym_DOLLAR_LBRACE;
	v->a[65011] = anon_sym_DOLLAR_LPAREN;
	v->a[65012] = anon_sym_BQUOTE;
	v->a[65013] = sym_word;
	v->a[65014] = 3;
	v->a[65015] = actions(3);
	v->a[65016] = 1;
	v->a[65017] = sym_comment;
	v->a[65018] = actions(2639);
	v->a[65019] = 1;
	small_parse_table_3251(v);
}

void	small_parse_table_3251(t_small_parse_table_array *v)
{
	v->a[65020] = sym_extglob_pattern;
	v->a[65021] = actions(2635);
	v->a[65022] = 10;
	v->a[65023] = anon_sym_LPAREN;
	v->a[65024] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65025] = anon_sym_DOLLAR;
	v->a[65026] = anon_sym_DQUOTE;
	v->a[65027] = sym_raw_string;
	v->a[65028] = sym_number;
	v->a[65029] = anon_sym_DOLLAR_LBRACE;
	v->a[65030] = anon_sym_DOLLAR_LPAREN;
	v->a[65031] = anon_sym_BQUOTE;
	v->a[65032] = sym_word;
	v->a[65033] = 4;
	v->a[65034] = actions(3);
	v->a[65035] = 1;
	v->a[65036] = sym_comment;
	v->a[65037] = actions(819);
	v->a[65038] = 1;
	v->a[65039] = sym_variable_name;
	small_parse_table_3252(v);
}

void	small_parse_table_3252(t_small_parse_table_array *v)
{
	v->a[65040] = actions(817);
	v->a[65041] = 2;
	v->a[65042] = aux_sym__simple_variable_name_token1;
	v->a[65043] = aux_sym__multiline_variable_name_token1;
	v->a[65044] = actions(815);
	v->a[65045] = 8;
	v->a[65046] = anon_sym_BANG;
	v->a[65047] = anon_sym_DASH;
	v->a[65048] = anon_sym_STAR;
	v->a[65049] = anon_sym_QMARK;
	v->a[65050] = anon_sym_DOLLAR;
	v->a[65051] = anon_sym_POUND;
	v->a[65052] = anon_sym_AT;
	v->a[65053] = anon_sym_0;
	v->a[65054] = 3;
	v->a[65055] = actions(3);
	v->a[65056] = 1;
	v->a[65057] = sym_comment;
	v->a[65058] = actions(2578);
	v->a[65059] = 1;
	small_parse_table_3253(v);
}

void	small_parse_table_3253(t_small_parse_table_array *v)
{
	v->a[65060] = sym_extglob_pattern;
	v->a[65061] = actions(2574);
	v->a[65062] = 10;
	v->a[65063] = anon_sym_LPAREN;
	v->a[65064] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65065] = anon_sym_DOLLAR;
	v->a[65066] = anon_sym_DQUOTE;
	v->a[65067] = sym_raw_string;
	v->a[65068] = sym_number;
	v->a[65069] = anon_sym_DOLLAR_LBRACE;
	v->a[65070] = anon_sym_DOLLAR_LPAREN;
	v->a[65071] = anon_sym_BQUOTE;
	v->a[65072] = sym_word;
	v->a[65073] = 4;
	v->a[65074] = actions(3);
	v->a[65075] = 1;
	v->a[65076] = sym_comment;
	v->a[65077] = actions(387);
	v->a[65078] = 1;
	v->a[65079] = sym_variable_name;
	small_parse_table_3254(v);
}

void	small_parse_table_3254(t_small_parse_table_array *v)
{
	v->a[65080] = actions(385);
	v->a[65081] = 2;
	v->a[65082] = aux_sym__simple_variable_name_token1;
	v->a[65083] = aux_sym__multiline_variable_name_token1;
	v->a[65084] = actions(383);
	v->a[65085] = 8;
	v->a[65086] = anon_sym_BANG;
	v->a[65087] = anon_sym_DASH;
	v->a[65088] = anon_sym_STAR;
	v->a[65089] = anon_sym_QMARK;
	v->a[65090] = anon_sym_DOLLAR;
	v->a[65091] = anon_sym_POUND;
	v->a[65092] = anon_sym_AT;
	v->a[65093] = anon_sym_0;
	v->a[65094] = 3;
	v->a[65095] = actions(3);
	v->a[65096] = 1;
	v->a[65097] = sym_comment;
	v->a[65098] = actions(2578);
	v->a[65099] = 1;
	small_parse_table_3255(v);
}

/* EOF small_parse_table_650.c */
