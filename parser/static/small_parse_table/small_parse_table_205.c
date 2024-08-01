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
	v->a[20500] = 1;
	v->a[20501] = sym_terminator;
	v->a[20502] = actions(762);
	v->a[20503] = 2;
	v->a[20504] = anon_sym_AMP_AMP;
	v->a[20505] = anon_sym_PIPE_PIPE;
	v->a[20506] = state(967);
	v->a[20507] = 2;
	v->a[20508] = sym_variable_assignment;
	v->a[20509] = aux_sym__variable_assignments_repeat1;
	v->a[20510] = actions(593);
	v->a[20511] = 3;
	v->a[20512] = anon_sym_SEMI_SEMI;
	v->a[20513] = aux_sym_heredoc_redirect_token1;
	v->a[20514] = anon_sym_SEMI;
	v->a[20515] = state(925);
	v->a[20516] = 3;
	v->a[20517] = sym_file_redirect;
	v->a[20518] = sym_heredoc_redirect;
	v->a[20519] = aux_sym_redirected_statement_repeat1;
	small_parse_table_1026(v);
}

void	small_parse_table_1026(t_small_parse_table_array *v)
{
	v->a[20520] = actions(576);
	v->a[20521] = 11;
	v->a[20522] = anon_sym_LT;
	v->a[20523] = anon_sym_GT;
	v->a[20524] = anon_sym_GT_GT;
	v->a[20525] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20526] = anon_sym_DOLLAR;
	v->a[20527] = anon_sym_DQUOTE;
	v->a[20528] = sym_raw_string;
	v->a[20529] = sym_number;
	v->a[20530] = anon_sym_DOLLAR_LBRACE;
	v->a[20531] = anon_sym_DOLLAR_LPAREN;
	v->a[20532] = sym_word;
	v->a[20533] = 7;
	v->a[20534] = actions(3);
	v->a[20535] = 1;
	v->a[20536] = sym_comment;
	v->a[20537] = actions(835);
	v->a[20538] = 1;
	v->a[20539] = anon_sym_LPAREN;
	small_parse_table_1027(v);
}

void	small_parse_table_1027(t_small_parse_table_array *v)
{
	v->a[20540] = actions(837);
	v->a[20541] = 1;
	v->a[20542] = aux_sym_concatenation_token1;
	v->a[20543] = actions(839);
	v->a[20544] = 1;
	v->a[20545] = sym__concat;
	v->a[20546] = actions(841);
	v->a[20547] = 1;
	v->a[20548] = sym__bare_dollar;
	v->a[20549] = state(284);
	v->a[20550] = 1;
	v->a[20551] = aux_sym_concatenation_repeat1;
	v->a[20552] = actions(833);
	v->a[20553] = 20;
	v->a[20554] = anon_sym_esac;
	v->a[20555] = anon_sym_PIPE;
	v->a[20556] = anon_sym_SEMI_SEMI;
	v->a[20557] = anon_sym_AMP_AMP;
	v->a[20558] = anon_sym_PIPE_PIPE;
	v->a[20559] = anon_sym_LT;
	small_parse_table_1028(v);
}

void	small_parse_table_1028(t_small_parse_table_array *v)
{
	v->a[20560] = anon_sym_GT;
	v->a[20561] = anon_sym_GT_GT;
	v->a[20562] = anon_sym_LT_LT;
	v->a[20563] = aux_sym_heredoc_redirect_token1;
	v->a[20564] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20565] = anon_sym_DOLLAR;
	v->a[20566] = anon_sym_DQUOTE;
	v->a[20567] = sym_raw_string;
	v->a[20568] = sym_number;
	v->a[20569] = anon_sym_DOLLAR_LBRACE;
	v->a[20570] = anon_sym_DOLLAR_LPAREN;
	v->a[20571] = anon_sym_BQUOTE;
	v->a[20572] = sym_word;
	v->a[20573] = anon_sym_SEMI;
	v->a[20574] = 13;
	v->a[20575] = actions(3);
	v->a[20576] = 1;
	v->a[20577] = sym_comment;
	v->a[20578] = actions(457);
	v->a[20579] = 1;
	small_parse_table_1029(v);
}

void	small_parse_table_1029(t_small_parse_table_array *v)
{
	v->a[20580] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20581] = actions(460);
	v->a[20582] = 1;
	v->a[20583] = anon_sym_DOLLAR;
	v->a[20584] = actions(463);
	v->a[20585] = 1;
	v->a[20586] = anon_sym_DQUOTE;
	v->a[20587] = actions(466);
	v->a[20588] = 1;
	v->a[20589] = anon_sym_DOLLAR_LBRACE;
	v->a[20590] = actions(469);
	v->a[20591] = 1;
	v->a[20592] = anon_sym_DOLLAR_LPAREN;
	v->a[20593] = actions(472);
	v->a[20594] = 1;
	v->a[20595] = anon_sym_BQUOTE;
	v->a[20596] = actions(475);
	v->a[20597] = 1;
	v->a[20598] = sym__bare_dollar;
	v->a[20599] = state(241);
	small_parse_table_1030(v);
}

/* EOF small_parse_table_205.c */
