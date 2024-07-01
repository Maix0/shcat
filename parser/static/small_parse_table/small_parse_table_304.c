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
	v->a[30400] = actions(1166);
	v->a[30401] = 1;
	v->a[30402] = sym_variable_name;
	v->a[30403] = actions(1164);
	v->a[30404] = 2;
	v->a[30405] = aux_sym__simple_variable_name_token1;
	v->a[30406] = aux_sym__multiline_variable_name_token1;
	v->a[30407] = actions(1162);
	v->a[30408] = 9;
	v->a[30409] = anon_sym_BANG;
	v->a[30410] = anon_sym_DASH;
	v->a[30411] = anon_sym_STAR;
	v->a[30412] = anon_sym_QMARK;
	v->a[30413] = anon_sym_DOLLAR;
	v->a[30414] = anon_sym_POUND;
	v->a[30415] = anon_sym_AT;
	v->a[30416] = anon_sym_0;
	v->a[30417] = anon_sym__;
	v->a[30418] = actions(361);
	v->a[30419] = 18;
	small_parse_table_1521(v);
}

void	small_parse_table_1521(t_small_parse_table_array *v)
{
	v->a[30420] = anon_sym_AMP_AMP;
	v->a[30421] = anon_sym_PIPE_PIPE;
	v->a[30422] = anon_sym_LT;
	v->a[30423] = anon_sym_GT;
	v->a[30424] = anon_sym_GT_GT;
	v->a[30425] = anon_sym_LT_AMP;
	v->a[30426] = anon_sym_GT_AMP;
	v->a[30427] = anon_sym_GT_PIPE;
	v->a[30428] = anon_sym_LT_GT;
	v->a[30429] = aux_sym_heredoc_redirect_token1;
	v->a[30430] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30431] = anon_sym_DQUOTE;
	v->a[30432] = sym_raw_string;
	v->a[30433] = sym_number;
	v->a[30434] = anon_sym_DOLLAR_LBRACE;
	v->a[30435] = anon_sym_DOLLAR_LPAREN;
	v->a[30436] = anon_sym_BQUOTE;
	v->a[30437] = sym_word;
	v->a[30438] = 3;
	v->a[30439] = actions(3);
	small_parse_table_1522(v);
}

void	small_parse_table_1522(t_small_parse_table_array *v)
{
	v->a[30440] = 1;
	v->a[30441] = sym_comment;
	v->a[30442] = actions(1093);
	v->a[30443] = 3;
	v->a[30444] = sym_file_descriptor;
	v->a[30445] = sym__concat;
	v->a[30446] = sym__bare_dollar;
	v->a[30447] = actions(1088);
	v->a[30448] = 28;
	v->a[30449] = anon_sym_esac;
	v->a[30450] = anon_sym_LPAREN;
	v->a[30451] = anon_sym_PIPE;
	v->a[30452] = anon_sym_SEMI_SEMI;
	v->a[30453] = anon_sym_AMP_AMP;
	v->a[30454] = anon_sym_PIPE_PIPE;
	v->a[30455] = anon_sym_LT;
	v->a[30456] = anon_sym_GT;
	v->a[30457] = anon_sym_GT_GT;
	v->a[30458] = anon_sym_LT_AMP;
	v->a[30459] = anon_sym_GT_AMP;
	small_parse_table_1523(v);
}

void	small_parse_table_1523(t_small_parse_table_array *v)
{
	v->a[30460] = anon_sym_GT_PIPE;
	v->a[30461] = anon_sym_LT_GT;
	v->a[30462] = anon_sym_LT_LT;
	v->a[30463] = anon_sym_LT_LT_DASH;
	v->a[30464] = aux_sym_heredoc_redirect_token1;
	v->a[30465] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30466] = anon_sym_AMP;
	v->a[30467] = aux_sym_concatenation_token1;
	v->a[30468] = anon_sym_DOLLAR;
	v->a[30469] = anon_sym_DQUOTE;
	v->a[30470] = sym_raw_string;
	v->a[30471] = sym_number;
	v->a[30472] = anon_sym_DOLLAR_LBRACE;
	v->a[30473] = anon_sym_DOLLAR_LPAREN;
	v->a[30474] = anon_sym_BQUOTE;
	v->a[30475] = sym_word;
	v->a[30476] = anon_sym_SEMI;
	v->a[30477] = 5;
	v->a[30478] = actions(3);
	v->a[30479] = 1;
	small_parse_table_1524(v);
}

void	small_parse_table_1524(t_small_parse_table_array *v)
{
	v->a[30480] = sym_comment;
	v->a[30481] = actions(495);
	v->a[30482] = 2;
	v->a[30483] = sym_file_descriptor;
	v->a[30484] = sym_variable_name;
	v->a[30485] = state(412);
	v->a[30486] = 2;
	v->a[30487] = sym_concatenation;
	v->a[30488] = aux_sym_for_statement_repeat1;
	v->a[30489] = state(751);
	v->a[30490] = 5;
	v->a[30491] = sym_arithmetic_expansion;
	v->a[30492] = sym_string;
	v->a[30493] = sym_simple_expansion;
	v->a[30494] = sym_expansion;
	v->a[30495] = sym_command_substitution;
	v->a[30496] = actions(497);
	v->a[30497] = 22;
	v->a[30498] = anon_sym_PIPE;
	v->a[30499] = anon_sym_AMP_AMP;
	small_parse_table_1525(v);
}

/* EOF small_parse_table_304.c */
