/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_464.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2320(t_small_parse_table_array *v)
{
	v->a[46400] = sym__special_character;
	v->a[46401] = anon_sym_DQUOTE;
	v->a[46402] = sym_raw_string;
	v->a[46403] = sym_ansi_c_string;
	v->a[46404] = aux_sym_number_token1;
	v->a[46405] = aux_sym_number_token2;
	v->a[46406] = anon_sym_DOLLAR_LBRACE;
	v->a[46407] = anon_sym_DOLLAR_LPAREN;
	v->a[46408] = anon_sym_BQUOTE;
	v->a[46409] = anon_sym_DOLLAR_BQUOTE;
	v->a[46410] = anon_sym_LT_LPAREN;
	v->a[46411] = anon_sym_GT_LPAREN;
	v->a[46412] = sym_word;
	v->a[46413] = 6;
	v->a[46414] = actions(3);
	v->a[46415] = 1;
	v->a[46416] = sym_comment;
	v->a[46417] = actions(5080);
	v->a[46418] = 1;
	v->a[46419] = aux_sym_concatenation_token1;
	small_parse_table_2321(v);
}

void	small_parse_table_2321(t_small_parse_table_array *v)
{
	v->a[46420] = actions(5082);
	v->a[46421] = 1;
	v->a[46422] = sym__concat;
	v->a[46423] = state(1032);
	v->a[46424] = 1;
	v->a[46425] = aux_sym_concatenation_repeat1;
	v->a[46426] = actions(4566);
	v->a[46427] = 5;
	v->a[46428] = sym_file_descriptor;
	v->a[46429] = sym_test_operator;
	v->a[46430] = sym__bare_dollar;
	v->a[46431] = sym__brace_start;
	v->a[46432] = aux_sym_heredoc_redirect_token1;
	v->a[46433] = actions(4564);
	v->a[46434] = 40;
	v->a[46435] = anon_sym_LPAREN_LPAREN;
	v->a[46436] = anon_sym_SEMI;
	v->a[46437] = anon_sym_PIPE_PIPE;
	v->a[46438] = anon_sym_AMP_AMP;
	v->a[46439] = anon_sym_PIPE;
	small_parse_table_2322(v);
}

void	small_parse_table_2322(t_small_parse_table_array *v)
{
	v->a[46440] = anon_sym_AMP;
	v->a[46441] = anon_sym_EQ_EQ;
	v->a[46442] = anon_sym_LT;
	v->a[46443] = anon_sym_GT;
	v->a[46444] = anon_sym_LT_LT;
	v->a[46445] = anon_sym_GT_GT;
	v->a[46446] = anon_sym_RPAREN;
	v->a[46447] = anon_sym_SEMI_SEMI;
	v->a[46448] = anon_sym_PIPE_AMP;
	v->a[46449] = anon_sym_EQ_TILDE;
	v->a[46450] = anon_sym_AMP_GT;
	v->a[46451] = anon_sym_AMP_GT_GT;
	v->a[46452] = anon_sym_LT_AMP;
	v->a[46453] = anon_sym_GT_AMP;
	v->a[46454] = anon_sym_GT_PIPE;
	v->a[46455] = anon_sym_LT_AMP_DASH;
	v->a[46456] = anon_sym_GT_AMP_DASH;
	v->a[46457] = anon_sym_LT_LT_DASH;
	v->a[46458] = anon_sym_LT_LT_LT;
	v->a[46459] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2323(v);
}

void	small_parse_table_2323(t_small_parse_table_array *v)
{
	v->a[46460] = anon_sym_DOLLAR_LBRACK;
	v->a[46461] = anon_sym_DOLLAR;
	v->a[46462] = sym__special_character;
	v->a[46463] = anon_sym_DQUOTE;
	v->a[46464] = sym_raw_string;
	v->a[46465] = sym_ansi_c_string;
	v->a[46466] = aux_sym_number_token1;
	v->a[46467] = aux_sym_number_token2;
	v->a[46468] = anon_sym_DOLLAR_LBRACE;
	v->a[46469] = anon_sym_DOLLAR_LPAREN;
	v->a[46470] = anon_sym_BQUOTE;
	v->a[46471] = anon_sym_DOLLAR_BQUOTE;
	v->a[46472] = anon_sym_LT_LPAREN;
	v->a[46473] = anon_sym_GT_LPAREN;
	v->a[46474] = sym_word;
	v->a[46475] = 6;
	v->a[46476] = actions(3);
	v->a[46477] = 1;
	v->a[46478] = sym_comment;
	v->a[46479] = actions(5080);
	small_parse_table_2324(v);
}

void	small_parse_table_2324(t_small_parse_table_array *v)
{
	v->a[46480] = 1;
	v->a[46481] = aux_sym_concatenation_token1;
	v->a[46482] = actions(5082);
	v->a[46483] = 1;
	v->a[46484] = sym__concat;
	v->a[46485] = state(1040);
	v->a[46486] = 1;
	v->a[46487] = aux_sym_concatenation_repeat1;
	v->a[46488] = actions(4554);
	v->a[46489] = 5;
	v->a[46490] = sym_file_descriptor;
	v->a[46491] = sym_test_operator;
	v->a[46492] = sym__bare_dollar;
	v->a[46493] = sym__brace_start;
	v->a[46494] = aux_sym_heredoc_redirect_token1;
	v->a[46495] = actions(4552);
	v->a[46496] = 40;
	v->a[46497] = anon_sym_LPAREN_LPAREN;
	v->a[46498] = anon_sym_SEMI;
	v->a[46499] = anon_sym_PIPE_PIPE;
	small_parse_table_2325(v);
}

/* EOF small_parse_table_464.c */
