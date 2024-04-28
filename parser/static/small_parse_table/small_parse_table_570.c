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
	v->a[57000] = actions(1338);
	v->a[57001] = 6;
	v->a[57002] = sym_file_descriptor;
	v->a[57003] = sym__concat;
	v->a[57004] = sym_test_operator;
	v->a[57005] = sym__bare_dollar;
	v->a[57006] = sym__brace_start;
	v->a[57007] = aux_sym_heredoc_redirect_token1;
	v->a[57008] = actions(1336);
	v->a[57009] = 41;
	v->a[57010] = anon_sym_LPAREN_LPAREN;
	v->a[57011] = anon_sym_SEMI;
	v->a[57012] = anon_sym_PIPE_PIPE;
	v->a[57013] = anon_sym_AMP_AMP;
	v->a[57014] = anon_sym_PIPE;
	v->a[57015] = anon_sym_AMP;
	v->a[57016] = anon_sym_EQ_EQ;
	v->a[57017] = anon_sym_LT;
	v->a[57018] = anon_sym_GT;
	v->a[57019] = anon_sym_LT_LT;
	small_parse_table_2851(v);
}

void	small_parse_table_2851(t_small_parse_table_array *v)
{
	v->a[57020] = anon_sym_GT_GT;
	v->a[57021] = anon_sym_RPAREN;
	v->a[57022] = anon_sym_SEMI_SEMI;
	v->a[57023] = anon_sym_PIPE_AMP;
	v->a[57024] = anon_sym_EQ_TILDE;
	v->a[57025] = anon_sym_AMP_GT;
	v->a[57026] = anon_sym_AMP_GT_GT;
	v->a[57027] = anon_sym_LT_AMP;
	v->a[57028] = anon_sym_GT_AMP;
	v->a[57029] = anon_sym_GT_PIPE;
	v->a[57030] = anon_sym_LT_AMP_DASH;
	v->a[57031] = anon_sym_GT_AMP_DASH;
	v->a[57032] = anon_sym_LT_LT_DASH;
	v->a[57033] = anon_sym_LT_LT_LT;
	v->a[57034] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57035] = anon_sym_DOLLAR_LBRACK;
	v->a[57036] = aux_sym_concatenation_token1;
	v->a[57037] = anon_sym_DOLLAR;
	v->a[57038] = sym__special_character;
	v->a[57039] = anon_sym_DQUOTE;
	small_parse_table_2852(v);
}

void	small_parse_table_2852(t_small_parse_table_array *v)
{
	v->a[57040] = sym_raw_string;
	v->a[57041] = sym_ansi_c_string;
	v->a[57042] = aux_sym_number_token1;
	v->a[57043] = aux_sym_number_token2;
	v->a[57044] = anon_sym_DOLLAR_LBRACE;
	v->a[57045] = anon_sym_DOLLAR_LPAREN;
	v->a[57046] = anon_sym_BQUOTE;
	v->a[57047] = anon_sym_DOLLAR_BQUOTE;
	v->a[57048] = anon_sym_LT_LPAREN;
	v->a[57049] = anon_sym_GT_LPAREN;
	v->a[57050] = sym_word;
	v->a[57051] = 3;
	v->a[57052] = actions(3);
	v->a[57053] = 1;
	v->a[57054] = sym_comment;
	v->a[57055] = actions(1314);
	v->a[57056] = 6;
	v->a[57057] = sym_file_descriptor;
	v->a[57058] = sym__concat;
	v->a[57059] = sym_variable_name;
	small_parse_table_2853(v);
}

void	small_parse_table_2853(t_small_parse_table_array *v)
{
	v->a[57060] = sym_test_operator;
	v->a[57061] = sym__brace_start;
	v->a[57062] = aux_sym_heredoc_redirect_token1;
	v->a[57063] = actions(1312);
	v->a[57064] = 41;
	v->a[57065] = anon_sym_LPAREN_LPAREN;
	v->a[57066] = anon_sym_SEMI;
	v->a[57067] = anon_sym_PIPE_PIPE;
	v->a[57068] = anon_sym_AMP_AMP;
	v->a[57069] = anon_sym_PIPE;
	v->a[57070] = anon_sym_AMP;
	v->a[57071] = anon_sym_LT;
	v->a[57072] = anon_sym_GT;
	v->a[57073] = anon_sym_LT_LT;
	v->a[57074] = anon_sym_GT_GT;
	v->a[57075] = anon_sym_esac;
	v->a[57076] = anon_sym_SEMI_SEMI;
	v->a[57077] = anon_sym_SEMI_AMP;
	v->a[57078] = anon_sym_SEMI_SEMI_AMP;
	v->a[57079] = anon_sym_PIPE_AMP;
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
	v->a[57087] = anon_sym_LT_LT_DASH;
	v->a[57088] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57089] = anon_sym_DOLLAR_LBRACK;
	v->a[57090] = aux_sym_concatenation_token1;
	v->a[57091] = anon_sym_DOLLAR;
	v->a[57092] = sym__special_character;
	v->a[57093] = anon_sym_DQUOTE;
	v->a[57094] = sym_raw_string;
	v->a[57095] = sym_ansi_c_string;
	v->a[57096] = aux_sym_number_token1;
	v->a[57097] = aux_sym_number_token2;
	v->a[57098] = anon_sym_DOLLAR_LBRACE;
	v->a[57099] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2855(v);
}

/* EOF small_parse_table_570.c */
