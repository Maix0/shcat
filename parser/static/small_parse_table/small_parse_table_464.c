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
	v->a[46400] = 13;
	v->a[46401] = anon_sym_PIPE;
	v->a[46402] = anon_sym_EQ;
	v->a[46403] = anon_sym_LT;
	v->a[46404] = anon_sym_GT;
	v->a[46405] = anon_sym_GT_GT;
	v->a[46406] = anon_sym_LT_LT;
	v->a[46407] = anon_sym_CARET;
	v->a[46408] = anon_sym_AMP;
	v->a[46409] = anon_sym_PLUS;
	v->a[46410] = anon_sym_DASH;
	v->a[46411] = anon_sym_STAR;
	v->a[46412] = anon_sym_SLASH;
	v->a[46413] = anon_sym_PERCENT;
	v->a[46414] = actions(1497);
	v->a[46415] = 20;
	v->a[46416] = anon_sym_RPAREN;
	v->a[46417] = anon_sym_AMP_AMP;
	v->a[46418] = anon_sym_PIPE_PIPE;
	v->a[46419] = anon_sym_PLUS_EQ;
	small_parse_table_2321(v);
}

void	small_parse_table_2321(t_small_parse_table_array *v)
{
	v->a[46420] = anon_sym_DASH_EQ;
	v->a[46421] = anon_sym_STAR_EQ;
	v->a[46422] = anon_sym_SLASH_EQ;
	v->a[46423] = anon_sym_PERCENT_EQ;
	v->a[46424] = anon_sym_LT_LT_EQ;
	v->a[46425] = anon_sym_GT_GT_EQ;
	v->a[46426] = anon_sym_AMP_EQ;
	v->a[46427] = anon_sym_CARET_EQ;
	v->a[46428] = anon_sym_PIPE_EQ;
	v->a[46429] = anon_sym_EQ_EQ;
	v->a[46430] = anon_sym_BANG_EQ;
	v->a[46431] = anon_sym_LT_EQ;
	v->a[46432] = anon_sym_GT_EQ;
	v->a[46433] = anon_sym_QMARK;
	v->a[46434] = anon_sym_PLUS_PLUS2;
	v->a[46435] = anon_sym_DASH_DASH2;
	v->a[46436] = 3;
	v->a[46437] = actions(3);
	v->a[46438] = 1;
	v->a[46439] = sym_comment;
	small_parse_table_2322(v);
}

void	small_parse_table_2322(t_small_parse_table_array *v)
{
	v->a[46440] = actions(1188);
	v->a[46441] = 3;
	v->a[46442] = sym_file_descriptor;
	v->a[46443] = sym__concat;
	v->a[46444] = ts_builtin_sym_end;
	v->a[46445] = actions(1186);
	v->a[46446] = 30;
	v->a[46447] = anon_sym_PIPE;
	v->a[46448] = anon_sym_SEMI_SEMI;
	v->a[46449] = anon_sym_AMP_AMP;
	v->a[46450] = anon_sym_PIPE_PIPE;
	v->a[46451] = anon_sym_LT;
	v->a[46452] = anon_sym_GT;
	v->a[46453] = anon_sym_GT_GT;
	v->a[46454] = anon_sym_AMP_GT;
	v->a[46455] = anon_sym_AMP_GT_GT;
	v->a[46456] = anon_sym_LT_AMP;
	v->a[46457] = anon_sym_GT_AMP;
	v->a[46458] = anon_sym_GT_PIPE;
	v->a[46459] = anon_sym_LT_AMP_DASH;
	small_parse_table_2323(v);
}

void	small_parse_table_2323(t_small_parse_table_array *v)
{
	v->a[46460] = anon_sym_GT_AMP_DASH;
	v->a[46461] = anon_sym_LT_LT;
	v->a[46462] = anon_sym_LT_LT_DASH;
	v->a[46463] = aux_sym_heredoc_redirect_token1;
	v->a[46464] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46465] = anon_sym_AMP;
	v->a[46466] = aux_sym_concatenation_token1;
	v->a[46467] = anon_sym_DOLLAR;
	v->a[46468] = anon_sym_DQUOTE;
	v->a[46469] = sym_raw_string;
	v->a[46470] = aux_sym_number_token1;
	v->a[46471] = aux_sym_number_token2;
	v->a[46472] = anon_sym_DOLLAR_LBRACE;
	v->a[46473] = anon_sym_DOLLAR_LPAREN;
	v->a[46474] = anon_sym_BQUOTE;
	v->a[46475] = sym_word;
	v->a[46476] = anon_sym_SEMI;
	v->a[46477] = 3;
	v->a[46478] = actions(3);
	v->a[46479] = 1;
	small_parse_table_2324(v);
}

void	small_parse_table_2324(t_small_parse_table_array *v)
{
	v->a[46480] = sym_comment;
	v->a[46481] = actions(1192);
	v->a[46482] = 3;
	v->a[46483] = sym_file_descriptor;
	v->a[46484] = sym__concat;
	v->a[46485] = ts_builtin_sym_end;
	v->a[46486] = actions(1190);
	v->a[46487] = 30;
	v->a[46488] = anon_sym_PIPE;
	v->a[46489] = anon_sym_SEMI_SEMI;
	v->a[46490] = anon_sym_AMP_AMP;
	v->a[46491] = anon_sym_PIPE_PIPE;
	v->a[46492] = anon_sym_LT;
	v->a[46493] = anon_sym_GT;
	v->a[46494] = anon_sym_GT_GT;
	v->a[46495] = anon_sym_AMP_GT;
	v->a[46496] = anon_sym_AMP_GT_GT;
	v->a[46497] = anon_sym_LT_AMP;
	v->a[46498] = anon_sym_GT_AMP;
	v->a[46499] = anon_sym_GT_PIPE;
	small_parse_table_2325(v);
}

/* EOF small_parse_table_464.c */
