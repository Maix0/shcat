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
	v->a[20500] = sym_variable_name;
	v->a[20501] = state(195);
	v->a[20502] = 2;
	v->a[20503] = sym_concatenation;
	v->a[20504] = aux_sym_for_statement_repeat1;
	v->a[20505] = state(435);
	v->a[20506] = 5;
	v->a[20507] = sym_arithmetic_expansion;
	v->a[20508] = sym_string;
	v->a[20509] = sym_simple_expansion;
	v->a[20510] = sym_expansion;
	v->a[20511] = sym_command_substitution;
	v->a[20512] = actions(513);
	v->a[20513] = 26;
	v->a[20514] = anon_sym_PIPE;
	v->a[20515] = anon_sym_RPAREN;
	v->a[20516] = anon_sym_SEMI_SEMI;
	v->a[20517] = anon_sym_AMP_AMP;
	v->a[20518] = anon_sym_PIPE_PIPE;
	v->a[20519] = anon_sym_LT;
	small_parse_table_1026(v);
}

void	small_parse_table_1026(t_small_parse_table_array *v)
{
	v->a[20520] = anon_sym_GT;
	v->a[20521] = anon_sym_GT_GT;
	v->a[20522] = anon_sym_LT_AMP;
	v->a[20523] = anon_sym_GT_AMP;
	v->a[20524] = anon_sym_GT_PIPE;
	v->a[20525] = anon_sym_LT_GT;
	v->a[20526] = anon_sym_LT_LT;
	v->a[20527] = anon_sym_LT_LT_DASH;
	v->a[20528] = aux_sym_heredoc_redirect_token1;
	v->a[20529] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20530] = anon_sym_AMP;
	v->a[20531] = anon_sym_DOLLAR;
	v->a[20532] = anon_sym_DQUOTE;
	v->a[20533] = sym_raw_string;
	v->a[20534] = sym_number;
	v->a[20535] = anon_sym_DOLLAR_LBRACE;
	v->a[20536] = anon_sym_DOLLAR_LPAREN;
	v->a[20537] = anon_sym_BQUOTE;
	v->a[20538] = sym_word;
	v->a[20539] = anon_sym_SEMI;
	small_parse_table_1027(v);
}

void	small_parse_table_1027(t_small_parse_table_array *v)
{
	v->a[20540] = 14;
	v->a[20541] = actions(3);
	v->a[20542] = 1;
	v->a[20543] = sym_comment;
	v->a[20544] = actions(463);
	v->a[20545] = 1;
	v->a[20546] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20547] = actions(465);
	v->a[20548] = 1;
	v->a[20549] = anon_sym_DOLLAR;
	v->a[20550] = actions(467);
	v->a[20551] = 1;
	v->a[20552] = anon_sym_DQUOTE;
	v->a[20553] = actions(469);
	v->a[20554] = 1;
	v->a[20555] = anon_sym_DOLLAR_LBRACE;
	v->a[20556] = actions(471);
	v->a[20557] = 1;
	v->a[20558] = anon_sym_DOLLAR_LPAREN;
	v->a[20559] = actions(473);
	small_parse_table_1028(v);
}

void	small_parse_table_1028(t_small_parse_table_array *v)
{
	v->a[20560] = 1;
	v->a[20561] = anon_sym_BQUOTE;
	v->a[20562] = actions(475);
	v->a[20563] = 1;
	v->a[20564] = sym__bare_dollar;
	v->a[20565] = actions(507);
	v->a[20566] = 1;
	v->a[20567] = sym_file_descriptor;
	v->a[20568] = state(192);
	v->a[20569] = 1;
	v->a[20570] = aux_sym_command_repeat2;
	v->a[20571] = state(662);
	v->a[20572] = 1;
	v->a[20573] = sym_concatenation;
	v->a[20574] = actions(461);
	v->a[20575] = 3;
	v->a[20576] = sym_raw_string;
	v->a[20577] = sym_number;
	v->a[20578] = sym_word;
	v->a[20579] = state(430);
	small_parse_table_1029(v);
}

void	small_parse_table_1029(t_small_parse_table_array *v)
{
	v->a[20580] = 5;
	v->a[20581] = sym_arithmetic_expansion;
	v->a[20582] = sym_string;
	v->a[20583] = sym_simple_expansion;
	v->a[20584] = sym_expansion;
	v->a[20585] = sym_command_substitution;
	v->a[20586] = actions(505);
	v->a[20587] = 17;
	v->a[20588] = anon_sym_PIPE;
	v->a[20589] = anon_sym_RPAREN;
	v->a[20590] = anon_sym_SEMI_SEMI;
	v->a[20591] = anon_sym_AMP_AMP;
	v->a[20592] = anon_sym_PIPE_PIPE;
	v->a[20593] = anon_sym_LT;
	v->a[20594] = anon_sym_GT;
	v->a[20595] = anon_sym_GT_GT;
	v->a[20596] = anon_sym_LT_AMP;
	v->a[20597] = anon_sym_GT_AMP;
	v->a[20598] = anon_sym_GT_PIPE;
	v->a[20599] = anon_sym_LT_GT;
	small_parse_table_1030(v);
}

/* EOF small_parse_table_205.c */
