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
	v->a[30400] = anon_sym_GT_AMP_DASH;
	v->a[30401] = anon_sym_LT_LT;
	v->a[30402] = anon_sym_LT_LT_DASH;
	v->a[30403] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30404] = anon_sym_AMP;
	v->a[30405] = aux_sym_concatenation_token1;
	v->a[30406] = anon_sym_DOLLAR;
	v->a[30407] = sym__special_character;
	v->a[30408] = anon_sym_DQUOTE;
	v->a[30409] = sym_raw_string;
	v->a[30410] = aux_sym_number_token1;
	v->a[30411] = aux_sym_number_token2;
	v->a[30412] = anon_sym_DOLLAR_LBRACE;
	v->a[30413] = anon_sym_DOLLAR_LPAREN;
	v->a[30414] = anon_sym_BQUOTE;
	v->a[30415] = anon_sym_DOLLAR_BQUOTE;
	v->a[30416] = aux_sym__simple_variable_name_token1;
	v->a[30417] = sym_word;
	v->a[30418] = anon_sym_SEMI;
	v->a[30419] = 11;
	small_parse_table_1521(v);
}

void	small_parse_table_1521(t_small_parse_table_array *v)
{
	v->a[30420] = actions(3);
	v->a[30421] = 1;
	v->a[30422] = sym_comment;
	v->a[30423] = actions(3241);
	v->a[30424] = 1;
	v->a[30425] = sym_variable_name;
	v->a[30426] = actions(3383);
	v->a[30427] = 1;
	v->a[30428] = aux_sym_heredoc_redirect_token1;
	v->a[30429] = actions(2516);
	v->a[30430] = 2;
	v->a[30431] = anon_sym_PIPE;
	v->a[30432] = anon_sym_PIPE_AMP;
	v->a[30433] = actions(2945);
	v->a[30434] = 2;
	v->a[30435] = anon_sym_LT_LT;
	v->a[30436] = anon_sym_LT_LT_DASH;
	v->a[30437] = actions(3300);
	v->a[30438] = 2;
	v->a[30439] = anon_sym_AMP_AMP;
	small_parse_table_1522(v);
}

void	small_parse_table_1522(t_small_parse_table_array *v)
{
	v->a[30440] = anon_sym_PIPE_PIPE;
	v->a[30441] = state(2166);
	v->a[30442] = 2;
	v->a[30443] = sym_variable_assignment;
	v->a[30444] = aux_sym_variable_assignments_repeat1;
	v->a[30445] = actions(2526);
	v->a[30446] = 3;
	v->a[30447] = sym_file_descriptor;
	v->a[30448] = sym_test_operator;
	v->a[30449] = sym__brace_start;
	v->a[30450] = actions(3381);
	v->a[30451] = 3;
	v->a[30452] = anon_sym_SEMI_SEMI;
	v->a[30453] = anon_sym_AMP;
	v->a[30454] = anon_sym_SEMI;
	v->a[30455] = state(2295);
	v->a[30456] = 3;
	v->a[30457] = sym_file_redirect;
	v->a[30458] = sym_heredoc_redirect;
	v->a[30459] = aux_sym_redirected_statement_repeat1;
	small_parse_table_1523(v);
}

void	small_parse_table_1523(t_small_parse_table_array *v)
{
	v->a[30460] = actions(2512);
	v->a[30461] = 22;
	v->a[30462] = anon_sym_LT;
	v->a[30463] = anon_sym_GT;
	v->a[30464] = anon_sym_GT_GT;
	v->a[30465] = anon_sym_AMP_GT;
	v->a[30466] = anon_sym_AMP_GT_GT;
	v->a[30467] = anon_sym_LT_AMP;
	v->a[30468] = anon_sym_GT_AMP;
	v->a[30469] = anon_sym_GT_PIPE;
	v->a[30470] = anon_sym_LT_AMP_DASH;
	v->a[30471] = anon_sym_GT_AMP_DASH;
	v->a[30472] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30473] = anon_sym_DOLLAR;
	v->a[30474] = sym__special_character;
	v->a[30475] = anon_sym_DQUOTE;
	v->a[30476] = sym_raw_string;
	v->a[30477] = aux_sym_number_token1;
	v->a[30478] = aux_sym_number_token2;
	v->a[30479] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1524(v);
}

void	small_parse_table_1524(t_small_parse_table_array *v)
{
	v->a[30480] = anon_sym_DOLLAR_LPAREN;
	v->a[30481] = anon_sym_BQUOTE;
	v->a[30482] = anon_sym_DOLLAR_BQUOTE;
	v->a[30483] = sym_word;
	v->a[30484] = 3;
	v->a[30485] = actions(3);
	v->a[30486] = 1;
	v->a[30487] = sym_comment;
	v->a[30488] = actions(2828);
	v->a[30489] = 6;
	v->a[30490] = sym_file_descriptor;
	v->a[30491] = sym__concat;
	v->a[30492] = sym_test_operator;
	v->a[30493] = sym__bare_dollar;
	v->a[30494] = sym__brace_start;
	v->a[30495] = aux_sym_heredoc_redirect_token1;
	v->a[30496] = actions(2826);
	v->a[30497] = 35;
	v->a[30498] = anon_sym_esac;
	v->a[30499] = anon_sym_PIPE;
	small_parse_table_1525(v);
}

/* EOF small_parse_table_304.c */
