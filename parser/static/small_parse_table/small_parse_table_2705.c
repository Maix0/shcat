/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2705.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13525(t_small_parse_table_array *v)
{
	v->a[270500] = anon_sym_PIPE_AMP;
	v->a[270501] = anon_sym_AMP_GT;
	v->a[270502] = anon_sym_AMP_GT_GT;
	v->a[270503] = anon_sym_LT_AMP;
	v->a[270504] = anon_sym_GT_AMP;
	v->a[270505] = anon_sym_GT_PIPE;
	v->a[270506] = anon_sym_LT_AMP_DASH;
	v->a[270507] = anon_sym_GT_AMP_DASH;
	v->a[270508] = anon_sym_LT_LT_DASH;
	v->a[270509] = 8;
	v->a[270510] = actions(3);
	v->a[270511] = 1;
	v->a[270512] = sym_comment;
	v->a[270513] = actions(11455);
	v->a[270514] = 1;
	v->a[270515] = aux_sym_heredoc_redirect_token1;
	v->a[270516] = actions(12221);
	v->a[270517] = 1;
	v->a[270518] = sym_file_descriptor;
	v->a[270519] = actions(4692);
	small_parse_table_13526(v);
}

void	small_parse_table_13526(t_small_parse_table_array *v)
{
	v->a[270520] = 2;
	v->a[270521] = anon_sym_LT_LT;
	v->a[270522] = anon_sym_LT_LT_DASH;
	v->a[270523] = actions(11556);
	v->a[270524] = 2;
	v->a[270525] = anon_sym_LT_AMP_DASH;
	v->a[270526] = anon_sym_GT_AMP_DASH;
	v->a[270527] = state(4998);
	v->a[270528] = 3;
	v->a[270529] = sym_file_redirect;
	v->a[270530] = sym_heredoc_redirect;
	v->a[270531] = aux_sym_redirected_statement_repeat1;
	v->a[270532] = actions(11453);
	v->a[270533] = 7;
	v->a[270534] = anon_sym_SEMI;
	v->a[270535] = anon_sym_PIPE_PIPE;
	v->a[270536] = anon_sym_AMP_AMP;
	v->a[270537] = anon_sym_PIPE;
	v->a[270538] = anon_sym_AMP;
	v->a[270539] = anon_sym_SEMI_SEMI;
	small_parse_table_13527(v);
}

void	small_parse_table_13527(t_small_parse_table_array *v)
{
	v->a[270540] = anon_sym_PIPE_AMP;
	v->a[270541] = actions(11554);
	v->a[270542] = 8;
	v->a[270543] = anon_sym_LT;
	v->a[270544] = anon_sym_GT;
	v->a[270545] = anon_sym_GT_GT;
	v->a[270546] = anon_sym_AMP_GT;
	v->a[270547] = anon_sym_AMP_GT_GT;
	v->a[270548] = anon_sym_LT_AMP;
	v->a[270549] = anon_sym_GT_AMP;
	v->a[270550] = anon_sym_GT_PIPE;
	v->a[270551] = 3;
	v->a[270552] = actions(3);
	v->a[270553] = 1;
	v->a[270554] = sym_comment;
	v->a[270555] = actions(12139);
	v->a[270556] = 3;
	v->a[270557] = sym_file_descriptor;
	v->a[270558] = ts_builtin_sym_end;
	v->a[270559] = aux_sym_heredoc_redirect_token1;
	small_parse_table_13528(v);
}

void	small_parse_table_13528(t_small_parse_table_array *v)
{
	v->a[270560] = actions(12137);
	v->a[270561] = 21;
	v->a[270562] = anon_sym_SEMI;
	v->a[270563] = anon_sym_PIPE_PIPE;
	v->a[270564] = anon_sym_AMP_AMP;
	v->a[270565] = anon_sym_PIPE;
	v->a[270566] = anon_sym_AMP;
	v->a[270567] = anon_sym_LT;
	v->a[270568] = anon_sym_GT;
	v->a[270569] = anon_sym_LT_LT;
	v->a[270570] = anon_sym_GT_GT;
	v->a[270571] = anon_sym_RPAREN;
	v->a[270572] = anon_sym_SEMI_SEMI;
	v->a[270573] = anon_sym_PIPE_AMP;
	v->a[270574] = anon_sym_AMP_GT;
	v->a[270575] = anon_sym_AMP_GT_GT;
	v->a[270576] = anon_sym_LT_AMP;
	v->a[270577] = anon_sym_GT_AMP;
	v->a[270578] = anon_sym_GT_PIPE;
	v->a[270579] = anon_sym_LT_AMP_DASH;
	small_parse_table_13529(v);
}

void	small_parse_table_13529(t_small_parse_table_array *v)
{
	v->a[270580] = anon_sym_GT_AMP_DASH;
	v->a[270581] = anon_sym_LT_LT_DASH;
	v->a[270582] = anon_sym_BQUOTE;
	v->a[270583] = 3;
	v->a[270584] = actions(3);
	v->a[270585] = 1;
	v->a[270586] = sym_comment;
	v->a[270587] = actions(12143);
	v->a[270588] = 3;
	v->a[270589] = sym_file_descriptor;
	v->a[270590] = ts_builtin_sym_end;
	v->a[270591] = aux_sym_heredoc_redirect_token1;
	v->a[270592] = actions(12141);
	v->a[270593] = 21;
	v->a[270594] = anon_sym_SEMI;
	v->a[270595] = anon_sym_PIPE_PIPE;
	v->a[270596] = anon_sym_AMP_AMP;
	v->a[270597] = anon_sym_PIPE;
	v->a[270598] = anon_sym_AMP;
	v->a[270599] = anon_sym_LT;
	small_parse_table_13530(v);
}

/* EOF small_parse_table_2705.c */
