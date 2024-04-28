/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2070.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10350(t_small_parse_table_array *v)
{
	v->a[207000] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[207001] = actions(387);
	v->a[207002] = 2;
	v->a[207003] = anon_sym_LT_LPAREN;
	v->a[207004] = anon_sym_GT_LPAREN;
	v->a[207005] = actions(8844);
	v->a[207006] = 2;
	v->a[207007] = sym_test_operator;
	v->a[207008] = sym__special_character;
	v->a[207009] = actions(8842);
	v->a[207010] = 3;
	v->a[207011] = sym__bare_dollar;
	v->a[207012] = sym_raw_string;
	v->a[207013] = sym_ansi_c_string;
	v->a[207014] = state(2730);
	v->a[207015] = 9;
	v->a[207016] = sym_arithmetic_expansion;
	v->a[207017] = sym_brace_expression;
	v->a[207018] = sym_string;
	v->a[207019] = sym_translated_string;
	small_parse_table_10351(v);
}

void	small_parse_table_10351(t_small_parse_table_array *v)
{
	v->a[207020] = sym_number;
	v->a[207021] = sym_simple_expansion;
	v->a[207022] = sym_expansion;
	v->a[207023] = sym_command_substitution;
	v->a[207024] = sym_process_substitution;
	v->a[207025] = 18;
	v->a[207026] = actions(3);
	v->a[207027] = 1;
	v->a[207028] = sym_comment;
	v->a[207029] = actions(2636);
	v->a[207030] = 1;
	v->a[207031] = anon_sym_DOLLAR_LBRACK;
	v->a[207032] = actions(2638);
	v->a[207033] = 1;
	v->a[207034] = anon_sym_DOLLAR;
	v->a[207035] = actions(2642);
	v->a[207036] = 1;
	v->a[207037] = anon_sym_DQUOTE;
	v->a[207038] = actions(2646);
	v->a[207039] = 1;
	small_parse_table_10352(v);
}

void	small_parse_table_10352(t_small_parse_table_array *v)
{
	v->a[207040] = aux_sym_number_token1;
	v->a[207041] = actions(2648);
	v->a[207042] = 1;
	v->a[207043] = aux_sym_number_token2;
	v->a[207044] = actions(2650);
	v->a[207045] = 1;
	v->a[207046] = anon_sym_DOLLAR_LBRACE;
	v->a[207047] = actions(2652);
	v->a[207048] = 1;
	v->a[207049] = anon_sym_DOLLAR_LPAREN;
	v->a[207050] = actions(2654);
	v->a[207051] = 1;
	v->a[207052] = anon_sym_BQUOTE;
	v->a[207053] = actions(2656);
	v->a[207054] = 1;
	v->a[207055] = anon_sym_DOLLAR_BQUOTE;
	v->a[207056] = actions(2664);
	v->a[207057] = 1;
	v->a[207058] = sym__brace_start;
	v->a[207059] = actions(9620);
	small_parse_table_10353(v);
}

void	small_parse_table_10353(t_small_parse_table_array *v)
{
	v->a[207060] = 1;
	v->a[207061] = sym_word;
	v->a[207062] = actions(9626);
	v->a[207063] = 1;
	v->a[207064] = sym__comment_word;
	v->a[207065] = actions(2630);
	v->a[207066] = 2;
	v->a[207067] = anon_sym_LPAREN_LPAREN;
	v->a[207068] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[207069] = actions(2658);
	v->a[207070] = 2;
	v->a[207071] = anon_sym_LT_LPAREN;
	v->a[207072] = anon_sym_GT_LPAREN;
	v->a[207073] = actions(9622);
	v->a[207074] = 2;
	v->a[207075] = sym_test_operator;
	v->a[207076] = sym__special_character;
	v->a[207077] = actions(9624);
	v->a[207078] = 3;
	v->a[207079] = sym__bare_dollar;
	small_parse_table_10354(v);
}

void	small_parse_table_10354(t_small_parse_table_array *v)
{
	v->a[207080] = sym_raw_string;
	v->a[207081] = sym_ansi_c_string;
	v->a[207082] = state(2344);
	v->a[207083] = 9;
	v->a[207084] = sym_arithmetic_expansion;
	v->a[207085] = sym_brace_expression;
	v->a[207086] = sym_string;
	v->a[207087] = sym_translated_string;
	v->a[207088] = sym_number;
	v->a[207089] = sym_simple_expansion;
	v->a[207090] = sym_expansion;
	v->a[207091] = sym_command_substitution;
	v->a[207092] = sym_process_substitution;
	v->a[207093] = 21;
	v->a[207094] = actions(71);
	v->a[207095] = 1;
	v->a[207096] = sym_comment;
	v->a[207097] = actions(9364);
	v->a[207098] = 1;
	v->a[207099] = anon_sym_LPAREN;
	small_parse_table_10355(v);
}

/* EOF small_parse_table_2070.c */
