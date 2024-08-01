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
	v->a[19400] = sym_command_substitution;
	v->a[19401] = 18;
	v->a[19402] = actions(3);
	v->a[19403] = 1;
	v->a[19404] = sym_comment;
	v->a[19405] = actions(778);
	v->a[19406] = 1;
	v->a[19407] = anon_sym_LPAREN;
	v->a[19408] = actions(782);
	v->a[19409] = 1;
	v->a[19410] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19411] = actions(784);
	v->a[19412] = 1;
	v->a[19413] = anon_sym_DOLLAR;
	v->a[19414] = actions(786);
	v->a[19415] = 1;
	v->a[19416] = anon_sym_DQUOTE;
	v->a[19417] = actions(788);
	v->a[19418] = 1;
	v->a[19419] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_971(v);
}

void	small_parse_table_971(t_small_parse_table_array *v)
{
	v->a[19420] = actions(790);
	v->a[19421] = 1;
	v->a[19422] = anon_sym_DOLLAR_LPAREN;
	v->a[19423] = actions(792);
	v->a[19424] = 1;
	v->a[19425] = anon_sym_BQUOTE;
	v->a[19426] = actions(794);
	v->a[19427] = 1;
	v->a[19428] = sym_extglob_pattern;
	v->a[19429] = actions(804);
	v->a[19430] = 1;
	v->a[19431] = anon_sym_esac;
	v->a[19432] = state(484);
	v->a[19433] = 1;
	v->a[19434] = sym_terminator;
	v->a[19435] = state(533);
	v->a[19436] = 1;
	v->a[19437] = aux_sym_case_statement_repeat1;
	v->a[19438] = state(1232);
	v->a[19439] = 1;
	small_parse_table_972(v);
}

void	small_parse_table_972(t_small_parse_table_array *v)
{
	v->a[19440] = sym_case_item;
	v->a[19441] = state(1752);
	v->a[19442] = 1;
	v->a[19443] = sym__case_item_last;
	v->a[19444] = state(1538);
	v->a[19445] = 2;
	v->a[19446] = sym_concatenation;
	v->a[19447] = sym__extglob_blob;
	v->a[19448] = actions(774);
	v->a[19449] = 3;
	v->a[19450] = sym_raw_string;
	v->a[19451] = sym_number;
	v->a[19452] = sym_word;
	v->a[19453] = actions(780);
	v->a[19454] = 3;
	v->a[19455] = anon_sym_SEMI_SEMI;
	v->a[19456] = aux_sym_heredoc_redirect_token1;
	v->a[19457] = anon_sym_SEMI;
	v->a[19458] = state(1468);
	v->a[19459] = 5;
	small_parse_table_973(v);
}

void	small_parse_table_973(t_small_parse_table_array *v)
{
	v->a[19460] = sym_arithmetic_expansion;
	v->a[19461] = sym_string;
	v->a[19462] = sym_simple_expansion;
	v->a[19463] = sym_expansion;
	v->a[19464] = sym_command_substitution;
	v->a[19465] = 5;
	v->a[19466] = actions(3);
	v->a[19467] = 1;
	v->a[19468] = sym_comment;
	v->a[19469] = actions(810);
	v->a[19470] = 1;
	v->a[19471] = sym_variable_name;
	v->a[19472] = actions(808);
	v->a[19473] = 2;
	v->a[19474] = aux_sym__simple_variable_name_token1;
	v->a[19475] = aux_sym__multiline_variable_name_token1;
	v->a[19476] = actions(806);
	v->a[19477] = 8;
	v->a[19478] = anon_sym_BANG;
	v->a[19479] = anon_sym_DASH;
	small_parse_table_974(v);
}

void	small_parse_table_974(t_small_parse_table_array *v)
{
	v->a[19480] = anon_sym_STAR;
	v->a[19481] = anon_sym_QMARK;
	v->a[19482] = anon_sym_DOLLAR;
	v->a[19483] = anon_sym_POUND;
	v->a[19484] = anon_sym_AT;
	v->a[19485] = anon_sym_0;
	v->a[19486] = actions(343);
	v->a[19487] = 15;
	v->a[19488] = anon_sym_PIPE;
	v->a[19489] = anon_sym_AMP_AMP;
	v->a[19490] = anon_sym_PIPE_PIPE;
	v->a[19491] = anon_sym_LT;
	v->a[19492] = anon_sym_GT;
	v->a[19493] = anon_sym_GT_GT;
	v->a[19494] = anon_sym_LT_LT;
	v->a[19495] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19496] = anon_sym_DQUOTE;
	v->a[19497] = sym_raw_string;
	v->a[19498] = sym_number;
	v->a[19499] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_975(v);
}

/* EOF small_parse_table_194.c */
