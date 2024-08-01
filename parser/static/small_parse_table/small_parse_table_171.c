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
	v->a[17100] = anon_sym_GT_GT;
	v->a[17101] = anon_sym_LT_LT;
	v->a[17102] = aux_sym_heredoc_redirect_token1;
	v->a[17103] = anon_sym_SEMI;
	v->a[17104] = 14;
	v->a[17105] = actions(3);
	v->a[17106] = 1;
	v->a[17107] = sym_comment;
	v->a[17108] = actions(25);
	v->a[17109] = 1;
	v->a[17110] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17111] = actions(27);
	v->a[17112] = 1;
	v->a[17113] = anon_sym_DOLLAR;
	v->a[17114] = actions(29);
	v->a[17115] = 1;
	v->a[17116] = anon_sym_DQUOTE;
	v->a[17117] = actions(33);
	v->a[17118] = 1;
	v->a[17119] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_856(v);
}

void	small_parse_table_856(t_small_parse_table_array *v)
{
	v->a[17120] = actions(35);
	v->a[17121] = 1;
	v->a[17122] = anon_sym_DOLLAR_LPAREN;
	v->a[17123] = actions(37);
	v->a[17124] = 1;
	v->a[17125] = anon_sym_BQUOTE;
	v->a[17126] = actions(413);
	v->a[17127] = 1;
	v->a[17128] = sym__bare_dollar;
	v->a[17129] = actions(553);
	v->a[17130] = 1;
	v->a[17131] = ts_builtin_sym_end;
	v->a[17132] = state(167);
	v->a[17133] = 1;
	v->a[17134] = aux_sym_command_repeat2;
	v->a[17135] = state(564);
	v->a[17136] = 1;
	v->a[17137] = sym_concatenation;
	v->a[17138] = actions(409);
	v->a[17139] = 3;
	small_parse_table_857(v);
}

void	small_parse_table_857(t_small_parse_table_array *v)
{
	v->a[17140] = sym_raw_string;
	v->a[17141] = sym_number;
	v->a[17142] = sym_word;
	v->a[17143] = state(273);
	v->a[17144] = 5;
	v->a[17145] = sym_arithmetic_expansion;
	v->a[17146] = sym_string;
	v->a[17147] = sym_simple_expansion;
	v->a[17148] = sym_expansion;
	v->a[17149] = sym_command_substitution;
	v->a[17150] = actions(403);
	v->a[17151] = 10;
	v->a[17152] = anon_sym_PIPE;
	v->a[17153] = anon_sym_SEMI_SEMI;
	v->a[17154] = anon_sym_AMP_AMP;
	v->a[17155] = anon_sym_PIPE_PIPE;
	v->a[17156] = anon_sym_LT;
	v->a[17157] = anon_sym_GT;
	v->a[17158] = anon_sym_GT_GT;
	v->a[17159] = anon_sym_LT_LT;
	small_parse_table_858(v);
}

void	small_parse_table_858(t_small_parse_table_array *v)
{
	v->a[17160] = aux_sym_heredoc_redirect_token1;
	v->a[17161] = anon_sym_SEMI;
	v->a[17162] = 12;
	v->a[17163] = actions(3);
	v->a[17164] = 1;
	v->a[17165] = sym_comment;
	v->a[17166] = actions(448);
	v->a[17167] = 1;
	v->a[17168] = sym_variable_name;
	v->a[17169] = actions(558);
	v->a[17170] = 1;
	v->a[17171] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17172] = actions(561);
	v->a[17173] = 1;
	v->a[17174] = anon_sym_DOLLAR;
	v->a[17175] = actions(564);
	v->a[17176] = 1;
	v->a[17177] = anon_sym_DQUOTE;
	v->a[17178] = actions(567);
	v->a[17179] = 1;
	small_parse_table_859(v);
}

void	small_parse_table_859(t_small_parse_table_array *v)
{
	v->a[17180] = anon_sym_DOLLAR_LBRACE;
	v->a[17181] = actions(570);
	v->a[17182] = 1;
	v->a[17183] = anon_sym_DOLLAR_LPAREN;
	v->a[17184] = actions(573);
	v->a[17185] = 1;
	v->a[17186] = anon_sym_BQUOTE;
	v->a[17187] = state(176);
	v->a[17188] = 2;
	v->a[17189] = sym_concatenation;
	v->a[17190] = aux_sym_for_statement_repeat1;
	v->a[17191] = actions(555);
	v->a[17192] = 3;
	v->a[17193] = sym_raw_string;
	v->a[17194] = sym_number;
	v->a[17195] = sym_word;
	v->a[17196] = state(292);
	v->a[17197] = 5;
	v->a[17198] = sym_arithmetic_expansion;
	v->a[17199] = sym_string;
	small_parse_table_860(v);
}

/* EOF small_parse_table_171.c */
