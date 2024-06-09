/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_701.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3505(t_small_parse_table_array *v)
{
	v->a[70100] = anon_sym_PIPE_PIPE;
	v->a[70101] = anon_sym_LT;
	v->a[70102] = anon_sym_GT;
	v->a[70103] = anon_sym_GT_GT;
	v->a[70104] = anon_sym_AMP_GT;
	v->a[70105] = anon_sym_AMP_GT_GT;
	v->a[70106] = anon_sym_LT_AMP;
	v->a[70107] = anon_sym_GT_AMP;
	v->a[70108] = anon_sym_GT_PIPE;
	v->a[70109] = anon_sym_LT_AMP_DASH;
	v->a[70110] = anon_sym_GT_AMP_DASH;
	v->a[70111] = anon_sym_LT_LT;
	v->a[70112] = anon_sym_LT_LT_DASH;
	v->a[70113] = anon_sym_AMP;
	v->a[70114] = aux_sym_concatenation_token1;
	v->a[70115] = anon_sym_SEMI;
	v->a[70116] = 7;
	v->a[70117] = actions(3);
	v->a[70118] = 1;
	v->a[70119] = sym_comment;
	small_parse_table_3506(v);
}

void	small_parse_table_3506(t_small_parse_table_array *v)
{
	v->a[70120] = actions(2468);
	v->a[70121] = 1;
	v->a[70122] = aux_sym_heredoc_redirect_token1;
	v->a[70123] = actions(2532);
	v->a[70124] = 1;
	v->a[70125] = sym_file_descriptor;
	v->a[70126] = actions(2286);
	v->a[70127] = 2;
	v->a[70128] = anon_sym_LT_AMP_DASH;
	v->a[70129] = anon_sym_GT_AMP_DASH;
	v->a[70130] = state(1186);
	v->a[70131] = 2;
	v->a[70132] = sym_file_redirect;
	v->a[70133] = aux_sym_redirected_statement_repeat2;
	v->a[70134] = actions(2284);
	v->a[70135] = 8;
	v->a[70136] = anon_sym_LT;
	v->a[70137] = anon_sym_GT;
	v->a[70138] = anon_sym_GT_GT;
	v->a[70139] = anon_sym_AMP_GT;
	small_parse_table_3507(v);
}

void	small_parse_table_3507(t_small_parse_table_array *v)
{
	v->a[70140] = anon_sym_AMP_GT_GT;
	v->a[70141] = anon_sym_LT_AMP;
	v->a[70142] = anon_sym_GT_AMP;
	v->a[70143] = anon_sym_GT_PIPE;
	v->a[70144] = actions(2466);
	v->a[70145] = 9;
	v->a[70146] = anon_sym_PIPE;
	v->a[70147] = anon_sym_RPAREN;
	v->a[70148] = anon_sym_SEMI_SEMI;
	v->a[70149] = anon_sym_AMP_AMP;
	v->a[70150] = anon_sym_PIPE_PIPE;
	v->a[70151] = anon_sym_LT_LT;
	v->a[70152] = anon_sym_LT_LT_DASH;
	v->a[70153] = anon_sym_AMP;
	v->a[70154] = anon_sym_SEMI;
	v->a[70155] = 3;
	v->a[70156] = actions(3);
	v->a[70157] = 1;
	v->a[70158] = sym_comment;
	v->a[70159] = actions(2597);
	small_parse_table_3508(v);
}

void	small_parse_table_3508(t_small_parse_table_array *v)
{
	v->a[70160] = 3;
	v->a[70161] = sym_file_descriptor;
	v->a[70162] = ts_builtin_sym_end;
	v->a[70163] = aux_sym_heredoc_redirect_token1;
	v->a[70164] = actions(2599);
	v->a[70165] = 20;
	v->a[70166] = anon_sym_PIPE;
	v->a[70167] = anon_sym_RPAREN;
	v->a[70168] = anon_sym_SEMI_SEMI;
	v->a[70169] = anon_sym_AMP_AMP;
	v->a[70170] = anon_sym_PIPE_PIPE;
	v->a[70171] = anon_sym_LT;
	v->a[70172] = anon_sym_GT;
	v->a[70173] = anon_sym_GT_GT;
	v->a[70174] = anon_sym_AMP_GT;
	v->a[70175] = anon_sym_AMP_GT_GT;
	v->a[70176] = anon_sym_LT_AMP;
	v->a[70177] = anon_sym_GT_AMP;
	v->a[70178] = anon_sym_GT_PIPE;
	v->a[70179] = anon_sym_LT_AMP_DASH;
	small_parse_table_3509(v);
}

void	small_parse_table_3509(t_small_parse_table_array *v)
{
	v->a[70180] = anon_sym_GT_AMP_DASH;
	v->a[70181] = anon_sym_LT_LT;
	v->a[70182] = anon_sym_LT_LT_DASH;
	v->a[70183] = anon_sym_AMP;
	v->a[70184] = anon_sym_BQUOTE;
	v->a[70185] = anon_sym_SEMI;
	v->a[70186] = 7;
	v->a[70187] = actions(3);
	v->a[70188] = 1;
	v->a[70189] = sym_comment;
	v->a[70190] = actions(2607);
	v->a[70191] = 1;
	v->a[70192] = sym_file_descriptor;
	v->a[70193] = actions(2414);
	v->a[70194] = 2;
	v->a[70195] = ts_builtin_sym_end;
	v->a[70196] = aux_sym_heredoc_redirect_token1;
	v->a[70197] = actions(2604);
	v->a[70198] = 2;
	v->a[70199] = anon_sym_LT_AMP_DASH;
	small_parse_table_3510(v);
}

/* EOF small_parse_table_701.c */
