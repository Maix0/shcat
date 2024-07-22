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
	v->a[30400] = aux_sym_concatenation_repeat1;
	v->a[30401] = actions(1132);
	v->a[30402] = 2;
	v->a[30403] = sym_file_descriptor;
	v->a[30404] = sym__bare_dollar;
	v->a[30405] = actions(1134);
	v->a[30406] = 26;
	v->a[30407] = anon_sym_LPAREN;
	v->a[30408] = anon_sym_PIPE;
	v->a[30409] = anon_sym_RPAREN;
	v->a[30410] = anon_sym_SEMI_SEMI;
	v->a[30411] = anon_sym_AMP_AMP;
	v->a[30412] = anon_sym_PIPE_PIPE;
	v->a[30413] = anon_sym_LT;
	v->a[30414] = anon_sym_GT;
	v->a[30415] = anon_sym_GT_GT;
	v->a[30416] = anon_sym_LT_AMP;
	v->a[30417] = anon_sym_GT_AMP;
	v->a[30418] = anon_sym_GT_PIPE;
	v->a[30419] = anon_sym_LT_GT;
	small_parse_table_1521(v);
}

void	small_parse_table_1521(t_small_parse_table_array *v)
{
	v->a[30420] = anon_sym_LT_LT;
	v->a[30421] = anon_sym_LT_LT_DASH;
	v->a[30422] = aux_sym_heredoc_redirect_token1;
	v->a[30423] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30424] = anon_sym_DOLLAR;
	v->a[30425] = anon_sym_DQUOTE;
	v->a[30426] = sym_raw_string;
	v->a[30427] = sym_number;
	v->a[30428] = anon_sym_DOLLAR_LBRACE;
	v->a[30429] = anon_sym_DOLLAR_LPAREN;
	v->a[30430] = anon_sym_BQUOTE;
	v->a[30431] = sym_word;
	v->a[30432] = anon_sym_SEMI;
	v->a[30433] = 14;
	v->a[30434] = actions(3);
	v->a[30435] = 1;
	v->a[30436] = sym_comment;
	v->a[30437] = actions(405);
	v->a[30438] = 1;
	v->a[30439] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1522(v);
}

void	small_parse_table_1522(t_small_parse_table_array *v)
{
	v->a[30440] = actions(407);
	v->a[30441] = 1;
	v->a[30442] = anon_sym_DOLLAR;
	v->a[30443] = actions(409);
	v->a[30444] = 1;
	v->a[30445] = anon_sym_DQUOTE;
	v->a[30446] = actions(411);
	v->a[30447] = 1;
	v->a[30448] = anon_sym_DOLLAR_LBRACE;
	v->a[30449] = actions(413);
	v->a[30450] = 1;
	v->a[30451] = anon_sym_DOLLAR_LPAREN;
	v->a[30452] = actions(415);
	v->a[30453] = 1;
	v->a[30454] = anon_sym_BQUOTE;
	v->a[30455] = actions(419);
	v->a[30456] = 1;
	v->a[30457] = sym__bare_dollar;
	v->a[30458] = actions(519);
	v->a[30459] = 1;
	small_parse_table_1523(v);
}

void	small_parse_table_1523(t_small_parse_table_array *v)
{
	v->a[30460] = sym_file_descriptor;
	v->a[30461] = state(372);
	v->a[30462] = 1;
	v->a[30463] = aux_sym_command_repeat2;
	v->a[30464] = state(674);
	v->a[30465] = 1;
	v->a[30466] = sym_concatenation;
	v->a[30467] = actions(815);
	v->a[30468] = 3;
	v->a[30469] = sym_raw_string;
	v->a[30470] = sym_number;
	v->a[30471] = sym_word;
	v->a[30472] = state(682);
	v->a[30473] = 5;
	v->a[30474] = sym_arithmetic_expansion;
	v->a[30475] = sym_string;
	v->a[30476] = sym_simple_expansion;
	v->a[30477] = sym_expansion;
	v->a[30478] = sym_command_substitution;
	v->a[30479] = actions(517);
	small_parse_table_1524(v);
}

void	small_parse_table_1524(t_small_parse_table_array *v)
{
	v->a[30480] = 13;
	v->a[30481] = anon_sym_PIPE;
	v->a[30482] = anon_sym_AMP_AMP;
	v->a[30483] = anon_sym_PIPE_PIPE;
	v->a[30484] = anon_sym_LT;
	v->a[30485] = anon_sym_GT;
	v->a[30486] = anon_sym_GT_GT;
	v->a[30487] = anon_sym_LT_AMP;
	v->a[30488] = anon_sym_GT_AMP;
	v->a[30489] = anon_sym_GT_PIPE;
	v->a[30490] = anon_sym_LT_GT;
	v->a[30491] = anon_sym_LT_LT;
	v->a[30492] = anon_sym_LT_LT_DASH;
	v->a[30493] = aux_sym_heredoc_redirect_token1;
	v->a[30494] = 7;
	v->a[30495] = actions(3);
	v->a[30496] = 1;
	v->a[30497] = sym_comment;
	v->a[30498] = actions(1061);
	v->a[30499] = 1;
	small_parse_table_1525(v);
}

/* EOF small_parse_table_304.c */
