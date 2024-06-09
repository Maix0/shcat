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
	v->a[19100] = actions(57);
	v->a[19101] = 1;
	v->a[19102] = anon_sym_BANG;
	v->a[19103] = actions(63);
	v->a[19104] = 1;
	v->a[19105] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19106] = actions(65);
	v->a[19107] = 1;
	v->a[19108] = anon_sym_DOLLAR;
	v->a[19109] = actions(67);
	v->a[19110] = 1;
	v->a[19111] = anon_sym_DQUOTE;
	v->a[19112] = actions(69);
	v->a[19113] = 1;
	v->a[19114] = sym_raw_string;
	v->a[19115] = actions(71);
	v->a[19116] = 1;
	v->a[19117] = aux_sym_number_token1;
	v->a[19118] = actions(73);
	v->a[19119] = 1;
	small_parse_table_956(v);
}

void	small_parse_table_956(t_small_parse_table_array *v)
{
	v->a[19120] = aux_sym_number_token2;
	v->a[19121] = actions(75);
	v->a[19122] = 1;
	v->a[19123] = anon_sym_DOLLAR_LBRACE;
	v->a[19124] = actions(77);
	v->a[19125] = 1;
	v->a[19126] = anon_sym_DOLLAR_LPAREN;
	v->a[19127] = actions(79);
	v->a[19128] = 1;
	v->a[19129] = anon_sym_BQUOTE;
	v->a[19130] = actions(81);
	v->a[19131] = 1;
	v->a[19132] = sym_file_descriptor;
	v->a[19133] = actions(83);
	v->a[19134] = 1;
	v->a[19135] = sym_variable_name;
	v->a[19136] = state(190);
	v->a[19137] = 1;
	v->a[19138] = sym_command_name;
	v->a[19139] = state(304);
	small_parse_table_957(v);
}

void	small_parse_table_957(t_small_parse_table_array *v)
{
	v->a[19140] = 1;
	v->a[19141] = sym_variable_assignment;
	v->a[19142] = state(582);
	v->a[19143] = 1;
	v->a[19144] = sym_concatenation;
	v->a[19145] = state(587);
	v->a[19146] = 1;
	v->a[19147] = aux_sym_command_repeat1;
	v->a[19148] = state(718);
	v->a[19149] = 1;
	v->a[19150] = sym_file_redirect;
	v->a[19151] = state(1200);
	v->a[19152] = 1;
	v->a[19153] = sym_pipeline;
	v->a[19154] = state(1213);
	v->a[19155] = 1;
	v->a[19156] = aux_sym_redirected_statement_repeat2;
	v->a[19157] = state(2035);
	v->a[19158] = 1;
	v->a[19159] = sym__statement_not_pipeline;
	small_parse_table_958(v);
}

void	small_parse_table_958(t_small_parse_table_array *v)
{
	v->a[19160] = actions(11);
	v->a[19161] = 2;
	v->a[19162] = anon_sym_while;
	v->a[19163] = anon_sym_until;
	v->a[19164] = actions(61);
	v->a[19165] = 2;
	v->a[19166] = anon_sym_LT_AMP_DASH;
	v->a[19167] = anon_sym_GT_AMP_DASH;
	v->a[19168] = state(397);
	v->a[19169] = 6;
	v->a[19170] = sym_arithmetic_expansion;
	v->a[19171] = sym_string;
	v->a[19172] = sym_number;
	v->a[19173] = sym_simple_expansion;
	v->a[19174] = sym_expansion;
	v->a[19175] = sym_command_substitution;
	v->a[19176] = actions(59);
	v->a[19177] = 8;
	v->a[19178] = anon_sym_LT;
	v->a[19179] = anon_sym_GT;
	small_parse_table_959(v);
}

void	small_parse_table_959(t_small_parse_table_array *v)
{
	v->a[19180] = anon_sym_GT_GT;
	v->a[19181] = anon_sym_AMP_GT;
	v->a[19182] = anon_sym_AMP_GT_GT;
	v->a[19183] = anon_sym_LT_AMP;
	v->a[19184] = anon_sym_GT_AMP;
	v->a[19185] = anon_sym_GT_PIPE;
	v->a[19186] = state(1194);
	v->a[19187] = 12;
	v->a[19188] = sym_redirected_statement;
	v->a[19189] = sym_for_statement;
	v->a[19190] = sym_while_statement;
	v->a[19191] = sym_if_statement;
	v->a[19192] = sym_case_statement;
	v->a[19193] = sym_function_definition;
	v->a[19194] = sym_compound_statement;
	v->a[19195] = sym_subshell;
	v->a[19196] = sym_list;
	v->a[19197] = sym_negated_command;
	v->a[19198] = sym_command;
	v->a[19199] = sym_variable_assignments;
	small_parse_table_960(v);
}

/* EOF small_parse_table_191.c */
