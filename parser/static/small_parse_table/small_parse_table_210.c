/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_210.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1050(t_small_parse_table_array *v)
{
	v->a[21000] = anon_sym_LT_LT;
	v->a[21001] = actions(672);
	v->a[21002] = 2;
	v->a[21003] = anon_sym_PLUS;
	v->a[21004] = anon_sym_DASH;
	v->a[21005] = actions(674);
	v->a[21006] = 3;
	v->a[21007] = anon_sym_STAR;
	v->a[21008] = anon_sym_SLASH;
	v->a[21009] = anon_sym_PERCENT;
	v->a[21010] = actions(688);
	v->a[21011] = 6;
	v->a[21012] = anon_sym_PIPE;
	v->a[21013] = anon_sym_EQ;
	v->a[21014] = anon_sym_LT;
	v->a[21015] = anon_sym_GT;
	v->a[21016] = anon_sym_CARET;
	v->a[21017] = anon_sym_AMP;
	v->a[21018] = actions(690);
	v->a[21019] = 19;
	small_parse_table_1051(v);
}

void	small_parse_table_1051(t_small_parse_table_array *v)
{
	v->a[21020] = anon_sym_AMP_AMP;
	v->a[21021] = anon_sym_PIPE_PIPE;
	v->a[21022] = anon_sym_RPAREN_RPAREN;
	v->a[21023] = anon_sym_PLUS_EQ;
	v->a[21024] = anon_sym_DASH_EQ;
	v->a[21025] = anon_sym_STAR_EQ;
	v->a[21026] = anon_sym_SLASH_EQ;
	v->a[21027] = anon_sym_PERCENT_EQ;
	v->a[21028] = anon_sym_LT_LT_EQ;
	v->a[21029] = anon_sym_GT_GT_EQ;
	v->a[21030] = anon_sym_AMP_EQ;
	v->a[21031] = anon_sym_CARET_EQ;
	v->a[21032] = anon_sym_PIPE_EQ;
	v->a[21033] = anon_sym_EQ_EQ;
	v->a[21034] = anon_sym_BANG_EQ;
	v->a[21035] = anon_sym_LT_EQ;
	v->a[21036] = anon_sym_GT_EQ;
	v->a[21037] = anon_sym_QMARK;
	v->a[21038] = anon_sym_COLON;
	v->a[21039] = 14;
	small_parse_table_1052(v);
}

void	small_parse_table_1052(t_small_parse_table_array *v)
{
	v->a[21040] = actions(3);
	v->a[21041] = 1;
	v->a[21042] = sym_comment;
	v->a[21043] = actions(405);
	v->a[21044] = 1;
	v->a[21045] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21046] = actions(407);
	v->a[21047] = 1;
	v->a[21048] = anon_sym_DOLLAR;
	v->a[21049] = actions(409);
	v->a[21050] = 1;
	v->a[21051] = anon_sym_DQUOTE;
	v->a[21052] = actions(411);
	v->a[21053] = 1;
	v->a[21054] = anon_sym_DOLLAR_LBRACE;
	v->a[21055] = actions(413);
	v->a[21056] = 1;
	v->a[21057] = anon_sym_DOLLAR_LPAREN;
	v->a[21058] = actions(415);
	v->a[21059] = 1;
	small_parse_table_1053(v);
}

void	small_parse_table_1053(t_small_parse_table_array *v)
{
	v->a[21060] = anon_sym_BQUOTE;
	v->a[21061] = actions(419);
	v->a[21062] = 1;
	v->a[21063] = sym__bare_dollar;
	v->a[21064] = actions(505);
	v->a[21065] = 1;
	v->a[21066] = sym_file_descriptor;
	v->a[21067] = state(202);
	v->a[21068] = 1;
	v->a[21069] = aux_sym_command_repeat2;
	v->a[21070] = state(674);
	v->a[21071] = 1;
	v->a[21072] = sym_concatenation;
	v->a[21073] = actions(401);
	v->a[21074] = 3;
	v->a[21075] = sym_raw_string;
	v->a[21076] = sym_number;
	v->a[21077] = sym_word;
	v->a[21078] = state(446);
	v->a[21079] = 5;
	small_parse_table_1054(v);
}

void	small_parse_table_1054(t_small_parse_table_array *v)
{
	v->a[21080] = sym_arithmetic_expansion;
	v->a[21081] = sym_string;
	v->a[21082] = sym_simple_expansion;
	v->a[21083] = sym_expansion;
	v->a[21084] = sym_command_substitution;
	v->a[21085] = actions(503);
	v->a[21086] = 16;
	v->a[21087] = anon_sym_PIPE;
	v->a[21088] = anon_sym_RPAREN;
	v->a[21089] = anon_sym_SEMI_SEMI;
	v->a[21090] = anon_sym_AMP_AMP;
	v->a[21091] = anon_sym_PIPE_PIPE;
	v->a[21092] = anon_sym_LT;
	v->a[21093] = anon_sym_GT;
	v->a[21094] = anon_sym_GT_GT;
	v->a[21095] = anon_sym_LT_AMP;
	v->a[21096] = anon_sym_GT_AMP;
	v->a[21097] = anon_sym_GT_PIPE;
	v->a[21098] = anon_sym_LT_GT;
	v->a[21099] = anon_sym_LT_LT;
	small_parse_table_1055(v);
}

/* EOF small_parse_table_210.c */
