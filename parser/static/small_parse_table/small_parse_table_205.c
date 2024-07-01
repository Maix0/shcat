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
	v->a[20500] = anon_sym_GT;
	v->a[20501] = anon_sym_GT_GT;
	v->a[20502] = anon_sym_LT_AMP;
	v->a[20503] = anon_sym_GT_AMP;
	v->a[20504] = anon_sym_GT_PIPE;
	v->a[20505] = anon_sym_LT_GT;
	v->a[20506] = anon_sym_LT_LT;
	v->a[20507] = anon_sym_LT_LT_DASH;
	v->a[20508] = aux_sym_heredoc_redirect_token1;
	v->a[20509] = anon_sym_AMP;
	v->a[20510] = anon_sym_SEMI;
	v->a[20511] = 5;
	v->a[20512] = actions(3);
	v->a[20513] = 1;
	v->a[20514] = sym_comment;
	v->a[20515] = actions(495);
	v->a[20516] = 2;
	v->a[20517] = sym_file_descriptor;
	v->a[20518] = sym_variable_name;
	v->a[20519] = state(196);
	small_parse_table_1026(v);
}

void	small_parse_table_1026(t_small_parse_table_array *v)
{
	v->a[20520] = 2;
	v->a[20521] = sym_concatenation;
	v->a[20522] = aux_sym_for_statement_repeat1;
	v->a[20523] = state(384);
	v->a[20524] = 5;
	v->a[20525] = sym_arithmetic_expansion;
	v->a[20526] = sym_string;
	v->a[20527] = sym_simple_expansion;
	v->a[20528] = sym_expansion;
	v->a[20529] = sym_command_substitution;
	v->a[20530] = actions(497);
	v->a[20531] = 26;
	v->a[20532] = anon_sym_PIPE;
	v->a[20533] = anon_sym_RPAREN;
	v->a[20534] = anon_sym_SEMI_SEMI;
	v->a[20535] = anon_sym_AMP_AMP;
	v->a[20536] = anon_sym_PIPE_PIPE;
	v->a[20537] = anon_sym_LT;
	v->a[20538] = anon_sym_GT;
	v->a[20539] = anon_sym_GT_GT;
	small_parse_table_1027(v);
}

void	small_parse_table_1027(t_small_parse_table_array *v)
{
	v->a[20540] = anon_sym_LT_AMP;
	v->a[20541] = anon_sym_GT_AMP;
	v->a[20542] = anon_sym_GT_PIPE;
	v->a[20543] = anon_sym_LT_GT;
	v->a[20544] = anon_sym_LT_LT;
	v->a[20545] = anon_sym_LT_LT_DASH;
	v->a[20546] = aux_sym_heredoc_redirect_token1;
	v->a[20547] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20548] = anon_sym_AMP;
	v->a[20549] = anon_sym_DOLLAR;
	v->a[20550] = anon_sym_DQUOTE;
	v->a[20551] = sym_raw_string;
	v->a[20552] = sym_number;
	v->a[20553] = anon_sym_DOLLAR_LBRACE;
	v->a[20554] = anon_sym_DOLLAR_LPAREN;
	v->a[20555] = anon_sym_BQUOTE;
	v->a[20556] = sym_word;
	v->a[20557] = anon_sym_SEMI;
	v->a[20558] = 14;
	v->a[20559] = actions(3);
	small_parse_table_1028(v);
}

void	small_parse_table_1028(t_small_parse_table_array *v)
{
	v->a[20560] = 1;
	v->a[20561] = sym_comment;
	v->a[20562] = actions(459);
	v->a[20563] = 1;
	v->a[20564] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20565] = actions(461);
	v->a[20566] = 1;
	v->a[20567] = anon_sym_DOLLAR;
	v->a[20568] = actions(463);
	v->a[20569] = 1;
	v->a[20570] = anon_sym_DQUOTE;
	v->a[20571] = actions(465);
	v->a[20572] = 1;
	v->a[20573] = anon_sym_DOLLAR_LBRACE;
	v->a[20574] = actions(467);
	v->a[20575] = 1;
	v->a[20576] = anon_sym_DOLLAR_LPAREN;
	v->a[20577] = actions(469);
	v->a[20578] = 1;
	v->a[20579] = anon_sym_BQUOTE;
	small_parse_table_1029(v);
}

void	small_parse_table_1029(t_small_parse_table_array *v)
{
	v->a[20580] = actions(471);
	v->a[20581] = 1;
	v->a[20582] = sym__bare_dollar;
	v->a[20583] = actions(558);
	v->a[20584] = 1;
	v->a[20585] = sym_file_descriptor;
	v->a[20586] = state(193);
	v->a[20587] = 1;
	v->a[20588] = aux_sym_command_repeat2;
	v->a[20589] = state(627);
	v->a[20590] = 1;
	v->a[20591] = sym_concatenation;
	v->a[20592] = actions(457);
	v->a[20593] = 3;
	v->a[20594] = sym_raw_string;
	v->a[20595] = sym_number;
	v->a[20596] = sym_word;
	v->a[20597] = state(373);
	v->a[20598] = 5;
	v->a[20599] = sym_arithmetic_expansion;
	small_parse_table_1030(v);
}

/* EOF small_parse_table_205.c */
