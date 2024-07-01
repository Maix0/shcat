/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_790.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3950(t_small_parse_table_array *v)
{
	v->a[79000] = actions(773);
	v->a[79001] = 1;
	v->a[79002] = anon_sym_DOLLAR_LBRACE;
	v->a[79003] = actions(775);
	v->a[79004] = 1;
	v->a[79005] = anon_sym_DOLLAR_LPAREN;
	v->a[79006] = actions(777);
	v->a[79007] = 1;
	v->a[79008] = anon_sym_BQUOTE;
	v->a[79009] = state(228);
	v->a[79010] = 2;
	v->a[79011] = sym_concatenation;
	v->a[79012] = aux_sym_for_statement_repeat1;
	v->a[79013] = actions(765);
	v->a[79014] = 3;
	v->a[79015] = sym_raw_string;
	v->a[79016] = sym_number;
	v->a[79017] = sym_word;
	v->a[79018] = state(552);
	v->a[79019] = 5;
	small_parse_table_3951(v);
}

void	small_parse_table_3951(t_small_parse_table_array *v)
{
	v->a[79020] = sym_arithmetic_expansion;
	v->a[79021] = sym_string;
	v->a[79022] = sym_simple_expansion;
	v->a[79023] = sym_expansion;
	v->a[79024] = sym_command_substitution;
	v->a[79025] = 10;
	v->a[79026] = actions(3);
	v->a[79027] = 1;
	v->a[79028] = sym_comment;
	v->a[79029] = actions(2643);
	v->a[79030] = 1;
	v->a[79031] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79032] = actions(2645);
	v->a[79033] = 1;
	v->a[79034] = anon_sym_DOLLAR;
	v->a[79035] = actions(2647);
	v->a[79036] = 1;
	v->a[79037] = anon_sym_DQUOTE;
	v->a[79038] = actions(2649);
	v->a[79039] = 1;
	small_parse_table_3952(v);
}

void	small_parse_table_3952(t_small_parse_table_array *v)
{
	v->a[79040] = anon_sym_DOLLAR_LBRACE;
	v->a[79041] = actions(2651);
	v->a[79042] = 1;
	v->a[79043] = anon_sym_DOLLAR_LPAREN;
	v->a[79044] = actions(2653);
	v->a[79045] = 1;
	v->a[79046] = anon_sym_BQUOTE;
	v->a[79047] = state(901);
	v->a[79048] = 2;
	v->a[79049] = sym_concatenation;
	v->a[79050] = aux_sym_for_statement_repeat1;
	v->a[79051] = actions(3073);
	v->a[79052] = 3;
	v->a[79053] = sym_raw_string;
	v->a[79054] = sym_number;
	v->a[79055] = sym_word;
	v->a[79056] = state(1118);
	v->a[79057] = 5;
	v->a[79058] = sym_arithmetic_expansion;
	v->a[79059] = sym_string;
	small_parse_table_3953(v);
}

void	small_parse_table_3953(t_small_parse_table_array *v)
{
	v->a[79060] = sym_simple_expansion;
	v->a[79061] = sym_expansion;
	v->a[79062] = sym_command_substitution;
	v->a[79063] = 10;
	v->a[79064] = actions(3);
	v->a[79065] = 1;
	v->a[79066] = sym_comment;
	v->a[79067] = actions(894);
	v->a[79068] = 1;
	v->a[79069] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79070] = actions(896);
	v->a[79071] = 1;
	v->a[79072] = anon_sym_DOLLAR;
	v->a[79073] = actions(898);
	v->a[79074] = 1;
	v->a[79075] = anon_sym_DQUOTE;
	v->a[79076] = actions(900);
	v->a[79077] = 1;
	v->a[79078] = anon_sym_DOLLAR_LBRACE;
	v->a[79079] = actions(902);
	small_parse_table_3954(v);
}

void	small_parse_table_3954(t_small_parse_table_array *v)
{
	v->a[79080] = 1;
	v->a[79081] = anon_sym_DOLLAR_LPAREN;
	v->a[79082] = actions(904);
	v->a[79083] = 1;
	v->a[79084] = anon_sym_BQUOTE;
	v->a[79085] = state(1263);
	v->a[79086] = 2;
	v->a[79087] = sym_concatenation;
	v->a[79088] = aux_sym_for_statement_repeat1;
	v->a[79089] = actions(2260);
	v->a[79090] = 3;
	v->a[79091] = sym_raw_string;
	v->a[79092] = sym_number;
	v->a[79093] = sym_word;
	v->a[79094] = state(1543);
	v->a[79095] = 5;
	v->a[79096] = sym_arithmetic_expansion;
	v->a[79097] = sym_string;
	v->a[79098] = sym_simple_expansion;
	v->a[79099] = sym_expansion;
	small_parse_table_3955(v);
}

/* EOF small_parse_table_790.c */
