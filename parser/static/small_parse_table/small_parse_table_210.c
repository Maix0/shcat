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
	v->a[21000] = 1;
	v->a[21001] = anon_sym_DOLLAR;
	v->a[21002] = actions(467);
	v->a[21003] = 1;
	v->a[21004] = anon_sym_DQUOTE;
	v->a[21005] = actions(469);
	v->a[21006] = 1;
	v->a[21007] = anon_sym_DOLLAR_LBRACE;
	v->a[21008] = actions(471);
	v->a[21009] = 1;
	v->a[21010] = anon_sym_DOLLAR_LPAREN;
	v->a[21011] = actions(475);
	v->a[21012] = 1;
	v->a[21013] = sym__bare_dollar;
	v->a[21014] = actions(503);
	v->a[21015] = 1;
	v->a[21016] = sym_file_descriptor;
	v->a[21017] = state(246);
	v->a[21018] = 1;
	v->a[21019] = aux_sym_command_repeat2;
	small_parse_table_1051(v);
}

void	small_parse_table_1051(t_small_parse_table_array *v)
{
	v->a[21020] = state(662);
	v->a[21021] = 1;
	v->a[21022] = sym_concatenation;
	v->a[21023] = actions(493);
	v->a[21024] = 3;
	v->a[21025] = sym_raw_string;
	v->a[21026] = sym_number;
	v->a[21027] = sym_word;
	v->a[21028] = state(490);
	v->a[21029] = 5;
	v->a[21030] = sym_arithmetic_expansion;
	v->a[21031] = sym_string;
	v->a[21032] = sym_simple_expansion;
	v->a[21033] = sym_expansion;
	v->a[21034] = sym_command_substitution;
	v->a[21035] = actions(501);
	v->a[21036] = 17;
	v->a[21037] = anon_sym_PIPE;
	v->a[21038] = anon_sym_SEMI_SEMI;
	v->a[21039] = anon_sym_AMP_AMP;
	small_parse_table_1052(v);
}

void	small_parse_table_1052(t_small_parse_table_array *v)
{
	v->a[21040] = anon_sym_PIPE_PIPE;
	v->a[21041] = anon_sym_LT;
	v->a[21042] = anon_sym_GT;
	v->a[21043] = anon_sym_GT_GT;
	v->a[21044] = anon_sym_LT_AMP;
	v->a[21045] = anon_sym_GT_AMP;
	v->a[21046] = anon_sym_GT_PIPE;
	v->a[21047] = anon_sym_LT_GT;
	v->a[21048] = anon_sym_LT_LT;
	v->a[21049] = anon_sym_LT_LT_DASH;
	v->a[21050] = aux_sym_heredoc_redirect_token1;
	v->a[21051] = anon_sym_AMP;
	v->a[21052] = anon_sym_BQUOTE;
	v->a[21053] = anon_sym_SEMI;
	v->a[21054] = 3;
	v->a[21055] = actions(680);
	v->a[21056] = 1;
	v->a[21057] = sym_comment;
	v->a[21058] = actions(686);
	v->a[21059] = 13;
	small_parse_table_1053(v);
}

void	small_parse_table_1053(t_small_parse_table_array *v)
{
	v->a[21060] = anon_sym_PIPE;
	v->a[21061] = anon_sym_EQ;
	v->a[21062] = anon_sym_LT;
	v->a[21063] = anon_sym_GT;
	v->a[21064] = anon_sym_GT_GT;
	v->a[21065] = anon_sym_LT_LT;
	v->a[21066] = anon_sym_CARET;
	v->a[21067] = anon_sym_AMP;
	v->a[21068] = anon_sym_PLUS;
	v->a[21069] = anon_sym_DASH;
	v->a[21070] = anon_sym_STAR;
	v->a[21071] = anon_sym_SLASH;
	v->a[21072] = anon_sym_PERCENT;
	v->a[21073] = actions(688);
	v->a[21074] = 21;
	v->a[21075] = anon_sym_AMP_AMP;
	v->a[21076] = anon_sym_PIPE_PIPE;
	v->a[21077] = anon_sym_RPAREN_RPAREN;
	v->a[21078] = anon_sym_PLUS_EQ;
	v->a[21079] = anon_sym_DASH_EQ;
	small_parse_table_1054(v);
}

void	small_parse_table_1054(t_small_parse_table_array *v)
{
	v->a[21080] = anon_sym_STAR_EQ;
	v->a[21081] = anon_sym_SLASH_EQ;
	v->a[21082] = anon_sym_PERCENT_EQ;
	v->a[21083] = anon_sym_LT_LT_EQ;
	v->a[21084] = anon_sym_GT_GT_EQ;
	v->a[21085] = anon_sym_AMP_EQ;
	v->a[21086] = anon_sym_CARET_EQ;
	v->a[21087] = anon_sym_PIPE_EQ;
	v->a[21088] = anon_sym_EQ_EQ;
	v->a[21089] = anon_sym_BANG_EQ;
	v->a[21090] = anon_sym_LT_EQ;
	v->a[21091] = anon_sym_GT_EQ;
	v->a[21092] = anon_sym_QMARK;
	v->a[21093] = anon_sym_COLON;
	v->a[21094] = anon_sym_PLUS_PLUS2;
	v->a[21095] = anon_sym_DASH_DASH2;
	v->a[21096] = 12;
	v->a[21097] = actions(3);
	v->a[21098] = 1;
	v->a[21099] = sym_comment;
	small_parse_table_1055(v);
}

/* EOF small_parse_table_210.c */
