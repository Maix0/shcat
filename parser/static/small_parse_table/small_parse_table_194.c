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
	v->a[19400] = 1;
	v->a[19401] = aux_sym_number_token2;
	v->a[19402] = actions(2868);
	v->a[19403] = 1;
	v->a[19404] = anon_sym_DOLLAR_LBRACE;
	v->a[19405] = actions(2871);
	v->a[19406] = 1;
	v->a[19407] = anon_sym_DOLLAR_LPAREN;
	v->a[19408] = actions(2874);
	v->a[19409] = 1;
	v->a[19410] = anon_sym_BQUOTE;
	v->a[19411] = actions(2877);
	v->a[19412] = 1;
	v->a[19413] = anon_sym_DOLLAR_BQUOTE;
	v->a[19414] = actions(2880);
	v->a[19415] = 1;
	v->a[19416] = aux_sym__simple_variable_name_token1;
	v->a[19417] = actions(2883);
	v->a[19418] = 1;
	v->a[19419] = sym__brace_start;
	small_parse_table_971(v);
}

void	small_parse_table_971(t_small_parse_table_array *v)
{
	v->a[19420] = state(1629);
	v->a[19421] = 1;
	v->a[19422] = aux_sym__literal_repeat1;
	v->a[19423] = actions(2859);
	v->a[19424] = 2;
	v->a[19425] = sym_test_operator;
	v->a[19426] = sym_raw_string;
	v->a[19427] = state(518);
	v->a[19428] = 2;
	v->a[19429] = sym_concatenation;
	v->a[19430] = aux_sym_unset_command_repeat1;
	v->a[19431] = actions(964);
	v->a[19432] = 7;
	v->a[19433] = anon_sym_PIPE;
	v->a[19434] = anon_sym_LT;
	v->a[19435] = anon_sym_GT;
	v->a[19436] = anon_sym_AMP_GT;
	v->a[19437] = anon_sym_LT_AMP;
	v->a[19438] = anon_sym_GT_AMP;
	v->a[19439] = anon_sym_LT_LT;
	small_parse_table_972(v);
}

void	small_parse_table_972(t_small_parse_table_array *v)
{
	v->a[19440] = state(1442);
	v->a[19441] = 7;
	v->a[19442] = sym_arithmetic_expansion;
	v->a[19443] = sym_brace_expression;
	v->a[19444] = sym_string;
	v->a[19445] = sym_number;
	v->a[19446] = sym_simple_expansion;
	v->a[19447] = sym_expansion;
	v->a[19448] = sym_command_substitution;
	v->a[19449] = actions(966);
	v->a[19450] = 10;
	v->a[19451] = sym_file_descriptor;
	v->a[19452] = anon_sym_PIPE_AMP;
	v->a[19453] = anon_sym_AMP_AMP;
	v->a[19454] = anon_sym_PIPE_PIPE;
	v->a[19455] = anon_sym_GT_GT;
	v->a[19456] = anon_sym_AMP_GT_GT;
	v->a[19457] = anon_sym_GT_PIPE;
	v->a[19458] = anon_sym_LT_AMP_DASH;
	v->a[19459] = anon_sym_GT_AMP_DASH;
	small_parse_table_973(v);
}

void	small_parse_table_973(t_small_parse_table_array *v)
{
	v->a[19460] = anon_sym_LT_LT_DASH;
	v->a[19461] = 3;
	v->a[19462] = actions(3);
	v->a[19463] = 1;
	v->a[19464] = sym_comment;
	v->a[19465] = actions(2888);
	v->a[19466] = 6;
	v->a[19467] = sym_file_descriptor;
	v->a[19468] = sym__concat;
	v->a[19469] = sym_variable_name;
	v->a[19470] = sym_test_operator;
	v->a[19471] = sym__brace_start;
	v->a[19472] = aux_sym_heredoc_redirect_token1;
	v->a[19473] = actions(2886);
	v->a[19474] = 36;
	v->a[19475] = anon_sym_esac;
	v->a[19476] = anon_sym_PIPE;
	v->a[19477] = anon_sym_SEMI_SEMI;
	v->a[19478] = anon_sym_SEMI_AMP;
	v->a[19479] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_974(v);
}

void	small_parse_table_974(t_small_parse_table_array *v)
{
	v->a[19480] = anon_sym_PIPE_AMP;
	v->a[19481] = anon_sym_AMP_AMP;
	v->a[19482] = anon_sym_PIPE_PIPE;
	v->a[19483] = anon_sym_LT;
	v->a[19484] = anon_sym_GT;
	v->a[19485] = anon_sym_GT_GT;
	v->a[19486] = anon_sym_AMP_GT;
	v->a[19487] = anon_sym_AMP_GT_GT;
	v->a[19488] = anon_sym_LT_AMP;
	v->a[19489] = anon_sym_GT_AMP;
	v->a[19490] = anon_sym_GT_PIPE;
	v->a[19491] = anon_sym_LT_AMP_DASH;
	v->a[19492] = anon_sym_GT_AMP_DASH;
	v->a[19493] = anon_sym_LT_LT;
	v->a[19494] = anon_sym_LT_LT_DASH;
	v->a[19495] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19496] = anon_sym_AMP;
	v->a[19497] = aux_sym_concatenation_token1;
	v->a[19498] = anon_sym_DOLLAR;
	v->a[19499] = sym__special_character;
	small_parse_table_975(v);
}

/* EOF small_parse_table_194.c */
