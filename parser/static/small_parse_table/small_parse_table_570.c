/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_570.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2850(t_small_parse_table_array *v)
{
	v->a[57000] = aux_sym_number_token2;
	v->a[57001] = anon_sym_DOLLAR_LBRACE;
	v->a[57002] = anon_sym_DOLLAR_LPAREN;
	v->a[57003] = anon_sym_BQUOTE;
	v->a[57004] = anon_sym_DOLLAR_BQUOTE;
	v->a[57005] = sym_word;
	v->a[57006] = anon_sym_SEMI;
	v->a[57007] = 5;
	v->a[57008] = actions(3);
	v->a[57009] = 1;
	v->a[57010] = sym_comment;
	v->a[57011] = actions(3792);
	v->a[57012] = 1;
	v->a[57013] = sym__special_character;
	v->a[57014] = state(1234);
	v->a[57015] = 1;
	v->a[57016] = aux_sym__literal_repeat1;
	v->a[57017] = actions(3519);
	v->a[57018] = 6;
	v->a[57019] = sym_file_descriptor;
	small_parse_table_2851(v);
}

void	small_parse_table_2851(t_small_parse_table_array *v)
{
	v->a[57020] = sym_variable_name;
	v->a[57021] = sym_test_operator;
	v->a[57022] = sym__brace_start;
	v->a[57023] = ts_builtin_sym_end;
	v->a[57024] = aux_sym_heredoc_redirect_token1;
	v->a[57025] = actions(3517);
	v->a[57026] = 30;
	v->a[57027] = anon_sym_PIPE;
	v->a[57028] = anon_sym_SEMI_SEMI;
	v->a[57029] = anon_sym_PIPE_AMP;
	v->a[57030] = anon_sym_AMP_AMP;
	v->a[57031] = anon_sym_PIPE_PIPE;
	v->a[57032] = anon_sym_LT;
	v->a[57033] = anon_sym_GT;
	v->a[57034] = anon_sym_GT_GT;
	v->a[57035] = anon_sym_AMP_GT;
	v->a[57036] = anon_sym_AMP_GT_GT;
	v->a[57037] = anon_sym_LT_AMP;
	v->a[57038] = anon_sym_GT_AMP;
	v->a[57039] = anon_sym_GT_PIPE;
	small_parse_table_2852(v);
}

void	small_parse_table_2852(t_small_parse_table_array *v)
{
	v->a[57040] = anon_sym_LT_AMP_DASH;
	v->a[57041] = anon_sym_GT_AMP_DASH;
	v->a[57042] = anon_sym_LT_LT;
	v->a[57043] = anon_sym_LT_LT_DASH;
	v->a[57044] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57045] = anon_sym_AMP;
	v->a[57046] = anon_sym_DOLLAR;
	v->a[57047] = anon_sym_DQUOTE;
	v->a[57048] = sym_raw_string;
	v->a[57049] = aux_sym_number_token1;
	v->a[57050] = aux_sym_number_token2;
	v->a[57051] = anon_sym_DOLLAR_LBRACE;
	v->a[57052] = anon_sym_DOLLAR_LPAREN;
	v->a[57053] = anon_sym_BQUOTE;
	v->a[57054] = anon_sym_DOLLAR_BQUOTE;
	v->a[57055] = sym_word;
	v->a[57056] = anon_sym_SEMI;
	v->a[57057] = 3;
	v->a[57058] = actions(3);
	v->a[57059] = 1;
	small_parse_table_2853(v);
}

void	small_parse_table_2853(t_small_parse_table_array *v)
{
	v->a[57060] = sym_comment;
	v->a[57061] = actions(2664);
	v->a[57062] = 5;
	v->a[57063] = sym_file_descriptor;
	v->a[57064] = sym_test_operator;
	v->a[57065] = sym__bare_dollar;
	v->a[57066] = sym__brace_start;
	v->a[57067] = aux_sym_heredoc_redirect_token1;
	v->a[57068] = actions(2662);
	v->a[57069] = 33;
	v->a[57070] = anon_sym_LPAREN;
	v->a[57071] = anon_sym_PIPE;
	v->a[57072] = anon_sym_RPAREN;
	v->a[57073] = anon_sym_SEMI_SEMI;
	v->a[57074] = anon_sym_PIPE_AMP;
	v->a[57075] = anon_sym_AMP_AMP;
	v->a[57076] = anon_sym_PIPE_PIPE;
	v->a[57077] = anon_sym_LT;
	v->a[57078] = anon_sym_GT;
	v->a[57079] = anon_sym_GT_GT;
	small_parse_table_2854(v);
}

void	small_parse_table_2854(t_small_parse_table_array *v)
{
	v->a[57080] = anon_sym_AMP_GT;
	v->a[57081] = anon_sym_AMP_GT_GT;
	v->a[57082] = anon_sym_LT_AMP;
	v->a[57083] = anon_sym_GT_AMP;
	v->a[57084] = anon_sym_GT_PIPE;
	v->a[57085] = anon_sym_LT_AMP_DASH;
	v->a[57086] = anon_sym_GT_AMP_DASH;
	v->a[57087] = anon_sym_LT_LT;
	v->a[57088] = anon_sym_LT_LT_DASH;
	v->a[57089] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57090] = anon_sym_AMP;
	v->a[57091] = anon_sym_DOLLAR;
	v->a[57092] = sym__special_character;
	v->a[57093] = anon_sym_DQUOTE;
	v->a[57094] = sym_raw_string;
	v->a[57095] = aux_sym_number_token1;
	v->a[57096] = aux_sym_number_token2;
	v->a[57097] = anon_sym_DOLLAR_LBRACE;
	v->a[57098] = anon_sym_DOLLAR_LPAREN;
	v->a[57099] = anon_sym_BQUOTE;
	small_parse_table_2855(v);
}

/* EOF small_parse_table_570.c */
