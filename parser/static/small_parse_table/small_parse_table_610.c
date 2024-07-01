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
	v->a[61000] = anon_sym_GT_AMP;
	v->a[61001] = anon_sym_GT_PIPE;
	v->a[61002] = anon_sym_LT_GT;
	v->a[61003] = anon_sym_LT_LT;
	v->a[61004] = anon_sym_LT_LT_DASH;
	v->a[61005] = anon_sym_AMP;
	v->a[61006] = anon_sym_BQUOTE;
	v->a[61007] = anon_sym_SEMI;
	v->a[61008] = 6;
	v->a[61009] = actions(3);
	v->a[61010] = 1;
	v->a[61011] = sym_comment;
	v->a[61012] = actions(2055);
	v->a[61013] = 1;
	v->a[61014] = sym_file_descriptor;
	v->a[61015] = actions(2051);
	v->a[61016] = 2;
	v->a[61017] = ts_builtin_sym_end;
	v->a[61018] = aux_sym_heredoc_redirect_token1;
	v->a[61019] = state(1098);
	small_parse_table_3051(v);
}

void	small_parse_table_3051(t_small_parse_table_array *v)
{
	v->a[61020] = 2;
	v->a[61021] = sym_file_redirect;
	v->a[61022] = aux_sym_redirected_statement_repeat2;
	v->a[61023] = actions(1837);
	v->a[61024] = 7;
	v->a[61025] = anon_sym_LT;
	v->a[61026] = anon_sym_GT;
	v->a[61027] = anon_sym_GT_GT;
	v->a[61028] = anon_sym_LT_AMP;
	v->a[61029] = anon_sym_GT_AMP;
	v->a[61030] = anon_sym_GT_PIPE;
	v->a[61031] = anon_sym_LT_GT;
	v->a[61032] = actions(2053);
	v->a[61033] = 8;
	v->a[61034] = anon_sym_PIPE;
	v->a[61035] = anon_sym_SEMI_SEMI;
	v->a[61036] = anon_sym_AMP_AMP;
	v->a[61037] = anon_sym_PIPE_PIPE;
	v->a[61038] = anon_sym_LT_LT;
	v->a[61039] = anon_sym_LT_LT_DASH;
	small_parse_table_3052(v);
}

void	small_parse_table_3052(t_small_parse_table_array *v)
{
	v->a[61040] = anon_sym_AMP;
	v->a[61041] = anon_sym_SEMI;
	v->a[61042] = 3;
	v->a[61043] = actions(3);
	v->a[61044] = 1;
	v->a[61045] = sym_comment;
	v->a[61046] = actions(2057);
	v->a[61047] = 3;
	v->a[61048] = sym_file_descriptor;
	v->a[61049] = ts_builtin_sym_end;
	v->a[61050] = aux_sym_heredoc_redirect_token1;
	v->a[61051] = actions(2059);
	v->a[61052] = 17;
	v->a[61053] = anon_sym_PIPE;
	v->a[61054] = anon_sym_RPAREN;
	v->a[61055] = anon_sym_SEMI_SEMI;
	v->a[61056] = anon_sym_AMP_AMP;
	v->a[61057] = anon_sym_PIPE_PIPE;
	v->a[61058] = anon_sym_LT;
	v->a[61059] = anon_sym_GT;
	small_parse_table_3053(v);
}

void	small_parse_table_3053(t_small_parse_table_array *v)
{
	v->a[61060] = anon_sym_GT_GT;
	v->a[61061] = anon_sym_LT_AMP;
	v->a[61062] = anon_sym_GT_AMP;
	v->a[61063] = anon_sym_GT_PIPE;
	v->a[61064] = anon_sym_LT_GT;
	v->a[61065] = anon_sym_LT_LT;
	v->a[61066] = anon_sym_LT_LT_DASH;
	v->a[61067] = anon_sym_AMP;
	v->a[61068] = anon_sym_BQUOTE;
	v->a[61069] = anon_sym_SEMI;
	v->a[61070] = 5;
	v->a[61071] = actions(3);
	v->a[61072] = 1;
	v->a[61073] = sym_comment;
	v->a[61074] = actions(746);
	v->a[61075] = 1;
	v->a[61076] = sym_file_descriptor;
	v->a[61077] = actions(810);
	v->a[61078] = 1;
	v->a[61079] = sym_variable_name;
	small_parse_table_3054(v);
}

void	small_parse_table_3054(t_small_parse_table_array *v)
{
	v->a[61080] = state(1065);
	v->a[61081] = 2;
	v->a[61082] = sym_variable_assignment;
	v->a[61083] = aux_sym__variable_assignments_repeat1;
	v->a[61084] = actions(734);
	v->a[61085] = 16;
	v->a[61086] = anon_sym_LT;
	v->a[61087] = anon_sym_GT;
	v->a[61088] = anon_sym_GT_GT;
	v->a[61089] = anon_sym_LT_AMP;
	v->a[61090] = anon_sym_GT_AMP;
	v->a[61091] = anon_sym_GT_PIPE;
	v->a[61092] = anon_sym_LT_GT;
	v->a[61093] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61094] = anon_sym_DOLLAR;
	v->a[61095] = anon_sym_DQUOTE;
	v->a[61096] = sym_raw_string;
	v->a[61097] = sym_number;
	v->a[61098] = anon_sym_DOLLAR_LBRACE;
	v->a[61099] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3055(v);
}

/* EOF small_parse_table_610.c */
