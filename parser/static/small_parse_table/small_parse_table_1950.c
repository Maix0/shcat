/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1950.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9750(t_small_parse_table_array *v)
{
	v->a[195000] = sym_number;
	v->a[195001] = sym_simple_expansion;
	v->a[195002] = sym_expansion;
	v->a[195003] = sym_command_substitution;
	v->a[195004] = sym_process_substitution;
	v->a[195005] = 21;
	v->a[195006] = actions(71);
	v->a[195007] = 1;
	v->a[195008] = sym_comment;
	v->a[195009] = actions(8565);
	v->a[195010] = 1;
	v->a[195011] = sym_word;
	v->a[195012] = actions(8571);
	v->a[195013] = 1;
	v->a[195014] = anon_sym_DOLLAR_LBRACK;
	v->a[195015] = actions(8573);
	v->a[195016] = 1;
	v->a[195017] = anon_sym_DOLLAR;
	v->a[195018] = actions(8575);
	v->a[195019] = 1;
	small_parse_table_9751(v);
}

void	small_parse_table_9751(t_small_parse_table_array *v)
{
	v->a[195020] = sym__special_character;
	v->a[195021] = actions(8577);
	v->a[195022] = 1;
	v->a[195023] = anon_sym_DQUOTE;
	v->a[195024] = actions(8581);
	v->a[195025] = 1;
	v->a[195026] = aux_sym_number_token1;
	v->a[195027] = actions(8583);
	v->a[195028] = 1;
	v->a[195029] = aux_sym_number_token2;
	v->a[195030] = actions(8585);
	v->a[195031] = 1;
	v->a[195032] = anon_sym_DOLLAR_LBRACE;
	v->a[195033] = actions(8587);
	v->a[195034] = 1;
	v->a[195035] = anon_sym_DOLLAR_LPAREN;
	v->a[195036] = actions(8589);
	v->a[195037] = 1;
	v->a[195038] = anon_sym_BQUOTE;
	v->a[195039] = actions(8591);
	small_parse_table_9752(v);
}

void	small_parse_table_9752(t_small_parse_table_array *v)
{
	v->a[195040] = 1;
	v->a[195041] = anon_sym_DOLLAR_BQUOTE;
	v->a[195042] = actions(8595);
	v->a[195043] = 1;
	v->a[195044] = sym_test_operator;
	v->a[195045] = actions(8597);
	v->a[195046] = 1;
	v->a[195047] = sym__brace_start;
	v->a[195048] = actions(8730);
	v->a[195049] = 1;
	v->a[195050] = anon_sym_RPAREN;
	v->a[195051] = state(5365);
	v->a[195052] = 1;
	v->a[195053] = aux_sym__literal_repeat1;
	v->a[195054] = actions(8567);
	v->a[195055] = 2;
	v->a[195056] = anon_sym_LPAREN_LPAREN;
	v->a[195057] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[195058] = actions(8579);
	v->a[195059] = 2;
	small_parse_table_9753(v);
}

void	small_parse_table_9753(t_small_parse_table_array *v)
{
	v->a[195060] = sym_raw_string;
	v->a[195061] = sym_ansi_c_string;
	v->a[195062] = actions(8593);
	v->a[195063] = 2;
	v->a[195064] = anon_sym_LT_LPAREN;
	v->a[195065] = anon_sym_GT_LPAREN;
	v->a[195066] = state(3577);
	v->a[195067] = 2;
	v->a[195068] = sym_concatenation;
	v->a[195069] = aux_sym_for_statement_repeat1;
	v->a[195070] = state(5045);
	v->a[195071] = 9;
	v->a[195072] = sym_arithmetic_expansion;
	v->a[195073] = sym_brace_expression;
	v->a[195074] = sym_string;
	v->a[195075] = sym_translated_string;
	v->a[195076] = sym_number;
	v->a[195077] = sym_simple_expansion;
	v->a[195078] = sym_expansion;
	v->a[195079] = sym_command_substitution;
	small_parse_table_9754(v);
}

void	small_parse_table_9754(t_small_parse_table_array *v)
{
	v->a[195080] = sym_process_substitution;
	v->a[195081] = 21;
	v->a[195082] = actions(71);
	v->a[195083] = 1;
	v->a[195084] = sym_comment;
	v->a[195085] = actions(8565);
	v->a[195086] = 1;
	v->a[195087] = sym_word;
	v->a[195088] = actions(8571);
	v->a[195089] = 1;
	v->a[195090] = anon_sym_DOLLAR_LBRACK;
	v->a[195091] = actions(8573);
	v->a[195092] = 1;
	v->a[195093] = anon_sym_DOLLAR;
	v->a[195094] = actions(8575);
	v->a[195095] = 1;
	v->a[195096] = sym__special_character;
	v->a[195097] = actions(8577);
	v->a[195098] = 1;
	v->a[195099] = anon_sym_DQUOTE;
	small_parse_table_9755(v);
}

/* EOF small_parse_table_1950.c */
