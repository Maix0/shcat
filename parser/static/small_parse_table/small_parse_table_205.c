/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_205.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1025(t_small_parse_table_array *v)
{
	v->a[20500] = actions(3745);
	v->a[20501] = 1;
	v->a[20502] = anon_sym_BQUOTE;
	v->a[20503] = actions(3747);
	v->a[20504] = 1;
	v->a[20505] = anon_sym_DOLLAR_BQUOTE;
	v->a[20506] = actions(3751);
	v->a[20507] = 1;
	v->a[20508] = sym_file_descriptor;
	v->a[20509] = actions(3753);
	v->a[20510] = 1;
	v->a[20511] = sym_test_operator;
	v->a[20512] = actions(3755);
	v->a[20513] = 1;
	v->a[20514] = sym__brace_start;
	v->a[20515] = actions(3904);
	v->a[20516] = 1;
	v->a[20517] = aux_sym_heredoc_redirect_token1;
	v->a[20518] = state(3583);
	v->a[20519] = 1;
	small_parse_table_1026(v);
}

void	small_parse_table_1026(t_small_parse_table_array *v)
{
	v->a[20520] = aux_sym__heredoc_command;
	v->a[20521] = state(5351);
	v->a[20522] = 1;
	v->a[20523] = aux_sym__literal_repeat1;
	v->a[20524] = state(5456);
	v->a[20525] = 1;
	v->a[20526] = sym_concatenation;
	v->a[20527] = state(6939);
	v->a[20528] = 1;
	v->a[20529] = sym__heredoc_expression;
	v->a[20530] = state(6941);
	v->a[20531] = 1;
	v->a[20532] = sym__heredoc_pipeline;
	v->a[20533] = actions(3715);
	v->a[20534] = 2;
	v->a[20535] = anon_sym_LPAREN_LPAREN;
	v->a[20536] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20537] = actions(3717);
	v->a[20538] = 2;
	v->a[20539] = anon_sym_PIPE_PIPE;
	small_parse_table_1027(v);
}

void	small_parse_table_1027(t_small_parse_table_array *v)
{
	v->a[20540] = anon_sym_AMP_AMP;
	v->a[20541] = actions(3719);
	v->a[20542] = 2;
	v->a[20543] = anon_sym_PIPE;
	v->a[20544] = anon_sym_PIPE_AMP;
	v->a[20545] = actions(3723);
	v->a[20546] = 2;
	v->a[20547] = anon_sym_LT_AMP_DASH;
	v->a[20548] = anon_sym_GT_AMP_DASH;
	v->a[20549] = actions(3749);
	v->a[20550] = 2;
	v->a[20551] = anon_sym_LT_LPAREN;
	v->a[20552] = anon_sym_GT_LPAREN;
	v->a[20553] = actions(3713);
	v->a[20554] = 3;
	v->a[20555] = sym_raw_string;
	v->a[20556] = sym_ansi_c_string;
	v->a[20557] = sym_word;
	v->a[20558] = state(5515);
	v->a[20559] = 3;
	small_parse_table_1028(v);
}

void	small_parse_table_1028(t_small_parse_table_array *v)
{
	v->a[20560] = sym_file_redirect;
	v->a[20561] = sym_herestring_redirect;
	v->a[20562] = aux_sym_redirected_statement_repeat2;
	v->a[20563] = actions(3721);
	v->a[20564] = 8;
	v->a[20565] = anon_sym_LT;
	v->a[20566] = anon_sym_GT;
	v->a[20567] = anon_sym_GT_GT;
	v->a[20568] = anon_sym_AMP_GT;
	v->a[20569] = anon_sym_AMP_GT_GT;
	v->a[20570] = anon_sym_LT_AMP;
	v->a[20571] = anon_sym_GT_AMP;
	v->a[20572] = anon_sym_GT_PIPE;
	v->a[20573] = state(5062);
	v->a[20574] = 9;
	v->a[20575] = sym_arithmetic_expansion;
	v->a[20576] = sym_brace_expression;
	v->a[20577] = sym_string;
	v->a[20578] = sym_translated_string;
	v->a[20579] = sym_number;
	small_parse_table_1029(v);
}

void	small_parse_table_1029(t_small_parse_table_array *v)
{
	v->a[20580] = sym_simple_expansion;
	v->a[20581] = sym_expansion;
	v->a[20582] = sym_command_substitution;
	v->a[20583] = sym_process_substitution;
	v->a[20584] = 30;
	v->a[20585] = actions(3);
	v->a[20586] = 1;
	v->a[20587] = sym_comment;
	v->a[20588] = actions(3727);
	v->a[20589] = 1;
	v->a[20590] = anon_sym_LT_LT_LT;
	v->a[20591] = actions(3729);
	v->a[20592] = 1;
	v->a[20593] = anon_sym_DOLLAR_LBRACK;
	v->a[20594] = actions(3731);
	v->a[20595] = 1;
	v->a[20596] = anon_sym_DOLLAR;
	v->a[20597] = actions(3733);
	v->a[20598] = 1;
	v->a[20599] = sym__special_character;
	small_parse_table_1030(v);
}

/* EOF small_parse_table_205.c */
