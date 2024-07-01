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
	v->a[70400] = 5;
	v->a[70401] = sym_arithmetic_expansion;
	v->a[70402] = sym_string;
	v->a[70403] = sym_simple_expansion;
	v->a[70404] = sym_expansion;
	v->a[70405] = sym_command_substitution;
	v->a[70406] = 3;
	v->a[70407] = actions(664);
	v->a[70408] = 1;
	v->a[70409] = sym_comment;
	v->a[70410] = actions(1176);
	v->a[70411] = 4;
	v->a[70412] = anon_sym_PIPE;
	v->a[70413] = anon_sym_LT;
	v->a[70414] = anon_sym_GT;
	v->a[70415] = anon_sym_LT_LT;
	v->a[70416] = actions(1178);
	v->a[70417] = 12;
	v->a[70418] = sym_file_descriptor;
	v->a[70419] = sym__concat;
	small_parse_table_3521(v);
}

void	small_parse_table_3521(t_small_parse_table_array *v)
{
	v->a[70420] = sym_variable_name;
	v->a[70421] = anon_sym_AMP_AMP;
	v->a[70422] = anon_sym_PIPE_PIPE;
	v->a[70423] = anon_sym_GT_GT;
	v->a[70424] = anon_sym_LT_AMP;
	v->a[70425] = anon_sym_GT_AMP;
	v->a[70426] = anon_sym_GT_PIPE;
	v->a[70427] = anon_sym_LT_GT;
	v->a[70428] = anon_sym_LT_LT_DASH;
	v->a[70429] = aux_sym_concatenation_token1;
	v->a[70430] = 5;
	v->a[70431] = actions(3);
	v->a[70432] = 1;
	v->a[70433] = sym_comment;
	v->a[70434] = actions(2764);
	v->a[70435] = 1;
	v->a[70436] = aux_sym_concatenation_token1;
	v->a[70437] = actions(2768);
	v->a[70438] = 1;
	v->a[70439] = sym__concat;
	small_parse_table_3522(v);
}

void	small_parse_table_3522(t_small_parse_table_array *v)
{
	v->a[70440] = state(1394);
	v->a[70441] = 1;
	v->a[70442] = aux_sym_concatenation_repeat1;
	v->a[70443] = actions(1168);
	v->a[70444] = 13;
	v->a[70445] = anon_sym_SEMI_SEMI;
	v->a[70446] = aux_sym_heredoc_redirect_token1;
	v->a[70447] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70448] = anon_sym_AMP;
	v->a[70449] = anon_sym_DOLLAR;
	v->a[70450] = anon_sym_DQUOTE;
	v->a[70451] = sym_raw_string;
	v->a[70452] = sym_number;
	v->a[70453] = anon_sym_DOLLAR_LBRACE;
	v->a[70454] = anon_sym_DOLLAR_LPAREN;
	v->a[70455] = anon_sym_BQUOTE;
	v->a[70456] = sym_word;
	v->a[70457] = anon_sym_SEMI;
	v->a[70458] = 3;
	v->a[70459] = actions(664);
	small_parse_table_3523(v);
}

void	small_parse_table_3523(t_small_parse_table_array *v)
{
	v->a[70460] = 1;
	v->a[70461] = sym_comment;
	v->a[70462] = actions(768);
	v->a[70463] = 4;
	v->a[70464] = anon_sym_PIPE;
	v->a[70465] = anon_sym_LT;
	v->a[70466] = anon_sym_GT;
	v->a[70467] = anon_sym_LT_LT;
	v->a[70468] = actions(770);
	v->a[70469] = 12;
	v->a[70470] = sym_file_descriptor;
	v->a[70471] = sym__concat;
	v->a[70472] = sym_variable_name;
	v->a[70473] = anon_sym_AMP_AMP;
	v->a[70474] = anon_sym_PIPE_PIPE;
	v->a[70475] = anon_sym_GT_GT;
	v->a[70476] = anon_sym_LT_AMP;
	v->a[70477] = anon_sym_GT_AMP;
	v->a[70478] = anon_sym_GT_PIPE;
	v->a[70479] = anon_sym_LT_GT;
	small_parse_table_3524(v);
}

void	small_parse_table_3524(t_small_parse_table_array *v)
{
	v->a[70480] = anon_sym_LT_LT_DASH;
	v->a[70481] = aux_sym_concatenation_token1;
	v->a[70482] = 10;
	v->a[70483] = actions(3);
	v->a[70484] = 1;
	v->a[70485] = sym_comment;
	v->a[70486] = actions(871);
	v->a[70487] = 1;
	v->a[70488] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70489] = actions(873);
	v->a[70490] = 1;
	v->a[70491] = anon_sym_DOLLAR;
	v->a[70492] = actions(875);
	v->a[70493] = 1;
	v->a[70494] = anon_sym_DQUOTE;
	v->a[70495] = actions(877);
	v->a[70496] = 1;
	v->a[70497] = anon_sym_DOLLAR_LBRACE;
	v->a[70498] = actions(879);
	v->a[70499] = 1;
	small_parse_table_3525(v);
}

/* EOF small_parse_table_704.c */
