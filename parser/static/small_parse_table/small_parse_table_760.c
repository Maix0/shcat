/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_760.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3800(t_small_parse_table_array *v)
{
	v->a[76000] = sym_string;
	v->a[76001] = sym_simple_expansion;
	v->a[76002] = sym_expansion;
	v->a[76003] = sym_command_substitution;
	v->a[76004] = 12;
	v->a[76005] = actions(3);
	v->a[76006] = 1;
	v->a[76007] = sym_comment;
	v->a[76008] = actions(2850);
	v->a[76009] = 1;
	v->a[76010] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76011] = actions(2852);
	v->a[76012] = 1;
	v->a[76013] = anon_sym_DOLLAR;
	v->a[76014] = actions(2854);
	v->a[76015] = 1;
	v->a[76016] = anon_sym_DQUOTE;
	v->a[76017] = actions(2856);
	v->a[76018] = 1;
	v->a[76019] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3801(v);
}

void	small_parse_table_3801(t_small_parse_table_array *v)
{
	v->a[76020] = actions(2858);
	v->a[76021] = 1;
	v->a[76022] = anon_sym_DOLLAR_LPAREN;
	v->a[76023] = actions(2860);
	v->a[76024] = 1;
	v->a[76025] = anon_sym_BQUOTE;
	v->a[76026] = actions(2866);
	v->a[76027] = 1;
	v->a[76028] = sym__comment_word;
	v->a[76029] = actions(2868);
	v->a[76030] = 1;
	v->a[76031] = sym__empty_value;
	v->a[76032] = state(709);
	v->a[76033] = 1;
	v->a[76034] = sym_concatenation;
	v->a[76035] = actions(2864);
	v->a[76036] = 3;
	v->a[76037] = sym_raw_string;
	v->a[76038] = sym_number;
	v->a[76039] = sym_word;
	small_parse_table_3802(v);
}

void	small_parse_table_3802(t_small_parse_table_array *v)
{
	v->a[76040] = state(399);
	v->a[76041] = 5;
	v->a[76042] = sym_arithmetic_expansion;
	v->a[76043] = sym_string;
	v->a[76044] = sym_simple_expansion;
	v->a[76045] = sym_expansion;
	v->a[76046] = sym_command_substitution;
	v->a[76047] = 5;
	v->a[76048] = actions(870);
	v->a[76049] = 1;
	v->a[76050] = sym_comment;
	v->a[76051] = state(1505);
	v->a[76052] = 1;
	v->a[76053] = aux_sym_concatenation_repeat1;
	v->a[76054] = actions(2840);
	v->a[76055] = 2;
	v->a[76056] = sym__concat;
	v->a[76057] = aux_sym_concatenation_token1;
	v->a[76058] = actions(573);
	v->a[76059] = 6;
	small_parse_table_3803(v);
}

void	small_parse_table_3803(t_small_parse_table_array *v)
{
	v->a[76060] = anon_sym_PIPE;
	v->a[76061] = anon_sym_LT;
	v->a[76062] = anon_sym_GT;
	v->a[76063] = anon_sym_LT_AMP;
	v->a[76064] = anon_sym_GT_AMP;
	v->a[76065] = anon_sym_LT_LT;
	v->a[76066] = actions(575);
	v->a[76067] = 8;
	v->a[76068] = sym_file_descriptor;
	v->a[76069] = anon_sym_AMP_AMP;
	v->a[76070] = anon_sym_PIPE_PIPE;
	v->a[76071] = anon_sym_GT_GT;
	v->a[76072] = anon_sym_GT_PIPE;
	v->a[76073] = anon_sym_LT_AMP_DASH;
	v->a[76074] = anon_sym_GT_AMP_DASH;
	v->a[76075] = anon_sym_LT_LT_DASH;
	v->a[76076] = 12;
	v->a[76077] = actions(3);
	v->a[76078] = 1;
	v->a[76079] = sym_comment;
	small_parse_table_3804(v);
}

void	small_parse_table_3804(t_small_parse_table_array *v)
{
	v->a[76080] = actions(2663);
	v->a[76081] = 1;
	v->a[76082] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76083] = actions(2667);
	v->a[76084] = 1;
	v->a[76085] = anon_sym_DQUOTE;
	v->a[76086] = actions(2669);
	v->a[76087] = 1;
	v->a[76088] = anon_sym_DOLLAR_LBRACE;
	v->a[76089] = actions(2671);
	v->a[76090] = 1;
	v->a[76091] = anon_sym_DOLLAR_LPAREN;
	v->a[76092] = actions(2673);
	v->a[76093] = 1;
	v->a[76094] = anon_sym_BQUOTE;
	v->a[76095] = actions(2830);
	v->a[76096] = 1;
	v->a[76097] = anon_sym_DOLLAR;
	v->a[76098] = actions(2832);
	v->a[76099] = 1;
	small_parse_table_3805(v);
}

/* EOF small_parse_table_760.c */
