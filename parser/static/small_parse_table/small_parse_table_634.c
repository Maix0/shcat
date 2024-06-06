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
	v->a[63400] = 31;
	v->a[63401] = anon_sym_PIPE;
	v->a[63402] = anon_sym_SEMI_SEMI;
	v->a[63403] = anon_sym_PIPE_AMP;
	v->a[63404] = anon_sym_AMP_AMP;
	v->a[63405] = anon_sym_PIPE_PIPE;
	v->a[63406] = anon_sym_LT;
	v->a[63407] = anon_sym_GT;
	v->a[63408] = anon_sym_GT_GT;
	v->a[63409] = anon_sym_AMP_GT;
	v->a[63410] = anon_sym_AMP_GT_GT;
	v->a[63411] = anon_sym_LT_AMP;
	v->a[63412] = anon_sym_GT_AMP;
	v->a[63413] = anon_sym_GT_PIPE;
	v->a[63414] = anon_sym_LT_AMP_DASH;
	v->a[63415] = anon_sym_GT_AMP_DASH;
	v->a[63416] = anon_sym_LT_LT;
	v->a[63417] = anon_sym_LT_LT_DASH;
	v->a[63418] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63419] = anon_sym_AMP;
	small_parse_table_3171(v);
}

void	small_parse_table_3171(t_small_parse_table_array *v)
{
	v->a[63420] = anon_sym_DOLLAR;
	v->a[63421] = sym__special_character;
	v->a[63422] = anon_sym_DQUOTE;
	v->a[63423] = sym_raw_string;
	v->a[63424] = aux_sym_number_token1;
	v->a[63425] = aux_sym_number_token2;
	v->a[63426] = anon_sym_DOLLAR_LBRACE;
	v->a[63427] = anon_sym_DOLLAR_LPAREN;
	v->a[63428] = anon_sym_BQUOTE;
	v->a[63429] = anon_sym_DOLLAR_BQUOTE;
	v->a[63430] = sym_word;
	v->a[63431] = anon_sym_SEMI;
	v->a[63432] = 6;
	v->a[63433] = actions(3);
	v->a[63434] = 1;
	v->a[63435] = sym_comment;
	v->a[63436] = actions(828);
	v->a[63437] = 1;
	v->a[63438] = sym_file_descriptor;
	v->a[63439] = actions(4075);
	small_parse_table_3172(v);
}

void	small_parse_table_3172(t_small_parse_table_array *v)
{
	v->a[63440] = 1;
	v->a[63441] = sym_variable_name;
	v->a[63442] = actions(4073);
	v->a[63443] = 2;
	v->a[63444] = aux_sym__simple_variable_name_token1;
	v->a[63445] = aux_sym__multiline_variable_name_token1;
	v->a[63446] = actions(4071);
	v->a[63447] = 9;
	v->a[63448] = anon_sym_BANG;
	v->a[63449] = anon_sym_DASH;
	v->a[63450] = anon_sym_STAR;
	v->a[63451] = anon_sym_QMARK;
	v->a[63452] = anon_sym_DOLLAR;
	v->a[63453] = anon_sym_POUND;
	v->a[63454] = anon_sym_AT;
	v->a[63455] = anon_sym_0;
	v->a[63456] = anon_sym__;
	v->a[63457] = actions(826);
	v->a[63458] = 23;
	v->a[63459] = anon_sym_esac;
	small_parse_table_3173(v);
}

void	small_parse_table_3173(t_small_parse_table_array *v)
{
	v->a[63460] = anon_sym_PIPE;
	v->a[63461] = anon_sym_SEMI_SEMI;
	v->a[63462] = anon_sym_SEMI_AMP;
	v->a[63463] = anon_sym_SEMI_SEMI_AMP;
	v->a[63464] = anon_sym_PIPE_AMP;
	v->a[63465] = anon_sym_AMP_AMP;
	v->a[63466] = anon_sym_PIPE_PIPE;
	v->a[63467] = anon_sym_LT;
	v->a[63468] = anon_sym_GT;
	v->a[63469] = anon_sym_GT_GT;
	v->a[63470] = anon_sym_AMP_GT;
	v->a[63471] = anon_sym_AMP_GT_GT;
	v->a[63472] = anon_sym_LT_AMP;
	v->a[63473] = anon_sym_GT_AMP;
	v->a[63474] = anon_sym_GT_PIPE;
	v->a[63475] = anon_sym_LT_AMP_DASH;
	v->a[63476] = anon_sym_GT_AMP_DASH;
	v->a[63477] = anon_sym_LT_LT;
	v->a[63478] = anon_sym_LT_LT_DASH;
	v->a[63479] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3174(v);
}

void	small_parse_table_3174(t_small_parse_table_array *v)
{
	v->a[63480] = anon_sym_AMP;
	v->a[63481] = anon_sym_SEMI;
	v->a[63482] = 6;
	v->a[63483] = actions(3);
	v->a[63484] = 1;
	v->a[63485] = sym_comment;
	v->a[63486] = actions(3442);
	v->a[63487] = 1;
	v->a[63488] = aux_sym_concatenation_token1;
	v->a[63489] = actions(4077);
	v->a[63490] = 1;
	v->a[63491] = sym__concat;
	v->a[63492] = state(858);
	v->a[63493] = 1;
	v->a[63494] = aux_sym_concatenation_repeat1;
	v->a[63495] = actions(2690);
	v->a[63496] = 4;
	v->a[63497] = sym_file_descriptor;
	v->a[63498] = sym_test_operator;
	v->a[63499] = sym__brace_start;
	small_parse_table_3175(v);
}

/* EOF small_parse_table_634.c */
