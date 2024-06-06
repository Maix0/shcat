/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_975.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4875(t_small_parse_table_array *v)
{
	v->a[97500] = 1;
	v->a[97501] = sym_file_descriptor;
	v->a[97502] = actions(2516);
	v->a[97503] = 2;
	v->a[97504] = anon_sym_PIPE;
	v->a[97505] = anon_sym_PIPE_AMP;
	v->a[97506] = actions(2706);
	v->a[97507] = 2;
	v->a[97508] = anon_sym_AMP_AMP;
	v->a[97509] = anon_sym_PIPE_PIPE;
	v->a[97510] = actions(2708);
	v->a[97511] = 2;
	v->a[97512] = anon_sym_LT_LT;
	v->a[97513] = anon_sym_LT_LT_DASH;
	v->a[97514] = actions(2712);
	v->a[97515] = 2;
	v->a[97516] = anon_sym_AMP;
	v->a[97517] = anon_sym_SEMI;
	v->a[97518] = actions(5241);
	v->a[97519] = 2;
	small_parse_table_4876(v);
}

void	small_parse_table_4876(t_small_parse_table_array *v)
{
	v->a[97520] = anon_sym_LT_AMP_DASH;
	v->a[97521] = anon_sym_GT_AMP_DASH;
	v->a[97522] = actions(1995);
	v->a[97523] = 3;
	v->a[97524] = anon_sym_SEMI_SEMI;
	v->a[97525] = anon_sym_SEMI_AMP;
	v->a[97526] = anon_sym_SEMI_SEMI_AMP;
	v->a[97527] = state(1983);
	v->a[97528] = 3;
	v->a[97529] = sym_file_redirect;
	v->a[97530] = sym_heredoc_redirect;
	v->a[97531] = aux_sym_redirected_statement_repeat1;
	v->a[97532] = actions(5239);
	v->a[97533] = 8;
	v->a[97534] = anon_sym_LT;
	v->a[97535] = anon_sym_GT;
	v->a[97536] = anon_sym_GT_GT;
	v->a[97537] = anon_sym_AMP_GT;
	v->a[97538] = anon_sym_AMP_GT_GT;
	v->a[97539] = anon_sym_LT_AMP;
	small_parse_table_4877(v);
}

void	small_parse_table_4877(t_small_parse_table_array *v)
{
	v->a[97540] = anon_sym_GT_AMP;
	v->a[97541] = anon_sym_GT_PIPE;
	v->a[97542] = 3;
	v->a[97543] = actions(3);
	v->a[97544] = 1;
	v->a[97545] = sym_comment;
	v->a[97546] = actions(2888);
	v->a[97547] = 3;
	v->a[97548] = sym_file_descriptor;
	v->a[97549] = sym__concat;
	v->a[97550] = aux_sym_heredoc_redirect_token1;
	v->a[97551] = actions(2886);
	v->a[97552] = 23;
	v->a[97553] = anon_sym_esac;
	v->a[97554] = anon_sym_PIPE;
	v->a[97555] = anon_sym_SEMI_SEMI;
	v->a[97556] = anon_sym_SEMI_AMP;
	v->a[97557] = anon_sym_SEMI_SEMI_AMP;
	v->a[97558] = anon_sym_PIPE_AMP;
	v->a[97559] = anon_sym_AMP_AMP;
	small_parse_table_4878(v);
}

void	small_parse_table_4878(t_small_parse_table_array *v)
{
	v->a[97560] = anon_sym_PIPE_PIPE;
	v->a[97561] = anon_sym_LT;
	v->a[97562] = anon_sym_GT;
	v->a[97563] = anon_sym_GT_GT;
	v->a[97564] = anon_sym_AMP_GT;
	v->a[97565] = anon_sym_AMP_GT_GT;
	v->a[97566] = anon_sym_LT_AMP;
	v->a[97567] = anon_sym_GT_AMP;
	v->a[97568] = anon_sym_GT_PIPE;
	v->a[97569] = anon_sym_LT_AMP_DASH;
	v->a[97570] = anon_sym_GT_AMP_DASH;
	v->a[97571] = anon_sym_LT_LT;
	v->a[97572] = anon_sym_LT_LT_DASH;
	v->a[97573] = anon_sym_AMP;
	v->a[97574] = aux_sym_concatenation_token1;
	v->a[97575] = anon_sym_SEMI;
	v->a[97576] = 3;
	v->a[97577] = actions(3);
	v->a[97578] = 1;
	v->a[97579] = sym_comment;
	small_parse_table_4879(v);
}

void	small_parse_table_4879(t_small_parse_table_array *v)
{
	v->a[97580] = actions(3024);
	v->a[97581] = 4;
	v->a[97582] = sym_file_descriptor;
	v->a[97583] = sym__concat;
	v->a[97584] = sym_variable_name;
	v->a[97585] = aux_sym_heredoc_redirect_token1;
	v->a[97586] = actions(3022);
	v->a[97587] = 22;
	v->a[97588] = anon_sym_PIPE;
	v->a[97589] = anon_sym_SEMI_SEMI;
	v->a[97590] = anon_sym_SEMI_AMP;
	v->a[97591] = anon_sym_SEMI_SEMI_AMP;
	v->a[97592] = anon_sym_PIPE_AMP;
	v->a[97593] = anon_sym_AMP_AMP;
	v->a[97594] = anon_sym_PIPE_PIPE;
	v->a[97595] = anon_sym_LT;
	v->a[97596] = anon_sym_GT;
	v->a[97597] = anon_sym_GT_GT;
	v->a[97598] = anon_sym_AMP_GT;
	v->a[97599] = anon_sym_AMP_GT_GT;
	small_parse_table_4880(v);
}

/* EOF small_parse_table_975.c */
