/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_401.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2005(t_small_parse_table_array *v)
{
	v->a[40100] = anon_sym_LT_GT;
	v->a[40101] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40102] = anon_sym_DOLLAR;
	v->a[40103] = anon_sym_DQUOTE;
	v->a[40104] = sym_raw_string;
	v->a[40105] = sym_number;
	v->a[40106] = anon_sym_DOLLAR_LBRACE;
	v->a[40107] = anon_sym_DOLLAR_LPAREN;
	v->a[40108] = anon_sym_BQUOTE;
	v->a[40109] = sym_word;
	v->a[40110] = 3;
	v->a[40111] = actions(3);
	v->a[40112] = 1;
	v->a[40113] = sym_comment;
	v->a[40114] = actions(1404);
	v->a[40115] = 2;
	v->a[40116] = sym_file_descriptor;
	v->a[40117] = sym_variable_name;
	v->a[40118] = actions(1402);
	v->a[40119] = 26;
	small_parse_table_2006(v);
}

void	small_parse_table_2006(t_small_parse_table_array *v)
{
	v->a[40120] = anon_sym_for;
	v->a[40121] = anon_sym_while;
	v->a[40122] = anon_sym_until;
	v->a[40123] = anon_sym_done;
	v->a[40124] = anon_sym_if;
	v->a[40125] = anon_sym_then;
	v->a[40126] = anon_sym_case;
	v->a[40127] = anon_sym_LPAREN;
	v->a[40128] = anon_sym_LBRACE;
	v->a[40129] = anon_sym_BANG;
	v->a[40130] = anon_sym_LT;
	v->a[40131] = anon_sym_GT;
	v->a[40132] = anon_sym_GT_GT;
	v->a[40133] = anon_sym_LT_AMP;
	v->a[40134] = anon_sym_GT_AMP;
	v->a[40135] = anon_sym_GT_PIPE;
	v->a[40136] = anon_sym_LT_GT;
	v->a[40137] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40138] = anon_sym_DOLLAR;
	v->a[40139] = anon_sym_DQUOTE;
	small_parse_table_2007(v);
}

void	small_parse_table_2007(t_small_parse_table_array *v)
{
	v->a[40140] = sym_raw_string;
	v->a[40141] = sym_number;
	v->a[40142] = anon_sym_DOLLAR_LBRACE;
	v->a[40143] = anon_sym_DOLLAR_LPAREN;
	v->a[40144] = anon_sym_BQUOTE;
	v->a[40145] = sym_word;
	v->a[40146] = 16;
	v->a[40147] = actions(3);
	v->a[40148] = 1;
	v->a[40149] = sym_comment;
	v->a[40150] = actions(55);
	v->a[40151] = 1;
	v->a[40152] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40153] = actions(57);
	v->a[40154] = 1;
	v->a[40155] = anon_sym_DOLLAR;
	v->a[40156] = actions(59);
	v->a[40157] = 1;
	v->a[40158] = anon_sym_DQUOTE;
	v->a[40159] = actions(63);
	small_parse_table_2008(v);
}

void	small_parse_table_2008(t_small_parse_table_array *v)
{
	v->a[40160] = 1;
	v->a[40161] = anon_sym_DOLLAR_LBRACE;
	v->a[40162] = actions(65);
	v->a[40163] = 1;
	v->a[40164] = anon_sym_DOLLAR_LPAREN;
	v->a[40165] = actions(67);
	v->a[40166] = 1;
	v->a[40167] = anon_sym_BQUOTE;
	v->a[40168] = actions(359);
	v->a[40169] = 1;
	v->a[40170] = sym_variable_name;
	v->a[40171] = actions(1095);
	v->a[40172] = 1;
	v->a[40173] = sym_file_descriptor;
	v->a[40174] = state(164);
	v->a[40175] = 1;
	v->a[40176] = sym_command_name;
	v->a[40177] = state(661);
	v->a[40178] = 1;
	v->a[40179] = sym_concatenation;
	small_parse_table_2009(v);
}

void	small_parse_table_2009(t_small_parse_table_array *v)
{
	v->a[40180] = state(1203);
	v->a[40181] = 1;
	v->a[40182] = sym_file_redirect;
	v->a[40183] = state(968);
	v->a[40184] = 2;
	v->a[40185] = sym_variable_assignment;
	v->a[40186] = aux_sym_command_repeat1;
	v->a[40187] = actions(217);
	v->a[40188] = 3;
	v->a[40189] = sym_raw_string;
	v->a[40190] = sym_number;
	v->a[40191] = sym_word;
	v->a[40192] = state(374);
	v->a[40193] = 5;
	v->a[40194] = sym_arithmetic_expansion;
	v->a[40195] = sym_string;
	v->a[40196] = sym_simple_expansion;
	v->a[40197] = sym_expansion;
	v->a[40198] = sym_command_substitution;
	v->a[40199] = actions(1093);
	small_parse_table_2010(v);
}

/* EOF small_parse_table_401.c */
