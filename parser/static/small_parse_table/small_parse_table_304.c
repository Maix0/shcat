/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_304.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1520(t_small_parse_table_array *v)
{
	v->a[30400] = sym_file_redirect;
	v->a[30401] = sym_heredoc_redirect;
	v->a[30402] = aux_sym_redirected_statement_repeat1;
	v->a[30403] = actions(1000);
	v->a[30404] = 10;
	v->a[30405] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30406] = anon_sym_DOLLAR;
	v->a[30407] = anon_sym_DQUOTE;
	v->a[30408] = sym_raw_string;
	v->a[30409] = aux_sym_number_token1;
	v->a[30410] = aux_sym_number_token2;
	v->a[30411] = anon_sym_DOLLAR_LBRACE;
	v->a[30412] = anon_sym_DOLLAR_LPAREN;
	v->a[30413] = anon_sym_BQUOTE;
	v->a[30414] = sym_word;
	v->a[30415] = actions(1002);
	v->a[30416] = 19;
	v->a[30417] = anon_sym_PIPE;
	v->a[30418] = anon_sym_SEMI_SEMI;
	v->a[30419] = anon_sym_AMP_AMP;
	small_parse_table_1521(v);
}

void	small_parse_table_1521(t_small_parse_table_array *v)
{
	v->a[30420] = anon_sym_PIPE_PIPE;
	v->a[30421] = anon_sym_LT;
	v->a[30422] = anon_sym_GT;
	v->a[30423] = anon_sym_GT_GT;
	v->a[30424] = anon_sym_AMP_GT;
	v->a[30425] = anon_sym_AMP_GT_GT;
	v->a[30426] = anon_sym_LT_AMP;
	v->a[30427] = anon_sym_GT_AMP;
	v->a[30428] = anon_sym_GT_PIPE;
	v->a[30429] = anon_sym_LT_AMP_DASH;
	v->a[30430] = anon_sym_GT_AMP_DASH;
	v->a[30431] = anon_sym_LT_LT;
	v->a[30432] = anon_sym_LT_LT_DASH;
	v->a[30433] = aux_sym_heredoc_redirect_token1;
	v->a[30434] = anon_sym_AMP;
	v->a[30435] = anon_sym_SEMI;
	v->a[30436] = 14;
	v->a[30437] = actions(3);
	v->a[30438] = 1;
	v->a[30439] = sym_comment;
	small_parse_table_1522(v);
}

void	small_parse_table_1522(t_small_parse_table_array *v)
{
	v->a[30440] = actions(638);
	v->a[30441] = 1;
	v->a[30442] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30443] = actions(641);
	v->a[30444] = 1;
	v->a[30445] = anon_sym_DOLLAR;
	v->a[30446] = actions(644);
	v->a[30447] = 1;
	v->a[30448] = anon_sym_DQUOTE;
	v->a[30449] = actions(647);
	v->a[30450] = 1;
	v->a[30451] = aux_sym_number_token1;
	v->a[30452] = actions(650);
	v->a[30453] = 1;
	v->a[30454] = aux_sym_number_token2;
	v->a[30455] = actions(653);
	v->a[30456] = 1;
	v->a[30457] = anon_sym_DOLLAR_LBRACE;
	v->a[30458] = actions(656);
	v->a[30459] = 1;
	small_parse_table_1523(v);
}

void	small_parse_table_1523(t_small_parse_table_array *v)
{
	v->a[30460] = anon_sym_DOLLAR_LPAREN;
	v->a[30461] = actions(659);
	v->a[30462] = 1;
	v->a[30463] = anon_sym_BQUOTE;
	v->a[30464] = actions(662);
	v->a[30465] = 2;
	v->a[30466] = sym_file_descriptor;
	v->a[30467] = sym_variable_name;
	v->a[30468] = actions(1183);
	v->a[30469] = 2;
	v->a[30470] = sym_raw_string;
	v->a[30471] = sym_word;
	v->a[30472] = state(317);
	v->a[30473] = 2;
	v->a[30474] = sym_concatenation;
	v->a[30475] = aux_sym_for_statement_repeat1;
	v->a[30476] = state(771);
	v->a[30477] = 6;
	v->a[30478] = sym_arithmetic_expansion;
	v->a[30479] = sym_string;
	small_parse_table_1524(v);
}

void	small_parse_table_1524(t_small_parse_table_array *v)
{
	v->a[30480] = sym_number;
	v->a[30481] = sym_simple_expansion;
	v->a[30482] = sym_expansion;
	v->a[30483] = sym_command_substitution;
	v->a[30484] = actions(636);
	v->a[30485] = 16;
	v->a[30486] = anon_sym_PIPE;
	v->a[30487] = anon_sym_AMP_AMP;
	v->a[30488] = anon_sym_PIPE_PIPE;
	v->a[30489] = anon_sym_LT;
	v->a[30490] = anon_sym_GT;
	v->a[30491] = anon_sym_GT_GT;
	v->a[30492] = anon_sym_AMP_GT;
	v->a[30493] = anon_sym_AMP_GT_GT;
	v->a[30494] = anon_sym_LT_AMP;
	v->a[30495] = anon_sym_GT_AMP;
	v->a[30496] = anon_sym_GT_PIPE;
	v->a[30497] = anon_sym_LT_AMP_DASH;
	v->a[30498] = anon_sym_GT_AMP_DASH;
	v->a[30499] = anon_sym_LT_LT;
	small_parse_table_1525(v);
}

/* EOF small_parse_table_304.c */
