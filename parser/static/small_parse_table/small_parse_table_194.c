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
	v->a[19400] = sym_while_statement;
	v->a[19401] = sym_if_statement;
	v->a[19402] = sym_compound_statement;
	v->a[19403] = sym_subshell;
	v->a[19404] = sym_command;
	v->a[19405] = sym_variable_assignments;
	v->a[19406] = actions(224);
	v->a[19407] = 8;
	v->a[19408] = anon_sym_LT;
	v->a[19409] = anon_sym_GT;
	v->a[19410] = anon_sym_GT_GT;
	v->a[19411] = anon_sym_AMP_GT;
	v->a[19412] = anon_sym_AMP_GT_GT;
	v->a[19413] = anon_sym_LT_AMP;
	v->a[19414] = anon_sym_GT_AMP;
	v->a[19415] = anon_sym_GT_PIPE;
	v->a[19416] = 25;
	v->a[19417] = actions(3);
	v->a[19418] = 1;
	v->a[19419] = sym_comment;
	small_parse_table_971(v);
}

void	small_parse_table_971(t_small_parse_table_array *v)
{
	v->a[19420] = actions(9);
	v->a[19421] = 1;
	v->a[19422] = anon_sym_for;
	v->a[19423] = actions(13);
	v->a[19424] = 1;
	v->a[19425] = anon_sym_if;
	v->a[19426] = actions(17);
	v->a[19427] = 1;
	v->a[19428] = anon_sym_LPAREN;
	v->a[19429] = actions(19);
	v->a[19430] = 1;
	v->a[19431] = anon_sym_LBRACE;
	v->a[19432] = actions(59);
	v->a[19433] = 1;
	v->a[19434] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19435] = actions(61);
	v->a[19436] = 1;
	v->a[19437] = anon_sym_DOLLAR;
	v->a[19438] = actions(63);
	v->a[19439] = 1;
	small_parse_table_972(v);
}

void	small_parse_table_972(t_small_parse_table_array *v)
{
	v->a[19440] = anon_sym_DQUOTE;
	v->a[19441] = actions(67);
	v->a[19442] = 1;
	v->a[19443] = anon_sym_DOLLAR_LBRACE;
	v->a[19444] = actions(69);
	v->a[19445] = 1;
	v->a[19446] = anon_sym_DOLLAR_LPAREN;
	v->a[19447] = actions(71);
	v->a[19448] = 1;
	v->a[19449] = anon_sym_BQUOTE;
	v->a[19450] = actions(73);
	v->a[19451] = 1;
	v->a[19452] = sym_file_descriptor;
	v->a[19453] = actions(377);
	v->a[19454] = 1;
	v->a[19455] = sym_variable_name;
	v->a[19456] = state(187);
	v->a[19457] = 1;
	v->a[19458] = sym_command_name;
	v->a[19459] = state(647);
	small_parse_table_973(v);
}

void	small_parse_table_973(t_small_parse_table_array *v)
{
	v->a[19460] = 1;
	v->a[19461] = sym_concatenation;
	v->a[19462] = state(736);
	v->a[19463] = 1;
	v->a[19464] = aux_sym_command_repeat1;
	v->a[19465] = state(738);
	v->a[19466] = 1;
	v->a[19467] = sym_file_redirect;
	v->a[19468] = state(1418);
	v->a[19469] = 1;
	v->a[19470] = sym_variable_assignment;
	v->a[19471] = state(1454);
	v->a[19472] = 1;
	v->a[19473] = aux_sym_redirected_statement_repeat2;
	v->a[19474] = actions(11);
	v->a[19475] = 2;
	v->a[19476] = anon_sym_while;
	v->a[19477] = anon_sym_until;
	v->a[19478] = actions(57);
	v->a[19479] = 2;
	small_parse_table_974(v);
}

void	small_parse_table_974(t_small_parse_table_array *v)
{
	v->a[19480] = anon_sym_LT_AMP_DASH;
	v->a[19481] = anon_sym_GT_AMP_DASH;
	v->a[19482] = actions(65);
	v->a[19483] = 3;
	v->a[19484] = sym_raw_string;
	v->a[19485] = sym_number;
	v->a[19486] = sym_word;
	v->a[19487] = state(394);
	v->a[19488] = 5;
	v->a[19489] = sym_arithmetic_expansion;
	v->a[19490] = sym_string;
	v->a[19491] = sym_simple_expansion;
	v->a[19492] = sym_expansion;
	v->a[19493] = sym_command_substitution;
	v->a[19494] = state(1379);
	v->a[19495] = 7;
	v->a[19496] = sym_for_statement;
	v->a[19497] = sym_while_statement;
	v->a[19498] = sym_if_statement;
	v->a[19499] = sym_compound_statement;
	small_parse_table_975(v);
}

/* EOF small_parse_table_194.c */
