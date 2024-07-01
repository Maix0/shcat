/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_690.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3450(t_small_parse_table_array *v)
{
	v->a[69000] = sym__bare_dollar;
	v->a[69001] = actions(2562);
	v->a[69002] = 1;
	v->a[69003] = anon_sym_DOLLAR;
	v->a[69004] = actions(2372);
	v->a[69005] = 5;
	v->a[69006] = aux_sym_concatenation_token1;
	v->a[69007] = sym_raw_string;
	v->a[69008] = sym_number;
	v->a[69009] = sym__comment_word;
	v->a[69010] = sym_word;
	v->a[69011] = state(1379);
	v->a[69012] = 5;
	v->a[69013] = sym_arithmetic_expansion;
	v->a[69014] = sym_string;
	v->a[69015] = sym_simple_expansion;
	v->a[69016] = sym_expansion;
	v->a[69017] = sym_command_substitution;
	v->a[69018] = 5;
	v->a[69019] = actions(3);
	small_parse_table_3451(v);
}

void	small_parse_table_3451(t_small_parse_table_array *v)
{
	v->a[69020] = 1;
	v->a[69021] = sym_comment;
	v->a[69022] = actions(2708);
	v->a[69023] = 1;
	v->a[69024] = sym_variable_name;
	v->a[69025] = actions(1908);
	v->a[69026] = 2;
	v->a[69027] = sym_file_descriptor;
	v->a[69028] = aux_sym_heredoc_redirect_token1;
	v->a[69029] = state(1348);
	v->a[69030] = 2;
	v->a[69031] = sym_variable_assignment;
	v->a[69032] = aux_sym__variable_assignments_repeat1;
	v->a[69033] = actions(1906);
	v->a[69034] = 12;
	v->a[69035] = anon_sym_PIPE;
	v->a[69036] = anon_sym_AMP_AMP;
	v->a[69037] = anon_sym_PIPE_PIPE;
	v->a[69038] = anon_sym_LT;
	v->a[69039] = anon_sym_GT;
	small_parse_table_3452(v);
}

void	small_parse_table_3452(t_small_parse_table_array *v)
{
	v->a[69040] = anon_sym_GT_GT;
	v->a[69041] = anon_sym_LT_AMP;
	v->a[69042] = anon_sym_GT_AMP;
	v->a[69043] = anon_sym_GT_PIPE;
	v->a[69044] = anon_sym_LT_GT;
	v->a[69045] = anon_sym_LT_LT;
	v->a[69046] = anon_sym_LT_LT_DASH;
	v->a[69047] = 5;
	v->a[69048] = actions(3);
	v->a[69049] = 1;
	v->a[69050] = sym_comment;
	v->a[69051] = actions(736);
	v->a[69052] = 1;
	v->a[69053] = anon_sym_PIPE;
	v->a[69054] = actions(997);
	v->a[69055] = 2;
	v->a[69056] = sym_file_descriptor;
	v->a[69057] = aux_sym_heredoc_redirect_token1;
	v->a[69058] = state(1359);
	v->a[69059] = 3;
	small_parse_table_3453(v);
}

void	small_parse_table_3453(t_small_parse_table_array *v)
{
	v->a[69060] = sym_file_redirect;
	v->a[69061] = sym_heredoc_redirect;
	v->a[69062] = aux_sym_redirected_statement_repeat1;
	v->a[69063] = actions(960);
	v->a[69064] = 11;
	v->a[69065] = anon_sym_AMP_AMP;
	v->a[69066] = anon_sym_PIPE_PIPE;
	v->a[69067] = anon_sym_LT;
	v->a[69068] = anon_sym_GT;
	v->a[69069] = anon_sym_GT_GT;
	v->a[69070] = anon_sym_LT_AMP;
	v->a[69071] = anon_sym_GT_AMP;
	v->a[69072] = anon_sym_GT_PIPE;
	v->a[69073] = anon_sym_LT_GT;
	v->a[69074] = anon_sym_LT_LT;
	v->a[69075] = anon_sym_LT_LT_DASH;
	v->a[69076] = 10;
	v->a[69077] = actions(3);
	v->a[69078] = 1;
	v->a[69079] = sym_comment;
	small_parse_table_3454(v);
}

void	small_parse_table_3454(t_small_parse_table_array *v)
{
	v->a[69080] = actions(2462);
	v->a[69081] = 1;
	v->a[69082] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69083] = actions(2466);
	v->a[69084] = 1;
	v->a[69085] = anon_sym_DQUOTE;
	v->a[69086] = actions(2468);
	v->a[69087] = 1;
	v->a[69088] = anon_sym_DOLLAR_LBRACE;
	v->a[69089] = actions(2470);
	v->a[69090] = 1;
	v->a[69091] = anon_sym_DOLLAR_LPAREN;
	v->a[69092] = actions(2472);
	v->a[69093] = 1;
	v->a[69094] = anon_sym_BQUOTE;
	v->a[69095] = actions(2474);
	v->a[69096] = 1;
	v->a[69097] = sym__bare_dollar;
	v->a[69098] = actions(2526);
	v->a[69099] = 1;
	small_parse_table_3455(v);
}

/* EOF small_parse_table_690.c */
