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
	v->a[70100] = sym_expansion;
	v->a[70101] = sym_command_substitution;
	v->a[70102] = 10;
	v->a[70103] = actions(3);
	v->a[70104] = 1;
	v->a[70105] = sym_comment;
	v->a[70106] = actions(1408);
	v->a[70107] = 1;
	v->a[70108] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70109] = actions(1410);
	v->a[70110] = 1;
	v->a[70111] = anon_sym_DOLLAR;
	v->a[70112] = actions(1412);
	v->a[70113] = 1;
	v->a[70114] = anon_sym_DQUOTE;
	v->a[70115] = actions(1414);
	v->a[70116] = 1;
	v->a[70117] = anon_sym_DOLLAR_LBRACE;
	v->a[70118] = actions(1416);
	v->a[70119] = 1;
	small_parse_table_3506(v);
}

void	small_parse_table_3506(t_small_parse_table_array *v)
{
	v->a[70120] = anon_sym_DOLLAR_LPAREN;
	v->a[70121] = actions(1418);
	v->a[70122] = 1;
	v->a[70123] = anon_sym_BQUOTE;
	v->a[70124] = state(615);
	v->a[70125] = 2;
	v->a[70126] = sym_concatenation;
	v->a[70127] = aux_sym_for_statement_repeat1;
	v->a[70128] = actions(1406);
	v->a[70129] = 3;
	v->a[70130] = sym_raw_string;
	v->a[70131] = sym_number;
	v->a[70132] = sym_word;
	v->a[70133] = state(852);
	v->a[70134] = 5;
	v->a[70135] = sym_arithmetic_expansion;
	v->a[70136] = sym_string;
	v->a[70137] = sym_simple_expansion;
	v->a[70138] = sym_expansion;
	v->a[70139] = sym_command_substitution;
	small_parse_table_3507(v);
}

void	small_parse_table_3507(t_small_parse_table_array *v)
{
	v->a[70140] = 3;
	v->a[70141] = actions(664);
	v->a[70142] = 1;
	v->a[70143] = sym_comment;
	v->a[70144] = actions(800);
	v->a[70145] = 4;
	v->a[70146] = anon_sym_PIPE;
	v->a[70147] = anon_sym_LT;
	v->a[70148] = anon_sym_GT;
	v->a[70149] = anon_sym_LT_LT;
	v->a[70150] = actions(802);
	v->a[70151] = 12;
	v->a[70152] = sym_file_descriptor;
	v->a[70153] = sym__concat;
	v->a[70154] = sym_variable_name;
	v->a[70155] = anon_sym_AMP_AMP;
	v->a[70156] = anon_sym_PIPE_PIPE;
	v->a[70157] = anon_sym_GT_GT;
	v->a[70158] = anon_sym_LT_AMP;
	v->a[70159] = anon_sym_GT_AMP;
	small_parse_table_3508(v);
}

void	small_parse_table_3508(t_small_parse_table_array *v)
{
	v->a[70160] = anon_sym_GT_PIPE;
	v->a[70161] = anon_sym_LT_GT;
	v->a[70162] = anon_sym_LT_LT_DASH;
	v->a[70163] = aux_sym_concatenation_token1;
	v->a[70164] = 10;
	v->a[70165] = actions(3);
	v->a[70166] = 1;
	v->a[70167] = sym_comment;
	v->a[70168] = actions(1408);
	v->a[70169] = 1;
	v->a[70170] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70171] = actions(1410);
	v->a[70172] = 1;
	v->a[70173] = anon_sym_DOLLAR;
	v->a[70174] = actions(1412);
	v->a[70175] = 1;
	v->a[70176] = anon_sym_DQUOTE;
	v->a[70177] = actions(1414);
	v->a[70178] = 1;
	v->a[70179] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3509(v);
}

void	small_parse_table_3509(t_small_parse_table_array *v)
{
	v->a[70180] = actions(1416);
	v->a[70181] = 1;
	v->a[70182] = anon_sym_DOLLAR_LPAREN;
	v->a[70183] = actions(1418);
	v->a[70184] = 1;
	v->a[70185] = anon_sym_BQUOTE;
	v->a[70186] = state(606);
	v->a[70187] = 2;
	v->a[70188] = sym_concatenation;
	v->a[70189] = aux_sym_for_statement_repeat1;
	v->a[70190] = actions(1406);
	v->a[70191] = 3;
	v->a[70192] = sym_raw_string;
	v->a[70193] = sym_number;
	v->a[70194] = sym_word;
	v->a[70195] = state(852);
	v->a[70196] = 5;
	v->a[70197] = sym_arithmetic_expansion;
	v->a[70198] = sym_string;
	v->a[70199] = sym_simple_expansion;
	small_parse_table_3510(v);
}

/* EOF small_parse_table_701.c */
