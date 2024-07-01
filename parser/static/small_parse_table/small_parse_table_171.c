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
	v->a[17100] = 29;
	v->a[17101] = actions(3);
	v->a[17102] = 1;
	v->a[17103] = sym_comment;
	v->a[17104] = actions(9);
	v->a[17105] = 1;
	v->a[17106] = anon_sym_for;
	v->a[17107] = actions(13);
	v->a[17108] = 1;
	v->a[17109] = anon_sym_if;
	v->a[17110] = actions(15);
	v->a[17111] = 1;
	v->a[17112] = anon_sym_case;
	v->a[17113] = actions(17);
	v->a[17114] = 1;
	v->a[17115] = anon_sym_LPAREN;
	v->a[17116] = actions(19);
	v->a[17117] = 1;
	v->a[17118] = anon_sym_LBRACE;
	v->a[17119] = actions(45);
	small_parse_table_856(v);
}

void	small_parse_table_856(t_small_parse_table_array *v)
{
	v->a[17120] = 1;
	v->a[17121] = sym_word;
	v->a[17122] = actions(53);
	v->a[17123] = 1;
	v->a[17124] = anon_sym_BANG;
	v->a[17125] = actions(59);
	v->a[17126] = 1;
	v->a[17127] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17128] = actions(61);
	v->a[17129] = 1;
	v->a[17130] = anon_sym_DOLLAR;
	v->a[17131] = actions(63);
	v->a[17132] = 1;
	v->a[17133] = anon_sym_DQUOTE;
	v->a[17134] = actions(67);
	v->a[17135] = 1;
	v->a[17136] = anon_sym_DOLLAR_LBRACE;
	v->a[17137] = actions(69);
	v->a[17138] = 1;
	v->a[17139] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_857(v);
}

void	small_parse_table_857(t_small_parse_table_array *v)
{
	v->a[17140] = actions(71);
	v->a[17141] = 1;
	v->a[17142] = anon_sym_BQUOTE;
	v->a[17143] = actions(73);
	v->a[17144] = 1;
	v->a[17145] = sym_file_descriptor;
	v->a[17146] = actions(75);
	v->a[17147] = 1;
	v->a[17148] = sym_variable_name;
	v->a[17149] = state(189);
	v->a[17150] = 1;
	v->a[17151] = sym_command_name;
	v->a[17152] = state(389);
	v->a[17153] = 1;
	v->a[17154] = sym_variable_assignment;
	v->a[17155] = state(650);
	v->a[17156] = 1;
	v->a[17157] = sym_concatenation;
	v->a[17158] = state(712);
	v->a[17159] = 1;
	small_parse_table_858(v);
}

void	small_parse_table_858(t_small_parse_table_array *v)
{
	v->a[17160] = sym_file_redirect;
	v->a[17161] = state(713);
	v->a[17162] = 1;
	v->a[17163] = aux_sym_command_repeat1;
	v->a[17164] = state(1333);
	v->a[17165] = 1;
	v->a[17166] = aux_sym_redirected_statement_repeat2;
	v->a[17167] = state(1562);
	v->a[17168] = 1;
	v->a[17169] = sym_pipeline;
	v->a[17170] = actions(11);
	v->a[17171] = 2;
	v->a[17172] = anon_sym_while;
	v->a[17173] = anon_sym_until;
	v->a[17174] = actions(57);
	v->a[17175] = 2;
	v->a[17176] = anon_sym_LT_AMP_DASH;
	v->a[17177] = anon_sym_GT_AMP_DASH;
	v->a[17178] = actions(65);
	v->a[17179] = 2;
	small_parse_table_859(v);
}

void	small_parse_table_859(t_small_parse_table_array *v)
{
	v->a[17180] = sym_raw_string;
	v->a[17181] = sym_number;
	v->a[17182] = state(443);
	v->a[17183] = 5;
	v->a[17184] = sym_arithmetic_expansion;
	v->a[17185] = sym_string;
	v->a[17186] = sym_simple_expansion;
	v->a[17187] = sym_expansion;
	v->a[17188] = sym_command_substitution;
	v->a[17189] = actions(55);
	v->a[17190] = 6;
	v->a[17191] = anon_sym_LT;
	v->a[17192] = anon_sym_GT;
	v->a[17193] = anon_sym_GT_GT;
	v->a[17194] = anon_sym_LT_AMP;
	v->a[17195] = anon_sym_GT_AMP;
	v->a[17196] = anon_sym_GT_PIPE;
	v->a[17197] = state(1113);
	v->a[17198] = 13;
	v->a[17199] = sym__statement_not_pipeline;
	small_parse_table_860(v);
}

/* EOF small_parse_table_171.c */
