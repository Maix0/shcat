/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1224.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6120(t_small_parse_table_array *v)
{
	v->a[122400] = sym_comment;
	v->a[122401] = actions(1340);
	v->a[122402] = 15;
	v->a[122403] = anon_sym_PIPE;
	v->a[122404] = anon_sym_EQ_EQ;
	v->a[122405] = anon_sym_LT;
	v->a[122406] = anon_sym_GT;
	v->a[122407] = anon_sym_LT_LT;
	v->a[122408] = anon_sym_EQ_TILDE;
	v->a[122409] = anon_sym_AMP_GT;
	v->a[122410] = anon_sym_LT_AMP;
	v->a[122411] = anon_sym_GT_AMP;
	v->a[122412] = anon_sym_DOLLAR;
	v->a[122413] = aux_sym_number_token1;
	v->a[122414] = aux_sym_number_token2;
	v->a[122415] = anon_sym_DOLLAR_LPAREN;
	v->a[122416] = anon_sym_BQUOTE;
	v->a[122417] = sym_word;
	v->a[122418] = actions(1342);
	v->a[122419] = 27;
	small_parse_table_6121(v);
}

void	small_parse_table_6121(t_small_parse_table_array *v)
{
	v->a[122420] = sym_file_descriptor;
	v->a[122421] = sym__concat;
	v->a[122422] = sym_test_operator;
	v->a[122423] = sym__bare_dollar;
	v->a[122424] = sym__brace_start;
	v->a[122425] = anon_sym_LPAREN_LPAREN;
	v->a[122426] = anon_sym_PIPE_PIPE;
	v->a[122427] = anon_sym_AMP_AMP;
	v->a[122428] = anon_sym_GT_GT;
	v->a[122429] = anon_sym_PIPE_AMP;
	v->a[122430] = anon_sym_AMP_GT_GT;
	v->a[122431] = anon_sym_GT_PIPE;
	v->a[122432] = anon_sym_LT_AMP_DASH;
	v->a[122433] = anon_sym_GT_AMP_DASH;
	v->a[122434] = anon_sym_LT_LT_DASH;
	v->a[122435] = anon_sym_LT_LT_LT;
	v->a[122436] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122437] = anon_sym_DOLLAR_LBRACK;
	v->a[122438] = aux_sym_concatenation_token1;
	v->a[122439] = sym__special_character;
	small_parse_table_6122(v);
}

void	small_parse_table_6122(t_small_parse_table_array *v)
{
	v->a[122440] = anon_sym_DQUOTE;
	v->a[122441] = sym_raw_string;
	v->a[122442] = sym_ansi_c_string;
	v->a[122443] = anon_sym_DOLLAR_LBRACE;
	v->a[122444] = anon_sym_DOLLAR_BQUOTE;
	v->a[122445] = anon_sym_LT_LPAREN;
	v->a[122446] = anon_sym_GT_LPAREN;
	v->a[122447] = 6;
	v->a[122448] = actions(3);
	v->a[122449] = 1;
	v->a[122450] = sym_comment;
	v->a[122451] = actions(5638);
	v->a[122452] = 1;
	v->a[122453] = aux_sym_concatenation_token1;
	v->a[122454] = actions(5640);
	v->a[122455] = 1;
	v->a[122456] = sym__concat;
	v->a[122457] = state(2290);
	v->a[122458] = 1;
	v->a[122459] = aux_sym_concatenation_repeat1;
	small_parse_table_6123(v);
}

void	small_parse_table_6123(t_small_parse_table_array *v)
{
	v->a[122460] = actions(5395);
	v->a[122461] = 5;
	v->a[122462] = sym_file_descriptor;
	v->a[122463] = sym_variable_name;
	v->a[122464] = sym_test_operator;
	v->a[122465] = sym__brace_start;
	v->a[122466] = aux_sym_heredoc_redirect_token1;
	v->a[122467] = actions(5393);
	v->a[122468] = 34;
	v->a[122469] = anon_sym_LPAREN_LPAREN;
	v->a[122470] = anon_sym_PIPE_PIPE;
	v->a[122471] = anon_sym_AMP_AMP;
	v->a[122472] = anon_sym_PIPE;
	v->a[122473] = anon_sym_LT;
	v->a[122474] = anon_sym_GT;
	v->a[122475] = anon_sym_LT_LT;
	v->a[122476] = anon_sym_GT_GT;
	v->a[122477] = anon_sym_PIPE_AMP;
	v->a[122478] = anon_sym_AMP_GT;
	v->a[122479] = anon_sym_AMP_GT_GT;
	small_parse_table_6124(v);
}

void	small_parse_table_6124(t_small_parse_table_array *v)
{
	v->a[122480] = anon_sym_LT_AMP;
	v->a[122481] = anon_sym_GT_AMP;
	v->a[122482] = anon_sym_GT_PIPE;
	v->a[122483] = anon_sym_LT_AMP_DASH;
	v->a[122484] = anon_sym_GT_AMP_DASH;
	v->a[122485] = anon_sym_LT_LT_DASH;
	v->a[122486] = anon_sym_LT_LT_LT;
	v->a[122487] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122488] = anon_sym_DOLLAR_LBRACK;
	v->a[122489] = anon_sym_DOLLAR;
	v->a[122490] = sym__special_character;
	v->a[122491] = anon_sym_DQUOTE;
	v->a[122492] = sym_raw_string;
	v->a[122493] = sym_ansi_c_string;
	v->a[122494] = aux_sym_number_token1;
	v->a[122495] = aux_sym_number_token2;
	v->a[122496] = anon_sym_DOLLAR_LBRACE;
	v->a[122497] = anon_sym_DOLLAR_LPAREN;
	v->a[122498] = anon_sym_BQUOTE;
	v->a[122499] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_6125(v);
}

/* EOF small_parse_table_1224.c */
