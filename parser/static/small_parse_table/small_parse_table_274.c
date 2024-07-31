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
	v->a[27400] = anon_sym_AMP_AMP;
	v->a[27401] = anon_sym_PIPE_PIPE;
	v->a[27402] = anon_sym_LT;
	v->a[27403] = anon_sym_GT;
	v->a[27404] = anon_sym_GT_GT;
	v->a[27405] = anon_sym_LT_AMP;
	v->a[27406] = anon_sym_GT_AMP;
	v->a[27407] = anon_sym_GT_PIPE;
	v->a[27408] = anon_sym_LT_GT;
	v->a[27409] = anon_sym_LT_LT;
	v->a[27410] = anon_sym_LT_LT_DASH;
	v->a[27411] = aux_sym_heredoc_redirect_token1;
	v->a[27412] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27413] = anon_sym_DOLLAR;
	v->a[27414] = anon_sym_DQUOTE;
	v->a[27415] = sym_raw_string;
	v->a[27416] = sym_number;
	v->a[27417] = anon_sym_DOLLAR_LBRACE;
	v->a[27418] = anon_sym_DOLLAR_LPAREN;
	v->a[27419] = anon_sym_BQUOTE;
	small_parse_table_1371(v);
}

void	small_parse_table_1371(t_small_parse_table_array *v)
{
	v->a[27420] = sym_word;
	v->a[27421] = anon_sym_SEMI;
	v->a[27422] = 3;
	v->a[27423] = actions(3);
	v->a[27424] = 1;
	v->a[27425] = sym_comment;
	v->a[27426] = actions(1111);
	v->a[27427] = 1;
	v->a[27428] = sym_variable_name;
	v->a[27429] = actions(1109);
	v->a[27430] = 28;
	v->a[27431] = anon_sym_for;
	v->a[27432] = anon_sym_while;
	v->a[27433] = anon_sym_until;
	v->a[27434] = anon_sym_done;
	v->a[27435] = anon_sym_if;
	v->a[27436] = anon_sym_then;
	v->a[27437] = anon_sym_case;
	v->a[27438] = anon_sym_LPAREN;
	v->a[27439] = anon_sym_RPAREN;
	small_parse_table_1372(v);
}

void	small_parse_table_1372(t_small_parse_table_array *v)
{
	v->a[27440] = anon_sym_SEMI_SEMI;
	v->a[27441] = anon_sym_LBRACE;
	v->a[27442] = anon_sym_BANG;
	v->a[27443] = anon_sym_LT;
	v->a[27444] = anon_sym_GT;
	v->a[27445] = anon_sym_GT_GT;
	v->a[27446] = anon_sym_LT_AMP;
	v->a[27447] = anon_sym_GT_AMP;
	v->a[27448] = anon_sym_GT_PIPE;
	v->a[27449] = anon_sym_LT_GT;
	v->a[27450] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27451] = anon_sym_DOLLAR;
	v->a[27452] = anon_sym_DQUOTE;
	v->a[27453] = sym_raw_string;
	v->a[27454] = sym_number;
	v->a[27455] = anon_sym_DOLLAR_LBRACE;
	v->a[27456] = anon_sym_DOLLAR_LPAREN;
	v->a[27457] = anon_sym_BQUOTE;
	v->a[27458] = sym_word;
	v->a[27459] = 12;
	small_parse_table_1373(v);
}

void	small_parse_table_1373(t_small_parse_table_array *v)
{
	v->a[27460] = actions(3);
	v->a[27461] = 1;
	v->a[27462] = sym_comment;
	v->a[27463] = actions(613);
	v->a[27464] = 1;
	v->a[27465] = sym_variable_name;
	v->a[27466] = actions(1116);
	v->a[27467] = 1;
	v->a[27468] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27469] = actions(1119);
	v->a[27470] = 1;
	v->a[27471] = anon_sym_DOLLAR;
	v->a[27472] = actions(1122);
	v->a[27473] = 1;
	v->a[27474] = anon_sym_DQUOTE;
	v->a[27475] = actions(1125);
	v->a[27476] = 1;
	v->a[27477] = anon_sym_DOLLAR_LBRACE;
	v->a[27478] = actions(1128);
	v->a[27479] = 1;
	small_parse_table_1374(v);
}

void	small_parse_table_1374(t_small_parse_table_array *v)
{
	v->a[27480] = anon_sym_DOLLAR_LPAREN;
	v->a[27481] = actions(1131);
	v->a[27482] = 1;
	v->a[27483] = anon_sym_BQUOTE;
	v->a[27484] = state(354);
	v->a[27485] = 2;
	v->a[27486] = sym_concatenation;
	v->a[27487] = aux_sym_for_statement_repeat1;
	v->a[27488] = actions(1113);
	v->a[27489] = 3;
	v->a[27490] = sym_raw_string;
	v->a[27491] = sym_number;
	v->a[27492] = sym_word;
	v->a[27493] = state(633);
	v->a[27494] = 5;
	v->a[27495] = sym_arithmetic_expansion;
	v->a[27496] = sym_string;
	v->a[27497] = sym_simple_expansion;
	v->a[27498] = sym_expansion;
	v->a[27499] = sym_command_substitution;
	small_parse_table_1375(v);
}

/* EOF small_parse_table_274.c */
