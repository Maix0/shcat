/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_374.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1870(t_small_parse_table_array *v)
{
	v->a[37400] = anon_sym_GT_AMP;
	v->a[37401] = state(2489);
	v->a[37402] = 9;
	v->a[37403] = sym_arithmetic_expansion;
	v->a[37404] = sym_brace_expression;
	v->a[37405] = sym_string;
	v->a[37406] = sym_translated_string;
	v->a[37407] = sym_number;
	v->a[37408] = sym_simple_expansion;
	v->a[37409] = sym_expansion;
	v->a[37410] = sym_command_substitution;
	v->a[37411] = sym_process_substitution;
	v->a[37412] = actions(2216);
	v->a[37413] = 11;
	v->a[37414] = sym_file_descriptor;
	v->a[37415] = anon_sym_PIPE_PIPE;
	v->a[37416] = anon_sym_AMP_AMP;
	v->a[37417] = anon_sym_GT_GT;
	v->a[37418] = anon_sym_PIPE_AMP;
	v->a[37419] = anon_sym_RBRACK;
	small_parse_table_1871(v);
}

void	small_parse_table_1871(t_small_parse_table_array *v)
{
	v->a[37420] = anon_sym_AMP_GT_GT;
	v->a[37421] = anon_sym_GT_PIPE;
	v->a[37422] = anon_sym_LT_AMP_DASH;
	v->a[37423] = anon_sym_GT_AMP_DASH;
	v->a[37424] = anon_sym_LT_LT_DASH;
	v->a[37425] = 3;
	v->a[37426] = actions(3);
	v->a[37427] = 1;
	v->a[37428] = sym_comment;
	v->a[37429] = actions(1318);
	v->a[37430] = 6;
	v->a[37431] = sym_file_descriptor;
	v->a[37432] = sym__concat;
	v->a[37433] = sym_test_operator;
	v->a[37434] = sym__bare_dollar;
	v->a[37435] = sym__brace_start;
	v->a[37436] = aux_sym_heredoc_redirect_token1;
	v->a[37437] = actions(1316);
	v->a[37438] = 43;
	v->a[37439] = anon_sym_LPAREN_LPAREN;
	small_parse_table_1872(v);
}

void	small_parse_table_1872(t_small_parse_table_array *v)
{
	v->a[37440] = anon_sym_SEMI;
	v->a[37441] = anon_sym_PIPE_PIPE;
	v->a[37442] = anon_sym_AMP_AMP;
	v->a[37443] = anon_sym_PIPE;
	v->a[37444] = anon_sym_AMP;
	v->a[37445] = anon_sym_EQ_EQ;
	v->a[37446] = anon_sym_LT;
	v->a[37447] = anon_sym_GT;
	v->a[37448] = anon_sym_LT_LT;
	v->a[37449] = anon_sym_GT_GT;
	v->a[37450] = anon_sym_LPAREN;
	v->a[37451] = anon_sym_SEMI_SEMI;
	v->a[37452] = anon_sym_SEMI_AMP;
	v->a[37453] = anon_sym_SEMI_SEMI_AMP;
	v->a[37454] = anon_sym_PIPE_AMP;
	v->a[37455] = anon_sym_EQ_TILDE;
	v->a[37456] = anon_sym_AMP_GT;
	v->a[37457] = anon_sym_AMP_GT_GT;
	v->a[37458] = anon_sym_LT_AMP;
	v->a[37459] = anon_sym_GT_AMP;
	small_parse_table_1873(v);
}

void	small_parse_table_1873(t_small_parse_table_array *v)
{
	v->a[37460] = anon_sym_GT_PIPE;
	v->a[37461] = anon_sym_LT_AMP_DASH;
	v->a[37462] = anon_sym_GT_AMP_DASH;
	v->a[37463] = anon_sym_LT_LT_DASH;
	v->a[37464] = anon_sym_LT_LT_LT;
	v->a[37465] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37466] = anon_sym_DOLLAR_LBRACK;
	v->a[37467] = aux_sym_concatenation_token1;
	v->a[37468] = anon_sym_DOLLAR;
	v->a[37469] = sym__special_character;
	v->a[37470] = anon_sym_DQUOTE;
	v->a[37471] = sym_raw_string;
	v->a[37472] = sym_ansi_c_string;
	v->a[37473] = aux_sym_number_token1;
	v->a[37474] = aux_sym_number_token2;
	v->a[37475] = anon_sym_DOLLAR_LBRACE;
	v->a[37476] = anon_sym_DOLLAR_LPAREN;
	v->a[37477] = anon_sym_BQUOTE;
	v->a[37478] = anon_sym_DOLLAR_BQUOTE;
	v->a[37479] = anon_sym_LT_LPAREN;
	small_parse_table_1874(v);
}

void	small_parse_table_1874(t_small_parse_table_array *v)
{
	v->a[37480] = anon_sym_GT_LPAREN;
	v->a[37481] = sym_word;
	v->a[37482] = 6;
	v->a[37483] = actions(3);
	v->a[37484] = 1;
	v->a[37485] = sym_comment;
	v->a[37486] = actions(4933);
	v->a[37487] = 1;
	v->a[37488] = aux_sym_concatenation_token1;
	v->a[37489] = actions(4935);
	v->a[37490] = 1;
	v->a[37491] = sym__concat;
	v->a[37492] = state(978);
	v->a[37493] = 1;
	v->a[37494] = aux_sym_concatenation_repeat1;
	v->a[37495] = actions(1263);
	v->a[37496] = 5;
	v->a[37497] = sym_file_descriptor;
	v->a[37498] = sym_test_operator;
	v->a[37499] = sym__bare_dollar;
	small_parse_table_1875(v);
}

/* EOF small_parse_table_374.c */
