/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_685.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3425(t_small_parse_table_array *v)
{
	v->a[68500] = aux_sym_heredoc_redirect_token1;
	v->a[68501] = state(1353);
	v->a[68502] = 3;
	v->a[68503] = sym_file_redirect;
	v->a[68504] = sym_heredoc_redirect;
	v->a[68505] = aux_sym_redirected_statement_repeat1;
	v->a[68506] = actions(1057);
	v->a[68507] = 11;
	v->a[68508] = anon_sym_AMP_AMP;
	v->a[68509] = anon_sym_PIPE_PIPE;
	v->a[68510] = anon_sym_LT;
	v->a[68511] = anon_sym_GT;
	v->a[68512] = anon_sym_GT_GT;
	v->a[68513] = anon_sym_LT_AMP;
	v->a[68514] = anon_sym_GT_AMP;
	v->a[68515] = anon_sym_GT_PIPE;
	v->a[68516] = anon_sym_LT_GT;
	v->a[68517] = anon_sym_LT_LT;
	v->a[68518] = anon_sym_LT_LT_DASH;
	v->a[68519] = 4;
	small_parse_table_3426(v);
}

void	small_parse_table_3426(t_small_parse_table_array *v)
{
	v->a[68520] = actions(3);
	v->a[68521] = 1;
	v->a[68522] = sym_comment;
	v->a[68523] = actions(1055);
	v->a[68524] = 2;
	v->a[68525] = sym_file_descriptor;
	v->a[68526] = aux_sym_heredoc_redirect_token1;
	v->a[68527] = state(1353);
	v->a[68528] = 3;
	v->a[68529] = sym_file_redirect;
	v->a[68530] = sym_heredoc_redirect;
	v->a[68531] = aux_sym_redirected_statement_repeat1;
	v->a[68532] = actions(1057);
	v->a[68533] = 12;
	v->a[68534] = anon_sym_PIPE;
	v->a[68535] = anon_sym_AMP_AMP;
	v->a[68536] = anon_sym_PIPE_PIPE;
	v->a[68537] = anon_sym_LT;
	v->a[68538] = anon_sym_GT;
	v->a[68539] = anon_sym_GT_GT;
	small_parse_table_3427(v);
}

void	small_parse_table_3427(t_small_parse_table_array *v)
{
	v->a[68540] = anon_sym_LT_AMP;
	v->a[68541] = anon_sym_GT_AMP;
	v->a[68542] = anon_sym_GT_PIPE;
	v->a[68543] = anon_sym_LT_GT;
	v->a[68544] = anon_sym_LT_LT;
	v->a[68545] = anon_sym_LT_LT_DASH;
	v->a[68546] = 5;
	v->a[68547] = actions(3);
	v->a[68548] = 1;
	v->a[68549] = sym_comment;
	v->a[68550] = actions(2729);
	v->a[68551] = 1;
	v->a[68552] = sym_variable_name;
	v->a[68553] = actions(1977);
	v->a[68554] = 2;
	v->a[68555] = sym_file_descriptor;
	v->a[68556] = aux_sym_heredoc_redirect_token1;
	v->a[68557] = state(1249);
	v->a[68558] = 2;
	v->a[68559] = sym_variable_assignment;
	small_parse_table_3428(v);
}

void	small_parse_table_3428(t_small_parse_table_array *v)
{
	v->a[68560] = aux_sym__variable_assignments_repeat1;
	v->a[68561] = actions(1979);
	v->a[68562] = 12;
	v->a[68563] = anon_sym_PIPE;
	v->a[68564] = anon_sym_AMP_AMP;
	v->a[68565] = anon_sym_PIPE_PIPE;
	v->a[68566] = anon_sym_LT;
	v->a[68567] = anon_sym_GT;
	v->a[68568] = anon_sym_GT_GT;
	v->a[68569] = anon_sym_LT_AMP;
	v->a[68570] = anon_sym_GT_AMP;
	v->a[68571] = anon_sym_GT_PIPE;
	v->a[68572] = anon_sym_LT_GT;
	v->a[68573] = anon_sym_LT_LT;
	v->a[68574] = anon_sym_LT_LT_DASH;
	v->a[68575] = 3;
	v->a[68576] = actions(3);
	v->a[68577] = 1;
	v->a[68578] = sym_comment;
	v->a[68579] = actions(1500);
	small_parse_table_3429(v);
}

void	small_parse_table_3429(t_small_parse_table_array *v)
{
	v->a[68580] = 2;
	v->a[68581] = sym_file_descriptor;
	v->a[68582] = aux_sym_heredoc_redirect_token1;
	v->a[68583] = actions(1498);
	v->a[68584] = 15;
	v->a[68585] = anon_sym_esac;
	v->a[68586] = anon_sym_PIPE;
	v->a[68587] = anon_sym_SEMI_SEMI;
	v->a[68588] = anon_sym_AMP_AMP;
	v->a[68589] = anon_sym_PIPE_PIPE;
	v->a[68590] = anon_sym_LT;
	v->a[68591] = anon_sym_GT;
	v->a[68592] = anon_sym_GT_GT;
	v->a[68593] = anon_sym_LT_AMP;
	v->a[68594] = anon_sym_GT_AMP;
	v->a[68595] = anon_sym_GT_PIPE;
	v->a[68596] = anon_sym_LT_GT;
	v->a[68597] = anon_sym_LT_LT;
	v->a[68598] = anon_sym_LT_LT_DASH;
	v->a[68599] = anon_sym_SEMI;
	small_parse_table_3430(v);
}

/* EOF small_parse_table_685.c */
