/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10(t_small_parse_table_array *v)
{
	v->a[200] = actions(1400);
	v->a[201] = 3;
	v->a[202] = sym_raw_string;
	v->a[203] = sym_ansi_c_string;
	v->a[204] = sym_word;
	v->a[205] = state(874);
	v->a[206] = 9;
	v->a[207] = sym_arithmetic_expansion;
	v->a[208] = sym_brace_expression;
	v->a[209] = sym_string;
	v->a[210] = sym_translated_string;
	v->a[211] = sym_number;
	v->a[212] = sym_simple_expansion;
	v->a[213] = sym_expansion;
	v->a[214] = sym_command_substitution;
	v->a[215] = sym_process_substitution;
	v->a[216] = actions(1440);
	v->a[217] = 22;
	v->a[218] = anon_sym_SEMI;
	v->a[219] = anon_sym_PIPE_PIPE;
	small_parse_table_11(v);
}

void	small_parse_table_11(t_small_parse_table_array *v)
{
	v->a[220] = anon_sym_AMP_AMP;
	v->a[221] = anon_sym_PIPE;
	v->a[222] = anon_sym_AMP;
	v->a[223] = anon_sym_LT;
	v->a[224] = anon_sym_GT;
	v->a[225] = anon_sym_LT_LT;
	v->a[226] = anon_sym_GT_GT;
	v->a[227] = anon_sym_esac;
	v->a[228] = anon_sym_SEMI_SEMI;
	v->a[229] = anon_sym_SEMI_AMP;
	v->a[230] = anon_sym_SEMI_SEMI_AMP;
	v->a[231] = anon_sym_PIPE_AMP;
	v->a[232] = anon_sym_AMP_GT;
	v->a[233] = anon_sym_AMP_GT_GT;
	v->a[234] = anon_sym_LT_AMP;
	v->a[235] = anon_sym_GT_AMP;
	v->a[236] = anon_sym_GT_PIPE;
	v->a[237] = anon_sym_LT_AMP_DASH;
	v->a[238] = anon_sym_GT_AMP_DASH;
	v->a[239] = anon_sym_LT_LT_DASH;
	small_parse_table_12(v);
}

void	small_parse_table_12(t_small_parse_table_array *v)
{
	v->a[240] = 28;
	v->a[241] = actions(3);
	v->a[242] = 1;
	v->a[243] = sym_comment;
	v->a[244] = actions(677);
	v->a[245] = 1;
	v->a[246] = anon_sym_LPAREN;
	v->a[247] = actions(1450);
	v->a[248] = 1;
	v->a[249] = anon_sym_LT_LT_LT;
	v->a[250] = actions(1452);
	v->a[251] = 1;
	v->a[252] = anon_sym_DOLLAR_LBRACK;
	v->a[253] = actions(1454);
	v->a[254] = 1;
	v->a[255] = anon_sym_DOLLAR;
	v->a[256] = actions(1456);
	v->a[257] = 1;
	v->a[258] = sym__special_character;
	v->a[259] = actions(1458);
	small_parse_table_13(v);
}

void	small_parse_table_13(t_small_parse_table_array *v)
{
	v->a[260] = 1;
	v->a[261] = anon_sym_DQUOTE;
	v->a[262] = actions(1460);
	v->a[263] = 1;
	v->a[264] = aux_sym_number_token1;
	v->a[265] = actions(1462);
	v->a[266] = 1;
	v->a[267] = aux_sym_number_token2;
	v->a[268] = actions(1464);
	v->a[269] = 1;
	v->a[270] = anon_sym_DOLLAR_LBRACE;
	v->a[271] = actions(1466);
	v->a[272] = 1;
	v->a[273] = anon_sym_DOLLAR_LPAREN;
	v->a[274] = actions(1468);
	v->a[275] = 1;
	v->a[276] = anon_sym_BQUOTE;
	v->a[277] = actions(1470);
	v->a[278] = 1;
	v->a[279] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_14(v);
}

void	small_parse_table_14(t_small_parse_table_array *v)
{
	v->a[280] = actions(1474);
	v->a[281] = 1;
	v->a[282] = sym_test_operator;
	v->a[283] = actions(1476);
	v->a[284] = 1;
	v->a[285] = sym__bare_dollar;
	v->a[286] = actions(1478);
	v->a[287] = 1;
	v->a[288] = sym__brace_start;
	v->a[289] = state(542);
	v->a[290] = 1;
	v->a[291] = aux_sym_command_repeat2;
	v->a[292] = state(1175);
	v->a[293] = 1;
	v->a[294] = aux_sym__literal_repeat1;
	v->a[295] = state(1328);
	v->a[296] = 1;
	v->a[297] = sym_concatenation;
	v->a[298] = state(1329);
	v->a[299] = 1;
	small_parse_table_15(v);
}

/* EOF small_parse_table_2.c */
