/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_604.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3020(t_small_parse_table_array *v)
{
	v->a[60400] = sym__concat;
	v->a[60401] = state(1322);
	v->a[60402] = 1;
	v->a[60403] = aux_sym_concatenation_repeat1;
	v->a[60404] = actions(2664);
	v->a[60405] = 5;
	v->a[60406] = sym_file_descriptor;
	v->a[60407] = sym_test_operator;
	v->a[60408] = sym__bare_dollar;
	v->a[60409] = sym__brace_start;
	v->a[60410] = aux_sym_heredoc_redirect_token1;
	v->a[60411] = actions(2662);
	v->a[60412] = 29;
	v->a[60413] = anon_sym_LPAREN;
	v->a[60414] = anon_sym_PIPE;
	v->a[60415] = anon_sym_PIPE_AMP;
	v->a[60416] = anon_sym_AMP_AMP;
	v->a[60417] = anon_sym_PIPE_PIPE;
	v->a[60418] = anon_sym_LT;
	v->a[60419] = anon_sym_GT;
	small_parse_table_3021(v);
}

void	small_parse_table_3021(t_small_parse_table_array *v)
{
	v->a[60420] = anon_sym_GT_GT;
	v->a[60421] = anon_sym_AMP_GT;
	v->a[60422] = anon_sym_AMP_GT_GT;
	v->a[60423] = anon_sym_LT_AMP;
	v->a[60424] = anon_sym_GT_AMP;
	v->a[60425] = anon_sym_GT_PIPE;
	v->a[60426] = anon_sym_LT_AMP_DASH;
	v->a[60427] = anon_sym_GT_AMP_DASH;
	v->a[60428] = anon_sym_LT_LT;
	v->a[60429] = anon_sym_LT_LT_DASH;
	v->a[60430] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60431] = anon_sym_DOLLAR;
	v->a[60432] = sym__special_character;
	v->a[60433] = anon_sym_DQUOTE;
	v->a[60434] = sym_raw_string;
	v->a[60435] = aux_sym_number_token1;
	v->a[60436] = aux_sym_number_token2;
	v->a[60437] = anon_sym_DOLLAR_LBRACE;
	v->a[60438] = anon_sym_DOLLAR_LPAREN;
	v->a[60439] = anon_sym_BQUOTE;
	small_parse_table_3022(v);
}

void	small_parse_table_3022(t_small_parse_table_array *v)
{
	v->a[60440] = anon_sym_DOLLAR_BQUOTE;
	v->a[60441] = sym_word;
	v->a[60442] = 5;
	v->a[60443] = actions(3);
	v->a[60444] = 1;
	v->a[60445] = sym_comment;
	v->a[60446] = actions(2526);
	v->a[60447] = 3;
	v->a[60448] = sym_variable_name;
	v->a[60449] = sym_test_operator;
	v->a[60450] = sym__brace_start;
	v->a[60451] = actions(3641);
	v->a[60452] = 3;
	v->a[60453] = sym_file_descriptor;
	v->a[60454] = ts_builtin_sym_end;
	v->a[60455] = aux_sym_heredoc_redirect_token1;
	v->a[60456] = actions(2512);
	v->a[60457] = 12;
	v->a[60458] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60459] = anon_sym_DOLLAR;
	small_parse_table_3023(v);
}

void	small_parse_table_3023(t_small_parse_table_array *v)
{
	v->a[60460] = sym__special_character;
	v->a[60461] = anon_sym_DQUOTE;
	v->a[60462] = sym_raw_string;
	v->a[60463] = aux_sym_number_token1;
	v->a[60464] = aux_sym_number_token2;
	v->a[60465] = anon_sym_DOLLAR_LBRACE;
	v->a[60466] = anon_sym_DOLLAR_LPAREN;
	v->a[60467] = anon_sym_BQUOTE;
	v->a[60468] = anon_sym_DOLLAR_BQUOTE;
	v->a[60469] = sym_word;
	v->a[60470] = actions(3639);
	v->a[60471] = 19;
	v->a[60472] = anon_sym_PIPE;
	v->a[60473] = anon_sym_SEMI_SEMI;
	v->a[60474] = anon_sym_PIPE_AMP;
	v->a[60475] = anon_sym_AMP_AMP;
	v->a[60476] = anon_sym_PIPE_PIPE;
	v->a[60477] = anon_sym_LT;
	v->a[60478] = anon_sym_GT;
	v->a[60479] = anon_sym_GT_GT;
	small_parse_table_3024(v);
}

void	small_parse_table_3024(t_small_parse_table_array *v)
{
	v->a[60480] = anon_sym_AMP_GT;
	v->a[60481] = anon_sym_AMP_GT_GT;
	v->a[60482] = anon_sym_LT_AMP;
	v->a[60483] = anon_sym_GT_AMP;
	v->a[60484] = anon_sym_GT_PIPE;
	v->a[60485] = anon_sym_LT_AMP_DASH;
	v->a[60486] = anon_sym_GT_AMP_DASH;
	v->a[60487] = anon_sym_LT_LT;
	v->a[60488] = anon_sym_LT_LT_DASH;
	v->a[60489] = anon_sym_AMP;
	v->a[60490] = anon_sym_SEMI;
	v->a[60491] = 8;
	v->a[60492] = actions(3);
	v->a[60493] = 1;
	v->a[60494] = sym_comment;
	v->a[60495] = actions(3632);
	v->a[60496] = 1;
	v->a[60497] = aux_sym_heredoc_redirect_token1;
	v->a[60498] = actions(3634);
	v->a[60499] = 1;
	small_parse_table_3025(v);
}

/* EOF small_parse_table_604.c */
