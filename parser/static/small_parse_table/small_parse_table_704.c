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
	v->a[70400] = 3;
	v->a[70401] = sym_raw_string;
	v->a[70402] = sym_number;
	v->a[70403] = sym_word;
	v->a[70404] = state(475);
	v->a[70405] = 5;
	v->a[70406] = sym_arithmetic_expansion;
	v->a[70407] = sym_string;
	v->a[70408] = sym_simple_expansion;
	v->a[70409] = sym_expansion;
	v->a[70410] = sym_command_substitution;
	v->a[70411] = 10;
	v->a[70412] = actions(3);
	v->a[70413] = 1;
	v->a[70414] = sym_comment;
	v->a[70415] = actions(850);
	v->a[70416] = 1;
	v->a[70417] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70418] = actions(852);
	v->a[70419] = 1;
	small_parse_table_3521(v);
}

void	small_parse_table_3521(t_small_parse_table_array *v)
{
	v->a[70420] = anon_sym_DOLLAR;
	v->a[70421] = actions(854);
	v->a[70422] = 1;
	v->a[70423] = anon_sym_DQUOTE;
	v->a[70424] = actions(856);
	v->a[70425] = 1;
	v->a[70426] = anon_sym_DOLLAR_LBRACE;
	v->a[70427] = actions(858);
	v->a[70428] = 1;
	v->a[70429] = anon_sym_DOLLAR_LPAREN;
	v->a[70430] = actions(860);
	v->a[70431] = 1;
	v->a[70432] = anon_sym_BQUOTE;
	v->a[70433] = state(252);
	v->a[70434] = 2;
	v->a[70435] = sym_concatenation;
	v->a[70436] = aux_sym_for_statement_repeat1;
	v->a[70437] = actions(848);
	v->a[70438] = 3;
	v->a[70439] = sym_raw_string;
	small_parse_table_3522(v);
}

void	small_parse_table_3522(t_small_parse_table_array *v)
{
	v->a[70440] = sym_number;
	v->a[70441] = sym_word;
	v->a[70442] = state(475);
	v->a[70443] = 5;
	v->a[70444] = sym_arithmetic_expansion;
	v->a[70445] = sym_string;
	v->a[70446] = sym_simple_expansion;
	v->a[70447] = sym_expansion;
	v->a[70448] = sym_command_substitution;
	v->a[70449] = 6;
	v->a[70450] = actions(3);
	v->a[70451] = 1;
	v->a[70452] = sym_comment;
	v->a[70453] = actions(2137);
	v->a[70454] = 1;
	v->a[70455] = aux_sym_heredoc_redirect_token1;
	v->a[70456] = actions(2767);
	v->a[70457] = 1;
	v->a[70458] = sym_file_descriptor;
	v->a[70459] = state(1394);
	small_parse_table_3523(v);
}

void	small_parse_table_3523(t_small_parse_table_array *v)
{
	v->a[70460] = 2;
	v->a[70461] = sym_file_redirect;
	v->a[70462] = aux_sym_redirected_statement_repeat2;
	v->a[70463] = actions(2139);
	v->a[70464] = 5;
	v->a[70465] = anon_sym_PIPE;
	v->a[70466] = anon_sym_AMP_AMP;
	v->a[70467] = anon_sym_PIPE_PIPE;
	v->a[70468] = anon_sym_LT_LT;
	v->a[70469] = anon_sym_LT_LT_DASH;
	v->a[70470] = actions(2600);
	v->a[70471] = 7;
	v->a[70472] = anon_sym_LT;
	v->a[70473] = anon_sym_GT;
	v->a[70474] = anon_sym_GT_GT;
	v->a[70475] = anon_sym_LT_AMP;
	v->a[70476] = anon_sym_GT_AMP;
	v->a[70477] = anon_sym_GT_PIPE;
	v->a[70478] = anon_sym_LT_GT;
	v->a[70479] = 6;
	small_parse_table_3524(v);
}

void	small_parse_table_3524(t_small_parse_table_array *v)
{
	v->a[70480] = actions(3);
	v->a[70481] = 1;
	v->a[70482] = sym_comment;
	v->a[70483] = actions(2055);
	v->a[70484] = 1;
	v->a[70485] = aux_sym_heredoc_redirect_token1;
	v->a[70486] = actions(2772);
	v->a[70487] = 1;
	v->a[70488] = sym_file_descriptor;
	v->a[70489] = state(1394);
	v->a[70490] = 2;
	v->a[70491] = sym_file_redirect;
	v->a[70492] = aux_sym_redirected_statement_repeat2;
	v->a[70493] = actions(2050);
	v->a[70494] = 5;
	v->a[70495] = anon_sym_PIPE;
	v->a[70496] = anon_sym_AMP_AMP;
	v->a[70497] = anon_sym_PIPE_PIPE;
	v->a[70498] = anon_sym_LT_LT;
	v->a[70499] = anon_sym_LT_LT_DASH;
	small_parse_table_3525(v);
}

/* EOF small_parse_table_704.c */
