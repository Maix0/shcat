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
	v->a[17100] = sym_while_statement;
	v->a[17101] = sym_if_statement;
	v->a[17102] = sym_case_statement;
	v->a[17103] = sym_function_definition;
	v->a[17104] = sym_compound_statement;
	v->a[17105] = sym_subshell;
	v->a[17106] = sym_list;
	v->a[17107] = sym_negated_command;
	v->a[17108] = sym_command;
	v->a[17109] = sym_variable_assignments;
	v->a[17110] = 33;
	v->a[17111] = actions(3);
	v->a[17112] = 1;
	v->a[17113] = sym_comment;
	v->a[17114] = actions(9);
	v->a[17115] = 1;
	v->a[17116] = anon_sym_for;
	v->a[17117] = actions(13);
	v->a[17118] = 1;
	v->a[17119] = anon_sym_if;
	small_parse_table_856(v);
}

void	small_parse_table_856(t_small_parse_table_array *v)
{
	v->a[17120] = actions(15);
	v->a[17121] = 1;
	v->a[17122] = anon_sym_case;
	v->a[17123] = actions(17);
	v->a[17124] = 1;
	v->a[17125] = anon_sym_LPAREN;
	v->a[17126] = actions(19);
	v->a[17127] = 1;
	v->a[17128] = anon_sym_LBRACE;
	v->a[17129] = actions(49);
	v->a[17130] = 1;
	v->a[17131] = sym_word;
	v->a[17132] = actions(57);
	v->a[17133] = 1;
	v->a[17134] = anon_sym_BANG;
	v->a[17135] = actions(63);
	v->a[17136] = 1;
	v->a[17137] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17138] = actions(65);
	v->a[17139] = 1;
	small_parse_table_857(v);
}

void	small_parse_table_857(t_small_parse_table_array *v)
{
	v->a[17140] = anon_sym_DOLLAR;
	v->a[17141] = actions(67);
	v->a[17142] = 1;
	v->a[17143] = anon_sym_DQUOTE;
	v->a[17144] = actions(69);
	v->a[17145] = 1;
	v->a[17146] = sym_raw_string;
	v->a[17147] = actions(71);
	v->a[17148] = 1;
	v->a[17149] = aux_sym_number_token1;
	v->a[17150] = actions(73);
	v->a[17151] = 1;
	v->a[17152] = aux_sym_number_token2;
	v->a[17153] = actions(75);
	v->a[17154] = 1;
	v->a[17155] = anon_sym_DOLLAR_LBRACE;
	v->a[17156] = actions(77);
	v->a[17157] = 1;
	v->a[17158] = anon_sym_DOLLAR_LPAREN;
	v->a[17159] = actions(79);
	small_parse_table_858(v);
}

void	small_parse_table_858(t_small_parse_table_array *v)
{
	v->a[17160] = 1;
	v->a[17161] = anon_sym_BQUOTE;
	v->a[17162] = actions(81);
	v->a[17163] = 1;
	v->a[17164] = sym_file_descriptor;
	v->a[17165] = actions(83);
	v->a[17166] = 1;
	v->a[17167] = sym_variable_name;
	v->a[17168] = state(35);
	v->a[17169] = 1;
	v->a[17170] = aux_sym__terminated_statement;
	v->a[17171] = state(190);
	v->a[17172] = 1;
	v->a[17173] = sym_command_name;
	v->a[17174] = state(280);
	v->a[17175] = 1;
	v->a[17176] = sym_variable_assignment;
	v->a[17177] = state(582);
	v->a[17178] = 1;
	v->a[17179] = sym_concatenation;
	small_parse_table_859(v);
}

void	small_parse_table_859(t_small_parse_table_array *v)
{
	v->a[17180] = state(587);
	v->a[17181] = 1;
	v->a[17182] = aux_sym_command_repeat1;
	v->a[17183] = state(718);
	v->a[17184] = 1;
	v->a[17185] = sym_file_redirect;
	v->a[17186] = state(1213);
	v->a[17187] = 1;
	v->a[17188] = aux_sym_redirected_statement_repeat2;
	v->a[17189] = state(1233);
	v->a[17190] = 1;
	v->a[17191] = sym_pipeline;
	v->a[17192] = state(2035);
	v->a[17193] = 1;
	v->a[17194] = sym__statement_not_pipeline;
	v->a[17195] = actions(11);
	v->a[17196] = 2;
	v->a[17197] = anon_sym_while;
	v->a[17198] = anon_sym_until;
	v->a[17199] = actions(61);
	small_parse_table_860(v);
}

/* EOF small_parse_table_171.c */
