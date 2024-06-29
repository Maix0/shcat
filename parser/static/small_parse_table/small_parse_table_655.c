/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_655.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3275(t_small_parse_table_array *v)
{
	v->a[65500] = anon_sym_GT_AMP_DASH;
	v->a[65501] = state(1123);
	v->a[65502] = 3;
	v->a[65503] = sym_file_redirect;
	v->a[65504] = sym_heredoc_redirect;
	v->a[65505] = aux_sym_redirected_statement_repeat1;
	v->a[65506] = actions(1999);
	v->a[65507] = 8;
	v->a[65508] = anon_sym_LT;
	v->a[65509] = anon_sym_GT;
	v->a[65510] = anon_sym_GT_GT;
	v->a[65511] = anon_sym_AMP_GT;
	v->a[65512] = anon_sym_AMP_GT_GT;
	v->a[65513] = anon_sym_LT_AMP;
	v->a[65514] = anon_sym_GT_AMP;
	v->a[65515] = anon_sym_GT_PIPE;
	v->a[65516] = 11;
	v->a[65517] = actions(3);
	v->a[65518] = 1;
	v->a[65519] = sym_comment;
	small_parse_table_3276(v);
}

void	small_parse_table_3276(t_small_parse_table_array *v)
{
	v->a[65520] = actions(764);
	v->a[65521] = 1;
	v->a[65522] = anon_sym_RPAREN;
	v->a[65523] = actions(2031);
	v->a[65524] = 1;
	v->a[65525] = aux_sym_heredoc_redirect_token1;
	v->a[65526] = actions(2043);
	v->a[65527] = 1;
	v->a[65528] = sym_file_descriptor;
	v->a[65529] = state(723);
	v->a[65530] = 1;
	v->a[65531] = sym_terminator;
	v->a[65532] = actions(802);
	v->a[65533] = 2;
	v->a[65534] = anon_sym_AMP_AMP;
	v->a[65535] = anon_sym_PIPE_PIPE;
	v->a[65536] = actions(804);
	v->a[65537] = 2;
	v->a[65538] = anon_sym_LT_LT;
	v->a[65539] = anon_sym_LT_LT_DASH;
	small_parse_table_3277(v);
}

void	small_parse_table_3277(t_small_parse_table_array *v)
{
	v->a[65540] = actions(2041);
	v->a[65541] = 2;
	v->a[65542] = anon_sym_LT_AMP_DASH;
	v->a[65543] = anon_sym_GT_AMP_DASH;
	v->a[65544] = actions(800);
	v->a[65545] = 3;
	v->a[65546] = anon_sym_SEMI_SEMI;
	v->a[65547] = anon_sym_AMP;
	v->a[65548] = anon_sym_SEMI;
	v->a[65549] = state(1137);
	v->a[65550] = 3;
	v->a[65551] = sym_file_redirect;
	v->a[65552] = sym_heredoc_redirect;
	v->a[65553] = aux_sym_redirected_statement_repeat1;
	v->a[65554] = actions(2039);
	v->a[65555] = 8;
	v->a[65556] = anon_sym_LT;
	v->a[65557] = anon_sym_GT;
	v->a[65558] = anon_sym_GT_GT;
	v->a[65559] = anon_sym_AMP_GT;
	small_parse_table_3278(v);
}

void	small_parse_table_3278(t_small_parse_table_array *v)
{
	v->a[65560] = anon_sym_AMP_GT_GT;
	v->a[65561] = anon_sym_LT_AMP;
	v->a[65562] = anon_sym_GT_AMP;
	v->a[65563] = anon_sym_GT_PIPE;
	v->a[65564] = 6;
	v->a[65565] = actions(3);
	v->a[65566] = 1;
	v->a[65567] = sym_comment;
	v->a[65568] = actions(2101);
	v->a[65569] = 1;
	v->a[65570] = aux_sym_concatenation_token1;
	v->a[65571] = actions(2105);
	v->a[65572] = 1;
	v->a[65573] = sym__concat;
	v->a[65574] = state(948);
	v->a[65575] = 1;
	v->a[65576] = aux_sym_concatenation_repeat1;
	v->a[65577] = actions(961);
	v->a[65578] = 2;
	v->a[65579] = sym_file_descriptor;
	small_parse_table_3279(v);
}

void	small_parse_table_3279(t_small_parse_table_array *v)
{
	v->a[65580] = aux_sym_heredoc_redirect_token1;
	v->a[65581] = actions(957);
	v->a[65582] = 19;
	v->a[65583] = anon_sym_PIPE;
	v->a[65584] = anon_sym_SEMI_SEMI;
	v->a[65585] = anon_sym_AMP_AMP;
	v->a[65586] = anon_sym_PIPE_PIPE;
	v->a[65587] = anon_sym_LT;
	v->a[65588] = anon_sym_GT;
	v->a[65589] = anon_sym_GT_GT;
	v->a[65590] = anon_sym_AMP_GT;
	v->a[65591] = anon_sym_AMP_GT_GT;
	v->a[65592] = anon_sym_LT_AMP;
	v->a[65593] = anon_sym_GT_AMP;
	v->a[65594] = anon_sym_GT_PIPE;
	v->a[65595] = anon_sym_LT_AMP_DASH;
	v->a[65596] = anon_sym_GT_AMP_DASH;
	v->a[65597] = anon_sym_LT_LT;
	v->a[65598] = anon_sym_LT_LT_DASH;
	v->a[65599] = anon_sym_AMP;
	small_parse_table_3280(v);
}

/* EOF small_parse_table_655.c */
