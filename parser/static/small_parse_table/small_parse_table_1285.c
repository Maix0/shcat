/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1285.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6425(t_small_parse_table_array *v)
{
	v->a[128500] = anon_sym_AMP_AMP;
	v->a[128501] = anon_sym_PIPE_PIPE;
	v->a[128502] = anon_sym_GT_GT;
	v->a[128503] = anon_sym_AMP_GT_GT;
	v->a[128504] = anon_sym_GT_PIPE;
	v->a[128505] = anon_sym_LT_AMP_DASH;
	v->a[128506] = anon_sym_GT_AMP_DASH;
	v->a[128507] = anon_sym_LT_LT_DASH;
	v->a[128508] = 8;
	v->a[128509] = actions(3);
	v->a[128510] = 1;
	v->a[128511] = sym_comment;
	v->a[128512] = actions(2478);
	v->a[128513] = 1;
	v->a[128514] = sym_file_descriptor;
	v->a[128515] = actions(7384);
	v->a[128516] = 1;
	v->a[128517] = aux_sym_heredoc_redirect_token1;
	v->a[128518] = state(3715);
	v->a[128519] = 1;
	small_parse_table_6426(v);
}

void	small_parse_table_6426(t_small_parse_table_array *v)
{
	v->a[128520] = sym__heredoc_expression;
	v->a[128521] = actions(2450);
	v->a[128522] = 2;
	v->a[128523] = anon_sym_AMP_AMP;
	v->a[128524] = anon_sym_PIPE_PIPE;
	v->a[128525] = actions(2454);
	v->a[128526] = 2;
	v->a[128527] = anon_sym_LT_AMP_DASH;
	v->a[128528] = anon_sym_GT_AMP_DASH;
	v->a[128529] = state(2874);
	v->a[128530] = 2;
	v->a[128531] = sym_file_redirect;
	v->a[128532] = aux_sym_redirected_statement_repeat2;
	v->a[128533] = actions(2452);
	v->a[128534] = 8;
	v->a[128535] = anon_sym_LT;
	v->a[128536] = anon_sym_GT;
	v->a[128537] = anon_sym_GT_GT;
	v->a[128538] = anon_sym_AMP_GT;
	v->a[128539] = anon_sym_AMP_GT_GT;
	small_parse_table_6427(v);
}

void	small_parse_table_6427(t_small_parse_table_array *v)
{
	v->a[128540] = anon_sym_LT_AMP;
	v->a[128541] = anon_sym_GT_AMP;
	v->a[128542] = anon_sym_GT_PIPE;
	v->a[128543] = 8;
	v->a[128544] = actions(3);
	v->a[128545] = 1;
	v->a[128546] = sym_comment;
	v->a[128547] = actions(2478);
	v->a[128548] = 1;
	v->a[128549] = sym_file_descriptor;
	v->a[128550] = actions(7386);
	v->a[128551] = 1;
	v->a[128552] = aux_sym_heredoc_redirect_token1;
	v->a[128553] = state(3910);
	v->a[128554] = 1;
	v->a[128555] = sym__heredoc_expression;
	v->a[128556] = actions(2450);
	v->a[128557] = 2;
	v->a[128558] = anon_sym_AMP_AMP;
	v->a[128559] = anon_sym_PIPE_PIPE;
	small_parse_table_6428(v);
}

void	small_parse_table_6428(t_small_parse_table_array *v)
{
	v->a[128560] = actions(2454);
	v->a[128561] = 2;
	v->a[128562] = anon_sym_LT_AMP_DASH;
	v->a[128563] = anon_sym_GT_AMP_DASH;
	v->a[128564] = state(2874);
	v->a[128565] = 2;
	v->a[128566] = sym_file_redirect;
	v->a[128567] = aux_sym_redirected_statement_repeat2;
	v->a[128568] = actions(2452);
	v->a[128569] = 8;
	v->a[128570] = anon_sym_LT;
	v->a[128571] = anon_sym_GT;
	v->a[128572] = anon_sym_GT_GT;
	v->a[128573] = anon_sym_AMP_GT;
	v->a[128574] = anon_sym_AMP_GT_GT;
	v->a[128575] = anon_sym_LT_AMP;
	v->a[128576] = anon_sym_GT_AMP;
	v->a[128577] = anon_sym_GT_PIPE;
	v->a[128578] = 3;
	v->a[128579] = actions(57);
	small_parse_table_6429(v);
}

void	small_parse_table_6429(t_small_parse_table_array *v)
{
	v->a[128580] = 1;
	v->a[128581] = sym_comment;
	v->a[128582] = actions(6105);
	v->a[128583] = 7;
	v->a[128584] = anon_sym_PIPE;
	v->a[128585] = anon_sym_LT;
	v->a[128586] = anon_sym_GT;
	v->a[128587] = anon_sym_AMP_GT;
	v->a[128588] = anon_sym_LT_AMP;
	v->a[128589] = anon_sym_GT_AMP;
	v->a[128590] = anon_sym_LT_LT;
	v->a[128591] = actions(6107);
	v->a[128592] = 10;
	v->a[128593] = sym_file_descriptor;
	v->a[128594] = anon_sym_PIPE_AMP;
	v->a[128595] = anon_sym_AMP_AMP;
	v->a[128596] = anon_sym_PIPE_PIPE;
	v->a[128597] = anon_sym_GT_GT;
	v->a[128598] = anon_sym_AMP_GT_GT;
	v->a[128599] = anon_sym_GT_PIPE;
	small_parse_table_6430(v);
}

/* EOF small_parse_table_1285.c */
