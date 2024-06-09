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
	v->a[21000] = 6;
	v->a[21001] = actions(3);
	v->a[21002] = 1;
	v->a[21003] = sym_comment;
	v->a[21004] = actions(421);
	v->a[21005] = 1;
	v->a[21006] = sym_variable_name;
	v->a[21007] = actions(413);
	v->a[21008] = 2;
	v->a[21009] = sym_file_descriptor;
	v->a[21010] = sym__bare_dollar;
	v->a[21011] = actions(419);
	v->a[21012] = 2;
	v->a[21013] = aux_sym__simple_variable_name_token1;
	v->a[21014] = aux_sym__multiline_variable_name_token1;
	v->a[21015] = actions(417);
	v->a[21016] = 9;
	v->a[21017] = anon_sym_BANG;
	v->a[21018] = anon_sym_DASH;
	v->a[21019] = anon_sym_STAR;
	small_parse_table_1051(v);
}

void	small_parse_table_1051(t_small_parse_table_array *v)
{
	v->a[21020] = anon_sym_QMARK;
	v->a[21021] = anon_sym_DOLLAR;
	v->a[21022] = anon_sym_POUND;
	v->a[21023] = anon_sym_AT;
	v->a[21024] = anon_sym_0;
	v->a[21025] = anon_sym__;
	v->a[21026] = actions(407);
	v->a[21027] = 29;
	v->a[21028] = anon_sym_LPAREN;
	v->a[21029] = anon_sym_PIPE;
	v->a[21030] = anon_sym_SEMI_SEMI;
	v->a[21031] = anon_sym_AMP_AMP;
	v->a[21032] = anon_sym_PIPE_PIPE;
	v->a[21033] = anon_sym_LT;
	v->a[21034] = anon_sym_GT;
	v->a[21035] = anon_sym_GT_GT;
	v->a[21036] = anon_sym_AMP_GT;
	v->a[21037] = anon_sym_AMP_GT_GT;
	v->a[21038] = anon_sym_LT_AMP;
	v->a[21039] = anon_sym_GT_AMP;
	small_parse_table_1052(v);
}

void	small_parse_table_1052(t_small_parse_table_array *v)
{
	v->a[21040] = anon_sym_GT_PIPE;
	v->a[21041] = anon_sym_LT_AMP_DASH;
	v->a[21042] = anon_sym_GT_AMP_DASH;
	v->a[21043] = anon_sym_LT_LT;
	v->a[21044] = anon_sym_LT_LT_DASH;
	v->a[21045] = aux_sym_heredoc_redirect_token1;
	v->a[21046] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21047] = anon_sym_AMP;
	v->a[21048] = anon_sym_DQUOTE;
	v->a[21049] = sym_raw_string;
	v->a[21050] = aux_sym_number_token1;
	v->a[21051] = aux_sym_number_token2;
	v->a[21052] = anon_sym_DOLLAR_LBRACE;
	v->a[21053] = anon_sym_DOLLAR_LPAREN;
	v->a[21054] = anon_sym_BQUOTE;
	v->a[21055] = sym_word;
	v->a[21056] = anon_sym_SEMI;
	v->a[21057] = 6;
	v->a[21058] = actions(3);
	v->a[21059] = 1;
	small_parse_table_1053(v);
}

void	small_parse_table_1053(t_small_parse_table_array *v)
{
	v->a[21060] = sym_comment;
	v->a[21061] = actions(439);
	v->a[21062] = 1;
	v->a[21063] = sym_variable_name;
	v->a[21064] = actions(437);
	v->a[21065] = 2;
	v->a[21066] = aux_sym__simple_variable_name_token1;
	v->a[21067] = aux_sym__multiline_variable_name_token1;
	v->a[21068] = actions(413);
	v->a[21069] = 3;
	v->a[21070] = sym_file_descriptor;
	v->a[21071] = sym__bare_dollar;
	v->a[21072] = ts_builtin_sym_end;
	v->a[21073] = actions(435);
	v->a[21074] = 9;
	v->a[21075] = anon_sym_BANG;
	v->a[21076] = anon_sym_DASH;
	v->a[21077] = anon_sym_STAR;
	v->a[21078] = anon_sym_QMARK;
	v->a[21079] = anon_sym_DOLLAR;
	small_parse_table_1054(v);
}

void	small_parse_table_1054(t_small_parse_table_array *v)
{
	v->a[21080] = anon_sym_POUND;
	v->a[21081] = anon_sym_AT;
	v->a[21082] = anon_sym_0;
	v->a[21083] = anon_sym__;
	v->a[21084] = actions(407);
	v->a[21085] = 28;
	v->a[21086] = anon_sym_PIPE;
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
