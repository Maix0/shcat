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
	v->a[76000] = 1;
	v->a[76001] = sym__special_character;
	v->a[76002] = state(1579);
	v->a[76003] = 1;
	v->a[76004] = aux_sym__literal_repeat1;
	v->a[76005] = actions(3324);
	v->a[76006] = 12;
	v->a[76007] = anon_sym_PIPE;
	v->a[76008] = anon_sym_LT;
	v->a[76009] = anon_sym_GT;
	v->a[76010] = anon_sym_AMP_GT;
	v->a[76011] = anon_sym_LT_AMP;
	v->a[76012] = anon_sym_GT_AMP;
	v->a[76013] = anon_sym_LT_LT;
	v->a[76014] = anon_sym_DOLLAR;
	v->a[76015] = aux_sym_number_token1;
	v->a[76016] = aux_sym_number_token2;
	v->a[76017] = anon_sym_DOLLAR_LPAREN;
	v->a[76018] = sym_word;
	v->a[76019] = actions(3326);
	small_parse_table_3801(v);
}

void	small_parse_table_3801(t_small_parse_table_array *v)
{
	v->a[76020] = 20;
	v->a[76021] = sym_file_descriptor;
	v->a[76022] = sym_test_operator;
	v->a[76023] = sym__bare_dollar;
	v->a[76024] = sym__brace_start;
	v->a[76025] = anon_sym_LPAREN;
	v->a[76026] = anon_sym_PIPE_AMP;
	v->a[76027] = anon_sym_AMP_AMP;
	v->a[76028] = anon_sym_PIPE_PIPE;
	v->a[76029] = anon_sym_GT_GT;
	v->a[76030] = anon_sym_AMP_GT_GT;
	v->a[76031] = anon_sym_GT_PIPE;
	v->a[76032] = anon_sym_LT_AMP_DASH;
	v->a[76033] = anon_sym_GT_AMP_DASH;
	v->a[76034] = anon_sym_LT_LT_DASH;
	v->a[76035] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76036] = anon_sym_DQUOTE;
	v->a[76037] = sym_raw_string;
	v->a[76038] = anon_sym_DOLLAR_LBRACE;
	v->a[76039] = anon_sym_BQUOTE;
	small_parse_table_3802(v);
}

void	small_parse_table_3802(t_small_parse_table_array *v)
{
	v->a[76040] = anon_sym_DOLLAR_BQUOTE;
	v->a[76041] = 3;
	v->a[76042] = actions(57);
	v->a[76043] = 1;
	v->a[76044] = sym_comment;
	v->a[76045] = actions(3060);
	v->a[76046] = 13;
	v->a[76047] = anon_sym_PIPE;
	v->a[76048] = anon_sym_LT;
	v->a[76049] = anon_sym_GT;
	v->a[76050] = anon_sym_AMP_GT;
	v->a[76051] = anon_sym_LT_AMP;
	v->a[76052] = anon_sym_GT_AMP;
	v->a[76053] = anon_sym_LT_LT;
	v->a[76054] = anon_sym_DOLLAR;
	v->a[76055] = aux_sym_number_token1;
	v->a[76056] = aux_sym_number_token2;
	v->a[76057] = anon_sym_DOLLAR_LPAREN;
	v->a[76058] = anon_sym_BQUOTE;
	v->a[76059] = sym_word;
	small_parse_table_3803(v);
}

void	small_parse_table_3803(t_small_parse_table_array *v)
{
	v->a[76060] = actions(3062);
	v->a[76061] = 21;
	v->a[76062] = sym_file_descriptor;
	v->a[76063] = sym__concat;
	v->a[76064] = sym_test_operator;
	v->a[76065] = sym__bare_dollar;
	v->a[76066] = sym__brace_start;
	v->a[76067] = anon_sym_PIPE_AMP;
	v->a[76068] = anon_sym_AMP_AMP;
	v->a[76069] = anon_sym_PIPE_PIPE;
	v->a[76070] = anon_sym_GT_GT;
	v->a[76071] = anon_sym_AMP_GT_GT;
	v->a[76072] = anon_sym_GT_PIPE;
	v->a[76073] = anon_sym_LT_AMP_DASH;
	v->a[76074] = anon_sym_GT_AMP_DASH;
	v->a[76075] = anon_sym_LT_LT_DASH;
	v->a[76076] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76077] = aux_sym_concatenation_token1;
	v->a[76078] = sym__special_character;
	v->a[76079] = anon_sym_DQUOTE;
	small_parse_table_3804(v);
}

void	small_parse_table_3804(t_small_parse_table_array *v)
{
	v->a[76080] = sym_raw_string;
	v->a[76081] = anon_sym_DOLLAR_LBRACE;
	v->a[76082] = anon_sym_DOLLAR_BQUOTE;
	v->a[76083] = 6;
	v->a[76084] = actions(57);
	v->a[76085] = 1;
	v->a[76086] = sym_comment;
	v->a[76087] = actions(4441);
	v->a[76088] = 1;
	v->a[76089] = aux_sym_concatenation_token1;
	v->a[76090] = actions(4466);
	v->a[76091] = 1;
	v->a[76092] = sym__concat;
	v->a[76093] = state(1561);
	v->a[76094] = 1;
	v->a[76095] = aux_sym_concatenation_repeat1;
	v->a[76096] = actions(2688);
	v->a[76097] = 13;
	v->a[76098] = anon_sym_PIPE;
	v->a[76099] = anon_sym_LT;
	small_parse_table_3805(v);
}

/* EOF small_parse_table_760.c */
