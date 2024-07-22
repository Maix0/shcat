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
	v->a[58400] = actions(1995);
	v->a[58401] = 1;
	v->a[58402] = anon_sym_DQUOTE;
	v->a[58403] = actions(1998);
	v->a[58404] = 1;
	v->a[58405] = anon_sym_DOLLAR_LBRACE;
	v->a[58406] = actions(2001);
	v->a[58407] = 1;
	v->a[58408] = anon_sym_DOLLAR_LPAREN;
	v->a[58409] = actions(2004);
	v->a[58410] = 1;
	v->a[58411] = anon_sym_BQUOTE;
	v->a[58412] = actions(2007);
	v->a[58413] = 1;
	v->a[58414] = sym_extglob_pattern;
	v->a[58415] = state(1050);
	v->a[58416] = 1;
	v->a[58417] = aux_sym_case_statement_repeat1;
	v->a[58418] = state(1682);
	v->a[58419] = 1;
	small_parse_table_2921(v);
}

void	small_parse_table_2921(t_small_parse_table_array *v)
{
	v->a[58420] = sym_case_item;
	v->a[58421] = state(1871);
	v->a[58422] = 2;
	v->a[58423] = sym_concatenation;
	v->a[58424] = sym__extglob_blob;
	v->a[58425] = actions(1983);
	v->a[58426] = 3;
	v->a[58427] = sym_raw_string;
	v->a[58428] = sym_number;
	v->a[58429] = sym_word;
	v->a[58430] = state(1771);
	v->a[58431] = 5;
	v->a[58432] = sym_arithmetic_expansion;
	v->a[58433] = sym_string;
	v->a[58434] = sym_simple_expansion;
	v->a[58435] = sym_expansion;
	v->a[58436] = sym_command_substitution;
	v->a[58437] = 11;
	v->a[58438] = actions(3);
	v->a[58439] = 1;
	small_parse_table_2922(v);
}

void	small_parse_table_2922(t_small_parse_table_array *v)
{
	v->a[58440] = sym_comment;
	v->a[58441] = actions(782);
	v->a[58442] = 1;
	v->a[58443] = anon_sym_PIPE;
	v->a[58444] = actions(784);
	v->a[58445] = 1;
	v->a[58446] = anon_sym_SEMI_SEMI;
	v->a[58447] = actions(786);
	v->a[58448] = 1;
	v->a[58449] = anon_sym_SEMI;
	v->a[58450] = actions(1888);
	v->a[58451] = 1;
	v->a[58452] = aux_sym_heredoc_redirect_token1;
	v->a[58453] = actions(1945);
	v->a[58454] = 1;
	v->a[58455] = sym_file_descriptor;
	v->a[58456] = state(568);
	v->a[58457] = 1;
	v->a[58458] = sym_terminator;
	v->a[58459] = actions(790);
	small_parse_table_2923(v);
}

void	small_parse_table_2923(t_small_parse_table_array *v)
{
	v->a[58460] = 2;
	v->a[58461] = anon_sym_LT_LT;
	v->a[58462] = anon_sym_LT_LT_DASH;
	v->a[58463] = actions(1028);
	v->a[58464] = 2;
	v->a[58465] = anon_sym_AMP_AMP;
	v->a[58466] = anon_sym_PIPE_PIPE;
	v->a[58467] = state(1194);
	v->a[58468] = 3;
	v->a[58469] = sym_file_redirect;
	v->a[58470] = sym_heredoc_redirect;
	v->a[58471] = aux_sym_redirected_statement_repeat1;
	v->a[58472] = actions(1941);
	v->a[58473] = 7;
	v->a[58474] = anon_sym_LT;
	v->a[58475] = anon_sym_GT;
	v->a[58476] = anon_sym_GT_GT;
	v->a[58477] = anon_sym_LT_AMP;
	v->a[58478] = anon_sym_GT_AMP;
	v->a[58479] = anon_sym_GT_PIPE;
	small_parse_table_2924(v);
}

void	small_parse_table_2924(t_small_parse_table_array *v)
{
	v->a[58480] = anon_sym_LT_GT;
	v->a[58481] = 3;
	v->a[58482] = actions(3);
	v->a[58483] = 1;
	v->a[58484] = sym_comment;
	v->a[58485] = actions(523);
	v->a[58486] = 3;
	v->a[58487] = sym_file_descriptor;
	v->a[58488] = sym__concat;
	v->a[58489] = sym_variable_name;
	v->a[58490] = actions(521);
	v->a[58491] = 17;
	v->a[58492] = anon_sym_LT;
	v->a[58493] = anon_sym_GT;
	v->a[58494] = anon_sym_GT_GT;
	v->a[58495] = anon_sym_LT_AMP;
	v->a[58496] = anon_sym_GT_AMP;
	v->a[58497] = anon_sym_GT_PIPE;
	v->a[58498] = anon_sym_LT_GT;
	v->a[58499] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2925(v);
}

/* EOF small_parse_table_584.c */
