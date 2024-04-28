/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1050.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5250(t_small_parse_table_array *v)
{
	v->a[105000] = anon_sym_BQUOTE;
	v->a[105001] = anon_sym_DOLLAR_BQUOTE;
	v->a[105002] = anon_sym_LT_LPAREN;
	v->a[105003] = anon_sym_GT_LPAREN;
	v->a[105004] = sym_word;
	v->a[105005] = 6;
	v->a[105006] = actions(3);
	v->a[105007] = 1;
	v->a[105008] = sym_comment;
	v->a[105009] = actions(6013);
	v->a[105010] = 1;
	v->a[105011] = aux_sym_concatenation_token1;
	v->a[105012] = actions(6146);
	v->a[105013] = 1;
	v->a[105014] = sym__concat;
	v->a[105015] = state(1879);
	v->a[105016] = 1;
	v->a[105017] = aux_sym_concatenation_repeat1;
	v->a[105018] = actions(1288);
	v->a[105019] = 4;
	small_parse_table_5251(v);
}

void	small_parse_table_5251(t_small_parse_table_array *v)
{
	v->a[105020] = sym_file_descriptor;
	v->a[105021] = sym_test_operator;
	v->a[105022] = sym__brace_start;
	v->a[105023] = aux_sym_heredoc_redirect_token1;
	v->a[105024] = actions(1286);
	v->a[105025] = 36;
	v->a[105026] = anon_sym_LPAREN_LPAREN;
	v->a[105027] = anon_sym_SEMI;
	v->a[105028] = anon_sym_PIPE_PIPE;
	v->a[105029] = anon_sym_AMP_AMP;
	v->a[105030] = anon_sym_PIPE;
	v->a[105031] = anon_sym_AMP;
	v->a[105032] = anon_sym_LT;
	v->a[105033] = anon_sym_GT;
	v->a[105034] = anon_sym_LT_LT;
	v->a[105035] = anon_sym_GT_GT;
	v->a[105036] = anon_sym_SEMI_SEMI;
	v->a[105037] = anon_sym_PIPE_AMP;
	v->a[105038] = anon_sym_AMP_GT;
	v->a[105039] = anon_sym_AMP_GT_GT;
	small_parse_table_5252(v);
}

void	small_parse_table_5252(t_small_parse_table_array *v)
{
	v->a[105040] = anon_sym_LT_AMP;
	v->a[105041] = anon_sym_GT_AMP;
	v->a[105042] = anon_sym_GT_PIPE;
	v->a[105043] = anon_sym_LT_AMP_DASH;
	v->a[105044] = anon_sym_GT_AMP_DASH;
	v->a[105045] = anon_sym_LT_LT_DASH;
	v->a[105046] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[105047] = anon_sym_DOLLAR_LBRACK;
	v->a[105048] = anon_sym_DOLLAR;
	v->a[105049] = sym__special_character;
	v->a[105050] = anon_sym_DQUOTE;
	v->a[105051] = sym_raw_string;
	v->a[105052] = sym_ansi_c_string;
	v->a[105053] = aux_sym_number_token1;
	v->a[105054] = aux_sym_number_token2;
	v->a[105055] = anon_sym_DOLLAR_LBRACE;
	v->a[105056] = anon_sym_DOLLAR_LPAREN;
	v->a[105057] = anon_sym_BQUOTE;
	v->a[105058] = anon_sym_DOLLAR_BQUOTE;
	v->a[105059] = anon_sym_LT_LPAREN;
	small_parse_table_5253(v);
}

void	small_parse_table_5253(t_small_parse_table_array *v)
{
	v->a[105060] = anon_sym_GT_LPAREN;
	v->a[105061] = sym_word;
	v->a[105062] = 26;
	v->a[105063] = actions(71);
	v->a[105064] = 1;
	v->a[105065] = sym_comment;
	v->a[105066] = actions(1131);
	v->a[105067] = 1;
	v->a[105068] = anon_sym_LPAREN;
	v->a[105069] = actions(1141);
	v->a[105070] = 1;
	v->a[105071] = anon_sym_DOLLAR_LBRACK;
	v->a[105072] = actions(1145);
	v->a[105073] = 1;
	v->a[105074] = anon_sym_DOLLAR;
	v->a[105075] = actions(1149);
	v->a[105076] = 1;
	v->a[105077] = anon_sym_DQUOTE;
	v->a[105078] = actions(1153);
	v->a[105079] = 1;
	small_parse_table_5254(v);
}

void	small_parse_table_5254(t_small_parse_table_array *v)
{
	v->a[105080] = aux_sym_number_token1;
	v->a[105081] = actions(1155);
	v->a[105082] = 1;
	v->a[105083] = aux_sym_number_token2;
	v->a[105084] = actions(1157);
	v->a[105085] = 1;
	v->a[105086] = anon_sym_DOLLAR_LBRACE;
	v->a[105087] = actions(1159);
	v->a[105088] = 1;
	v->a[105089] = anon_sym_DOLLAR_LPAREN;
	v->a[105090] = actions(1163);
	v->a[105091] = 1;
	v->a[105092] = anon_sym_DOLLAR_BQUOTE;
	v->a[105093] = actions(1169);
	v->a[105094] = 1;
	v->a[105095] = sym__brace_start;
	v->a[105096] = actions(1211);
	v->a[105097] = 1;
	v->a[105098] = sym_word;
	v->a[105099] = actions(1213);
	small_parse_table_5255(v);
}

/* EOF small_parse_table_1050.c */
