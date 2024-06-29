/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_675.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3375(t_small_parse_table_array *v)
{
	v->a[67500] = ts_builtin_sym_end;
	v->a[67501] = aux_sym_heredoc_redirect_token1;
	v->a[67502] = actions(2055);
	v->a[67503] = 18;
	v->a[67504] = anon_sym_PIPE;
	v->a[67505] = anon_sym_SEMI_SEMI;
	v->a[67506] = anon_sym_AMP_AMP;
	v->a[67507] = anon_sym_PIPE_PIPE;
	v->a[67508] = anon_sym_LT;
	v->a[67509] = anon_sym_GT;
	v->a[67510] = anon_sym_GT_GT;
	v->a[67511] = anon_sym_AMP_GT;
	v->a[67512] = anon_sym_AMP_GT_GT;
	v->a[67513] = anon_sym_LT_AMP;
	v->a[67514] = anon_sym_GT_AMP;
	v->a[67515] = anon_sym_GT_PIPE;
	v->a[67516] = anon_sym_LT_AMP_DASH;
	v->a[67517] = anon_sym_GT_AMP_DASH;
	v->a[67518] = anon_sym_LT_LT;
	v->a[67519] = anon_sym_LT_LT_DASH;
	small_parse_table_3376(v);
}

void	small_parse_table_3376(t_small_parse_table_array *v)
{
	v->a[67520] = anon_sym_AMP;
	v->a[67521] = anon_sym_SEMI;
	v->a[67522] = 8;
	v->a[67523] = actions(3);
	v->a[67524] = 1;
	v->a[67525] = sym_comment;
	v->a[67526] = actions(2171);
	v->a[67527] = 1;
	v->a[67528] = sym_file_descriptor;
	v->a[67529] = actions(2079);
	v->a[67530] = 2;
	v->a[67531] = ts_builtin_sym_end;
	v->a[67532] = aux_sym_heredoc_redirect_token1;
	v->a[67533] = actions(2113);
	v->a[67534] = 2;
	v->a[67535] = anon_sym_LT_LT;
	v->a[67536] = anon_sym_LT_LT_DASH;
	v->a[67537] = actions(2168);
	v->a[67538] = 2;
	v->a[67539] = anon_sym_LT_AMP_DASH;
	small_parse_table_3377(v);
}

void	small_parse_table_3377(t_small_parse_table_array *v)
{
	v->a[67540] = anon_sym_GT_AMP_DASH;
	v->a[67541] = state(1164);
	v->a[67542] = 3;
	v->a[67543] = sym_file_redirect;
	v->a[67544] = sym_heredoc_redirect;
	v->a[67545] = aux_sym_redirected_statement_repeat1;
	v->a[67546] = actions(2068);
	v->a[67547] = 6;
	v->a[67548] = anon_sym_PIPE;
	v->a[67549] = anon_sym_SEMI_SEMI;
	v->a[67550] = anon_sym_AMP_AMP;
	v->a[67551] = anon_sym_PIPE_PIPE;
	v->a[67552] = anon_sym_AMP;
	v->a[67553] = anon_sym_SEMI;
	v->a[67554] = actions(2165);
	v->a[67555] = 8;
	v->a[67556] = anon_sym_LT;
	v->a[67557] = anon_sym_GT;
	v->a[67558] = anon_sym_GT_GT;
	v->a[67559] = anon_sym_AMP_GT;
	small_parse_table_3378(v);
}

void	small_parse_table_3378(t_small_parse_table_array *v)
{
	v->a[67560] = anon_sym_AMP_GT_GT;
	v->a[67561] = anon_sym_LT_AMP;
	v->a[67562] = anon_sym_GT_AMP;
	v->a[67563] = anon_sym_GT_PIPE;
	v->a[67564] = 12;
	v->a[67565] = actions(3);
	v->a[67566] = 1;
	v->a[67567] = sym_comment;
	v->a[67568] = actions(764);
	v->a[67569] = 1;
	v->a[67570] = anon_sym_SEMI_SEMI;
	v->a[67571] = actions(766);
	v->a[67572] = 1;
	v->a[67573] = anon_sym_PIPE;
	v->a[67574] = actions(2031);
	v->a[67575] = 1;
	v->a[67576] = aux_sym_heredoc_redirect_token1;
	v->a[67577] = actions(2066);
	v->a[67578] = 1;
	v->a[67579] = sym_file_descriptor;
	small_parse_table_3379(v);
}

void	small_parse_table_3379(t_small_parse_table_array *v)
{
	v->a[67580] = state(722);
	v->a[67581] = 1;
	v->a[67582] = sym_terminator;
	v->a[67583] = actions(800);
	v->a[67584] = 2;
	v->a[67585] = anon_sym_AMP;
	v->a[67586] = anon_sym_SEMI;
	v->a[67587] = actions(804);
	v->a[67588] = 2;
	v->a[67589] = anon_sym_LT_LT;
	v->a[67590] = anon_sym_LT_LT_DASH;
	v->a[67591] = actions(893);
	v->a[67592] = 2;
	v->a[67593] = anon_sym_AMP_AMP;
	v->a[67594] = anon_sym_PIPE_PIPE;
	v->a[67595] = actions(2064);
	v->a[67596] = 2;
	v->a[67597] = anon_sym_LT_AMP_DASH;
	v->a[67598] = anon_sym_GT_AMP_DASH;
	v->a[67599] = state(1256);
	small_parse_table_3380(v);
}

/* EOF small_parse_table_675.c */
