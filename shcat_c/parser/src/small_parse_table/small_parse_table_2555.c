/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2555.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12775(t_small_parse_table_array *v)
{
	v->a[255500] = 1;
	v->a[255501] = sym_comment;
	v->a[255502] = actions(11448);
	v->a[255503] = 1;
	v->a[255504] = anon_sym_LT_LT_LT;
	v->a[255505] = actions(11774);
	v->a[255506] = 1;
	v->a[255507] = sym_file_descriptor;
	v->a[255508] = actions(11414);
	v->a[255509] = 2;
	v->a[255510] = ts_builtin_sym_end;
	v->a[255511] = aux_sym_heredoc_redirect_token1;
	v->a[255512] = actions(11481);
	v->a[255513] = 2;
	v->a[255514] = anon_sym_LT_AMP_DASH;
	v->a[255515] = anon_sym_GT_AMP_DASH;
	v->a[255516] = state(4868);
	v->a[255517] = 2;
	v->a[255518] = sym_file_redirect;
	v->a[255519] = sym_herestring_redirect;
	small_parse_table_12776(v);
}

void	small_parse_table_12776(t_small_parse_table_array *v)
{
	v->a[255520] = actions(11479);
	v->a[255521] = 8;
	v->a[255522] = anon_sym_LT;
	v->a[255523] = anon_sym_GT;
	v->a[255524] = anon_sym_GT_GT;
	v->a[255525] = anon_sym_AMP_GT;
	v->a[255526] = anon_sym_AMP_GT_GT;
	v->a[255527] = anon_sym_LT_AMP;
	v->a[255528] = anon_sym_GT_AMP;
	v->a[255529] = anon_sym_GT_PIPE;
	v->a[255530] = actions(11412);
	v->a[255531] = 9;
	v->a[255532] = anon_sym_SEMI;
	v->a[255533] = anon_sym_PIPE_PIPE;
	v->a[255534] = anon_sym_AMP_AMP;
	v->a[255535] = anon_sym_PIPE;
	v->a[255536] = anon_sym_AMP;
	v->a[255537] = anon_sym_LT_LT;
	v->a[255538] = anon_sym_SEMI_SEMI;
	v->a[255539] = anon_sym_PIPE_AMP;
	small_parse_table_12777(v);
}

void	small_parse_table_12777(t_small_parse_table_array *v)
{
	v->a[255540] = anon_sym_LT_LT_DASH;
	v->a[255541] = 6;
	v->a[255542] = actions(3);
	v->a[255543] = 1;
	v->a[255544] = sym_comment;
	v->a[255545] = actions(11651);
	v->a[255546] = 1;
	v->a[255547] = aux_sym_concatenation_token1;
	v->a[255548] = actions(11653);
	v->a[255549] = 1;
	v->a[255550] = sym__concat;
	v->a[255551] = state(4674);
	v->a[255552] = 1;
	v->a[255553] = aux_sym_concatenation_repeat1;
	v->a[255554] = actions(5697);
	v->a[255555] = 2;
	v->a[255556] = sym_file_descriptor;
	v->a[255557] = aux_sym_heredoc_redirect_token1;
	v->a[255558] = actions(5695);
	v->a[255559] = 20;
	small_parse_table_12778(v);
}

void	small_parse_table_12778(t_small_parse_table_array *v)
{
	v->a[255560] = anon_sym_SEMI;
	v->a[255561] = anon_sym_PIPE_PIPE;
	v->a[255562] = anon_sym_AMP_AMP;
	v->a[255563] = anon_sym_PIPE;
	v->a[255564] = anon_sym_AMP;
	v->a[255565] = anon_sym_LT;
	v->a[255566] = anon_sym_GT;
	v->a[255567] = anon_sym_LT_LT;
	v->a[255568] = anon_sym_GT_GT;
	v->a[255569] = anon_sym_SEMI_SEMI;
	v->a[255570] = anon_sym_PIPE_AMP;
	v->a[255571] = anon_sym_AMP_GT;
	v->a[255572] = anon_sym_AMP_GT_GT;
	v->a[255573] = anon_sym_LT_AMP;
	v->a[255574] = anon_sym_GT_AMP;
	v->a[255575] = anon_sym_GT_PIPE;
	v->a[255576] = anon_sym_LT_AMP_DASH;
	v->a[255577] = anon_sym_GT_AMP_DASH;
	v->a[255578] = anon_sym_LT_LT_DASH;
	v->a[255579] = anon_sym_BQUOTE;
	small_parse_table_12779(v);
}

void	small_parse_table_12779(t_small_parse_table_array *v)
{
	v->a[255580] = 6;
	v->a[255581] = actions(3);
	v->a[255582] = 1;
	v->a[255583] = sym_comment;
	v->a[255584] = actions(11651);
	v->a[255585] = 1;
	v->a[255586] = aux_sym_concatenation_token1;
	v->a[255587] = actions(11653);
	v->a[255588] = 1;
	v->a[255589] = sym__concat;
	v->a[255590] = state(4669);
	v->a[255591] = 1;
	v->a[255592] = aux_sym_concatenation_repeat1;
	v->a[255593] = actions(2096);
	v->a[255594] = 2;
	v->a[255595] = sym_file_descriptor;
	v->a[255596] = aux_sym_heredoc_redirect_token1;
	v->a[255597] = actions(2094);
	v->a[255598] = 20;
	v->a[255599] = anon_sym_SEMI;
	small_parse_table_12780(v);
}

/* EOF small_parse_table_2555.c */
