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
	v->a[21001] = anon_sym_DOLLAR_LBRACE;
	v->a[21002] = actions(63);
	v->a[21003] = 1;
	v->a[21004] = anon_sym_DOLLAR_LPAREN;
	v->a[21005] = actions(65);
	v->a[21006] = 1;
	v->a[21007] = anon_sym_BQUOTE;
	v->a[21008] = actions(419);
	v->a[21009] = 1;
	v->a[21010] = sym__bare_dollar;
	v->a[21011] = state(241);
	v->a[21012] = 1;
	v->a[21013] = aux_sym_command_repeat2;
	v->a[21014] = state(570);
	v->a[21015] = 1;
	v->a[21016] = sym_concatenation;
	v->a[21017] = actions(871);
	v->a[21018] = 3;
	v->a[21019] = sym_raw_string;
	small_parse_table_1051(v);
}

void	small_parse_table_1051(t_small_parse_table_array *v)
{
	v->a[21020] = sym_number;
	v->a[21021] = sym_word;
	v->a[21022] = state(574);
	v->a[21023] = 5;
	v->a[21024] = sym_arithmetic_expansion;
	v->a[21025] = sym_string;
	v->a[21026] = sym_simple_expansion;
	v->a[21027] = sym_expansion;
	v->a[21028] = sym_command_substitution;
	v->a[21029] = actions(403);
	v->a[21030] = 8;
	v->a[21031] = anon_sym_PIPE;
	v->a[21032] = anon_sym_AMP_AMP;
	v->a[21033] = anon_sym_PIPE_PIPE;
	v->a[21034] = anon_sym_LT;
	v->a[21035] = anon_sym_GT;
	v->a[21036] = anon_sym_GT_GT;
	v->a[21037] = anon_sym_LT_LT;
	v->a[21038] = aux_sym_heredoc_redirect_token1;
	v->a[21039] = 13;
	small_parse_table_1052(v);
}

void	small_parse_table_1052(t_small_parse_table_array *v)
{
	v->a[21040] = actions(3);
	v->a[21041] = 1;
	v->a[21042] = sym_comment;
	v->a[21043] = actions(53);
	v->a[21044] = 1;
	v->a[21045] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21046] = actions(55);
	v->a[21047] = 1;
	v->a[21048] = anon_sym_DOLLAR;
	v->a[21049] = actions(57);
	v->a[21050] = 1;
	v->a[21051] = anon_sym_DQUOTE;
	v->a[21052] = actions(61);
	v->a[21053] = 1;
	v->a[21054] = anon_sym_DOLLAR_LBRACE;
	v->a[21055] = actions(63);
	v->a[21056] = 1;
	v->a[21057] = anon_sym_DOLLAR_LPAREN;
	v->a[21058] = actions(65);
	v->a[21059] = 1;
	small_parse_table_1053(v);
}

void	small_parse_table_1053(t_small_parse_table_array *v)
{
	v->a[21060] = anon_sym_BQUOTE;
	v->a[21061] = actions(419);
	v->a[21062] = 1;
	v->a[21063] = sym__bare_dollar;
	v->a[21064] = state(255);
	v->a[21065] = 1;
	v->a[21066] = aux_sym_command_repeat2;
	v->a[21067] = state(570);
	v->a[21068] = 1;
	v->a[21069] = sym_concatenation;
	v->a[21070] = actions(871);
	v->a[21071] = 3;
	v->a[21072] = sym_raw_string;
	v->a[21073] = sym_number;
	v->a[21074] = sym_word;
	v->a[21075] = state(574);
	v->a[21076] = 5;
	v->a[21077] = sym_arithmetic_expansion;
	v->a[21078] = sym_string;
	v->a[21079] = sym_simple_expansion;
	small_parse_table_1054(v);
}

void	small_parse_table_1054(t_small_parse_table_array *v)
{
	v->a[21080] = sym_expansion;
	v->a[21081] = sym_command_substitution;
	v->a[21082] = actions(417);
	v->a[21083] = 8;
	v->a[21084] = anon_sym_PIPE;
	v->a[21085] = anon_sym_AMP_AMP;
	v->a[21086] = anon_sym_PIPE_PIPE;
	v->a[21087] = anon_sym_LT;
	v->a[21088] = anon_sym_GT;
	v->a[21089] = anon_sym_GT_GT;
	v->a[21090] = anon_sym_LT_LT;
	v->a[21091] = aux_sym_heredoc_redirect_token1;
	v->a[21092] = 13;
	v->a[21093] = actions(3);
	v->a[21094] = 1;
	v->a[21095] = sym_comment;
	v->a[21096] = actions(53);
	v->a[21097] = 1;
	v->a[21098] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21099] = actions(55);
	small_parse_table_1055(v);
}

/* EOF small_parse_table_210.c */
