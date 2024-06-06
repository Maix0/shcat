/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_490.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2450(t_small_parse_table_array *v)
{
	v->a[49000] = actions(3050);
	v->a[49001] = 6;
	v->a[49002] = sym_file_descriptor;
	v->a[49003] = sym__concat;
	v->a[49004] = sym_test_operator;
	v->a[49005] = sym__brace_start;
	v->a[49006] = ts_builtin_sym_end;
	v->a[49007] = aux_sym_heredoc_redirect_token1;
	v->a[49008] = actions(3048);
	v->a[49009] = 33;
	v->a[49010] = anon_sym_PIPE;
	v->a[49011] = anon_sym_SEMI_SEMI;
	v->a[49012] = anon_sym_PIPE_AMP;
	v->a[49013] = anon_sym_AMP_AMP;
	v->a[49014] = anon_sym_PIPE_PIPE;
	v->a[49015] = anon_sym_LT;
	v->a[49016] = anon_sym_GT;
	v->a[49017] = anon_sym_GT_GT;
	v->a[49018] = anon_sym_AMP_GT;
	v->a[49019] = anon_sym_AMP_GT_GT;
	small_parse_table_2451(v);
}

void	small_parse_table_2451(t_small_parse_table_array *v)
{
	v->a[49020] = anon_sym_LT_AMP;
	v->a[49021] = anon_sym_GT_AMP;
	v->a[49022] = anon_sym_GT_PIPE;
	v->a[49023] = anon_sym_LT_AMP_DASH;
	v->a[49024] = anon_sym_GT_AMP_DASH;
	v->a[49025] = anon_sym_LT_LT;
	v->a[49026] = anon_sym_LT_LT_DASH;
	v->a[49027] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49028] = anon_sym_AMP;
	v->a[49029] = aux_sym_concatenation_token1;
	v->a[49030] = anon_sym_DOLLAR;
	v->a[49031] = sym__special_character;
	v->a[49032] = anon_sym_DQUOTE;
	v->a[49033] = sym_raw_string;
	v->a[49034] = aux_sym_number_token1;
	v->a[49035] = aux_sym_number_token2;
	v->a[49036] = anon_sym_DOLLAR_LBRACE;
	v->a[49037] = anon_sym_DOLLAR_LPAREN;
	v->a[49038] = anon_sym_BQUOTE;
	v->a[49039] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_2452(v);
}

void	small_parse_table_2452(t_small_parse_table_array *v)
{
	v->a[49040] = aux_sym__simple_variable_name_token1;
	v->a[49041] = sym_word;
	v->a[49042] = anon_sym_SEMI;
	v->a[49043] = 3;
	v->a[49044] = actions(3);
	v->a[49045] = 1;
	v->a[49046] = sym_comment;
	v->a[49047] = actions(3024);
	v->a[49048] = 6;
	v->a[49049] = sym_file_descriptor;
	v->a[49050] = sym__concat;
	v->a[49051] = sym_test_operator;
	v->a[49052] = sym__bare_dollar;
	v->a[49053] = sym__brace_start;
	v->a[49054] = aux_sym_heredoc_redirect_token1;
	v->a[49055] = actions(3022);
	v->a[49056] = 33;
	v->a[49057] = anon_sym_PIPE;
	v->a[49058] = anon_sym_RPAREN;
	v->a[49059] = anon_sym_SEMI_SEMI;
	small_parse_table_2453(v);
}

void	small_parse_table_2453(t_small_parse_table_array *v)
{
	v->a[49060] = anon_sym_PIPE_AMP;
	v->a[49061] = anon_sym_AMP_AMP;
	v->a[49062] = anon_sym_PIPE_PIPE;
	v->a[49063] = anon_sym_LT;
	v->a[49064] = anon_sym_GT;
	v->a[49065] = anon_sym_GT_GT;
	v->a[49066] = anon_sym_AMP_GT;
	v->a[49067] = anon_sym_AMP_GT_GT;
	v->a[49068] = anon_sym_LT_AMP;
	v->a[49069] = anon_sym_GT_AMP;
	v->a[49070] = anon_sym_GT_PIPE;
	v->a[49071] = anon_sym_LT_AMP_DASH;
	v->a[49072] = anon_sym_GT_AMP_DASH;
	v->a[49073] = anon_sym_LT_LT;
	v->a[49074] = anon_sym_LT_LT_DASH;
	v->a[49075] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49076] = anon_sym_AMP;
	v->a[49077] = aux_sym_concatenation_token1;
	v->a[49078] = anon_sym_DOLLAR;
	v->a[49079] = sym__special_character;
	small_parse_table_2454(v);
}

void	small_parse_table_2454(t_small_parse_table_array *v)
{
	v->a[49080] = anon_sym_DQUOTE;
	v->a[49081] = sym_raw_string;
	v->a[49082] = aux_sym_number_token1;
	v->a[49083] = aux_sym_number_token2;
	v->a[49084] = anon_sym_DOLLAR_LBRACE;
	v->a[49085] = anon_sym_DOLLAR_LPAREN;
	v->a[49086] = anon_sym_BQUOTE;
	v->a[49087] = anon_sym_DOLLAR_BQUOTE;
	v->a[49088] = sym_word;
	v->a[49089] = anon_sym_SEMI;
	v->a[49090] = 3;
	v->a[49091] = actions(3);
	v->a[49092] = 1;
	v->a[49093] = sym_comment;
	v->a[49094] = actions(2774);
	v->a[49095] = 5;
	v->a[49096] = sym_file_descriptor;
	v->a[49097] = sym__concat;
	v->a[49098] = sym_test_operator;
	v->a[49099] = sym__brace_start;
	small_parse_table_2455(v);
}

/* EOF small_parse_table_490.c */
