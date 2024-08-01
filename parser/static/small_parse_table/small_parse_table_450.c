/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_450.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2250(t_small_parse_table_array *v)
{
	v->a[45000] = 2;
	v->a[45001] = anon_sym_SEMI_SEMI;
	v->a[45002] = anon_sym_SEMI;
	v->a[45003] = actions(769);
	v->a[45004] = 2;
	v->a[45005] = anon_sym_AMP_AMP;
	v->a[45006] = anon_sym_PIPE_PIPE;
	v->a[45007] = actions(1924);
	v->a[45008] = 3;
	v->a[45009] = anon_sym_LT;
	v->a[45010] = anon_sym_GT;
	v->a[45011] = anon_sym_GT_GT;
	v->a[45012] = state(1040);
	v->a[45013] = 3;
	v->a[45014] = sym_file_redirect;
	v->a[45015] = sym_heredoc_redirect;
	v->a[45016] = aux_sym_redirected_statement_repeat1;
	v->a[45017] = 3;
	v->a[45018] = actions(3);
	v->a[45019] = 1;
	small_parse_table_2251(v);
}

void	small_parse_table_2251(t_small_parse_table_array *v)
{
	v->a[45020] = sym_comment;
	v->a[45021] = actions(917);
	v->a[45022] = 3;
	v->a[45023] = sym_variable_name;
	v->a[45024] = ts_builtin_sym_end;
	v->a[45025] = aux_sym_heredoc_redirect_token1;
	v->a[45026] = actions(919);
	v->a[45027] = 11;
	v->a[45028] = anon_sym_PIPE;
	v->a[45029] = anon_sym_RPAREN;
	v->a[45030] = anon_sym_SEMI_SEMI;
	v->a[45031] = anon_sym_AMP_AMP;
	v->a[45032] = anon_sym_PIPE_PIPE;
	v->a[45033] = anon_sym_LT;
	v->a[45034] = anon_sym_GT;
	v->a[45035] = anon_sym_GT_GT;
	v->a[45036] = anon_sym_LT_LT;
	v->a[45037] = anon_sym_BQUOTE;
	v->a[45038] = anon_sym_SEMI;
	v->a[45039] = 10;
	small_parse_table_2252(v);
}

void	small_parse_table_2252(t_small_parse_table_array *v)
{
	v->a[45040] = actions(3);
	v->a[45041] = 1;
	v->a[45042] = sym_comment;
	v->a[45043] = actions(580);
	v->a[45044] = 1;
	v->a[45045] = anon_sym_PIPE;
	v->a[45046] = actions(591);
	v->a[45047] = 1;
	v->a[45048] = anon_sym_SEMI_SEMI;
	v->a[45049] = actions(593);
	v->a[45050] = 1;
	v->a[45051] = anon_sym_SEMI;
	v->a[45052] = actions(597);
	v->a[45053] = 1;
	v->a[45054] = anon_sym_LT_LT;
	v->a[45055] = actions(1870);
	v->a[45056] = 1;
	v->a[45057] = aux_sym_heredoc_redirect_token1;
	v->a[45058] = state(369);
	v->a[45059] = 1;
	small_parse_table_2253(v);
}

void	small_parse_table_2253(t_small_parse_table_array *v)
{
	v->a[45060] = sym_terminator;
	v->a[45061] = actions(769);
	v->a[45062] = 2;
	v->a[45063] = anon_sym_AMP_AMP;
	v->a[45064] = anon_sym_PIPE_PIPE;
	v->a[45065] = actions(1924);
	v->a[45066] = 3;
	v->a[45067] = anon_sym_LT;
	v->a[45068] = anon_sym_GT;
	v->a[45069] = anon_sym_GT_GT;
	v->a[45070] = state(1040);
	v->a[45071] = 3;
	v->a[45072] = sym_file_redirect;
	v->a[45073] = sym_heredoc_redirect;
	v->a[45074] = aux_sym_redirected_statement_repeat1;
	v->a[45075] = 10;
	v->a[45076] = actions(3);
	v->a[45077] = 1;
	v->a[45078] = sym_comment;
	v->a[45079] = actions(580);
	small_parse_table_2254(v);
}

void	small_parse_table_2254(t_small_parse_table_array *v)
{
	v->a[45080] = 1;
	v->a[45081] = anon_sym_PIPE;
	v->a[45082] = actions(591);
	v->a[45083] = 1;
	v->a[45084] = anon_sym_SEMI_SEMI;
	v->a[45085] = actions(593);
	v->a[45086] = 1;
	v->a[45087] = anon_sym_SEMI;
	v->a[45088] = actions(597);
	v->a[45089] = 1;
	v->a[45090] = anon_sym_LT_LT;
	v->a[45091] = actions(1870);
	v->a[45092] = 1;
	v->a[45093] = aux_sym_heredoc_redirect_token1;
	v->a[45094] = state(367);
	v->a[45095] = 1;
	v->a[45096] = sym_terminator;
	v->a[45097] = actions(769);
	v->a[45098] = 2;
	v->a[45099] = anon_sym_AMP_AMP;
	small_parse_table_2255(v);
}

/* EOF small_parse_table_450.c */
