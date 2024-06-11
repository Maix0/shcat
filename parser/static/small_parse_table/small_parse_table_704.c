/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_704.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3520(t_small_parse_table_array *v)
{
	v->a[70400] = anon_sym_AMP_GT_GT;
	v->a[70401] = anon_sym_LT_AMP;
	v->a[70402] = anon_sym_GT_AMP;
	v->a[70403] = anon_sym_GT_PIPE;
	v->a[70404] = 13;
	v->a[70405] = actions(3);
	v->a[70406] = 1;
	v->a[70407] = sym_comment;
	v->a[70408] = actions(807);
	v->a[70409] = 1;
	v->a[70410] = anon_sym_PIPE;
	v->a[70411] = actions(840);
	v->a[70412] = 1;
	v->a[70413] = anon_sym_RPAREN;
	v->a[70414] = actions(2083);
	v->a[70415] = 1;
	v->a[70416] = sym_file_descriptor;
	v->a[70417] = actions(2369);
	v->a[70418] = 1;
	v->a[70419] = anon_sym_SEMI_SEMI;
	small_parse_table_3521(v);
}

void	small_parse_table_3521(t_small_parse_table_array *v)
{
	v->a[70420] = actions(2371);
	v->a[70421] = 1;
	v->a[70422] = aux_sym_heredoc_redirect_token1;
	v->a[70423] = actions(2373);
	v->a[70424] = 1;
	v->a[70425] = anon_sym_AMP;
	v->a[70426] = actions(2375);
	v->a[70427] = 1;
	v->a[70428] = anon_sym_SEMI;
	v->a[70429] = actions(859);
	v->a[70430] = 2;
	v->a[70431] = anon_sym_AMP_AMP;
	v->a[70432] = anon_sym_PIPE_PIPE;
	v->a[70433] = actions(861);
	v->a[70434] = 2;
	v->a[70435] = anon_sym_LT_LT;
	v->a[70436] = anon_sym_LT_LT_DASH;
	v->a[70437] = actions(2079);
	v->a[70438] = 2;
	v->a[70439] = anon_sym_LT_AMP_DASH;
	small_parse_table_3522(v);
}

void	small_parse_table_3522(t_small_parse_table_array *v)
{
	v->a[70440] = anon_sym_GT_AMP_DASH;
	v->a[70441] = state(1283);
	v->a[70442] = 3;
	v->a[70443] = sym_file_redirect;
	v->a[70444] = sym_heredoc_redirect;
	v->a[70445] = aux_sym_redirected_statement_repeat1;
	v->a[70446] = actions(2077);
	v->a[70447] = 8;
	v->a[70448] = anon_sym_LT;
	v->a[70449] = anon_sym_GT;
	v->a[70450] = anon_sym_GT_GT;
	v->a[70451] = anon_sym_AMP_GT;
	v->a[70452] = anon_sym_AMP_GT_GT;
	v->a[70453] = anon_sym_LT_AMP;
	v->a[70454] = anon_sym_GT_AMP;
	v->a[70455] = anon_sym_GT_PIPE;
	v->a[70456] = 13;
	v->a[70457] = actions(3);
	v->a[70458] = 1;
	v->a[70459] = sym_comment;
	small_parse_table_3523(v);
}

void	small_parse_table_3523(t_small_parse_table_array *v)
{
	v->a[70460] = actions(807);
	v->a[70461] = 1;
	v->a[70462] = anon_sym_PIPE;
	v->a[70463] = actions(840);
	v->a[70464] = 1;
	v->a[70465] = anon_sym_BQUOTE;
	v->a[70466] = actions(2164);
	v->a[70467] = 1;
	v->a[70468] = sym_file_descriptor;
	v->a[70469] = actions(2377);
	v->a[70470] = 1;
	v->a[70471] = anon_sym_SEMI_SEMI;
	v->a[70472] = actions(2379);
	v->a[70473] = 1;
	v->a[70474] = aux_sym_heredoc_redirect_token1;
	v->a[70475] = actions(2381);
	v->a[70476] = 1;
	v->a[70477] = anon_sym_AMP;
	v->a[70478] = actions(2383);
	v->a[70479] = 1;
	small_parse_table_3524(v);
}

void	small_parse_table_3524(t_small_parse_table_array *v)
{
	v->a[70480] = anon_sym_SEMI;
	v->a[70481] = actions(861);
	v->a[70482] = 2;
	v->a[70483] = anon_sym_LT_LT;
	v->a[70484] = anon_sym_LT_LT_DASH;
	v->a[70485] = actions(1032);
	v->a[70486] = 2;
	v->a[70487] = anon_sym_AMP_AMP;
	v->a[70488] = anon_sym_PIPE_PIPE;
	v->a[70489] = actions(2160);
	v->a[70490] = 2;
	v->a[70491] = anon_sym_LT_AMP_DASH;
	v->a[70492] = anon_sym_GT_AMP_DASH;
	v->a[70493] = state(1297);
	v->a[70494] = 3;
	v->a[70495] = sym_file_redirect;
	v->a[70496] = sym_heredoc_redirect;
	v->a[70497] = aux_sym_redirected_statement_repeat1;
	v->a[70498] = actions(2158);
	v->a[70499] = 8;
	small_parse_table_3525(v);
}

/* EOF small_parse_table_704.c */
