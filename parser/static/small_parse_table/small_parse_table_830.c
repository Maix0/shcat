/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_830.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4150(t_small_parse_table_array *v)
{
	v->a[83000] = 1;
	v->a[83001] = anon_sym_DOLLAR_LPAREN;
	v->a[83002] = actions(869);
	v->a[83003] = 1;
	v->a[83004] = anon_sym_BQUOTE;
	v->a[83005] = state(1379);
	v->a[83006] = 2;
	v->a[83007] = sym_concatenation;
	v->a[83008] = aux_sym_for_statement_repeat1;
	v->a[83009] = actions(2479);
	v->a[83010] = 3;
	v->a[83011] = sym_raw_string;
	v->a[83012] = sym_number;
	v->a[83013] = sym_word;
	v->a[83014] = state(1669);
	v->a[83015] = 5;
	v->a[83016] = sym_arithmetic_expansion;
	v->a[83017] = sym_string;
	v->a[83018] = sym_simple_expansion;
	v->a[83019] = sym_expansion;
	small_parse_table_4151(v);
}

void	small_parse_table_4151(t_small_parse_table_array *v)
{
	v->a[83020] = sym_command_substitution;
	v->a[83021] = 3;
	v->a[83022] = actions(1074);
	v->a[83023] = 1;
	v->a[83024] = sym_comment;
	v->a[83025] = actions(546);
	v->a[83026] = 7;
	v->a[83027] = anon_sym_PIPE;
	v->a[83028] = anon_sym_LT;
	v->a[83029] = anon_sym_GT;
	v->a[83030] = anon_sym_AMP_GT;
	v->a[83031] = anon_sym_LT_AMP;
	v->a[83032] = anon_sym_GT_AMP;
	v->a[83033] = anon_sym_LT_LT;
	v->a[83034] = actions(548);
	v->a[83035] = 9;
	v->a[83036] = sym_file_descriptor;
	v->a[83037] = anon_sym_AMP_AMP;
	v->a[83038] = anon_sym_PIPE_PIPE;
	v->a[83039] = anon_sym_GT_GT;
	small_parse_table_4152(v);
}

void	small_parse_table_4152(t_small_parse_table_array *v)
{
	v->a[83040] = anon_sym_AMP_GT_GT;
	v->a[83041] = anon_sym_GT_PIPE;
	v->a[83042] = anon_sym_LT_AMP_DASH;
	v->a[83043] = anon_sym_GT_AMP_DASH;
	v->a[83044] = anon_sym_LT_LT_DASH;
	v->a[83045] = 3;
	v->a[83046] = actions(1074);
	v->a[83047] = 1;
	v->a[83048] = sym_comment;
	v->a[83049] = actions(1594);
	v->a[83050] = 7;
	v->a[83051] = anon_sym_PIPE;
	v->a[83052] = anon_sym_LT;
	v->a[83053] = anon_sym_GT;
	v->a[83054] = anon_sym_AMP_GT;
	v->a[83055] = anon_sym_LT_AMP;
	v->a[83056] = anon_sym_GT_AMP;
	v->a[83057] = anon_sym_LT_LT;
	v->a[83058] = actions(1592);
	v->a[83059] = 9;
	small_parse_table_4153(v);
}

void	small_parse_table_4153(t_small_parse_table_array *v)
{
	v->a[83060] = sym_file_descriptor;
	v->a[83061] = anon_sym_AMP_AMP;
	v->a[83062] = anon_sym_PIPE_PIPE;
	v->a[83063] = anon_sym_GT_GT;
	v->a[83064] = anon_sym_AMP_GT_GT;
	v->a[83065] = anon_sym_GT_PIPE;
	v->a[83066] = anon_sym_LT_AMP_DASH;
	v->a[83067] = anon_sym_GT_AMP_DASH;
	v->a[83068] = anon_sym_LT_LT_DASH;
	v->a[83069] = 3;
	v->a[83070] = actions(1074);
	v->a[83071] = 1;
	v->a[83072] = sym_comment;
	v->a[83073] = actions(1594);
	v->a[83074] = 7;
	v->a[83075] = anon_sym_PIPE;
	v->a[83076] = anon_sym_LT;
	v->a[83077] = anon_sym_GT;
	v->a[83078] = anon_sym_AMP_GT;
	v->a[83079] = anon_sym_LT_AMP;
	small_parse_table_4154(v);
}

void	small_parse_table_4154(t_small_parse_table_array *v)
{
	v->a[83080] = anon_sym_GT_AMP;
	v->a[83081] = anon_sym_LT_LT;
	v->a[83082] = actions(1592);
	v->a[83083] = 9;
	v->a[83084] = sym_file_descriptor;
	v->a[83085] = anon_sym_AMP_AMP;
	v->a[83086] = anon_sym_PIPE_PIPE;
	v->a[83087] = anon_sym_GT_GT;
	v->a[83088] = anon_sym_AMP_GT_GT;
	v->a[83089] = anon_sym_GT_PIPE;
	v->a[83090] = anon_sym_LT_AMP_DASH;
	v->a[83091] = anon_sym_GT_AMP_DASH;
	v->a[83092] = anon_sym_LT_LT_DASH;
	v->a[83093] = 3;
	v->a[83094] = actions(1074);
	v->a[83095] = 1;
	v->a[83096] = sym_comment;
	v->a[83097] = actions(2398);
	v->a[83098] = 7;
	v->a[83099] = anon_sym_PIPE;
	small_parse_table_4155(v);
}

/* EOF small_parse_table_830.c */
