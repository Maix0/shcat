/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_171.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_855(t_small_parse_table_array *v)
{
	v->a[17100] = actions(67);
	v->a[17101] = 1;
	v->a[17102] = anon_sym_BQUOTE;
	v->a[17103] = actions(347);
	v->a[17104] = 1;
	v->a[17105] = sym_word;
	v->a[17106] = actions(349);
	v->a[17107] = 1;
	v->a[17108] = anon_sym_BANG;
	v->a[17109] = actions(355);
	v->a[17110] = 1;
	v->a[17111] = sym_file_descriptor;
	v->a[17112] = actions(357);
	v->a[17113] = 1;
	v->a[17114] = sym_variable_name;
	v->a[17115] = state(322);
	v->a[17116] = 1;
	v->a[17117] = sym_command_name;
	v->a[17118] = state(575);
	v->a[17119] = 1;
	small_parse_table_856(v);
}

void	small_parse_table_856(t_small_parse_table_array *v)
{
	v->a[17120] = sym_variable_assignment;
	v->a[17121] = state(584);
	v->a[17122] = 1;
	v->a[17123] = sym_concatenation;
	v->a[17124] = state(620);
	v->a[17125] = 1;
	v->a[17126] = sym_file_redirect;
	v->a[17127] = state(625);
	v->a[17128] = 1;
	v->a[17129] = aux_sym_command_repeat1;
	v->a[17130] = state(1348);
	v->a[17131] = 1;
	v->a[17132] = sym_pipeline;
	v->a[17133] = state(1399);
	v->a[17134] = 1;
	v->a[17135] = aux_sym_redirected_statement_repeat2;
	v->a[17136] = state(1916);
	v->a[17137] = 1;
	v->a[17138] = sym__statement_not_pipeline;
	v->a[17139] = actions(11);
	small_parse_table_857(v);
}

void	small_parse_table_857(t_small_parse_table_array *v)
{
	v->a[17140] = 2;
	v->a[17141] = anon_sym_while;
	v->a[17142] = anon_sym_until;
	v->a[17143] = actions(353);
	v->a[17144] = 2;
	v->a[17145] = sym_raw_string;
	v->a[17146] = sym_number;
	v->a[17147] = state(628);
	v->a[17148] = 5;
	v->a[17149] = sym_arithmetic_expansion;
	v->a[17150] = sym_string;
	v->a[17151] = sym_simple_expansion;
	v->a[17152] = sym_expansion;
	v->a[17153] = sym_command_substitution;
	v->a[17154] = actions(351);
	v->a[17155] = 7;
	v->a[17156] = anon_sym_LT;
	v->a[17157] = anon_sym_GT;
	v->a[17158] = anon_sym_GT_GT;
	v->a[17159] = anon_sym_LT_AMP;
	small_parse_table_858(v);
}

void	small_parse_table_858(t_small_parse_table_array *v)
{
	v->a[17160] = anon_sym_GT_AMP;
	v->a[17161] = anon_sym_GT_PIPE;
	v->a[17162] = anon_sym_LT_GT;
	v->a[17163] = state(1350);
	v->a[17164] = 12;
	v->a[17165] = sym_redirected_statement;
	v->a[17166] = sym_for_statement;
	v->a[17167] = sym_while_statement;
	v->a[17168] = sym_if_statement;
	v->a[17169] = sym_case_statement;
	v->a[17170] = sym_function_definition;
	v->a[17171] = sym_compound_statement;
	v->a[17172] = sym_subshell;
	v->a[17173] = sym_list;
	v->a[17174] = sym_negated_command;
	v->a[17175] = sym_command;
	v->a[17176] = sym__variable_assignments;
	v->a[17177] = 29;
	v->a[17178] = actions(3);
	v->a[17179] = 1;
	small_parse_table_859(v);
}

void	small_parse_table_859(t_small_parse_table_array *v)
{
	v->a[17180] = sym_comment;
	v->a[17181] = actions(9);
	v->a[17182] = 1;
	v->a[17183] = anon_sym_for;
	v->a[17184] = actions(13);
	v->a[17185] = 1;
	v->a[17186] = anon_sym_if;
	v->a[17187] = actions(15);
	v->a[17188] = 1;
	v->a[17189] = anon_sym_case;
	v->a[17190] = actions(17);
	v->a[17191] = 1;
	v->a[17192] = anon_sym_LPAREN;
	v->a[17193] = actions(19);
	v->a[17194] = 1;
	v->a[17195] = anon_sym_LBRACE;
	v->a[17196] = actions(43);
	v->a[17197] = 1;
	v->a[17198] = sym_word;
	v->a[17199] = actions(51);
	small_parse_table_860(v);
}

/* EOF small_parse_table_171.c */
