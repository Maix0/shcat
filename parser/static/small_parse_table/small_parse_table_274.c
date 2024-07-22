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
	v->a[27400] = sym_file_descriptor;
	v->a[27401] = state(1300);
	v->a[27402] = 1;
	v->a[27403] = aux_sym__heredoc_command;
	v->a[27404] = state(1722);
	v->a[27405] = 1;
	v->a[27406] = sym_concatenation;
	v->a[27407] = state(1978);
	v->a[27408] = 1;
	v->a[27409] = sym__heredoc_expression;
	v->a[27410] = state(1980);
	v->a[27411] = 1;
	v->a[27412] = sym__heredoc_pipeline;
	v->a[27413] = actions(1006);
	v->a[27414] = 2;
	v->a[27415] = anon_sym_AMP_AMP;
	v->a[27416] = anon_sym_PIPE_PIPE;
	v->a[27417] = state(1467);
	v->a[27418] = 2;
	v->a[27419] = sym_file_redirect;
	small_parse_table_1371(v);
}

void	small_parse_table_1371(t_small_parse_table_array *v)
{
	v->a[27420] = aux_sym_redirected_statement_repeat2;
	v->a[27421] = actions(1002);
	v->a[27422] = 3;
	v->a[27423] = sym_raw_string;
	v->a[27424] = sym_number;
	v->a[27425] = sym_word;
	v->a[27426] = state(1516);
	v->a[27427] = 5;
	v->a[27428] = sym_arithmetic_expansion;
	v->a[27429] = sym_string;
	v->a[27430] = sym_simple_expansion;
	v->a[27431] = sym_expansion;
	v->a[27432] = sym_command_substitution;
	v->a[27433] = actions(1008);
	v->a[27434] = 7;
	v->a[27435] = anon_sym_LT;
	v->a[27436] = anon_sym_GT;
	v->a[27437] = anon_sym_GT_GT;
	v->a[27438] = anon_sym_LT_AMP;
	v->a[27439] = anon_sym_GT_AMP;
	small_parse_table_1372(v);
}

void	small_parse_table_1372(t_small_parse_table_array *v)
{
	v->a[27440] = anon_sym_GT_PIPE;
	v->a[27441] = anon_sym_LT_GT;
	v->a[27442] = 11;
	v->a[27443] = actions(3);
	v->a[27444] = 1;
	v->a[27445] = sym_comment;
	v->a[27446] = actions(782);
	v->a[27447] = 1;
	v->a[27448] = anon_sym_PIPE;
	v->a[27449] = actions(792);
	v->a[27450] = 1;
	v->a[27451] = sym_file_descriptor;
	v->a[27452] = actions(1030);
	v->a[27453] = 1;
	v->a[27454] = sym_variable_name;
	v->a[27455] = state(687);
	v->a[27456] = 1;
	v->a[27457] = sym_terminator;
	v->a[27458] = actions(790);
	v->a[27459] = 2;
	small_parse_table_1373(v);
}

void	small_parse_table_1373(t_small_parse_table_array *v)
{
	v->a[27460] = anon_sym_LT_LT;
	v->a[27461] = anon_sym_LT_LT_DASH;
	v->a[27462] = actions(1028);
	v->a[27463] = 2;
	v->a[27464] = anon_sym_AMP_AMP;
	v->a[27465] = anon_sym_PIPE_PIPE;
	v->a[27466] = state(1137);
	v->a[27467] = 2;
	v->a[27468] = sym_variable_assignment;
	v->a[27469] = aux_sym__variable_assignments_repeat1;
	v->a[27470] = actions(1026);
	v->a[27471] = 3;
	v->a[27472] = anon_sym_SEMI_SEMI;
	v->a[27473] = aux_sym_heredoc_redirect_token1;
	v->a[27474] = anon_sym_SEMI;
	v->a[27475] = state(1194);
	v->a[27476] = 3;
	v->a[27477] = sym_file_redirect;
	v->a[27478] = sym_heredoc_redirect;
	v->a[27479] = aux_sym_redirected_statement_repeat1;
	small_parse_table_1374(v);
}

void	small_parse_table_1374(t_small_parse_table_array *v)
{
	v->a[27480] = actions(780);
	v->a[27481] = 16;
	v->a[27482] = anon_sym_LT;
	v->a[27483] = anon_sym_GT;
	v->a[27484] = anon_sym_GT_GT;
	v->a[27485] = anon_sym_LT_AMP;
	v->a[27486] = anon_sym_GT_AMP;
	v->a[27487] = anon_sym_GT_PIPE;
	v->a[27488] = anon_sym_LT_GT;
	v->a[27489] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27490] = anon_sym_DOLLAR;
	v->a[27491] = anon_sym_DQUOTE;
	v->a[27492] = sym_raw_string;
	v->a[27493] = sym_number;
	v->a[27494] = anon_sym_DOLLAR_LBRACE;
	v->a[27495] = anon_sym_DOLLAR_LPAREN;
	v->a[27496] = anon_sym_BQUOTE;
	v->a[27497] = sym_word;
	v->a[27498] = 12;
	v->a[27499] = actions(3);
	small_parse_table_1375(v);
}

/* EOF small_parse_table_274.c */
