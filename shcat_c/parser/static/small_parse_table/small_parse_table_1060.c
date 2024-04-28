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
	v->a[106000] = sym_variable_name;
	v->a[106001] = sym_test_operator;
	v->a[106002] = sym__brace_start;
	v->a[106003] = actions(5821);
	v->a[106004] = 9;
	v->a[106005] = anon_sym_SEMI;
	v->a[106006] = anon_sym_PIPE_PIPE;
	v->a[106007] = anon_sym_AMP_AMP;
	v->a[106008] = anon_sym_PIPE;
	v->a[106009] = anon_sym_AMP;
	v->a[106010] = anon_sym_LT_LT;
	v->a[106011] = anon_sym_SEMI_SEMI;
	v->a[106012] = anon_sym_PIPE_AMP;
	v->a[106013] = anon_sym_LT_LT_DASH;
	v->a[106014] = actions(5823);
	v->a[106015] = 11;
	v->a[106016] = anon_sym_LT;
	v->a[106017] = anon_sym_GT;
	v->a[106018] = anon_sym_GT_GT;
	v->a[106019] = anon_sym_AMP_GT;
	small_parse_table_5301(v);
}

void	small_parse_table_5301(t_small_parse_table_array *v)
{
	v->a[106020] = anon_sym_AMP_GT_GT;
	v->a[106021] = anon_sym_LT_AMP;
	v->a[106022] = anon_sym_GT_AMP;
	v->a[106023] = anon_sym_GT_PIPE;
	v->a[106024] = anon_sym_LT_AMP_DASH;
	v->a[106025] = anon_sym_GT_AMP_DASH;
	v->a[106026] = anon_sym_LT_LT_LT;
	v->a[106027] = actions(5819);
	v->a[106028] = 17;
	v->a[106029] = anon_sym_LPAREN_LPAREN;
	v->a[106030] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[106031] = anon_sym_DOLLAR_LBRACK;
	v->a[106032] = anon_sym_DOLLAR;
	v->a[106033] = sym__special_character;
	v->a[106034] = anon_sym_DQUOTE;
	v->a[106035] = sym_raw_string;
	v->a[106036] = sym_ansi_c_string;
	v->a[106037] = aux_sym_number_token1;
	v->a[106038] = aux_sym_number_token2;
	v->a[106039] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_5302(v);
}

void	small_parse_table_5302(t_small_parse_table_array *v)
{
	v->a[106040] = anon_sym_DOLLAR_LPAREN;
	v->a[106041] = anon_sym_BQUOTE;
	v->a[106042] = anon_sym_DOLLAR_BQUOTE;
	v->a[106043] = anon_sym_LT_LPAREN;
	v->a[106044] = anon_sym_GT_LPAREN;
	v->a[106045] = sym_word;
	v->a[106046] = 8;
	v->a[106047] = actions(3);
	v->a[106048] = 1;
	v->a[106049] = sym_comment;
	v->a[106050] = actions(5826);
	v->a[106051] = 1;
	v->a[106052] = aux_sym_heredoc_redirect_token1;
	v->a[106053] = actions(5828);
	v->a[106054] = 1;
	v->a[106055] = sym_file_descriptor;
	v->a[106056] = actions(6169);
	v->a[106057] = 1;
	v->a[106058] = anon_sym_RPAREN;
	v->a[106059] = actions(5831);
	small_parse_table_5303(v);
}

void	small_parse_table_5303(t_small_parse_table_array *v)
{
	v->a[106060] = 3;
	v->a[106061] = sym_variable_name;
	v->a[106062] = sym_test_operator;
	v->a[106063] = sym__brace_start;
	v->a[106064] = actions(5821);
	v->a[106065] = 9;
	v->a[106066] = anon_sym_SEMI;
	v->a[106067] = anon_sym_PIPE_PIPE;
	v->a[106068] = anon_sym_AMP_AMP;
	v->a[106069] = anon_sym_PIPE;
	v->a[106070] = anon_sym_AMP;
	v->a[106071] = anon_sym_LT_LT;
	v->a[106072] = anon_sym_SEMI_SEMI;
	v->a[106073] = anon_sym_PIPE_AMP;
	v->a[106074] = anon_sym_LT_LT_DASH;
	v->a[106075] = actions(5823);
	v->a[106076] = 11;
	v->a[106077] = anon_sym_LT;
	v->a[106078] = anon_sym_GT;
	v->a[106079] = anon_sym_GT_GT;
	small_parse_table_5304(v);
}

void	small_parse_table_5304(t_small_parse_table_array *v)
{
	v->a[106080] = anon_sym_AMP_GT;
	v->a[106081] = anon_sym_AMP_GT_GT;
	v->a[106082] = anon_sym_LT_AMP;
	v->a[106083] = anon_sym_GT_AMP;
	v->a[106084] = anon_sym_GT_PIPE;
	v->a[106085] = anon_sym_LT_AMP_DASH;
	v->a[106086] = anon_sym_GT_AMP_DASH;
	v->a[106087] = anon_sym_LT_LT_LT;
	v->a[106088] = actions(5819);
	v->a[106089] = 17;
	v->a[106090] = anon_sym_LPAREN_LPAREN;
	v->a[106091] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[106092] = anon_sym_DOLLAR_LBRACK;
	v->a[106093] = anon_sym_DOLLAR;
	v->a[106094] = sym__special_character;
	v->a[106095] = anon_sym_DQUOTE;
	v->a[106096] = sym_raw_string;
	v->a[106097] = sym_ansi_c_string;
	v->a[106098] = aux_sym_number_token1;
	v->a[106099] = aux_sym_number_token2;
	small_parse_table_5305(v);
}

/* EOF small_parse_table_1060.c */
