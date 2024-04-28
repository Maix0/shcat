/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_260.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1300(t_small_parse_table_array *v)
{
	v->a[26000] = actions(1241);
	v->a[26001] = 4;
	v->a[26002] = sym_file_descriptor;
	v->a[26003] = sym_test_operator;
	v->a[26004] = sym__bare_dollar;
	v->a[26005] = sym__brace_start;
	v->a[26006] = actions(4113);
	v->a[26007] = 9;
	v->a[26008] = anon_sym_DASH;
	v->a[26009] = anon_sym_STAR;
	v->a[26010] = anon_sym_BANG;
	v->a[26011] = anon_sym_QMARK;
	v->a[26012] = anon_sym_DOLLAR;
	v->a[26013] = anon_sym_POUND;
	v->a[26014] = anon_sym_AT2;
	v->a[26015] = anon_sym_0;
	v->a[26016] = anon_sym__;
	v->a[26017] = actions(1239);
	v->a[26018] = 34;
	v->a[26019] = anon_sym_LPAREN_LPAREN;
	small_parse_table_1301(v);
}

void	small_parse_table_1301(t_small_parse_table_array *v)
{
	v->a[26020] = anon_sym_PIPE_PIPE;
	v->a[26021] = anon_sym_AMP_AMP;
	v->a[26022] = anon_sym_PIPE;
	v->a[26023] = anon_sym_EQ_EQ;
	v->a[26024] = anon_sym_LT;
	v->a[26025] = anon_sym_GT;
	v->a[26026] = anon_sym_LT_LT;
	v->a[26027] = anon_sym_GT_GT;
	v->a[26028] = anon_sym_PIPE_AMP;
	v->a[26029] = anon_sym_EQ_TILDE;
	v->a[26030] = anon_sym_AMP_GT;
	v->a[26031] = anon_sym_AMP_GT_GT;
	v->a[26032] = anon_sym_LT_AMP;
	v->a[26033] = anon_sym_GT_AMP;
	v->a[26034] = anon_sym_GT_PIPE;
	v->a[26035] = anon_sym_LT_AMP_DASH;
	v->a[26036] = anon_sym_GT_AMP_DASH;
	v->a[26037] = anon_sym_LT_LT_DASH;
	v->a[26038] = anon_sym_LT_LT_LT;
	v->a[26039] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1302(v);
}

void	small_parse_table_1302(t_small_parse_table_array *v)
{
	v->a[26040] = anon_sym_DOLLAR_LBRACK;
	v->a[26041] = sym__special_character;
	v->a[26042] = sym_raw_string;
	v->a[26043] = sym_ansi_c_string;
	v->a[26044] = aux_sym_number_token1;
	v->a[26045] = aux_sym_number_token2;
	v->a[26046] = anon_sym_DOLLAR_LBRACE;
	v->a[26047] = anon_sym_DOLLAR_LPAREN;
	v->a[26048] = anon_sym_BQUOTE;
	v->a[26049] = anon_sym_DOLLAR_BQUOTE;
	v->a[26050] = anon_sym_LT_LPAREN;
	v->a[26051] = anon_sym_GT_LPAREN;
	v->a[26052] = sym_word;
	v->a[26053] = 6;
	v->a[26054] = actions(3);
	v->a[26055] = 1;
	v->a[26056] = sym_comment;
	v->a[26057] = state(1744);
	v->a[26058] = 1;
	v->a[26059] = aux_sym__literal_repeat1;
	small_parse_table_1303(v);
}

void	small_parse_table_1303(t_small_parse_table_array *v)
{
	v->a[26060] = state(811);
	v->a[26061] = 2;
	v->a[26062] = sym_concatenation;
	v->a[26063] = aux_sym_for_statement_repeat1;
	v->a[26064] = actions(2074);
	v->a[26065] = 5;
	v->a[26066] = sym_file_descriptor;
	v->a[26067] = sym_variable_name;
	v->a[26068] = sym_test_operator;
	v->a[26069] = sym__brace_start;
	v->a[26070] = aux_sym_heredoc_redirect_token1;
	v->a[26071] = state(2337);
	v->a[26072] = 9;
	v->a[26073] = sym_arithmetic_expansion;
	v->a[26074] = sym_brace_expression;
	v->a[26075] = sym_string;
	v->a[26076] = sym_translated_string;
	v->a[26077] = sym_number;
	v->a[26078] = sym_simple_expansion;
	v->a[26079] = sym_expansion;
	small_parse_table_1304(v);
}

void	small_parse_table_1304(t_small_parse_table_array *v)
{
	v->a[26080] = sym_command_substitution;
	v->a[26081] = sym_process_substitution;
	v->a[26082] = actions(2072);
	v->a[26083] = 34;
	v->a[26084] = anon_sym_LPAREN_LPAREN;
	v->a[26085] = anon_sym_PIPE_PIPE;
	v->a[26086] = anon_sym_AMP_AMP;
	v->a[26087] = anon_sym_PIPE;
	v->a[26088] = anon_sym_LT;
	v->a[26089] = anon_sym_GT;
	v->a[26090] = anon_sym_LT_LT;
	v->a[26091] = anon_sym_GT_GT;
	v->a[26092] = anon_sym_PIPE_AMP;
	v->a[26093] = anon_sym_AMP_GT;
	v->a[26094] = anon_sym_AMP_GT_GT;
	v->a[26095] = anon_sym_LT_AMP;
	v->a[26096] = anon_sym_GT_AMP;
	v->a[26097] = anon_sym_GT_PIPE;
	v->a[26098] = anon_sym_LT_AMP_DASH;
	v->a[26099] = anon_sym_GT_AMP_DASH;
	small_parse_table_1305(v);
}

/* EOF small_parse_table_260.c */
