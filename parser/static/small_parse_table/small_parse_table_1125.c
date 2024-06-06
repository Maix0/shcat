/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1125.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5625(t_small_parse_table_array *v)
{
	v->a[112500] = 2;
	v->a[112501] = anon_sym_LT_LT;
	v->a[112502] = anon_sym_LT_LT_DASH;
	v->a[112503] = actions(2960);
	v->a[112504] = 2;
	v->a[112505] = anon_sym_AMP_AMP;
	v->a[112506] = anon_sym_PIPE_PIPE;
	v->a[112507] = actions(5678);
	v->a[112508] = 2;
	v->a[112509] = anon_sym_LT_AMP_DASH;
	v->a[112510] = anon_sym_GT_AMP_DASH;
	v->a[112511] = actions(2745);
	v->a[112512] = 3;
	v->a[112513] = anon_sym_SEMI_SEMI;
	v->a[112514] = anon_sym_AMP;
	v->a[112515] = anon_sym_SEMI;
	v->a[112516] = state(2109);
	v->a[112517] = 3;
	v->a[112518] = sym_file_redirect;
	v->a[112519] = sym_heredoc_redirect;
	small_parse_table_5626(v);
}

void	small_parse_table_5626(t_small_parse_table_array *v)
{
	v->a[112520] = aux_sym_redirected_statement_repeat1;
	v->a[112521] = actions(5676);
	v->a[112522] = 8;
	v->a[112523] = anon_sym_LT;
	v->a[112524] = anon_sym_GT;
	v->a[112525] = anon_sym_GT_GT;
	v->a[112526] = anon_sym_AMP_GT;
	v->a[112527] = anon_sym_AMP_GT_GT;
	v->a[112528] = anon_sym_LT_AMP;
	v->a[112529] = anon_sym_GT_AMP;
	v->a[112530] = anon_sym_GT_PIPE;
	v->a[112531] = 7;
	v->a[112532] = actions(3);
	v->a[112533] = 1;
	v->a[112534] = sym_comment;
	v->a[112535] = actions(5256);
	v->a[112536] = 1;
	v->a[112537] = aux_sym_heredoc_redirect_token1;
	v->a[112538] = actions(6464);
	v->a[112539] = 1;
	small_parse_table_5627(v);
}

void	small_parse_table_5627(t_small_parse_table_array *v)
{
	v->a[112540] = sym_file_descriptor;
	v->a[112541] = actions(5968);
	v->a[112542] = 2;
	v->a[112543] = anon_sym_LT_AMP_DASH;
	v->a[112544] = anon_sym_GT_AMP_DASH;
	v->a[112545] = state(2405);
	v->a[112546] = 2;
	v->a[112547] = sym_file_redirect;
	v->a[112548] = aux_sym_redirected_statement_repeat2;
	v->a[112549] = actions(5966);
	v->a[112550] = 8;
	v->a[112551] = anon_sym_LT;
	v->a[112552] = anon_sym_GT;
	v->a[112553] = anon_sym_GT_GT;
	v->a[112554] = anon_sym_AMP_GT;
	v->a[112555] = anon_sym_AMP_GT_GT;
	v->a[112556] = anon_sym_LT_AMP;
	v->a[112557] = anon_sym_GT_AMP;
	v->a[112558] = anon_sym_GT_PIPE;
	v->a[112559] = actions(5254);
	small_parse_table_5628(v);
}

void	small_parse_table_5628(t_small_parse_table_array *v)
{
	v->a[112560] = 9;
	v->a[112561] = anon_sym_PIPE;
	v->a[112562] = anon_sym_SEMI_SEMI;
	v->a[112563] = anon_sym_PIPE_AMP;
	v->a[112564] = anon_sym_AMP_AMP;
	v->a[112565] = anon_sym_PIPE_PIPE;
	v->a[112566] = anon_sym_LT_LT;
	v->a[112567] = anon_sym_LT_LT_DASH;
	v->a[112568] = anon_sym_AMP;
	v->a[112569] = anon_sym_SEMI;
	v->a[112570] = 5;
	v->a[112571] = actions(3);
	v->a[112572] = 1;
	v->a[112573] = sym_comment;
	v->a[112574] = state(2386);
	v->a[112575] = 1;
	v->a[112576] = aux_sym_pipeline_repeat1;
	v->a[112577] = actions(5367);
	v->a[112578] = 2;
	v->a[112579] = sym_file_descriptor;
	small_parse_table_5629(v);
}

void	small_parse_table_5629(t_small_parse_table_array *v)
{
	v->a[112580] = aux_sym_heredoc_redirect_token1;
	v->a[112581] = actions(6466);
	v->a[112582] = 2;
	v->a[112583] = anon_sym_PIPE;
	v->a[112584] = anon_sym_PIPE_AMP;
	v->a[112585] = actions(5362);
	v->a[112586] = 18;
	v->a[112587] = anon_sym_RPAREN;
	v->a[112588] = anon_sym_SEMI_SEMI;
	v->a[112589] = anon_sym_AMP_AMP;
	v->a[112590] = anon_sym_PIPE_PIPE;
	v->a[112591] = anon_sym_LT;
	v->a[112592] = anon_sym_GT;
	v->a[112593] = anon_sym_GT_GT;
	v->a[112594] = anon_sym_AMP_GT;
	v->a[112595] = anon_sym_AMP_GT_GT;
	v->a[112596] = anon_sym_LT_AMP;
	v->a[112597] = anon_sym_GT_AMP;
	v->a[112598] = anon_sym_GT_PIPE;
	v->a[112599] = anon_sym_LT_AMP_DASH;
	small_parse_table_5630(v);
}

/* EOF small_parse_table_1125.c */
