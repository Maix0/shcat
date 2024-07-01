/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_634.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3170(t_small_parse_table_array *v)
{
	v->a[63400] = sym_raw_string;
	v->a[63401] = sym_number;
	v->a[63402] = anon_sym_DOLLAR_LBRACE;
	v->a[63403] = anon_sym_DOLLAR_LPAREN;
	v->a[63404] = anon_sym_BQUOTE;
	v->a[63405] = sym_word;
	v->a[63406] = 3;
	v->a[63407] = actions(3);
	v->a[63408] = 1;
	v->a[63409] = sym_comment;
	v->a[63410] = actions(2256);
	v->a[63411] = 3;
	v->a[63412] = sym_file_descriptor;
	v->a[63413] = ts_builtin_sym_end;
	v->a[63414] = aux_sym_heredoc_redirect_token1;
	v->a[63415] = actions(2258);
	v->a[63416] = 17;
	v->a[63417] = anon_sym_PIPE;
	v->a[63418] = anon_sym_RPAREN;
	v->a[63419] = anon_sym_SEMI_SEMI;
	small_parse_table_3171(v);
}

void	small_parse_table_3171(t_small_parse_table_array *v)
{
	v->a[63420] = anon_sym_AMP_AMP;
	v->a[63421] = anon_sym_PIPE_PIPE;
	v->a[63422] = anon_sym_LT;
	v->a[63423] = anon_sym_GT;
	v->a[63424] = anon_sym_GT_GT;
	v->a[63425] = anon_sym_LT_AMP;
	v->a[63426] = anon_sym_GT_AMP;
	v->a[63427] = anon_sym_GT_PIPE;
	v->a[63428] = anon_sym_LT_GT;
	v->a[63429] = anon_sym_LT_LT;
	v->a[63430] = anon_sym_LT_LT_DASH;
	v->a[63431] = anon_sym_AMP;
	v->a[63432] = anon_sym_BQUOTE;
	v->a[63433] = anon_sym_SEMI;
	v->a[63434] = 6;
	v->a[63435] = actions(3);
	v->a[63436] = 1;
	v->a[63437] = sym_comment;
	v->a[63438] = actions(2111);
	v->a[63439] = 1;
	small_parse_table_3172(v);
}

void	small_parse_table_3172(t_small_parse_table_array *v)
{
	v->a[63440] = aux_sym_heredoc_redirect_token1;
	v->a[63441] = actions(2176);
	v->a[63442] = 1;
	v->a[63443] = sym_file_descriptor;
	v->a[63444] = state(1167);
	v->a[63445] = 2;
	v->a[63446] = sym_file_redirect;
	v->a[63447] = aux_sym_redirected_statement_repeat2;
	v->a[63448] = actions(1863);
	v->a[63449] = 7;
	v->a[63450] = anon_sym_LT;
	v->a[63451] = anon_sym_GT;
	v->a[63452] = anon_sym_GT_GT;
	v->a[63453] = anon_sym_LT_AMP;
	v->a[63454] = anon_sym_GT_AMP;
	v->a[63455] = anon_sym_GT_PIPE;
	v->a[63456] = anon_sym_LT_GT;
	v->a[63457] = actions(2109);
	v->a[63458] = 9;
	v->a[63459] = anon_sym_PIPE;
	small_parse_table_3173(v);
}

void	small_parse_table_3173(t_small_parse_table_array *v)
{
	v->a[63460] = anon_sym_SEMI_SEMI;
	v->a[63461] = anon_sym_AMP_AMP;
	v->a[63462] = anon_sym_PIPE_PIPE;
	v->a[63463] = anon_sym_LT_LT;
	v->a[63464] = anon_sym_LT_LT_DASH;
	v->a[63465] = anon_sym_AMP;
	v->a[63466] = anon_sym_BQUOTE;
	v->a[63467] = anon_sym_SEMI;
	v->a[63468] = 3;
	v->a[63469] = actions(3);
	v->a[63470] = 1;
	v->a[63471] = sym_comment;
	v->a[63472] = actions(1201);
	v->a[63473] = 3;
	v->a[63474] = sym_file_descriptor;
	v->a[63475] = sym__concat;
	v->a[63476] = sym_variable_name;
	v->a[63477] = actions(1199);
	v->a[63478] = 17;
	v->a[63479] = anon_sym_LT;
	small_parse_table_3174(v);
}

void	small_parse_table_3174(t_small_parse_table_array *v)
{
	v->a[63480] = anon_sym_GT;
	v->a[63481] = anon_sym_GT_GT;
	v->a[63482] = anon_sym_LT_AMP;
	v->a[63483] = anon_sym_GT_AMP;
	v->a[63484] = anon_sym_GT_PIPE;
	v->a[63485] = anon_sym_LT_GT;
	v->a[63486] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63487] = aux_sym_concatenation_token1;
	v->a[63488] = anon_sym_DOLLAR;
	v->a[63489] = anon_sym_DQUOTE;
	v->a[63490] = sym_raw_string;
	v->a[63491] = sym_number;
	v->a[63492] = anon_sym_DOLLAR_LBRACE;
	v->a[63493] = anon_sym_DOLLAR_LPAREN;
	v->a[63494] = anon_sym_BQUOTE;
	v->a[63495] = sym_word;
	v->a[63496] = 3;
	v->a[63497] = actions(3);
	v->a[63498] = 1;
	v->a[63499] = sym_comment;
	small_parse_table_3175(v);
}

/* EOF small_parse_table_634.c */
