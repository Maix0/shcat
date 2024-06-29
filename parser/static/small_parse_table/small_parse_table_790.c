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
	v->a[79000] = anon_sym_DOLLAR_LPAREN;
	v->a[79001] = actions(2819);
	v->a[79002] = 1;
	v->a[79003] = anon_sym_BQUOTE;
	v->a[79004] = actions(2841);
	v->a[79005] = 1;
	v->a[79006] = anon_sym_DOLLAR;
	v->a[79007] = actions(2843);
	v->a[79008] = 1;
	v->a[79009] = sym__comment_word;
	v->a[79010] = actions(2845);
	v->a[79011] = 1;
	v->a[79012] = sym__empty_value;
	v->a[79013] = state(1101);
	v->a[79014] = 1;
	v->a[79015] = sym_concatenation;
	v->a[79016] = actions(2871);
	v->a[79017] = 3;
	v->a[79018] = sym_raw_string;
	v->a[79019] = sym_number;
	small_parse_table_3951(v);
}

void	small_parse_table_3951(t_small_parse_table_array *v)
{
	v->a[79020] = sym_word;
	v->a[79021] = state(1082);
	v->a[79022] = 5;
	v->a[79023] = sym_arithmetic_expansion;
	v->a[79024] = sym_string;
	v->a[79025] = sym_simple_expansion;
	v->a[79026] = sym_expansion;
	v->a[79027] = sym_command_substitution;
	v->a[79028] = 10;
	v->a[79029] = actions(3);
	v->a[79030] = 1;
	v->a[79031] = sym_comment;
	v->a[79032] = actions(813);
	v->a[79033] = 1;
	v->a[79034] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79035] = actions(817);
	v->a[79036] = 1;
	v->a[79037] = anon_sym_DQUOTE;
	v->a[79038] = actions(819);
	v->a[79039] = 1;
	small_parse_table_3952(v);
}

void	small_parse_table_3952(t_small_parse_table_array *v)
{
	v->a[79040] = anon_sym_DOLLAR_LBRACE;
	v->a[79041] = actions(821);
	v->a[79042] = 1;
	v->a[79043] = anon_sym_DOLLAR_LPAREN;
	v->a[79044] = actions(823);
	v->a[79045] = 1;
	v->a[79046] = anon_sym_BQUOTE;
	v->a[79047] = actions(2875);
	v->a[79048] = 1;
	v->a[79049] = anon_sym_DOLLAR;
	v->a[79050] = actions(2877);
	v->a[79051] = 1;
	v->a[79052] = sym__bare_dollar;
	v->a[79053] = actions(2873);
	v->a[79054] = 5;
	v->a[79055] = aux_sym_concatenation_token1;
	v->a[79056] = sym_raw_string;
	v->a[79057] = sym_number;
	v->a[79058] = sym__comment_word;
	v->a[79059] = sym_word;
	small_parse_table_3953(v);
}

void	small_parse_table_3953(t_small_parse_table_array *v)
{
	v->a[79060] = state(607);
	v->a[79061] = 5;
	v->a[79062] = sym_arithmetic_expansion;
	v->a[79063] = sym_string;
	v->a[79064] = sym_simple_expansion;
	v->a[79065] = sym_expansion;
	v->a[79066] = sym_command_substitution;
	v->a[79067] = 12;
	v->a[79068] = actions(3);
	v->a[79069] = 1;
	v->a[79070] = sym_comment;
	v->a[79071] = actions(2881);
	v->a[79072] = 1;
	v->a[79073] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79074] = actions(2883);
	v->a[79075] = 1;
	v->a[79076] = anon_sym_DOLLAR;
	v->a[79077] = actions(2885);
	v->a[79078] = 1;
	v->a[79079] = anon_sym_DQUOTE;
	small_parse_table_3954(v);
}

void	small_parse_table_3954(t_small_parse_table_array *v)
{
	v->a[79080] = actions(2887);
	v->a[79081] = 1;
	v->a[79082] = anon_sym_DOLLAR_LBRACE;
	v->a[79083] = actions(2889);
	v->a[79084] = 1;
	v->a[79085] = anon_sym_DOLLAR_LPAREN;
	v->a[79086] = actions(2891);
	v->a[79087] = 1;
	v->a[79088] = anon_sym_BQUOTE;
	v->a[79089] = actions(2893);
	v->a[79090] = 1;
	v->a[79091] = sym__comment_word;
	v->a[79092] = actions(2895);
	v->a[79093] = 1;
	v->a[79094] = sym__empty_value;
	v->a[79095] = state(989);
	v->a[79096] = 1;
	v->a[79097] = sym_concatenation;
	v->a[79098] = actions(2879);
	v->a[79099] = 3;
	small_parse_table_3955(v);
}

/* EOF small_parse_table_790.c */
