/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_160.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_800(t_small_parse_table_array *v)
{
	v->a[16000] = state(2716);
	v->a[16001] = 7;
	v->a[16002] = sym_arithmetic_expansion;
	v->a[16003] = sym_brace_expression;
	v->a[16004] = sym_string;
	v->a[16005] = sym_number;
	v->a[16006] = sym_simple_expansion;
	v->a[16007] = sym_expansion;
	v->a[16008] = sym_command_substitution;
	v->a[16009] = actions(2452);
	v->a[16010] = 8;
	v->a[16011] = anon_sym_LT;
	v->a[16012] = anon_sym_GT;
	v->a[16013] = anon_sym_GT_GT;
	v->a[16014] = anon_sym_AMP_GT;
	v->a[16015] = anon_sym_AMP_GT_GT;
	v->a[16016] = anon_sym_LT_AMP;
	v->a[16017] = anon_sym_GT_AMP;
	v->a[16018] = anon_sym_GT_PIPE;
	v->a[16019] = 23;
	small_parse_table_801(v);
}

void	small_parse_table_801(t_small_parse_table_array *v)
{
	v->a[16020] = actions(57);
	v->a[16021] = 1;
	v->a[16022] = sym_comment;
	v->a[16023] = actions(643);
	v->a[16024] = 1;
	v->a[16025] = anon_sym_LPAREN;
	v->a[16026] = actions(2484);
	v->a[16027] = 1;
	v->a[16028] = sym_word;
	v->a[16029] = actions(2486);
	v->a[16030] = 1;
	v->a[16031] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16032] = actions(2488);
	v->a[16033] = 1;
	v->a[16034] = anon_sym_DOLLAR;
	v->a[16035] = actions(2490);
	v->a[16036] = 1;
	v->a[16037] = sym__special_character;
	v->a[16038] = actions(2492);
	v->a[16039] = 1;
	small_parse_table_802(v);
}

void	small_parse_table_802(t_small_parse_table_array *v)
{
	v->a[16040] = anon_sym_DQUOTE;
	v->a[16041] = actions(2496);
	v->a[16042] = 1;
	v->a[16043] = aux_sym_number_token1;
	v->a[16044] = actions(2498);
	v->a[16045] = 1;
	v->a[16046] = aux_sym_number_token2;
	v->a[16047] = actions(2500);
	v->a[16048] = 1;
	v->a[16049] = anon_sym_DOLLAR_LBRACE;
	v->a[16050] = actions(2502);
	v->a[16051] = 1;
	v->a[16052] = anon_sym_DOLLAR_LPAREN;
	v->a[16053] = actions(2504);
	v->a[16054] = 1;
	v->a[16055] = anon_sym_BQUOTE;
	v->a[16056] = actions(2506);
	v->a[16057] = 1;
	v->a[16058] = anon_sym_DOLLAR_BQUOTE;
	v->a[16059] = actions(2508);
	small_parse_table_803(v);
}

void	small_parse_table_803(t_small_parse_table_array *v)
{
	v->a[16060] = 1;
	v->a[16061] = sym__bare_dollar;
	v->a[16062] = actions(2510);
	v->a[16063] = 1;
	v->a[16064] = sym__brace_start;
	v->a[16065] = state(530);
	v->a[16066] = 1;
	v->a[16067] = aux_sym_command_repeat2;
	v->a[16068] = state(1645);
	v->a[16069] = 1;
	v->a[16070] = aux_sym__literal_repeat1;
	v->a[16071] = state(1676);
	v->a[16072] = 1;
	v->a[16073] = sym_concatenation;
	v->a[16074] = state(2757);
	v->a[16075] = 1;
	v->a[16076] = sym_subshell;
	v->a[16077] = actions(2494);
	v->a[16078] = 2;
	v->a[16079] = sym_test_operator;
	small_parse_table_804(v);
}

void	small_parse_table_804(t_small_parse_table_array *v)
{
	v->a[16080] = sym_raw_string;
	v->a[16081] = actions(757);
	v->a[16082] = 7;
	v->a[16083] = anon_sym_PIPE;
	v->a[16084] = anon_sym_LT;
	v->a[16085] = anon_sym_GT;
	v->a[16086] = anon_sym_AMP_GT;
	v->a[16087] = anon_sym_LT_AMP;
	v->a[16088] = anon_sym_GT_AMP;
	v->a[16089] = anon_sym_LT_LT;
	v->a[16090] = state(1452);
	v->a[16091] = 7;
	v->a[16092] = sym_arithmetic_expansion;
	v->a[16093] = sym_brace_expression;
	v->a[16094] = sym_string;
	v->a[16095] = sym_number;
	v->a[16096] = sym_simple_expansion;
	v->a[16097] = sym_expansion;
	v->a[16098] = sym_command_substitution;
	v->a[16099] = actions(759);
	small_parse_table_805(v);
}

/* EOF small_parse_table_160.c */
