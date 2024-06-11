/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_191.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_955(t_small_parse_table_array *v)
{
	v->a[19100] = sym_case_statement;
	v->a[19101] = sym_function_definition;
	v->a[19102] = sym_compound_statement;
	v->a[19103] = sym_subshell;
	v->a[19104] = sym_list;
	v->a[19105] = sym_negated_command;
	v->a[19106] = sym_command;
	v->a[19107] = sym_variable_assignments;
	v->a[19108] = 29;
	v->a[19109] = actions(3);
	v->a[19110] = 1;
	v->a[19111] = sym_comment;
	v->a[19112] = actions(9);
	v->a[19113] = 1;
	v->a[19114] = anon_sym_for;
	v->a[19115] = actions(13);
	v->a[19116] = 1;
	v->a[19117] = anon_sym_if;
	v->a[19118] = actions(15);
	v->a[19119] = 1;
	small_parse_table_956(v);
}

void	small_parse_table_956(t_small_parse_table_array *v)
{
	v->a[19120] = anon_sym_case;
	v->a[19121] = actions(17);
	v->a[19122] = 1;
	v->a[19123] = anon_sym_LPAREN;
	v->a[19124] = actions(19);
	v->a[19125] = 1;
	v->a[19126] = anon_sym_LBRACE;
	v->a[19127] = actions(45);
	v->a[19128] = 1;
	v->a[19129] = sym_word;
	v->a[19130] = actions(53);
	v->a[19131] = 1;
	v->a[19132] = anon_sym_BANG;
	v->a[19133] = actions(59);
	v->a[19134] = 1;
	v->a[19135] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19136] = actions(61);
	v->a[19137] = 1;
	v->a[19138] = anon_sym_DOLLAR;
	v->a[19139] = actions(63);
	small_parse_table_957(v);
}

void	small_parse_table_957(t_small_parse_table_array *v)
{
	v->a[19140] = 1;
	v->a[19141] = anon_sym_DQUOTE;
	v->a[19142] = actions(67);
	v->a[19143] = 1;
	v->a[19144] = anon_sym_DOLLAR_LBRACE;
	v->a[19145] = actions(69);
	v->a[19146] = 1;
	v->a[19147] = anon_sym_DOLLAR_LPAREN;
	v->a[19148] = actions(71);
	v->a[19149] = 1;
	v->a[19150] = anon_sym_BQUOTE;
	v->a[19151] = actions(73);
	v->a[19152] = 1;
	v->a[19153] = sym_file_descriptor;
	v->a[19154] = actions(75);
	v->a[19155] = 1;
	v->a[19156] = sym_variable_name;
	v->a[19157] = state(187);
	v->a[19158] = 1;
	v->a[19159] = sym_command_name;
	small_parse_table_958(v);
}

void	small_parse_table_958(t_small_parse_table_array *v)
{
	v->a[19160] = state(303);
	v->a[19161] = 1;
	v->a[19162] = sym_variable_assignment;
	v->a[19163] = state(647);
	v->a[19164] = 1;
	v->a[19165] = sym_concatenation;
	v->a[19166] = state(736);
	v->a[19167] = 1;
	v->a[19168] = aux_sym_command_repeat1;
	v->a[19169] = state(738);
	v->a[19170] = 1;
	v->a[19171] = sym_file_redirect;
	v->a[19172] = state(1460);
	v->a[19173] = 1;
	v->a[19174] = aux_sym_redirected_statement_repeat2;
	v->a[19175] = state(1612);
	v->a[19176] = 1;
	v->a[19177] = sym_pipeline;
	v->a[19178] = actions(11);
	v->a[19179] = 2;
	small_parse_table_959(v);
}

void	small_parse_table_959(t_small_parse_table_array *v)
{
	v->a[19180] = anon_sym_while;
	v->a[19181] = anon_sym_until;
	v->a[19182] = actions(57);
	v->a[19183] = 2;
	v->a[19184] = anon_sym_LT_AMP_DASH;
	v->a[19185] = anon_sym_GT_AMP_DASH;
	v->a[19186] = actions(65);
	v->a[19187] = 2;
	v->a[19188] = sym_raw_string;
	v->a[19189] = sym_number;
	v->a[19190] = state(394);
	v->a[19191] = 5;
	v->a[19192] = sym_arithmetic_expansion;
	v->a[19193] = sym_string;
	v->a[19194] = sym_simple_expansion;
	v->a[19195] = sym_expansion;
	v->a[19196] = sym_command_substitution;
	v->a[19197] = actions(55);
	v->a[19198] = 8;
	v->a[19199] = anon_sym_LT;
	small_parse_table_960(v);
}

/* EOF small_parse_table_191.c */
