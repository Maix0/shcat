/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_820.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4100(t_small_parse_table_array *v)
{
	v->a[82000] = anon_sym_PIPE_PIPE;
	v->a[82001] = actions(3019);
	v->a[82002] = 2;
	v->a[82003] = anon_sym_LT_AMP_DASH;
	v->a[82004] = anon_sym_GT_AMP_DASH;
	v->a[82005] = actions(3017);
	v->a[82006] = 3;
	v->a[82007] = anon_sym_GT_GT;
	v->a[82008] = anon_sym_AMP_GT_GT;
	v->a[82009] = anon_sym_GT_PIPE;
	v->a[82010] = state(1573);
	v->a[82011] = 3;
	v->a[82012] = sym_file_redirect;
	v->a[82013] = sym_heredoc_redirect;
	v->a[82014] = aux_sym_redirected_statement_repeat1;
	v->a[82015] = actions(3015);
	v->a[82016] = 5;
	v->a[82017] = anon_sym_LT;
	v->a[82018] = anon_sym_GT;
	v->a[82019] = anon_sym_AMP_GT;
	small_parse_table_4101(v);
}

void	small_parse_table_4101(t_small_parse_table_array *v)
{
	v->a[82020] = anon_sym_LT_AMP;
	v->a[82021] = anon_sym_GT_AMP;
	v->a[82022] = 5;
	v->a[82023] = actions(1094);
	v->a[82024] = 1;
	v->a[82025] = sym_comment;
	v->a[82026] = state(1574);
	v->a[82027] = 1;
	v->a[82028] = aux_sym_concatenation_repeat1;
	v->a[82029] = actions(3013);
	v->a[82030] = 2;
	v->a[82031] = sym__concat;
	v->a[82032] = aux_sym_concatenation_token1;
	v->a[82033] = actions(610);
	v->a[82034] = 7;
	v->a[82035] = anon_sym_PIPE;
	v->a[82036] = anon_sym_LT;
	v->a[82037] = anon_sym_GT;
	v->a[82038] = anon_sym_AMP_GT;
	v->a[82039] = anon_sym_LT_AMP;
	small_parse_table_4102(v);
}

void	small_parse_table_4102(t_small_parse_table_array *v)
{
	v->a[82040] = anon_sym_GT_AMP;
	v->a[82041] = anon_sym_LT_LT;
	v->a[82042] = actions(608);
	v->a[82043] = 9;
	v->a[82044] = sym_file_descriptor;
	v->a[82045] = anon_sym_AMP_AMP;
	v->a[82046] = anon_sym_PIPE_PIPE;
	v->a[82047] = anon_sym_GT_GT;
	v->a[82048] = anon_sym_AMP_GT_GT;
	v->a[82049] = anon_sym_GT_PIPE;
	v->a[82050] = anon_sym_LT_AMP_DASH;
	v->a[82051] = anon_sym_GT_AMP_DASH;
	v->a[82052] = anon_sym_LT_LT_DASH;
	v->a[82053] = 5;
	v->a[82054] = actions(807);
	v->a[82055] = 1;
	v->a[82056] = anon_sym_PIPE;
	v->a[82057] = actions(1094);
	v->a[82058] = 1;
	v->a[82059] = sym_comment;
	small_parse_table_4103(v);
}

void	small_parse_table_4103(t_small_parse_table_array *v)
{
	v->a[82060] = state(1559);
	v->a[82061] = 3;
	v->a[82062] = sym_file_redirect;
	v->a[82063] = sym_heredoc_redirect;
	v->a[82064] = aux_sym_redirected_statement_repeat1;
	v->a[82065] = actions(809);
	v->a[82066] = 6;
	v->a[82067] = anon_sym_LT;
	v->a[82068] = anon_sym_GT;
	v->a[82069] = anon_sym_AMP_GT;
	v->a[82070] = anon_sym_LT_AMP;
	v->a[82071] = anon_sym_GT_AMP;
	v->a[82072] = anon_sym_LT_LT;
	v->a[82073] = actions(803);
	v->a[82074] = 9;
	v->a[82075] = sym_file_descriptor;
	v->a[82076] = anon_sym_AMP_AMP;
	v->a[82077] = anon_sym_PIPE_PIPE;
	v->a[82078] = anon_sym_GT_GT;
	v->a[82079] = anon_sym_AMP_GT_GT;
	small_parse_table_4104(v);
}

void	small_parse_table_4104(t_small_parse_table_array *v)
{
	v->a[82080] = anon_sym_GT_PIPE;
	v->a[82081] = anon_sym_LT_AMP_DASH;
	v->a[82082] = anon_sym_GT_AMP_DASH;
	v->a[82083] = anon_sym_LT_LT_DASH;
	v->a[82084] = 3;
	v->a[82085] = actions(1094);
	v->a[82086] = 1;
	v->a[82087] = sym_comment;
	v->a[82088] = actions(1122);
	v->a[82089] = 7;
	v->a[82090] = anon_sym_PIPE;
	v->a[82091] = anon_sym_LT;
	v->a[82092] = anon_sym_GT;
	v->a[82093] = anon_sym_AMP_GT;
	v->a[82094] = anon_sym_LT_AMP;
	v->a[82095] = anon_sym_GT_AMP;
	v->a[82096] = anon_sym_LT_LT;
	v->a[82097] = actions(1124);
	v->a[82098] = 12;
	v->a[82099] = sym_file_descriptor;
	small_parse_table_4105(v);
}

/* EOF small_parse_table_820.c */
