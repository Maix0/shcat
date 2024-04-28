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
	v->a[21000] = anon_sym_GT_AMP_DASH;
	v->a[21001] = anon_sym_LT_LT_DASH;
	v->a[21002] = 8;
	v->a[21003] = actions(3);
	v->a[21004] = 1;
	v->a[21005] = sym_comment;
	v->a[21006] = actions(3115);
	v->a[21007] = 1;
	v->a[21008] = anon_sym_DQUOTE;
	v->a[21009] = actions(3119);
	v->a[21010] = 1;
	v->a[21011] = sym_variable_name;
	v->a[21012] = state(1864);
	v->a[21013] = 1;
	v->a[21014] = sym_string;
	v->a[21015] = actions(3117);
	v->a[21016] = 2;
	v->a[21017] = aux_sym__simple_variable_name_token1;
	v->a[21018] = aux_sym__multiline_variable_name_token1;
	v->a[21019] = actions(1235);
	small_parse_table_1051(v);
}

void	small_parse_table_1051(t_small_parse_table_array *v)
{
	v->a[21020] = 3;
	v->a[21021] = sym_file_descriptor;
	v->a[21022] = sym_test_operator;
	v->a[21023] = sym__brace_start;
	v->a[21024] = actions(3113);
	v->a[21025] = 9;
	v->a[21026] = anon_sym_DASH;
	v->a[21027] = anon_sym_STAR;
	v->a[21028] = anon_sym_BANG;
	v->a[21029] = anon_sym_QMARK;
	v->a[21030] = anon_sym_DOLLAR;
	v->a[21031] = anon_sym_POUND;
	v->a[21032] = anon_sym_AT2;
	v->a[21033] = anon_sym_0;
	v->a[21034] = anon_sym__;
	v->a[21035] = actions(1227);
	v->a[21036] = 36;
	v->a[21037] = anon_sym_LPAREN_LPAREN;
	v->a[21038] = anon_sym_SEMI;
	v->a[21039] = anon_sym_PIPE_PIPE;
	small_parse_table_1052(v);
}

void	small_parse_table_1052(t_small_parse_table_array *v)
{
	v->a[21040] = anon_sym_AMP_AMP;
	v->a[21041] = anon_sym_PIPE;
	v->a[21042] = anon_sym_AMP;
	v->a[21043] = anon_sym_LT;
	v->a[21044] = anon_sym_GT;
	v->a[21045] = anon_sym_LT_LT;
	v->a[21046] = anon_sym_GT_GT;
	v->a[21047] = anon_sym_SEMI_SEMI;
	v->a[21048] = anon_sym_PIPE_AMP;
	v->a[21049] = anon_sym_AMP_GT;
	v->a[21050] = anon_sym_AMP_GT_GT;
	v->a[21051] = anon_sym_LT_AMP;
	v->a[21052] = anon_sym_GT_AMP;
	v->a[21053] = anon_sym_GT_PIPE;
	v->a[21054] = anon_sym_LT_AMP_DASH;
	v->a[21055] = anon_sym_GT_AMP_DASH;
	v->a[21056] = anon_sym_LT_LT_DASH;
	v->a[21057] = aux_sym_heredoc_redirect_token1;
	v->a[21058] = anon_sym_LT_LT_LT;
	v->a[21059] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1053(v);
}

void	small_parse_table_1053(t_small_parse_table_array *v)
{
	v->a[21060] = anon_sym_DOLLAR_LBRACK;
	v->a[21061] = sym__special_character;
	v->a[21062] = sym_raw_string;
	v->a[21063] = sym_ansi_c_string;
	v->a[21064] = aux_sym_number_token1;
	v->a[21065] = aux_sym_number_token2;
	v->a[21066] = anon_sym_DOLLAR_LBRACE;
	v->a[21067] = anon_sym_DOLLAR_LPAREN;
	v->a[21068] = anon_sym_BQUOTE;
	v->a[21069] = anon_sym_DOLLAR_BQUOTE;
	v->a[21070] = anon_sym_LT_LPAREN;
	v->a[21071] = anon_sym_GT_LPAREN;
	v->a[21072] = sym_word;
	v->a[21073] = 8;
	v->a[21074] = actions(3);
	v->a[21075] = 1;
	v->a[21076] = sym_comment;
	v->a[21077] = actions(3115);
	v->a[21078] = 1;
	v->a[21079] = anon_sym_DQUOTE;
	small_parse_table_1054(v);
}

void	small_parse_table_1054(t_small_parse_table_array *v)
{
	v->a[21080] = actions(3119);
	v->a[21081] = 1;
	v->a[21082] = sym_variable_name;
	v->a[21083] = state(1864);
	v->a[21084] = 1;
	v->a[21085] = sym_string;
	v->a[21086] = actions(3117);
	v->a[21087] = 2;
	v->a[21088] = aux_sym__simple_variable_name_token1;
	v->a[21089] = aux_sym__multiline_variable_name_token1;
	v->a[21090] = actions(1241);
	v->a[21091] = 3;
	v->a[21092] = sym_file_descriptor;
	v->a[21093] = sym_test_operator;
	v->a[21094] = sym__brace_start;
	v->a[21095] = actions(3113);
	v->a[21096] = 9;
	v->a[21097] = anon_sym_DASH;
	v->a[21098] = anon_sym_STAR;
	v->a[21099] = anon_sym_BANG;
	small_parse_table_1055(v);
}

/* EOF small_parse_table_210.c */
