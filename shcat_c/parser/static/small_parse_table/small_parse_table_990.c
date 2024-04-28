/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_990.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4950(t_small_parse_table_array *v)
{
	v->a[99000] = anon_sym_LT_AMP_DASH;
	v->a[99001] = anon_sym_GT_AMP_DASH;
	v->a[99002] = anon_sym_LT_LT_DASH;
	v->a[99003] = anon_sym_LT_LT_LT;
	v->a[99004] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[99005] = anon_sym_DOLLAR_LBRACK;
	v->a[99006] = anon_sym_DOLLAR;
	v->a[99007] = sym__special_character;
	v->a[99008] = anon_sym_DQUOTE;
	v->a[99009] = sym_raw_string;
	v->a[99010] = sym_ansi_c_string;
	v->a[99011] = aux_sym_number_token1;
	v->a[99012] = aux_sym_number_token2;
	v->a[99013] = anon_sym_DOLLAR_LBRACE;
	v->a[99014] = anon_sym_DOLLAR_LPAREN;
	v->a[99015] = anon_sym_BQUOTE;
	v->a[99016] = anon_sym_DOLLAR_BQUOTE;
	v->a[99017] = anon_sym_LT_LPAREN;
	v->a[99018] = anon_sym_GT_LPAREN;
	v->a[99019] = sym_word;
	small_parse_table_4951(v);
}

void	small_parse_table_4951(t_small_parse_table_array *v)
{
	v->a[99020] = 3;
	v->a[99021] = actions(71);
	v->a[99022] = 1;
	v->a[99023] = sym_comment;
	v->a[99024] = actions(1292);
	v->a[99025] = 16;
	v->a[99026] = anon_sym_PIPE;
	v->a[99027] = anon_sym_EQ_EQ;
	v->a[99028] = anon_sym_LT;
	v->a[99029] = anon_sym_GT;
	v->a[99030] = anon_sym_LT_LT;
	v->a[99031] = anon_sym_LPAREN;
	v->a[99032] = anon_sym_EQ_TILDE;
	v->a[99033] = anon_sym_AMP_GT;
	v->a[99034] = anon_sym_LT_AMP;
	v->a[99035] = anon_sym_GT_AMP;
	v->a[99036] = anon_sym_DOLLAR;
	v->a[99037] = aux_sym_number_token1;
	v->a[99038] = aux_sym_number_token2;
	v->a[99039] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4952(v);
}

void	small_parse_table_4952(t_small_parse_table_array *v)
{
	v->a[99040] = anon_sym_BQUOTE;
	v->a[99041] = sym_word;
	v->a[99042] = actions(1294);
	v->a[99043] = 27;
	v->a[99044] = sym_file_descriptor;
	v->a[99045] = sym__concat;
	v->a[99046] = sym_test_operator;
	v->a[99047] = sym__bare_dollar;
	v->a[99048] = sym__brace_start;
	v->a[99049] = anon_sym_LPAREN_LPAREN;
	v->a[99050] = anon_sym_PIPE_PIPE;
	v->a[99051] = anon_sym_AMP_AMP;
	v->a[99052] = anon_sym_GT_GT;
	v->a[99053] = anon_sym_PIPE_AMP;
	v->a[99054] = anon_sym_AMP_GT_GT;
	v->a[99055] = anon_sym_GT_PIPE;
	v->a[99056] = anon_sym_LT_AMP_DASH;
	v->a[99057] = anon_sym_GT_AMP_DASH;
	v->a[99058] = anon_sym_LT_LT_DASH;
	v->a[99059] = anon_sym_LT_LT_LT;
	small_parse_table_4953(v);
}

void	small_parse_table_4953(t_small_parse_table_array *v)
{
	v->a[99060] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[99061] = anon_sym_DOLLAR_LBRACK;
	v->a[99062] = aux_sym_concatenation_token1;
	v->a[99063] = sym__special_character;
	v->a[99064] = anon_sym_DQUOTE;
	v->a[99065] = sym_raw_string;
	v->a[99066] = sym_ansi_c_string;
	v->a[99067] = anon_sym_DOLLAR_LBRACE;
	v->a[99068] = anon_sym_DOLLAR_BQUOTE;
	v->a[99069] = anon_sym_LT_LPAREN;
	v->a[99070] = anon_sym_GT_LPAREN;
	v->a[99071] = 3;
	v->a[99072] = actions(3);
	v->a[99073] = 1;
	v->a[99074] = sym_comment;
	v->a[99075] = actions(1310);
	v->a[99076] = 5;
	v->a[99077] = sym_file_descriptor;
	v->a[99078] = sym__concat;
	v->a[99079] = sym_test_operator;
	small_parse_table_4954(v);
}

void	small_parse_table_4954(t_small_parse_table_array *v)
{
	v->a[99080] = sym__brace_start;
	v->a[99081] = aux_sym_heredoc_redirect_token1;
	v->a[99082] = actions(1308);
	v->a[99083] = 38;
	v->a[99084] = anon_sym_LPAREN_LPAREN;
	v->a[99085] = anon_sym_SEMI;
	v->a[99086] = anon_sym_PIPE_PIPE;
	v->a[99087] = anon_sym_AMP_AMP;
	v->a[99088] = anon_sym_PIPE;
	v->a[99089] = anon_sym_AMP;
	v->a[99090] = anon_sym_LT;
	v->a[99091] = anon_sym_GT;
	v->a[99092] = anon_sym_LT_LT;
	v->a[99093] = anon_sym_GT_GT;
	v->a[99094] = anon_sym_RPAREN;
	v->a[99095] = anon_sym_SEMI_SEMI;
	v->a[99096] = anon_sym_PIPE_AMP;
	v->a[99097] = anon_sym_AMP_GT;
	v->a[99098] = anon_sym_AMP_GT_GT;
	v->a[99099] = anon_sym_LT_AMP;
	small_parse_table_4955(v);
}

/* EOF small_parse_table_990.c */
