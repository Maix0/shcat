/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_545.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2725(t_small_parse_table_array *v)
{
	v->a[54500] = 1;
	v->a[54501] = sym_terminator;
	v->a[54502] = actions(700);
	v->a[54503] = 2;
	v->a[54504] = anon_sym_LT_LT;
	v->a[54505] = anon_sym_LT_LT_DASH;
	v->a[54506] = actions(936);
	v->a[54507] = 2;
	v->a[54508] = anon_sym_AMP_AMP;
	v->a[54509] = anon_sym_PIPE_PIPE;
	v->a[54510] = actions(696);
	v->a[54511] = 3;
	v->a[54512] = anon_sym_SEMI_SEMI;
	v->a[54513] = anon_sym_AMP;
	v->a[54514] = anon_sym_SEMI;
	v->a[54515] = state(1034);
	v->a[54516] = 3;
	v->a[54517] = sym_file_redirect;
	v->a[54518] = sym_heredoc_redirect;
	v->a[54519] = aux_sym_redirected_statement_repeat1;
	small_parse_table_2726(v);
}

void	small_parse_table_2726(t_small_parse_table_array *v)
{
	v->a[54520] = actions(1869);
	v->a[54521] = 7;
	v->a[54522] = anon_sym_LT;
	v->a[54523] = anon_sym_GT;
	v->a[54524] = anon_sym_GT_GT;
	v->a[54525] = anon_sym_LT_AMP;
	v->a[54526] = anon_sym_GT_AMP;
	v->a[54527] = anon_sym_GT_PIPE;
	v->a[54528] = anon_sym_LT_GT;
	v->a[54529] = 11;
	v->a[54530] = actions(3);
	v->a[54531] = 1;
	v->a[54532] = sym_comment;
	v->a[54533] = actions(692);
	v->a[54534] = 1;
	v->a[54535] = anon_sym_PIPE;
	v->a[54536] = actions(724);
	v->a[54537] = 1;
	v->a[54538] = anon_sym_BQUOTE;
	v->a[54539] = actions(1857);
	small_parse_table_2727(v);
}

void	small_parse_table_2727(t_small_parse_table_array *v)
{
	v->a[54540] = 1;
	v->a[54541] = aux_sym_heredoc_redirect_token1;
	v->a[54542] = actions(1871);
	v->a[54543] = 1;
	v->a[54544] = sym_file_descriptor;
	v->a[54545] = state(803);
	v->a[54546] = 1;
	v->a[54547] = sym_terminator;
	v->a[54548] = actions(700);
	v->a[54549] = 2;
	v->a[54550] = anon_sym_LT_LT;
	v->a[54551] = anon_sym_LT_LT_DASH;
	v->a[54552] = actions(936);
	v->a[54553] = 2;
	v->a[54554] = anon_sym_AMP_AMP;
	v->a[54555] = anon_sym_PIPE_PIPE;
	v->a[54556] = actions(696);
	v->a[54557] = 3;
	v->a[54558] = anon_sym_SEMI_SEMI;
	v->a[54559] = anon_sym_AMP;
	small_parse_table_2728(v);
}

void	small_parse_table_2728(t_small_parse_table_array *v)
{
	v->a[54560] = anon_sym_SEMI;
	v->a[54561] = state(1034);
	v->a[54562] = 3;
	v->a[54563] = sym_file_redirect;
	v->a[54564] = sym_heredoc_redirect;
	v->a[54565] = aux_sym_redirected_statement_repeat1;
	v->a[54566] = actions(1869);
	v->a[54567] = 7;
	v->a[54568] = anon_sym_LT;
	v->a[54569] = anon_sym_GT;
	v->a[54570] = anon_sym_GT_GT;
	v->a[54571] = anon_sym_LT_AMP;
	v->a[54572] = anon_sym_GT_AMP;
	v->a[54573] = anon_sym_GT_PIPE;
	v->a[54574] = anon_sym_LT_GT;
	v->a[54575] = 11;
	v->a[54576] = actions(3);
	v->a[54577] = 1;
	v->a[54578] = sym_comment;
	v->a[54579] = actions(692);
	small_parse_table_2729(v);
}

void	small_parse_table_2729(t_small_parse_table_array *v)
{
	v->a[54580] = 1;
	v->a[54581] = anon_sym_PIPE;
	v->a[54582] = actions(724);
	v->a[54583] = 1;
	v->a[54584] = anon_sym_BQUOTE;
	v->a[54585] = actions(1857);
	v->a[54586] = 1;
	v->a[54587] = aux_sym_heredoc_redirect_token1;
	v->a[54588] = actions(1871);
	v->a[54589] = 1;
	v->a[54590] = sym_file_descriptor;
	v->a[54591] = state(800);
	v->a[54592] = 1;
	v->a[54593] = sym_terminator;
	v->a[54594] = actions(700);
	v->a[54595] = 2;
	v->a[54596] = anon_sym_LT_LT;
	v->a[54597] = anon_sym_LT_LT_DASH;
	v->a[54598] = actions(936);
	v->a[54599] = 2;
	small_parse_table_2730(v);
}

/* EOF small_parse_table_545.c */
