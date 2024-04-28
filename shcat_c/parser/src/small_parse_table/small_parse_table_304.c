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
	v->a[30400] = sym_arithmetic_expansion;
	v->a[30401] = sym_brace_expression;
	v->a[30402] = sym_string;
	v->a[30403] = sym_translated_string;
	v->a[30404] = sym_number;
	v->a[30405] = sym_simple_expansion;
	v->a[30406] = sym_expansion;
	v->a[30407] = sym_command_substitution;
	v->a[30408] = sym_process_substitution;
	v->a[30409] = actions(2074);
	v->a[30410] = 12;
	v->a[30411] = sym_file_descriptor;
	v->a[30412] = anon_sym_PIPE_PIPE;
	v->a[30413] = anon_sym_AMP_AMP;
	v->a[30414] = anon_sym_GT_GT;
	v->a[30415] = anon_sym_PIPE_AMP;
	v->a[30416] = anon_sym_RBRACK;
	v->a[30417] = anon_sym_AMP_GT_GT;
	v->a[30418] = anon_sym_GT_PIPE;
	v->a[30419] = anon_sym_LT_AMP_DASH;
	small_parse_table_1521(v);
}

void	small_parse_table_1521(t_small_parse_table_array *v)
{
	v->a[30420] = anon_sym_GT_AMP_DASH;
	v->a[30421] = anon_sym_LT_LT_DASH;
	v->a[30422] = anon_sym_LT_LT_LT;
	v->a[30423] = 3;
	v->a[30424] = actions(3);
	v->a[30425] = 1;
	v->a[30426] = sym_comment;
	v->a[30427] = actions(1350);
	v->a[30428] = 6;
	v->a[30429] = sym_file_descriptor;
	v->a[30430] = sym__concat;
	v->a[30431] = sym_test_operator;
	v->a[30432] = sym__bare_dollar;
	v->a[30433] = sym__brace_start;
	v->a[30434] = aux_sym_heredoc_redirect_token1;
	v->a[30435] = actions(1348);
	v->a[30436] = 44;
	v->a[30437] = anon_sym_LPAREN_LPAREN;
	v->a[30438] = anon_sym_SEMI;
	v->a[30439] = anon_sym_PIPE_PIPE;
	small_parse_table_1522(v);
}

void	small_parse_table_1522(t_small_parse_table_array *v)
{
	v->a[30440] = anon_sym_AMP_AMP;
	v->a[30441] = anon_sym_PIPE;
	v->a[30442] = anon_sym_AMP;
	v->a[30443] = anon_sym_EQ_EQ;
	v->a[30444] = anon_sym_LT;
	v->a[30445] = anon_sym_GT;
	v->a[30446] = anon_sym_LT_LT;
	v->a[30447] = anon_sym_GT_GT;
	v->a[30448] = anon_sym_LPAREN;
	v->a[30449] = anon_sym_esac;
	v->a[30450] = anon_sym_SEMI_SEMI;
	v->a[30451] = anon_sym_SEMI_AMP;
	v->a[30452] = anon_sym_SEMI_SEMI_AMP;
	v->a[30453] = anon_sym_PIPE_AMP;
	v->a[30454] = anon_sym_EQ_TILDE;
	v->a[30455] = anon_sym_AMP_GT;
	v->a[30456] = anon_sym_AMP_GT_GT;
	v->a[30457] = anon_sym_LT_AMP;
	v->a[30458] = anon_sym_GT_AMP;
	v->a[30459] = anon_sym_GT_PIPE;
	small_parse_table_1523(v);
}

void	small_parse_table_1523(t_small_parse_table_array *v)
{
	v->a[30460] = anon_sym_LT_AMP_DASH;
	v->a[30461] = anon_sym_GT_AMP_DASH;
	v->a[30462] = anon_sym_LT_LT_DASH;
	v->a[30463] = anon_sym_LT_LT_LT;
	v->a[30464] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30465] = anon_sym_DOLLAR_LBRACK;
	v->a[30466] = aux_sym_concatenation_token1;
	v->a[30467] = anon_sym_DOLLAR;
	v->a[30468] = sym__special_character;
	v->a[30469] = anon_sym_DQUOTE;
	v->a[30470] = sym_raw_string;
	v->a[30471] = sym_ansi_c_string;
	v->a[30472] = aux_sym_number_token1;
	v->a[30473] = aux_sym_number_token2;
	v->a[30474] = anon_sym_DOLLAR_LBRACE;
	v->a[30475] = anon_sym_DOLLAR_LPAREN;
	v->a[30476] = anon_sym_BQUOTE;
	v->a[30477] = anon_sym_DOLLAR_BQUOTE;
	v->a[30478] = anon_sym_LT_LPAREN;
	v->a[30479] = anon_sym_GT_LPAREN;
	small_parse_table_1524(v);
}

void	small_parse_table_1524(t_small_parse_table_array *v)
{
	v->a[30480] = sym_word;
	v->a[30481] = 3;
	v->a[30482] = actions(3);
	v->a[30483] = 1;
	v->a[30484] = sym_comment;
	v->a[30485] = actions(1298);
	v->a[30486] = 6;
	v->a[30487] = sym_file_descriptor;
	v->a[30488] = sym__concat;
	v->a[30489] = sym_test_operator;
	v->a[30490] = sym__bare_dollar;
	v->a[30491] = sym__brace_start;
	v->a[30492] = aux_sym_heredoc_redirect_token1;
	v->a[30493] = actions(1296);
	v->a[30494] = 44;
	v->a[30495] = anon_sym_LPAREN_LPAREN;
	v->a[30496] = anon_sym_SEMI;
	v->a[30497] = anon_sym_PIPE_PIPE;
	v->a[30498] = anon_sym_AMP_AMP;
	v->a[30499] = anon_sym_PIPE;
	small_parse_table_1525(v);
}

/* EOF small_parse_table_304.c */
