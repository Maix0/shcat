/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_904.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4520(t_small_parse_table_array *v)
{
	v->a[90400] = 3;
	v->a[90401] = sym_raw_string;
	v->a[90402] = sym_number;
	v->a[90403] = sym_word;
	v->a[90404] = state(499);
	v->a[90405] = 5;
	v->a[90406] = sym_arithmetic_expansion;
	v->a[90407] = sym_string;
	v->a[90408] = sym_simple_expansion;
	v->a[90409] = sym_expansion;
	v->a[90410] = sym_command_substitution;
	v->a[90411] = 10;
	v->a[90412] = actions(3);
	v->a[90413] = 1;
	v->a[90414] = sym_comment;
	v->a[90415] = actions(749);
	v->a[90416] = 1;
	v->a[90417] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90418] = actions(751);
	v->a[90419] = 1;
	small_parse_table_4521(v);
}

void	small_parse_table_4521(t_small_parse_table_array *v)
{
	v->a[90420] = anon_sym_DOLLAR;
	v->a[90421] = actions(753);
	v->a[90422] = 1;
	v->a[90423] = anon_sym_DQUOTE;
	v->a[90424] = actions(755);
	v->a[90425] = 1;
	v->a[90426] = anon_sym_DOLLAR_LBRACE;
	v->a[90427] = actions(757);
	v->a[90428] = 1;
	v->a[90429] = anon_sym_DOLLAR_LPAREN;
	v->a[90430] = actions(759);
	v->a[90431] = 1;
	v->a[90432] = anon_sym_BQUOTE;
	v->a[90433] = state(262);
	v->a[90434] = 2;
	v->a[90435] = sym_concatenation;
	v->a[90436] = aux_sym_for_statement_repeat1;
	v->a[90437] = actions(928);
	v->a[90438] = 3;
	v->a[90439] = sym_raw_string;
	small_parse_table_4522(v);
}

void	small_parse_table_4522(t_small_parse_table_array *v)
{
	v->a[90440] = sym_number;
	v->a[90441] = sym_word;
	v->a[90442] = state(646);
	v->a[90443] = 5;
	v->a[90444] = sym_arithmetic_expansion;
	v->a[90445] = sym_string;
	v->a[90446] = sym_simple_expansion;
	v->a[90447] = sym_expansion;
	v->a[90448] = sym_command_substitution;
	v->a[90449] = 3;
	v->a[90450] = actions(3);
	v->a[90451] = 1;
	v->a[90452] = sym_comment;
	v->a[90453] = actions(1076);
	v->a[90454] = 3;
	v->a[90455] = sym_file_descriptor;
	v->a[90456] = sym__concat;
	v->a[90457] = aux_sym_heredoc_redirect_token1;
	v->a[90458] = actions(1074);
	v->a[90459] = 13;
	small_parse_table_4523(v);
}

void	small_parse_table_4523(t_small_parse_table_array *v)
{
	v->a[90460] = anon_sym_AMP_AMP;
	v->a[90461] = anon_sym_PIPE_PIPE;
	v->a[90462] = anon_sym_LT;
	v->a[90463] = anon_sym_GT;
	v->a[90464] = anon_sym_GT_GT;
	v->a[90465] = anon_sym_AMP_GT;
	v->a[90466] = anon_sym_AMP_GT_GT;
	v->a[90467] = anon_sym_LT_AMP;
	v->a[90468] = anon_sym_GT_AMP;
	v->a[90469] = anon_sym_GT_PIPE;
	v->a[90470] = anon_sym_LT_AMP_DASH;
	v->a[90471] = anon_sym_GT_AMP_DASH;
	v->a[90472] = aux_sym_concatenation_token1;
	v->a[90473] = 3;
	v->a[90474] = actions(1094);
	v->a[90475] = 1;
	v->a[90476] = sym_comment;
	v->a[90477] = actions(2606);
	v->a[90478] = 7;
	v->a[90479] = anon_sym_PIPE;
	small_parse_table_4524(v);
}

void	small_parse_table_4524(t_small_parse_table_array *v)
{
	v->a[90480] = anon_sym_LT;
	v->a[90481] = anon_sym_GT;
	v->a[90482] = anon_sym_AMP_GT;
	v->a[90483] = anon_sym_LT_AMP;
	v->a[90484] = anon_sym_GT_AMP;
	v->a[90485] = anon_sym_LT_LT;
	v->a[90486] = actions(2604);
	v->a[90487] = 9;
	v->a[90488] = sym_file_descriptor;
	v->a[90489] = anon_sym_AMP_AMP;
	v->a[90490] = anon_sym_PIPE_PIPE;
	v->a[90491] = anon_sym_GT_GT;
	v->a[90492] = anon_sym_AMP_GT_GT;
	v->a[90493] = anon_sym_GT_PIPE;
	v->a[90494] = anon_sym_LT_AMP_DASH;
	v->a[90495] = anon_sym_GT_AMP_DASH;
	v->a[90496] = anon_sym_LT_LT_DASH;
	v->a[90497] = 3;
	v->a[90498] = actions(1094);
	v->a[90499] = 1;
	small_parse_table_4525(v);
}

/* EOF small_parse_table_904.c */
