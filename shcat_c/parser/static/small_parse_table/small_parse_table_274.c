/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_274.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1370(t_small_parse_table_array *v)
{
	v->a[27400] = 1;
	v->a[27401] = aux_sym_number_token1;
	v->a[27402] = actions(4088);
	v->a[27403] = 1;
	v->a[27404] = aux_sym_number_token2;
	v->a[27405] = actions(4090);
	v->a[27406] = 1;
	v->a[27407] = anon_sym_DOLLAR_LBRACE;
	v->a[27408] = actions(4092);
	v->a[27409] = 1;
	v->a[27410] = anon_sym_DOLLAR_LPAREN;
	v->a[27411] = actions(4094);
	v->a[27412] = 1;
	v->a[27413] = anon_sym_BQUOTE;
	v->a[27414] = actions(4096);
	v->a[27415] = 1;
	v->a[27416] = anon_sym_DOLLAR_BQUOTE;
	v->a[27417] = actions(4102);
	v->a[27418] = 1;
	v->a[27419] = sym__brace_start;
	small_parse_table_1371(v);
}

void	small_parse_table_1371(t_small_parse_table_array *v)
{
	v->a[27420] = actions(4352);
	v->a[27421] = 1;
	v->a[27422] = sym__special_character;
	v->a[27423] = actions(4354);
	v->a[27424] = 1;
	v->a[27425] = sym_test_operator;
	v->a[27426] = state(4521);
	v->a[27427] = 1;
	v->a[27428] = aux_sym__literal_repeat1;
	v->a[27429] = state(5023);
	v->a[27430] = 1;
	v->a[27431] = sym_concatenation;
	v->a[27432] = actions(2496);
	v->a[27433] = 2;
	v->a[27434] = sym_file_descriptor;
	v->a[27435] = aux_sym_heredoc_redirect_token1;
	v->a[27436] = actions(4076);
	v->a[27437] = 2;
	v->a[27438] = anon_sym_LPAREN_LPAREN;
	v->a[27439] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1372(v);
}

void	small_parse_table_1372(t_small_parse_table_array *v)
{
	v->a[27440] = actions(4098);
	v->a[27441] = 2;
	v->a[27442] = anon_sym_LT_LPAREN;
	v->a[27443] = anon_sym_GT_LPAREN;
	v->a[27444] = actions(4350);
	v->a[27445] = 3;
	v->a[27446] = sym_raw_string;
	v->a[27447] = sym_ansi_c_string;
	v->a[27448] = sym_word;
	v->a[27449] = state(4921);
	v->a[27450] = 9;
	v->a[27451] = sym_arithmetic_expansion;
	v->a[27452] = sym_brace_expression;
	v->a[27453] = sym_string;
	v->a[27454] = sym_translated_string;
	v->a[27455] = sym_number;
	v->a[27456] = sym_simple_expansion;
	v->a[27457] = sym_expansion;
	v->a[27458] = sym_command_substitution;
	v->a[27459] = sym_process_substitution;
	small_parse_table_1373(v);
}

void	small_parse_table_1373(t_small_parse_table_array *v)
{
	v->a[27460] = actions(2494);
	v->a[27461] = 19;
	v->a[27462] = anon_sym_SEMI;
	v->a[27463] = anon_sym_PIPE_PIPE;
	v->a[27464] = anon_sym_AMP_AMP;
	v->a[27465] = anon_sym_PIPE;
	v->a[27466] = anon_sym_AMP;
	v->a[27467] = anon_sym_LT;
	v->a[27468] = anon_sym_GT;
	v->a[27469] = anon_sym_LT_LT;
	v->a[27470] = anon_sym_GT_GT;
	v->a[27471] = anon_sym_SEMI_SEMI;
	v->a[27472] = anon_sym_PIPE_AMP;
	v->a[27473] = anon_sym_AMP_GT;
	v->a[27474] = anon_sym_AMP_GT_GT;
	v->a[27475] = anon_sym_LT_AMP;
	v->a[27476] = anon_sym_GT_AMP;
	v->a[27477] = anon_sym_GT_PIPE;
	v->a[27478] = anon_sym_LT_AMP_DASH;
	v->a[27479] = anon_sym_GT_AMP_DASH;
	small_parse_table_1374(v);
}

void	small_parse_table_1374(t_small_parse_table_array *v)
{
	v->a[27480] = anon_sym_LT_LT_DASH;
	v->a[27481] = 21;
	v->a[27482] = actions(3);
	v->a[27483] = 1;
	v->a[27484] = sym_comment;
	v->a[27485] = actions(4078);
	v->a[27486] = 1;
	v->a[27487] = anon_sym_DOLLAR_LBRACK;
	v->a[27488] = actions(4080);
	v->a[27489] = 1;
	v->a[27490] = anon_sym_DOLLAR;
	v->a[27491] = actions(4084);
	v->a[27492] = 1;
	v->a[27493] = anon_sym_DQUOTE;
	v->a[27494] = actions(4086);
	v->a[27495] = 1;
	v->a[27496] = aux_sym_number_token1;
	v->a[27497] = actions(4088);
	v->a[27498] = 1;
	v->a[27499] = aux_sym_number_token2;
	small_parse_table_1375(v);
}

/* EOF small_parse_table_274.c */
