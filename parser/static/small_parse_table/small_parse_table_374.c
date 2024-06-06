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
	v->a[37400] = anon_sym_GT;
	v->a[37401] = anon_sym_GT_GT;
	v->a[37402] = anon_sym_AMP_GT;
	v->a[37403] = anon_sym_AMP_GT_GT;
	v->a[37404] = anon_sym_LT_AMP;
	v->a[37405] = anon_sym_GT_AMP;
	v->a[37406] = anon_sym_GT_PIPE;
	v->a[37407] = anon_sym_LT_AMP_DASH;
	v->a[37408] = anon_sym_GT_AMP_DASH;
	v->a[37409] = anon_sym_LT_LT;
	v->a[37410] = anon_sym_LT_LT_DASH;
	v->a[37411] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37412] = anon_sym_AMP;
	v->a[37413] = aux_sym_concatenation_token1;
	v->a[37414] = anon_sym_DOLLAR;
	v->a[37415] = sym__special_character;
	v->a[37416] = anon_sym_DQUOTE;
	v->a[37417] = sym_raw_string;
	v->a[37418] = aux_sym_number_token1;
	v->a[37419] = aux_sym_number_token2;
	small_parse_table_1871(v);
}

void	small_parse_table_1871(t_small_parse_table_array *v)
{
	v->a[37420] = anon_sym_DOLLAR_LBRACE;
	v->a[37421] = anon_sym_DOLLAR_LPAREN;
	v->a[37422] = anon_sym_BQUOTE;
	v->a[37423] = anon_sym_DOLLAR_BQUOTE;
	v->a[37424] = aux_sym__simple_variable_name_token1;
	v->a[37425] = sym_word;
	v->a[37426] = anon_sym_SEMI;
	v->a[37427] = 19;
	v->a[37428] = actions(57);
	v->a[37429] = 1;
	v->a[37430] = sym_comment;
	v->a[37431] = actions(3483);
	v->a[37432] = 1;
	v->a[37433] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37434] = actions(3485);
	v->a[37435] = 1;
	v->a[37436] = anon_sym_DOLLAR;
	v->a[37437] = actions(3487);
	v->a[37438] = 1;
	v->a[37439] = sym__special_character;
	small_parse_table_1872(v);
}

void	small_parse_table_1872(t_small_parse_table_array *v)
{
	v->a[37440] = actions(3489);
	v->a[37441] = 1;
	v->a[37442] = anon_sym_DQUOTE;
	v->a[37443] = actions(3493);
	v->a[37444] = 1;
	v->a[37445] = aux_sym_number_token1;
	v->a[37446] = actions(3495);
	v->a[37447] = 1;
	v->a[37448] = aux_sym_number_token2;
	v->a[37449] = actions(3497);
	v->a[37450] = 1;
	v->a[37451] = anon_sym_DOLLAR_LBRACE;
	v->a[37452] = actions(3499);
	v->a[37453] = 1;
	v->a[37454] = anon_sym_DOLLAR_LPAREN;
	v->a[37455] = actions(3501);
	v->a[37456] = 1;
	v->a[37457] = anon_sym_BQUOTE;
	v->a[37458] = actions(3503);
	v->a[37459] = 1;
	small_parse_table_1873(v);
}

void	small_parse_table_1873(t_small_parse_table_array *v)
{
	v->a[37460] = anon_sym_DOLLAR_BQUOTE;
	v->a[37461] = actions(3505);
	v->a[37462] = 1;
	v->a[37463] = sym__brace_start;
	v->a[37464] = actions(3507);
	v->a[37465] = 1;
	v->a[37466] = sym_word;
	v->a[37467] = state(2668);
	v->a[37468] = 1;
	v->a[37469] = aux_sym__literal_repeat1;
	v->a[37470] = state(2803);
	v->a[37471] = 1;
	v->a[37472] = sym_concatenation;
	v->a[37473] = actions(3509);
	v->a[37474] = 2;
	v->a[37475] = sym_test_operator;
	v->a[37476] = sym_raw_string;
	v->a[37477] = actions(1528);
	v->a[37478] = 7;
	v->a[37479] = anon_sym_PIPE;
	small_parse_table_1874(v);
}

void	small_parse_table_1874(t_small_parse_table_array *v)
{
	v->a[37480] = anon_sym_LT;
	v->a[37481] = anon_sym_GT;
	v->a[37482] = anon_sym_AMP_GT;
	v->a[37483] = anon_sym_LT_AMP;
	v->a[37484] = anon_sym_GT_AMP;
	v->a[37485] = anon_sym_LT_LT;
	v->a[37486] = state(2638);
	v->a[37487] = 7;
	v->a[37488] = sym_arithmetic_expansion;
	v->a[37489] = sym_brace_expression;
	v->a[37490] = sym_string;
	v->a[37491] = sym_number;
	v->a[37492] = sym_simple_expansion;
	v->a[37493] = sym_expansion;
	v->a[37494] = sym_command_substitution;
	v->a[37495] = actions(1530);
	v->a[37496] = 10;
	v->a[37497] = sym_file_descriptor;
	v->a[37498] = anon_sym_PIPE_AMP;
	v->a[37499] = anon_sym_AMP_AMP;
	small_parse_table_1875(v);
}

/* EOF small_parse_table_374.c */
