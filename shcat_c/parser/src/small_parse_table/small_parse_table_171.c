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
	v->a[17100] = anon_sym_GT_AMP_DASH;
	v->a[17101] = anon_sym_LT_LT_DASH;
	v->a[17102] = anon_sym_LT_LT_LT;
	v->a[17103] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17104] = anon_sym_DOLLAR_LBRACK;
	v->a[17105] = anon_sym_DOLLAR;
	v->a[17106] = sym__special_character;
	v->a[17107] = anon_sym_DQUOTE;
	v->a[17108] = sym_raw_string;
	v->a[17109] = sym_ansi_c_string;
	v->a[17110] = aux_sym_number_token1;
	v->a[17111] = aux_sym_number_token2;
	v->a[17112] = anon_sym_DOLLAR_LBRACE;
	v->a[17113] = anon_sym_DOLLAR_LPAREN;
	v->a[17114] = anon_sym_BQUOTE;
	v->a[17115] = anon_sym_DOLLAR_BQUOTE;
	v->a[17116] = anon_sym_LT_LPAREN;
	v->a[17117] = anon_sym_GT_LPAREN;
	v->a[17118] = sym_word;
	v->a[17119] = 22;
	small_parse_table_856(v);
}

void	small_parse_table_856(t_small_parse_table_array *v)
{
	v->a[17120] = actions(3);
	v->a[17121] = 1;
	v->a[17122] = sym_comment;
	v->a[17123] = actions(3536);
	v->a[17124] = 1;
	v->a[17125] = anon_sym_DOLLAR_LBRACK;
	v->a[17126] = actions(3539);
	v->a[17127] = 1;
	v->a[17128] = anon_sym_DOLLAR;
	v->a[17129] = actions(3542);
	v->a[17130] = 1;
	v->a[17131] = sym__special_character;
	v->a[17132] = actions(3545);
	v->a[17133] = 1;
	v->a[17134] = anon_sym_DQUOTE;
	v->a[17135] = actions(3548);
	v->a[17136] = 1;
	v->a[17137] = aux_sym_number_token1;
	v->a[17138] = actions(3551);
	v->a[17139] = 1;
	small_parse_table_857(v);
}

void	small_parse_table_857(t_small_parse_table_array *v)
{
	v->a[17140] = aux_sym_number_token2;
	v->a[17141] = actions(3554);
	v->a[17142] = 1;
	v->a[17143] = anon_sym_DOLLAR_LBRACE;
	v->a[17144] = actions(3557);
	v->a[17145] = 1;
	v->a[17146] = anon_sym_DOLLAR_LPAREN;
	v->a[17147] = actions(3560);
	v->a[17148] = 1;
	v->a[17149] = anon_sym_BQUOTE;
	v->a[17150] = actions(3563);
	v->a[17151] = 1;
	v->a[17152] = anon_sym_DOLLAR_BQUOTE;
	v->a[17153] = actions(3569);
	v->a[17154] = 1;
	v->a[17155] = aux_sym__simple_variable_name_token1;
	v->a[17156] = actions(3572);
	v->a[17157] = 1;
	v->a[17158] = sym_test_operator;
	v->a[17159] = actions(3575);
	small_parse_table_858(v);
}

void	small_parse_table_858(t_small_parse_table_array *v)
{
	v->a[17160] = 1;
	v->a[17161] = sym__brace_start;
	v->a[17162] = state(1966);
	v->a[17163] = 1;
	v->a[17164] = aux_sym__literal_repeat1;
	v->a[17165] = actions(2442);
	v->a[17166] = 2;
	v->a[17167] = sym_file_descriptor;
	v->a[17168] = aux_sym_heredoc_redirect_token1;
	v->a[17169] = actions(3533);
	v->a[17170] = 2;
	v->a[17171] = anon_sym_LPAREN_LPAREN;
	v->a[17172] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17173] = actions(3566);
	v->a[17174] = 2;
	v->a[17175] = anon_sym_LT_LPAREN;
	v->a[17176] = anon_sym_GT_LPAREN;
	v->a[17177] = state(709);
	v->a[17178] = 2;
	v->a[17179] = sym_concatenation;
	small_parse_table_859(v);
}

void	small_parse_table_859(t_small_parse_table_array *v)
{
	v->a[17180] = aux_sym_unset_command_repeat1;
	v->a[17181] = actions(3530);
	v->a[17182] = 3;
	v->a[17183] = sym_raw_string;
	v->a[17184] = sym_ansi_c_string;
	v->a[17185] = sym_word;
	v->a[17186] = state(1650);
	v->a[17187] = 9;
	v->a[17188] = sym_arithmetic_expansion;
	v->a[17189] = sym_brace_expression;
	v->a[17190] = sym_string;
	v->a[17191] = sym_translated_string;
	v->a[17192] = sym_number;
	v->a[17193] = sym_simple_expansion;
	v->a[17194] = sym_expansion;
	v->a[17195] = sym_command_substitution;
	v->a[17196] = sym_process_substitution;
	v->a[17197] = actions(2440);
	v->a[17198] = 20;
	v->a[17199] = anon_sym_SEMI;
	small_parse_table_860(v);
}

/* EOF small_parse_table_171.c */
