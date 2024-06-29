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
	v->a[49000] = 1;
	v->a[49001] = sym_command_name;
	v->a[49002] = state(636);
	v->a[49003] = 1;
	v->a[49004] = sym_concatenation;
	v->a[49005] = state(1343);
	v->a[49006] = 1;
	v->a[49007] = sym_file_redirect;
	v->a[49008] = actions(1066);
	v->a[49009] = 2;
	v->a[49010] = anon_sym_LT_AMP_DASH;
	v->a[49011] = anon_sym_GT_AMP_DASH;
	v->a[49012] = state(1100);
	v->a[49013] = 2;
	v->a[49014] = sym_variable_assignment;
	v->a[49015] = aux_sym_command_repeat1;
	v->a[49016] = actions(33);
	v->a[49017] = 3;
	v->a[49018] = sym_raw_string;
	v->a[49019] = sym_number;
	small_parse_table_2451(v);
}

void	small_parse_table_2451(t_small_parse_table_array *v)
{
	v->a[49020] = sym_word;
	v->a[49021] = state(291);
	v->a[49022] = 5;
	v->a[49023] = sym_arithmetic_expansion;
	v->a[49024] = sym_string;
	v->a[49025] = sym_simple_expansion;
	v->a[49026] = sym_expansion;
	v->a[49027] = sym_command_substitution;
	v->a[49028] = actions(1064);
	v->a[49029] = 8;
	v->a[49030] = anon_sym_LT;
	v->a[49031] = anon_sym_GT;
	v->a[49032] = anon_sym_GT_GT;
	v->a[49033] = anon_sym_AMP_GT;
	v->a[49034] = anon_sym_AMP_GT_GT;
	v->a[49035] = anon_sym_LT_AMP;
	v->a[49036] = anon_sym_GT_AMP;
	v->a[49037] = anon_sym_GT_PIPE;
	v->a[49038] = 6;
	v->a[49039] = actions(3);
	small_parse_table_2452(v);
}

void	small_parse_table_2452(t_small_parse_table_array *v)
{
	v->a[49040] = 1;
	v->a[49041] = sym_comment;
	v->a[49042] = actions(1536);
	v->a[49043] = 1;
	v->a[49044] = sym_file_descriptor;
	v->a[49045] = actions(1539);
	v->a[49046] = 1;
	v->a[49047] = sym_variable_name;
	v->a[49048] = actions(1526);
	v->a[49049] = 9;
	v->a[49050] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49051] = anon_sym_DOLLAR;
	v->a[49052] = anon_sym_DQUOTE;
	v->a[49053] = sym_raw_string;
	v->a[49054] = sym_number;
	v->a[49055] = anon_sym_DOLLAR_LBRACE;
	v->a[49056] = anon_sym_DOLLAR_LPAREN;
	v->a[49057] = anon_sym_BQUOTE;
	v->a[49058] = sym_word;
	v->a[49059] = actions(1528);
	small_parse_table_2453(v);
}

void	small_parse_table_2453(t_small_parse_table_array *v)
{
	v->a[49060] = 10;
	v->a[49061] = anon_sym_esac;
	v->a[49062] = anon_sym_PIPE;
	v->a[49063] = anon_sym_SEMI_SEMI;
	v->a[49064] = anon_sym_AMP_AMP;
	v->a[49065] = anon_sym_PIPE_PIPE;
	v->a[49066] = anon_sym_LT_LT;
	v->a[49067] = anon_sym_LT_LT_DASH;
	v->a[49068] = aux_sym_heredoc_redirect_token1;
	v->a[49069] = anon_sym_AMP;
	v->a[49070] = anon_sym_SEMI;
	v->a[49071] = actions(1533);
	v->a[49072] = 10;
	v->a[49073] = anon_sym_LT;
	v->a[49074] = anon_sym_GT;
	v->a[49075] = anon_sym_GT_GT;
	v->a[49076] = anon_sym_AMP_GT;
	v->a[49077] = anon_sym_AMP_GT_GT;
	v->a[49078] = anon_sym_LT_AMP;
	v->a[49079] = anon_sym_GT_AMP;
	small_parse_table_2454(v);
}

void	small_parse_table_2454(t_small_parse_table_array *v)
{
	v->a[49080] = anon_sym_GT_PIPE;
	v->a[49081] = anon_sym_LT_AMP_DASH;
	v->a[49082] = anon_sym_GT_AMP_DASH;
	v->a[49083] = 7;
	v->a[49084] = actions(3);
	v->a[49085] = 1;
	v->a[49086] = sym_comment;
	v->a[49087] = actions(1536);
	v->a[49088] = 1;
	v->a[49089] = sym_file_descriptor;
	v->a[49090] = actions(1539);
	v->a[49091] = 1;
	v->a[49092] = sym_variable_name;
	v->a[49093] = actions(1671);
	v->a[49094] = 1;
	v->a[49095] = anon_sym_RPAREN;
	v->a[49096] = actions(1526);
	v->a[49097] = 9;
	v->a[49098] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49099] = anon_sym_DOLLAR;
	small_parse_table_2455(v);
}

/* EOF small_parse_table_490.c */
