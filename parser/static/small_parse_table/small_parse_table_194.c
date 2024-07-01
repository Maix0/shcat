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
	v->a[19400] = anon_sym_LBRACE;
	v->a[19401] = actions(176);
	v->a[19402] = 1;
	v->a[19403] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19404] = actions(178);
	v->a[19405] = 1;
	v->a[19406] = anon_sym_DOLLAR;
	v->a[19407] = actions(180);
	v->a[19408] = 1;
	v->a[19409] = anon_sym_DQUOTE;
	v->a[19410] = actions(184);
	v->a[19411] = 1;
	v->a[19412] = anon_sym_DOLLAR_LBRACE;
	v->a[19413] = actions(186);
	v->a[19414] = 1;
	v->a[19415] = anon_sym_DOLLAR_LPAREN;
	v->a[19416] = actions(188);
	v->a[19417] = 1;
	v->a[19418] = anon_sym_BQUOTE;
	v->a[19419] = actions(190);
	small_parse_table_971(v);
}

void	small_parse_table_971(t_small_parse_table_array *v)
{
	v->a[19420] = 1;
	v->a[19421] = sym_file_descriptor;
	v->a[19422] = actions(377);
	v->a[19423] = 1;
	v->a[19424] = sym_variable_name;
	v->a[19425] = state(186);
	v->a[19426] = 1;
	v->a[19427] = sym_command_name;
	v->a[19428] = state(636);
	v->a[19429] = 1;
	v->a[19430] = sym_concatenation;
	v->a[19431] = state(677);
	v->a[19432] = 1;
	v->a[19433] = sym_file_redirect;
	v->a[19434] = state(752);
	v->a[19435] = 1;
	v->a[19436] = aux_sym_command_repeat1;
	v->a[19437] = state(1212);
	v->a[19438] = 1;
	v->a[19439] = sym_variable_assignment;
	small_parse_table_972(v);
}

void	small_parse_table_972(t_small_parse_table_array *v)
{
	v->a[19440] = state(1265);
	v->a[19441] = 1;
	v->a[19442] = aux_sym_redirected_statement_repeat2;
	v->a[19443] = actions(160);
	v->a[19444] = 2;
	v->a[19445] = anon_sym_while;
	v->a[19446] = anon_sym_until;
	v->a[19447] = actions(174);
	v->a[19448] = 2;
	v->a[19449] = anon_sym_LT_AMP_DASH;
	v->a[19450] = anon_sym_GT_AMP_DASH;
	v->a[19451] = actions(182);
	v->a[19452] = 3;
	v->a[19453] = sym_raw_string;
	v->a[19454] = sym_number;
	v->a[19455] = sym_word;
	v->a[19456] = state(385);
	v->a[19457] = 5;
	v->a[19458] = sym_arithmetic_expansion;
	v->a[19459] = sym_string;
	small_parse_table_973(v);
}

void	small_parse_table_973(t_small_parse_table_array *v)
{
	v->a[19460] = sym_simple_expansion;
	v->a[19461] = sym_expansion;
	v->a[19462] = sym_command_substitution;
	v->a[19463] = actions(172);
	v->a[19464] = 6;
	v->a[19465] = anon_sym_LT;
	v->a[19466] = anon_sym_GT;
	v->a[19467] = anon_sym_GT_GT;
	v->a[19468] = anon_sym_LT_AMP;
	v->a[19469] = anon_sym_GT_AMP;
	v->a[19470] = anon_sym_GT_PIPE;
	v->a[19471] = state(1361);
	v->a[19472] = 7;
	v->a[19473] = sym_for_statement;
	v->a[19474] = sym_while_statement;
	v->a[19475] = sym_if_statement;
	v->a[19476] = sym_compound_statement;
	v->a[19477] = sym_subshell;
	v->a[19478] = sym_command;
	v->a[19479] = sym__variable_assignments;
	small_parse_table_974(v);
}

void	small_parse_table_974(t_small_parse_table_array *v)
{
	v->a[19480] = 25;
	v->a[19481] = actions(3);
	v->a[19482] = 1;
	v->a[19483] = sym_comment;
	v->a[19484] = actions(9);
	v->a[19485] = 1;
	v->a[19486] = anon_sym_for;
	v->a[19487] = actions(13);
	v->a[19488] = 1;
	v->a[19489] = anon_sym_if;
	v->a[19490] = actions(17);
	v->a[19491] = 1;
	v->a[19492] = anon_sym_LPAREN;
	v->a[19493] = actions(19);
	v->a[19494] = 1;
	v->a[19495] = anon_sym_LBRACE;
	v->a[19496] = actions(59);
	v->a[19497] = 1;
	v->a[19498] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19499] = actions(61);
	small_parse_table_975(v);
}

/* EOF small_parse_table_194.c */
