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
	v->a[19100] = sym_compound_statement;
	v->a[19101] = sym_subshell;
	v->a[19102] = sym_list;
	v->a[19103] = sym_negated_command;
	v->a[19104] = sym_command;
	v->a[19105] = sym__variable_assignments;
	v->a[19106] = 30;
	v->a[19107] = actions(3);
	v->a[19108] = 1;
	v->a[19109] = sym_comment;
	v->a[19110] = actions(9);
	v->a[19111] = 1;
	v->a[19112] = anon_sym_for;
	v->a[19113] = actions(13);
	v->a[19114] = 1;
	v->a[19115] = anon_sym_if;
	v->a[19116] = actions(15);
	v->a[19117] = 1;
	v->a[19118] = anon_sym_case;
	v->a[19119] = actions(17);
	small_parse_table_956(v);
}

void	small_parse_table_956(t_small_parse_table_array *v)
{
	v->a[19120] = 1;
	v->a[19121] = anon_sym_LPAREN;
	v->a[19122] = actions(19);
	v->a[19123] = 1;
	v->a[19124] = anon_sym_LBRACE;
	v->a[19125] = actions(59);
	v->a[19126] = 1;
	v->a[19127] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19128] = actions(61);
	v->a[19129] = 1;
	v->a[19130] = anon_sym_DOLLAR;
	v->a[19131] = actions(63);
	v->a[19132] = 1;
	v->a[19133] = anon_sym_DQUOTE;
	v->a[19134] = actions(67);
	v->a[19135] = 1;
	v->a[19136] = anon_sym_DOLLAR_LBRACE;
	v->a[19137] = actions(69);
	v->a[19138] = 1;
	v->a[19139] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_957(v);
}

void	small_parse_table_957(t_small_parse_table_array *v)
{
	v->a[19140] = actions(71);
	v->a[19141] = 1;
	v->a[19142] = anon_sym_BQUOTE;
	v->a[19143] = actions(363);
	v->a[19144] = 1;
	v->a[19145] = sym_word;
	v->a[19146] = actions(365);
	v->a[19147] = 1;
	v->a[19148] = anon_sym_BANG;
	v->a[19149] = actions(373);
	v->a[19150] = 1;
	v->a[19151] = sym_file_descriptor;
	v->a[19152] = actions(375);
	v->a[19153] = 1;
	v->a[19154] = sym_variable_name;
	v->a[19155] = state(259);
	v->a[19156] = 1;
	v->a[19157] = sym_command_name;
	v->a[19158] = state(624);
	v->a[19159] = 1;
	small_parse_table_958(v);
}

void	small_parse_table_958(t_small_parse_table_array *v)
{
	v->a[19160] = sym_concatenation;
	v->a[19161] = state(626);
	v->a[19162] = 1;
	v->a[19163] = sym_variable_assignment;
	v->a[19164] = state(713);
	v->a[19165] = 1;
	v->a[19166] = aux_sym_command_repeat1;
	v->a[19167] = state(726);
	v->a[19168] = 1;
	v->a[19169] = sym_file_redirect;
	v->a[19170] = state(1408);
	v->a[19171] = 1;
	v->a[19172] = sym_pipeline;
	v->a[19173] = state(1420);
	v->a[19174] = 1;
	v->a[19175] = aux_sym_redirected_statement_repeat2;
	v->a[19176] = state(2123);
	v->a[19177] = 1;
	v->a[19178] = sym__statement_not_pipeline;
	v->a[19179] = actions(11);
	small_parse_table_959(v);
}

void	small_parse_table_959(t_small_parse_table_array *v)
{
	v->a[19180] = 2;
	v->a[19181] = anon_sym_while;
	v->a[19182] = anon_sym_until;
	v->a[19183] = actions(369);
	v->a[19184] = 2;
	v->a[19185] = anon_sym_LT_AMP_DASH;
	v->a[19186] = anon_sym_GT_AMP_DASH;
	v->a[19187] = actions(371);
	v->a[19188] = 2;
	v->a[19189] = sym_raw_string;
	v->a[19190] = sym_number;
	v->a[19191] = state(734);
	v->a[19192] = 5;
	v->a[19193] = sym_arithmetic_expansion;
	v->a[19194] = sym_string;
	v->a[19195] = sym_simple_expansion;
	v->a[19196] = sym_expansion;
	v->a[19197] = sym_command_substitution;
	v->a[19198] = actions(367);
	v->a[19199] = 8;
	small_parse_table_960(v);
}

/* EOF small_parse_table_191.c */
