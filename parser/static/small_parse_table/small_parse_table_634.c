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
	v->a[63400] = actions(2043);
	v->a[63401] = 1;
	v->a[63402] = sym_file_descriptor;
	v->a[63403] = state(718);
	v->a[63404] = 1;
	v->a[63405] = sym_terminator;
	v->a[63406] = actions(802);
	v->a[63407] = 2;
	v->a[63408] = anon_sym_AMP_AMP;
	v->a[63409] = anon_sym_PIPE_PIPE;
	v->a[63410] = actions(804);
	v->a[63411] = 2;
	v->a[63412] = anon_sym_LT_LT;
	v->a[63413] = anon_sym_LT_LT_DASH;
	v->a[63414] = actions(2041);
	v->a[63415] = 2;
	v->a[63416] = anon_sym_LT_AMP_DASH;
	v->a[63417] = anon_sym_GT_AMP_DASH;
	v->a[63418] = actions(800);
	v->a[63419] = 3;
	small_parse_table_3171(v);
}

void	small_parse_table_3171(t_small_parse_table_array *v)
{
	v->a[63420] = anon_sym_SEMI_SEMI;
	v->a[63421] = anon_sym_AMP;
	v->a[63422] = anon_sym_SEMI;
	v->a[63423] = state(1137);
	v->a[63424] = 3;
	v->a[63425] = sym_file_redirect;
	v->a[63426] = sym_heredoc_redirect;
	v->a[63427] = aux_sym_redirected_statement_repeat1;
	v->a[63428] = actions(2039);
	v->a[63429] = 8;
	v->a[63430] = anon_sym_LT;
	v->a[63431] = anon_sym_GT;
	v->a[63432] = anon_sym_GT_GT;
	v->a[63433] = anon_sym_AMP_GT;
	v->a[63434] = anon_sym_AMP_GT_GT;
	v->a[63435] = anon_sym_LT_AMP;
	v->a[63436] = anon_sym_GT_AMP;
	v->a[63437] = anon_sym_GT_PIPE;
	v->a[63438] = 12;
	v->a[63439] = actions(3);
	small_parse_table_3172(v);
}

void	small_parse_table_3172(t_small_parse_table_array *v)
{
	v->a[63440] = 1;
	v->a[63441] = sym_comment;
	v->a[63442] = actions(766);
	v->a[63443] = 1;
	v->a[63444] = anon_sym_PIPE;
	v->a[63445] = actions(2003);
	v->a[63446] = 1;
	v->a[63447] = aux_sym_heredoc_redirect_token1;
	v->a[63448] = actions(2005);
	v->a[63449] = 1;
	v->a[63450] = sym_file_descriptor;
	v->a[63451] = state(757);
	v->a[63452] = 1;
	v->a[63453] = sym_terminator;
	v->a[63454] = actions(764);
	v->a[63455] = 2;
	v->a[63456] = anon_sym_esac;
	v->a[63457] = anon_sym_SEMI_SEMI;
	v->a[63458] = actions(768);
	v->a[63459] = 2;
	small_parse_table_3173(v);
}

void	small_parse_table_3173(t_small_parse_table_array *v)
{
	v->a[63460] = anon_sym_AMP_AMP;
	v->a[63461] = anon_sym_PIPE_PIPE;
	v->a[63462] = actions(770);
	v->a[63463] = 2;
	v->a[63464] = anon_sym_LT_LT;
	v->a[63465] = anon_sym_LT_LT_DASH;
	v->a[63466] = actions(772);
	v->a[63467] = 2;
	v->a[63468] = anon_sym_AMP;
	v->a[63469] = anon_sym_SEMI;
	v->a[63470] = actions(2001);
	v->a[63471] = 2;
	v->a[63472] = anon_sym_LT_AMP_DASH;
	v->a[63473] = anon_sym_GT_AMP_DASH;
	v->a[63474] = state(1123);
	v->a[63475] = 3;
	v->a[63476] = sym_file_redirect;
	v->a[63477] = sym_heredoc_redirect;
	v->a[63478] = aux_sym_redirected_statement_repeat1;
	v->a[63479] = actions(1999);
	small_parse_table_3174(v);
}

void	small_parse_table_3174(t_small_parse_table_array *v)
{
	v->a[63480] = 8;
	v->a[63481] = anon_sym_LT;
	v->a[63482] = anon_sym_GT;
	v->a[63483] = anon_sym_GT_GT;
	v->a[63484] = anon_sym_AMP_GT;
	v->a[63485] = anon_sym_AMP_GT_GT;
	v->a[63486] = anon_sym_LT_AMP;
	v->a[63487] = anon_sym_GT_AMP;
	v->a[63488] = anon_sym_GT_PIPE;
	v->a[63489] = 6;
	v->a[63490] = actions(3);
	v->a[63491] = 1;
	v->a[63492] = sym_comment;
	v->a[63493] = actions(2035);
	v->a[63494] = 1;
	v->a[63495] = aux_sym_concatenation_token1;
	v->a[63496] = actions(2047);
	v->a[63497] = 1;
	v->a[63498] = sym__concat;
	v->a[63499] = state(893);
	small_parse_table_3175(v);
}

/* EOF small_parse_table_634.c */
