/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2440.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12200(t_small_parse_table_array *v)
{
	v->a[244000] = 2;
	v->a[244001] = anon_sym_PIPE;
	v->a[244002] = anon_sym_PIPE_AMP;
	v->a[244003] = actions(4690);
	v->a[244004] = 2;
	v->a[244005] = anon_sym_PIPE_PIPE;
	v->a[244006] = anon_sym_AMP_AMP;
	v->a[244007] = actions(4692);
	v->a[244008] = 2;
	v->a[244009] = anon_sym_LT_LT;
	v->a[244010] = anon_sym_LT_LT_DASH;
	v->a[244011] = actions(11481);
	v->a[244012] = 2;
	v->a[244013] = anon_sym_LT_AMP_DASH;
	v->a[244014] = anon_sym_GT_AMP_DASH;
	v->a[244015] = actions(4688);
	v->a[244016] = 3;
	v->a[244017] = anon_sym_SEMI;
	v->a[244018] = anon_sym_AMP;
	v->a[244019] = anon_sym_SEMI_SEMI;
	small_parse_table_12201(v);
}

void	small_parse_table_12201(t_small_parse_table_array *v)
{
	v->a[244020] = state(4650);
	v->a[244021] = 3;
	v->a[244022] = sym_file_redirect;
	v->a[244023] = sym_heredoc_redirect;
	v->a[244024] = aux_sym_redirected_statement_repeat1;
	v->a[244025] = actions(11479);
	v->a[244026] = 8;
	v->a[244027] = anon_sym_LT;
	v->a[244028] = anon_sym_GT;
	v->a[244029] = anon_sym_GT_GT;
	v->a[244030] = anon_sym_AMP_GT;
	v->a[244031] = anon_sym_AMP_GT_GT;
	v->a[244032] = anon_sym_LT_AMP;
	v->a[244033] = anon_sym_GT_AMP;
	v->a[244034] = anon_sym_GT_PIPE;
	v->a[244035] = 3;
	v->a[244036] = actions(3);
	v->a[244037] = 1;
	v->a[244038] = sym_comment;
	v->a[244039] = actions(1350);
	small_parse_table_12202(v);
}

void	small_parse_table_12202(t_small_parse_table_array *v)
{
	v->a[244040] = 4;
	v->a[244041] = sym_file_descriptor;
	v->a[244042] = sym__concat;
	v->a[244043] = sym_variable_name;
	v->a[244044] = aux_sym_heredoc_redirect_token1;
	v->a[244045] = actions(1348);
	v->a[244046] = 23;
	v->a[244047] = anon_sym_SEMI;
	v->a[244048] = anon_sym_PIPE_PIPE;
	v->a[244049] = anon_sym_AMP_AMP;
	v->a[244050] = anon_sym_PIPE;
	v->a[244051] = anon_sym_AMP;
	v->a[244052] = anon_sym_LT;
	v->a[244053] = anon_sym_GT;
	v->a[244054] = anon_sym_LT_LT;
	v->a[244055] = anon_sym_GT_GT;
	v->a[244056] = anon_sym_esac;
	v->a[244057] = anon_sym_SEMI_SEMI;
	v->a[244058] = anon_sym_SEMI_AMP;
	v->a[244059] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_12203(v);
}

void	small_parse_table_12203(t_small_parse_table_array *v)
{
	v->a[244060] = anon_sym_PIPE_AMP;
	v->a[244061] = anon_sym_AMP_GT;
	v->a[244062] = anon_sym_AMP_GT_GT;
	v->a[244063] = anon_sym_LT_AMP;
	v->a[244064] = anon_sym_GT_AMP;
	v->a[244065] = anon_sym_GT_PIPE;
	v->a[244066] = anon_sym_LT_AMP_DASH;
	v->a[244067] = anon_sym_GT_AMP_DASH;
	v->a[244068] = anon_sym_LT_LT_DASH;
	v->a[244069] = aux_sym_concatenation_token1;
	v->a[244070] = 3;
	v->a[244071] = actions(3);
	v->a[244072] = 1;
	v->a[244073] = sym_comment;
	v->a[244074] = actions(1322);
	v->a[244075] = 4;
	v->a[244076] = sym_file_descriptor;
	v->a[244077] = sym__concat;
	v->a[244078] = sym_variable_name;
	v->a[244079] = aux_sym_heredoc_redirect_token1;
	small_parse_table_12204(v);
}

void	small_parse_table_12204(t_small_parse_table_array *v)
{
	v->a[244080] = actions(1320);
	v->a[244081] = 23;
	v->a[244082] = anon_sym_SEMI;
	v->a[244083] = anon_sym_PIPE_PIPE;
	v->a[244084] = anon_sym_AMP_AMP;
	v->a[244085] = anon_sym_PIPE;
	v->a[244086] = anon_sym_AMP;
	v->a[244087] = anon_sym_LT;
	v->a[244088] = anon_sym_GT;
	v->a[244089] = anon_sym_LT_LT;
	v->a[244090] = anon_sym_GT_GT;
	v->a[244091] = anon_sym_esac;
	v->a[244092] = anon_sym_SEMI_SEMI;
	v->a[244093] = anon_sym_SEMI_AMP;
	v->a[244094] = anon_sym_SEMI_SEMI_AMP;
	v->a[244095] = anon_sym_PIPE_AMP;
	v->a[244096] = anon_sym_AMP_GT;
	v->a[244097] = anon_sym_AMP_GT_GT;
	v->a[244098] = anon_sym_LT_AMP;
	v->a[244099] = anon_sym_GT_AMP;
	small_parse_table_12205(v);
}

/* EOF small_parse_table_2440.c */
