/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1930.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9650(t_small_parse_table_array *v)
{
	v->a[193000] = sym_process_substitution;
	v->a[193001] = 21;
	v->a[193002] = actions(71);
	v->a[193003] = 1;
	v->a[193004] = sym_comment;
	v->a[193005] = actions(8565);
	v->a[193006] = 1;
	v->a[193007] = sym_word;
	v->a[193008] = actions(8571);
	v->a[193009] = 1;
	v->a[193010] = anon_sym_DOLLAR_LBRACK;
	v->a[193011] = actions(8573);
	v->a[193012] = 1;
	v->a[193013] = anon_sym_DOLLAR;
	v->a[193014] = actions(8575);
	v->a[193015] = 1;
	v->a[193016] = sym__special_character;
	v->a[193017] = actions(8577);
	v->a[193018] = 1;
	v->a[193019] = anon_sym_DQUOTE;
	small_parse_table_9651(v);
}

void	small_parse_table_9651(t_small_parse_table_array *v)
{
	v->a[193020] = actions(8581);
	v->a[193021] = 1;
	v->a[193022] = aux_sym_number_token1;
	v->a[193023] = actions(8583);
	v->a[193024] = 1;
	v->a[193025] = aux_sym_number_token2;
	v->a[193026] = actions(8585);
	v->a[193027] = 1;
	v->a[193028] = anon_sym_DOLLAR_LBRACE;
	v->a[193029] = actions(8587);
	v->a[193030] = 1;
	v->a[193031] = anon_sym_DOLLAR_LPAREN;
	v->a[193032] = actions(8589);
	v->a[193033] = 1;
	v->a[193034] = anon_sym_BQUOTE;
	v->a[193035] = actions(8591);
	v->a[193036] = 1;
	v->a[193037] = anon_sym_DOLLAR_BQUOTE;
	v->a[193038] = actions(8595);
	v->a[193039] = 1;
	small_parse_table_9652(v);
}

void	small_parse_table_9652(t_small_parse_table_array *v)
{
	v->a[193040] = sym_test_operator;
	v->a[193041] = actions(8597);
	v->a[193042] = 1;
	v->a[193043] = sym__brace_start;
	v->a[193044] = actions(8619);
	v->a[193045] = 1;
	v->a[193046] = anon_sym_RPAREN;
	v->a[193047] = state(5365);
	v->a[193048] = 1;
	v->a[193049] = aux_sym__literal_repeat1;
	v->a[193050] = actions(8567);
	v->a[193051] = 2;
	v->a[193052] = anon_sym_LPAREN_LPAREN;
	v->a[193053] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[193054] = actions(8579);
	v->a[193055] = 2;
	v->a[193056] = sym_raw_string;
	v->a[193057] = sym_ansi_c_string;
	v->a[193058] = actions(8593);
	v->a[193059] = 2;
	small_parse_table_9653(v);
}

void	small_parse_table_9653(t_small_parse_table_array *v)
{
	v->a[193060] = anon_sym_LT_LPAREN;
	v->a[193061] = anon_sym_GT_LPAREN;
	v->a[193062] = state(3613);
	v->a[193063] = 2;
	v->a[193064] = sym_concatenation;
	v->a[193065] = aux_sym_for_statement_repeat1;
	v->a[193066] = state(5045);
	v->a[193067] = 9;
	v->a[193068] = sym_arithmetic_expansion;
	v->a[193069] = sym_brace_expression;
	v->a[193070] = sym_string;
	v->a[193071] = sym_translated_string;
	v->a[193072] = sym_number;
	v->a[193073] = sym_simple_expansion;
	v->a[193074] = sym_expansion;
	v->a[193075] = sym_command_substitution;
	v->a[193076] = sym_process_substitution;
	v->a[193077] = 8;
	v->a[193078] = actions(3);
	v->a[193079] = 1;
	small_parse_table_9654(v);
}

void	small_parse_table_9654(t_small_parse_table_array *v)
{
	v->a[193080] = sym_comment;
	v->a[193081] = actions(8623);
	v->a[193082] = 1;
	v->a[193083] = anon_sym_DQUOTE;
	v->a[193084] = actions(8627);
	v->a[193085] = 1;
	v->a[193086] = sym_variable_name;
	v->a[193087] = state(5204);
	v->a[193088] = 1;
	v->a[193089] = sym_string;
	v->a[193090] = actions(1235);
	v->a[193091] = 2;
	v->a[193092] = sym_test_operator;
	v->a[193093] = sym__brace_start;
	v->a[193094] = actions(8625);
	v->a[193095] = 2;
	v->a[193096] = aux_sym__simple_variable_name_token1;
	v->a[193097] = aux_sym__multiline_variable_name_token1;
	v->a[193098] = actions(8621);
	v->a[193099] = 9;
	small_parse_table_9655(v);
}

/* EOF small_parse_table_1930.c */
