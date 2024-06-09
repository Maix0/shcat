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
	v->a[76000] = anon_sym_AMP_GT;
	v->a[76001] = anon_sym_LT_AMP;
	v->a[76002] = anon_sym_GT_AMP;
	v->a[76003] = anon_sym_LT_LT;
	v->a[76004] = actions(1194);
	v->a[76005] = 12;
	v->a[76006] = sym_file_descriptor;
	v->a[76007] = sym__concat;
	v->a[76008] = sym_variable_name;
	v->a[76009] = anon_sym_AMP_AMP;
	v->a[76010] = anon_sym_PIPE_PIPE;
	v->a[76011] = anon_sym_GT_GT;
	v->a[76012] = anon_sym_AMP_GT_GT;
	v->a[76013] = anon_sym_GT_PIPE;
	v->a[76014] = anon_sym_LT_AMP_DASH;
	v->a[76015] = anon_sym_GT_AMP_DASH;
	v->a[76016] = anon_sym_LT_LT_DASH;
	v->a[76017] = aux_sym_concatenation_token1;
	v->a[76018] = 12;
	v->a[76019] = actions(3);
	small_parse_table_3801(v);
}

void	small_parse_table_3801(t_small_parse_table_array *v)
{
	v->a[76020] = 1;
	v->a[76021] = sym_comment;
	v->a[76022] = actions(383);
	v->a[76023] = 1;
	v->a[76024] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76025] = actions(385);
	v->a[76026] = 1;
	v->a[76027] = anon_sym_DOLLAR;
	v->a[76028] = actions(387);
	v->a[76029] = 1;
	v->a[76030] = anon_sym_DQUOTE;
	v->a[76031] = actions(391);
	v->a[76032] = 1;
	v->a[76033] = aux_sym_number_token1;
	v->a[76034] = actions(393);
	v->a[76035] = 1;
	v->a[76036] = aux_sym_number_token2;
	v->a[76037] = actions(395);
	v->a[76038] = 1;
	v->a[76039] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3802(v);
}

void	small_parse_table_3802(t_small_parse_table_array *v)
{
	v->a[76040] = actions(397);
	v->a[76041] = 1;
	v->a[76042] = anon_sym_DOLLAR_LPAREN;
	v->a[76043] = actions(399);
	v->a[76044] = 1;
	v->a[76045] = anon_sym_BQUOTE;
	v->a[76046] = actions(3069);
	v->a[76047] = 1;
	v->a[76048] = sym__bare_dollar;
	v->a[76049] = actions(3067);
	v->a[76050] = 3;
	v->a[76051] = sym_raw_string;
	v->a[76052] = sym__comment_word;
	v->a[76053] = sym_word;
	v->a[76054] = state(804);
	v->a[76055] = 6;
	v->a[76056] = sym_arithmetic_expansion;
	v->a[76057] = sym_string;
	v->a[76058] = sym_number;
	v->a[76059] = sym_simple_expansion;
	small_parse_table_3803(v);
}

void	small_parse_table_3803(t_small_parse_table_array *v)
{
	v->a[76060] = sym_expansion;
	v->a[76061] = sym_command_substitution;
	v->a[76062] = 12;
	v->a[76063] = actions(3);
	v->a[76064] = 1;
	v->a[76065] = sym_comment;
	v->a[76066] = actions(2873);
	v->a[76067] = 1;
	v->a[76068] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76069] = actions(2875);
	v->a[76070] = 1;
	v->a[76071] = anon_sym_DOLLAR;
	v->a[76072] = actions(2877);
	v->a[76073] = 1;
	v->a[76074] = anon_sym_DQUOTE;
	v->a[76075] = actions(2879);
	v->a[76076] = 1;
	v->a[76077] = aux_sym_number_token1;
	v->a[76078] = actions(2881);
	v->a[76079] = 1;
	small_parse_table_3804(v);
}

void	small_parse_table_3804(t_small_parse_table_array *v)
{
	v->a[76080] = aux_sym_number_token2;
	v->a[76081] = actions(2883);
	v->a[76082] = 1;
	v->a[76083] = anon_sym_DOLLAR_LBRACE;
	v->a[76084] = actions(2885);
	v->a[76085] = 1;
	v->a[76086] = anon_sym_DOLLAR_LPAREN;
	v->a[76087] = actions(2887);
	v->a[76088] = 1;
	v->a[76089] = anon_sym_BQUOTE;
	v->a[76090] = actions(3073);
	v->a[76091] = 1;
	v->a[76092] = sym__bare_dollar;
	v->a[76093] = actions(3071);
	v->a[76094] = 3;
	v->a[76095] = sym_raw_string;
	v->a[76096] = sym__comment_word;
	v->a[76097] = sym_word;
	v->a[76098] = state(956);
	v->a[76099] = 6;
	small_parse_table_3805(v);
}

/* EOF small_parse_table_760.c */
