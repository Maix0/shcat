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
	v->a[27400] = anon_sym_DOLLAR_LBRACE;
	v->a[27401] = anon_sym_DOLLAR_LPAREN;
	v->a[27402] = anon_sym_BQUOTE;
	v->a[27403] = sym_word;
	v->a[27404] = 11;
	v->a[27405] = actions(3);
	v->a[27406] = 1;
	v->a[27407] = sym_comment;
	v->a[27408] = actions(1002);
	v->a[27409] = 1;
	v->a[27410] = anon_sym_PIPE;
	v->a[27411] = actions(1006);
	v->a[27412] = 1;
	v->a[27413] = sym_file_descriptor;
	v->a[27414] = actions(1064);
	v->a[27415] = 1;
	v->a[27416] = sym_variable_name;
	v->a[27417] = actions(1067);
	v->a[27418] = 1;
	v->a[27419] = ts_builtin_sym_end;
	small_parse_table_1371(v);
}

void	small_parse_table_1371(t_small_parse_table_array *v)
{
	v->a[27420] = actions(1060);
	v->a[27421] = 2;
	v->a[27422] = anon_sym_AMP_AMP;
	v->a[27423] = anon_sym_PIPE_PIPE;
	v->a[27424] = actions(1062);
	v->a[27425] = 2;
	v->a[27426] = anon_sym_LT_LT;
	v->a[27427] = anon_sym_LT_LT_DASH;
	v->a[27428] = state(1044);
	v->a[27429] = 2;
	v->a[27430] = sym_variable_assignment;
	v->a[27431] = aux_sym_variable_assignments_repeat1;
	v->a[27432] = state(1043);
	v->a[27433] = 3;
	v->a[27434] = sym_file_redirect;
	v->a[27435] = sym_heredoc_redirect;
	v->a[27436] = aux_sym_redirected_statement_repeat1;
	v->a[27437] = actions(1069);
	v->a[27438] = 4;
	v->a[27439] = anon_sym_SEMI_SEMI;
	small_parse_table_1372(v);
}

void	small_parse_table_1372(t_small_parse_table_array *v)
{
	v->a[27440] = aux_sym_heredoc_redirect_token1;
	v->a[27441] = anon_sym_AMP;
	v->a[27442] = anon_sym_SEMI;
	v->a[27443] = actions(1000);
	v->a[27444] = 20;
	v->a[27445] = anon_sym_LT;
	v->a[27446] = anon_sym_GT;
	v->a[27447] = anon_sym_GT_GT;
	v->a[27448] = anon_sym_AMP_GT;
	v->a[27449] = anon_sym_AMP_GT_GT;
	v->a[27450] = anon_sym_LT_AMP;
	v->a[27451] = anon_sym_GT_AMP;
	v->a[27452] = anon_sym_GT_PIPE;
	v->a[27453] = anon_sym_LT_AMP_DASH;
	v->a[27454] = anon_sym_GT_AMP_DASH;
	v->a[27455] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27456] = anon_sym_DOLLAR;
	v->a[27457] = anon_sym_DQUOTE;
	v->a[27458] = sym_raw_string;
	v->a[27459] = aux_sym_number_token1;
	small_parse_table_1373(v);
}

void	small_parse_table_1373(t_small_parse_table_array *v)
{
	v->a[27460] = aux_sym_number_token2;
	v->a[27461] = anon_sym_DOLLAR_LBRACE;
	v->a[27462] = anon_sym_DOLLAR_LPAREN;
	v->a[27463] = anon_sym_BQUOTE;
	v->a[27464] = sym_word;
	v->a[27465] = 9;
	v->a[27466] = actions(3);
	v->a[27467] = 1;
	v->a[27468] = sym_comment;
	v->a[27469] = actions(1002);
	v->a[27470] = 1;
	v->a[27471] = anon_sym_PIPE;
	v->a[27472] = actions(1006);
	v->a[27473] = 1;
	v->a[27474] = sym_file_descriptor;
	v->a[27475] = actions(1064);
	v->a[27476] = 1;
	v->a[27477] = sym_variable_name;
	v->a[27478] = actions(1071);
	v->a[27479] = 1;
	small_parse_table_1374(v);
}

void	small_parse_table_1374(t_small_parse_table_array *v)
{
	v->a[27480] = ts_builtin_sym_end;
	v->a[27481] = state(1044);
	v->a[27482] = 2;
	v->a[27483] = sym_variable_assignment;
	v->a[27484] = aux_sym_variable_assignments_repeat1;
	v->a[27485] = state(1043);
	v->a[27486] = 3;
	v->a[27487] = sym_file_redirect;
	v->a[27488] = sym_heredoc_redirect;
	v->a[27489] = aux_sym_redirected_statement_repeat1;
	v->a[27490] = actions(1004);
	v->a[27491] = 8;
	v->a[27492] = anon_sym_SEMI_SEMI;
	v->a[27493] = anon_sym_AMP_AMP;
	v->a[27494] = anon_sym_PIPE_PIPE;
	v->a[27495] = anon_sym_LT_LT;
	v->a[27496] = anon_sym_LT_LT_DASH;
	v->a[27497] = aux_sym_heredoc_redirect_token1;
	v->a[27498] = anon_sym_AMP;
	v->a[27499] = anon_sym_SEMI;
	small_parse_table_1375(v);
}

/* EOF small_parse_table_274.c */
