/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_610.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3050(t_small_parse_table_array *v)
{
	v->a[61000] = anon_sym_LT;
	v->a[61001] = anon_sym_GT;
	v->a[61002] = anon_sym_GT_GT;
	v->a[61003] = anon_sym_AMP_GT;
	v->a[61004] = anon_sym_AMP_GT_GT;
	v->a[61005] = anon_sym_LT_AMP;
	v->a[61006] = anon_sym_GT_AMP;
	v->a[61007] = anon_sym_GT_PIPE;
	v->a[61008] = anon_sym_LT_AMP_DASH;
	v->a[61009] = anon_sym_GT_AMP_DASH;
	v->a[61010] = anon_sym_LT_LT;
	v->a[61011] = anon_sym_LT_LT_DASH;
	v->a[61012] = anon_sym_AMP;
	v->a[61013] = anon_sym_SEMI;
	v->a[61014] = 12;
	v->a[61015] = actions(3);
	v->a[61016] = 1;
	v->a[61017] = sym_comment;
	v->a[61018] = actions(764);
	v->a[61019] = 1;
	small_parse_table_3051(v);
}

void	small_parse_table_3051(t_small_parse_table_array *v)
{
	v->a[61020] = anon_sym_BQUOTE;
	v->a[61021] = actions(766);
	v->a[61022] = 1;
	v->a[61023] = anon_sym_PIPE;
	v->a[61024] = actions(2031);
	v->a[61025] = 1;
	v->a[61026] = aux_sym_heredoc_redirect_token1;
	v->a[61027] = actions(2033);
	v->a[61028] = 1;
	v->a[61029] = sym_file_descriptor;
	v->a[61030] = state(847);
	v->a[61031] = 1;
	v->a[61032] = sym_terminator;
	v->a[61033] = actions(804);
	v->a[61034] = 2;
	v->a[61035] = anon_sym_LT_LT;
	v->a[61036] = anon_sym_LT_LT_DASH;
	v->a[61037] = actions(842);
	v->a[61038] = 2;
	v->a[61039] = anon_sym_AMP_AMP;
	small_parse_table_3052(v);
}

void	small_parse_table_3052(t_small_parse_table_array *v)
{
	v->a[61040] = anon_sym_PIPE_PIPE;
	v->a[61041] = actions(2029);
	v->a[61042] = 2;
	v->a[61043] = anon_sym_LT_AMP_DASH;
	v->a[61044] = anon_sym_GT_AMP_DASH;
	v->a[61045] = actions(800);
	v->a[61046] = 3;
	v->a[61047] = anon_sym_SEMI_SEMI;
	v->a[61048] = anon_sym_AMP;
	v->a[61049] = anon_sym_SEMI;
	v->a[61050] = state(1157);
	v->a[61051] = 3;
	v->a[61052] = sym_file_redirect;
	v->a[61053] = sym_heredoc_redirect;
	v->a[61054] = aux_sym_redirected_statement_repeat1;
	v->a[61055] = actions(2027);
	v->a[61056] = 8;
	v->a[61057] = anon_sym_LT;
	v->a[61058] = anon_sym_GT;
	v->a[61059] = anon_sym_GT_GT;
	small_parse_table_3053(v);
}

void	small_parse_table_3053(t_small_parse_table_array *v)
{
	v->a[61060] = anon_sym_AMP_GT;
	v->a[61061] = anon_sym_AMP_GT_GT;
	v->a[61062] = anon_sym_LT_AMP;
	v->a[61063] = anon_sym_GT_AMP;
	v->a[61064] = anon_sym_GT_PIPE;
	v->a[61065] = 3;
	v->a[61066] = actions(3);
	v->a[61067] = 1;
	v->a[61068] = sym_comment;
	v->a[61069] = actions(1044);
	v->a[61070] = 2;
	v->a[61071] = sym_file_descriptor;
	v->a[61072] = sym__concat;
	v->a[61073] = actions(1042);
	v->a[61074] = 23;
	v->a[61075] = anon_sym_AMP_AMP;
	v->a[61076] = anon_sym_PIPE_PIPE;
	v->a[61077] = anon_sym_LT;
	v->a[61078] = anon_sym_GT;
	v->a[61079] = anon_sym_GT_GT;
	small_parse_table_3054(v);
}

void	small_parse_table_3054(t_small_parse_table_array *v)
{
	v->a[61080] = anon_sym_AMP_GT;
	v->a[61081] = anon_sym_AMP_GT_GT;
	v->a[61082] = anon_sym_LT_AMP;
	v->a[61083] = anon_sym_GT_AMP;
	v->a[61084] = anon_sym_GT_PIPE;
	v->a[61085] = anon_sym_LT_AMP_DASH;
	v->a[61086] = anon_sym_GT_AMP_DASH;
	v->a[61087] = aux_sym_heredoc_redirect_token1;
	v->a[61088] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61089] = aux_sym_concatenation_token1;
	v->a[61090] = anon_sym_DOLLAR;
	v->a[61091] = anon_sym_DQUOTE;
	v->a[61092] = sym_raw_string;
	v->a[61093] = sym_number;
	v->a[61094] = anon_sym_DOLLAR_LBRACE;
	v->a[61095] = anon_sym_DOLLAR_LPAREN;
	v->a[61096] = anon_sym_BQUOTE;
	v->a[61097] = sym_word;
	v->a[61098] = 12;
	v->a[61099] = actions(3);
	small_parse_table_3055(v);
}

/* EOF small_parse_table_610.c */
