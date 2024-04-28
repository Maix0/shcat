/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2170.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10850(t_small_parse_table_array *v)
{
	v->a[217000] = sym_expansion;
	v->a[217001] = sym_command_substitution;
	v->a[217002] = sym_process_substitution;
	v->a[217003] = 18;
	v->a[217004] = actions(3);
	v->a[217005] = 1;
	v->a[217006] = sym_comment;
	v->a[217007] = actions(3367);
	v->a[217008] = 1;
	v->a[217009] = anon_sym_DOLLAR;
	v->a[217010] = actions(3373);
	v->a[217011] = 1;
	v->a[217012] = aux_sym_number_token1;
	v->a[217013] = actions(3375);
	v->a[217014] = 1;
	v->a[217015] = aux_sym_number_token2;
	v->a[217016] = actions(3379);
	v->a[217017] = 1;
	v->a[217018] = anon_sym_DOLLAR_LPAREN;
	v->a[217019] = actions(3389);
	small_parse_table_10851(v);
}

void	small_parse_table_10851(t_small_parse_table_array *v)
{
	v->a[217020] = 1;
	v->a[217021] = sym__brace_start;
	v->a[217022] = actions(9802);
	v->a[217023] = 1;
	v->a[217024] = anon_sym_DOLLAR_LBRACK;
	v->a[217025] = actions(9806);
	v->a[217026] = 1;
	v->a[217027] = anon_sym_DQUOTE;
	v->a[217028] = actions(9810);
	v->a[217029] = 1;
	v->a[217030] = anon_sym_DOLLAR_LBRACE;
	v->a[217031] = actions(9812);
	v->a[217032] = 1;
	v->a[217033] = anon_sym_BQUOTE;
	v->a[217034] = actions(9814);
	v->a[217035] = 1;
	v->a[217036] = anon_sym_DOLLAR_BQUOTE;
	v->a[217037] = actions(10330);
	v->a[217038] = 1;
	v->a[217039] = sym_word;
	small_parse_table_10852(v);
}

void	small_parse_table_10852(t_small_parse_table_array *v)
{
	v->a[217040] = actions(10338);
	v->a[217041] = 1;
	v->a[217042] = sym__comment_word;
	v->a[217043] = actions(9800);
	v->a[217044] = 2;
	v->a[217045] = anon_sym_LPAREN_LPAREN;
	v->a[217046] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[217047] = actions(9816);
	v->a[217048] = 2;
	v->a[217049] = anon_sym_LT_LPAREN;
	v->a[217050] = anon_sym_GT_LPAREN;
	v->a[217051] = actions(10334);
	v->a[217052] = 2;
	v->a[217053] = sym_test_operator;
	v->a[217054] = sym__special_character;
	v->a[217055] = actions(10336);
	v->a[217056] = 3;
	v->a[217057] = sym__bare_dollar;
	v->a[217058] = sym_raw_string;
	v->a[217059] = sym_ansi_c_string;
	small_parse_table_10853(v);
}

void	small_parse_table_10853(t_small_parse_table_array *v)
{
	v->a[217060] = state(4532);
	v->a[217061] = 9;
	v->a[217062] = sym_arithmetic_expansion;
	v->a[217063] = sym_brace_expression;
	v->a[217064] = sym_string;
	v->a[217065] = sym_translated_string;
	v->a[217066] = sym_number;
	v->a[217067] = sym_simple_expansion;
	v->a[217068] = sym_expansion;
	v->a[217069] = sym_command_substitution;
	v->a[217070] = sym_process_substitution;
	v->a[217071] = 18;
	v->a[217072] = actions(3);
	v->a[217073] = 1;
	v->a[217074] = sym_comment;
	v->a[217075] = actions(3373);
	v->a[217076] = 1;
	v->a[217077] = aux_sym_number_token1;
	v->a[217078] = actions(3375);
	v->a[217079] = 1;
	small_parse_table_10854(v);
}

void	small_parse_table_10854(t_small_parse_table_array *v)
{
	v->a[217080] = aux_sym_number_token2;
	v->a[217081] = actions(3379);
	v->a[217082] = 1;
	v->a[217083] = anon_sym_DOLLAR_LPAREN;
	v->a[217084] = actions(3389);
	v->a[217085] = 1;
	v->a[217086] = sym__brace_start;
	v->a[217087] = actions(9802);
	v->a[217088] = 1;
	v->a[217089] = anon_sym_DOLLAR_LBRACK;
	v->a[217090] = actions(9806);
	v->a[217091] = 1;
	v->a[217092] = anon_sym_DQUOTE;
	v->a[217093] = actions(9810);
	v->a[217094] = 1;
	v->a[217095] = anon_sym_DOLLAR_LBRACE;
	v->a[217096] = actions(9812);
	v->a[217097] = 1;
	v->a[217098] = anon_sym_BQUOTE;
	v->a[217099] = actions(9814);
	small_parse_table_10855(v);
}

/* EOF small_parse_table_2170.c */
