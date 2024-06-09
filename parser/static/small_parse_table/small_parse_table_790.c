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
	v->a[79000] = sym_number;
	v->a[79001] = sym_simple_expansion;
	v->a[79002] = sym_expansion;
	v->a[79003] = sym_command_substitution;
	v->a[79004] = 12;
	v->a[79005] = actions(3);
	v->a[79006] = 1;
	v->a[79007] = sym_comment;
	v->a[79008] = actions(457);
	v->a[79009] = 1;
	v->a[79010] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79011] = actions(461);
	v->a[79012] = 1;
	v->a[79013] = anon_sym_DQUOTE;
	v->a[79014] = actions(463);
	v->a[79015] = 1;
	v->a[79016] = aux_sym_number_token1;
	v->a[79017] = actions(465);
	v->a[79018] = 1;
	v->a[79019] = aux_sym_number_token2;
	small_parse_table_3951(v);
}

void	small_parse_table_3951(t_small_parse_table_array *v)
{
	v->a[79020] = actions(467);
	v->a[79021] = 1;
	v->a[79022] = anon_sym_DOLLAR_LBRACE;
	v->a[79023] = actions(469);
	v->a[79024] = 1;
	v->a[79025] = anon_sym_DOLLAR_LPAREN;
	v->a[79026] = actions(471);
	v->a[79027] = 1;
	v->a[79028] = anon_sym_BQUOTE;
	v->a[79029] = actions(3246);
	v->a[79030] = 1;
	v->a[79031] = anon_sym_DOLLAR;
	v->a[79032] = actions(3248);
	v->a[79033] = 1;
	v->a[79034] = sym__bare_dollar;
	v->a[79035] = actions(3244);
	v->a[79036] = 3;
	v->a[79037] = sym_raw_string;
	v->a[79038] = sym__comment_word;
	v->a[79039] = sym_word;
	small_parse_table_3952(v);
}

void	small_parse_table_3952(t_small_parse_table_array *v)
{
	v->a[79040] = state(471);
	v->a[79041] = 6;
	v->a[79042] = sym_arithmetic_expansion;
	v->a[79043] = sym_string;
	v->a[79044] = sym_number;
	v->a[79045] = sym_simple_expansion;
	v->a[79046] = sym_expansion;
	v->a[79047] = sym_command_substitution;
	v->a[79048] = 12;
	v->a[79049] = actions(3);
	v->a[79050] = 1;
	v->a[79051] = sym_comment;
	v->a[79052] = actions(2825);
	v->a[79053] = 1;
	v->a[79054] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79055] = actions(2829);
	v->a[79056] = 1;
	v->a[79057] = anon_sym_DQUOTE;
	v->a[79058] = actions(2831);
	v->a[79059] = 1;
	small_parse_table_3953(v);
}

void	small_parse_table_3953(t_small_parse_table_array *v)
{
	v->a[79060] = aux_sym_number_token1;
	v->a[79061] = actions(2833);
	v->a[79062] = 1;
	v->a[79063] = aux_sym_number_token2;
	v->a[79064] = actions(2835);
	v->a[79065] = 1;
	v->a[79066] = anon_sym_DOLLAR_LBRACE;
	v->a[79067] = actions(2837);
	v->a[79068] = 1;
	v->a[79069] = anon_sym_DOLLAR_LPAREN;
	v->a[79070] = actions(2839);
	v->a[79071] = 1;
	v->a[79072] = anon_sym_BQUOTE;
	v->a[79073] = actions(3252);
	v->a[79074] = 1;
	v->a[79075] = anon_sym_DOLLAR;
	v->a[79076] = actions(3254);
	v->a[79077] = 1;
	v->a[79078] = sym__bare_dollar;
	v->a[79079] = actions(3250);
	small_parse_table_3954(v);
}

void	small_parse_table_3954(t_small_parse_table_array *v)
{
	v->a[79080] = 3;
	v->a[79081] = sym_raw_string;
	v->a[79082] = sym__comment_word;
	v->a[79083] = sym_word;
	v->a[79084] = state(447);
	v->a[79085] = 6;
	v->a[79086] = sym_arithmetic_expansion;
	v->a[79087] = sym_string;
	v->a[79088] = sym_number;
	v->a[79089] = sym_simple_expansion;
	v->a[79090] = sym_expansion;
	v->a[79091] = sym_command_substitution;
	v->a[79092] = 12;
	v->a[79093] = actions(3);
	v->a[79094] = 1;
	v->a[79095] = sym_comment;
	v->a[79096] = actions(63);
	v->a[79097] = 1;
	v->a[79098] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79099] = actions(67);
	small_parse_table_3955(v);
}

/* EOF small_parse_table_790.c */
