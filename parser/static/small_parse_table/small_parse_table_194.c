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
	v->a[19400] = anon_sym_GT_AMP;
	v->a[19401] = anon_sym_GT_PIPE;
	v->a[19402] = anon_sym_LT_GT;
	v->a[19403] = anon_sym_LT_LT;
	v->a[19404] = anon_sym_LT_LT_DASH;
	v->a[19405] = aux_sym_heredoc_redirect_token1;
	v->a[19406] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19407] = anon_sym_AMP;
	v->a[19408] = anon_sym_DQUOTE;
	v->a[19409] = sym_raw_string;
	v->a[19410] = sym_number;
	v->a[19411] = anon_sym_DOLLAR_LBRACE;
	v->a[19412] = anon_sym_DOLLAR_LPAREN;
	v->a[19413] = anon_sym_BQUOTE;
	v->a[19414] = sym_word;
	v->a[19415] = anon_sym_SEMI;
	v->a[19416] = 16;
	v->a[19417] = actions(3);
	v->a[19418] = 1;
	v->a[19419] = sym_comment;
	small_parse_table_971(v);
}

void	small_parse_table_971(t_small_parse_table_array *v)
{
	v->a[19420] = actions(17);
	v->a[19421] = 1;
	v->a[19422] = anon_sym_LPAREN;
	v->a[19423] = actions(453);
	v->a[19424] = 1;
	v->a[19425] = sym_file_descriptor;
	v->a[19426] = actions(463);
	v->a[19427] = 1;
	v->a[19428] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19429] = actions(465);
	v->a[19430] = 1;
	v->a[19431] = anon_sym_DOLLAR;
	v->a[19432] = actions(467);
	v->a[19433] = 1;
	v->a[19434] = anon_sym_DQUOTE;
	v->a[19435] = actions(469);
	v->a[19436] = 1;
	v->a[19437] = anon_sym_DOLLAR_LBRACE;
	v->a[19438] = actions(471);
	v->a[19439] = 1;
	small_parse_table_972(v);
}

void	small_parse_table_972(t_small_parse_table_array *v)
{
	v->a[19440] = anon_sym_DOLLAR_LPAREN;
	v->a[19441] = actions(473);
	v->a[19442] = 1;
	v->a[19443] = anon_sym_BQUOTE;
	v->a[19444] = actions(475);
	v->a[19445] = 1;
	v->a[19446] = sym__bare_dollar;
	v->a[19447] = state(248);
	v->a[19448] = 1;
	v->a[19449] = aux_sym_command_repeat2;
	v->a[19450] = state(662);
	v->a[19451] = 1;
	v->a[19452] = sym_concatenation;
	v->a[19453] = state(1169);
	v->a[19454] = 1;
	v->a[19455] = sym_subshell;
	v->a[19456] = actions(493);
	v->a[19457] = 3;
	v->a[19458] = sym_raw_string;
	v->a[19459] = sym_number;
	small_parse_table_973(v);
}

void	small_parse_table_973(t_small_parse_table_array *v)
{
	v->a[19460] = sym_word;
	v->a[19461] = state(490);
	v->a[19462] = 5;
	v->a[19463] = sym_arithmetic_expansion;
	v->a[19464] = sym_string;
	v->a[19465] = sym_simple_expansion;
	v->a[19466] = sym_expansion;
	v->a[19467] = sym_command_substitution;
	v->a[19468] = actions(439);
	v->a[19469] = 16;
	v->a[19470] = anon_sym_PIPE;
	v->a[19471] = anon_sym_SEMI_SEMI;
	v->a[19472] = anon_sym_AMP_AMP;
	v->a[19473] = anon_sym_PIPE_PIPE;
	v->a[19474] = anon_sym_LT;
	v->a[19475] = anon_sym_GT;
	v->a[19476] = anon_sym_GT_GT;
	v->a[19477] = anon_sym_LT_AMP;
	v->a[19478] = anon_sym_GT_AMP;
	v->a[19479] = anon_sym_GT_PIPE;
	small_parse_table_974(v);
}

void	small_parse_table_974(t_small_parse_table_array *v)
{
	v->a[19480] = anon_sym_LT_GT;
	v->a[19481] = anon_sym_LT_LT;
	v->a[19482] = anon_sym_LT_LT_DASH;
	v->a[19483] = aux_sym_heredoc_redirect_token1;
	v->a[19484] = anon_sym_AMP;
	v->a[19485] = anon_sym_SEMI;
	v->a[19486] = 15;
	v->a[19487] = actions(3);
	v->a[19488] = 1;
	v->a[19489] = sym_comment;
	v->a[19490] = actions(17);
	v->a[19491] = 1;
	v->a[19492] = anon_sym_LPAREN;
	v->a[19493] = actions(453);
	v->a[19494] = 1;
	v->a[19495] = sym_file_descriptor;
	v->a[19496] = actions(463);
	v->a[19497] = 1;
	v->a[19498] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19499] = actions(465);
	small_parse_table_975(v);
}

/* EOF small_parse_table_194.c */
