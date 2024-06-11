/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_894.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4470(t_small_parse_table_array *v)
{
	v->a[89400] = anon_sym_GT_GT;
	v->a[89401] = anon_sym_AMP_GT;
	v->a[89402] = anon_sym_AMP_GT_GT;
	v->a[89403] = anon_sym_LT_AMP;
	v->a[89404] = anon_sym_GT_AMP;
	v->a[89405] = anon_sym_GT_PIPE;
	v->a[89406] = anon_sym_LT_AMP_DASH;
	v->a[89407] = anon_sym_GT_AMP_DASH;
	v->a[89408] = aux_sym_concatenation_token1;
	v->a[89409] = 10;
	v->a[89410] = actions(3);
	v->a[89411] = 1;
	v->a[89412] = sym_comment;
	v->a[89413] = actions(1513);
	v->a[89414] = 1;
	v->a[89415] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89416] = actions(1515);
	v->a[89417] = 1;
	v->a[89418] = anon_sym_DOLLAR;
	v->a[89419] = actions(1517);
	small_parse_table_4471(v);
}

void	small_parse_table_4471(t_small_parse_table_array *v)
{
	v->a[89420] = 1;
	v->a[89421] = anon_sym_DQUOTE;
	v->a[89422] = actions(1519);
	v->a[89423] = 1;
	v->a[89424] = anon_sym_DOLLAR_LBRACE;
	v->a[89425] = actions(1521);
	v->a[89426] = 1;
	v->a[89427] = anon_sym_DOLLAR_LPAREN;
	v->a[89428] = actions(1523);
	v->a[89429] = 1;
	v->a[89430] = anon_sym_BQUOTE;
	v->a[89431] = state(640);
	v->a[89432] = 2;
	v->a[89433] = sym_concatenation;
	v->a[89434] = aux_sym_for_statement_repeat1;
	v->a[89435] = actions(1511);
	v->a[89436] = 3;
	v->a[89437] = sym_raw_string;
	v->a[89438] = sym_number;
	v->a[89439] = sym_word;
	small_parse_table_4472(v);
}

void	small_parse_table_4472(t_small_parse_table_array *v)
{
	v->a[89440] = state(1028);
	v->a[89441] = 5;
	v->a[89442] = sym_arithmetic_expansion;
	v->a[89443] = sym_string;
	v->a[89444] = sym_simple_expansion;
	v->a[89445] = sym_expansion;
	v->a[89446] = sym_command_substitution;
	v->a[89447] = 10;
	v->a[89448] = actions(3);
	v->a[89449] = 1;
	v->a[89450] = sym_comment;
	v->a[89451] = actions(1513);
	v->a[89452] = 1;
	v->a[89453] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89454] = actions(1515);
	v->a[89455] = 1;
	v->a[89456] = anon_sym_DOLLAR;
	v->a[89457] = actions(1517);
	v->a[89458] = 1;
	v->a[89459] = anon_sym_DQUOTE;
	small_parse_table_4473(v);
}

void	small_parse_table_4473(t_small_parse_table_array *v)
{
	v->a[89460] = actions(1519);
	v->a[89461] = 1;
	v->a[89462] = anon_sym_DOLLAR_LBRACE;
	v->a[89463] = actions(1521);
	v->a[89464] = 1;
	v->a[89465] = anon_sym_DOLLAR_LPAREN;
	v->a[89466] = actions(1523);
	v->a[89467] = 1;
	v->a[89468] = anon_sym_BQUOTE;
	v->a[89469] = state(638);
	v->a[89470] = 2;
	v->a[89471] = sym_concatenation;
	v->a[89472] = aux_sym_for_statement_repeat1;
	v->a[89473] = actions(1511);
	v->a[89474] = 3;
	v->a[89475] = sym_raw_string;
	v->a[89476] = sym_number;
	v->a[89477] = sym_word;
	v->a[89478] = state(1028);
	v->a[89479] = 5;
	small_parse_table_4474(v);
}

void	small_parse_table_4474(t_small_parse_table_array *v)
{
	v->a[89480] = sym_arithmetic_expansion;
	v->a[89481] = sym_string;
	v->a[89482] = sym_simple_expansion;
	v->a[89483] = sym_expansion;
	v->a[89484] = sym_command_substitution;
	v->a[89485] = 3;
	v->a[89486] = actions(1094);
	v->a[89487] = 1;
	v->a[89488] = sym_comment;
	v->a[89489] = actions(2736);
	v->a[89490] = 7;
	v->a[89491] = anon_sym_PIPE;
	v->a[89492] = anon_sym_LT;
	v->a[89493] = anon_sym_GT;
	v->a[89494] = anon_sym_AMP_GT;
	v->a[89495] = anon_sym_LT_AMP;
	v->a[89496] = anon_sym_GT_AMP;
	v->a[89497] = anon_sym_LT_LT;
	v->a[89498] = actions(2734);
	v->a[89499] = 9;
	small_parse_table_4475(v);
}

/* EOF small_parse_table_894.c */
