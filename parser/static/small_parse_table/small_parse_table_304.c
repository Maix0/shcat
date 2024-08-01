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
	v->a[30400] = 3;
	v->a[30401] = sym_raw_string;
	v->a[30402] = sym_number;
	v->a[30403] = sym_word;
	v->a[30404] = state(1468);
	v->a[30405] = 5;
	v->a[30406] = sym_arithmetic_expansion;
	v->a[30407] = sym_string;
	v->a[30408] = sym_simple_expansion;
	v->a[30409] = sym_expansion;
	v->a[30410] = sym_command_substitution;
	v->a[30411] = 6;
	v->a[30412] = actions(3);
	v->a[30413] = 1;
	v->a[30414] = sym_comment;
	v->a[30415] = actions(1257);
	v->a[30416] = 1;
	v->a[30417] = sym_variable_name;
	v->a[30418] = actions(1265);
	v->a[30419] = 1;
	small_parse_table_1521(v);
}

void	small_parse_table_1521(t_small_parse_table_array *v)
{
	v->a[30420] = anon_sym_RPAREN;
	v->a[30421] = actions(1254);
	v->a[30422] = 3;
	v->a[30423] = anon_sym_LT;
	v->a[30424] = anon_sym_GT;
	v->a[30425] = anon_sym_GT_GT;
	v->a[30426] = actions(1249);
	v->a[30427] = 7;
	v->a[30428] = anon_sym_PIPE;
	v->a[30429] = anon_sym_SEMI_SEMI;
	v->a[30430] = anon_sym_AMP_AMP;
	v->a[30431] = anon_sym_PIPE_PIPE;
	v->a[30432] = anon_sym_LT_LT;
	v->a[30433] = aux_sym_heredoc_redirect_token1;
	v->a[30434] = anon_sym_SEMI;
	v->a[30435] = actions(1247);
	v->a[30436] = 9;
	v->a[30437] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30438] = anon_sym_DOLLAR;
	v->a[30439] = anon_sym_DQUOTE;
	small_parse_table_1522(v);
}

void	small_parse_table_1522(t_small_parse_table_array *v)
{
	v->a[30440] = sym_raw_string;
	v->a[30441] = sym_number;
	v->a[30442] = anon_sym_DOLLAR_LBRACE;
	v->a[30443] = anon_sym_DOLLAR_LPAREN;
	v->a[30444] = anon_sym_BQUOTE;
	v->a[30445] = sym_word;
	v->a[30446] = 3;
	v->a[30447] = actions(3);
	v->a[30448] = 1;
	v->a[30449] = sym_comment;
	v->a[30450] = actions(917);
	v->a[30451] = 2;
	v->a[30452] = sym_variable_name;
	v->a[30453] = ts_builtin_sym_end;
	v->a[30454] = actions(919);
	v->a[30455] = 19;
	v->a[30456] = anon_sym_PIPE;
	v->a[30457] = anon_sym_SEMI_SEMI;
	v->a[30458] = anon_sym_AMP_AMP;
	v->a[30459] = anon_sym_PIPE_PIPE;
	small_parse_table_1523(v);
}

void	small_parse_table_1523(t_small_parse_table_array *v)
{
	v->a[30460] = anon_sym_LT;
	v->a[30461] = anon_sym_GT;
	v->a[30462] = anon_sym_GT_GT;
	v->a[30463] = anon_sym_LT_LT;
	v->a[30464] = aux_sym_heredoc_redirect_token1;
	v->a[30465] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30466] = anon_sym_DOLLAR;
	v->a[30467] = anon_sym_DQUOTE;
	v->a[30468] = sym_raw_string;
	v->a[30469] = sym_number;
	v->a[30470] = anon_sym_DOLLAR_LBRACE;
	v->a[30471] = anon_sym_DOLLAR_LPAREN;
	v->a[30472] = anon_sym_BQUOTE;
	v->a[30473] = sym_word;
	v->a[30474] = anon_sym_SEMI;
	v->a[30475] = 6;
	v->a[30476] = actions(3);
	v->a[30477] = 1;
	v->a[30478] = sym_comment;
	v->a[30479] = actions(1257);
	small_parse_table_1524(v);
}

void	small_parse_table_1524(t_small_parse_table_array *v)
{
	v->a[30480] = 1;
	v->a[30481] = sym_variable_name;
	v->a[30482] = actions(1268);
	v->a[30483] = 1;
	v->a[30484] = anon_sym_RPAREN;
	v->a[30485] = actions(1254);
	v->a[30486] = 3;
	v->a[30487] = anon_sym_LT;
	v->a[30488] = anon_sym_GT;
	v->a[30489] = anon_sym_GT_GT;
	v->a[30490] = actions(1249);
	v->a[30491] = 7;
	v->a[30492] = anon_sym_PIPE;
	v->a[30493] = anon_sym_SEMI_SEMI;
	v->a[30494] = anon_sym_AMP_AMP;
	v->a[30495] = anon_sym_PIPE_PIPE;
	v->a[30496] = anon_sym_LT_LT;
	v->a[30497] = aux_sym_heredoc_redirect_token1;
	v->a[30498] = anon_sym_SEMI;
	v->a[30499] = actions(1247);
	small_parse_table_1525(v);
}

/* EOF small_parse_table_304.c */
