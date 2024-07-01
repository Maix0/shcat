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
	v->a[20500] = sym_string;
	v->a[20501] = sym_simple_expansion;
	v->a[20502] = sym_expansion;
	v->a[20503] = sym_command_substitution;
	v->a[20504] = actions(457);
	v->a[20505] = 17;
	v->a[20506] = anon_sym_PIPE;
	v->a[20507] = anon_sym_SEMI_SEMI;
	v->a[20508] = anon_sym_AMP_AMP;
	v->a[20509] = anon_sym_PIPE_PIPE;
	v->a[20510] = anon_sym_LT;
	v->a[20511] = anon_sym_GT;
	v->a[20512] = anon_sym_GT_GT;
	v->a[20513] = anon_sym_LT_AMP;
	v->a[20514] = anon_sym_GT_AMP;
	v->a[20515] = anon_sym_GT_PIPE;
	v->a[20516] = anon_sym_LT_AMP_DASH;
	v->a[20517] = anon_sym_GT_AMP_DASH;
	v->a[20518] = anon_sym_LT_LT;
	v->a[20519] = anon_sym_LT_LT_DASH;
	small_parse_table_1026(v);
}

void	small_parse_table_1026(t_small_parse_table_array *v)
{
	v->a[20520] = aux_sym_heredoc_redirect_token1;
	v->a[20521] = anon_sym_AMP;
	v->a[20522] = anon_sym_SEMI;
	v->a[20523] = 16;
	v->a[20524] = actions(3);
	v->a[20525] = 1;
	v->a[20526] = sym_comment;
	v->a[20527] = actions(17);
	v->a[20528] = 1;
	v->a[20529] = anon_sym_LPAREN;
	v->a[20530] = actions(459);
	v->a[20531] = 1;
	v->a[20532] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20533] = actions(461);
	v->a[20534] = 1;
	v->a[20535] = anon_sym_DOLLAR;
	v->a[20536] = actions(463);
	v->a[20537] = 1;
	v->a[20538] = anon_sym_DQUOTE;
	v->a[20539] = actions(465);
	small_parse_table_1027(v);
}

void	small_parse_table_1027(t_small_parse_table_array *v)
{
	v->a[20540] = 1;
	v->a[20541] = anon_sym_DOLLAR_LBRACE;
	v->a[20542] = actions(467);
	v->a[20543] = 1;
	v->a[20544] = anon_sym_DOLLAR_LPAREN;
	v->a[20545] = actions(469);
	v->a[20546] = 1;
	v->a[20547] = anon_sym_BQUOTE;
	v->a[20548] = actions(473);
	v->a[20549] = 1;
	v->a[20550] = sym__bare_dollar;
	v->a[20551] = actions(493);
	v->a[20552] = 1;
	v->a[20553] = sym_file_descriptor;
	v->a[20554] = state(208);
	v->a[20555] = 1;
	v->a[20556] = aux_sym_command_repeat2;
	v->a[20557] = state(718);
	v->a[20558] = 1;
	v->a[20559] = sym_concatenation;
	small_parse_table_1028(v);
}

void	small_parse_table_1028(t_small_parse_table_array *v)
{
	v->a[20560] = state(1264);
	v->a[20561] = 1;
	v->a[20562] = sym_subshell;
	v->a[20563] = actions(455);
	v->a[20564] = 3;
	v->a[20565] = sym_raw_string;
	v->a[20566] = sym_number;
	v->a[20567] = sym_word;
	v->a[20568] = state(448);
	v->a[20569] = 5;
	v->a[20570] = sym_arithmetic_expansion;
	v->a[20571] = sym_string;
	v->a[20572] = sym_simple_expansion;
	v->a[20573] = sym_expansion;
	v->a[20574] = sym_command_substitution;
	v->a[20575] = actions(491);
	v->a[20576] = 18;
	v->a[20577] = anon_sym_PIPE;
	v->a[20578] = anon_sym_RPAREN;
	v->a[20579] = anon_sym_SEMI_SEMI;
	small_parse_table_1029(v);
}

void	small_parse_table_1029(t_small_parse_table_array *v)
{
	v->a[20580] = anon_sym_AMP_AMP;
	v->a[20581] = anon_sym_PIPE_PIPE;
	v->a[20582] = anon_sym_LT;
	v->a[20583] = anon_sym_GT;
	v->a[20584] = anon_sym_GT_GT;
	v->a[20585] = anon_sym_LT_AMP;
	v->a[20586] = anon_sym_GT_AMP;
	v->a[20587] = anon_sym_GT_PIPE;
	v->a[20588] = anon_sym_LT_AMP_DASH;
	v->a[20589] = anon_sym_GT_AMP_DASH;
	v->a[20590] = anon_sym_LT_LT;
	v->a[20591] = anon_sym_LT_LT_DASH;
	v->a[20592] = aux_sym_heredoc_redirect_token1;
	v->a[20593] = anon_sym_AMP;
	v->a[20594] = anon_sym_SEMI;
	v->a[20595] = 6;
	v->a[20596] = actions(3);
	v->a[20597] = 1;
	v->a[20598] = sym_comment;
	v->a[20599] = actions(379);
	small_parse_table_1030(v);
}

/* EOF small_parse_table_205.c */
