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
	v->a[61002] = 12;
	v->a[61003] = actions(3);
	v->a[61004] = 1;
	v->a[61005] = sym_comment;
	v->a[61006] = actions(682);
	v->a[61007] = 1;
	v->a[61008] = anon_sym_PIPE;
	v->a[61009] = actions(2017);
	v->a[61010] = 1;
	v->a[61011] = aux_sym_heredoc_redirect_token1;
	v->a[61012] = actions(2019);
	v->a[61013] = 1;
	v->a[61014] = sym_file_descriptor;
	v->a[61015] = state(685);
	v->a[61016] = 1;
	v->a[61017] = sym_terminator;
	v->a[61018] = actions(684);
	v->a[61019] = 2;
	small_parse_table_3051(v);
}

void	small_parse_table_3051(t_small_parse_table_array *v)
{
	v->a[61020] = anon_sym_AMP_AMP;
	v->a[61021] = anon_sym_PIPE_PIPE;
	v->a[61022] = actions(686);
	v->a[61023] = 2;
	v->a[61024] = anon_sym_LT_LT;
	v->a[61025] = anon_sym_LT_LT_DASH;
	v->a[61026] = actions(688);
	v->a[61027] = 2;
	v->a[61028] = anon_sym_AMP;
	v->a[61029] = anon_sym_SEMI;
	v->a[61030] = actions(695);
	v->a[61031] = 2;
	v->a[61032] = anon_sym_esac;
	v->a[61033] = anon_sym_SEMI_SEMI;
	v->a[61034] = actions(2015);
	v->a[61035] = 2;
	v->a[61036] = anon_sym_LT_AMP_DASH;
	v->a[61037] = anon_sym_GT_AMP_DASH;
	v->a[61038] = state(1176);
	v->a[61039] = 3;
	small_parse_table_3052(v);
}

void	small_parse_table_3052(t_small_parse_table_array *v)
{
	v->a[61040] = sym_file_redirect;
	v->a[61041] = sym_heredoc_redirect;
	v->a[61042] = aux_sym_redirected_statement_repeat1;
	v->a[61043] = actions(2013);
	v->a[61044] = 6;
	v->a[61045] = anon_sym_LT;
	v->a[61046] = anon_sym_GT;
	v->a[61047] = anon_sym_GT_GT;
	v->a[61048] = anon_sym_LT_AMP;
	v->a[61049] = anon_sym_GT_AMP;
	v->a[61050] = anon_sym_GT_PIPE;
	v->a[61051] = 12;
	v->a[61052] = actions(3);
	v->a[61053] = 1;
	v->a[61054] = sym_comment;
	v->a[61055] = actions(682);
	v->a[61056] = 1;
	v->a[61057] = anon_sym_PIPE;
	v->a[61058] = actions(695);
	v->a[61059] = 1;
	small_parse_table_3053(v);
}

void	small_parse_table_3053(t_small_parse_table_array *v)
{
	v->a[61060] = anon_sym_BQUOTE;
	v->a[61061] = actions(2009);
	v->a[61062] = 1;
	v->a[61063] = aux_sym_heredoc_redirect_token1;
	v->a[61064] = actions(2041);
	v->a[61065] = 1;
	v->a[61066] = sym_file_descriptor;
	v->a[61067] = state(825);
	v->a[61068] = 1;
	v->a[61069] = sym_terminator;
	v->a[61070] = actions(754);
	v->a[61071] = 2;
	v->a[61072] = anon_sym_LT_LT;
	v->a[61073] = anon_sym_LT_LT_DASH;
	v->a[61074] = actions(963);
	v->a[61075] = 2;
	v->a[61076] = anon_sym_AMP_AMP;
	v->a[61077] = anon_sym_PIPE_PIPE;
	v->a[61078] = actions(2039);
	v->a[61079] = 2;
	small_parse_table_3054(v);
}

void	small_parse_table_3054(t_small_parse_table_array *v)
{
	v->a[61080] = anon_sym_LT_AMP_DASH;
	v->a[61081] = anon_sym_GT_AMP_DASH;
	v->a[61082] = actions(750);
	v->a[61083] = 3;
	v->a[61084] = anon_sym_SEMI_SEMI;
	v->a[61085] = anon_sym_AMP;
	v->a[61086] = anon_sym_SEMI;
	v->a[61087] = state(1165);
	v->a[61088] = 3;
	v->a[61089] = sym_file_redirect;
	v->a[61090] = sym_heredoc_redirect;
	v->a[61091] = aux_sym_redirected_statement_repeat1;
	v->a[61092] = actions(2037);
	v->a[61093] = 6;
	v->a[61094] = anon_sym_LT;
	v->a[61095] = anon_sym_GT;
	v->a[61096] = anon_sym_GT_GT;
	v->a[61097] = anon_sym_LT_AMP;
	v->a[61098] = anon_sym_GT_AMP;
	v->a[61099] = anon_sym_GT_PIPE;
	small_parse_table_3055(v);
}

/* EOF small_parse_table_610.c */
