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
	v->a[20500] = anon_sym_PERCENT;
	v->a[20501] = actions(461);
	v->a[20502] = 11;
	v->a[20503] = anon_sym_RPAREN;
	v->a[20504] = anon_sym_PLUS_EQ;
	v->a[20505] = anon_sym_DASH_EQ;
	v->a[20506] = anon_sym_STAR_EQ;
	v->a[20507] = anon_sym_SLASH_EQ;
	v->a[20508] = anon_sym_PERCENT_EQ;
	v->a[20509] = anon_sym_LT_LT_EQ;
	v->a[20510] = anon_sym_GT_GT_EQ;
	v->a[20511] = anon_sym_AMP_EQ;
	v->a[20512] = anon_sym_CARET_EQ;
	v->a[20513] = anon_sym_PIPE_EQ;
	v->a[20514] = 6;
	v->a[20515] = actions(407);
	v->a[20516] = 1;
	v->a[20517] = sym_comment;
	v->a[20518] = actions(591);
	v->a[20519] = 2;
	small_parse_table_1026(v);
}

void	small_parse_table_1026(t_small_parse_table_array *v)
{
	v->a[20520] = anon_sym_PLUS;
	v->a[20521] = anon_sym_DASH;
	v->a[20522] = actions(597);
	v->a[20523] = 2;
	v->a[20524] = anon_sym_PLUS_PLUS2;
	v->a[20525] = anon_sym_DASH_DASH2;
	v->a[20526] = actions(593);
	v->a[20527] = 3;
	v->a[20528] = anon_sym_STAR;
	v->a[20529] = anon_sym_SLASH;
	v->a[20530] = anon_sym_PERCENT;
	v->a[20531] = actions(459);
	v->a[20532] = 8;
	v->a[20533] = anon_sym_PIPE;
	v->a[20534] = anon_sym_EQ;
	v->a[20535] = anon_sym_LT;
	v->a[20536] = anon_sym_GT;
	v->a[20537] = anon_sym_GT_GT;
	v->a[20538] = anon_sym_LT_LT;
	v->a[20539] = anon_sym_CARET;
	small_parse_table_1027(v);
}

void	small_parse_table_1027(t_small_parse_table_array *v)
{
	v->a[20540] = anon_sym_AMP;
	v->a[20541] = actions(461);
	v->a[20542] = 18;
	v->a[20543] = anon_sym_RPAREN;
	v->a[20544] = anon_sym_AMP_AMP;
	v->a[20545] = anon_sym_PIPE_PIPE;
	v->a[20546] = anon_sym_PLUS_EQ;
	v->a[20547] = anon_sym_DASH_EQ;
	v->a[20548] = anon_sym_STAR_EQ;
	v->a[20549] = anon_sym_SLASH_EQ;
	v->a[20550] = anon_sym_PERCENT_EQ;
	v->a[20551] = anon_sym_LT_LT_EQ;
	v->a[20552] = anon_sym_GT_GT_EQ;
	v->a[20553] = anon_sym_AMP_EQ;
	v->a[20554] = anon_sym_CARET_EQ;
	v->a[20555] = anon_sym_PIPE_EQ;
	v->a[20556] = anon_sym_EQ_EQ;
	v->a[20557] = anon_sym_BANG_EQ;
	v->a[20558] = anon_sym_LT_EQ;
	v->a[20559] = anon_sym_GT_EQ;
	small_parse_table_1028(v);
}

void	small_parse_table_1028(t_small_parse_table_array *v)
{
	v->a[20560] = anon_sym_QMARK;
	v->a[20561] = 13;
	v->a[20562] = actions(3);
	v->a[20563] = 1;
	v->a[20564] = sym_comment;
	v->a[20565] = actions(53);
	v->a[20566] = 1;
	v->a[20567] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20568] = actions(55);
	v->a[20569] = 1;
	v->a[20570] = anon_sym_DOLLAR;
	v->a[20571] = actions(57);
	v->a[20572] = 1;
	v->a[20573] = anon_sym_DQUOTE;
	v->a[20574] = actions(61);
	v->a[20575] = 1;
	v->a[20576] = anon_sym_DOLLAR_LBRACE;
	v->a[20577] = actions(63);
	v->a[20578] = 1;
	v->a[20579] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1029(v);
}

void	small_parse_table_1029(t_small_parse_table_array *v)
{
	v->a[20580] = actions(65);
	v->a[20581] = 1;
	v->a[20582] = anon_sym_BQUOTE;
	v->a[20583] = actions(535);
	v->a[20584] = 1;
	v->a[20585] = sym__bare_dollar;
	v->a[20586] = state(188);
	v->a[20587] = 1;
	v->a[20588] = aux_sym_command_repeat2;
	v->a[20589] = state(614);
	v->a[20590] = 1;
	v->a[20591] = sym_concatenation;
	v->a[20592] = actions(531);
	v->a[20593] = 3;
	v->a[20594] = sym_raw_string;
	v->a[20595] = sym_number;
	v->a[20596] = sym_word;
	v->a[20597] = state(344);
	v->a[20598] = 5;
	v->a[20599] = sym_arithmetic_expansion;
	small_parse_table_1030(v);
}

/* EOF small_parse_table_205.c */
