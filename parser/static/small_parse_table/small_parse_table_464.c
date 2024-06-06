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
	v->a[46400] = actions(3);
	v->a[46401] = 1;
	v->a[46402] = sym_comment;
	v->a[46403] = actions(3020);
	v->a[46404] = 6;
	v->a[46405] = sym_file_descriptor;
	v->a[46406] = sym__concat;
	v->a[46407] = sym_test_operator;
	v->a[46408] = sym__brace_start;
	v->a[46409] = ts_builtin_sym_end;
	v->a[46410] = aux_sym_heredoc_redirect_token1;
	v->a[46411] = actions(3018);
	v->a[46412] = 33;
	v->a[46413] = anon_sym_PIPE;
	v->a[46414] = anon_sym_SEMI_SEMI;
	v->a[46415] = anon_sym_PIPE_AMP;
	v->a[46416] = anon_sym_AMP_AMP;
	v->a[46417] = anon_sym_PIPE_PIPE;
	v->a[46418] = anon_sym_LT;
	v->a[46419] = anon_sym_GT;
	small_parse_table_2321(v);
}

void	small_parse_table_2321(t_small_parse_table_array *v)
{
	v->a[46420] = anon_sym_GT_GT;
	v->a[46421] = anon_sym_AMP_GT;
	v->a[46422] = anon_sym_AMP_GT_GT;
	v->a[46423] = anon_sym_LT_AMP;
	v->a[46424] = anon_sym_GT_AMP;
	v->a[46425] = anon_sym_GT_PIPE;
	v->a[46426] = anon_sym_LT_AMP_DASH;
	v->a[46427] = anon_sym_GT_AMP_DASH;
	v->a[46428] = anon_sym_LT_LT;
	v->a[46429] = anon_sym_LT_LT_DASH;
	v->a[46430] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46431] = anon_sym_AMP;
	v->a[46432] = aux_sym_concatenation_token1;
	v->a[46433] = anon_sym_DOLLAR;
	v->a[46434] = sym__special_character;
	v->a[46435] = anon_sym_DQUOTE;
	v->a[46436] = sym_raw_string;
	v->a[46437] = aux_sym_number_token1;
	v->a[46438] = aux_sym_number_token2;
	v->a[46439] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2322(v);
}

void	small_parse_table_2322(t_small_parse_table_array *v)
{
	v->a[46440] = anon_sym_DOLLAR_LPAREN;
	v->a[46441] = anon_sym_BQUOTE;
	v->a[46442] = anon_sym_DOLLAR_BQUOTE;
	v->a[46443] = aux_sym__simple_variable_name_token1;
	v->a[46444] = sym_word;
	v->a[46445] = anon_sym_SEMI;
	v->a[46446] = 3;
	v->a[46447] = actions(3);
	v->a[46448] = 1;
	v->a[46449] = sym_comment;
	v->a[46450] = actions(3024);
	v->a[46451] = 6;
	v->a[46452] = sym_file_descriptor;
	v->a[46453] = sym__concat;
	v->a[46454] = sym_test_operator;
	v->a[46455] = sym__brace_start;
	v->a[46456] = ts_builtin_sym_end;
	v->a[46457] = aux_sym_heredoc_redirect_token1;
	v->a[46458] = actions(3022);
	v->a[46459] = 33;
	small_parse_table_2323(v);
}

void	small_parse_table_2323(t_small_parse_table_array *v)
{
	v->a[46460] = anon_sym_PIPE;
	v->a[46461] = anon_sym_SEMI_SEMI;
	v->a[46462] = anon_sym_PIPE_AMP;
	v->a[46463] = anon_sym_AMP_AMP;
	v->a[46464] = anon_sym_PIPE_PIPE;
	v->a[46465] = anon_sym_LT;
	v->a[46466] = anon_sym_GT;
	v->a[46467] = anon_sym_GT_GT;
	v->a[46468] = anon_sym_AMP_GT;
	v->a[46469] = anon_sym_AMP_GT_GT;
	v->a[46470] = anon_sym_LT_AMP;
	v->a[46471] = anon_sym_GT_AMP;
	v->a[46472] = anon_sym_GT_PIPE;
	v->a[46473] = anon_sym_LT_AMP_DASH;
	v->a[46474] = anon_sym_GT_AMP_DASH;
	v->a[46475] = anon_sym_LT_LT;
	v->a[46476] = anon_sym_LT_LT_DASH;
	v->a[46477] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46478] = anon_sym_AMP;
	v->a[46479] = aux_sym_concatenation_token1;
	small_parse_table_2324(v);
}

void	small_parse_table_2324(t_small_parse_table_array *v)
{
	v->a[46480] = anon_sym_DOLLAR;
	v->a[46481] = sym__special_character;
	v->a[46482] = anon_sym_DQUOTE;
	v->a[46483] = sym_raw_string;
	v->a[46484] = aux_sym_number_token1;
	v->a[46485] = aux_sym_number_token2;
	v->a[46486] = anon_sym_DOLLAR_LBRACE;
	v->a[46487] = anon_sym_DOLLAR_LPAREN;
	v->a[46488] = anon_sym_BQUOTE;
	v->a[46489] = anon_sym_DOLLAR_BQUOTE;
	v->a[46490] = aux_sym__simple_variable_name_token1;
	v->a[46491] = sym_word;
	v->a[46492] = anon_sym_SEMI;
	v->a[46493] = 3;
	v->a[46494] = actions(3);
	v->a[46495] = 1;
	v->a[46496] = sym_comment;
	v->a[46497] = actions(2888);
	v->a[46498] = 6;
	v->a[46499] = sym_file_descriptor;
	small_parse_table_2325(v);
}

/* EOF small_parse_table_464.c */
