/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_84.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_420(t_small_parse_table_array *v)
{
	v->a[8400] = anon_sym_SEMI_SEMI;
	v->a[8401] = anon_sym_SEMI_AMP;
	v->a[8402] = anon_sym_SEMI_SEMI_AMP;
	v->a[8403] = anon_sym_PIPE_AMP;
	v->a[8404] = anon_sym_AMP_GT;
	v->a[8405] = anon_sym_AMP_GT_GT;
	v->a[8406] = anon_sym_LT_AMP;
	v->a[8407] = anon_sym_GT_AMP;
	v->a[8408] = anon_sym_GT_PIPE;
	v->a[8409] = anon_sym_LT_AMP_DASH;
	v->a[8410] = anon_sym_GT_AMP_DASH;
	v->a[8411] = anon_sym_LT_LT_DASH;
	v->a[8412] = 6;
	v->a[8413] = actions(3);
	v->a[8414] = 1;
	v->a[8415] = sym_comment;
	v->a[8416] = state(1567);
	v->a[8417] = 1;
	v->a[8418] = aux_sym__literal_repeat1;
	v->a[8419] = state(609);
	small_parse_table_421(v);
}

void	small_parse_table_421(t_small_parse_table_array *v)
{
	v->a[8420] = 2;
	v->a[8421] = sym_concatenation;
	v->a[8422] = aux_sym_for_statement_repeat1;
	v->a[8423] = actions(2074);
	v->a[8424] = 5;
	v->a[8425] = sym_file_descriptor;
	v->a[8426] = sym_variable_name;
	v->a[8427] = sym_test_operator;
	v->a[8428] = sym__brace_start;
	v->a[8429] = aux_sym_heredoc_redirect_token1;
	v->a[8430] = state(1269);
	v->a[8431] = 9;
	v->a[8432] = sym_arithmetic_expansion;
	v->a[8433] = sym_brace_expression;
	v->a[8434] = sym_string;
	v->a[8435] = sym_translated_string;
	v->a[8436] = sym_number;
	v->a[8437] = sym_simple_expansion;
	v->a[8438] = sym_expansion;
	v->a[8439] = sym_command_substitution;
	small_parse_table_422(v);
}

void	small_parse_table_422(t_small_parse_table_array *v)
{
	v->a[8440] = sym_process_substitution;
	v->a[8441] = actions(2072);
	v->a[8442] = 39;
	v->a[8443] = anon_sym_LPAREN_LPAREN;
	v->a[8444] = anon_sym_SEMI;
	v->a[8445] = anon_sym_PIPE_PIPE;
	v->a[8446] = anon_sym_AMP_AMP;
	v->a[8447] = anon_sym_PIPE;
	v->a[8448] = anon_sym_AMP;
	v->a[8449] = anon_sym_LT;
	v->a[8450] = anon_sym_GT;
	v->a[8451] = anon_sym_LT_LT;
	v->a[8452] = anon_sym_GT_GT;
	v->a[8453] = anon_sym_SEMI_SEMI;
	v->a[8454] = anon_sym_SEMI_AMP;
	v->a[8455] = anon_sym_SEMI_SEMI_AMP;
	v->a[8456] = anon_sym_PIPE_AMP;
	v->a[8457] = anon_sym_AMP_GT;
	v->a[8458] = anon_sym_AMP_GT_GT;
	v->a[8459] = anon_sym_LT_AMP;
	small_parse_table_423(v);
}

void	small_parse_table_423(t_small_parse_table_array *v)
{
	v->a[8460] = anon_sym_GT_AMP;
	v->a[8461] = anon_sym_GT_PIPE;
	v->a[8462] = anon_sym_LT_AMP_DASH;
	v->a[8463] = anon_sym_GT_AMP_DASH;
	v->a[8464] = anon_sym_LT_LT_DASH;
	v->a[8465] = anon_sym_LT_LT_LT;
	v->a[8466] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8467] = anon_sym_DOLLAR_LBRACK;
	v->a[8468] = anon_sym_DOLLAR;
	v->a[8469] = sym__special_character;
	v->a[8470] = anon_sym_DQUOTE;
	v->a[8471] = sym_raw_string;
	v->a[8472] = sym_ansi_c_string;
	v->a[8473] = aux_sym_number_token1;
	v->a[8474] = aux_sym_number_token2;
	v->a[8475] = anon_sym_DOLLAR_LBRACE;
	v->a[8476] = anon_sym_DOLLAR_LPAREN;
	v->a[8477] = anon_sym_BQUOTE;
	v->a[8478] = anon_sym_DOLLAR_BQUOTE;
	v->a[8479] = anon_sym_LT_LPAREN;
	small_parse_table_424(v);
}

void	small_parse_table_424(t_small_parse_table_array *v)
{
	v->a[8480] = anon_sym_GT_LPAREN;
	v->a[8481] = sym_word;
	v->a[8482] = 21;
	v->a[8483] = actions(3);
	v->a[8484] = 1;
	v->a[8485] = sym_comment;
	v->a[8486] = actions(2572);
	v->a[8487] = 1;
	v->a[8488] = anon_sym_DOLLAR_LBRACK;
	v->a[8489] = actions(2574);
	v->a[8490] = 1;
	v->a[8491] = anon_sym_DOLLAR;
	v->a[8492] = actions(2576);
	v->a[8493] = 1;
	v->a[8494] = sym__special_character;
	v->a[8495] = actions(2578);
	v->a[8496] = 1;
	v->a[8497] = anon_sym_DQUOTE;
	v->a[8498] = actions(2580);
	v->a[8499] = 1;
	small_parse_table_425(v);
}

/* EOF small_parse_table_84.c */
