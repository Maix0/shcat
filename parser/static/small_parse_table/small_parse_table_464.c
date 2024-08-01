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
	v->a[46403] = actions(597);
	v->a[46404] = 1;
	v->a[46405] = anon_sym_LT_LT;
	v->a[46406] = actions(1983);
	v->a[46407] = 1;
	v->a[46408] = aux_sym_heredoc_redirect_token1;
	v->a[46409] = state(469);
	v->a[46410] = 1;
	v->a[46411] = sym_terminator;
	v->a[46412] = actions(769);
	v->a[46413] = 2;
	v->a[46414] = anon_sym_AMP_AMP;
	v->a[46415] = anon_sym_PIPE_PIPE;
	v->a[46416] = actions(831);
	v->a[46417] = 2;
	v->a[46418] = anon_sym_SEMI_SEMI;
	v->a[46419] = anon_sym_SEMI;
	small_parse_table_2321(v);
}

void	small_parse_table_2321(t_small_parse_table_array *v)
{
	v->a[46420] = actions(1924);
	v->a[46421] = 3;
	v->a[46422] = anon_sym_LT;
	v->a[46423] = anon_sym_GT;
	v->a[46424] = anon_sym_GT_GT;
	v->a[46425] = state(1040);
	v->a[46426] = 3;
	v->a[46427] = sym_file_redirect;
	v->a[46428] = sym_heredoc_redirect;
	v->a[46429] = aux_sym_redirected_statement_repeat1;
	v->a[46430] = 3;
	v->a[46431] = actions(3);
	v->a[46432] = 1;
	v->a[46433] = sym_comment;
	v->a[46434] = actions(2095);
	v->a[46435] = 2;
	v->a[46436] = ts_builtin_sym_end;
	v->a[46437] = aux_sym_heredoc_redirect_token1;
	v->a[46438] = actions(2097);
	v->a[46439] = 11;
	small_parse_table_2322(v);
}

void	small_parse_table_2322(t_small_parse_table_array *v)
{
	v->a[46440] = anon_sym_PIPE;
	v->a[46441] = anon_sym_RPAREN;
	v->a[46442] = anon_sym_SEMI_SEMI;
	v->a[46443] = anon_sym_AMP_AMP;
	v->a[46444] = anon_sym_PIPE_PIPE;
	v->a[46445] = anon_sym_LT;
	v->a[46446] = anon_sym_GT;
	v->a[46447] = anon_sym_GT_GT;
	v->a[46448] = anon_sym_LT_LT;
	v->a[46449] = anon_sym_BQUOTE;
	v->a[46450] = anon_sym_SEMI;
	v->a[46451] = 6;
	v->a[46452] = actions(3);
	v->a[46453] = 1;
	v->a[46454] = sym_comment;
	v->a[46455] = actions(2013);
	v->a[46456] = 1;
	v->a[46457] = sym_string_content;
	v->a[46458] = actions(2017);
	v->a[46459] = 1;
	small_parse_table_2323(v);
}

void	small_parse_table_2323(t_small_parse_table_array *v)
{
	v->a[46460] = sym_variable_name;
	v->a[46461] = actions(2099);
	v->a[46462] = 1;
	v->a[46463] = anon_sym_DQUOTE;
	v->a[46464] = actions(2015);
	v->a[46465] = 2;
	v->a[46466] = aux_sym__simple_variable_name_token1;
	v->a[46467] = aux_sym__multiline_variable_name_token1;
	v->a[46468] = actions(2009);
	v->a[46469] = 8;
	v->a[46470] = anon_sym_BANG;
	v->a[46471] = anon_sym_DASH;
	v->a[46472] = anon_sym_STAR;
	v->a[46473] = anon_sym_QMARK;
	v->a[46474] = anon_sym_DOLLAR;
	v->a[46475] = anon_sym_POUND;
	v->a[46476] = anon_sym_AT;
	v->a[46477] = anon_sym_0;
	v->a[46478] = 5;
	v->a[46479] = actions(3);
	small_parse_table_2324(v);
}

void	small_parse_table_2324(t_small_parse_table_array *v)
{
	v->a[46480] = 1;
	v->a[46481] = sym_comment;
	v->a[46482] = actions(2078);
	v->a[46483] = 1;
	v->a[46484] = aux_sym_heredoc_redirect_token1;
	v->a[46485] = state(1004);
	v->a[46486] = 2;
	v->a[46487] = sym_file_redirect;
	v->a[46488] = aux_sym_redirected_statement_repeat2;
	v->a[46489] = actions(2101);
	v->a[46490] = 3;
	v->a[46491] = anon_sym_LT;
	v->a[46492] = anon_sym_GT;
	v->a[46493] = anon_sym_GT_GT;
	v->a[46494] = actions(2080);
	v->a[46495] = 7;
	v->a[46496] = anon_sym_PIPE;
	v->a[46497] = anon_sym_SEMI_SEMI;
	v->a[46498] = anon_sym_AMP_AMP;
	v->a[46499] = anon_sym_PIPE_PIPE;
	small_parse_table_2325(v);
}

/* EOF small_parse_table_464.c */
