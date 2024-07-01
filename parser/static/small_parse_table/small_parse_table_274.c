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
	v->a[27400] = anon_sym_DOLLAR;
	v->a[27401] = anon_sym_DQUOTE;
	v->a[27402] = sym_raw_string;
	v->a[27403] = sym_number;
	v->a[27404] = anon_sym_DOLLAR_LBRACE;
	v->a[27405] = anon_sym_DOLLAR_LPAREN;
	v->a[27406] = anon_sym_BQUOTE;
	v->a[27407] = sym_word;
	v->a[27408] = 9;
	v->a[27409] = actions(870);
	v->a[27410] = 1;
	v->a[27411] = sym_comment;
	v->a[27412] = actions(850);
	v->a[27413] = 2;
	v->a[27414] = anon_sym_LT;
	v->a[27415] = anon_sym_GT;
	v->a[27416] = actions(852);
	v->a[27417] = 2;
	v->a[27418] = anon_sym_GT_GT;
	v->a[27419] = anon_sym_LT_LT;
	small_parse_table_1371(v);
}

void	small_parse_table_1371(t_small_parse_table_array *v)
{
	v->a[27420] = actions(862);
	v->a[27421] = 2;
	v->a[27422] = anon_sym_LT_EQ;
	v->a[27423] = anon_sym_GT_EQ;
	v->a[27424] = actions(864);
	v->a[27425] = 2;
	v->a[27426] = anon_sym_PLUS;
	v->a[27427] = anon_sym_DASH;
	v->a[27428] = actions(868);
	v->a[27429] = 2;
	v->a[27430] = anon_sym_PLUS_PLUS2;
	v->a[27431] = anon_sym_DASH_DASH2;
	v->a[27432] = actions(866);
	v->a[27433] = 3;
	v->a[27434] = anon_sym_STAR;
	v->a[27435] = anon_sym_SLASH;
	v->a[27436] = anon_sym_PERCENT;
	v->a[27437] = actions(872);
	v->a[27438] = 4;
	v->a[27439] = anon_sym_PIPE;
	small_parse_table_1372(v);
}

void	small_parse_table_1372(t_small_parse_table_array *v)
{
	v->a[27440] = anon_sym_EQ;
	v->a[27441] = anon_sym_CARET;
	v->a[27442] = anon_sym_AMP;
	v->a[27443] = actions(874);
	v->a[27444] = 17;
	v->a[27445] = anon_sym_AMP_AMP;
	v->a[27446] = anon_sym_PIPE_PIPE;
	v->a[27447] = anon_sym_RPAREN_RPAREN;
	v->a[27448] = anon_sym_PLUS_EQ;
	v->a[27449] = anon_sym_DASH_EQ;
	v->a[27450] = anon_sym_STAR_EQ;
	v->a[27451] = anon_sym_SLASH_EQ;
	v->a[27452] = anon_sym_PERCENT_EQ;
	v->a[27453] = anon_sym_LT_LT_EQ;
	v->a[27454] = anon_sym_GT_GT_EQ;
	v->a[27455] = anon_sym_AMP_EQ;
	v->a[27456] = anon_sym_CARET_EQ;
	v->a[27457] = anon_sym_PIPE_EQ;
	v->a[27458] = anon_sym_EQ_EQ;
	v->a[27459] = anon_sym_BANG_EQ;
	small_parse_table_1373(v);
}

void	small_parse_table_1373(t_small_parse_table_array *v)
{
	v->a[27460] = anon_sym_QMARK;
	v->a[27461] = anon_sym_COLON;
	v->a[27462] = 20;
	v->a[27463] = actions(3);
	v->a[27464] = 1;
	v->a[27465] = sym_comment;
	v->a[27466] = actions(894);
	v->a[27467] = 1;
	v->a[27468] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27469] = actions(896);
	v->a[27470] = 1;
	v->a[27471] = anon_sym_DOLLAR;
	v->a[27472] = actions(898);
	v->a[27473] = 1;
	v->a[27474] = anon_sym_DQUOTE;
	v->a[27475] = actions(900);
	v->a[27476] = 1;
	v->a[27477] = anon_sym_DOLLAR_LBRACE;
	v->a[27478] = actions(902);
	v->a[27479] = 1;
	small_parse_table_1374(v);
}

void	small_parse_table_1374(t_small_parse_table_array *v)
{
	v->a[27480] = anon_sym_DOLLAR_LPAREN;
	v->a[27481] = actions(904);
	v->a[27482] = 1;
	v->a[27483] = anon_sym_BQUOTE;
	v->a[27484] = actions(906);
	v->a[27485] = 1;
	v->a[27486] = sym_file_descriptor;
	v->a[27487] = actions(1043);
	v->a[27488] = 1;
	v->a[27489] = aux_sym_heredoc_redirect_token1;
	v->a[27490] = state(1433);
	v->a[27491] = 1;
	v->a[27492] = aux_sym__heredoc_command;
	v->a[27493] = state(1937);
	v->a[27494] = 1;
	v->a[27495] = sym_concatenation;
	v->a[27496] = state(2186);
	v->a[27497] = 1;
	v->a[27498] = sym__heredoc_expression;
	v->a[27499] = state(2190);
	small_parse_table_1375(v);
}

/* EOF small_parse_table_274.c */
