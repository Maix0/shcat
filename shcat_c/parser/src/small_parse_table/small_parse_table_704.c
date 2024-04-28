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
	v->a[70400] = actions(3);
	v->a[70401] = 1;
	v->a[70402] = sym_comment;
	v->a[70403] = actions(5755);
	v->a[70404] = 1;
	v->a[70405] = sym__special_character;
	v->a[70406] = state(1522);
	v->a[70407] = 1;
	v->a[70408] = aux_sym__literal_repeat1;
	v->a[70409] = actions(1364);
	v->a[70410] = 4;
	v->a[70411] = sym_file_descriptor;
	v->a[70412] = sym_test_operator;
	v->a[70413] = sym__brace_start;
	v->a[70414] = aux_sym_heredoc_redirect_token1;
	v->a[70415] = actions(1362);
	v->a[70416] = 39;
	v->a[70417] = anon_sym_LPAREN_LPAREN;
	v->a[70418] = anon_sym_SEMI;
	v->a[70419] = anon_sym_PIPE_PIPE;
	small_parse_table_3521(v);
}

void	small_parse_table_3521(t_small_parse_table_array *v)
{
	v->a[70420] = anon_sym_AMP_AMP;
	v->a[70421] = anon_sym_PIPE;
	v->a[70422] = anon_sym_AMP;
	v->a[70423] = anon_sym_LT;
	v->a[70424] = anon_sym_GT;
	v->a[70425] = anon_sym_LT_LT;
	v->a[70426] = anon_sym_GT_GT;
	v->a[70427] = anon_sym_esac;
	v->a[70428] = anon_sym_SEMI_SEMI;
	v->a[70429] = anon_sym_SEMI_AMP;
	v->a[70430] = anon_sym_SEMI_SEMI_AMP;
	v->a[70431] = anon_sym_PIPE_AMP;
	v->a[70432] = anon_sym_AMP_GT;
	v->a[70433] = anon_sym_AMP_GT_GT;
	v->a[70434] = anon_sym_LT_AMP;
	v->a[70435] = anon_sym_GT_AMP;
	v->a[70436] = anon_sym_GT_PIPE;
	v->a[70437] = anon_sym_LT_AMP_DASH;
	v->a[70438] = anon_sym_GT_AMP_DASH;
	v->a[70439] = anon_sym_LT_LT_DASH;
	small_parse_table_3522(v);
}

void	small_parse_table_3522(t_small_parse_table_array *v)
{
	v->a[70440] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70441] = anon_sym_DOLLAR_LBRACK;
	v->a[70442] = anon_sym_DOLLAR;
	v->a[70443] = anon_sym_DQUOTE;
	v->a[70444] = sym_raw_string;
	v->a[70445] = sym_ansi_c_string;
	v->a[70446] = aux_sym_number_token1;
	v->a[70447] = aux_sym_number_token2;
	v->a[70448] = anon_sym_DOLLAR_LBRACE;
	v->a[70449] = anon_sym_DOLLAR_LPAREN;
	v->a[70450] = anon_sym_BQUOTE;
	v->a[70451] = anon_sym_DOLLAR_BQUOTE;
	v->a[70452] = anon_sym_LT_LPAREN;
	v->a[70453] = anon_sym_GT_LPAREN;
	v->a[70454] = aux_sym__simple_variable_name_token1;
	v->a[70455] = sym_word;
	v->a[70456] = 6;
	v->a[70457] = actions(3);
	v->a[70458] = 1;
	v->a[70459] = sym_comment;
	small_parse_table_3523(v);
}

void	small_parse_table_3523(t_small_parse_table_array *v)
{
	v->a[70460] = actions(5638);
	v->a[70461] = 1;
	v->a[70462] = aux_sym_concatenation_token1;
	v->a[70463] = actions(5640);
	v->a[70464] = 1;
	v->a[70465] = sym__concat;
	v->a[70466] = state(1660);
	v->a[70467] = 1;
	v->a[70468] = aux_sym_concatenation_repeat1;
	v->a[70469] = actions(5069);
	v->a[70470] = 5;
	v->a[70471] = sym_file_descriptor;
	v->a[70472] = sym_variable_name;
	v->a[70473] = sym_test_operator;
	v->a[70474] = sym__brace_start;
	v->a[70475] = aux_sym_heredoc_redirect_token1;
	v->a[70476] = actions(5067);
	v->a[70477] = 37;
	v->a[70478] = anon_sym_LPAREN_LPAREN;
	v->a[70479] = anon_sym_SEMI;
	small_parse_table_3524(v);
}

void	small_parse_table_3524(t_small_parse_table_array *v)
{
	v->a[70480] = anon_sym_PIPE_PIPE;
	v->a[70481] = anon_sym_AMP_AMP;
	v->a[70482] = anon_sym_PIPE;
	v->a[70483] = anon_sym_AMP;
	v->a[70484] = anon_sym_LT;
	v->a[70485] = anon_sym_GT;
	v->a[70486] = anon_sym_LT_LT;
	v->a[70487] = anon_sym_GT_GT;
	v->a[70488] = anon_sym_SEMI_SEMI;
	v->a[70489] = anon_sym_PIPE_AMP;
	v->a[70490] = anon_sym_AMP_GT;
	v->a[70491] = anon_sym_AMP_GT_GT;
	v->a[70492] = anon_sym_LT_AMP;
	v->a[70493] = anon_sym_GT_AMP;
	v->a[70494] = anon_sym_GT_PIPE;
	v->a[70495] = anon_sym_LT_AMP_DASH;
	v->a[70496] = anon_sym_GT_AMP_DASH;
	v->a[70497] = anon_sym_LT_LT_DASH;
	v->a[70498] = anon_sym_LT_LT_LT;
	v->a[70499] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3525(v);
}

/* EOF small_parse_table_704.c */
