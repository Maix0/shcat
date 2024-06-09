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
	v->a[20500] = actions(81);
	v->a[20501] = 1;
	v->a[20502] = sym_file_descriptor;
	v->a[20503] = actions(405);
	v->a[20504] = 1;
	v->a[20505] = sym_variable_name;
	v->a[20506] = state(185);
	v->a[20507] = 1;
	v->a[20508] = sym_command_name;
	v->a[20509] = state(582);
	v->a[20510] = 1;
	v->a[20511] = sym_concatenation;
	v->a[20512] = state(614);
	v->a[20513] = 1;
	v->a[20514] = aux_sym_command_repeat1;
	v->a[20515] = state(769);
	v->a[20516] = 1;
	v->a[20517] = sym_file_redirect;
	v->a[20518] = state(1008);
	v->a[20519] = 1;
	small_parse_table_1026(v);
}

void	small_parse_table_1026(t_small_parse_table_array *v)
{
	v->a[20520] = sym_variable_assignment;
	v->a[20521] = state(1163);
	v->a[20522] = 1;
	v->a[20523] = aux_sym_redirected_statement_repeat2;
	v->a[20524] = actions(11);
	v->a[20525] = 2;
	v->a[20526] = anon_sym_while;
	v->a[20527] = anon_sym_until;
	v->a[20528] = actions(61);
	v->a[20529] = 2;
	v->a[20530] = anon_sym_LT_AMP_DASH;
	v->a[20531] = anon_sym_GT_AMP_DASH;
	v->a[20532] = actions(69);
	v->a[20533] = 2;
	v->a[20534] = sym_raw_string;
	v->a[20535] = sym_word;
	v->a[20536] = state(397);
	v->a[20537] = 6;
	v->a[20538] = sym_arithmetic_expansion;
	v->a[20539] = sym_string;
	small_parse_table_1027(v);
}

void	small_parse_table_1027(t_small_parse_table_array *v)
{
	v->a[20540] = sym_number;
	v->a[20541] = sym_simple_expansion;
	v->a[20542] = sym_expansion;
	v->a[20543] = sym_command_substitution;
	v->a[20544] = state(1141);
	v->a[20545] = 7;
	v->a[20546] = sym_for_statement;
	v->a[20547] = sym_while_statement;
	v->a[20548] = sym_if_statement;
	v->a[20549] = sym_compound_statement;
	v->a[20550] = sym_subshell;
	v->a[20551] = sym_command;
	v->a[20552] = sym_variable_assignments;
	v->a[20553] = actions(59);
	v->a[20554] = 8;
	v->a[20555] = anon_sym_LT;
	v->a[20556] = anon_sym_GT;
	v->a[20557] = anon_sym_GT_GT;
	v->a[20558] = anon_sym_AMP_GT;
	v->a[20559] = anon_sym_AMP_GT_GT;
	small_parse_table_1028(v);
}

void	small_parse_table_1028(t_small_parse_table_array *v)
{
	v->a[20560] = anon_sym_LT_AMP;
	v->a[20561] = anon_sym_GT_AMP;
	v->a[20562] = anon_sym_GT_PIPE;
	v->a[20563] = 27;
	v->a[20564] = actions(3);
	v->a[20565] = 1;
	v->a[20566] = sym_comment;
	v->a[20567] = actions(9);
	v->a[20568] = 1;
	v->a[20569] = anon_sym_for;
	v->a[20570] = actions(13);
	v->a[20571] = 1;
	v->a[20572] = anon_sym_if;
	v->a[20573] = actions(17);
	v->a[20574] = 1;
	v->a[20575] = anon_sym_LPAREN;
	v->a[20576] = actions(19);
	v->a[20577] = 1;
	v->a[20578] = anon_sym_LBRACE;
	v->a[20579] = actions(27);
	small_parse_table_1029(v);
}

void	small_parse_table_1029(t_small_parse_table_array *v)
{
	v->a[20580] = 1;
	v->a[20581] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20582] = actions(29);
	v->a[20583] = 1;
	v->a[20584] = anon_sym_DOLLAR;
	v->a[20585] = actions(31);
	v->a[20586] = 1;
	v->a[20587] = anon_sym_DQUOTE;
	v->a[20588] = actions(35);
	v->a[20589] = 1;
	v->a[20590] = aux_sym_number_token1;
	v->a[20591] = actions(37);
	v->a[20592] = 1;
	v->a[20593] = aux_sym_number_token2;
	v->a[20594] = actions(39);
	v->a[20595] = 1;
	v->a[20596] = anon_sym_DOLLAR_LBRACE;
	v->a[20597] = actions(41);
	v->a[20598] = 1;
	v->a[20599] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1030(v);
}

/* EOF small_parse_table_205.c */
