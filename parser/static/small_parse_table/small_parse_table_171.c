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
	v->a[17100] = anon_sym_BQUOTE;
	v->a[17101] = actions(347);
	v->a[17102] = 1;
	v->a[17103] = sym_word;
	v->a[17104] = actions(349);
	v->a[17105] = 1;
	v->a[17106] = anon_sym_BANG;
	v->a[17107] = actions(355);
	v->a[17108] = 1;
	v->a[17109] = sym_file_descriptor;
	v->a[17110] = actions(357);
	v->a[17111] = 1;
	v->a[17112] = sym_variable_name;
	v->a[17113] = state(315);
	v->a[17114] = 1;
	v->a[17115] = sym_command_name;
	v->a[17116] = state(482);
	v->a[17117] = 1;
	v->a[17118] = sym_variable_assignment;
	v->a[17119] = state(622);
	small_parse_table_856(v);
}

void	small_parse_table_856(t_small_parse_table_array *v)
{
	v->a[17120] = 1;
	v->a[17121] = aux_sym_command_repeat1;
	v->a[17122] = state(661);
	v->a[17123] = 1;
	v->a[17124] = sym_concatenation;
	v->a[17125] = state(665);
	v->a[17126] = 1;
	v->a[17127] = sym_file_redirect;
	v->a[17128] = state(1389);
	v->a[17129] = 1;
	v->a[17130] = aux_sym_redirected_statement_repeat2;
	v->a[17131] = state(1393);
	v->a[17132] = 1;
	v->a[17133] = sym_pipeline;
	v->a[17134] = state(1909);
	v->a[17135] = 1;
	v->a[17136] = sym__statement_not_pipeline;
	v->a[17137] = actions(11);
	v->a[17138] = 2;
	v->a[17139] = anon_sym_while;
	small_parse_table_857(v);
}

void	small_parse_table_857(t_small_parse_table_array *v)
{
	v->a[17140] = anon_sym_until;
	v->a[17141] = actions(353);
	v->a[17142] = 2;
	v->a[17143] = sym_raw_string;
	v->a[17144] = sym_number;
	v->a[17145] = state(620);
	v->a[17146] = 5;
	v->a[17147] = sym_arithmetic_expansion;
	v->a[17148] = sym_string;
	v->a[17149] = sym_simple_expansion;
	v->a[17150] = sym_expansion;
	v->a[17151] = sym_command_substitution;
	v->a[17152] = actions(351);
	v->a[17153] = 7;
	v->a[17154] = anon_sym_LT;
	v->a[17155] = anon_sym_GT;
	v->a[17156] = anon_sym_GT_GT;
	v->a[17157] = anon_sym_LT_AMP;
	v->a[17158] = anon_sym_GT_AMP;
	v->a[17159] = anon_sym_GT_PIPE;
	small_parse_table_858(v);
}

void	small_parse_table_858(t_small_parse_table_array *v)
{
	v->a[17160] = anon_sym_LT_GT;
	v->a[17161] = state(1240);
	v->a[17162] = 12;
	v->a[17163] = sym_redirected_statement;
	v->a[17164] = sym_for_statement;
	v->a[17165] = sym_while_statement;
	v->a[17166] = sym_if_statement;
	v->a[17167] = sym_case_statement;
	v->a[17168] = sym_function_definition;
	v->a[17169] = sym_compound_statement;
	v->a[17170] = sym_subshell;
	v->a[17171] = sym_list;
	v->a[17172] = sym_negated_command;
	v->a[17173] = sym_command;
	v->a[17174] = sym__variable_assignments;
	v->a[17175] = 28;
	v->a[17176] = actions(3);
	v->a[17177] = 1;
	v->a[17178] = sym_comment;
	v->a[17179] = actions(9);
	small_parse_table_859(v);
}

void	small_parse_table_859(t_small_parse_table_array *v)
{
	v->a[17180] = 1;
	v->a[17181] = anon_sym_for;
	v->a[17182] = actions(13);
	v->a[17183] = 1;
	v->a[17184] = anon_sym_if;
	v->a[17185] = actions(15);
	v->a[17186] = 1;
	v->a[17187] = anon_sym_case;
	v->a[17188] = actions(17);
	v->a[17189] = 1;
	v->a[17190] = anon_sym_LPAREN;
	v->a[17191] = actions(19);
	v->a[17192] = 1;
	v->a[17193] = anon_sym_LBRACE;
	v->a[17194] = actions(55);
	v->a[17195] = 1;
	v->a[17196] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17197] = actions(57);
	v->a[17198] = 1;
	v->a[17199] = anon_sym_DOLLAR;
	small_parse_table_860(v);
}

/* EOF small_parse_table_171.c */
