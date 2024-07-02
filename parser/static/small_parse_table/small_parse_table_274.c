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
	v->a[27400] = anon_sym_BANG_EQ;
	v->a[27401] = anon_sym_LT_EQ;
	v->a[27402] = anon_sym_GT_EQ;
	v->a[27403] = anon_sym_QMARK;
	v->a[27404] = 16;
	v->a[27405] = actions(3);
	v->a[27406] = 1;
	v->a[27407] = sym_comment;
	v->a[27408] = actions(17);
	v->a[27409] = 1;
	v->a[27410] = anon_sym_LPAREN;
	v->a[27411] = actions(459);
	v->a[27412] = 1;
	v->a[27413] = sym_file_descriptor;
	v->a[27414] = actions(463);
	v->a[27415] = 1;
	v->a[27416] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27417] = actions(465);
	v->a[27418] = 1;
	v->a[27419] = anon_sym_DOLLAR;
	small_parse_table_1371(v);
}

void	small_parse_table_1371(t_small_parse_table_array *v)
{
	v->a[27420] = actions(467);
	v->a[27421] = 1;
	v->a[27422] = anon_sym_DQUOTE;
	v->a[27423] = actions(469);
	v->a[27424] = 1;
	v->a[27425] = anon_sym_DOLLAR_LBRACE;
	v->a[27426] = actions(471);
	v->a[27427] = 1;
	v->a[27428] = anon_sym_DOLLAR_LPAREN;
	v->a[27429] = actions(473);
	v->a[27430] = 1;
	v->a[27431] = anon_sym_BQUOTE;
	v->a[27432] = actions(475);
	v->a[27433] = 1;
	v->a[27434] = sym__bare_dollar;
	v->a[27435] = state(410);
	v->a[27436] = 1;
	v->a[27437] = aux_sym_command_repeat2;
	v->a[27438] = state(662);
	v->a[27439] = 1;
	small_parse_table_1372(v);
}

void	small_parse_table_1372(t_small_parse_table_array *v)
{
	v->a[27440] = sym_concatenation;
	v->a[27441] = state(1135);
	v->a[27442] = 1;
	v->a[27443] = sym_subshell;
	v->a[27444] = actions(963);
	v->a[27445] = 3;
	v->a[27446] = sym_raw_string;
	v->a[27447] = sym_number;
	v->a[27448] = sym_word;
	v->a[27449] = state(713);
	v->a[27450] = 5;
	v->a[27451] = sym_arithmetic_expansion;
	v->a[27452] = sym_string;
	v->a[27453] = sym_simple_expansion;
	v->a[27454] = sym_expansion;
	v->a[27455] = sym_command_substitution;
	v->a[27456] = actions(457);
	v->a[27457] = 13;
	v->a[27458] = anon_sym_PIPE;
	v->a[27459] = anon_sym_AMP_AMP;
	small_parse_table_1373(v);
}

void	small_parse_table_1373(t_small_parse_table_array *v)
{
	v->a[27460] = anon_sym_PIPE_PIPE;
	v->a[27461] = anon_sym_LT;
	v->a[27462] = anon_sym_GT;
	v->a[27463] = anon_sym_GT_GT;
	v->a[27464] = anon_sym_LT_AMP;
	v->a[27465] = anon_sym_GT_AMP;
	v->a[27466] = anon_sym_GT_PIPE;
	v->a[27467] = anon_sym_LT_GT;
	v->a[27468] = anon_sym_LT_LT;
	v->a[27469] = anon_sym_LT_LT_DASH;
	v->a[27470] = aux_sym_heredoc_redirect_token1;
	v->a[27471] = 16;
	v->a[27472] = actions(660);
	v->a[27473] = 1;
	v->a[27474] = anon_sym_EQ;
	v->a[27475] = actions(680);
	v->a[27476] = 1;
	v->a[27477] = sym_comment;
	v->a[27478] = actions(971);
	v->a[27479] = 1;
	small_parse_table_1374(v);
}

void	small_parse_table_1374(t_small_parse_table_array *v)
{
	v->a[27480] = anon_sym_PIPE;
	v->a[27481] = actions(973);
	v->a[27482] = 1;
	v->a[27483] = anon_sym_AMP_AMP;
	v->a[27484] = actions(975);
	v->a[27485] = 1;
	v->a[27486] = anon_sym_PIPE_PIPE;
	v->a[27487] = actions(979);
	v->a[27488] = 1;
	v->a[27489] = anon_sym_CARET;
	v->a[27490] = actions(981);
	v->a[27491] = 1;
	v->a[27492] = anon_sym_AMP;
	v->a[27493] = actions(1011);
	v->a[27494] = 1;
	v->a[27495] = anon_sym_QMARK;
	v->a[27496] = actions(947);
	v->a[27497] = 2;
	v->a[27498] = anon_sym_GT_GT;
	v->a[27499] = anon_sym_LT_LT;
	small_parse_table_1375(v);
}

/* EOF small_parse_table_274.c */
