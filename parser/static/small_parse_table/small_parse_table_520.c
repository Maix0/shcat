/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_520.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2600(t_small_parse_table_array *v)
{
	v->a[52000] = anon_sym_AMP_AMP;
	v->a[52001] = anon_sym_PIPE_PIPE;
	v->a[52002] = anon_sym_LT_LT;
	v->a[52003] = anon_sym_LT_LT_DASH;
	v->a[52004] = anon_sym_SEMI;
	v->a[52005] = 5;
	v->a[52006] = actions(3);
	v->a[52007] = 1;
	v->a[52008] = sym_comment;
	v->a[52009] = actions(1692);
	v->a[52010] = 1;
	v->a[52011] = aux_sym_heredoc_redirect_token1;
	v->a[52012] = actions(1830);
	v->a[52013] = 1;
	v->a[52014] = sym_variable_name;
	v->a[52015] = state(1000);
	v->a[52016] = 2;
	v->a[52017] = sym_variable_assignment;
	v->a[52018] = aux_sym__variable_assignments_repeat1;
	v->a[52019] = actions(1694);
	small_parse_table_2601(v);
}

void	small_parse_table_2601(t_small_parse_table_array *v)
{
	v->a[52020] = 14;
	v->a[52021] = anon_sym_PIPE;
	v->a[52022] = anon_sym_SEMI_SEMI;
	v->a[52023] = anon_sym_AMP_AMP;
	v->a[52024] = anon_sym_PIPE_PIPE;
	v->a[52025] = anon_sym_LT;
	v->a[52026] = anon_sym_GT;
	v->a[52027] = anon_sym_GT_GT;
	v->a[52028] = anon_sym_LT_AMP;
	v->a[52029] = anon_sym_GT_AMP;
	v->a[52030] = anon_sym_GT_PIPE;
	v->a[52031] = anon_sym_LT_GT;
	v->a[52032] = anon_sym_LT_LT;
	v->a[52033] = anon_sym_LT_LT_DASH;
	v->a[52034] = anon_sym_SEMI;
	v->a[52035] = 3;
	v->a[52036] = actions(3);
	v->a[52037] = 1;
	v->a[52038] = sym_comment;
	v->a[52039] = actions(1832);
	small_parse_table_2602(v);
}

void	small_parse_table_2602(t_small_parse_table_array *v)
{
	v->a[52040] = 2;
	v->a[52041] = ts_builtin_sym_end;
	v->a[52042] = aux_sym_heredoc_redirect_token1;
	v->a[52043] = actions(1834);
	v->a[52044] = 16;
	v->a[52045] = anon_sym_PIPE;
	v->a[52046] = anon_sym_RPAREN;
	v->a[52047] = anon_sym_SEMI_SEMI;
	v->a[52048] = anon_sym_AMP_AMP;
	v->a[52049] = anon_sym_PIPE_PIPE;
	v->a[52050] = anon_sym_LT;
	v->a[52051] = anon_sym_GT;
	v->a[52052] = anon_sym_GT_GT;
	v->a[52053] = anon_sym_LT_AMP;
	v->a[52054] = anon_sym_GT_AMP;
	v->a[52055] = anon_sym_GT_PIPE;
	v->a[52056] = anon_sym_LT_GT;
	v->a[52057] = anon_sym_LT_LT;
	v->a[52058] = anon_sym_LT_LT_DASH;
	v->a[52059] = anon_sym_BQUOTE;
	small_parse_table_2603(v);
}

void	small_parse_table_2603(t_small_parse_table_array *v)
{
	v->a[52060] = anon_sym_SEMI;
	v->a[52061] = 5;
	v->a[52062] = actions(3);
	v->a[52063] = 1;
	v->a[52064] = sym_comment;
	v->a[52065] = actions(1828);
	v->a[52066] = 2;
	v->a[52067] = ts_builtin_sym_end;
	v->a[52068] = aux_sym_heredoc_redirect_token1;
	v->a[52069] = state(1011);
	v->a[52070] = 2;
	v->a[52071] = sym_file_redirect;
	v->a[52072] = aux_sym_redirected_statement_repeat2;
	v->a[52073] = actions(1603);
	v->a[52074] = 7;
	v->a[52075] = anon_sym_LT;
	v->a[52076] = anon_sym_GT;
	v->a[52077] = anon_sym_GT_GT;
	v->a[52078] = anon_sym_LT_AMP;
	v->a[52079] = anon_sym_GT_AMP;
	small_parse_table_2604(v);
}

void	small_parse_table_2604(t_small_parse_table_array *v)
{
	v->a[52080] = anon_sym_GT_PIPE;
	v->a[52081] = anon_sym_LT_GT;
	v->a[52082] = actions(1826);
	v->a[52083] = 7;
	v->a[52084] = anon_sym_PIPE;
	v->a[52085] = anon_sym_SEMI_SEMI;
	v->a[52086] = anon_sym_AMP_AMP;
	v->a[52087] = anon_sym_PIPE_PIPE;
	v->a[52088] = anon_sym_LT_LT;
	v->a[52089] = anon_sym_LT_LT_DASH;
	v->a[52090] = anon_sym_SEMI;
	v->a[52091] = 8;
	v->a[52092] = actions(3);
	v->a[52093] = 1;
	v->a[52094] = sym_comment;
	v->a[52095] = actions(1719);
	v->a[52096] = 1;
	v->a[52097] = aux_sym_heredoc_redirect_token1;
	v->a[52098] = state(622);
	v->a[52099] = 1;
	small_parse_table_2605(v);
}

/* EOF small_parse_table_520.c */
