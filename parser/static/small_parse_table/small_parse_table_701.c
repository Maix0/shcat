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
	v->a[70100] = sym_string;
	v->a[70101] = sym_simple_expansion;
	v->a[70102] = sym_expansion;
	v->a[70103] = sym_command_substitution;
	v->a[70104] = 10;
	v->a[70105] = actions(3);
	v->a[70106] = 1;
	v->a[70107] = sym_comment;
	v->a[70108] = actions(1012);
	v->a[70109] = 1;
	v->a[70110] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70111] = actions(1014);
	v->a[70112] = 1;
	v->a[70113] = anon_sym_DOLLAR;
	v->a[70114] = actions(1016);
	v->a[70115] = 1;
	v->a[70116] = anon_sym_DQUOTE;
	v->a[70117] = actions(1018);
	v->a[70118] = 1;
	v->a[70119] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3506(v);
}

void	small_parse_table_3506(t_small_parse_table_array *v)
{
	v->a[70120] = actions(1020);
	v->a[70121] = 1;
	v->a[70122] = anon_sym_DOLLAR_LPAREN;
	v->a[70123] = actions(1022);
	v->a[70124] = 1;
	v->a[70125] = anon_sym_BQUOTE;
	v->a[70126] = state(1047);
	v->a[70127] = 2;
	v->a[70128] = sym_concatenation;
	v->a[70129] = aux_sym_for_statement_repeat1;
	v->a[70130] = actions(1973);
	v->a[70131] = 3;
	v->a[70132] = sym_raw_string;
	v->a[70133] = sym_number;
	v->a[70134] = sym_word;
	v->a[70135] = state(1424);
	v->a[70136] = 5;
	v->a[70137] = sym_arithmetic_expansion;
	v->a[70138] = sym_string;
	v->a[70139] = sym_simple_expansion;
	small_parse_table_3507(v);
}

void	small_parse_table_3507(t_small_parse_table_array *v)
{
	v->a[70140] = sym_expansion;
	v->a[70141] = sym_command_substitution;
	v->a[70142] = 5;
	v->a[70143] = actions(501);
	v->a[70144] = 1;
	v->a[70145] = sym_comment;
	v->a[70146] = actions(782);
	v->a[70147] = 1;
	v->a[70148] = anon_sym_PIPE;
	v->a[70149] = actions(1057);
	v->a[70150] = 3;
	v->a[70151] = anon_sym_LT;
	v->a[70152] = anon_sym_GT;
	v->a[70153] = anon_sym_LT_LT;
	v->a[70154] = state(1371);
	v->a[70155] = 3;
	v->a[70156] = sym_file_redirect;
	v->a[70157] = sym_heredoc_redirect;
	v->a[70158] = aux_sym_redirected_statement_repeat1;
	v->a[70159] = actions(1055);
	small_parse_table_3508(v);
}

void	small_parse_table_3508(t_small_parse_table_array *v)
{
	v->a[70160] = 9;
	v->a[70161] = sym_file_descriptor;
	v->a[70162] = anon_sym_AMP_AMP;
	v->a[70163] = anon_sym_PIPE_PIPE;
	v->a[70164] = anon_sym_GT_GT;
	v->a[70165] = anon_sym_LT_AMP;
	v->a[70166] = anon_sym_GT_AMP;
	v->a[70167] = anon_sym_GT_PIPE;
	v->a[70168] = anon_sym_LT_GT;
	v->a[70169] = anon_sym_LT_LT_DASH;
	v->a[70170] = 3;
	v->a[70171] = actions(501);
	v->a[70172] = 1;
	v->a[70173] = sym_comment;
	v->a[70174] = actions(1227);
	v->a[70175] = 4;
	v->a[70176] = anon_sym_PIPE;
	v->a[70177] = anon_sym_LT;
	v->a[70178] = anon_sym_GT;
	v->a[70179] = anon_sym_LT_LT;
	small_parse_table_3509(v);
}

void	small_parse_table_3509(t_small_parse_table_array *v)
{
	v->a[70180] = actions(1229);
	v->a[70181] = 12;
	v->a[70182] = sym_file_descriptor;
	v->a[70183] = sym__concat;
	v->a[70184] = sym_variable_name;
	v->a[70185] = anon_sym_AMP_AMP;
	v->a[70186] = anon_sym_PIPE_PIPE;
	v->a[70187] = anon_sym_GT_GT;
	v->a[70188] = anon_sym_LT_AMP;
	v->a[70189] = anon_sym_GT_AMP;
	v->a[70190] = anon_sym_GT_PIPE;
	v->a[70191] = anon_sym_LT_GT;
	v->a[70192] = anon_sym_LT_LT_DASH;
	v->a[70193] = aux_sym_concatenation_token1;
	v->a[70194] = 10;
	v->a[70195] = actions(3);
	v->a[70196] = 1;
	v->a[70197] = sym_comment;
	v->a[70198] = actions(903);
	v->a[70199] = 1;
	small_parse_table_3510(v);
}

/* EOF small_parse_table_701.c */
