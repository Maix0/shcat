/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_650.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3250(t_small_parse_table_array *v)
{
	v->a[65000] = anon_sym_BQUOTE;
	v->a[65001] = anon_sym_DOLLAR_BQUOTE;
	v->a[65002] = anon_sym_LT_LPAREN;
	v->a[65003] = anon_sym_GT_LPAREN;
	v->a[65004] = aux_sym__simple_variable_name_token1;
	v->a[65005] = sym_word;
	v->a[65006] = 3;
	v->a[65007] = actions(3);
	v->a[65008] = 1;
	v->a[65009] = sym_comment;
	v->a[65010] = actions(1302);
	v->a[65011] = 6;
	v->a[65012] = sym_file_descriptor;
	v->a[65013] = sym__concat;
	v->a[65014] = sym_variable_name;
	v->a[65015] = sym_test_operator;
	v->a[65016] = sym__brace_start;
	v->a[65017] = aux_sym_heredoc_redirect_token1;
	v->a[65018] = actions(1300);
	v->a[65019] = 40;
	small_parse_table_3251(v);
}

void	small_parse_table_3251(t_small_parse_table_array *v)
{
	v->a[65020] = anon_sym_LPAREN_LPAREN;
	v->a[65021] = anon_sym_SEMI;
	v->a[65022] = anon_sym_PIPE_PIPE;
	v->a[65023] = anon_sym_AMP_AMP;
	v->a[65024] = anon_sym_PIPE;
	v->a[65025] = anon_sym_AMP;
	v->a[65026] = anon_sym_LT;
	v->a[65027] = anon_sym_GT;
	v->a[65028] = anon_sym_LT_LT;
	v->a[65029] = anon_sym_GT_GT;
	v->a[65030] = anon_sym_SEMI_SEMI;
	v->a[65031] = anon_sym_SEMI_AMP;
	v->a[65032] = anon_sym_SEMI_SEMI_AMP;
	v->a[65033] = anon_sym_PIPE_AMP;
	v->a[65034] = anon_sym_AMP_GT;
	v->a[65035] = anon_sym_AMP_GT_GT;
	v->a[65036] = anon_sym_LT_AMP;
	v->a[65037] = anon_sym_GT_AMP;
	v->a[65038] = anon_sym_GT_PIPE;
	v->a[65039] = anon_sym_LT_AMP_DASH;
	small_parse_table_3252(v);
}

void	small_parse_table_3252(t_small_parse_table_array *v)
{
	v->a[65040] = anon_sym_GT_AMP_DASH;
	v->a[65041] = anon_sym_LT_LT_DASH;
	v->a[65042] = anon_sym_LT_LT_LT;
	v->a[65043] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65044] = anon_sym_DOLLAR_LBRACK;
	v->a[65045] = aux_sym_concatenation_token1;
	v->a[65046] = anon_sym_DOLLAR;
	v->a[65047] = sym__special_character;
	v->a[65048] = anon_sym_DQUOTE;
	v->a[65049] = sym_raw_string;
	v->a[65050] = sym_ansi_c_string;
	v->a[65051] = aux_sym_number_token1;
	v->a[65052] = aux_sym_number_token2;
	v->a[65053] = anon_sym_DOLLAR_LBRACE;
	v->a[65054] = anon_sym_DOLLAR_LPAREN;
	v->a[65055] = anon_sym_BQUOTE;
	v->a[65056] = anon_sym_DOLLAR_BQUOTE;
	v->a[65057] = anon_sym_LT_LPAREN;
	v->a[65058] = anon_sym_GT_LPAREN;
	v->a[65059] = sym_word;
	small_parse_table_3253(v);
}

void	small_parse_table_3253(t_small_parse_table_array *v)
{
	v->a[65060] = 8;
	v->a[65061] = actions(3);
	v->a[65062] = 1;
	v->a[65063] = sym_comment;
	v->a[65064] = actions(5614);
	v->a[65065] = 1;
	v->a[65066] = anon_sym_DQUOTE;
	v->a[65067] = actions(5719);
	v->a[65068] = 1;
	v->a[65069] = sym_variable_name;
	v->a[65070] = state(3393);
	v->a[65071] = 1;
	v->a[65072] = sym_string;
	v->a[65073] = actions(5717);
	v->a[65074] = 2;
	v->a[65075] = aux_sym__simple_variable_name_token1;
	v->a[65076] = aux_sym__multiline_variable_name_token1;
	v->a[65077] = actions(1235);
	v->a[65078] = 3;
	v->a[65079] = sym_file_descriptor;
	small_parse_table_3254(v);
}

void	small_parse_table_3254(t_small_parse_table_array *v)
{
	v->a[65080] = sym_test_operator;
	v->a[65081] = sym__brace_start;
	v->a[65082] = actions(5715);
	v->a[65083] = 9;
	v->a[65084] = anon_sym_DASH;
	v->a[65085] = anon_sym_STAR;
	v->a[65086] = anon_sym_BANG;
	v->a[65087] = anon_sym_QMARK;
	v->a[65088] = anon_sym_DOLLAR;
	v->a[65089] = anon_sym_POUND;
	v->a[65090] = anon_sym_AT2;
	v->a[65091] = anon_sym_0;
	v->a[65092] = anon_sym__;
	v->a[65093] = actions(1227);
	v->a[65094] = 29;
	v->a[65095] = anon_sym_LPAREN_LPAREN;
	v->a[65096] = anon_sym_PIPE_PIPE;
	v->a[65097] = anon_sym_AMP_AMP;
	v->a[65098] = anon_sym_LT;
	v->a[65099] = anon_sym_GT;
	small_parse_table_3255(v);
}

/* EOF small_parse_table_650.c */
