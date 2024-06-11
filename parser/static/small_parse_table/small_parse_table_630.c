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
	v->a[63000] = anon_sym_AMP_AMP;
	v->a[63001] = anon_sym_PIPE_PIPE;
	v->a[63002] = anon_sym_LT;
	v->a[63003] = anon_sym_GT;
	v->a[63004] = anon_sym_GT_GT;
	v->a[63005] = anon_sym_AMP_GT;
	v->a[63006] = anon_sym_AMP_GT_GT;
	v->a[63007] = anon_sym_LT_AMP;
	v->a[63008] = anon_sym_GT_AMP;
	v->a[63009] = anon_sym_GT_PIPE;
	v->a[63010] = anon_sym_LT_AMP_DASH;
	v->a[63011] = anon_sym_GT_AMP_DASH;
	v->a[63012] = anon_sym_LT_LT;
	v->a[63013] = anon_sym_LT_LT_DASH;
	v->a[63014] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63015] = aux_sym_concatenation_token1;
	v->a[63016] = anon_sym_DOLLAR;
	v->a[63017] = anon_sym_DQUOTE;
	v->a[63018] = sym_raw_string;
	v->a[63019] = sym_number;
	small_parse_table_3151(v);
}

void	small_parse_table_3151(t_small_parse_table_array *v)
{
	v->a[63020] = anon_sym_DOLLAR_LBRACE;
	v->a[63021] = anon_sym_DOLLAR_LPAREN;
	v->a[63022] = anon_sym_BQUOTE;
	v->a[63023] = sym_word;
	v->a[63024] = 5;
	v->a[63025] = actions(3);
	v->a[63026] = 1;
	v->a[63027] = sym_comment;
	v->a[63028] = state(1534);
	v->a[63029] = 1;
	v->a[63030] = sym_concatenation;
	v->a[63031] = actions(713);
	v->a[63032] = 2;
	v->a[63033] = sym_file_descriptor;
	v->a[63034] = sym_variable_name;
	v->a[63035] = state(1235);
	v->a[63036] = 5;
	v->a[63037] = sym_arithmetic_expansion;
	v->a[63038] = sym_string;
	v->a[63039] = sym_simple_expansion;
	small_parse_table_3152(v);
}

void	small_parse_table_3152(t_small_parse_table_array *v)
{
	v->a[63040] = sym_expansion;
	v->a[63041] = sym_command_substitution;
	v->a[63042] = actions(715);
	v->a[63043] = 19;
	v->a[63044] = anon_sym_LT;
	v->a[63045] = anon_sym_GT;
	v->a[63046] = anon_sym_GT_GT;
	v->a[63047] = anon_sym_AMP_GT;
	v->a[63048] = anon_sym_AMP_GT_GT;
	v->a[63049] = anon_sym_LT_AMP;
	v->a[63050] = anon_sym_GT_AMP;
	v->a[63051] = anon_sym_GT_PIPE;
	v->a[63052] = anon_sym_LT_AMP_DASH;
	v->a[63053] = anon_sym_GT_AMP_DASH;
	v->a[63054] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63055] = anon_sym_DOLLAR;
	v->a[63056] = anon_sym_DQUOTE;
	v->a[63057] = sym_raw_string;
	v->a[63058] = sym_number;
	v->a[63059] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3153(v);
}

void	small_parse_table_3153(t_small_parse_table_array *v)
{
	v->a[63060] = anon_sym_DOLLAR_LPAREN;
	v->a[63061] = anon_sym_BQUOTE;
	v->a[63062] = sym_word;
	v->a[63063] = 3;
	v->a[63064] = actions(3);
	v->a[63065] = 1;
	v->a[63066] = sym_comment;
	v->a[63067] = actions(1141);
	v->a[63068] = 2;
	v->a[63069] = sym_file_descriptor;
	v->a[63070] = sym__concat;
	v->a[63071] = actions(1139);
	v->a[63072] = 25;
	v->a[63073] = anon_sym_PIPE;
	v->a[63074] = anon_sym_AMP_AMP;
	v->a[63075] = anon_sym_PIPE_PIPE;
	v->a[63076] = anon_sym_LT;
	v->a[63077] = anon_sym_GT;
	v->a[63078] = anon_sym_GT_GT;
	v->a[63079] = anon_sym_AMP_GT;
	small_parse_table_3154(v);
}

void	small_parse_table_3154(t_small_parse_table_array *v)
{
	v->a[63080] = anon_sym_AMP_GT_GT;
	v->a[63081] = anon_sym_LT_AMP;
	v->a[63082] = anon_sym_GT_AMP;
	v->a[63083] = anon_sym_GT_PIPE;
	v->a[63084] = anon_sym_LT_AMP_DASH;
	v->a[63085] = anon_sym_GT_AMP_DASH;
	v->a[63086] = anon_sym_LT_LT;
	v->a[63087] = anon_sym_LT_LT_DASH;
	v->a[63088] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63089] = aux_sym_concatenation_token1;
	v->a[63090] = anon_sym_DOLLAR;
	v->a[63091] = anon_sym_DQUOTE;
	v->a[63092] = sym_raw_string;
	v->a[63093] = sym_number;
	v->a[63094] = anon_sym_DOLLAR_LBRACE;
	v->a[63095] = anon_sym_DOLLAR_LPAREN;
	v->a[63096] = anon_sym_BQUOTE;
	v->a[63097] = sym_word;
	v->a[63098] = 3;
	v->a[63099] = actions(3);
	small_parse_table_3155(v);
}

/* EOF small_parse_table_630.c */
