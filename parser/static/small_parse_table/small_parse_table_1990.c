/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1990.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9950(t_small_parse_table_array *v)
{
	v->a[199000] = sym_arithmetic_expansion;
	v->a[199001] = sym_brace_expression;
	v->a[199002] = sym_string;
	v->a[199003] = sym_translated_string;
	v->a[199004] = sym_number;
	v->a[199005] = sym_simple_expansion;
	v->a[199006] = sym_expansion;
	v->a[199007] = sym_command_substitution;
	v->a[199008] = sym_process_substitution;
	v->a[199009] = 20;
	v->a[199010] = actions(71);
	v->a[199011] = 1;
	v->a[199012] = sym_comment;
	v->a[199013] = actions(2329);
	v->a[199014] = 1;
	v->a[199015] = sym_word;
	v->a[199016] = actions(2335);
	v->a[199017] = 1;
	v->a[199018] = anon_sym_DOLLAR;
	v->a[199019] = actions(2341);
	small_parse_table_9951(v);
}

void	small_parse_table_9951(t_small_parse_table_array *v)
{
	v->a[199020] = 1;
	v->a[199021] = aux_sym_number_token1;
	v->a[199022] = actions(2343);
	v->a[199023] = 1;
	v->a[199024] = aux_sym_number_token2;
	v->a[199025] = actions(2347);
	v->a[199026] = 1;
	v->a[199027] = anon_sym_DOLLAR_LPAREN;
	v->a[199028] = actions(2355);
	v->a[199029] = 1;
	v->a[199030] = sym_test_operator;
	v->a[199031] = actions(2357);
	v->a[199032] = 1;
	v->a[199033] = sym__brace_start;
	v->a[199034] = actions(9010);
	v->a[199035] = 1;
	v->a[199036] = anon_sym_DOLLAR_LBRACK;
	v->a[199037] = actions(9012);
	v->a[199038] = 1;
	v->a[199039] = sym__special_character;
	small_parse_table_9952(v);
}

void	small_parse_table_9952(t_small_parse_table_array *v)
{
	v->a[199040] = actions(9014);
	v->a[199041] = 1;
	v->a[199042] = anon_sym_DQUOTE;
	v->a[199043] = actions(9018);
	v->a[199044] = 1;
	v->a[199045] = anon_sym_DOLLAR_LBRACE;
	v->a[199046] = actions(9020);
	v->a[199047] = 1;
	v->a[199048] = anon_sym_BQUOTE;
	v->a[199049] = actions(9022);
	v->a[199050] = 1;
	v->a[199051] = anon_sym_DOLLAR_BQUOTE;
	v->a[199052] = state(1658);
	v->a[199053] = 1;
	v->a[199054] = aux_sym__literal_repeat1;
	v->a[199055] = actions(9008);
	v->a[199056] = 2;
	v->a[199057] = anon_sym_LPAREN_LPAREN;
	v->a[199058] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[199059] = actions(9016);
	small_parse_table_9953(v);
}

void	small_parse_table_9953(t_small_parse_table_array *v)
{
	v->a[199060] = 2;
	v->a[199061] = sym_raw_string;
	v->a[199062] = sym_ansi_c_string;
	v->a[199063] = actions(9024);
	v->a[199064] = 2;
	v->a[199065] = anon_sym_LT_LPAREN;
	v->a[199066] = anon_sym_GT_LPAREN;
	v->a[199067] = state(595);
	v->a[199068] = 2;
	v->a[199069] = sym_concatenation;
	v->a[199070] = aux_sym_for_statement_repeat1;
	v->a[199071] = state(1290);
	v->a[199072] = 9;
	v->a[199073] = sym_arithmetic_expansion;
	v->a[199074] = sym_brace_expression;
	v->a[199075] = sym_string;
	v->a[199076] = sym_translated_string;
	v->a[199077] = sym_number;
	v->a[199078] = sym_simple_expansion;
	v->a[199079] = sym_expansion;
	small_parse_table_9954(v);
}

void	small_parse_table_9954(t_small_parse_table_array *v)
{
	v->a[199080] = sym_command_substitution;
	v->a[199081] = sym_process_substitution;
	v->a[199082] = 20;
	v->a[199083] = actions(71);
	v->a[199084] = 1;
	v->a[199085] = sym_comment;
	v->a[199086] = actions(3606);
	v->a[199087] = 1;
	v->a[199088] = sym_word;
	v->a[199089] = actions(3612);
	v->a[199090] = 1;
	v->a[199091] = anon_sym_DOLLAR;
	v->a[199092] = actions(3616);
	v->a[199093] = 1;
	v->a[199094] = aux_sym_number_token1;
	v->a[199095] = actions(3618);
	v->a[199096] = 1;
	v->a[199097] = aux_sym_number_token2;
	v->a[199098] = actions(3622);
	v->a[199099] = 1;
	small_parse_table_9955(v);
}

/* EOF small_parse_table_1990.c */
