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
	v->a[79000] = sym_regex;
	v->a[79001] = actions(3525);
	v->a[79002] = 1;
	v->a[79003] = anon_sym_RBRACE;
	v->a[79004] = state(1738);
	v->a[79005] = 2;
	v->a[79006] = sym_string;
	v->a[79007] = aux_sym__expansion_regex_repeat1;
	v->a[79008] = 8;
	v->a[79009] = actions(3);
	v->a[79010] = 1;
	v->a[79011] = sym_comment;
	v->a[79012] = actions(3527);
	v->a[79013] = 1;
	v->a[79014] = anon_sym_RPAREN;
	v->a[79015] = actions(3530);
	v->a[79016] = 1;
	v->a[79017] = anon_sym_RBRACE;
	v->a[79018] = actions(3532);
	v->a[79019] = 1;
	small_parse_table_3951(v);
}

void	small_parse_table_3951(t_small_parse_table_array *v)
{
	v->a[79020] = anon_sym_DQUOTE;
	v->a[79021] = actions(3535);
	v->a[79022] = 1;
	v->a[79023] = sym_raw_string;
	v->a[79024] = actions(3538);
	v->a[79025] = 1;
	v->a[79026] = aux_sym__expansion_regex_token1;
	v->a[79027] = actions(3541);
	v->a[79028] = 1;
	v->a[79029] = sym_regex;
	v->a[79030] = state(1740);
	v->a[79031] = 2;
	v->a[79032] = sym_string;
	v->a[79033] = aux_sym__expansion_regex_repeat1;
	v->a[79034] = 3;
	v->a[79035] = actions(3);
	v->a[79036] = 1;
	v->a[79037] = sym_comment;
	v->a[79038] = actions(539);
	v->a[79039] = 1;
	small_parse_table_3952(v);
}

void	small_parse_table_3952(t_small_parse_table_array *v)
{
	v->a[79040] = sym__concat;
	v->a[79041] = actions(537);
	v->a[79042] = 7;
	v->a[79043] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79044] = anon_sym_DOLLAR;
	v->a[79045] = anon_sym_DQUOTE;
	v->a[79046] = sym_string_content;
	v->a[79047] = anon_sym_DOLLAR_LBRACE;
	v->a[79048] = anon_sym_DOLLAR_LPAREN;
	v->a[79049] = anon_sym_BQUOTE;
	v->a[79050] = 3;
	v->a[79051] = actions(3);
	v->a[79052] = 1;
	v->a[79053] = sym_comment;
	v->a[79054] = actions(731);
	v->a[79055] = 1;
	v->a[79056] = sym__concat;
	v->a[79057] = actions(729);
	v->a[79058] = 7;
	v->a[79059] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3953(v);
}

void	small_parse_table_3953(t_small_parse_table_array *v)
{
	v->a[79060] = anon_sym_DOLLAR;
	v->a[79061] = anon_sym_DQUOTE;
	v->a[79062] = sym_string_content;
	v->a[79063] = anon_sym_DOLLAR_LBRACE;
	v->a[79064] = anon_sym_DOLLAR_LPAREN;
	v->a[79065] = anon_sym_BQUOTE;
	v->a[79066] = 3;
	v->a[79067] = actions(3);
	v->a[79068] = 1;
	v->a[79069] = sym_comment;
	v->a[79070] = actions(523);
	v->a[79071] = 1;
	v->a[79072] = sym__concat;
	v->a[79073] = actions(521);
	v->a[79074] = 7;
	v->a[79075] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79076] = anon_sym_DOLLAR;
	v->a[79077] = anon_sym_DQUOTE;
	v->a[79078] = sym_string_content;
	v->a[79079] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3954(v);
}

void	small_parse_table_3954(t_small_parse_table_array *v)
{
	v->a[79080] = anon_sym_DOLLAR_LPAREN;
	v->a[79081] = anon_sym_BQUOTE;
	v->a[79082] = 8;
	v->a[79083] = actions(3);
	v->a[79084] = 1;
	v->a[79085] = sym_comment;
	v->a[79086] = actions(3513);
	v->a[79087] = 1;
	v->a[79088] = aux_sym_heredoc_redirect_token1;
	v->a[79089] = actions(3515);
	v->a[79090] = 1;
	v->a[79091] = aux_sym_concatenation_token1;
	v->a[79092] = actions(3517);
	v->a[79093] = 1;
	v->a[79094] = sym__concat;
	v->a[79095] = actions(3544);
	v->a[79096] = 1;
	v->a[79097] = anon_sym_in;
	v->a[79098] = state(1755);
	v->a[79099] = 1;
	small_parse_table_3955(v);
}

/* EOF small_parse_table_790.c */
