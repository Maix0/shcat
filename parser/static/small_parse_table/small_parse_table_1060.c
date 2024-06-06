/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1060.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5300(t_small_parse_table_array *v)
{
	v->a[106000] = anon_sym_PIPE;
	v->a[106001] = anon_sym_SEMI_SEMI;
	v->a[106002] = anon_sym_SEMI_AMP;
	v->a[106003] = anon_sym_SEMI_SEMI_AMP;
	v->a[106004] = anon_sym_PIPE_AMP;
	v->a[106005] = anon_sym_AMP_AMP;
	v->a[106006] = anon_sym_PIPE_PIPE;
	v->a[106007] = anon_sym_LT;
	v->a[106008] = anon_sym_GT;
	v->a[106009] = anon_sym_GT_GT;
	v->a[106010] = anon_sym_AMP_GT;
	v->a[106011] = anon_sym_AMP_GT_GT;
	v->a[106012] = anon_sym_LT_AMP;
	v->a[106013] = anon_sym_GT_AMP;
	v->a[106014] = anon_sym_GT_PIPE;
	v->a[106015] = anon_sym_LT_AMP_DASH;
	v->a[106016] = anon_sym_GT_AMP_DASH;
	v->a[106017] = anon_sym_LT_LT;
	v->a[106018] = anon_sym_LT_LT_DASH;
	v->a[106019] = anon_sym_AMP;
	small_parse_table_5301(v);
}

void	small_parse_table_5301(t_small_parse_table_array *v)
{
	v->a[106020] = anon_sym_SEMI;
	v->a[106021] = 17;
	v->a[106022] = actions(57);
	v->a[106023] = 1;
	v->a[106024] = sym_comment;
	v->a[106025] = actions(5692);
	v->a[106026] = 1;
	v->a[106027] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[106028] = actions(5694);
	v->a[106029] = 1;
	v->a[106030] = anon_sym_DOLLAR;
	v->a[106031] = actions(5696);
	v->a[106032] = 1;
	v->a[106033] = sym__special_character;
	v->a[106034] = actions(5698);
	v->a[106035] = 1;
	v->a[106036] = anon_sym_DQUOTE;
	v->a[106037] = actions(5702);
	v->a[106038] = 1;
	v->a[106039] = aux_sym_number_token1;
	small_parse_table_5302(v);
}

void	small_parse_table_5302(t_small_parse_table_array *v)
{
	v->a[106040] = actions(5704);
	v->a[106041] = 1;
	v->a[106042] = aux_sym_number_token2;
	v->a[106043] = actions(5706);
	v->a[106044] = 1;
	v->a[106045] = anon_sym_DOLLAR_LBRACE;
	v->a[106046] = actions(5708);
	v->a[106047] = 1;
	v->a[106048] = anon_sym_DOLLAR_LPAREN;
	v->a[106049] = actions(5710);
	v->a[106050] = 1;
	v->a[106051] = anon_sym_BQUOTE;
	v->a[106052] = actions(5712);
	v->a[106053] = 1;
	v->a[106054] = anon_sym_DOLLAR_BQUOTE;
	v->a[106055] = actions(5718);
	v->a[106056] = 1;
	v->a[106057] = sym__brace_start;
	v->a[106058] = actions(6097);
	v->a[106059] = 1;
	small_parse_table_5303(v);
}

void	small_parse_table_5303(t_small_parse_table_array *v)
{
	v->a[106060] = sym_word;
	v->a[106061] = state(864);
	v->a[106062] = 1;
	v->a[106063] = aux_sym__literal_repeat1;
	v->a[106064] = actions(6099);
	v->a[106065] = 2;
	v->a[106066] = sym_test_operator;
	v->a[106067] = sym_raw_string;
	v->a[106068] = state(305);
	v->a[106069] = 2;
	v->a[106070] = sym_concatenation;
	v->a[106071] = aux_sym_for_statement_repeat1;
	v->a[106072] = state(577);
	v->a[106073] = 7;
	v->a[106074] = sym_arithmetic_expansion;
	v->a[106075] = sym_brace_expression;
	v->a[106076] = sym_string;
	v->a[106077] = sym_number;
	v->a[106078] = sym_simple_expansion;
	v->a[106079] = sym_expansion;
	small_parse_table_5304(v);
}

void	small_parse_table_5304(t_small_parse_table_array *v)
{
	v->a[106080] = sym_command_substitution;
	v->a[106081] = 17;
	v->a[106082] = actions(57);
	v->a[106083] = 1;
	v->a[106084] = sym_comment;
	v->a[106085] = actions(5692);
	v->a[106086] = 1;
	v->a[106087] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[106088] = actions(5694);
	v->a[106089] = 1;
	v->a[106090] = anon_sym_DOLLAR;
	v->a[106091] = actions(5696);
	v->a[106092] = 1;
	v->a[106093] = sym__special_character;
	v->a[106094] = actions(5698);
	v->a[106095] = 1;
	v->a[106096] = anon_sym_DQUOTE;
	v->a[106097] = actions(5702);
	v->a[106098] = 1;
	v->a[106099] = aux_sym_number_token1;
	small_parse_table_5305(v);
}

/* EOF small_parse_table_1060.c */
