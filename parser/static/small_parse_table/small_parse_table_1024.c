/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1024.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5120(t_small_parse_table_array *v)
{
	v->a[102400] = sym__concat;
	v->a[102401] = state(1853);
	v->a[102402] = 1;
	v->a[102403] = aux_sym_concatenation_repeat1;
	v->a[102404] = actions(2690);
	v->a[102405] = 3;
	v->a[102406] = sym_file_descriptor;
	v->a[102407] = sym_variable_name;
	v->a[102408] = aux_sym_heredoc_redirect_token1;
	v->a[102409] = actions(2688);
	v->a[102410] = 19;
	v->a[102411] = anon_sym_PIPE;
	v->a[102412] = anon_sym_SEMI_SEMI;
	v->a[102413] = anon_sym_PIPE_AMP;
	v->a[102414] = anon_sym_AMP_AMP;
	v->a[102415] = anon_sym_PIPE_PIPE;
	v->a[102416] = anon_sym_LT;
	v->a[102417] = anon_sym_GT;
	v->a[102418] = anon_sym_GT_GT;
	v->a[102419] = anon_sym_AMP_GT;
	small_parse_table_5121(v);
}

void	small_parse_table_5121(t_small_parse_table_array *v)
{
	v->a[102420] = anon_sym_AMP_GT_GT;
	v->a[102421] = anon_sym_LT_AMP;
	v->a[102422] = anon_sym_GT_AMP;
	v->a[102423] = anon_sym_GT_PIPE;
	v->a[102424] = anon_sym_LT_AMP_DASH;
	v->a[102425] = anon_sym_GT_AMP_DASH;
	v->a[102426] = anon_sym_LT_LT;
	v->a[102427] = anon_sym_LT_LT_DASH;
	v->a[102428] = anon_sym_AMP;
	v->a[102429] = anon_sym_SEMI;
	v->a[102430] = 5;
	v->a[102431] = actions(3);
	v->a[102432] = 1;
	v->a[102433] = sym_comment;
	v->a[102434] = actions(2516);
	v->a[102435] = 2;
	v->a[102436] = anon_sym_PIPE;
	v->a[102437] = anon_sym_PIPE_AMP;
	v->a[102438] = actions(2632);
	v->a[102439] = 2;
	small_parse_table_5122(v);
}

void	small_parse_table_5122(t_small_parse_table_array *v)
{
	v->a[102440] = sym_file_descriptor;
	v->a[102441] = aux_sym_heredoc_redirect_token1;
	v->a[102442] = state(2109);
	v->a[102443] = 3;
	v->a[102444] = sym_file_redirect;
	v->a[102445] = sym_heredoc_redirect;
	v->a[102446] = aux_sym_redirected_statement_repeat1;
	v->a[102447] = actions(2630);
	v->a[102448] = 18;
	v->a[102449] = anon_sym_RPAREN;
	v->a[102450] = anon_sym_SEMI_SEMI;
	v->a[102451] = anon_sym_AMP_AMP;
	v->a[102452] = anon_sym_PIPE_PIPE;
	v->a[102453] = anon_sym_LT;
	v->a[102454] = anon_sym_GT;
	v->a[102455] = anon_sym_GT_GT;
	v->a[102456] = anon_sym_AMP_GT;
	v->a[102457] = anon_sym_AMP_GT_GT;
	v->a[102458] = anon_sym_LT_AMP;
	v->a[102459] = anon_sym_GT_AMP;
	small_parse_table_5123(v);
}

void	small_parse_table_5123(t_small_parse_table_array *v)
{
	v->a[102460] = anon_sym_GT_PIPE;
	v->a[102461] = anon_sym_LT_AMP_DASH;
	v->a[102462] = anon_sym_GT_AMP_DASH;
	v->a[102463] = anon_sym_LT_LT;
	v->a[102464] = anon_sym_LT_LT_DASH;
	v->a[102465] = anon_sym_AMP;
	v->a[102466] = anon_sym_SEMI;
	v->a[102467] = 10;
	v->a[102468] = actions(3);
	v->a[102469] = 1;
	v->a[102470] = sym_comment;
	v->a[102471] = actions(2642);
	v->a[102472] = 1;
	v->a[102473] = aux_sym_heredoc_redirect_token1;
	v->a[102474] = actions(5159);
	v->a[102475] = 1;
	v->a[102476] = sym_file_descriptor;
	v->a[102477] = actions(2518);
	v->a[102478] = 2;
	v->a[102479] = anon_sym_AMP_AMP;
	small_parse_table_5124(v);
}

void	small_parse_table_5124(t_small_parse_table_array *v)
{
	v->a[102480] = anon_sym_PIPE_PIPE;
	v->a[102481] = actions(2520);
	v->a[102482] = 2;
	v->a[102483] = anon_sym_LT_LT;
	v->a[102484] = anon_sym_LT_LT_DASH;
	v->a[102485] = actions(2644);
	v->a[102486] = 2;
	v->a[102487] = anon_sym_AMP;
	v->a[102488] = anon_sym_SEMI;
	v->a[102489] = actions(5155);
	v->a[102490] = 2;
	v->a[102491] = anon_sym_LT_AMP_DASH;
	v->a[102492] = anon_sym_GT_AMP_DASH;
	v->a[102493] = state(1894);
	v->a[102494] = 3;
	v->a[102495] = sym_file_redirect;
	v->a[102496] = sym_heredoc_redirect;
	v->a[102497] = aux_sym_redirected_statement_repeat1;
	v->a[102498] = actions(1995);
	v->a[102499] = 4;
	small_parse_table_5125(v);
}

/* EOF small_parse_table_1024.c */
