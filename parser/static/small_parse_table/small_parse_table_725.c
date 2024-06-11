/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_725.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3625(t_small_parse_table_array *v)
{
	v->a[72500] = actions(2571);
	v->a[72501] = 1;
	v->a[72502] = aux_sym_heredoc_redirect_token1;
	v->a[72503] = actions(2573);
	v->a[72504] = 1;
	v->a[72505] = anon_sym_AMP;
	v->a[72506] = actions(2575);
	v->a[72507] = 1;
	v->a[72508] = anon_sym_SEMI;
	v->a[72509] = actions(859);
	v->a[72510] = 2;
	v->a[72511] = anon_sym_AMP_AMP;
	v->a[72512] = anon_sym_PIPE_PIPE;
	v->a[72513] = actions(861);
	v->a[72514] = 2;
	v->a[72515] = anon_sym_LT_LT;
	v->a[72516] = anon_sym_LT_LT_DASH;
	v->a[72517] = actions(2079);
	v->a[72518] = 2;
	v->a[72519] = anon_sym_LT_AMP_DASH;
	small_parse_table_3626(v);
}

void	small_parse_table_3626(t_small_parse_table_array *v)
{
	v->a[72520] = anon_sym_GT_AMP_DASH;
	v->a[72521] = state(1283);
	v->a[72522] = 3;
	v->a[72523] = sym_file_redirect;
	v->a[72524] = sym_heredoc_redirect;
	v->a[72525] = aux_sym_redirected_statement_repeat1;
	v->a[72526] = actions(2077);
	v->a[72527] = 8;
	v->a[72528] = anon_sym_LT;
	v->a[72529] = anon_sym_GT;
	v->a[72530] = anon_sym_GT_GT;
	v->a[72531] = anon_sym_AMP_GT;
	v->a[72532] = anon_sym_AMP_GT_GT;
	v->a[72533] = anon_sym_LT_AMP;
	v->a[72534] = anon_sym_GT_AMP;
	v->a[72535] = anon_sym_GT_PIPE;
	v->a[72536] = 13;
	v->a[72537] = actions(3);
	v->a[72538] = 1;
	v->a[72539] = sym_comment;
	small_parse_table_3627(v);
}

void	small_parse_table_3627(t_small_parse_table_array *v)
{
	v->a[72540] = actions(807);
	v->a[72541] = 1;
	v->a[72542] = anon_sym_PIPE;
	v->a[72543] = actions(840);
	v->a[72544] = 1;
	v->a[72545] = anon_sym_RPAREN;
	v->a[72546] = actions(2083);
	v->a[72547] = 1;
	v->a[72548] = sym_file_descriptor;
	v->a[72549] = actions(2577);
	v->a[72550] = 1;
	v->a[72551] = anon_sym_SEMI_SEMI;
	v->a[72552] = actions(2579);
	v->a[72553] = 1;
	v->a[72554] = aux_sym_heredoc_redirect_token1;
	v->a[72555] = actions(2581);
	v->a[72556] = 1;
	v->a[72557] = anon_sym_AMP;
	v->a[72558] = actions(2583);
	v->a[72559] = 1;
	small_parse_table_3628(v);
}

void	small_parse_table_3628(t_small_parse_table_array *v)
{
	v->a[72560] = anon_sym_SEMI;
	v->a[72561] = actions(859);
	v->a[72562] = 2;
	v->a[72563] = anon_sym_AMP_AMP;
	v->a[72564] = anon_sym_PIPE_PIPE;
	v->a[72565] = actions(861);
	v->a[72566] = 2;
	v->a[72567] = anon_sym_LT_LT;
	v->a[72568] = anon_sym_LT_LT_DASH;
	v->a[72569] = actions(2079);
	v->a[72570] = 2;
	v->a[72571] = anon_sym_LT_AMP_DASH;
	v->a[72572] = anon_sym_GT_AMP_DASH;
	v->a[72573] = state(1283);
	v->a[72574] = 3;
	v->a[72575] = sym_file_redirect;
	v->a[72576] = sym_heredoc_redirect;
	v->a[72577] = aux_sym_redirected_statement_repeat1;
	v->a[72578] = actions(2077);
	v->a[72579] = 8;
	small_parse_table_3629(v);
}

void	small_parse_table_3629(t_small_parse_table_array *v)
{
	v->a[72580] = anon_sym_LT;
	v->a[72581] = anon_sym_GT;
	v->a[72582] = anon_sym_GT_GT;
	v->a[72583] = anon_sym_AMP_GT;
	v->a[72584] = anon_sym_AMP_GT_GT;
	v->a[72585] = anon_sym_LT_AMP;
	v->a[72586] = anon_sym_GT_AMP;
	v->a[72587] = anon_sym_GT_PIPE;
	v->a[72588] = 11;
	v->a[72589] = actions(3);
	v->a[72590] = 1;
	v->a[72591] = sym_comment;
	v->a[72592] = actions(807);
	v->a[72593] = 1;
	v->a[72594] = anon_sym_PIPE;
	v->a[72595] = actions(2184);
	v->a[72596] = 1;
	v->a[72597] = sym_file_descriptor;
	v->a[72598] = actions(2585);
	v->a[72599] = 1;
	small_parse_table_3630(v);
}

/* EOF small_parse_table_725.c */
