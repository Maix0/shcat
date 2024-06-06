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
	v->a[105000] = sym_comment;
	v->a[105001] = actions(5256);
	v->a[105002] = 1;
	v->a[105003] = aux_sym_heredoc_redirect_token1;
	v->a[105004] = actions(6041);
	v->a[105005] = 1;
	v->a[105006] = sym_file_descriptor;
	v->a[105007] = actions(5401);
	v->a[105008] = 2;
	v->a[105009] = anon_sym_LT_AMP_DASH;
	v->a[105010] = anon_sym_GT_AMP_DASH;
	v->a[105011] = state(2182);
	v->a[105012] = 2;
	v->a[105013] = sym_file_redirect;
	v->a[105014] = aux_sym_redirected_statement_repeat2;
	v->a[105015] = actions(5399);
	v->a[105016] = 8;
	v->a[105017] = anon_sym_LT;
	v->a[105018] = anon_sym_GT;
	v->a[105019] = anon_sym_GT_GT;
	small_parse_table_5251(v);
}

void	small_parse_table_5251(t_small_parse_table_array *v)
{
	v->a[105020] = anon_sym_AMP_GT;
	v->a[105021] = anon_sym_AMP_GT_GT;
	v->a[105022] = anon_sym_LT_AMP;
	v->a[105023] = anon_sym_GT_AMP;
	v->a[105024] = anon_sym_GT_PIPE;
	v->a[105025] = actions(5254);
	v->a[105026] = 10;
	v->a[105027] = anon_sym_PIPE;
	v->a[105028] = anon_sym_SEMI_SEMI;
	v->a[105029] = anon_sym_PIPE_AMP;
	v->a[105030] = anon_sym_AMP_AMP;
	v->a[105031] = anon_sym_PIPE_PIPE;
	v->a[105032] = anon_sym_LT_LT;
	v->a[105033] = anon_sym_LT_LT_DASH;
	v->a[105034] = anon_sym_AMP;
	v->a[105035] = anon_sym_BQUOTE;
	v->a[105036] = anon_sym_SEMI;
	v->a[105037] = 3;
	v->a[105038] = actions(3);
	v->a[105039] = 1;
	small_parse_table_5252(v);
}

void	small_parse_table_5252(t_small_parse_table_array *v)
{
	v->a[105040] = sym_comment;
	v->a[105041] = actions(6043);
	v->a[105042] = 3;
	v->a[105043] = sym_file_descriptor;
	v->a[105044] = ts_builtin_sym_end;
	v->a[105045] = aux_sym_heredoc_redirect_token1;
	v->a[105046] = actions(6045);
	v->a[105047] = 21;
	v->a[105048] = anon_sym_PIPE;
	v->a[105049] = anon_sym_RPAREN;
	v->a[105050] = anon_sym_SEMI_SEMI;
	v->a[105051] = anon_sym_PIPE_AMP;
	v->a[105052] = anon_sym_AMP_AMP;
	v->a[105053] = anon_sym_PIPE_PIPE;
	v->a[105054] = anon_sym_LT;
	v->a[105055] = anon_sym_GT;
	v->a[105056] = anon_sym_GT_GT;
	v->a[105057] = anon_sym_AMP_GT;
	v->a[105058] = anon_sym_AMP_GT_GT;
	v->a[105059] = anon_sym_LT_AMP;
	small_parse_table_5253(v);
}

void	small_parse_table_5253(t_small_parse_table_array *v)
{
	v->a[105060] = anon_sym_GT_AMP;
	v->a[105061] = anon_sym_GT_PIPE;
	v->a[105062] = anon_sym_LT_AMP_DASH;
	v->a[105063] = anon_sym_GT_AMP_DASH;
	v->a[105064] = anon_sym_LT_LT;
	v->a[105065] = anon_sym_LT_LT_DASH;
	v->a[105066] = anon_sym_AMP;
	v->a[105067] = anon_sym_BQUOTE;
	v->a[105068] = anon_sym_SEMI;
	v->a[105069] = 17;
	v->a[105070] = actions(57);
	v->a[105071] = 1;
	v->a[105072] = sym_comment;
	v->a[105073] = actions(3716);
	v->a[105074] = 1;
	v->a[105075] = sym_word;
	v->a[105076] = actions(3720);
	v->a[105077] = 1;
	v->a[105078] = anon_sym_DOLLAR;
	v->a[105079] = actions(3726);
	small_parse_table_5254(v);
}

void	small_parse_table_5254(t_small_parse_table_array *v)
{
	v->a[105080] = 1;
	v->a[105081] = aux_sym_number_token1;
	v->a[105082] = actions(3728);
	v->a[105083] = 1;
	v->a[105084] = aux_sym_number_token2;
	v->a[105085] = actions(3732);
	v->a[105086] = 1;
	v->a[105087] = anon_sym_DOLLAR_LPAREN;
	v->a[105088] = actions(3740);
	v->a[105089] = 1;
	v->a[105090] = sym__brace_start;
	v->a[105091] = actions(6016);
	v->a[105092] = 1;
	v->a[105093] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[105094] = actions(6018);
	v->a[105095] = 1;
	v->a[105096] = sym__special_character;
	v->a[105097] = actions(6020);
	v->a[105098] = 1;
	v->a[105099] = anon_sym_DQUOTE;
	small_parse_table_5255(v);
}

/* EOF small_parse_table_1050.c */
