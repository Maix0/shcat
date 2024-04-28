/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1674.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8370(t_small_parse_table_array *v)
{
	v->a[167400] = actions(7230);
	v->a[167401] = 1;
	v->a[167402] = anon_sym_DQUOTE;
	v->a[167403] = actions(7234);
	v->a[167404] = 1;
	v->a[167405] = anon_sym_DOLLAR_LBRACE;
	v->a[167406] = actions(7236);
	v->a[167407] = 1;
	v->a[167408] = anon_sym_BQUOTE;
	v->a[167409] = actions(7238);
	v->a[167410] = 1;
	v->a[167411] = anon_sym_DOLLAR_BQUOTE;
	v->a[167412] = actions(7549);
	v->a[167413] = 1;
	v->a[167414] = anon_sym_esac;
	v->a[167415] = state(6426);
	v->a[167416] = 1;
	v->a[167417] = aux_sym__literal_repeat1;
	v->a[167418] = state(7315);
	v->a[167419] = 1;
	small_parse_table_8371(v);
}

void	small_parse_table_8371(t_small_parse_table_array *v)
{
	v->a[167420] = sym_last_case_item;
	v->a[167421] = actions(7224);
	v->a[167422] = 2;
	v->a[167423] = anon_sym_LPAREN_LPAREN;
	v->a[167424] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[167425] = actions(7232);
	v->a[167426] = 2;
	v->a[167427] = sym_raw_string;
	v->a[167428] = sym_ansi_c_string;
	v->a[167429] = actions(7240);
	v->a[167430] = 2;
	v->a[167431] = anon_sym_LT_LPAREN;
	v->a[167432] = anon_sym_GT_LPAREN;
	v->a[167433] = state(3437);
	v->a[167434] = 2;
	v->a[167435] = sym_case_item;
	v->a[167436] = aux_sym_case_statement_repeat1;
	v->a[167437] = state(6695);
	v->a[167438] = 2;
	v->a[167439] = sym_concatenation;
	small_parse_table_8372(v);
}

void	small_parse_table_8372(t_small_parse_table_array *v)
{
	v->a[167440] = sym__extglob_blob;
	v->a[167441] = state(6303);
	v->a[167442] = 9;
	v->a[167443] = sym_arithmetic_expansion;
	v->a[167444] = sym_brace_expression;
	v->a[167445] = sym_string;
	v->a[167446] = sym_translated_string;
	v->a[167447] = sym_number;
	v->a[167448] = sym_simple_expansion;
	v->a[167449] = sym_expansion;
	v->a[167450] = sym_command_substitution;
	v->a[167451] = sym_process_substitution;
	v->a[167452] = 3;
	v->a[167453] = actions(71);
	v->a[167454] = 1;
	v->a[167455] = sym_comment;
	v->a[167456] = actions(6807);
	v->a[167457] = 14;
	v->a[167458] = anon_sym_EQ;
	v->a[167459] = anon_sym_PIPE;
	small_parse_table_8373(v);
}

void	small_parse_table_8373(t_small_parse_table_array *v)
{
	v->a[167460] = anon_sym_CARET;
	v->a[167461] = anon_sym_AMP;
	v->a[167462] = anon_sym_LT;
	v->a[167463] = anon_sym_GT;
	v->a[167464] = anon_sym_LT_LT;
	v->a[167465] = anon_sym_GT_GT;
	v->a[167466] = anon_sym_PLUS;
	v->a[167467] = anon_sym_DASH;
	v->a[167468] = anon_sym_STAR;
	v->a[167469] = anon_sym_SLASH;
	v->a[167470] = anon_sym_PERCENT;
	v->a[167471] = anon_sym_STAR_STAR;
	v->a[167472] = actions(6805);
	v->a[167473] = 23;
	v->a[167474] = sym_test_operator;
	v->a[167475] = anon_sym_PLUS_PLUS;
	v->a[167476] = anon_sym_DASH_DASH;
	v->a[167477] = anon_sym_PLUS_EQ;
	v->a[167478] = anon_sym_DASH_EQ;
	v->a[167479] = anon_sym_STAR_EQ;
	small_parse_table_8374(v);
}

void	small_parse_table_8374(t_small_parse_table_array *v)
{
	v->a[167480] = anon_sym_SLASH_EQ;
	v->a[167481] = anon_sym_PERCENT_EQ;
	v->a[167482] = anon_sym_STAR_STAR_EQ;
	v->a[167483] = anon_sym_LT_LT_EQ;
	v->a[167484] = anon_sym_GT_GT_EQ;
	v->a[167485] = anon_sym_AMP_EQ;
	v->a[167486] = anon_sym_CARET_EQ;
	v->a[167487] = anon_sym_PIPE_EQ;
	v->a[167488] = anon_sym_PIPE_PIPE;
	v->a[167489] = anon_sym_AMP_AMP;
	v->a[167490] = anon_sym_EQ_EQ;
	v->a[167491] = anon_sym_BANG_EQ;
	v->a[167492] = anon_sym_LT_EQ;
	v->a[167493] = anon_sym_GT_EQ;
	v->a[167494] = anon_sym_RPAREN;
	v->a[167495] = anon_sym_EQ_TILDE;
	v->a[167496] = anon_sym_QMARK;
	v->a[167497] = 20;
	v->a[167498] = actions(71);
	v->a[167499] = 1;
	small_parse_table_8375(v);
}

/* EOF small_parse_table_1674.c */
