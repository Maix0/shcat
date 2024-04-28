/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_194.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_970(t_small_parse_table_array *v)
{
	v->a[19400] = anon_sym_PIPE;
	v->a[19401] = anon_sym_EQ_EQ;
	v->a[19402] = anon_sym_LT;
	v->a[19403] = anon_sym_GT;
	v->a[19404] = anon_sym_LT_LT;
	v->a[19405] = anon_sym_GT_GT;
	v->a[19406] = anon_sym_LPAREN;
	v->a[19407] = anon_sym_PIPE_AMP;
	v->a[19408] = anon_sym_EQ_TILDE;
	v->a[19409] = anon_sym_AMP_GT;
	v->a[19410] = anon_sym_AMP_GT_GT;
	v->a[19411] = anon_sym_LT_AMP;
	v->a[19412] = anon_sym_GT_AMP;
	v->a[19413] = anon_sym_GT_PIPE;
	v->a[19414] = anon_sym_LT_AMP_DASH;
	v->a[19415] = anon_sym_GT_AMP_DASH;
	v->a[19416] = anon_sym_LT_LT_DASH;
	v->a[19417] = anon_sym_LT_LT_LT;
	v->a[19418] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19419] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_971(v);
}

void	small_parse_table_971(t_small_parse_table_array *v)
{
	v->a[19420] = sym__special_character;
	v->a[19421] = sym_raw_string;
	v->a[19422] = sym_ansi_c_string;
	v->a[19423] = aux_sym_number_token1;
	v->a[19424] = aux_sym_number_token2;
	v->a[19425] = anon_sym_DOLLAR_LBRACE;
	v->a[19426] = anon_sym_DOLLAR_LPAREN;
	v->a[19427] = anon_sym_BQUOTE;
	v->a[19428] = anon_sym_DOLLAR_BQUOTE;
	v->a[19429] = anon_sym_LT_LPAREN;
	v->a[19430] = anon_sym_GT_LPAREN;
	v->a[19431] = sym_word;
	v->a[19432] = 21;
	v->a[19433] = actions(3);
	v->a[19434] = 1;
	v->a[19435] = sym_comment;
	v->a[19436] = actions(3785);
	v->a[19437] = 1;
	v->a[19438] = anon_sym_DOLLAR_LBRACK;
	v->a[19439] = actions(3787);
	small_parse_table_972(v);
}

void	small_parse_table_972(t_small_parse_table_array *v)
{
	v->a[19440] = 1;
	v->a[19441] = anon_sym_DOLLAR;
	v->a[19442] = actions(3789);
	v->a[19443] = 1;
	v->a[19444] = sym__special_character;
	v->a[19445] = actions(3791);
	v->a[19446] = 1;
	v->a[19447] = anon_sym_DQUOTE;
	v->a[19448] = actions(3793);
	v->a[19449] = 1;
	v->a[19450] = aux_sym_number_token1;
	v->a[19451] = actions(3795);
	v->a[19452] = 1;
	v->a[19453] = aux_sym_number_token2;
	v->a[19454] = actions(3797);
	v->a[19455] = 1;
	v->a[19456] = anon_sym_DOLLAR_LBRACE;
	v->a[19457] = actions(3799);
	v->a[19458] = 1;
	v->a[19459] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_973(v);
}

void	small_parse_table_973(t_small_parse_table_array *v)
{
	v->a[19460] = actions(3801);
	v->a[19461] = 1;
	v->a[19462] = anon_sym_BQUOTE;
	v->a[19463] = actions(3803);
	v->a[19464] = 1;
	v->a[19465] = anon_sym_DOLLAR_BQUOTE;
	v->a[19466] = actions(3807);
	v->a[19467] = 1;
	v->a[19468] = sym_test_operator;
	v->a[19469] = actions(3809);
	v->a[19470] = 1;
	v->a[19471] = sym__brace_start;
	v->a[19472] = state(4277);
	v->a[19473] = 1;
	v->a[19474] = aux_sym__literal_repeat1;
	v->a[19475] = state(4782);
	v->a[19476] = 1;
	v->a[19477] = sym_concatenation;
	v->a[19478] = actions(2496);
	v->a[19479] = 2;
	small_parse_table_974(v);
}

void	small_parse_table_974(t_small_parse_table_array *v)
{
	v->a[19480] = sym_file_descriptor;
	v->a[19481] = aux_sym_heredoc_redirect_token1;
	v->a[19482] = actions(3783);
	v->a[19483] = 2;
	v->a[19484] = anon_sym_LPAREN_LPAREN;
	v->a[19485] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19486] = actions(3805);
	v->a[19487] = 2;
	v->a[19488] = anon_sym_LT_LPAREN;
	v->a[19489] = anon_sym_GT_LPAREN;
	v->a[19490] = actions(3781);
	v->a[19491] = 3;
	v->a[19492] = sym_raw_string;
	v->a[19493] = sym_ansi_c_string;
	v->a[19494] = sym_word;
	v->a[19495] = state(4522);
	v->a[19496] = 9;
	v->a[19497] = sym_arithmetic_expansion;
	v->a[19498] = sym_brace_expression;
	v->a[19499] = sym_string;
	small_parse_table_975(v);
}

/* EOF small_parse_table_194.c */
