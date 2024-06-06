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
	v->a[21001] = aux_sym_concatenation_token1;
	v->a[21002] = actions(2973);
	v->a[21003] = 1;
	v->a[21004] = sym__concat;
	v->a[21005] = state(545);
	v->a[21006] = 1;
	v->a[21007] = aux_sym_concatenation_repeat1;
	v->a[21008] = actions(2664);
	v->a[21009] = 5;
	v->a[21010] = sym_file_descriptor;
	v->a[21011] = sym_variable_name;
	v->a[21012] = sym_test_operator;
	v->a[21013] = sym__brace_start;
	v->a[21014] = aux_sym_heredoc_redirect_token1;
	v->a[21015] = actions(2662);
	v->a[21016] = 34;
	v->a[21017] = anon_sym_PIPE;
	v->a[21018] = anon_sym_SEMI_SEMI;
	v->a[21019] = anon_sym_SEMI_AMP;
	small_parse_table_1051(v);
}

void	small_parse_table_1051(t_small_parse_table_array *v)
{
	v->a[21020] = anon_sym_SEMI_SEMI_AMP;
	v->a[21021] = anon_sym_PIPE_AMP;
	v->a[21022] = anon_sym_AMP_AMP;
	v->a[21023] = anon_sym_PIPE_PIPE;
	v->a[21024] = anon_sym_LT;
	v->a[21025] = anon_sym_GT;
	v->a[21026] = anon_sym_GT_GT;
	v->a[21027] = anon_sym_AMP_GT;
	v->a[21028] = anon_sym_AMP_GT_GT;
	v->a[21029] = anon_sym_LT_AMP;
	v->a[21030] = anon_sym_GT_AMP;
	v->a[21031] = anon_sym_GT_PIPE;
	v->a[21032] = anon_sym_LT_AMP_DASH;
	v->a[21033] = anon_sym_GT_AMP_DASH;
	v->a[21034] = anon_sym_LT_LT;
	v->a[21035] = anon_sym_LT_LT_DASH;
	v->a[21036] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21037] = anon_sym_AMP;
	v->a[21038] = anon_sym_DOLLAR;
	v->a[21039] = sym__special_character;
	small_parse_table_1052(v);
}

void	small_parse_table_1052(t_small_parse_table_array *v)
{
	v->a[21040] = anon_sym_DQUOTE;
	v->a[21041] = sym_raw_string;
	v->a[21042] = aux_sym_number_token1;
	v->a[21043] = aux_sym_number_token2;
	v->a[21044] = anon_sym_DOLLAR_LBRACE;
	v->a[21045] = anon_sym_DOLLAR_LPAREN;
	v->a[21046] = anon_sym_BQUOTE;
	v->a[21047] = anon_sym_DOLLAR_BQUOTE;
	v->a[21048] = aux_sym__simple_variable_name_token1;
	v->a[21049] = sym_word;
	v->a[21050] = anon_sym_SEMI;
	v->a[21051] = 6;
	v->a[21052] = actions(3);
	v->a[21053] = 1;
	v->a[21054] = sym_comment;
	v->a[21055] = actions(2971);
	v->a[21056] = 1;
	v->a[21057] = aux_sym_concatenation_token1;
	v->a[21058] = actions(2975);
	v->a[21059] = 1;
	small_parse_table_1053(v);
}

void	small_parse_table_1053(t_small_parse_table_array *v)
{
	v->a[21060] = sym__concat;
	v->a[21061] = state(551);
	v->a[21062] = 1;
	v->a[21063] = aux_sym_concatenation_repeat1;
	v->a[21064] = actions(2690);
	v->a[21065] = 5;
	v->a[21066] = sym_file_descriptor;
	v->a[21067] = sym_variable_name;
	v->a[21068] = sym_test_operator;
	v->a[21069] = sym__brace_start;
	v->a[21070] = aux_sym_heredoc_redirect_token1;
	v->a[21071] = actions(2688);
	v->a[21072] = 34;
	v->a[21073] = anon_sym_PIPE;
	v->a[21074] = anon_sym_SEMI_SEMI;
	v->a[21075] = anon_sym_SEMI_AMP;
	v->a[21076] = anon_sym_SEMI_SEMI_AMP;
	v->a[21077] = anon_sym_PIPE_AMP;
	v->a[21078] = anon_sym_AMP_AMP;
	v->a[21079] = anon_sym_PIPE_PIPE;
	small_parse_table_1054(v);
}

void	small_parse_table_1054(t_small_parse_table_array *v)
{
	v->a[21080] = anon_sym_LT;
	v->a[21081] = anon_sym_GT;
	v->a[21082] = anon_sym_GT_GT;
	v->a[21083] = anon_sym_AMP_GT;
	v->a[21084] = anon_sym_AMP_GT_GT;
	v->a[21085] = anon_sym_LT_AMP;
	v->a[21086] = anon_sym_GT_AMP;
	v->a[21087] = anon_sym_GT_PIPE;
	v->a[21088] = anon_sym_LT_AMP_DASH;
	v->a[21089] = anon_sym_GT_AMP_DASH;
	v->a[21090] = anon_sym_LT_LT;
	v->a[21091] = anon_sym_LT_LT_DASH;
	v->a[21092] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21093] = anon_sym_AMP;
	v->a[21094] = anon_sym_DOLLAR;
	v->a[21095] = sym__special_character;
	v->a[21096] = anon_sym_DQUOTE;
	v->a[21097] = sym_raw_string;
	v->a[21098] = aux_sym_number_token1;
	v->a[21099] = aux_sym_number_token2;
	small_parse_table_1055(v);
}

/* EOF small_parse_table_210.c */
