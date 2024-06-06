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
	v->a[8400] = aux_sym_number_token1;
	v->a[8401] = aux_sym_number_token2;
	v->a[8402] = anon_sym_DOLLAR_LBRACE;
	v->a[8403] = anon_sym_DOLLAR_LPAREN;
	v->a[8404] = anon_sym_BQUOTE;
	v->a[8405] = anon_sym_DOLLAR_BQUOTE;
	v->a[8406] = sym_word;
	v->a[8407] = anon_sym_SEMI;
	v->a[8408] = 21;
	v->a[8409] = actions(3);
	v->a[8410] = 1;
	v->a[8411] = sym_comment;
	v->a[8412] = actions(1888);
	v->a[8413] = 1;
	v->a[8414] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8415] = actions(1891);
	v->a[8416] = 1;
	v->a[8417] = anon_sym_DOLLAR;
	v->a[8418] = actions(1894);
	v->a[8419] = 1;
	small_parse_table_421(v);
}

void	small_parse_table_421(t_small_parse_table_array *v)
{
	v->a[8420] = sym__special_character;
	v->a[8421] = actions(1897);
	v->a[8422] = 1;
	v->a[8423] = anon_sym_DQUOTE;
	v->a[8424] = actions(1900);
	v->a[8425] = 1;
	v->a[8426] = aux_sym_number_token1;
	v->a[8427] = actions(1903);
	v->a[8428] = 1;
	v->a[8429] = aux_sym_number_token2;
	v->a[8430] = actions(1906);
	v->a[8431] = 1;
	v->a[8432] = anon_sym_DOLLAR_LBRACE;
	v->a[8433] = actions(1909);
	v->a[8434] = 1;
	v->a[8435] = anon_sym_DOLLAR_LPAREN;
	v->a[8436] = actions(1912);
	v->a[8437] = 1;
	v->a[8438] = anon_sym_BQUOTE;
	v->a[8439] = actions(1915);
	small_parse_table_422(v);
}

void	small_parse_table_422(t_small_parse_table_array *v)
{
	v->a[8440] = 1;
	v->a[8441] = anon_sym_DOLLAR_BQUOTE;
	v->a[8442] = actions(1918);
	v->a[8443] = 1;
	v->a[8444] = sym_test_operator;
	v->a[8445] = actions(1921);
	v->a[8446] = 1;
	v->a[8447] = sym__bare_dollar;
	v->a[8448] = actions(1924);
	v->a[8449] = 1;
	v->a[8450] = sym__brace_start;
	v->a[8451] = state(366);
	v->a[8452] = 1;
	v->a[8453] = aux_sym_command_repeat2;
	v->a[8454] = state(1233);
	v->a[8455] = 1;
	v->a[8456] = aux_sym__literal_repeat1;
	v->a[8457] = state(1281);
	v->a[8458] = 1;
	v->a[8459] = sym_concatenation;
	small_parse_table_423(v);
}

void	small_parse_table_423(t_small_parse_table_array *v)
{
	v->a[8460] = actions(1885);
	v->a[8461] = 2;
	v->a[8462] = sym_raw_string;
	v->a[8463] = sym_word;
	v->a[8464] = actions(1195);
	v->a[8465] = 3;
	v->a[8466] = sym_file_descriptor;
	v->a[8467] = ts_builtin_sym_end;
	v->a[8468] = aux_sym_heredoc_redirect_token1;
	v->a[8469] = state(790);
	v->a[8470] = 7;
	v->a[8471] = sym_arithmetic_expansion;
	v->a[8472] = sym_brace_expression;
	v->a[8473] = sym_string;
	v->a[8474] = sym_number;
	v->a[8475] = sym_simple_expansion;
	v->a[8476] = sym_expansion;
	v->a[8477] = sym_command_substitution;
	v->a[8478] = actions(1193);
	v->a[8479] = 19;
	small_parse_table_424(v);
}

void	small_parse_table_424(t_small_parse_table_array *v)
{
	v->a[8480] = anon_sym_PIPE;
	v->a[8481] = anon_sym_SEMI_SEMI;
	v->a[8482] = anon_sym_PIPE_AMP;
	v->a[8483] = anon_sym_AMP_AMP;
	v->a[8484] = anon_sym_PIPE_PIPE;
	v->a[8485] = anon_sym_LT;
	v->a[8486] = anon_sym_GT;
	v->a[8487] = anon_sym_GT_GT;
	v->a[8488] = anon_sym_AMP_GT;
	v->a[8489] = anon_sym_AMP_GT_GT;
	v->a[8490] = anon_sym_LT_AMP;
	v->a[8491] = anon_sym_GT_AMP;
	v->a[8492] = anon_sym_GT_PIPE;
	v->a[8493] = anon_sym_LT_AMP_DASH;
	v->a[8494] = anon_sym_GT_AMP_DASH;
	v->a[8495] = anon_sym_LT_LT;
	v->a[8496] = anon_sym_LT_LT_DASH;
	v->a[8497] = anon_sym_AMP;
	v->a[8498] = anon_sym_SEMI;
	v->a[8499] = 20;
	small_parse_table_425(v);
}

/* EOF small_parse_table_84.c */
