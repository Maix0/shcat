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
	v->a[21000] = anon_sym_AMP_GT_GT;
	v->a[21001] = anon_sym_LT_AMP;
	v->a[21002] = anon_sym_GT_AMP;
	v->a[21003] = anon_sym_GT_PIPE;
	v->a[21004] = anon_sym_LT_AMP_DASH;
	v->a[21005] = anon_sym_GT_AMP_DASH;
	v->a[21006] = anon_sym_LT_LT;
	v->a[21007] = anon_sym_LT_LT_DASH;
	v->a[21008] = aux_sym_heredoc_redirect_token1;
	v->a[21009] = anon_sym_AMP;
	v->a[21010] = anon_sym_SEMI;
	v->a[21011] = 16;
	v->a[21012] = actions(3);
	v->a[21013] = 1;
	v->a[21014] = sym_comment;
	v->a[21015] = actions(97);
	v->a[21016] = 1;
	v->a[21017] = anon_sym_LPAREN;
	v->a[21018] = actions(491);
	v->a[21019] = 1;
	small_parse_table_1051(v);
}

void	small_parse_table_1051(t_small_parse_table_array *v)
{
	v->a[21020] = sym_file_descriptor;
	v->a[21021] = actions(497);
	v->a[21022] = 1;
	v->a[21023] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21024] = actions(499);
	v->a[21025] = 1;
	v->a[21026] = anon_sym_DOLLAR;
	v->a[21027] = actions(501);
	v->a[21028] = 1;
	v->a[21029] = anon_sym_DQUOTE;
	v->a[21030] = actions(503);
	v->a[21031] = 1;
	v->a[21032] = anon_sym_DOLLAR_LBRACE;
	v->a[21033] = actions(505);
	v->a[21034] = 1;
	v->a[21035] = anon_sym_DOLLAR_LPAREN;
	v->a[21036] = actions(507);
	v->a[21037] = 1;
	v->a[21038] = anon_sym_BQUOTE;
	v->a[21039] = actions(509);
	small_parse_table_1052(v);
}

void	small_parse_table_1052(t_small_parse_table_array *v)
{
	v->a[21040] = 1;
	v->a[21041] = sym__bare_dollar;
	v->a[21042] = state(200);
	v->a[21043] = 1;
	v->a[21044] = aux_sym_command_repeat2;
	v->a[21045] = state(684);
	v->a[21046] = 1;
	v->a[21047] = sym_concatenation;
	v->a[21048] = state(1330);
	v->a[21049] = 1;
	v->a[21050] = sym_subshell;
	v->a[21051] = actions(495);
	v->a[21052] = 3;
	v->a[21053] = sym_raw_string;
	v->a[21054] = sym_number;
	v->a[21055] = sym_word;
	v->a[21056] = state(385);
	v->a[21057] = 5;
	v->a[21058] = sym_arithmetic_expansion;
	v->a[21059] = sym_string;
	small_parse_table_1053(v);
}

void	small_parse_table_1053(t_small_parse_table_array *v)
{
	v->a[21060] = sym_simple_expansion;
	v->a[21061] = sym_expansion;
	v->a[21062] = sym_command_substitution;
	v->a[21063] = actions(493);
	v->a[21064] = 20;
	v->a[21065] = anon_sym_esac;
	v->a[21066] = anon_sym_PIPE;
	v->a[21067] = anon_sym_SEMI_SEMI;
	v->a[21068] = anon_sym_AMP_AMP;
	v->a[21069] = anon_sym_PIPE_PIPE;
	v->a[21070] = anon_sym_LT;
	v->a[21071] = anon_sym_GT;
	v->a[21072] = anon_sym_GT_GT;
	v->a[21073] = anon_sym_AMP_GT;
	v->a[21074] = anon_sym_AMP_GT_GT;
	v->a[21075] = anon_sym_LT_AMP;
	v->a[21076] = anon_sym_GT_AMP;
	v->a[21077] = anon_sym_GT_PIPE;
	v->a[21078] = anon_sym_LT_AMP_DASH;
	v->a[21079] = anon_sym_GT_AMP_DASH;
	small_parse_table_1054(v);
}

void	small_parse_table_1054(t_small_parse_table_array *v)
{
	v->a[21080] = anon_sym_LT_LT;
	v->a[21081] = anon_sym_LT_LT_DASH;
	v->a[21082] = aux_sym_heredoc_redirect_token1;
	v->a[21083] = anon_sym_AMP;
	v->a[21084] = anon_sym_SEMI;
	v->a[21085] = 16;
	v->a[21086] = actions(3);
	v->a[21087] = 1;
	v->a[21088] = sym_comment;
	v->a[21089] = actions(17);
	v->a[21090] = 1;
	v->a[21091] = anon_sym_LPAREN;
	v->a[21092] = actions(477);
	v->a[21093] = 1;
	v->a[21094] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21095] = actions(479);
	v->a[21096] = 1;
	v->a[21097] = anon_sym_DOLLAR;
	v->a[21098] = actions(481);
	v->a[21099] = 1;
	small_parse_table_1055(v);
}

/* EOF small_parse_table_210.c */
