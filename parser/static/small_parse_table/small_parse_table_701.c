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
	v->a[70100] = 2;
	v->a[70101] = anon_sym_LT_AMP_DASH;
	v->a[70102] = anon_sym_GT_AMP_DASH;
	v->a[70103] = state(1297);
	v->a[70104] = 3;
	v->a[70105] = sym_file_redirect;
	v->a[70106] = sym_heredoc_redirect;
	v->a[70107] = aux_sym_redirected_statement_repeat1;
	v->a[70108] = actions(2158);
	v->a[70109] = 8;
	v->a[70110] = anon_sym_LT;
	v->a[70111] = anon_sym_GT;
	v->a[70112] = anon_sym_GT_GT;
	v->a[70113] = anon_sym_AMP_GT;
	v->a[70114] = anon_sym_AMP_GT_GT;
	v->a[70115] = anon_sym_LT_AMP;
	v->a[70116] = anon_sym_GT_AMP;
	v->a[70117] = anon_sym_GT_PIPE;
	v->a[70118] = 5;
	v->a[70119] = actions(3);
	small_parse_table_3506(v);
}

void	small_parse_table_3506(t_small_parse_table_array *v)
{
	v->a[70120] = 1;
	v->a[70121] = sym_comment;
	v->a[70122] = actions(2318);
	v->a[70123] = 1;
	v->a[70124] = anon_sym_PIPE;
	v->a[70125] = state(1663);
	v->a[70126] = 1;
	v->a[70127] = aux_sym_pipeline_repeat1;
	v->a[70128] = actions(2316);
	v->a[70129] = 3;
	v->a[70130] = sym_file_descriptor;
	v->a[70131] = ts_builtin_sym_end;
	v->a[70132] = aux_sym_heredoc_redirect_token1;
	v->a[70133] = actions(2321);
	v->a[70134] = 19;
	v->a[70135] = anon_sym_RPAREN;
	v->a[70136] = anon_sym_SEMI_SEMI;
	v->a[70137] = anon_sym_AMP_AMP;
	v->a[70138] = anon_sym_PIPE_PIPE;
	v->a[70139] = anon_sym_LT;
	small_parse_table_3507(v);
}

void	small_parse_table_3507(t_small_parse_table_array *v)
{
	v->a[70140] = anon_sym_GT;
	v->a[70141] = anon_sym_GT_GT;
	v->a[70142] = anon_sym_AMP_GT;
	v->a[70143] = anon_sym_AMP_GT_GT;
	v->a[70144] = anon_sym_LT_AMP;
	v->a[70145] = anon_sym_GT_AMP;
	v->a[70146] = anon_sym_GT_PIPE;
	v->a[70147] = anon_sym_LT_AMP_DASH;
	v->a[70148] = anon_sym_GT_AMP_DASH;
	v->a[70149] = anon_sym_LT_LT;
	v->a[70150] = anon_sym_LT_LT_DASH;
	v->a[70151] = anon_sym_AMP;
	v->a[70152] = anon_sym_BQUOTE;
	v->a[70153] = anon_sym_SEMI;
	v->a[70154] = 13;
	v->a[70155] = actions(3);
	v->a[70156] = 1;
	v->a[70157] = sym_comment;
	v->a[70158] = actions(807);
	v->a[70159] = 1;
	small_parse_table_3508(v);
}

void	small_parse_table_3508(t_small_parse_table_array *v)
{
	v->a[70160] = anon_sym_PIPE;
	v->a[70161] = actions(840);
	v->a[70162] = 1;
	v->a[70163] = anon_sym_RPAREN;
	v->a[70164] = actions(2083);
	v->a[70165] = 1;
	v->a[70166] = sym_file_descriptor;
	v->a[70167] = actions(2323);
	v->a[70168] = 1;
	v->a[70169] = anon_sym_SEMI_SEMI;
	v->a[70170] = actions(2325);
	v->a[70171] = 1;
	v->a[70172] = aux_sym_heredoc_redirect_token1;
	v->a[70173] = actions(2327);
	v->a[70174] = 1;
	v->a[70175] = anon_sym_AMP;
	v->a[70176] = actions(2329);
	v->a[70177] = 1;
	v->a[70178] = anon_sym_SEMI;
	v->a[70179] = actions(859);
	small_parse_table_3509(v);
}

void	small_parse_table_3509(t_small_parse_table_array *v)
{
	v->a[70180] = 2;
	v->a[70181] = anon_sym_AMP_AMP;
	v->a[70182] = anon_sym_PIPE_PIPE;
	v->a[70183] = actions(861);
	v->a[70184] = 2;
	v->a[70185] = anon_sym_LT_LT;
	v->a[70186] = anon_sym_LT_LT_DASH;
	v->a[70187] = actions(2079);
	v->a[70188] = 2;
	v->a[70189] = anon_sym_LT_AMP_DASH;
	v->a[70190] = anon_sym_GT_AMP_DASH;
	v->a[70191] = state(1283);
	v->a[70192] = 3;
	v->a[70193] = sym_file_redirect;
	v->a[70194] = sym_heredoc_redirect;
	v->a[70195] = aux_sym_redirected_statement_repeat1;
	v->a[70196] = actions(2077);
	v->a[70197] = 8;
	v->a[70198] = anon_sym_LT;
	v->a[70199] = anon_sym_GT;
	small_parse_table_3510(v);
}

/* EOF small_parse_table_701.c */
