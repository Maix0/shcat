/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_494.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2470(t_small_parse_table_array *v)
{
	v->a[49400] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49401] = anon_sym_DOLLAR;
	v->a[49402] = anon_sym_DQUOTE;
	v->a[49403] = sym_raw_string;
	v->a[49404] = sym_number;
	v->a[49405] = anon_sym_DOLLAR_LBRACE;
	v->a[49406] = anon_sym_DOLLAR_LPAREN;
	v->a[49407] = anon_sym_BQUOTE;
	v->a[49408] = sym_word;
	v->a[49409] = actions(1560);
	v->a[49410] = 9;
	v->a[49411] = anon_sym_PIPE;
	v->a[49412] = anon_sym_SEMI_SEMI;
	v->a[49413] = anon_sym_AMP_AMP;
	v->a[49414] = anon_sym_PIPE_PIPE;
	v->a[49415] = anon_sym_LT_LT;
	v->a[49416] = anon_sym_LT_LT_DASH;
	v->a[49417] = aux_sym_heredoc_redirect_token1;
	v->a[49418] = anon_sym_AMP;
	v->a[49419] = anon_sym_SEMI;
	small_parse_table_2471(v);
}

void	small_parse_table_2471(t_small_parse_table_array *v)
{
	v->a[49420] = actions(1562);
	v->a[49421] = 10;
	v->a[49422] = anon_sym_LT;
	v->a[49423] = anon_sym_GT;
	v->a[49424] = anon_sym_GT_GT;
	v->a[49425] = anon_sym_AMP_GT;
	v->a[49426] = anon_sym_AMP_GT_GT;
	v->a[49427] = anon_sym_LT_AMP;
	v->a[49428] = anon_sym_GT_AMP;
	v->a[49429] = anon_sym_GT_PIPE;
	v->a[49430] = anon_sym_LT_AMP_DASH;
	v->a[49431] = anon_sym_GT_AMP_DASH;
	v->a[49432] = 7;
	v->a[49433] = actions(3);
	v->a[49434] = 1;
	v->a[49435] = sym_comment;
	v->a[49436] = actions(1565);
	v->a[49437] = 1;
	v->a[49438] = sym_file_descriptor;
	v->a[49439] = actions(1568);
	small_parse_table_2472(v);
}

void	small_parse_table_2472(t_small_parse_table_array *v)
{
	v->a[49440] = 1;
	v->a[49441] = sym_variable_name;
	v->a[49442] = actions(1614);
	v->a[49443] = 1;
	v->a[49444] = anon_sym_RPAREN;
	v->a[49445] = actions(1558);
	v->a[49446] = 9;
	v->a[49447] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49448] = anon_sym_DOLLAR;
	v->a[49449] = anon_sym_DQUOTE;
	v->a[49450] = sym_raw_string;
	v->a[49451] = sym_number;
	v->a[49452] = anon_sym_DOLLAR_LBRACE;
	v->a[49453] = anon_sym_DOLLAR_LPAREN;
	v->a[49454] = anon_sym_BQUOTE;
	v->a[49455] = sym_word;
	v->a[49456] = actions(1560);
	v->a[49457] = 9;
	v->a[49458] = anon_sym_PIPE;
	v->a[49459] = anon_sym_SEMI_SEMI;
	small_parse_table_2473(v);
}

void	small_parse_table_2473(t_small_parse_table_array *v)
{
	v->a[49460] = anon_sym_AMP_AMP;
	v->a[49461] = anon_sym_PIPE_PIPE;
	v->a[49462] = anon_sym_LT_LT;
	v->a[49463] = anon_sym_LT_LT_DASH;
	v->a[49464] = aux_sym_heredoc_redirect_token1;
	v->a[49465] = anon_sym_AMP;
	v->a[49466] = anon_sym_SEMI;
	v->a[49467] = actions(1562);
	v->a[49468] = 10;
	v->a[49469] = anon_sym_LT;
	v->a[49470] = anon_sym_GT;
	v->a[49471] = anon_sym_GT_GT;
	v->a[49472] = anon_sym_AMP_GT;
	v->a[49473] = anon_sym_AMP_GT_GT;
	v->a[49474] = anon_sym_LT_AMP;
	v->a[49475] = anon_sym_GT_AMP;
	v->a[49476] = anon_sym_GT_PIPE;
	v->a[49477] = anon_sym_LT_AMP_DASH;
	v->a[49478] = anon_sym_GT_AMP_DASH;
	v->a[49479] = 7;
	small_parse_table_2474(v);
}

void	small_parse_table_2474(t_small_parse_table_array *v)
{
	v->a[49480] = actions(3);
	v->a[49481] = 1;
	v->a[49482] = sym_comment;
	v->a[49483] = actions(1565);
	v->a[49484] = 1;
	v->a[49485] = sym_file_descriptor;
	v->a[49486] = actions(1568);
	v->a[49487] = 1;
	v->a[49488] = sym_variable_name;
	v->a[49489] = actions(1617);
	v->a[49490] = 1;
	v->a[49491] = ts_builtin_sym_end;
	v->a[49492] = actions(1558);
	v->a[49493] = 9;
	v->a[49494] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49495] = anon_sym_DOLLAR;
	v->a[49496] = anon_sym_DQUOTE;
	v->a[49497] = sym_raw_string;
	v->a[49498] = sym_number;
	v->a[49499] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2475(v);
}

/* EOF small_parse_table_494.c */
