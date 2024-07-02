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
	v->a[70100] = state(802);
	v->a[70101] = 5;
	v->a[70102] = sym_arithmetic_expansion;
	v->a[70103] = sym_string;
	v->a[70104] = sym_simple_expansion;
	v->a[70105] = sym_expansion;
	v->a[70106] = sym_command_substitution;
	v->a[70107] = 10;
	v->a[70108] = actions(3);
	v->a[70109] = 1;
	v->a[70110] = sym_comment;
	v->a[70111] = actions(2616);
	v->a[70112] = 1;
	v->a[70113] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70114] = actions(2618);
	v->a[70115] = 1;
	v->a[70116] = anon_sym_DOLLAR;
	v->a[70117] = actions(2620);
	v->a[70118] = 1;
	v->a[70119] = anon_sym_DQUOTE;
	small_parse_table_3506(v);
}

void	small_parse_table_3506(t_small_parse_table_array *v)
{
	v->a[70120] = actions(2622);
	v->a[70121] = 1;
	v->a[70122] = anon_sym_DOLLAR_LBRACE;
	v->a[70123] = actions(2624);
	v->a[70124] = 1;
	v->a[70125] = anon_sym_DOLLAR_LPAREN;
	v->a[70126] = actions(2626);
	v->a[70127] = 1;
	v->a[70128] = anon_sym_BQUOTE;
	v->a[70129] = state(187);
	v->a[70130] = 2;
	v->a[70131] = sym_concatenation;
	v->a[70132] = aux_sym_for_statement_repeat1;
	v->a[70133] = actions(2763);
	v->a[70134] = 3;
	v->a[70135] = sym_raw_string;
	v->a[70136] = sym_number;
	v->a[70137] = sym_word;
	v->a[70138] = state(441);
	v->a[70139] = 5;
	small_parse_table_3507(v);
}

void	small_parse_table_3507(t_small_parse_table_array *v)
{
	v->a[70140] = sym_arithmetic_expansion;
	v->a[70141] = sym_string;
	v->a[70142] = sym_simple_expansion;
	v->a[70143] = sym_expansion;
	v->a[70144] = sym_command_substitution;
	v->a[70145] = 10;
	v->a[70146] = actions(3);
	v->a[70147] = 1;
	v->a[70148] = sym_comment;
	v->a[70149] = actions(2616);
	v->a[70150] = 1;
	v->a[70151] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70152] = actions(2618);
	v->a[70153] = 1;
	v->a[70154] = anon_sym_DOLLAR;
	v->a[70155] = actions(2620);
	v->a[70156] = 1;
	v->a[70157] = anon_sym_DQUOTE;
	v->a[70158] = actions(2622);
	v->a[70159] = 1;
	small_parse_table_3508(v);
}

void	small_parse_table_3508(t_small_parse_table_array *v)
{
	v->a[70160] = anon_sym_DOLLAR_LBRACE;
	v->a[70161] = actions(2624);
	v->a[70162] = 1;
	v->a[70163] = anon_sym_DOLLAR_LPAREN;
	v->a[70164] = actions(2626);
	v->a[70165] = 1;
	v->a[70166] = anon_sym_BQUOTE;
	v->a[70167] = state(188);
	v->a[70168] = 2;
	v->a[70169] = sym_concatenation;
	v->a[70170] = aux_sym_for_statement_repeat1;
	v->a[70171] = actions(2763);
	v->a[70172] = 3;
	v->a[70173] = sym_raw_string;
	v->a[70174] = sym_number;
	v->a[70175] = sym_word;
	v->a[70176] = state(441);
	v->a[70177] = 5;
	v->a[70178] = sym_arithmetic_expansion;
	v->a[70179] = sym_string;
	small_parse_table_3509(v);
}

void	small_parse_table_3509(t_small_parse_table_array *v)
{
	v->a[70180] = sym_simple_expansion;
	v->a[70181] = sym_expansion;
	v->a[70182] = sym_command_substitution;
	v->a[70183] = 10;
	v->a[70184] = actions(3);
	v->a[70185] = 1;
	v->a[70186] = sym_comment;
	v->a[70187] = actions(2410);
	v->a[70188] = 1;
	v->a[70189] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70190] = actions(2414);
	v->a[70191] = 1;
	v->a[70192] = anon_sym_DQUOTE;
	v->a[70193] = actions(2416);
	v->a[70194] = 1;
	v->a[70195] = anon_sym_DOLLAR_LBRACE;
	v->a[70196] = actions(2418);
	v->a[70197] = 1;
	v->a[70198] = anon_sym_DOLLAR_LPAREN;
	v->a[70199] = actions(2420);
	small_parse_table_3510(v);
}

/* EOF small_parse_table_701.c */
