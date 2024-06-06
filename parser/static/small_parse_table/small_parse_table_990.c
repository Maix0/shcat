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
	v->a[99000] = 7;
	v->a[99001] = sym_arithmetic_expansion;
	v->a[99002] = sym_brace_expression;
	v->a[99003] = sym_string;
	v->a[99004] = sym_number;
	v->a[99005] = sym_simple_expansion;
	v->a[99006] = sym_expansion;
	v->a[99007] = sym_command_substitution;
	v->a[99008] = 5;
	v->a[99009] = actions(3);
	v->a[99010] = 1;
	v->a[99011] = sym_comment;
	v->a[99012] = state(2711);
	v->a[99013] = 1;
	v->a[99014] = aux_sym_pipeline_repeat1;
	v->a[99015] = actions(5367);
	v->a[99016] = 2;
	v->a[99017] = sym_file_descriptor;
	v->a[99018] = aux_sym_heredoc_redirect_token1;
	v->a[99019] = actions(5531);
	small_parse_table_4951(v);
}

void	small_parse_table_4951(t_small_parse_table_array *v)
{
	v->a[99020] = 2;
	v->a[99021] = anon_sym_PIPE;
	v->a[99022] = anon_sym_PIPE_AMP;
	v->a[99023] = actions(5362);
	v->a[99024] = 20;
	v->a[99025] = anon_sym_esac;
	v->a[99026] = anon_sym_SEMI_SEMI;
	v->a[99027] = anon_sym_SEMI_AMP;
	v->a[99028] = anon_sym_SEMI_SEMI_AMP;
	v->a[99029] = anon_sym_AMP_AMP;
	v->a[99030] = anon_sym_PIPE_PIPE;
	v->a[99031] = anon_sym_LT;
	v->a[99032] = anon_sym_GT;
	v->a[99033] = anon_sym_GT_GT;
	v->a[99034] = anon_sym_AMP_GT;
	v->a[99035] = anon_sym_AMP_GT_GT;
	v->a[99036] = anon_sym_LT_AMP;
	v->a[99037] = anon_sym_GT_AMP;
	v->a[99038] = anon_sym_GT_PIPE;
	v->a[99039] = anon_sym_LT_AMP_DASH;
	small_parse_table_4952(v);
}

void	small_parse_table_4952(t_small_parse_table_array *v)
{
	v->a[99040] = anon_sym_GT_AMP_DASH;
	v->a[99041] = anon_sym_LT_LT;
	v->a[99042] = anon_sym_LT_LT_DASH;
	v->a[99043] = anon_sym_AMP;
	v->a[99044] = anon_sym_SEMI;
	v->a[99045] = 7;
	v->a[99046] = actions(3);
	v->a[99047] = 1;
	v->a[99048] = sym_comment;
	v->a[99049] = actions(5281);
	v->a[99050] = 1;
	v->a[99051] = aux_sym_heredoc_redirect_token1;
	v->a[99052] = actions(5540);
	v->a[99053] = 1;
	v->a[99054] = sym_file_descriptor;
	v->a[99055] = actions(5537);
	v->a[99056] = 2;
	v->a[99057] = anon_sym_LT_AMP_DASH;
	v->a[99058] = anon_sym_GT_AMP_DASH;
	v->a[99059] = state(2061);
	small_parse_table_4953(v);
}

void	small_parse_table_4953(t_small_parse_table_array *v)
{
	v->a[99060] = 2;
	v->a[99061] = sym_file_redirect;
	v->a[99062] = aux_sym_redirected_statement_repeat2;
	v->a[99063] = actions(5534);
	v->a[99064] = 8;
	v->a[99065] = anon_sym_LT;
	v->a[99066] = anon_sym_GT;
	v->a[99067] = anon_sym_GT_GT;
	v->a[99068] = anon_sym_AMP_GT;
	v->a[99069] = anon_sym_AMP_GT_GT;
	v->a[99070] = anon_sym_LT_AMP;
	v->a[99071] = anon_sym_GT_AMP;
	v->a[99072] = anon_sym_GT_PIPE;
	v->a[99073] = actions(5273);
	v->a[99074] = 11;
	v->a[99075] = anon_sym_PIPE;
	v->a[99076] = anon_sym_SEMI_SEMI;
	v->a[99077] = anon_sym_SEMI_AMP;
	v->a[99078] = anon_sym_SEMI_SEMI_AMP;
	v->a[99079] = anon_sym_PIPE_AMP;
	small_parse_table_4954(v);
}

void	small_parse_table_4954(t_small_parse_table_array *v)
{
	v->a[99080] = anon_sym_AMP_AMP;
	v->a[99081] = anon_sym_PIPE_PIPE;
	v->a[99082] = anon_sym_LT_LT;
	v->a[99083] = anon_sym_LT_LT_DASH;
	v->a[99084] = anon_sym_AMP;
	v->a[99085] = anon_sym_SEMI;
	v->a[99086] = 19;
	v->a[99087] = actions(3);
	v->a[99088] = 1;
	v->a[99089] = sym_comment;
	v->a[99090] = actions(5543);
	v->a[99091] = 1;
	v->a[99092] = sym_word;
	v->a[99093] = actions(5545);
	v->a[99094] = 1;
	v->a[99095] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[99096] = actions(5547);
	v->a[99097] = 1;
	v->a[99098] = anon_sym_DOLLAR;
	v->a[99099] = actions(5549);
	small_parse_table_4955(v);
}

/* EOF small_parse_table_990.c */
