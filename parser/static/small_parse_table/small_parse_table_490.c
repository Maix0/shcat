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
	v->a[49000] = sym_variable_name;
	v->a[49001] = actions(1399);
	v->a[49002] = 26;
	v->a[49003] = anon_sym_for;
	v->a[49004] = anon_sym_while;
	v->a[49005] = anon_sym_until;
	v->a[49006] = anon_sym_do;
	v->a[49007] = anon_sym_if;
	v->a[49008] = anon_sym_case;
	v->a[49009] = anon_sym_LPAREN;
	v->a[49010] = anon_sym_LBRACE;
	v->a[49011] = anon_sym_BANG;
	v->a[49012] = anon_sym_LT;
	v->a[49013] = anon_sym_GT;
	v->a[49014] = anon_sym_GT_GT;
	v->a[49015] = anon_sym_LT_AMP;
	v->a[49016] = anon_sym_GT_AMP;
	v->a[49017] = anon_sym_GT_PIPE;
	v->a[49018] = anon_sym_LT_AMP_DASH;
	v->a[49019] = anon_sym_GT_AMP_DASH;
	small_parse_table_2451(v);
}

void	small_parse_table_2451(t_small_parse_table_array *v)
{
	v->a[49020] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49021] = anon_sym_DOLLAR;
	v->a[49022] = anon_sym_DQUOTE;
	v->a[49023] = sym_raw_string;
	v->a[49024] = sym_number;
	v->a[49025] = anon_sym_DOLLAR_LBRACE;
	v->a[49026] = anon_sym_DOLLAR_LPAREN;
	v->a[49027] = anon_sym_BQUOTE;
	v->a[49028] = sym_word;
	v->a[49029] = 6;
	v->a[49030] = actions(3);
	v->a[49031] = 1;
	v->a[49032] = sym_comment;
	v->a[49033] = actions(1230);
	v->a[49034] = 1;
	v->a[49035] = aux_sym_concatenation_token1;
	v->a[49036] = actions(1702);
	v->a[49037] = 1;
	v->a[49038] = sym__concat;
	v->a[49039] = state(411);
	small_parse_table_2452(v);
}

void	small_parse_table_2452(t_small_parse_table_array *v)
{
	v->a[49040] = 1;
	v->a[49041] = aux_sym_concatenation_repeat1;
	v->a[49042] = actions(1085);
	v->a[49043] = 2;
	v->a[49044] = sym_file_descriptor;
	v->a[49045] = sym_variable_name;
	v->a[49046] = actions(1081);
	v->a[49047] = 23;
	v->a[49048] = anon_sym_PIPE;
	v->a[49049] = anon_sym_AMP_AMP;
	v->a[49050] = anon_sym_PIPE_PIPE;
	v->a[49051] = anon_sym_LT;
	v->a[49052] = anon_sym_GT;
	v->a[49053] = anon_sym_GT_GT;
	v->a[49054] = anon_sym_LT_AMP;
	v->a[49055] = anon_sym_GT_AMP;
	v->a[49056] = anon_sym_GT_PIPE;
	v->a[49057] = anon_sym_LT_AMP_DASH;
	v->a[49058] = anon_sym_GT_AMP_DASH;
	v->a[49059] = anon_sym_LT_LT;
	small_parse_table_2453(v);
}

void	small_parse_table_2453(t_small_parse_table_array *v)
{
	v->a[49060] = anon_sym_LT_LT_DASH;
	v->a[49061] = aux_sym_heredoc_redirect_token1;
	v->a[49062] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49063] = anon_sym_DOLLAR;
	v->a[49064] = anon_sym_DQUOTE;
	v->a[49065] = sym_raw_string;
	v->a[49066] = sym_number;
	v->a[49067] = anon_sym_DOLLAR_LBRACE;
	v->a[49068] = anon_sym_DOLLAR_LPAREN;
	v->a[49069] = anon_sym_BQUOTE;
	v->a[49070] = sym_word;
	v->a[49071] = 6;
	v->a[49072] = actions(3);
	v->a[49073] = 1;
	v->a[49074] = sym_comment;
	v->a[49075] = actions(1230);
	v->a[49076] = 1;
	v->a[49077] = aux_sym_concatenation_token1;
	v->a[49078] = actions(1232);
	v->a[49079] = 1;
	small_parse_table_2454(v);
}

void	small_parse_table_2454(t_small_parse_table_array *v)
{
	v->a[49080] = sym__concat;
	v->a[49081] = state(775);
	v->a[49082] = 1;
	v->a[49083] = aux_sym_concatenation_repeat1;
	v->a[49084] = actions(575);
	v->a[49085] = 2;
	v->a[49086] = sym_file_descriptor;
	v->a[49087] = sym_variable_name;
	v->a[49088] = actions(573);
	v->a[49089] = 23;
	v->a[49090] = anon_sym_PIPE;
	v->a[49091] = anon_sym_AMP_AMP;
	v->a[49092] = anon_sym_PIPE_PIPE;
	v->a[49093] = anon_sym_LT;
	v->a[49094] = anon_sym_GT;
	v->a[49095] = anon_sym_GT_GT;
	v->a[49096] = anon_sym_LT_AMP;
	v->a[49097] = anon_sym_GT_AMP;
	v->a[49098] = anon_sym_GT_PIPE;
	v->a[49099] = anon_sym_LT_AMP_DASH;
	small_parse_table_2455(v);
}

/* EOF small_parse_table_490.c */
