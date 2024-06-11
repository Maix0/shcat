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
	v->a[30400] = anon_sym_DOLLAR_LPAREN;
	v->a[30401] = anon_sym_BQUOTE;
	v->a[30402] = sym_word;
	v->a[30403] = anon_sym_SEMI;
	v->a[30404] = 14;
	v->a[30405] = actions(3);
	v->a[30406] = 1;
	v->a[30407] = sym_comment;
	v->a[30408] = actions(497);
	v->a[30409] = 1;
	v->a[30410] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30411] = actions(499);
	v->a[30412] = 1;
	v->a[30413] = anon_sym_DOLLAR;
	v->a[30414] = actions(501);
	v->a[30415] = 1;
	v->a[30416] = anon_sym_DQUOTE;
	v->a[30417] = actions(503);
	v->a[30418] = 1;
	v->a[30419] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1521(v);
}

void	small_parse_table_1521(t_small_parse_table_array *v)
{
	v->a[30420] = actions(505);
	v->a[30421] = 1;
	v->a[30422] = anon_sym_DOLLAR_LPAREN;
	v->a[30423] = actions(507);
	v->a[30424] = 1;
	v->a[30425] = anon_sym_BQUOTE;
	v->a[30426] = actions(509);
	v->a[30427] = 1;
	v->a[30428] = sym__bare_dollar;
	v->a[30429] = actions(555);
	v->a[30430] = 1;
	v->a[30431] = sym_file_descriptor;
	v->a[30432] = state(392);
	v->a[30433] = 1;
	v->a[30434] = aux_sym_command_repeat2;
	v->a[30435] = state(729);
	v->a[30436] = 1;
	v->a[30437] = sym_concatenation;
	v->a[30438] = actions(838);
	v->a[30439] = 3;
	small_parse_table_1522(v);
}

void	small_parse_table_1522(t_small_parse_table_array *v)
{
	v->a[30440] = sym_raw_string;
	v->a[30441] = sym_number;
	v->a[30442] = sym_word;
	v->a[30443] = state(910);
	v->a[30444] = 5;
	v->a[30445] = sym_arithmetic_expansion;
	v->a[30446] = sym_string;
	v->a[30447] = sym_simple_expansion;
	v->a[30448] = sym_expansion;
	v->a[30449] = sym_command_substitution;
	v->a[30450] = actions(557);
	v->a[30451] = 16;
	v->a[30452] = anon_sym_PIPE;
	v->a[30453] = anon_sym_AMP_AMP;
	v->a[30454] = anon_sym_PIPE_PIPE;
	v->a[30455] = anon_sym_LT;
	v->a[30456] = anon_sym_GT;
	v->a[30457] = anon_sym_GT_GT;
	v->a[30458] = anon_sym_AMP_GT;
	v->a[30459] = anon_sym_AMP_GT_GT;
	small_parse_table_1523(v);
}

void	small_parse_table_1523(t_small_parse_table_array *v)
{
	v->a[30460] = anon_sym_LT_AMP;
	v->a[30461] = anon_sym_GT_AMP;
	v->a[30462] = anon_sym_GT_PIPE;
	v->a[30463] = anon_sym_LT_AMP_DASH;
	v->a[30464] = anon_sym_GT_AMP_DASH;
	v->a[30465] = anon_sym_LT_LT;
	v->a[30466] = anon_sym_LT_LT_DASH;
	v->a[30467] = aux_sym_heredoc_redirect_token1;
	v->a[30468] = 3;
	v->a[30469] = actions(3);
	v->a[30470] = 1;
	v->a[30471] = sym_comment;
	v->a[30472] = actions(1187);
	v->a[30473] = 4;
	v->a[30474] = sym_file_descriptor;
	v->a[30475] = sym__concat;
	v->a[30476] = sym__bare_dollar;
	v->a[30477] = ts_builtin_sym_end;
	v->a[30478] = actions(1185);
	v->a[30479] = 30;
	small_parse_table_1524(v);
}

void	small_parse_table_1524(t_small_parse_table_array *v)
{
	v->a[30480] = anon_sym_LPAREN;
	v->a[30481] = anon_sym_PIPE;
	v->a[30482] = anon_sym_SEMI_SEMI;
	v->a[30483] = anon_sym_AMP_AMP;
	v->a[30484] = anon_sym_PIPE_PIPE;
	v->a[30485] = anon_sym_LT;
	v->a[30486] = anon_sym_GT;
	v->a[30487] = anon_sym_GT_GT;
	v->a[30488] = anon_sym_AMP_GT;
	v->a[30489] = anon_sym_AMP_GT_GT;
	v->a[30490] = anon_sym_LT_AMP;
	v->a[30491] = anon_sym_GT_AMP;
	v->a[30492] = anon_sym_GT_PIPE;
	v->a[30493] = anon_sym_LT_AMP_DASH;
	v->a[30494] = anon_sym_GT_AMP_DASH;
	v->a[30495] = anon_sym_LT_LT;
	v->a[30496] = anon_sym_LT_LT_DASH;
	v->a[30497] = aux_sym_heredoc_redirect_token1;
	v->a[30498] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30499] = anon_sym_AMP;
	small_parse_table_1525(v);
}

/* EOF small_parse_table_304.c */
