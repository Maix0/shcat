/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_4.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_20(t_small_parse_table_array *v)
{
	v->a[400] = 1;
	v->a[401] = sym_test_operator;
	v->a[402] = actions(1476);
	v->a[403] = 1;
	v->a[404] = sym__bare_dollar;
	v->a[405] = actions(1478);
	v->a[406] = 1;
	v->a[407] = sym__brace_start;
	v->a[408] = state(547);
	v->a[409] = 1;
	v->a[410] = aux_sym_command_repeat2;
	v->a[411] = state(1175);
	v->a[412] = 1;
	v->a[413] = aux_sym__literal_repeat1;
	v->a[414] = state(1328);
	v->a[415] = 1;
	v->a[416] = sym_concatenation;
	v->a[417] = state(1329);
	v->a[418] = 1;
	v->a[419] = sym_herestring_redirect;
	small_parse_table_21(v);
}

void	small_parse_table_21(t_small_parse_table_array *v)
{
	v->a[420] = state(5111);
	v->a[421] = 1;
	v->a[422] = sym_subshell;
	v->a[423] = actions(1442);
	v->a[424] = 2;
	v->a[425] = sym_file_descriptor;
	v->a[426] = aux_sym_heredoc_redirect_token1;
	v->a[427] = actions(1446);
	v->a[428] = 2;
	v->a[429] = anon_sym_LPAREN_LPAREN;
	v->a[430] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[431] = actions(1448);
	v->a[432] = 2;
	v->a[433] = anon_sym_EQ_EQ;
	v->a[434] = anon_sym_EQ_TILDE;
	v->a[435] = actions(1472);
	v->a[436] = 2;
	v->a[437] = anon_sym_LT_LPAREN;
	v->a[438] = anon_sym_GT_LPAREN;
	v->a[439] = actions(1444);
	small_parse_table_22(v);
}

void	small_parse_table_22(t_small_parse_table_array *v)
{
	v->a[440] = 3;
	v->a[441] = sym_raw_string;
	v->a[442] = sym_ansi_c_string;
	v->a[443] = sym_word;
	v->a[444] = state(985);
	v->a[445] = 9;
	v->a[446] = sym_arithmetic_expansion;
	v->a[447] = sym_brace_expression;
	v->a[448] = sym_string;
	v->a[449] = sym_translated_string;
	v->a[450] = sym_number;
	v->a[451] = sym_simple_expansion;
	v->a[452] = sym_expansion;
	v->a[453] = sym_command_substitution;
	v->a[454] = sym_process_substitution;
	v->a[455] = actions(1440);
	v->a[456] = 21;
	v->a[457] = anon_sym_SEMI;
	v->a[458] = anon_sym_PIPE_PIPE;
	v->a[459] = anon_sym_AMP_AMP;
	small_parse_table_23(v);
}

void	small_parse_table_23(t_small_parse_table_array *v)
{
	v->a[460] = anon_sym_PIPE;
	v->a[461] = anon_sym_AMP;
	v->a[462] = anon_sym_LT;
	v->a[463] = anon_sym_GT;
	v->a[464] = anon_sym_LT_LT;
	v->a[465] = anon_sym_GT_GT;
	v->a[466] = anon_sym_SEMI_SEMI;
	v->a[467] = anon_sym_SEMI_AMP;
	v->a[468] = anon_sym_SEMI_SEMI_AMP;
	v->a[469] = anon_sym_PIPE_AMP;
	v->a[470] = anon_sym_AMP_GT;
	v->a[471] = anon_sym_AMP_GT_GT;
	v->a[472] = anon_sym_LT_AMP;
	v->a[473] = anon_sym_GT_AMP;
	v->a[474] = anon_sym_GT_PIPE;
	v->a[475] = anon_sym_LT_AMP_DASH;
	v->a[476] = anon_sym_GT_AMP_DASH;
	v->a[477] = anon_sym_LT_LT_DASH;
	v->a[478] = 27;
	v->a[479] = actions(3);
	small_parse_table_24(v);
}

void	small_parse_table_24(t_small_parse_table_array *v)
{
	v->a[480] = 1;
	v->a[481] = sym_comment;
	v->a[482] = actions(1491);
	v->a[483] = 1;
	v->a[484] = aux_sym_heredoc_redirect_token1;
	v->a[485] = actions(1493);
	v->a[486] = 1;
	v->a[487] = anon_sym_LT_LT_LT;
	v->a[488] = actions(1496);
	v->a[489] = 1;
	v->a[490] = anon_sym_DOLLAR_LBRACK;
	v->a[491] = actions(1499);
	v->a[492] = 1;
	v->a[493] = anon_sym_DOLLAR;
	v->a[494] = actions(1502);
	v->a[495] = 1;
	v->a[496] = sym__special_character;
	v->a[497] = actions(1505);
	v->a[498] = 1;
	v->a[499] = anon_sym_DQUOTE;
	small_parse_table_25(v);
}

/* EOF small_parse_table_4.c */
