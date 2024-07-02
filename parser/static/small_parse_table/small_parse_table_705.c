/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_705.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3525(t_small_parse_table_array *v)
{
	v->a[70500] = actions(2769);
	v->a[70501] = 7;
	v->a[70502] = anon_sym_LT;
	v->a[70503] = anon_sym_GT;
	v->a[70504] = anon_sym_GT_GT;
	v->a[70505] = anon_sym_LT_AMP;
	v->a[70506] = anon_sym_GT_AMP;
	v->a[70507] = anon_sym_GT_PIPE;
	v->a[70508] = anon_sym_LT_GT;
	v->a[70509] = 5;
	v->a[70510] = actions(680);
	v->a[70511] = 1;
	v->a[70512] = sym_comment;
	v->a[70513] = actions(2775);
	v->a[70514] = 1;
	v->a[70515] = sym_variable_name;
	v->a[70516] = state(1395);
	v->a[70517] = 2;
	v->a[70518] = sym_variable_assignment;
	v->a[70519] = aux_sym__variable_assignments_repeat1;
	small_parse_table_3526(v);
}

void	small_parse_table_3526(t_small_parse_table_array *v)
{
	v->a[70520] = actions(1957);
	v->a[70521] = 4;
	v->a[70522] = anon_sym_PIPE;
	v->a[70523] = anon_sym_LT;
	v->a[70524] = anon_sym_GT;
	v->a[70525] = anon_sym_LT_LT;
	v->a[70526] = actions(1959);
	v->a[70527] = 9;
	v->a[70528] = sym_file_descriptor;
	v->a[70529] = anon_sym_AMP_AMP;
	v->a[70530] = anon_sym_PIPE_PIPE;
	v->a[70531] = anon_sym_GT_GT;
	v->a[70532] = anon_sym_LT_AMP;
	v->a[70533] = anon_sym_GT_AMP;
	v->a[70534] = anon_sym_GT_PIPE;
	v->a[70535] = anon_sym_LT_GT;
	v->a[70536] = anon_sym_LT_LT_DASH;
	v->a[70537] = 9;
	v->a[70538] = actions(680);
	v->a[70539] = 1;
	small_parse_table_3527(v);
}

void	small_parse_table_3527(t_small_parse_table_array *v)
{
	v->a[70540] = sym_comment;
	v->a[70541] = actions(1929);
	v->a[70542] = 1;
	v->a[70543] = anon_sym_PIPE;
	v->a[70544] = actions(2784);
	v->a[70545] = 1;
	v->a[70546] = anon_sym_LT_LT;
	v->a[70547] = actions(2787);
	v->a[70548] = 1;
	v->a[70549] = anon_sym_LT_LT_DASH;
	v->a[70550] = actions(2790);
	v->a[70551] = 1;
	v->a[70552] = sym_file_descriptor;
	v->a[70553] = actions(1937);
	v->a[70554] = 2;
	v->a[70555] = anon_sym_AMP_AMP;
	v->a[70556] = anon_sym_PIPE_PIPE;
	v->a[70557] = actions(2778);
	v->a[70558] = 2;
	v->a[70559] = anon_sym_LT;
	small_parse_table_3528(v);
}

void	small_parse_table_3528(t_small_parse_table_array *v)
{
	v->a[70560] = anon_sym_GT;
	v->a[70561] = state(1396);
	v->a[70562] = 3;
	v->a[70563] = sym_file_redirect;
	v->a[70564] = sym_heredoc_redirect;
	v->a[70565] = aux_sym_redirected_statement_repeat1;
	v->a[70566] = actions(2781);
	v->a[70567] = 5;
	v->a[70568] = anon_sym_GT_GT;
	v->a[70569] = anon_sym_LT_AMP;
	v->a[70570] = anon_sym_GT_AMP;
	v->a[70571] = anon_sym_GT_PIPE;
	v->a[70572] = anon_sym_LT_GT;
	v->a[70573] = 4;
	v->a[70574] = actions(680);
	v->a[70575] = 1;
	v->a[70576] = sym_comment;
	v->a[70577] = state(1415);
	v->a[70578] = 3;
	v->a[70579] = sym_file_redirect;
	small_parse_table_3529(v);
}

void	small_parse_table_3529(t_small_parse_table_array *v)
{
	v->a[70580] = sym_heredoc_redirect;
	v->a[70581] = aux_sym_redirected_statement_repeat1;
	v->a[70582] = actions(997);
	v->a[70583] = 4;
	v->a[70584] = anon_sym_PIPE;
	v->a[70585] = anon_sym_LT;
	v->a[70586] = anon_sym_GT;
	v->a[70587] = anon_sym_LT_LT;
	v->a[70588] = actions(995);
	v->a[70589] = 9;
	v->a[70590] = sym_file_descriptor;
	v->a[70591] = anon_sym_AMP_AMP;
	v->a[70592] = anon_sym_PIPE_PIPE;
	v->a[70593] = anon_sym_GT_GT;
	v->a[70594] = anon_sym_LT_AMP;
	v->a[70595] = anon_sym_GT_AMP;
	v->a[70596] = anon_sym_GT_PIPE;
	v->a[70597] = anon_sym_LT_GT;
	v->a[70598] = anon_sym_LT_LT_DASH;
	v->a[70599] = 5;
	small_parse_table_3530(v);
}

/* EOF small_parse_table_705.c */
