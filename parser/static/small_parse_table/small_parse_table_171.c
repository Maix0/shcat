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
	v->a[17100] = 2;
	v->a[17101] = anon_sym_while;
	v->a[17102] = anon_sym_until;
	v->a[17103] = actions(57);
	v->a[17104] = 2;
	v->a[17105] = anon_sym_LT_AMP_DASH;
	v->a[17106] = anon_sym_GT_AMP_DASH;
	v->a[17107] = actions(65);
	v->a[17108] = 2;
	v->a[17109] = sym_raw_string;
	v->a[17110] = sym_number;
	v->a[17111] = state(420);
	v->a[17112] = 5;
	v->a[17113] = sym_arithmetic_expansion;
	v->a[17114] = sym_string;
	v->a[17115] = sym_simple_expansion;
	v->a[17116] = sym_expansion;
	v->a[17117] = sym_command_substitution;
	v->a[17118] = actions(55);
	v->a[17119] = 8;
	small_parse_table_856(v);
}

void	small_parse_table_856(t_small_parse_table_array *v)
{
	v->a[17120] = anon_sym_LT;
	v->a[17121] = anon_sym_GT;
	v->a[17122] = anon_sym_GT_GT;
	v->a[17123] = anon_sym_AMP_GT;
	v->a[17124] = anon_sym_AMP_GT_GT;
	v->a[17125] = anon_sym_LT_AMP;
	v->a[17126] = anon_sym_GT_AMP;
	v->a[17127] = anon_sym_GT_PIPE;
	v->a[17128] = state(1174);
	v->a[17129] = 12;
	v->a[17130] = sym_redirected_statement;
	v->a[17131] = sym_for_statement;
	v->a[17132] = sym_while_statement;
	v->a[17133] = sym_if_statement;
	v->a[17134] = sym_case_statement;
	v->a[17135] = sym_function_definition;
	v->a[17136] = sym_compound_statement;
	v->a[17137] = sym_subshell;
	v->a[17138] = sym_list;
	v->a[17139] = sym_negated_command;
	small_parse_table_857(v);
}

void	small_parse_table_857(t_small_parse_table_array *v)
{
	v->a[17140] = sym_command;
	v->a[17141] = sym__variable_assignments;
	v->a[17142] = 31;
	v->a[17143] = actions(3);
	v->a[17144] = 1;
	v->a[17145] = sym_comment;
	v->a[17146] = actions(9);
	v->a[17147] = 1;
	v->a[17148] = anon_sym_for;
	v->a[17149] = actions(13);
	v->a[17150] = 1;
	v->a[17151] = anon_sym_if;
	v->a[17152] = actions(15);
	v->a[17153] = 1;
	v->a[17154] = anon_sym_case;
	v->a[17155] = actions(17);
	v->a[17156] = 1;
	v->a[17157] = anon_sym_LPAREN;
	v->a[17158] = actions(19);
	v->a[17159] = 1;
	small_parse_table_858(v);
}

void	small_parse_table_858(t_small_parse_table_array *v)
{
	v->a[17160] = anon_sym_LBRACE;
	v->a[17161] = actions(45);
	v->a[17162] = 1;
	v->a[17163] = sym_word;
	v->a[17164] = actions(53);
	v->a[17165] = 1;
	v->a[17166] = anon_sym_BANG;
	v->a[17167] = actions(59);
	v->a[17168] = 1;
	v->a[17169] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17170] = actions(61);
	v->a[17171] = 1;
	v->a[17172] = anon_sym_DOLLAR;
	v->a[17173] = actions(63);
	v->a[17174] = 1;
	v->a[17175] = anon_sym_DQUOTE;
	v->a[17176] = actions(67);
	v->a[17177] = 1;
	v->a[17178] = anon_sym_DOLLAR_LBRACE;
	v->a[17179] = actions(69);
	small_parse_table_859(v);
}

void	small_parse_table_859(t_small_parse_table_array *v)
{
	v->a[17180] = 1;
	v->a[17181] = anon_sym_DOLLAR_LPAREN;
	v->a[17182] = actions(71);
	v->a[17183] = 1;
	v->a[17184] = anon_sym_BQUOTE;
	v->a[17185] = actions(73);
	v->a[17186] = 1;
	v->a[17187] = sym_file_descriptor;
	v->a[17188] = actions(75);
	v->a[17189] = 1;
	v->a[17190] = sym_variable_name;
	v->a[17191] = state(96);
	v->a[17192] = 1;
	v->a[17193] = aux_sym__terminated_statement;
	v->a[17194] = state(191);
	v->a[17195] = 1;
	v->a[17196] = sym_command_name;
	v->a[17197] = state(281);
	v->a[17198] = 1;
	v->a[17199] = sym_variable_assignment;
	small_parse_table_860(v);
}

/* EOF small_parse_table_171.c */
