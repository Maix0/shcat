/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1180.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5900(t_small_parse_table_array *v)
{
	v->a[118000] = sym_translated_string;
	v->a[118001] = sym_number;
	v->a[118002] = sym_simple_expansion;
	v->a[118003] = sym_expansion;
	v->a[118004] = sym_command_substitution;
	v->a[118005] = sym_process_substitution;
	v->a[118006] = 8;
	v->a[118007] = actions(3);
	v->a[118008] = 1;
	v->a[118009] = sym_comment;
	v->a[118010] = actions(5826);
	v->a[118011] = 1;
	v->a[118012] = aux_sym_heredoc_redirect_token1;
	v->a[118013] = actions(5828);
	v->a[118014] = 1;
	v->a[118015] = sym_file_descriptor;
	v->a[118016] = actions(6427);
	v->a[118017] = 1;
	v->a[118018] = anon_sym_RPAREN;
	v->a[118019] = actions(5831);
	small_parse_table_5901(v);
}

void	small_parse_table_5901(t_small_parse_table_array *v)
{
	v->a[118020] = 3;
	v->a[118021] = sym_variable_name;
	v->a[118022] = sym_test_operator;
	v->a[118023] = sym__brace_start;
	v->a[118024] = actions(5821);
	v->a[118025] = 9;
	v->a[118026] = anon_sym_SEMI;
	v->a[118027] = anon_sym_PIPE_PIPE;
	v->a[118028] = anon_sym_AMP_AMP;
	v->a[118029] = anon_sym_PIPE;
	v->a[118030] = anon_sym_AMP;
	v->a[118031] = anon_sym_LT_LT;
	v->a[118032] = anon_sym_SEMI_SEMI;
	v->a[118033] = anon_sym_PIPE_AMP;
	v->a[118034] = anon_sym_LT_LT_DASH;
	v->a[118035] = actions(5823);
	v->a[118036] = 11;
	v->a[118037] = anon_sym_LT;
	v->a[118038] = anon_sym_GT;
	v->a[118039] = anon_sym_GT_GT;
	small_parse_table_5902(v);
}

void	small_parse_table_5902(t_small_parse_table_array *v)
{
	v->a[118040] = anon_sym_AMP_GT;
	v->a[118041] = anon_sym_AMP_GT_GT;
	v->a[118042] = anon_sym_LT_AMP;
	v->a[118043] = anon_sym_GT_AMP;
	v->a[118044] = anon_sym_GT_PIPE;
	v->a[118045] = anon_sym_LT_AMP_DASH;
	v->a[118046] = anon_sym_GT_AMP_DASH;
	v->a[118047] = anon_sym_LT_LT_LT;
	v->a[118048] = actions(5819);
	v->a[118049] = 17;
	v->a[118050] = anon_sym_LPAREN_LPAREN;
	v->a[118051] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[118052] = anon_sym_DOLLAR_LBRACK;
	v->a[118053] = anon_sym_DOLLAR;
	v->a[118054] = sym__special_character;
	v->a[118055] = anon_sym_DQUOTE;
	v->a[118056] = sym_raw_string;
	v->a[118057] = sym_ansi_c_string;
	v->a[118058] = aux_sym_number_token1;
	v->a[118059] = aux_sym_number_token2;
	small_parse_table_5903(v);
}

void	small_parse_table_5903(t_small_parse_table_array *v)
{
	v->a[118060] = anon_sym_DOLLAR_LBRACE;
	v->a[118061] = anon_sym_DOLLAR_LPAREN;
	v->a[118062] = anon_sym_BQUOTE;
	v->a[118063] = anon_sym_DOLLAR_BQUOTE;
	v->a[118064] = anon_sym_LT_LPAREN;
	v->a[118065] = anon_sym_GT_LPAREN;
	v->a[118066] = sym_word;
	v->a[118067] = 3;
	v->a[118068] = actions(3);
	v->a[118069] = 1;
	v->a[118070] = sym_comment;
	v->a[118071] = actions(1294);
	v->a[118072] = 5;
	v->a[118073] = sym_file_descriptor;
	v->a[118074] = sym__concat;
	v->a[118075] = sym_test_operator;
	v->a[118076] = sym__brace_start;
	v->a[118077] = aux_sym_heredoc_redirect_token1;
	v->a[118078] = actions(1292);
	v->a[118079] = 38;
	small_parse_table_5904(v);
}

void	small_parse_table_5904(t_small_parse_table_array *v)
{
	v->a[118080] = anon_sym_LPAREN_LPAREN;
	v->a[118081] = anon_sym_SEMI;
	v->a[118082] = anon_sym_PIPE_PIPE;
	v->a[118083] = anon_sym_AMP_AMP;
	v->a[118084] = anon_sym_PIPE;
	v->a[118085] = anon_sym_AMP;
	v->a[118086] = anon_sym_LT;
	v->a[118087] = anon_sym_GT;
	v->a[118088] = anon_sym_LT_LT;
	v->a[118089] = anon_sym_GT_GT;
	v->a[118090] = anon_sym_RPAREN;
	v->a[118091] = anon_sym_SEMI_SEMI;
	v->a[118092] = anon_sym_PIPE_AMP;
	v->a[118093] = anon_sym_AMP_GT;
	v->a[118094] = anon_sym_AMP_GT_GT;
	v->a[118095] = anon_sym_LT_AMP;
	v->a[118096] = anon_sym_GT_AMP;
	v->a[118097] = anon_sym_GT_PIPE;
	v->a[118098] = anon_sym_LT_AMP_DASH;
	v->a[118099] = anon_sym_GT_AMP_DASH;
	small_parse_table_5905(v);
}

/* EOF small_parse_table_1180.c */
