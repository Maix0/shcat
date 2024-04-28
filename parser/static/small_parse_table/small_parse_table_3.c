/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15(t_small_parse_table_array *v)
{
	v->a[300] = sym_herestring_redirect;
	v->a[301] = state(5116);
	v->a[302] = 1;
	v->a[303] = sym_subshell;
	v->a[304] = actions(1408);
	v->a[305] = 2;
	v->a[306] = sym_file_descriptor;
	v->a[307] = aux_sym_heredoc_redirect_token1;
	v->a[308] = actions(1446);
	v->a[309] = 2;
	v->a[310] = anon_sym_LPAREN_LPAREN;
	v->a[311] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[312] = actions(1448);
	v->a[313] = 2;
	v->a[314] = anon_sym_EQ_EQ;
	v->a[315] = anon_sym_EQ_TILDE;
	v->a[316] = actions(1472);
	v->a[317] = 2;
	v->a[318] = anon_sym_LT_LPAREN;
	v->a[319] = anon_sym_GT_LPAREN;
	small_parse_table_16(v);
}

void	small_parse_table_16(t_small_parse_table_array *v)
{
	v->a[320] = actions(1444);
	v->a[321] = 3;
	v->a[322] = sym_raw_string;
	v->a[323] = sym_ansi_c_string;
	v->a[324] = sym_word;
	v->a[325] = state(985);
	v->a[326] = 9;
	v->a[327] = sym_arithmetic_expansion;
	v->a[328] = sym_brace_expression;
	v->a[329] = sym_string;
	v->a[330] = sym_translated_string;
	v->a[331] = sym_number;
	v->a[332] = sym_simple_expansion;
	v->a[333] = sym_expansion;
	v->a[334] = sym_command_substitution;
	v->a[335] = sym_process_substitution;
	v->a[336] = actions(1404);
	v->a[337] = 21;
	v->a[338] = anon_sym_SEMI;
	v->a[339] = anon_sym_PIPE_PIPE;
	small_parse_table_17(v);
}

void	small_parse_table_17(t_small_parse_table_array *v)
{
	v->a[340] = anon_sym_AMP_AMP;
	v->a[341] = anon_sym_PIPE;
	v->a[342] = anon_sym_AMP;
	v->a[343] = anon_sym_LT;
	v->a[344] = anon_sym_GT;
	v->a[345] = anon_sym_LT_LT;
	v->a[346] = anon_sym_GT_GT;
	v->a[347] = anon_sym_SEMI_SEMI;
	v->a[348] = anon_sym_SEMI_AMP;
	v->a[349] = anon_sym_SEMI_SEMI_AMP;
	v->a[350] = anon_sym_PIPE_AMP;
	v->a[351] = anon_sym_AMP_GT;
	v->a[352] = anon_sym_AMP_GT_GT;
	v->a[353] = anon_sym_LT_AMP;
	v->a[354] = anon_sym_GT_AMP;
	v->a[355] = anon_sym_GT_PIPE;
	v->a[356] = anon_sym_LT_AMP_DASH;
	v->a[357] = anon_sym_GT_AMP_DASH;
	v->a[358] = anon_sym_LT_LT_DASH;
	v->a[359] = 28;
	small_parse_table_18(v);
}

void	small_parse_table_18(t_small_parse_table_array *v)
{
	v->a[360] = actions(3);
	v->a[361] = 1;
	v->a[362] = sym_comment;
	v->a[363] = actions(677);
	v->a[364] = 1;
	v->a[365] = anon_sym_LPAREN;
	v->a[366] = actions(1450);
	v->a[367] = 1;
	v->a[368] = anon_sym_LT_LT_LT;
	v->a[369] = actions(1452);
	v->a[370] = 1;
	v->a[371] = anon_sym_DOLLAR_LBRACK;
	v->a[372] = actions(1454);
	v->a[373] = 1;
	v->a[374] = anon_sym_DOLLAR;
	v->a[375] = actions(1456);
	v->a[376] = 1;
	v->a[377] = sym__special_character;
	v->a[378] = actions(1458);
	v->a[379] = 1;
	small_parse_table_19(v);
}

void	small_parse_table_19(t_small_parse_table_array *v)
{
	v->a[380] = anon_sym_DQUOTE;
	v->a[381] = actions(1460);
	v->a[382] = 1;
	v->a[383] = aux_sym_number_token1;
	v->a[384] = actions(1462);
	v->a[385] = 1;
	v->a[386] = aux_sym_number_token2;
	v->a[387] = actions(1464);
	v->a[388] = 1;
	v->a[389] = anon_sym_DOLLAR_LBRACE;
	v->a[390] = actions(1466);
	v->a[391] = 1;
	v->a[392] = anon_sym_DOLLAR_LPAREN;
	v->a[393] = actions(1468);
	v->a[394] = 1;
	v->a[395] = anon_sym_BQUOTE;
	v->a[396] = actions(1470);
	v->a[397] = 1;
	v->a[398] = anon_sym_DOLLAR_BQUOTE;
	v->a[399] = actions(1474);
	small_parse_table_20(v);
}

/* EOF small_parse_table_3.c */
