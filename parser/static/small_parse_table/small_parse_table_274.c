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
	v->a[27400] = anon_sym_AMP;
	v->a[27401] = anon_sym_SEMI;
	v->a[27402] = actions(805);
	v->a[27403] = 19;
	v->a[27404] = anon_sym_LT;
	v->a[27405] = anon_sym_GT;
	v->a[27406] = anon_sym_GT_GT;
	v->a[27407] = anon_sym_AMP_GT;
	v->a[27408] = anon_sym_AMP_GT_GT;
	v->a[27409] = anon_sym_LT_AMP;
	v->a[27410] = anon_sym_GT_AMP;
	v->a[27411] = anon_sym_GT_PIPE;
	v->a[27412] = anon_sym_LT_AMP_DASH;
	v->a[27413] = anon_sym_GT_AMP_DASH;
	v->a[27414] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27415] = anon_sym_DOLLAR;
	v->a[27416] = anon_sym_DQUOTE;
	v->a[27417] = sym_raw_string;
	v->a[27418] = sym_number;
	v->a[27419] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1371(v);
}

void	small_parse_table_1371(t_small_parse_table_array *v)
{
	v->a[27420] = anon_sym_DOLLAR_LPAREN;
	v->a[27421] = anon_sym_BQUOTE;
	v->a[27422] = sym_word;
	v->a[27423] = 7;
	v->a[27424] = actions(3);
	v->a[27425] = 1;
	v->a[27426] = sym_comment;
	v->a[27427] = actions(900);
	v->a[27428] = 1;
	v->a[27429] = sym_file_descriptor;
	v->a[27430] = actions(1034);
	v->a[27431] = 1;
	v->a[27432] = sym_variable_name;
	v->a[27433] = state(1199);
	v->a[27434] = 2;
	v->a[27435] = sym_variable_assignment;
	v->a[27436] = aux_sym_variable_assignments_repeat1;
	v->a[27437] = state(1297);
	v->a[27438] = 3;
	v->a[27439] = sym_file_redirect;
	small_parse_table_1372(v);
}

void	small_parse_table_1372(t_small_parse_table_array *v)
{
	v->a[27440] = sym_heredoc_redirect;
	v->a[27441] = aux_sym_redirected_statement_repeat1;
	v->a[27442] = actions(805);
	v->a[27443] = 8;
	v->a[27444] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27445] = anon_sym_DOLLAR;
	v->a[27446] = anon_sym_DQUOTE;
	v->a[27447] = sym_raw_string;
	v->a[27448] = sym_number;
	v->a[27449] = anon_sym_DOLLAR_LBRACE;
	v->a[27450] = anon_sym_DOLLAR_LPAREN;
	v->a[27451] = sym_word;
	v->a[27452] = actions(807);
	v->a[27453] = 20;
	v->a[27454] = anon_sym_PIPE;
	v->a[27455] = anon_sym_SEMI_SEMI;
	v->a[27456] = anon_sym_AMP_AMP;
	v->a[27457] = anon_sym_PIPE_PIPE;
	v->a[27458] = anon_sym_LT;
	v->a[27459] = anon_sym_GT;
	small_parse_table_1373(v);
}

void	small_parse_table_1373(t_small_parse_table_array *v)
{
	v->a[27460] = anon_sym_GT_GT;
	v->a[27461] = anon_sym_AMP_GT;
	v->a[27462] = anon_sym_AMP_GT_GT;
	v->a[27463] = anon_sym_LT_AMP;
	v->a[27464] = anon_sym_GT_AMP;
	v->a[27465] = anon_sym_GT_PIPE;
	v->a[27466] = anon_sym_LT_AMP_DASH;
	v->a[27467] = anon_sym_GT_AMP_DASH;
	v->a[27468] = anon_sym_LT_LT;
	v->a[27469] = anon_sym_LT_LT_DASH;
	v->a[27470] = aux_sym_heredoc_redirect_token1;
	v->a[27471] = anon_sym_AMP;
	v->a[27472] = anon_sym_BQUOTE;
	v->a[27473] = anon_sym_SEMI;
	v->a[27474] = 6;
	v->a[27475] = actions(3);
	v->a[27476] = 1;
	v->a[27477] = sym_comment;
	v->a[27478] = actions(976);
	v->a[27479] = 1;
	small_parse_table_1374(v);
}

void	small_parse_table_1374(t_small_parse_table_array *v)
{
	v->a[27480] = aux_sym_concatenation_token1;
	v->a[27481] = actions(1028);
	v->a[27482] = 1;
	v->a[27483] = sym__concat;
	v->a[27484] = state(277);
	v->a[27485] = 1;
	v->a[27486] = aux_sym_concatenation_repeat1;
	v->a[27487] = actions(991);
	v->a[27488] = 3;
	v->a[27489] = sym_file_descriptor;
	v->a[27490] = sym__bare_dollar;
	v->a[27491] = ts_builtin_sym_end;
	v->a[27492] = actions(984);
	v->a[27493] = 29;
	v->a[27494] = anon_sym_LPAREN;
	v->a[27495] = anon_sym_PIPE;
	v->a[27496] = anon_sym_SEMI_SEMI;
	v->a[27497] = anon_sym_AMP_AMP;
	v->a[27498] = anon_sym_PIPE_PIPE;
	v->a[27499] = anon_sym_LT;
	small_parse_table_1375(v);
}

/* EOF small_parse_table_274.c */
