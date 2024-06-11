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
	v->a[68500] = sym_variable_name;
	v->a[68501] = aux_sym_heredoc_redirect_token1;
	v->a[68502] = actions(1102);
	v->a[68503] = 20;
	v->a[68504] = anon_sym_esac;
	v->a[68505] = anon_sym_PIPE;
	v->a[68506] = anon_sym_SEMI_SEMI;
	v->a[68507] = anon_sym_AMP_AMP;
	v->a[68508] = anon_sym_PIPE_PIPE;
	v->a[68509] = anon_sym_LT;
	v->a[68510] = anon_sym_GT;
	v->a[68511] = anon_sym_GT_GT;
	v->a[68512] = anon_sym_AMP_GT;
	v->a[68513] = anon_sym_AMP_GT_GT;
	v->a[68514] = anon_sym_LT_AMP;
	v->a[68515] = anon_sym_GT_AMP;
	v->a[68516] = anon_sym_GT_PIPE;
	v->a[68517] = anon_sym_LT_AMP_DASH;
	v->a[68518] = anon_sym_GT_AMP_DASH;
	v->a[68519] = anon_sym_LT_LT;
	small_parse_table_3426(v);
}

void	small_parse_table_3426(t_small_parse_table_array *v)
{
	v->a[68520] = anon_sym_LT_LT_DASH;
	v->a[68521] = anon_sym_AMP;
	v->a[68522] = aux_sym_concatenation_token1;
	v->a[68523] = anon_sym_SEMI;
	v->a[68524] = 5;
	v->a[68525] = actions(3);
	v->a[68526] = 1;
	v->a[68527] = sym_comment;
	v->a[68528] = actions(2132);
	v->a[68529] = 1;
	v->a[68530] = sym_variable_name;
	v->a[68531] = state(1204);
	v->a[68532] = 2;
	v->a[68533] = sym_variable_assignment;
	v->a[68534] = aux_sym_variable_assignments_repeat1;
	v->a[68535] = actions(2117);
	v->a[68536] = 3;
	v->a[68537] = sym_file_descriptor;
	v->a[68538] = ts_builtin_sym_end;
	v->a[68539] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3427(v);
}

void	small_parse_table_3427(t_small_parse_table_array *v)
{
	v->a[68540] = actions(2115);
	v->a[68541] = 18;
	v->a[68542] = anon_sym_PIPE;
	v->a[68543] = anon_sym_SEMI_SEMI;
	v->a[68544] = anon_sym_AMP_AMP;
	v->a[68545] = anon_sym_PIPE_PIPE;
	v->a[68546] = anon_sym_LT;
	v->a[68547] = anon_sym_GT;
	v->a[68548] = anon_sym_GT_GT;
	v->a[68549] = anon_sym_AMP_GT;
	v->a[68550] = anon_sym_AMP_GT_GT;
	v->a[68551] = anon_sym_LT_AMP;
	v->a[68552] = anon_sym_GT_AMP;
	v->a[68553] = anon_sym_GT_PIPE;
	v->a[68554] = anon_sym_LT_AMP_DASH;
	v->a[68555] = anon_sym_GT_AMP_DASH;
	v->a[68556] = anon_sym_LT_LT;
	v->a[68557] = anon_sym_LT_LT_DASH;
	v->a[68558] = anon_sym_AMP;
	v->a[68559] = anon_sym_SEMI;
	small_parse_table_3428(v);
}

void	small_parse_table_3428(t_small_parse_table_array *v)
{
	v->a[68560] = 8;
	v->a[68561] = actions(3);
	v->a[68562] = 1;
	v->a[68563] = sym_comment;
	v->a[68564] = actions(2148);
	v->a[68565] = 1;
	v->a[68566] = sym_file_descriptor;
	v->a[68567] = actions(2135);
	v->a[68568] = 2;
	v->a[68569] = ts_builtin_sym_end;
	v->a[68570] = aux_sym_heredoc_redirect_token1;
	v->a[68571] = actions(2142);
	v->a[68572] = 2;
	v->a[68573] = anon_sym_LT_AMP_DASH;
	v->a[68574] = anon_sym_GT_AMP_DASH;
	v->a[68575] = actions(2145);
	v->a[68576] = 2;
	v->a[68577] = anon_sym_LT_LT;
	v->a[68578] = anon_sym_LT_LT_DASH;
	v->a[68579] = state(1205);
	small_parse_table_3429(v);
}

void	small_parse_table_3429(t_small_parse_table_array *v)
{
	v->a[68580] = 3;
	v->a[68581] = sym_file_redirect;
	v->a[68582] = sym_heredoc_redirect;
	v->a[68583] = aux_sym_redirected_statement_repeat1;
	v->a[68584] = actions(2137);
	v->a[68585] = 6;
	v->a[68586] = anon_sym_PIPE;
	v->a[68587] = anon_sym_SEMI_SEMI;
	v->a[68588] = anon_sym_AMP_AMP;
	v->a[68589] = anon_sym_PIPE_PIPE;
	v->a[68590] = anon_sym_AMP;
	v->a[68591] = anon_sym_SEMI;
	v->a[68592] = actions(2139);
	v->a[68593] = 8;
	v->a[68594] = anon_sym_LT;
	v->a[68595] = anon_sym_GT;
	v->a[68596] = anon_sym_GT_GT;
	v->a[68597] = anon_sym_AMP_GT;
	v->a[68598] = anon_sym_AMP_GT_GT;
	v->a[68599] = anon_sym_LT_AMP;
	small_parse_table_3430(v);
}

/* EOF small_parse_table_685.c */
