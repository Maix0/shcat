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
	v->a[69000] = actions(827);
	v->a[69001] = 1;
	v->a[69002] = anon_sym_DOLLAR_LPAREN;
	v->a[69003] = actions(829);
	v->a[69004] = 1;
	v->a[69005] = anon_sym_BQUOTE;
	v->a[69006] = state(250);
	v->a[69007] = 2;
	v->a[69008] = sym_concatenation;
	v->a[69009] = aux_sym_for_statement_repeat1;
	v->a[69010] = actions(817);
	v->a[69011] = 3;
	v->a[69012] = sym_raw_string;
	v->a[69013] = sym_number;
	v->a[69014] = sym_word;
	v->a[69015] = state(533);
	v->a[69016] = 5;
	v->a[69017] = sym_arithmetic_expansion;
	v->a[69018] = sym_string;
	v->a[69019] = sym_simple_expansion;
	small_parse_table_3451(v);
}

void	small_parse_table_3451(t_small_parse_table_array *v)
{
	v->a[69020] = sym_expansion;
	v->a[69021] = sym_command_substitution;
	v->a[69022] = 10;
	v->a[69023] = actions(3);
	v->a[69024] = 1;
	v->a[69025] = sym_comment;
	v->a[69026] = actions(962);
	v->a[69027] = 1;
	v->a[69028] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69029] = actions(964);
	v->a[69030] = 1;
	v->a[69031] = anon_sym_DOLLAR;
	v->a[69032] = actions(966);
	v->a[69033] = 1;
	v->a[69034] = anon_sym_DQUOTE;
	v->a[69035] = actions(968);
	v->a[69036] = 1;
	v->a[69037] = anon_sym_DOLLAR_LBRACE;
	v->a[69038] = actions(970);
	v->a[69039] = 1;
	small_parse_table_3452(v);
}

void	small_parse_table_3452(t_small_parse_table_array *v)
{
	v->a[69040] = anon_sym_DOLLAR_LPAREN;
	v->a[69041] = actions(972);
	v->a[69042] = 1;
	v->a[69043] = anon_sym_BQUOTE;
	v->a[69044] = state(443);
	v->a[69045] = 2;
	v->a[69046] = sym_concatenation;
	v->a[69047] = aux_sym_for_statement_repeat1;
	v->a[69048] = actions(1297);
	v->a[69049] = 3;
	v->a[69050] = sym_raw_string;
	v->a[69051] = sym_number;
	v->a[69052] = sym_word;
	v->a[69053] = state(780);
	v->a[69054] = 5;
	v->a[69055] = sym_arithmetic_expansion;
	v->a[69056] = sym_string;
	v->a[69057] = sym_simple_expansion;
	v->a[69058] = sym_expansion;
	v->a[69059] = sym_command_substitution;
	small_parse_table_3453(v);
}

void	small_parse_table_3453(t_small_parse_table_array *v)
{
	v->a[69060] = 3;
	v->a[69061] = actions(501);
	v->a[69062] = 1;
	v->a[69063] = sym_comment;
	v->a[69064] = actions(569);
	v->a[69065] = 4;
	v->a[69066] = anon_sym_PIPE;
	v->a[69067] = anon_sym_LT;
	v->a[69068] = anon_sym_GT;
	v->a[69069] = anon_sym_LT_LT;
	v->a[69070] = actions(571);
	v->a[69071] = 12;
	v->a[69072] = sym_file_descriptor;
	v->a[69073] = sym__concat;
	v->a[69074] = sym_variable_name;
	v->a[69075] = anon_sym_AMP_AMP;
	v->a[69076] = anon_sym_PIPE_PIPE;
	v->a[69077] = anon_sym_GT_GT;
	v->a[69078] = anon_sym_LT_AMP;
	v->a[69079] = anon_sym_GT_AMP;
	small_parse_table_3454(v);
}

void	small_parse_table_3454(t_small_parse_table_array *v)
{
	v->a[69080] = anon_sym_GT_PIPE;
	v->a[69081] = anon_sym_LT_GT;
	v->a[69082] = anon_sym_LT_LT_DASH;
	v->a[69083] = aux_sym_concatenation_token1;
	v->a[69084] = 10;
	v->a[69085] = actions(3);
	v->a[69086] = 1;
	v->a[69087] = sym_comment;
	v->a[69088] = actions(962);
	v->a[69089] = 1;
	v->a[69090] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69091] = actions(964);
	v->a[69092] = 1;
	v->a[69093] = anon_sym_DOLLAR;
	v->a[69094] = actions(966);
	v->a[69095] = 1;
	v->a[69096] = anon_sym_DQUOTE;
	v->a[69097] = actions(968);
	v->a[69098] = 1;
	v->a[69099] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3455(v);
}

/* EOF small_parse_table_690.c */
