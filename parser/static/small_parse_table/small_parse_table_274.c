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
	v->a[27400] = aux_sym_number_token2;
	v->a[27401] = anon_sym_DOLLAR_LBRACE;
	v->a[27402] = anon_sym_DOLLAR_LPAREN;
	v->a[27403] = anon_sym_BQUOTE;
	v->a[27404] = anon_sym_DOLLAR_BQUOTE;
	v->a[27405] = aux_sym__simple_variable_name_token1;
	v->a[27406] = sym_word;
	v->a[27407] = anon_sym_SEMI;
	v->a[27408] = 3;
	v->a[27409] = actions(3);
	v->a[27410] = 1;
	v->a[27411] = sym_comment;
	v->a[27412] = actions(2654);
	v->a[27413] = 6;
	v->a[27414] = sym_file_descriptor;
	v->a[27415] = sym__concat;
	v->a[27416] = sym_variable_name;
	v->a[27417] = sym_test_operator;
	v->a[27418] = sym__brace_start;
	v->a[27419] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1371(v);
}

void	small_parse_table_1371(t_small_parse_table_array *v)
{
	v->a[27420] = actions(2652);
	v->a[27421] = 35;
	v->a[27422] = anon_sym_esac;
	v->a[27423] = anon_sym_PIPE;
	v->a[27424] = anon_sym_SEMI_SEMI;
	v->a[27425] = anon_sym_SEMI_AMP;
	v->a[27426] = anon_sym_SEMI_SEMI_AMP;
	v->a[27427] = anon_sym_PIPE_AMP;
	v->a[27428] = anon_sym_AMP_AMP;
	v->a[27429] = anon_sym_PIPE_PIPE;
	v->a[27430] = anon_sym_LT;
	v->a[27431] = anon_sym_GT;
	v->a[27432] = anon_sym_GT_GT;
	v->a[27433] = anon_sym_AMP_GT;
	v->a[27434] = anon_sym_AMP_GT_GT;
	v->a[27435] = anon_sym_LT_AMP;
	v->a[27436] = anon_sym_GT_AMP;
	v->a[27437] = anon_sym_GT_PIPE;
	v->a[27438] = anon_sym_LT_AMP_DASH;
	v->a[27439] = anon_sym_GT_AMP_DASH;
	small_parse_table_1372(v);
}

void	small_parse_table_1372(t_small_parse_table_array *v)
{
	v->a[27440] = anon_sym_LT_LT;
	v->a[27441] = anon_sym_LT_LT_DASH;
	v->a[27442] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27443] = anon_sym_AMP;
	v->a[27444] = aux_sym_concatenation_token1;
	v->a[27445] = anon_sym_DOLLAR;
	v->a[27446] = sym__special_character;
	v->a[27447] = anon_sym_DQUOTE;
	v->a[27448] = sym_raw_string;
	v->a[27449] = aux_sym_number_token1;
	v->a[27450] = aux_sym_number_token2;
	v->a[27451] = anon_sym_DOLLAR_LBRACE;
	v->a[27452] = anon_sym_DOLLAR_LPAREN;
	v->a[27453] = anon_sym_BQUOTE;
	v->a[27454] = anon_sym_DOLLAR_BQUOTE;
	v->a[27455] = sym_word;
	v->a[27456] = anon_sym_SEMI;
	v->a[27457] = 3;
	v->a[27458] = actions(3);
	v->a[27459] = 1;
	small_parse_table_1373(v);
}

void	small_parse_table_1373(t_small_parse_table_array *v)
{
	v->a[27460] = sym_comment;
	v->a[27461] = actions(2888);
	v->a[27462] = 6;
	v->a[27463] = sym_file_descriptor;
	v->a[27464] = sym__concat;
	v->a[27465] = sym_variable_name;
	v->a[27466] = sym_test_operator;
	v->a[27467] = sym__brace_start;
	v->a[27468] = aux_sym_heredoc_redirect_token1;
	v->a[27469] = actions(2886);
	v->a[27470] = 35;
	v->a[27471] = anon_sym_PIPE;
	v->a[27472] = anon_sym_SEMI_SEMI;
	v->a[27473] = anon_sym_SEMI_AMP;
	v->a[27474] = anon_sym_SEMI_SEMI_AMP;
	v->a[27475] = anon_sym_PIPE_AMP;
	v->a[27476] = anon_sym_AMP_AMP;
	v->a[27477] = anon_sym_PIPE_PIPE;
	v->a[27478] = anon_sym_LT;
	v->a[27479] = anon_sym_GT;
	small_parse_table_1374(v);
}

void	small_parse_table_1374(t_small_parse_table_array *v)
{
	v->a[27480] = anon_sym_GT_GT;
	v->a[27481] = anon_sym_AMP_GT;
	v->a[27482] = anon_sym_AMP_GT_GT;
	v->a[27483] = anon_sym_LT_AMP;
	v->a[27484] = anon_sym_GT_AMP;
	v->a[27485] = anon_sym_GT_PIPE;
	v->a[27486] = anon_sym_LT_AMP_DASH;
	v->a[27487] = anon_sym_GT_AMP_DASH;
	v->a[27488] = anon_sym_LT_LT;
	v->a[27489] = anon_sym_LT_LT_DASH;
	v->a[27490] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27491] = anon_sym_AMP;
	v->a[27492] = aux_sym_concatenation_token1;
	v->a[27493] = anon_sym_DOLLAR;
	v->a[27494] = sym__special_character;
	v->a[27495] = anon_sym_DQUOTE;
	v->a[27496] = sym_raw_string;
	v->a[27497] = aux_sym_number_token1;
	v->a[27498] = aux_sym_number_token2;
	v->a[27499] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1375(v);
}

/* EOF small_parse_table_274.c */
