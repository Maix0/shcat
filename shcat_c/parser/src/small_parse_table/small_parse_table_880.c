/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_880.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4400(t_small_parse_table_array *v)
{
	v->a[88000] = sym_comment;
	v->a[88001] = actions(6010);
	v->a[88002] = 1;
	v->a[88003] = sym__special_character;
	v->a[88004] = state(1829);
	v->a[88005] = 1;
	v->a[88006] = aux_sym__literal_repeat1;
	v->a[88007] = actions(1364);
	v->a[88008] = 6;
	v->a[88009] = sym_file_descriptor;
	v->a[88010] = sym_variable_name;
	v->a[88011] = sym_test_operator;
	v->a[88012] = sym__brace_start;
	v->a[88013] = ts_builtin_sym_end;
	v->a[88014] = aux_sym_heredoc_redirect_token1;
	v->a[88015] = actions(1362);
	v->a[88016] = 36;
	v->a[88017] = anon_sym_LPAREN_LPAREN;
	v->a[88018] = anon_sym_SEMI;
	v->a[88019] = anon_sym_PIPE_PIPE;
	small_parse_table_4401(v);
}

void	small_parse_table_4401(t_small_parse_table_array *v)
{
	v->a[88020] = anon_sym_AMP_AMP;
	v->a[88021] = anon_sym_PIPE;
	v->a[88022] = anon_sym_AMP;
	v->a[88023] = anon_sym_LT;
	v->a[88024] = anon_sym_GT;
	v->a[88025] = anon_sym_LT_LT;
	v->a[88026] = anon_sym_GT_GT;
	v->a[88027] = anon_sym_SEMI_SEMI;
	v->a[88028] = anon_sym_PIPE_AMP;
	v->a[88029] = anon_sym_AMP_GT;
	v->a[88030] = anon_sym_AMP_GT_GT;
	v->a[88031] = anon_sym_LT_AMP;
	v->a[88032] = anon_sym_GT_AMP;
	v->a[88033] = anon_sym_GT_PIPE;
	v->a[88034] = anon_sym_LT_AMP_DASH;
	v->a[88035] = anon_sym_GT_AMP_DASH;
	v->a[88036] = anon_sym_LT_LT_DASH;
	v->a[88037] = anon_sym_LT_LT_LT;
	v->a[88038] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88039] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_4402(v);
}

void	small_parse_table_4402(t_small_parse_table_array *v)
{
	v->a[88040] = anon_sym_DOLLAR;
	v->a[88041] = anon_sym_DQUOTE;
	v->a[88042] = sym_raw_string;
	v->a[88043] = sym_ansi_c_string;
	v->a[88044] = aux_sym_number_token1;
	v->a[88045] = aux_sym_number_token2;
	v->a[88046] = anon_sym_DOLLAR_LBRACE;
	v->a[88047] = anon_sym_DOLLAR_LPAREN;
	v->a[88048] = anon_sym_BQUOTE;
	v->a[88049] = anon_sym_DOLLAR_BQUOTE;
	v->a[88050] = anon_sym_LT_LPAREN;
	v->a[88051] = anon_sym_GT_LPAREN;
	v->a[88052] = sym_word;
	v->a[88053] = 27;
	v->a[88054] = actions(71);
	v->a[88055] = 1;
	v->a[88056] = sym_comment;
	v->a[88057] = actions(1131);
	v->a[88058] = 1;
	v->a[88059] = anon_sym_LPAREN;
	small_parse_table_4403(v);
}

void	small_parse_table_4403(t_small_parse_table_array *v)
{
	v->a[88060] = actions(1141);
	v->a[88061] = 1;
	v->a[88062] = anon_sym_DOLLAR_LBRACK;
	v->a[88063] = actions(1145);
	v->a[88064] = 1;
	v->a[88065] = anon_sym_DOLLAR;
	v->a[88066] = actions(1149);
	v->a[88067] = 1;
	v->a[88068] = anon_sym_DQUOTE;
	v->a[88069] = actions(1153);
	v->a[88070] = 1;
	v->a[88071] = aux_sym_number_token1;
	v->a[88072] = actions(1155);
	v->a[88073] = 1;
	v->a[88074] = aux_sym_number_token2;
	v->a[88075] = actions(1157);
	v->a[88076] = 1;
	v->a[88077] = anon_sym_DOLLAR_LBRACE;
	v->a[88078] = actions(1159);
	v->a[88079] = 1;
	small_parse_table_4404(v);
}

void	small_parse_table_4404(t_small_parse_table_array *v)
{
	v->a[88080] = anon_sym_DOLLAR_LPAREN;
	v->a[88081] = actions(1163);
	v->a[88082] = 1;
	v->a[88083] = anon_sym_DOLLAR_BQUOTE;
	v->a[88084] = actions(1169);
	v->a[88085] = 1;
	v->a[88086] = sym__brace_start;
	v->a[88087] = actions(1187);
	v->a[88088] = 1;
	v->a[88089] = sym_word;
	v->a[88090] = actions(1189);
	v->a[88091] = 1;
	v->a[88092] = anon_sym_BANG;
	v->a[88093] = actions(1195);
	v->a[88094] = 1;
	v->a[88095] = anon_sym_TILDE;
	v->a[88096] = actions(1201);
	v->a[88097] = 1;
	v->a[88098] = sym_test_operator;
	v->a[88099] = actions(3060);
	small_parse_table_4405(v);
}

/* EOF small_parse_table_880.c */
