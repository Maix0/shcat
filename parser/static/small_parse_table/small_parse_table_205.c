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
	v->a[20500] = sym_variable_assignment;
	v->a[20501] = aux_sym_variable_assignments_repeat1;
	v->a[20502] = actions(2526);
	v->a[20503] = 3;
	v->a[20504] = sym_file_descriptor;
	v->a[20505] = sym_test_operator;
	v->a[20506] = sym__brace_start;
	v->a[20507] = actions(2941);
	v->a[20508] = 3;
	v->a[20509] = anon_sym_SEMI_SEMI;
	v->a[20510] = anon_sym_AMP;
	v->a[20511] = anon_sym_SEMI;
	v->a[20512] = state(2129);
	v->a[20513] = 3;
	v->a[20514] = sym_file_redirect;
	v->a[20515] = sym_heredoc_redirect;
	v->a[20516] = aux_sym_redirected_statement_repeat1;
	v->a[20517] = actions(2512);
	v->a[20518] = 22;
	v->a[20519] = anon_sym_LT;
	small_parse_table_1026(v);
}

void	small_parse_table_1026(t_small_parse_table_array *v)
{
	v->a[20520] = anon_sym_GT;
	v->a[20521] = anon_sym_GT_GT;
	v->a[20522] = anon_sym_AMP_GT;
	v->a[20523] = anon_sym_AMP_GT_GT;
	v->a[20524] = anon_sym_LT_AMP;
	v->a[20525] = anon_sym_GT_AMP;
	v->a[20526] = anon_sym_GT_PIPE;
	v->a[20527] = anon_sym_LT_AMP_DASH;
	v->a[20528] = anon_sym_GT_AMP_DASH;
	v->a[20529] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20530] = anon_sym_DOLLAR;
	v->a[20531] = sym__special_character;
	v->a[20532] = anon_sym_DQUOTE;
	v->a[20533] = sym_raw_string;
	v->a[20534] = aux_sym_number_token1;
	v->a[20535] = aux_sym_number_token2;
	v->a[20536] = anon_sym_DOLLAR_LBRACE;
	v->a[20537] = anon_sym_DOLLAR_LPAREN;
	v->a[20538] = anon_sym_BQUOTE;
	v->a[20539] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_1027(v);
}

void	small_parse_table_1027(t_small_parse_table_array *v)
{
	v->a[20540] = sym_word;
	v->a[20541] = 6;
	v->a[20542] = actions(57);
	v->a[20543] = 1;
	v->a[20544] = sym_comment;
	v->a[20545] = state(1662);
	v->a[20546] = 1;
	v->a[20547] = aux_sym__literal_repeat1;
	v->a[20548] = state(546);
	v->a[20549] = 2;
	v->a[20550] = sym_concatenation;
	v->a[20551] = aux_sym_for_statement_repeat1;
	v->a[20552] = state(1461);
	v->a[20553] = 7;
	v->a[20554] = sym_arithmetic_expansion;
	v->a[20555] = sym_brace_expression;
	v->a[20556] = sym_string;
	v->a[20557] = sym_number;
	v->a[20558] = sym_simple_expansion;
	v->a[20559] = sym_expansion;
	small_parse_table_1028(v);
}

void	small_parse_table_1028(t_small_parse_table_array *v)
{
	v->a[20560] = sym_command_substitution;
	v->a[20561] = actions(1388);
	v->a[20562] = 12;
	v->a[20563] = anon_sym_PIPE;
	v->a[20564] = anon_sym_LT;
	v->a[20565] = anon_sym_GT;
	v->a[20566] = anon_sym_AMP_GT;
	v->a[20567] = anon_sym_LT_AMP;
	v->a[20568] = anon_sym_GT_AMP;
	v->a[20569] = anon_sym_LT_LT;
	v->a[20570] = anon_sym_DOLLAR;
	v->a[20571] = aux_sym_number_token1;
	v->a[20572] = aux_sym_number_token2;
	v->a[20573] = anon_sym_DOLLAR_LPAREN;
	v->a[20574] = sym_word;
	v->a[20575] = actions(1390);
	v->a[20576] = 20;
	v->a[20577] = sym_file_descriptor;
	v->a[20578] = sym_variable_name;
	v->a[20579] = sym_test_operator;
	small_parse_table_1029(v);
}

void	small_parse_table_1029(t_small_parse_table_array *v)
{
	v->a[20580] = sym__brace_start;
	v->a[20581] = anon_sym_PIPE_AMP;
	v->a[20582] = anon_sym_AMP_AMP;
	v->a[20583] = anon_sym_PIPE_PIPE;
	v->a[20584] = anon_sym_GT_GT;
	v->a[20585] = anon_sym_AMP_GT_GT;
	v->a[20586] = anon_sym_GT_PIPE;
	v->a[20587] = anon_sym_LT_AMP_DASH;
	v->a[20588] = anon_sym_GT_AMP_DASH;
	v->a[20589] = anon_sym_LT_LT_DASH;
	v->a[20590] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20591] = sym__special_character;
	v->a[20592] = anon_sym_DQUOTE;
	v->a[20593] = sym_raw_string;
	v->a[20594] = anon_sym_DOLLAR_LBRACE;
	v->a[20595] = anon_sym_BQUOTE;
	v->a[20596] = anon_sym_DOLLAR_BQUOTE;
	v->a[20597] = 6;
	v->a[20598] = actions(3);
	v->a[20599] = 1;
	small_parse_table_1030(v);
}

/* EOF small_parse_table_205.c */
