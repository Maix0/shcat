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
	v->a[70400] = anon_sym_LT;
	v->a[70401] = anon_sym_GT;
	v->a[70402] = anon_sym_GT_GT;
	v->a[70403] = anon_sym_AMP_GT;
	v->a[70404] = anon_sym_AMP_GT_GT;
	v->a[70405] = anon_sym_LT_AMP;
	v->a[70406] = anon_sym_GT_AMP;
	v->a[70407] = anon_sym_GT_PIPE;
	v->a[70408] = anon_sym_LT_AMP_DASH;
	v->a[70409] = anon_sym_GT_AMP_DASH;
	v->a[70410] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70411] = aux_sym_concatenation_token1;
	v->a[70412] = anon_sym_DOLLAR;
	v->a[70413] = anon_sym_DQUOTE;
	v->a[70414] = sym_raw_string;
	v->a[70415] = sym_number;
	v->a[70416] = anon_sym_DOLLAR_LBRACE;
	v->a[70417] = anon_sym_DOLLAR_LPAREN;
	v->a[70418] = anon_sym_BQUOTE;
	v->a[70419] = sym_word;
	small_parse_table_3521(v);
}

void	small_parse_table_3521(t_small_parse_table_array *v)
{
	v->a[70420] = 10;
	v->a[70421] = actions(3);
	v->a[70422] = 1;
	v->a[70423] = sym_comment;
	v->a[70424] = actions(2031);
	v->a[70425] = 1;
	v->a[70426] = aux_sym_heredoc_redirect_token1;
	v->a[70427] = actions(2066);
	v->a[70428] = 1;
	v->a[70429] = sym_file_descriptor;
	v->a[70430] = state(692);
	v->a[70431] = 1;
	v->a[70432] = sym_terminator;
	v->a[70433] = actions(804);
	v->a[70434] = 2;
	v->a[70435] = anon_sym_LT_LT;
	v->a[70436] = anon_sym_LT_LT_DASH;
	v->a[70437] = actions(893);
	v->a[70438] = 2;
	v->a[70439] = anon_sym_AMP_AMP;
	small_parse_table_3522(v);
}

void	small_parse_table_3522(t_small_parse_table_array *v)
{
	v->a[70440] = anon_sym_PIPE_PIPE;
	v->a[70441] = actions(2064);
	v->a[70442] = 2;
	v->a[70443] = anon_sym_LT_AMP_DASH;
	v->a[70444] = anon_sym_GT_AMP_DASH;
	v->a[70445] = actions(800);
	v->a[70446] = 3;
	v->a[70447] = anon_sym_SEMI_SEMI;
	v->a[70448] = anon_sym_AMP;
	v->a[70449] = anon_sym_SEMI;
	v->a[70450] = state(1256);
	v->a[70451] = 3;
	v->a[70452] = sym_file_redirect;
	v->a[70453] = sym_heredoc_redirect;
	v->a[70454] = aux_sym_redirected_statement_repeat1;
	v->a[70455] = actions(2062);
	v->a[70456] = 8;
	v->a[70457] = anon_sym_LT;
	v->a[70458] = anon_sym_GT;
	v->a[70459] = anon_sym_GT_GT;
	small_parse_table_3523(v);
}

void	small_parse_table_3523(t_small_parse_table_array *v)
{
	v->a[70460] = anon_sym_AMP_GT;
	v->a[70461] = anon_sym_AMP_GT_GT;
	v->a[70462] = anon_sym_LT_AMP;
	v->a[70463] = anon_sym_GT_AMP;
	v->a[70464] = anon_sym_GT_PIPE;
	v->a[70465] = 5;
	v->a[70466] = actions(3);
	v->a[70467] = 1;
	v->a[70468] = sym_comment;
	v->a[70469] = actions(774);
	v->a[70470] = 1;
	v->a[70471] = sym_file_descriptor;
	v->a[70472] = actions(1625);
	v->a[70473] = 1;
	v->a[70474] = sym_variable_name;
	v->a[70475] = state(1432);
	v->a[70476] = 2;
	v->a[70477] = sym_variable_assignment;
	v->a[70478] = aux_sym__variable_assignments_repeat1;
	v->a[70479] = actions(762);
	small_parse_table_3524(v);
}

void	small_parse_table_3524(t_small_parse_table_array *v)
{
	v->a[70480] = 19;
	v->a[70481] = anon_sym_LT;
	v->a[70482] = anon_sym_GT;
	v->a[70483] = anon_sym_GT_GT;
	v->a[70484] = anon_sym_AMP_GT;
	v->a[70485] = anon_sym_AMP_GT_GT;
	v->a[70486] = anon_sym_LT_AMP;
	v->a[70487] = anon_sym_GT_AMP;
	v->a[70488] = anon_sym_GT_PIPE;
	v->a[70489] = anon_sym_LT_AMP_DASH;
	v->a[70490] = anon_sym_GT_AMP_DASH;
	v->a[70491] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70492] = anon_sym_DOLLAR;
	v->a[70493] = anon_sym_DQUOTE;
	v->a[70494] = sym_raw_string;
	v->a[70495] = sym_number;
	v->a[70496] = anon_sym_DOLLAR_LBRACE;
	v->a[70497] = anon_sym_DOLLAR_LPAREN;
	v->a[70498] = anon_sym_BQUOTE;
	v->a[70499] = sym_word;
	small_parse_table_3525(v);
}

/* EOF small_parse_table_704.c */
