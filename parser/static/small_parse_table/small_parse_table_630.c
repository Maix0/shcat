/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_630.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3150(t_small_parse_table_array *v)
{
	v->a[63000] = 5;
	v->a[63001] = sym_file_descriptor;
	v->a[63002] = sym_variable_name;
	v->a[63003] = sym_test_operator;
	v->a[63004] = sym__brace_start;
	v->a[63005] = aux_sym_heredoc_redirect_token1;
	v->a[63006] = actions(2717);
	v->a[63007] = 28;
	v->a[63008] = anon_sym_PIPE;
	v->a[63009] = anon_sym_PIPE_AMP;
	v->a[63010] = anon_sym_AMP_AMP;
	v->a[63011] = anon_sym_PIPE_PIPE;
	v->a[63012] = anon_sym_LT;
	v->a[63013] = anon_sym_GT;
	v->a[63014] = anon_sym_GT_GT;
	v->a[63015] = anon_sym_AMP_GT;
	v->a[63016] = anon_sym_AMP_GT_GT;
	v->a[63017] = anon_sym_LT_AMP;
	v->a[63018] = anon_sym_GT_AMP;
	v->a[63019] = anon_sym_GT_PIPE;
	small_parse_table_3151(v);
}

void	small_parse_table_3151(t_small_parse_table_array *v)
{
	v->a[63020] = anon_sym_LT_AMP_DASH;
	v->a[63021] = anon_sym_GT_AMP_DASH;
	v->a[63022] = anon_sym_LT_LT;
	v->a[63023] = anon_sym_LT_LT_DASH;
	v->a[63024] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63025] = anon_sym_DOLLAR;
	v->a[63026] = sym__special_character;
	v->a[63027] = anon_sym_DQUOTE;
	v->a[63028] = sym_raw_string;
	v->a[63029] = aux_sym_number_token1;
	v->a[63030] = aux_sym_number_token2;
	v->a[63031] = anon_sym_DOLLAR_LBRACE;
	v->a[63032] = anon_sym_DOLLAR_LPAREN;
	v->a[63033] = anon_sym_BQUOTE;
	v->a[63034] = anon_sym_DOLLAR_BQUOTE;
	v->a[63035] = sym_word;
	v->a[63036] = 6;
	v->a[63037] = actions(3);
	v->a[63038] = 1;
	v->a[63039] = sym_comment;
	small_parse_table_3152(v);
}

void	small_parse_table_3152(t_small_parse_table_array *v)
{
	v->a[63040] = actions(3427);
	v->a[63041] = 1;
	v->a[63042] = aux_sym_concatenation_token1;
	v->a[63043] = actions(3429);
	v->a[63044] = 1;
	v->a[63045] = sym__concat;
	v->a[63046] = state(1334);
	v->a[63047] = 1;
	v->a[63048] = aux_sym_concatenation_repeat1;
	v->a[63049] = actions(3040);
	v->a[63050] = 5;
	v->a[63051] = sym_file_descriptor;
	v->a[63052] = sym_test_operator;
	v->a[63053] = sym__bare_dollar;
	v->a[63054] = sym__brace_start;
	v->a[63055] = aux_sym_heredoc_redirect_token1;
	v->a[63056] = actions(3038);
	v->a[63057] = 28;
	v->a[63058] = anon_sym_PIPE;
	v->a[63059] = anon_sym_PIPE_AMP;
	small_parse_table_3153(v);
}

void	small_parse_table_3153(t_small_parse_table_array *v)
{
	v->a[63060] = anon_sym_AMP_AMP;
	v->a[63061] = anon_sym_PIPE_PIPE;
	v->a[63062] = anon_sym_LT;
	v->a[63063] = anon_sym_GT;
	v->a[63064] = anon_sym_GT_GT;
	v->a[63065] = anon_sym_AMP_GT;
	v->a[63066] = anon_sym_AMP_GT_GT;
	v->a[63067] = anon_sym_LT_AMP;
	v->a[63068] = anon_sym_GT_AMP;
	v->a[63069] = anon_sym_GT_PIPE;
	v->a[63070] = anon_sym_LT_AMP_DASH;
	v->a[63071] = anon_sym_GT_AMP_DASH;
	v->a[63072] = anon_sym_LT_LT;
	v->a[63073] = anon_sym_LT_LT_DASH;
	v->a[63074] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63075] = anon_sym_DOLLAR;
	v->a[63076] = sym__special_character;
	v->a[63077] = anon_sym_DQUOTE;
	v->a[63078] = sym_raw_string;
	v->a[63079] = aux_sym_number_token1;
	small_parse_table_3154(v);
}

void	small_parse_table_3154(t_small_parse_table_array *v)
{
	v->a[63080] = aux_sym_number_token2;
	v->a[63081] = anon_sym_DOLLAR_LBRACE;
	v->a[63082] = anon_sym_DOLLAR_LPAREN;
	v->a[63083] = anon_sym_BQUOTE;
	v->a[63084] = anon_sym_DOLLAR_BQUOTE;
	v->a[63085] = sym_word;
	v->a[63086] = 6;
	v->a[63087] = actions(3);
	v->a[63088] = 1;
	v->a[63089] = sym_comment;
	v->a[63090] = actions(3423);
	v->a[63091] = 1;
	v->a[63092] = aux_sym_concatenation_token1;
	v->a[63093] = actions(3425);
	v->a[63094] = 1;
	v->a[63095] = sym__concat;
	v->a[63096] = state(1344);
	v->a[63097] = 1;
	v->a[63098] = aux_sym_concatenation_repeat1;
	v->a[63099] = actions(1182);
	small_parse_table_3155(v);
}

/* EOF small_parse_table_630.c */
