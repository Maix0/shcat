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
	v->a[20500] = actions(501);
	v->a[20501] = 1;
	v->a[20502] = sym_comment;
	v->a[20503] = actions(597);
	v->a[20504] = 13;
	v->a[20505] = anon_sym_PIPE;
	v->a[20506] = anon_sym_EQ;
	v->a[20507] = anon_sym_LT;
	v->a[20508] = anon_sym_GT;
	v->a[20509] = anon_sym_GT_GT;
	v->a[20510] = anon_sym_LT_LT;
	v->a[20511] = anon_sym_CARET;
	v->a[20512] = anon_sym_AMP;
	v->a[20513] = anon_sym_PLUS;
	v->a[20514] = anon_sym_DASH;
	v->a[20515] = anon_sym_STAR;
	v->a[20516] = anon_sym_SLASH;
	v->a[20517] = anon_sym_PERCENT;
	v->a[20518] = actions(599);
	v->a[20519] = 21;
	small_parse_table_1026(v);
}

void	small_parse_table_1026(t_small_parse_table_array *v)
{
	v->a[20520] = anon_sym_AMP_AMP;
	v->a[20521] = anon_sym_PIPE_PIPE;
	v->a[20522] = anon_sym_RPAREN_RPAREN;
	v->a[20523] = anon_sym_PLUS_EQ;
	v->a[20524] = anon_sym_DASH_EQ;
	v->a[20525] = anon_sym_STAR_EQ;
	v->a[20526] = anon_sym_SLASH_EQ;
	v->a[20527] = anon_sym_PERCENT_EQ;
	v->a[20528] = anon_sym_LT_LT_EQ;
	v->a[20529] = anon_sym_GT_GT_EQ;
	v->a[20530] = anon_sym_AMP_EQ;
	v->a[20531] = anon_sym_CARET_EQ;
	v->a[20532] = anon_sym_PIPE_EQ;
	v->a[20533] = anon_sym_EQ_EQ;
	v->a[20534] = anon_sym_BANG_EQ;
	v->a[20535] = anon_sym_LT_EQ;
	v->a[20536] = anon_sym_GT_EQ;
	v->a[20537] = anon_sym_QMARK;
	v->a[20538] = anon_sym_COLON;
	v->a[20539] = anon_sym_PLUS_PLUS2;
	small_parse_table_1027(v);
}

void	small_parse_table_1027(t_small_parse_table_array *v)
{
	v->a[20540] = anon_sym_DASH_DASH2;
	v->a[20541] = 14;
	v->a[20542] = actions(3);
	v->a[20543] = 1;
	v->a[20544] = sym_comment;
	v->a[20545] = actions(405);
	v->a[20546] = 1;
	v->a[20547] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20548] = actions(407);
	v->a[20549] = 1;
	v->a[20550] = anon_sym_DOLLAR;
	v->a[20551] = actions(409);
	v->a[20552] = 1;
	v->a[20553] = anon_sym_DQUOTE;
	v->a[20554] = actions(411);
	v->a[20555] = 1;
	v->a[20556] = anon_sym_DOLLAR_LBRACE;
	v->a[20557] = actions(413);
	v->a[20558] = 1;
	v->a[20559] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1028(v);
}

void	small_parse_table_1028(t_small_parse_table_array *v)
{
	v->a[20560] = actions(415);
	v->a[20561] = 1;
	v->a[20562] = anon_sym_BQUOTE;
	v->a[20563] = actions(419);
	v->a[20564] = 1;
	v->a[20565] = sym__bare_dollar;
	v->a[20566] = actions(519);
	v->a[20567] = 1;
	v->a[20568] = sym_file_descriptor;
	v->a[20569] = state(202);
	v->a[20570] = 1;
	v->a[20571] = aux_sym_command_repeat2;
	v->a[20572] = state(674);
	v->a[20573] = 1;
	v->a[20574] = sym_concatenation;
	v->a[20575] = actions(401);
	v->a[20576] = 3;
	v->a[20577] = sym_raw_string;
	v->a[20578] = sym_number;
	v->a[20579] = sym_word;
	small_parse_table_1029(v);
}

void	small_parse_table_1029(t_small_parse_table_array *v)
{
	v->a[20580] = state(446);
	v->a[20581] = 5;
	v->a[20582] = sym_arithmetic_expansion;
	v->a[20583] = sym_string;
	v->a[20584] = sym_simple_expansion;
	v->a[20585] = sym_expansion;
	v->a[20586] = sym_command_substitution;
	v->a[20587] = actions(517);
	v->a[20588] = 16;
	v->a[20589] = anon_sym_PIPE;
	v->a[20590] = anon_sym_RPAREN;
	v->a[20591] = anon_sym_SEMI_SEMI;
	v->a[20592] = anon_sym_AMP_AMP;
	v->a[20593] = anon_sym_PIPE_PIPE;
	v->a[20594] = anon_sym_LT;
	v->a[20595] = anon_sym_GT;
	v->a[20596] = anon_sym_GT_GT;
	v->a[20597] = anon_sym_LT_AMP;
	v->a[20598] = anon_sym_GT_AMP;
	v->a[20599] = anon_sym_GT_PIPE;
	small_parse_table_1030(v);
}

/* EOF small_parse_table_205.c */
