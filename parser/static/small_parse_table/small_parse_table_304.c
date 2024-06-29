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
	v->a[30400] = 1;
	v->a[30401] = sym_command_name;
	v->a[30402] = state(624);
	v->a[30403] = 1;
	v->a[30404] = sym_concatenation;
	v->a[30405] = state(747);
	v->a[30406] = 1;
	v->a[30407] = sym_variable_assignment;
	v->a[30408] = state(765);
	v->a[30409] = 1;
	v->a[30410] = aux_sym_command_repeat1;
	v->a[30411] = state(1283);
	v->a[30412] = 1;
	v->a[30413] = sym_subshell;
	v->a[30414] = state(1298);
	v->a[30415] = 1;
	v->a[30416] = sym_command;
	v->a[30417] = state(1343);
	v->a[30418] = 1;
	v->a[30419] = sym_file_redirect;
	small_parse_table_1521(v);
}

void	small_parse_table_1521(t_small_parse_table_array *v)
{
	v->a[30420] = actions(1066);
	v->a[30421] = 2;
	v->a[30422] = anon_sym_LT_AMP_DASH;
	v->a[30423] = anon_sym_GT_AMP_DASH;
	v->a[30424] = actions(228);
	v->a[30425] = 3;
	v->a[30426] = sym_raw_string;
	v->a[30427] = sym_number;
	v->a[30428] = sym_word;
	v->a[30429] = state(299);
	v->a[30430] = 5;
	v->a[30431] = sym_arithmetic_expansion;
	v->a[30432] = sym_string;
	v->a[30433] = sym_simple_expansion;
	v->a[30434] = sym_expansion;
	v->a[30435] = sym_command_substitution;
	v->a[30436] = actions(1064);
	v->a[30437] = 8;
	v->a[30438] = anon_sym_LT;
	v->a[30439] = anon_sym_GT;
	small_parse_table_1522(v);
}

void	small_parse_table_1522(t_small_parse_table_array *v)
{
	v->a[30440] = anon_sym_GT_GT;
	v->a[30441] = anon_sym_AMP_GT;
	v->a[30442] = anon_sym_AMP_GT_GT;
	v->a[30443] = anon_sym_LT_AMP;
	v->a[30444] = anon_sym_GT_AMP;
	v->a[30445] = anon_sym_GT_PIPE;
	v->a[30446] = 6;
	v->a[30447] = actions(3);
	v->a[30448] = 1;
	v->a[30449] = sym_comment;
	v->a[30450] = actions(1092);
	v->a[30451] = 1;
	v->a[30452] = aux_sym_concatenation_token1;
	v->a[30453] = actions(1197);
	v->a[30454] = 1;
	v->a[30455] = sym__concat;
	v->a[30456] = state(338);
	v->a[30457] = 1;
	v->a[30458] = aux_sym_concatenation_repeat1;
	v->a[30459] = actions(961);
	small_parse_table_1523(v);
}

void	small_parse_table_1523(t_small_parse_table_array *v)
{
	v->a[30460] = 2;
	v->a[30461] = sym_file_descriptor;
	v->a[30462] = sym_variable_name;
	v->a[30463] = actions(957);
	v->a[30464] = 29;
	v->a[30465] = anon_sym_PIPE;
	v->a[30466] = anon_sym_RPAREN;
	v->a[30467] = anon_sym_SEMI_SEMI;
	v->a[30468] = anon_sym_AMP_AMP;
	v->a[30469] = anon_sym_PIPE_PIPE;
	v->a[30470] = anon_sym_LT;
	v->a[30471] = anon_sym_GT;
	v->a[30472] = anon_sym_GT_GT;
	v->a[30473] = anon_sym_AMP_GT;
	v->a[30474] = anon_sym_AMP_GT_GT;
	v->a[30475] = anon_sym_LT_AMP;
	v->a[30476] = anon_sym_GT_AMP;
	v->a[30477] = anon_sym_GT_PIPE;
	v->a[30478] = anon_sym_LT_AMP_DASH;
	v->a[30479] = anon_sym_GT_AMP_DASH;
	small_parse_table_1524(v);
}

void	small_parse_table_1524(t_small_parse_table_array *v)
{
	v->a[30480] = anon_sym_LT_LT;
	v->a[30481] = anon_sym_LT_LT_DASH;
	v->a[30482] = aux_sym_heredoc_redirect_token1;
	v->a[30483] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30484] = anon_sym_AMP;
	v->a[30485] = anon_sym_DOLLAR;
	v->a[30486] = anon_sym_DQUOTE;
	v->a[30487] = sym_raw_string;
	v->a[30488] = sym_number;
	v->a[30489] = anon_sym_DOLLAR_LBRACE;
	v->a[30490] = anon_sym_DOLLAR_LPAREN;
	v->a[30491] = anon_sym_BQUOTE;
	v->a[30492] = sym_word;
	v->a[30493] = anon_sym_SEMI;
	v->a[30494] = 3;
	v->a[30495] = actions(3);
	v->a[30496] = 1;
	v->a[30497] = sym_comment;
	v->a[30498] = actions(988);
	v->a[30499] = 3;
	small_parse_table_1525(v);
}

/* EOF small_parse_table_304.c */
