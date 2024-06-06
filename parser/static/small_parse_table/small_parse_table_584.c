/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_584.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2920(t_small_parse_table_array *v)
{
	v->a[58400] = actions(3627);
	v->a[58401] = 9;
	v->a[58402] = anon_sym_PIPE;
	v->a[58403] = anon_sym_SEMI_SEMI;
	v->a[58404] = anon_sym_PIPE_AMP;
	v->a[58405] = anon_sym_AMP_AMP;
	v->a[58406] = anon_sym_PIPE_PIPE;
	v->a[58407] = anon_sym_LT_LT;
	v->a[58408] = anon_sym_LT_LT_DASH;
	v->a[58409] = anon_sym_AMP;
	v->a[58410] = anon_sym_SEMI;
	v->a[58411] = actions(3629);
	v->a[58412] = 10;
	v->a[58413] = anon_sym_LT;
	v->a[58414] = anon_sym_GT;
	v->a[58415] = anon_sym_GT_GT;
	v->a[58416] = anon_sym_AMP_GT;
	v->a[58417] = anon_sym_AMP_GT_GT;
	v->a[58418] = anon_sym_LT_AMP;
	v->a[58419] = anon_sym_GT_AMP;
	small_parse_table_2921(v);
}

void	small_parse_table_2921(t_small_parse_table_array *v)
{
	v->a[58420] = anon_sym_GT_PIPE;
	v->a[58421] = anon_sym_LT_AMP_DASH;
	v->a[58422] = anon_sym_GT_AMP_DASH;
	v->a[58423] = actions(3625);
	v->a[58424] = 12;
	v->a[58425] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58426] = anon_sym_DOLLAR;
	v->a[58427] = sym__special_character;
	v->a[58428] = anon_sym_DQUOTE;
	v->a[58429] = sym_raw_string;
	v->a[58430] = aux_sym_number_token1;
	v->a[58431] = aux_sym_number_token2;
	v->a[58432] = anon_sym_DOLLAR_LBRACE;
	v->a[58433] = anon_sym_DOLLAR_LPAREN;
	v->a[58434] = anon_sym_BQUOTE;
	v->a[58435] = anon_sym_DOLLAR_BQUOTE;
	v->a[58436] = sym_word;
	v->a[58437] = 8;
	v->a[58438] = actions(3);
	v->a[58439] = 1;
	small_parse_table_2922(v);
}

void	small_parse_table_2922(t_small_parse_table_array *v)
{
	v->a[58440] = sym_comment;
	v->a[58441] = actions(3632);
	v->a[58442] = 1;
	v->a[58443] = aux_sym_heredoc_redirect_token1;
	v->a[58444] = actions(3634);
	v->a[58445] = 1;
	v->a[58446] = sym_file_descriptor;
	v->a[58447] = actions(3868);
	v->a[58448] = 1;
	v->a[58449] = anon_sym_RPAREN;
	v->a[58450] = actions(3637);
	v->a[58451] = 3;
	v->a[58452] = sym_variable_name;
	v->a[58453] = sym_test_operator;
	v->a[58454] = sym__brace_start;
	v->a[58455] = actions(3627);
	v->a[58456] = 9;
	v->a[58457] = anon_sym_PIPE;
	v->a[58458] = anon_sym_SEMI_SEMI;
	v->a[58459] = anon_sym_PIPE_AMP;
	small_parse_table_2923(v);
}

void	small_parse_table_2923(t_small_parse_table_array *v)
{
	v->a[58460] = anon_sym_AMP_AMP;
	v->a[58461] = anon_sym_PIPE_PIPE;
	v->a[58462] = anon_sym_LT_LT;
	v->a[58463] = anon_sym_LT_LT_DASH;
	v->a[58464] = anon_sym_AMP;
	v->a[58465] = anon_sym_SEMI;
	v->a[58466] = actions(3629);
	v->a[58467] = 10;
	v->a[58468] = anon_sym_LT;
	v->a[58469] = anon_sym_GT;
	v->a[58470] = anon_sym_GT_GT;
	v->a[58471] = anon_sym_AMP_GT;
	v->a[58472] = anon_sym_AMP_GT_GT;
	v->a[58473] = anon_sym_LT_AMP;
	v->a[58474] = anon_sym_GT_AMP;
	v->a[58475] = anon_sym_GT_PIPE;
	v->a[58476] = anon_sym_LT_AMP_DASH;
	v->a[58477] = anon_sym_GT_AMP_DASH;
	v->a[58478] = actions(3625);
	v->a[58479] = 12;
	small_parse_table_2924(v);
}

void	small_parse_table_2924(t_small_parse_table_array *v)
{
	v->a[58480] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58481] = anon_sym_DOLLAR;
	v->a[58482] = sym__special_character;
	v->a[58483] = anon_sym_DQUOTE;
	v->a[58484] = sym_raw_string;
	v->a[58485] = aux_sym_number_token1;
	v->a[58486] = aux_sym_number_token2;
	v->a[58487] = anon_sym_DOLLAR_LBRACE;
	v->a[58488] = anon_sym_DOLLAR_LPAREN;
	v->a[58489] = anon_sym_BQUOTE;
	v->a[58490] = anon_sym_DOLLAR_BQUOTE;
	v->a[58491] = sym_word;
	v->a[58492] = 8;
	v->a[58493] = actions(3);
	v->a[58494] = 1;
	v->a[58495] = sym_comment;
	v->a[58496] = actions(3632);
	v->a[58497] = 1;
	v->a[58498] = aux_sym_heredoc_redirect_token1;
	v->a[58499] = actions(3634);
	small_parse_table_2925(v);
}

/* EOF small_parse_table_584.c */
