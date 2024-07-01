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
	v->a[21000] = anon_sym_AMP;
	v->a[21001] = anon_sym_BQUOTE;
	v->a[21002] = anon_sym_SEMI;
	v->a[21003] = 16;
	v->a[21004] = actions(3);
	v->a[21005] = 1;
	v->a[21006] = sym_comment;
	v->a[21007] = actions(17);
	v->a[21008] = 1;
	v->a[21009] = anon_sym_LPAREN;
	v->a[21010] = actions(459);
	v->a[21011] = 1;
	v->a[21012] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21013] = actions(461);
	v->a[21014] = 1;
	v->a[21015] = anon_sym_DOLLAR;
	v->a[21016] = actions(463);
	v->a[21017] = 1;
	v->a[21018] = anon_sym_DQUOTE;
	v->a[21019] = actions(465);
	small_parse_table_1051(v);
}

void	small_parse_table_1051(t_small_parse_table_array *v)
{
	v->a[21020] = 1;
	v->a[21021] = anon_sym_DOLLAR_LBRACE;
	v->a[21022] = actions(467);
	v->a[21023] = 1;
	v->a[21024] = anon_sym_DOLLAR_LPAREN;
	v->a[21025] = actions(469);
	v->a[21026] = 1;
	v->a[21027] = anon_sym_BQUOTE;
	v->a[21028] = actions(471);
	v->a[21029] = 1;
	v->a[21030] = sym_file_descriptor;
	v->a[21031] = actions(473);
	v->a[21032] = 1;
	v->a[21033] = sym__bare_dollar;
	v->a[21034] = state(215);
	v->a[21035] = 1;
	v->a[21036] = aux_sym_command_repeat2;
	v->a[21037] = state(718);
	v->a[21038] = 1;
	v->a[21039] = sym_concatenation;
	small_parse_table_1052(v);
}

void	small_parse_table_1052(t_small_parse_table_array *v)
{
	v->a[21040] = state(1235);
	v->a[21041] = 1;
	v->a[21042] = sym_subshell;
	v->a[21043] = actions(511);
	v->a[21044] = 3;
	v->a[21045] = sym_raw_string;
	v->a[21046] = sym_number;
	v->a[21047] = sym_word;
	v->a[21048] = state(493);
	v->a[21049] = 5;
	v->a[21050] = sym_arithmetic_expansion;
	v->a[21051] = sym_string;
	v->a[21052] = sym_simple_expansion;
	v->a[21053] = sym_expansion;
	v->a[21054] = sym_command_substitution;
	v->a[21055] = actions(457);
	v->a[21056] = 17;
	v->a[21057] = anon_sym_PIPE;
	v->a[21058] = anon_sym_SEMI_SEMI;
	v->a[21059] = anon_sym_AMP_AMP;
	small_parse_table_1053(v);
}

void	small_parse_table_1053(t_small_parse_table_array *v)
{
	v->a[21060] = anon_sym_PIPE_PIPE;
	v->a[21061] = anon_sym_LT;
	v->a[21062] = anon_sym_GT;
	v->a[21063] = anon_sym_GT_GT;
	v->a[21064] = anon_sym_LT_AMP;
	v->a[21065] = anon_sym_GT_AMP;
	v->a[21066] = anon_sym_GT_PIPE;
	v->a[21067] = anon_sym_LT_AMP_DASH;
	v->a[21068] = anon_sym_GT_AMP_DASH;
	v->a[21069] = anon_sym_LT_LT;
	v->a[21070] = anon_sym_LT_LT_DASH;
	v->a[21071] = aux_sym_heredoc_redirect_token1;
	v->a[21072] = anon_sym_AMP;
	v->a[21073] = anon_sym_SEMI;
	v->a[21074] = 6;
	v->a[21075] = actions(3);
	v->a[21076] = 1;
	v->a[21077] = sym_comment;
	v->a[21078] = actions(393);
	v->a[21079] = 1;
	small_parse_table_1054(v);
}

void	small_parse_table_1054(t_small_parse_table_array *v)
{
	v->a[21080] = sym_variable_name;
	v->a[21081] = actions(379);
	v->a[21082] = 2;
	v->a[21083] = sym_file_descriptor;
	v->a[21084] = sym__bare_dollar;
	v->a[21085] = actions(391);
	v->a[21086] = 2;
	v->a[21087] = aux_sym__simple_variable_name_token1;
	v->a[21088] = aux_sym__multiline_variable_name_token1;
	v->a[21089] = actions(389);
	v->a[21090] = 9;
	v->a[21091] = anon_sym_BANG;
	v->a[21092] = anon_sym_DASH;
	v->a[21093] = anon_sym_STAR;
	v->a[21094] = anon_sym_QMARK;
	v->a[21095] = anon_sym_DOLLAR;
	v->a[21096] = anon_sym_POUND;
	v->a[21097] = anon_sym_AT;
	v->a[21098] = anon_sym_0;
	v->a[21099] = anon_sym__;
	small_parse_table_1055(v);
}

/* EOF small_parse_table_210.c */
