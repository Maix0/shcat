/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_835.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4175(t_small_parse_table_array *v)
{
	v->a[83500] = anon_sym_LT;
	v->a[83501] = anon_sym_GT;
	v->a[83502] = anon_sym_AMP_GT;
	v->a[83503] = anon_sym_LT_AMP;
	v->a[83504] = anon_sym_GT_AMP;
	v->a[83505] = 3;
	v->a[83506] = actions(1094);
	v->a[83507] = 1;
	v->a[83508] = sym_comment;
	v->a[83509] = actions(1157);
	v->a[83510] = 7;
	v->a[83511] = anon_sym_PIPE;
	v->a[83512] = anon_sym_LT;
	v->a[83513] = anon_sym_GT;
	v->a[83514] = anon_sym_AMP_GT;
	v->a[83515] = anon_sym_LT_AMP;
	v->a[83516] = anon_sym_GT_AMP;
	v->a[83517] = anon_sym_LT_LT;
	v->a[83518] = actions(1159);
	v->a[83519] = 11;
	small_parse_table_4176(v);
}

void	small_parse_table_4176(t_small_parse_table_array *v)
{
	v->a[83520] = sym_file_descriptor;
	v->a[83521] = sym__concat;
	v->a[83522] = anon_sym_AMP_AMP;
	v->a[83523] = anon_sym_PIPE_PIPE;
	v->a[83524] = anon_sym_GT_GT;
	v->a[83525] = anon_sym_AMP_GT_GT;
	v->a[83526] = anon_sym_GT_PIPE;
	v->a[83527] = anon_sym_LT_AMP_DASH;
	v->a[83528] = anon_sym_GT_AMP_DASH;
	v->a[83529] = anon_sym_LT_LT_DASH;
	v->a[83530] = aux_sym_concatenation_token1;
	v->a[83531] = 8;
	v->a[83532] = actions(1094);
	v->a[83533] = 1;
	v->a[83534] = sym_comment;
	v->a[83535] = actions(3115);
	v->a[83536] = 1;
	v->a[83537] = sym_file_descriptor;
	v->a[83538] = actions(2640);
	v->a[83539] = 2;
	small_parse_table_4177(v);
}

void	small_parse_table_4177(t_small_parse_table_array *v)
{
	v->a[83540] = anon_sym_PIPE;
	v->a[83541] = anon_sym_LT_LT;
	v->a[83542] = actions(3112);
	v->a[83543] = 2;
	v->a[83544] = anon_sym_LT_AMP_DASH;
	v->a[83545] = anon_sym_GT_AMP_DASH;
	v->a[83546] = state(1610);
	v->a[83547] = 2;
	v->a[83548] = sym_file_redirect;
	v->a[83549] = aux_sym_redirected_statement_repeat2;
	v->a[83550] = actions(2648);
	v->a[83551] = 3;
	v->a[83552] = anon_sym_AMP_AMP;
	v->a[83553] = anon_sym_PIPE_PIPE;
	v->a[83554] = anon_sym_LT_LT_DASH;
	v->a[83555] = actions(3109);
	v->a[83556] = 3;
	v->a[83557] = anon_sym_GT_GT;
	v->a[83558] = anon_sym_AMP_GT_GT;
	v->a[83559] = anon_sym_GT_PIPE;
	small_parse_table_4178(v);
}

void	small_parse_table_4178(t_small_parse_table_array *v)
{
	v->a[83560] = actions(3106);
	v->a[83561] = 5;
	v->a[83562] = anon_sym_LT;
	v->a[83563] = anon_sym_GT;
	v->a[83564] = anon_sym_AMP_GT;
	v->a[83565] = anon_sym_LT_AMP;
	v->a[83566] = anon_sym_GT_AMP;
	v->a[83567] = 5;
	v->a[83568] = actions(3);
	v->a[83569] = 1;
	v->a[83570] = sym_comment;
	v->a[83571] = actions(3118);
	v->a[83572] = 1;
	v->a[83573] = anon_sym_PIPE;
	v->a[83574] = state(1611);
	v->a[83575] = 1;
	v->a[83576] = aux_sym_pipeline_repeat1;
	v->a[83577] = actions(2316);
	v->a[83578] = 2;
	v->a[83579] = sym_file_descriptor;
	small_parse_table_4179(v);
}

void	small_parse_table_4179(t_small_parse_table_array *v)
{
	v->a[83580] = aux_sym_heredoc_redirect_token1;
	v->a[83581] = actions(2321);
	v->a[83582] = 14;
	v->a[83583] = anon_sym_AMP_AMP;
	v->a[83584] = anon_sym_PIPE_PIPE;
	v->a[83585] = anon_sym_LT;
	v->a[83586] = anon_sym_GT;
	v->a[83587] = anon_sym_GT_GT;
	v->a[83588] = anon_sym_AMP_GT;
	v->a[83589] = anon_sym_AMP_GT_GT;
	v->a[83590] = anon_sym_LT_AMP;
	v->a[83591] = anon_sym_GT_AMP;
	v->a[83592] = anon_sym_GT_PIPE;
	v->a[83593] = anon_sym_LT_AMP_DASH;
	v->a[83594] = anon_sym_GT_AMP_DASH;
	v->a[83595] = anon_sym_LT_LT;
	v->a[83596] = anon_sym_LT_LT_DASH;
	v->a[83597] = 9;
	v->a[83598] = actions(861);
	v->a[83599] = 1;
	small_parse_table_4180(v);
}

/* EOF small_parse_table_835.c */
