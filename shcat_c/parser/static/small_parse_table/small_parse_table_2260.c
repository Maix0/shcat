/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2260.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11300(t_small_parse_table_array *v)
{
	v->a[226000] = sym_expansion;
	v->a[226001] = sym_command_substitution;
	v->a[226002] = sym_process_substitution;
	v->a[226003] = 18;
	v->a[226004] = actions(3);
	v->a[226005] = 1;
	v->a[226006] = sym_comment;
	v->a[226007] = actions(1141);
	v->a[226008] = 1;
	v->a[226009] = anon_sym_DOLLAR_LBRACK;
	v->a[226010] = actions(1149);
	v->a[226011] = 1;
	v->a[226012] = anon_sym_DQUOTE;
	v->a[226013] = actions(1153);
	v->a[226014] = 1;
	v->a[226015] = aux_sym_number_token1;
	v->a[226016] = actions(1155);
	v->a[226017] = 1;
	v->a[226018] = aux_sym_number_token2;
	v->a[226019] = actions(1157);
	small_parse_table_11301(v);
}

void	small_parse_table_11301(t_small_parse_table_array *v)
{
	v->a[226020] = 1;
	v->a[226021] = anon_sym_DOLLAR_LBRACE;
	v->a[226022] = actions(1159);
	v->a[226023] = 1;
	v->a[226024] = anon_sym_DOLLAR_LPAREN;
	v->a[226025] = actions(1163);
	v->a[226026] = 1;
	v->a[226027] = anon_sym_DOLLAR_BQUOTE;
	v->a[226028] = actions(1169);
	v->a[226029] = 1;
	v->a[226030] = sym__brace_start;
	v->a[226031] = actions(3060);
	v->a[226032] = 1;
	v->a[226033] = anon_sym_BQUOTE;
	v->a[226034] = actions(10188);
	v->a[226035] = 1;
	v->a[226036] = sym_word;
	v->a[226037] = actions(10196);
	v->a[226038] = 1;
	v->a[226039] = sym__comment_word;
	small_parse_table_11302(v);
}

void	small_parse_table_11302(t_small_parse_table_array *v)
{
	v->a[226040] = actions(10740);
	v->a[226041] = 1;
	v->a[226042] = anon_sym_DOLLAR;
	v->a[226043] = actions(1129);
	v->a[226044] = 2;
	v->a[226045] = anon_sym_LPAREN_LPAREN;
	v->a[226046] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[226047] = actions(1165);
	v->a[226048] = 2;
	v->a[226049] = anon_sym_LT_LPAREN;
	v->a[226050] = anon_sym_GT_LPAREN;
	v->a[226051] = actions(10192);
	v->a[226052] = 2;
	v->a[226053] = sym_test_operator;
	v->a[226054] = sym__special_character;
	v->a[226055] = actions(10194);
	v->a[226056] = 3;
	v->a[226057] = sym__bare_dollar;
	v->a[226058] = sym_raw_string;
	v->a[226059] = sym_ansi_c_string;
	small_parse_table_11303(v);
}

void	small_parse_table_11303(t_small_parse_table_array *v)
{
	v->a[226060] = state(2392);
	v->a[226061] = 9;
	v->a[226062] = sym_arithmetic_expansion;
	v->a[226063] = sym_brace_expression;
	v->a[226064] = sym_string;
	v->a[226065] = sym_translated_string;
	v->a[226066] = sym_number;
	v->a[226067] = sym_simple_expansion;
	v->a[226068] = sym_expansion;
	v->a[226069] = sym_command_substitution;
	v->a[226070] = sym_process_substitution;
	v->a[226071] = 20;
	v->a[226072] = actions(71);
	v->a[226073] = 1;
	v->a[226074] = sym_comment;
	v->a[226075] = actions(8178);
	v->a[226076] = 1;
	v->a[226077] = anon_sym_DOLLAR_LBRACK;
	v->a[226078] = actions(8180);
	v->a[226079] = 1;
	small_parse_table_11304(v);
}

void	small_parse_table_11304(t_small_parse_table_array *v)
{
	v->a[226080] = anon_sym_DOLLAR;
	v->a[226081] = actions(8184);
	v->a[226082] = 1;
	v->a[226083] = anon_sym_DQUOTE;
	v->a[226084] = actions(8188);
	v->a[226085] = 1;
	v->a[226086] = aux_sym_number_token1;
	v->a[226087] = actions(8190);
	v->a[226088] = 1;
	v->a[226089] = aux_sym_number_token2;
	v->a[226090] = actions(8192);
	v->a[226091] = 1;
	v->a[226092] = anon_sym_DOLLAR_LBRACE;
	v->a[226093] = actions(8194);
	v->a[226094] = 1;
	v->a[226095] = anon_sym_DOLLAR_LPAREN;
	v->a[226096] = actions(8196);
	v->a[226097] = 1;
	v->a[226098] = anon_sym_BQUOTE;
	v->a[226099] = actions(8198);
	small_parse_table_11305(v);
}

/* EOF small_parse_table_2260.c */
