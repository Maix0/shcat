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
	v->a[21000] = sym_number;
	v->a[21001] = sym_word;
	v->a[21002] = state(334);
	v->a[21003] = 5;
	v->a[21004] = sym_arithmetic_expansion;
	v->a[21005] = sym_string;
	v->a[21006] = sym_simple_expansion;
	v->a[21007] = sym_expansion;
	v->a[21008] = sym_command_substitution;
	v->a[21009] = actions(457);
	v->a[21010] = 20;
	v->a[21011] = anon_sym_PIPE;
	v->a[21012] = anon_sym_RPAREN;
	v->a[21013] = anon_sym_SEMI_SEMI;
	v->a[21014] = anon_sym_AMP_AMP;
	v->a[21015] = anon_sym_PIPE_PIPE;
	v->a[21016] = anon_sym_LT;
	v->a[21017] = anon_sym_GT;
	v->a[21018] = anon_sym_GT_GT;
	v->a[21019] = anon_sym_AMP_GT;
	small_parse_table_1051(v);
}

void	small_parse_table_1051(t_small_parse_table_array *v)
{
	v->a[21020] = anon_sym_AMP_GT_GT;
	v->a[21021] = anon_sym_LT_AMP;
	v->a[21022] = anon_sym_GT_AMP;
	v->a[21023] = anon_sym_GT_PIPE;
	v->a[21024] = anon_sym_LT_AMP_DASH;
	v->a[21025] = anon_sym_GT_AMP_DASH;
	v->a[21026] = anon_sym_LT_LT;
	v->a[21027] = anon_sym_LT_LT_DASH;
	v->a[21028] = aux_sym_heredoc_redirect_token1;
	v->a[21029] = anon_sym_AMP;
	v->a[21030] = anon_sym_SEMI;
	v->a[21031] = 16;
	v->a[21032] = actions(3);
	v->a[21033] = 1;
	v->a[21034] = sym_comment;
	v->a[21035] = actions(17);
	v->a[21036] = 1;
	v->a[21037] = anon_sym_LPAREN;
	v->a[21038] = actions(493);
	v->a[21039] = 1;
	small_parse_table_1052(v);
}

void	small_parse_table_1052(t_small_parse_table_array *v)
{
	v->a[21040] = sym_file_descriptor;
	v->a[21041] = actions(497);
	v->a[21042] = 1;
	v->a[21043] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21044] = actions(499);
	v->a[21045] = 1;
	v->a[21046] = anon_sym_DOLLAR;
	v->a[21047] = actions(501);
	v->a[21048] = 1;
	v->a[21049] = anon_sym_DQUOTE;
	v->a[21050] = actions(503);
	v->a[21051] = 1;
	v->a[21052] = anon_sym_DOLLAR_LBRACE;
	v->a[21053] = actions(505);
	v->a[21054] = 1;
	v->a[21055] = anon_sym_DOLLAR_LPAREN;
	v->a[21056] = actions(507);
	v->a[21057] = 1;
	v->a[21058] = anon_sym_BQUOTE;
	v->a[21059] = actions(509);
	small_parse_table_1053(v);
}

void	small_parse_table_1053(t_small_parse_table_array *v)
{
	v->a[21060] = 1;
	v->a[21061] = sym__bare_dollar;
	v->a[21062] = state(200);
	v->a[21063] = 1;
	v->a[21064] = aux_sym_command_repeat2;
	v->a[21065] = state(729);
	v->a[21066] = 1;
	v->a[21067] = sym_concatenation;
	v->a[21068] = state(1333);
	v->a[21069] = 1;
	v->a[21070] = sym_subshell;
	v->a[21071] = actions(495);
	v->a[21072] = 3;
	v->a[21073] = sym_raw_string;
	v->a[21074] = sym_number;
	v->a[21075] = sym_word;
	v->a[21076] = state(334);
	v->a[21077] = 5;
	v->a[21078] = sym_arithmetic_expansion;
	v->a[21079] = sym_string;
	small_parse_table_1054(v);
}

void	small_parse_table_1054(t_small_parse_table_array *v)
{
	v->a[21080] = sym_simple_expansion;
	v->a[21081] = sym_expansion;
	v->a[21082] = sym_command_substitution;
	v->a[21083] = actions(491);
	v->a[21084] = 20;
	v->a[21085] = anon_sym_PIPE;
	v->a[21086] = anon_sym_RPAREN;
	v->a[21087] = anon_sym_SEMI_SEMI;
	v->a[21088] = anon_sym_AMP_AMP;
	v->a[21089] = anon_sym_PIPE_PIPE;
	v->a[21090] = anon_sym_LT;
	v->a[21091] = anon_sym_GT;
	v->a[21092] = anon_sym_GT_GT;
	v->a[21093] = anon_sym_AMP_GT;
	v->a[21094] = anon_sym_AMP_GT_GT;
	v->a[21095] = anon_sym_LT_AMP;
	v->a[21096] = anon_sym_GT_AMP;
	v->a[21097] = anon_sym_GT_PIPE;
	v->a[21098] = anon_sym_LT_AMP_DASH;
	v->a[21099] = anon_sym_GT_AMP_DASH;
	small_parse_table_1055(v);
}

/* EOF small_parse_table_210.c */
