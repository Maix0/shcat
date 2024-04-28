/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2425.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12125(t_small_parse_table_array *v)
{
	v->a[242500] = anon_sym_LT_AMP;
	v->a[242501] = anon_sym_GT_AMP;
	v->a[242502] = anon_sym_GT_PIPE;
	v->a[242503] = anon_sym_LT_AMP_DASH;
	v->a[242504] = anon_sym_GT_AMP_DASH;
	v->a[242505] = anon_sym_LT_LT_DASH;
	v->a[242506] = 8;
	v->a[242507] = actions(3);
	v->a[242508] = 1;
	v->a[242509] = sym_comment;
	v->a[242510] = actions(11455);
	v->a[242511] = 1;
	v->a[242512] = aux_sym_heredoc_redirect_token1;
	v->a[242513] = actions(11457);
	v->a[242514] = 1;
	v->a[242515] = sym_file_descriptor;
	v->a[242516] = actions(4255);
	v->a[242517] = 2;
	v->a[242518] = anon_sym_LT_LT;
	v->a[242519] = anon_sym_LT_LT_DASH;
	small_parse_table_12126(v);
}

void	small_parse_table_12126(t_small_parse_table_array *v)
{
	v->a[242520] = actions(11282);
	v->a[242521] = 2;
	v->a[242522] = anon_sym_LT_AMP_DASH;
	v->a[242523] = anon_sym_GT_AMP_DASH;
	v->a[242524] = state(4278);
	v->a[242525] = 3;
	v->a[242526] = sym_file_redirect;
	v->a[242527] = sym_heredoc_redirect;
	v->a[242528] = aux_sym_redirected_statement_repeat1;
	v->a[242529] = actions(11280);
	v->a[242530] = 8;
	v->a[242531] = anon_sym_LT;
	v->a[242532] = anon_sym_GT;
	v->a[242533] = anon_sym_GT_GT;
	v->a[242534] = anon_sym_AMP_GT;
	v->a[242535] = anon_sym_AMP_GT_GT;
	v->a[242536] = anon_sym_LT_AMP;
	v->a[242537] = anon_sym_GT_AMP;
	v->a[242538] = anon_sym_GT_PIPE;
	v->a[242539] = actions(11453);
	small_parse_table_12127(v);
}

void	small_parse_table_12127(t_small_parse_table_array *v)
{
	v->a[242540] = 10;
	v->a[242541] = anon_sym_SEMI;
	v->a[242542] = anon_sym_PIPE_PIPE;
	v->a[242543] = anon_sym_AMP_AMP;
	v->a[242544] = anon_sym_PIPE;
	v->a[242545] = anon_sym_AMP;
	v->a[242546] = anon_sym_esac;
	v->a[242547] = anon_sym_SEMI_SEMI;
	v->a[242548] = anon_sym_SEMI_AMP;
	v->a[242549] = anon_sym_SEMI_SEMI_AMP;
	v->a[242550] = anon_sym_PIPE_AMP;
	v->a[242551] = 6;
	v->a[242552] = actions(3);
	v->a[242553] = 1;
	v->a[242554] = sym_comment;
	v->a[242555] = actions(11301);
	v->a[242556] = 1;
	v->a[242557] = aux_sym_concatenation_token1;
	v->a[242558] = actions(11459);
	v->a[242559] = 1;
	small_parse_table_12128(v);
}

void	small_parse_table_12128(t_small_parse_table_array *v)
{
	v->a[242560] = sym__concat;
	v->a[242561] = state(4266);
	v->a[242562] = 1;
	v->a[242563] = aux_sym_concatenation_repeat1;
	v->a[242564] = actions(1288);
	v->a[242565] = 2;
	v->a[242566] = sym_file_descriptor;
	v->a[242567] = aux_sym_heredoc_redirect_token1;
	v->a[242568] = actions(1286);
	v->a[242569] = 22;
	v->a[242570] = anon_sym_SEMI;
	v->a[242571] = anon_sym_PIPE_PIPE;
	v->a[242572] = anon_sym_AMP_AMP;
	v->a[242573] = anon_sym_PIPE;
	v->a[242574] = anon_sym_AMP;
	v->a[242575] = anon_sym_LT;
	v->a[242576] = anon_sym_GT;
	v->a[242577] = anon_sym_LT_LT;
	v->a[242578] = anon_sym_GT_GT;
	v->a[242579] = anon_sym_SEMI_SEMI;
	small_parse_table_12129(v);
}

void	small_parse_table_12129(t_small_parse_table_array *v)
{
	v->a[242580] = anon_sym_SEMI_AMP;
	v->a[242581] = anon_sym_SEMI_SEMI_AMP;
	v->a[242582] = anon_sym_PIPE_AMP;
	v->a[242583] = anon_sym_AMP_GT;
	v->a[242584] = anon_sym_AMP_GT_GT;
	v->a[242585] = anon_sym_LT_AMP;
	v->a[242586] = anon_sym_GT_AMP;
	v->a[242587] = anon_sym_GT_PIPE;
	v->a[242588] = anon_sym_LT_AMP_DASH;
	v->a[242589] = anon_sym_GT_AMP_DASH;
	v->a[242590] = anon_sym_LT_LT_DASH;
	v->a[242591] = anon_sym_LT_LT_LT;
	v->a[242592] = 3;
	v->a[242593] = actions(3);
	v->a[242594] = 1;
	v->a[242595] = sym_comment;
	v->a[242596] = actions(1253);
	v->a[242597] = 4;
	v->a[242598] = sym_file_descriptor;
	v->a[242599] = sym__concat;
	small_parse_table_12130(v);
}

/* EOF small_parse_table_2425.c */
