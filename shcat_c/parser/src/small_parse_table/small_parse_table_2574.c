/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2574.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12870(t_small_parse_table_array *v)
{
	v->a[257400] = sym__external_expansion_sym_hash;
	v->a[257401] = sym__external_expansion_sym_bang;
	v->a[257402] = sym__external_expansion_sym_equal;
	v->a[257403] = actions(11754);
	v->a[257404] = 4;
	v->a[257405] = anon_sym_DASH;
	v->a[257406] = anon_sym_STAR;
	v->a[257407] = anon_sym_QMARK;
	v->a[257408] = anon_sym_AT2;
	v->a[257409] = actions(11756);
	v->a[257410] = 5;
	v->a[257411] = anon_sym_BANG;
	v->a[257412] = anon_sym_DOLLAR;
	v->a[257413] = anon_sym_POUND;
	v->a[257414] = anon_sym_0;
	v->a[257415] = anon_sym__;
	v->a[257416] = 6;
	v->a[257417] = actions(3);
	v->a[257418] = 1;
	v->a[257419] = sym_comment;
	small_parse_table_12871(v);
}

void	small_parse_table_12871(t_small_parse_table_array *v)
{
	v->a[257420] = actions(11651);
	v->a[257421] = 1;
	v->a[257422] = aux_sym_concatenation_token1;
	v->a[257423] = actions(11875);
	v->a[257424] = 1;
	v->a[257425] = sym__concat;
	v->a[257426] = state(4268);
	v->a[257427] = 1;
	v->a[257428] = aux_sym_concatenation_repeat1;
	v->a[257429] = actions(1288);
	v->a[257430] = 2;
	v->a[257431] = sym_file_descriptor;
	v->a[257432] = aux_sym_heredoc_redirect_token1;
	v->a[257433] = actions(1286);
	v->a[257434] = 20;
	v->a[257435] = anon_sym_SEMI;
	v->a[257436] = anon_sym_PIPE_PIPE;
	v->a[257437] = anon_sym_AMP_AMP;
	v->a[257438] = anon_sym_PIPE;
	v->a[257439] = anon_sym_AMP;
	small_parse_table_12872(v);
}

void	small_parse_table_12872(t_small_parse_table_array *v)
{
	v->a[257440] = anon_sym_LT;
	v->a[257441] = anon_sym_GT;
	v->a[257442] = anon_sym_LT_LT;
	v->a[257443] = anon_sym_GT_GT;
	v->a[257444] = anon_sym_SEMI_SEMI;
	v->a[257445] = anon_sym_PIPE_AMP;
	v->a[257446] = anon_sym_AMP_GT;
	v->a[257447] = anon_sym_AMP_GT_GT;
	v->a[257448] = anon_sym_LT_AMP;
	v->a[257449] = anon_sym_GT_AMP;
	v->a[257450] = anon_sym_GT_PIPE;
	v->a[257451] = anon_sym_LT_AMP_DASH;
	v->a[257452] = anon_sym_GT_AMP_DASH;
	v->a[257453] = anon_sym_LT_LT_DASH;
	v->a[257454] = anon_sym_BQUOTE;
	v->a[257455] = 3;
	v->a[257456] = actions(3);
	v->a[257457] = 1;
	v->a[257458] = sym_comment;
	v->a[257459] = actions(1302);
	small_parse_table_12873(v);
}

void	small_parse_table_12873(t_small_parse_table_array *v)
{
	v->a[257460] = 4;
	v->a[257461] = sym__concat;
	v->a[257462] = sym_test_operator;
	v->a[257463] = sym__brace_start;
	v->a[257464] = aux_sym_heredoc_redirect_token1;
	v->a[257465] = actions(1300);
	v->a[257466] = 21;
	v->a[257467] = anon_sym_LPAREN_LPAREN;
	v->a[257468] = anon_sym_SEMI;
	v->a[257469] = anon_sym_AMP;
	v->a[257470] = anon_sym_SEMI_SEMI;
	v->a[257471] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[257472] = anon_sym_DOLLAR_LBRACK;
	v->a[257473] = aux_sym_concatenation_token1;
	v->a[257474] = anon_sym_DOLLAR;
	v->a[257475] = sym__special_character;
	v->a[257476] = anon_sym_DQUOTE;
	v->a[257477] = sym_raw_string;
	v->a[257478] = sym_ansi_c_string;
	v->a[257479] = aux_sym_number_token1;
	small_parse_table_12874(v);
}

void	small_parse_table_12874(t_small_parse_table_array *v)
{
	v->a[257480] = aux_sym_number_token2;
	v->a[257481] = anon_sym_DOLLAR_LBRACE;
	v->a[257482] = anon_sym_DOLLAR_LPAREN;
	v->a[257483] = anon_sym_BQUOTE;
	v->a[257484] = anon_sym_DOLLAR_BQUOTE;
	v->a[257485] = anon_sym_LT_LPAREN;
	v->a[257486] = anon_sym_GT_LPAREN;
	v->a[257487] = sym_word;
	v->a[257488] = 16;
	v->a[257489] = actions(3);
	v->a[257490] = 1;
	v->a[257491] = sym_comment;
	v->a[257492] = actions(11760);
	v->a[257493] = 1;
	v->a[257494] = anon_sym_BANG2;
	v->a[257495] = actions(11764);
	v->a[257496] = 1;
	v->a[257497] = anon_sym_DOLLAR_LPAREN;
	v->a[257498] = actions(11766);
	v->a[257499] = 1;
	small_parse_table_12875(v);
}

/* EOF small_parse_table_2574.c */
