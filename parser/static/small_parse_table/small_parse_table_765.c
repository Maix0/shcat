/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_765.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3825(t_small_parse_table_array *v)
{
	v->a[76500] = sym_file_descriptor;
	v->a[76501] = actions(2826);
	v->a[76502] = 1;
	v->a[76503] = aux_sym_heredoc_redirect_token1;
	v->a[76504] = actions(2828);
	v->a[76505] = 1;
	v->a[76506] = anon_sym_AMP;
	v->a[76507] = actions(2830);
	v->a[76508] = 1;
	v->a[76509] = anon_sym_SEMI;
	v->a[76510] = actions(840);
	v->a[76511] = 2;
	v->a[76512] = anon_sym_esac;
	v->a[76513] = anon_sym_SEMI_SEMI;
	v->a[76514] = actions(842);
	v->a[76515] = 2;
	v->a[76516] = anon_sym_AMP_AMP;
	v->a[76517] = anon_sym_PIPE_PIPE;
	v->a[76518] = actions(844);
	v->a[76519] = 2;
	small_parse_table_3826(v);
}

void	small_parse_table_3826(t_small_parse_table_array *v)
{
	v->a[76520] = anon_sym_LT_LT;
	v->a[76521] = anon_sym_LT_LT_DASH;
	v->a[76522] = actions(2180);
	v->a[76523] = 2;
	v->a[76524] = anon_sym_LT_AMP_DASH;
	v->a[76525] = anon_sym_GT_AMP_DASH;
	v->a[76526] = state(1214);
	v->a[76527] = 3;
	v->a[76528] = sym_file_redirect;
	v->a[76529] = sym_heredoc_redirect;
	v->a[76530] = aux_sym_redirected_statement_repeat1;
	v->a[76531] = actions(2178);
	v->a[76532] = 8;
	v->a[76533] = anon_sym_LT;
	v->a[76534] = anon_sym_GT;
	v->a[76535] = anon_sym_GT_GT;
	v->a[76536] = anon_sym_AMP_GT;
	v->a[76537] = anon_sym_AMP_GT_GT;
	v->a[76538] = anon_sym_LT_AMP;
	v->a[76539] = anon_sym_GT_AMP;
	small_parse_table_3827(v);
}

void	small_parse_table_3827(t_small_parse_table_array *v)
{
	v->a[76540] = anon_sym_GT_PIPE;
	v->a[76541] = 12;
	v->a[76542] = actions(3);
	v->a[76543] = 1;
	v->a[76544] = sym_comment;
	v->a[76545] = actions(807);
	v->a[76546] = 1;
	v->a[76547] = anon_sym_PIPE;
	v->a[76548] = actions(840);
	v->a[76549] = 1;
	v->a[76550] = anon_sym_SEMI_SEMI;
	v->a[76551] = actions(2168);
	v->a[76552] = 1;
	v->a[76553] = aux_sym_heredoc_redirect_token1;
	v->a[76554] = actions(2170);
	v->a[76555] = 1;
	v->a[76556] = anon_sym_AMP;
	v->a[76557] = actions(2172);
	v->a[76558] = 1;
	v->a[76559] = anon_sym_SEMI;
	small_parse_table_3828(v);
}

void	small_parse_table_3828(t_small_parse_table_array *v)
{
	v->a[76560] = actions(2602);
	v->a[76561] = 1;
	v->a[76562] = sym_file_descriptor;
	v->a[76563] = actions(861);
	v->a[76564] = 2;
	v->a[76565] = anon_sym_LT_LT;
	v->a[76566] = anon_sym_LT_LT_DASH;
	v->a[76567] = actions(965);
	v->a[76568] = 2;
	v->a[76569] = anon_sym_AMP_AMP;
	v->a[76570] = anon_sym_PIPE_PIPE;
	v->a[76571] = actions(2598);
	v->a[76572] = 2;
	v->a[76573] = anon_sym_LT_AMP_DASH;
	v->a[76574] = anon_sym_GT_AMP_DASH;
	v->a[76575] = state(1322);
	v->a[76576] = 3;
	v->a[76577] = sym_file_redirect;
	v->a[76578] = sym_heredoc_redirect;
	v->a[76579] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3829(v);
}

void	small_parse_table_3829(t_small_parse_table_array *v)
{
	v->a[76580] = actions(2596);
	v->a[76581] = 8;
	v->a[76582] = anon_sym_LT;
	v->a[76583] = anon_sym_GT;
	v->a[76584] = anon_sym_GT_GT;
	v->a[76585] = anon_sym_AMP_GT;
	v->a[76586] = anon_sym_AMP_GT_GT;
	v->a[76587] = anon_sym_LT_AMP;
	v->a[76588] = anon_sym_GT_AMP;
	v->a[76589] = anon_sym_GT_PIPE;
	v->a[76590] = 3;
	v->a[76591] = actions(3);
	v->a[76592] = 1;
	v->a[76593] = sym_comment;
	v->a[76594] = actions(1177);
	v->a[76595] = 3;
	v->a[76596] = sym_file_descriptor;
	v->a[76597] = sym__concat;
	v->a[76598] = aux_sym_heredoc_redirect_token1;
	v->a[76599] = actions(1179);
	small_parse_table_3830(v);
}

/* EOF small_parse_table_765.c */
