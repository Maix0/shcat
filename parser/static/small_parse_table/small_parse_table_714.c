/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_714.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3570(t_small_parse_table_array *v)
{
	v->a[71400] = anon_sym_DOLLAR;
	v->a[71401] = actions(2578);
	v->a[71402] = 1;
	v->a[71403] = anon_sym_DQUOTE;
	v->a[71404] = actions(2580);
	v->a[71405] = 1;
	v->a[71406] = anon_sym_DOLLAR_LBRACE;
	v->a[71407] = actions(2582);
	v->a[71408] = 1;
	v->a[71409] = anon_sym_DOLLAR_LPAREN;
	v->a[71410] = actions(2584);
	v->a[71411] = 1;
	v->a[71412] = anon_sym_BQUOTE;
	v->a[71413] = state(1803);
	v->a[71414] = 1;
	v->a[71415] = sym_concatenation;
	v->a[71416] = actions(2780);
	v->a[71417] = 3;
	v->a[71418] = sym_raw_string;
	v->a[71419] = sym_number;
	small_parse_table_3571(v);
}

void	small_parse_table_3571(t_small_parse_table_array *v)
{
	v->a[71420] = sym_word;
	v->a[71421] = state(1724);
	v->a[71422] = 5;
	v->a[71423] = sym_arithmetic_expansion;
	v->a[71424] = sym_string;
	v->a[71425] = sym_simple_expansion;
	v->a[71426] = sym_expansion;
	v->a[71427] = sym_command_substitution;
	v->a[71428] = 8;
	v->a[71429] = actions(664);
	v->a[71430] = 1;
	v->a[71431] = sym_comment;
	v->a[71432] = actions(744);
	v->a[71433] = 1;
	v->a[71434] = anon_sym_LT_LT;
	v->a[71435] = actions(1889);
	v->a[71436] = 1;
	v->a[71437] = sym_file_descriptor;
	v->a[71438] = actions(2786);
	v->a[71439] = 1;
	small_parse_table_3572(v);
}

void	small_parse_table_3572(t_small_parse_table_array *v)
{
	v->a[71440] = anon_sym_LT_LT_DASH;
	v->a[71441] = actions(1887);
	v->a[71442] = 2;
	v->a[71443] = anon_sym_LT;
	v->a[71444] = anon_sym_GT;
	v->a[71445] = actions(2782);
	v->a[71446] = 2;
	v->a[71447] = anon_sym_AMP_AMP;
	v->a[71448] = anon_sym_PIPE_PIPE;
	v->a[71449] = state(1194);
	v->a[71450] = 3;
	v->a[71451] = sym_file_redirect;
	v->a[71452] = sym_heredoc_redirect;
	v->a[71453] = aux_sym_redirected_statement_repeat1;
	v->a[71454] = actions(2784);
	v->a[71455] = 5;
	v->a[71456] = anon_sym_GT_GT;
	v->a[71457] = anon_sym_LT_AMP;
	v->a[71458] = anon_sym_GT_AMP;
	v->a[71459] = anon_sym_GT_PIPE;
	small_parse_table_3573(v);
}

void	small_parse_table_3573(t_small_parse_table_array *v)
{
	v->a[71460] = anon_sym_LT_GT;
	v->a[71461] = 8;
	v->a[71462] = actions(664);
	v->a[71463] = 1;
	v->a[71464] = sym_comment;
	v->a[71465] = actions(744);
	v->a[71466] = 1;
	v->a[71467] = anon_sym_LT_LT;
	v->a[71468] = actions(1881);
	v->a[71469] = 1;
	v->a[71470] = sym_file_descriptor;
	v->a[71471] = actions(2786);
	v->a[71472] = 1;
	v->a[71473] = anon_sym_LT_LT_DASH;
	v->a[71474] = actions(1879);
	v->a[71475] = 2;
	v->a[71476] = anon_sym_LT;
	v->a[71477] = anon_sym_GT;
	v->a[71478] = actions(2788);
	v->a[71479] = 2;
	small_parse_table_3574(v);
}

void	small_parse_table_3574(t_small_parse_table_array *v)
{
	v->a[71480] = anon_sym_AMP_AMP;
	v->a[71481] = anon_sym_PIPE_PIPE;
	v->a[71482] = state(1080);
	v->a[71483] = 3;
	v->a[71484] = sym_file_redirect;
	v->a[71485] = sym_heredoc_redirect;
	v->a[71486] = aux_sym_redirected_statement_repeat1;
	v->a[71487] = actions(2790);
	v->a[71488] = 5;
	v->a[71489] = anon_sym_GT_GT;
	v->a[71490] = anon_sym_LT_AMP;
	v->a[71491] = anon_sym_GT_AMP;
	v->a[71492] = anon_sym_GT_PIPE;
	v->a[71493] = anon_sym_LT_GT;
	v->a[71494] = 3;
	v->a[71495] = actions(3);
	v->a[71496] = 1;
	v->a[71497] = sym_comment;
	v->a[71498] = actions(895);
	v->a[71499] = 1;
	small_parse_table_3575(v);
}

/* EOF small_parse_table_714.c */
