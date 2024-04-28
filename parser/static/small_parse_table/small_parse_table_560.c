/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_560.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2800(t_small_parse_table_array *v)
{
	v->a[56000] = anon_sym_LT_AMP_DASH;
	v->a[56001] = anon_sym_GT_AMP_DASH;
	v->a[56002] = anon_sym_LT_LT_DASH;
	v->a[56003] = anon_sym_LT_LT_LT;
	v->a[56004] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56005] = anon_sym_DOLLAR_LBRACK;
	v->a[56006] = anon_sym_DOLLAR;
	v->a[56007] = anon_sym_DQUOTE;
	v->a[56008] = sym_raw_string;
	v->a[56009] = sym_ansi_c_string;
	v->a[56010] = aux_sym_number_token1;
	v->a[56011] = aux_sym_number_token2;
	v->a[56012] = anon_sym_DOLLAR_LBRACE;
	v->a[56013] = anon_sym_DOLLAR_LPAREN;
	v->a[56014] = anon_sym_BQUOTE;
	v->a[56015] = anon_sym_DOLLAR_BQUOTE;
	v->a[56016] = anon_sym_LT_LPAREN;
	v->a[56017] = anon_sym_GT_LPAREN;
	v->a[56018] = sym_word;
	v->a[56019] = 3;
	small_parse_table_2801(v);
}

void	small_parse_table_2801(t_small_parse_table_array *v)
{
	v->a[56020] = actions(3);
	v->a[56021] = 1;
	v->a[56022] = sym_comment;
	v->a[56023] = actions(1318);
	v->a[56024] = 6;
	v->a[56025] = sym_file_descriptor;
	v->a[56026] = sym__concat;
	v->a[56027] = sym_test_operator;
	v->a[56028] = sym__bare_dollar;
	v->a[56029] = sym__brace_start;
	v->a[56030] = aux_sym_heredoc_redirect_token1;
	v->a[56031] = actions(1316);
	v->a[56032] = 41;
	v->a[56033] = anon_sym_LPAREN_LPAREN;
	v->a[56034] = anon_sym_SEMI;
	v->a[56035] = anon_sym_PIPE_PIPE;
	v->a[56036] = anon_sym_AMP_AMP;
	v->a[56037] = anon_sym_PIPE;
	v->a[56038] = anon_sym_AMP;
	v->a[56039] = anon_sym_EQ_EQ;
	small_parse_table_2802(v);
}

void	small_parse_table_2802(t_small_parse_table_array *v)
{
	v->a[56040] = anon_sym_LT;
	v->a[56041] = anon_sym_GT;
	v->a[56042] = anon_sym_LT_LT;
	v->a[56043] = anon_sym_GT_GT;
	v->a[56044] = anon_sym_RPAREN;
	v->a[56045] = anon_sym_SEMI_SEMI;
	v->a[56046] = anon_sym_PIPE_AMP;
	v->a[56047] = anon_sym_EQ_TILDE;
	v->a[56048] = anon_sym_AMP_GT;
	v->a[56049] = anon_sym_AMP_GT_GT;
	v->a[56050] = anon_sym_LT_AMP;
	v->a[56051] = anon_sym_GT_AMP;
	v->a[56052] = anon_sym_GT_PIPE;
	v->a[56053] = anon_sym_LT_AMP_DASH;
	v->a[56054] = anon_sym_GT_AMP_DASH;
	v->a[56055] = anon_sym_LT_LT_DASH;
	v->a[56056] = anon_sym_LT_LT_LT;
	v->a[56057] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56058] = anon_sym_DOLLAR_LBRACK;
	v->a[56059] = aux_sym_concatenation_token1;
	small_parse_table_2803(v);
}

void	small_parse_table_2803(t_small_parse_table_array *v)
{
	v->a[56060] = anon_sym_DOLLAR;
	v->a[56061] = sym__special_character;
	v->a[56062] = anon_sym_DQUOTE;
	v->a[56063] = sym_raw_string;
	v->a[56064] = sym_ansi_c_string;
	v->a[56065] = aux_sym_number_token1;
	v->a[56066] = aux_sym_number_token2;
	v->a[56067] = anon_sym_DOLLAR_LBRACE;
	v->a[56068] = anon_sym_DOLLAR_LPAREN;
	v->a[56069] = anon_sym_BQUOTE;
	v->a[56070] = anon_sym_DOLLAR_BQUOTE;
	v->a[56071] = anon_sym_LT_LPAREN;
	v->a[56072] = anon_sym_GT_LPAREN;
	v->a[56073] = sym_word;
	v->a[56074] = 6;
	v->a[56075] = actions(3);
	v->a[56076] = 1;
	v->a[56077] = sym_comment;
	v->a[56078] = actions(5464);
	v->a[56079] = 1;
	small_parse_table_2804(v);
}

void	small_parse_table_2804(t_small_parse_table_array *v)
{
	v->a[56080] = aux_sym_concatenation_token1;
	v->a[56081] = actions(5466);
	v->a[56082] = 1;
	v->a[56083] = sym__concat;
	v->a[56084] = state(1249);
	v->a[56085] = 1;
	v->a[56086] = aux_sym_concatenation_repeat1;
	v->a[56087] = actions(5391);
	v->a[56088] = 5;
	v->a[56089] = sym_file_descriptor;
	v->a[56090] = sym_variable_name;
	v->a[56091] = sym_test_operator;
	v->a[56092] = sym__brace_start;
	v->a[56093] = aux_sym_heredoc_redirect_token1;
	v->a[56094] = actions(5389);
	v->a[56095] = 39;
	v->a[56096] = anon_sym_LPAREN_LPAREN;
	v->a[56097] = anon_sym_SEMI;
	v->a[56098] = anon_sym_PIPE_PIPE;
	v->a[56099] = anon_sym_AMP_AMP;
	small_parse_table_2805(v);
}

/* EOF small_parse_table_560.c */
