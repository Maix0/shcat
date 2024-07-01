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
	v->a[30401] = anon_sym_BQUOTE;
	v->a[30402] = state(1259);
	v->a[30403] = 1;
	v->a[30404] = sym_concatenation;
	v->a[30405] = actions(1154);
	v->a[30406] = 3;
	v->a[30407] = sym_raw_string;
	v->a[30408] = sym_number;
	v->a[30409] = sym_word;
	v->a[30410] = state(1317);
	v->a[30411] = 5;
	v->a[30412] = sym_arithmetic_expansion;
	v->a[30413] = sym_string;
	v->a[30414] = sym_simple_expansion;
	v->a[30415] = sym_expansion;
	v->a[30416] = sym_command_substitution;
	v->a[30417] = actions(711);
	v->a[30418] = 17;
	v->a[30419] = anon_sym_PIPE;
	small_parse_table_1521(v);
}

void	small_parse_table_1521(t_small_parse_table_array *v)
{
	v->a[30420] = anon_sym_SEMI_SEMI;
	v->a[30421] = anon_sym_AMP_AMP;
	v->a[30422] = anon_sym_PIPE_PIPE;
	v->a[30423] = anon_sym_LT;
	v->a[30424] = anon_sym_GT;
	v->a[30425] = anon_sym_GT_GT;
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
	v->a[30436] = 4;
	v->a[30437] = actions(870);
	v->a[30438] = 1;
	v->a[30439] = sym_comment;
	small_parse_table_1522(v);
}

void	small_parse_table_1522(t_small_parse_table_array *v)
{
	v->a[30440] = actions(1075);
	v->a[30441] = 2;
	v->a[30442] = anon_sym_PLUS_PLUS2;
	v->a[30443] = anon_sym_DASH_DASH2;
	v->a[30444] = actions(959);
	v->a[30445] = 13;
	v->a[30446] = anon_sym_PIPE;
	v->a[30447] = anon_sym_EQ;
	v->a[30448] = anon_sym_LT;
	v->a[30449] = anon_sym_GT;
	v->a[30450] = anon_sym_GT_GT;
	v->a[30451] = anon_sym_LT_LT;
	v->a[30452] = anon_sym_CARET;
	v->a[30453] = anon_sym_AMP;
	v->a[30454] = anon_sym_PLUS;
	v->a[30455] = anon_sym_DASH;
	v->a[30456] = anon_sym_STAR;
	v->a[30457] = anon_sym_SLASH;
	v->a[30458] = anon_sym_PERCENT;
	v->a[30459] = actions(961);
	small_parse_table_1523(v);
}

void	small_parse_table_1523(t_small_parse_table_array *v)
{
	v->a[30460] = 18;
	v->a[30461] = anon_sym_RPAREN;
	v->a[30462] = anon_sym_AMP_AMP;
	v->a[30463] = anon_sym_PIPE_PIPE;
	v->a[30464] = anon_sym_PLUS_EQ;
	v->a[30465] = anon_sym_DASH_EQ;
	v->a[30466] = anon_sym_STAR_EQ;
	v->a[30467] = anon_sym_SLASH_EQ;
	v->a[30468] = anon_sym_PERCENT_EQ;
	v->a[30469] = anon_sym_LT_LT_EQ;
	v->a[30470] = anon_sym_GT_GT_EQ;
	v->a[30471] = anon_sym_AMP_EQ;
	v->a[30472] = anon_sym_CARET_EQ;
	v->a[30473] = anon_sym_PIPE_EQ;
	v->a[30474] = anon_sym_EQ_EQ;
	v->a[30475] = anon_sym_BANG_EQ;
	v->a[30476] = anon_sym_LT_EQ;
	v->a[30477] = anon_sym_GT_EQ;
	v->a[30478] = anon_sym_QMARK;
	v->a[30479] = 17;
	small_parse_table_1524(v);
}

void	small_parse_table_1524(t_small_parse_table_array *v)
{
	v->a[30480] = actions(842);
	v->a[30481] = 1;
	v->a[30482] = anon_sym_PIPE;
	v->a[30483] = actions(844);
	v->a[30484] = 1;
	v->a[30485] = anon_sym_AMP_AMP;
	v->a[30486] = actions(846);
	v->a[30487] = 1;
	v->a[30488] = anon_sym_PIPE_PIPE;
	v->a[30489] = actions(856);
	v->a[30490] = 1;
	v->a[30491] = anon_sym_CARET;
	v->a[30492] = actions(858);
	v->a[30493] = 1;
	v->a[30494] = anon_sym_AMP;
	v->a[30495] = actions(870);
	v->a[30496] = 1;
	v->a[30497] = sym_comment;
	v->a[30498] = actions(1021);
	v->a[30499] = 1;
	small_parse_table_1525(v);
}

/* EOF small_parse_table_304.c */
