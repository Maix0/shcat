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
	v->a[65500] = anon_sym_LT;
	v->a[65501] = anon_sym_GT;
	v->a[65502] = anon_sym_GT_GT;
	v->a[65503] = anon_sym_LT_AMP;
	v->a[65504] = anon_sym_GT_AMP;
	v->a[65505] = anon_sym_GT_PIPE;
	v->a[65506] = actions(2114);
	v->a[65507] = 6;
	v->a[65508] = anon_sym_PIPE;
	v->a[65509] = anon_sym_SEMI_SEMI;
	v->a[65510] = anon_sym_AMP_AMP;
	v->a[65511] = anon_sym_PIPE_PIPE;
	v->a[65512] = anon_sym_AMP;
	v->a[65513] = anon_sym_SEMI;
	v->a[65514] = 4;
	v->a[65515] = actions(3);
	v->a[65516] = 1;
	v->a[65517] = sym_comment;
	v->a[65518] = actions(984);
	v->a[65519] = 2;
	small_parse_table_3276(v);
}

void	small_parse_table_3276(t_small_parse_table_array *v)
{
	v->a[65520] = sym_file_descriptor;
	v->a[65521] = aux_sym_heredoc_redirect_token1;
	v->a[65522] = state(1176);
	v->a[65523] = 3;
	v->a[65524] = sym_file_redirect;
	v->a[65525] = sym_heredoc_redirect;
	v->a[65526] = aux_sym_redirected_statement_repeat1;
	v->a[65527] = actions(935);
	v->a[65528] = 17;
	v->a[65529] = anon_sym_esac;
	v->a[65530] = anon_sym_PIPE;
	v->a[65531] = anon_sym_SEMI_SEMI;
	v->a[65532] = anon_sym_AMP_AMP;
	v->a[65533] = anon_sym_PIPE_PIPE;
	v->a[65534] = anon_sym_LT;
	v->a[65535] = anon_sym_GT;
	v->a[65536] = anon_sym_GT_GT;
	v->a[65537] = anon_sym_LT_AMP;
	v->a[65538] = anon_sym_GT_AMP;
	v->a[65539] = anon_sym_GT_PIPE;
	small_parse_table_3277(v);
}

void	small_parse_table_3277(t_small_parse_table_array *v)
{
	v->a[65540] = anon_sym_LT_AMP_DASH;
	v->a[65541] = anon_sym_GT_AMP_DASH;
	v->a[65542] = anon_sym_LT_LT;
	v->a[65543] = anon_sym_LT_LT_DASH;
	v->a[65544] = anon_sym_AMP;
	v->a[65545] = anon_sym_SEMI;
	v->a[65546] = 5;
	v->a[65547] = actions(3);
	v->a[65548] = 1;
	v->a[65549] = sym_comment;
	v->a[65550] = actions(682);
	v->a[65551] = 1;
	v->a[65552] = anon_sym_PIPE;
	v->a[65553] = actions(984);
	v->a[65554] = 2;
	v->a[65555] = sym_file_descriptor;
	v->a[65556] = aux_sym_heredoc_redirect_token1;
	v->a[65557] = state(1176);
	v->a[65558] = 3;
	v->a[65559] = sym_file_redirect;
	small_parse_table_3278(v);
}

void	small_parse_table_3278(t_small_parse_table_array *v)
{
	v->a[65560] = sym_heredoc_redirect;
	v->a[65561] = aux_sym_redirected_statement_repeat1;
	v->a[65562] = actions(935);
	v->a[65563] = 16;
	v->a[65564] = anon_sym_esac;
	v->a[65565] = anon_sym_SEMI_SEMI;
	v->a[65566] = anon_sym_AMP_AMP;
	v->a[65567] = anon_sym_PIPE_PIPE;
	v->a[65568] = anon_sym_LT;
	v->a[65569] = anon_sym_GT;
	v->a[65570] = anon_sym_GT_GT;
	v->a[65571] = anon_sym_LT_AMP;
	v->a[65572] = anon_sym_GT_AMP;
	v->a[65573] = anon_sym_GT_PIPE;
	v->a[65574] = anon_sym_LT_AMP_DASH;
	v->a[65575] = anon_sym_GT_AMP_DASH;
	v->a[65576] = anon_sym_LT_LT;
	v->a[65577] = anon_sym_LT_LT_DASH;
	v->a[65578] = anon_sym_AMP;
	v->a[65579] = anon_sym_SEMI;
	small_parse_table_3279(v);
}

void	small_parse_table_3279(t_small_parse_table_array *v)
{
	v->a[65580] = 5;
	v->a[65581] = actions(3);
	v->a[65582] = 1;
	v->a[65583] = sym_comment;
	v->a[65584] = actions(2171);
	v->a[65585] = 1;
	v->a[65586] = sym_variable_name;
	v->a[65587] = actions(2148);
	v->a[65588] = 2;
	v->a[65589] = sym_file_descriptor;
	v->a[65590] = aux_sym_heredoc_redirect_token1;
	v->a[65591] = state(1164);
	v->a[65592] = 2;
	v->a[65593] = sym_variable_assignment;
	v->a[65594] = aux_sym__variable_assignments_repeat1;
	v->a[65595] = actions(2150);
	v->a[65596] = 17;
	v->a[65597] = anon_sym_PIPE;
	v->a[65598] = anon_sym_RPAREN;
	v->a[65599] = anon_sym_SEMI_SEMI;
	small_parse_table_3280(v);
}

/* EOF small_parse_table_655.c */
