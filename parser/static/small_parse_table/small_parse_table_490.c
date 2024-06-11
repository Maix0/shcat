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
	v->a[49000] = anon_sym_LT_AMP_DASH;
	v->a[49001] = anon_sym_GT_AMP_DASH;
	v->a[49002] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49003] = anon_sym_DOLLAR;
	v->a[49004] = anon_sym_DQUOTE;
	v->a[49005] = sym_raw_string;
	v->a[49006] = sym_number;
	v->a[49007] = anon_sym_DOLLAR_LBRACE;
	v->a[49008] = anon_sym_DOLLAR_LPAREN;
	v->a[49009] = anon_sym_BQUOTE;
	v->a[49010] = sym_word;
	v->a[49011] = 12;
	v->a[49012] = actions(3);
	v->a[49013] = 1;
	v->a[49014] = sym_comment;
	v->a[49015] = actions(713);
	v->a[49016] = 1;
	v->a[49017] = sym_file_descriptor;
	v->a[49018] = actions(1588);
	v->a[49019] = 1;
	small_parse_table_2451(v);
}

void	small_parse_table_2451(t_small_parse_table_array *v)
{
	v->a[49020] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49021] = actions(1590);
	v->a[49022] = 1;
	v->a[49023] = anon_sym_DOLLAR;
	v->a[49024] = actions(1592);
	v->a[49025] = 1;
	v->a[49026] = anon_sym_DQUOTE;
	v->a[49027] = actions(1594);
	v->a[49028] = 1;
	v->a[49029] = anon_sym_DOLLAR_LBRACE;
	v->a[49030] = actions(1596);
	v->a[49031] = 1;
	v->a[49032] = anon_sym_DOLLAR_LPAREN;
	v->a[49033] = actions(1598);
	v->a[49034] = 1;
	v->a[49035] = anon_sym_BQUOTE;
	v->a[49036] = state(1728);
	v->a[49037] = 1;
	v->a[49038] = sym_concatenation;
	v->a[49039] = actions(1586);
	small_parse_table_2452(v);
}

void	small_parse_table_2452(t_small_parse_table_array *v)
{
	v->a[49040] = 3;
	v->a[49041] = sym_raw_string;
	v->a[49042] = sym_number;
	v->a[49043] = sym_word;
	v->a[49044] = state(1560);
	v->a[49045] = 5;
	v->a[49046] = sym_arithmetic_expansion;
	v->a[49047] = sym_string;
	v->a[49048] = sym_simple_expansion;
	v->a[49049] = sym_expansion;
	v->a[49050] = sym_command_substitution;
	v->a[49051] = actions(715);
	v->a[49052] = 15;
	v->a[49053] = anon_sym_PIPE;
	v->a[49054] = anon_sym_AMP_AMP;
	v->a[49055] = anon_sym_PIPE_PIPE;
	v->a[49056] = anon_sym_LT;
	v->a[49057] = anon_sym_GT;
	v->a[49058] = anon_sym_GT_GT;
	v->a[49059] = anon_sym_AMP_GT;
	small_parse_table_2453(v);
}

void	small_parse_table_2453(t_small_parse_table_array *v)
{
	v->a[49060] = anon_sym_AMP_GT_GT;
	v->a[49061] = anon_sym_LT_AMP;
	v->a[49062] = anon_sym_GT_AMP;
	v->a[49063] = anon_sym_GT_PIPE;
	v->a[49064] = anon_sym_LT_AMP_DASH;
	v->a[49065] = anon_sym_GT_AMP_DASH;
	v->a[49066] = anon_sym_LT_LT;
	v->a[49067] = anon_sym_LT_LT_DASH;
	v->a[49068] = 3;
	v->a[49069] = actions(3);
	v->a[49070] = 1;
	v->a[49071] = sym_comment;
	v->a[49072] = actions(543);
	v->a[49073] = 2;
	v->a[49074] = sym_file_descriptor;
	v->a[49075] = sym_variable_name;
	v->a[49076] = actions(541);
	v->a[49077] = 29;
	v->a[49078] = anon_sym_esac;
	v->a[49079] = anon_sym_PIPE;
	small_parse_table_2454(v);
}

void	small_parse_table_2454(t_small_parse_table_array *v)
{
	v->a[49080] = anon_sym_SEMI_SEMI;
	v->a[49081] = anon_sym_AMP_AMP;
	v->a[49082] = anon_sym_PIPE_PIPE;
	v->a[49083] = anon_sym_LT;
	v->a[49084] = anon_sym_GT;
	v->a[49085] = anon_sym_GT_GT;
	v->a[49086] = anon_sym_AMP_GT;
	v->a[49087] = anon_sym_AMP_GT_GT;
	v->a[49088] = anon_sym_LT_AMP;
	v->a[49089] = anon_sym_GT_AMP;
	v->a[49090] = anon_sym_GT_PIPE;
	v->a[49091] = anon_sym_LT_AMP_DASH;
	v->a[49092] = anon_sym_GT_AMP_DASH;
	v->a[49093] = anon_sym_LT_LT;
	v->a[49094] = anon_sym_LT_LT_DASH;
	v->a[49095] = aux_sym_heredoc_redirect_token1;
	v->a[49096] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49097] = anon_sym_AMP;
	v->a[49098] = anon_sym_DOLLAR;
	v->a[49099] = anon_sym_DQUOTE;
	small_parse_table_2455(v);
}

/* EOF small_parse_table_490.c */
