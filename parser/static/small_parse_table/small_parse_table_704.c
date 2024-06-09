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
	v->a[70400] = anon_sym_LT_AMP_DASH;
	v->a[70401] = anon_sym_GT_AMP_DASH;
	v->a[70402] = anon_sym_LT_LT;
	v->a[70403] = anon_sym_LT_LT_DASH;
	v->a[70404] = anon_sym_AMP;
	v->a[70405] = anon_sym_SEMI;
	v->a[70406] = 10;
	v->a[70407] = actions(3);
	v->a[70408] = 1;
	v->a[70409] = sym_comment;
	v->a[70410] = actions(1002);
	v->a[70411] = 1;
	v->a[70412] = anon_sym_PIPE;
	v->a[70413] = actions(2460);
	v->a[70414] = 1;
	v->a[70415] = sym_file_descriptor;
	v->a[70416] = actions(2617);
	v->a[70417] = 1;
	v->a[70418] = aux_sym_heredoc_redirect_token1;
	v->a[70419] = actions(1062);
	small_parse_table_3521(v);
}

void	small_parse_table_3521(t_small_parse_table_array *v)
{
	v->a[70420] = 2;
	v->a[70421] = anon_sym_LT_LT;
	v->a[70422] = anon_sym_LT_LT_DASH;
	v->a[70423] = actions(1093);
	v->a[70424] = 2;
	v->a[70425] = anon_sym_AMP_AMP;
	v->a[70426] = anon_sym_PIPE_PIPE;
	v->a[70427] = actions(2456);
	v->a[70428] = 2;
	v->a[70429] = anon_sym_LT_AMP_DASH;
	v->a[70430] = anon_sym_GT_AMP_DASH;
	v->a[70431] = actions(1176);
	v->a[70432] = 3;
	v->a[70433] = anon_sym_SEMI_SEMI;
	v->a[70434] = anon_sym_AMP;
	v->a[70435] = anon_sym_SEMI;
	v->a[70436] = state(1160);
	v->a[70437] = 3;
	v->a[70438] = sym_file_redirect;
	v->a[70439] = sym_heredoc_redirect;
	small_parse_table_3522(v);
}

void	small_parse_table_3522(t_small_parse_table_array *v)
{
	v->a[70440] = aux_sym_redirected_statement_repeat1;
	v->a[70441] = actions(2454);
	v->a[70442] = 8;
	v->a[70443] = anon_sym_LT;
	v->a[70444] = anon_sym_GT;
	v->a[70445] = anon_sym_GT_GT;
	v->a[70446] = anon_sym_AMP_GT;
	v->a[70447] = anon_sym_AMP_GT_GT;
	v->a[70448] = anon_sym_LT_AMP;
	v->a[70449] = anon_sym_GT_AMP;
	v->a[70450] = anon_sym_GT_PIPE;
	v->a[70451] = 8;
	v->a[70452] = actions(3);
	v->a[70453] = 1;
	v->a[70454] = sym_comment;
	v->a[70455] = actions(2341);
	v->a[70456] = 1;
	v->a[70457] = aux_sym_heredoc_redirect_token1;
	v->a[70458] = actions(2625);
	v->a[70459] = 1;
	small_parse_table_3523(v);
}

void	small_parse_table_3523(t_small_parse_table_array *v)
{
	v->a[70460] = sym_file_descriptor;
	v->a[70461] = actions(2338);
	v->a[70462] = 2;
	v->a[70463] = anon_sym_LT_LT;
	v->a[70464] = anon_sym_LT_LT_DASH;
	v->a[70465] = actions(2622);
	v->a[70466] = 2;
	v->a[70467] = anon_sym_LT_AMP_DASH;
	v->a[70468] = anon_sym_GT_AMP_DASH;
	v->a[70469] = state(1205);
	v->a[70470] = 3;
	v->a[70471] = sym_file_redirect;
	v->a[70472] = sym_heredoc_redirect;
	v->a[70473] = aux_sym_redirected_statement_repeat1;
	v->a[70474] = actions(2330);
	v->a[70475] = 6;
	v->a[70476] = anon_sym_PIPE;
	v->a[70477] = anon_sym_SEMI_SEMI;
	v->a[70478] = anon_sym_AMP_AMP;
	v->a[70479] = anon_sym_PIPE_PIPE;
	small_parse_table_3524(v);
}

void	small_parse_table_3524(t_small_parse_table_array *v)
{
	v->a[70480] = anon_sym_AMP;
	v->a[70481] = anon_sym_SEMI;
	v->a[70482] = actions(2619);
	v->a[70483] = 8;
	v->a[70484] = anon_sym_LT;
	v->a[70485] = anon_sym_GT;
	v->a[70486] = anon_sym_GT_GT;
	v->a[70487] = anon_sym_AMP_GT;
	v->a[70488] = anon_sym_AMP_GT_GT;
	v->a[70489] = anon_sym_LT_AMP;
	v->a[70490] = anon_sym_GT_AMP;
	v->a[70491] = anon_sym_GT_PIPE;
	v->a[70492] = 3;
	v->a[70493] = actions(3);
	v->a[70494] = 1;
	v->a[70495] = sym_comment;
	v->a[70496] = actions(2628);
	v->a[70497] = 3;
	v->a[70498] = sym_file_descriptor;
	v->a[70499] = ts_builtin_sym_end;
	small_parse_table_3525(v);
}

/* EOF small_parse_table_704.c */
