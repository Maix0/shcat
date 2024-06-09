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
	v->a[19400] = aux_sym_redirected_statement_repeat2;
	v->a[19401] = state(2029);
	v->a[19402] = 1;
	v->a[19403] = sym__statement_not_pipeline;
	v->a[19404] = actions(11);
	v->a[19405] = 2;
	v->a[19406] = anon_sym_while;
	v->a[19407] = anon_sym_until;
	v->a[19408] = actions(355);
	v->a[19409] = 2;
	v->a[19410] = anon_sym_LT_AMP_DASH;
	v->a[19411] = anon_sym_GT_AMP_DASH;
	v->a[19412] = state(686);
	v->a[19413] = 6;
	v->a[19414] = sym_arithmetic_expansion;
	v->a[19415] = sym_string;
	v->a[19416] = sym_number;
	v->a[19417] = sym_simple_expansion;
	v->a[19418] = sym_expansion;
	v->a[19419] = sym_command_substitution;
	small_parse_table_971(v);
}

void	small_parse_table_971(t_small_parse_table_array *v)
{
	v->a[19420] = actions(353);
	v->a[19421] = 8;
	v->a[19422] = anon_sym_LT;
	v->a[19423] = anon_sym_GT;
	v->a[19424] = anon_sym_GT_GT;
	v->a[19425] = anon_sym_AMP_GT;
	v->a[19426] = anon_sym_AMP_GT_GT;
	v->a[19427] = anon_sym_LT_AMP;
	v->a[19428] = anon_sym_GT_AMP;
	v->a[19429] = anon_sym_GT_PIPE;
	v->a[19430] = state(1301);
	v->a[19431] = 12;
	v->a[19432] = sym_redirected_statement;
	v->a[19433] = sym_for_statement;
	v->a[19434] = sym_while_statement;
	v->a[19435] = sym_if_statement;
	v->a[19436] = sym_case_statement;
	v->a[19437] = sym_function_definition;
	v->a[19438] = sym_compound_statement;
	v->a[19439] = sym_subshell;
	small_parse_table_972(v);
}

void	small_parse_table_972(t_small_parse_table_array *v)
{
	v->a[19440] = sym_list;
	v->a[19441] = sym_negated_command;
	v->a[19442] = sym_command;
	v->a[19443] = sym_variable_assignments;
	v->a[19444] = 32;
	v->a[19445] = actions(3);
	v->a[19446] = 1;
	v->a[19447] = sym_comment;
	v->a[19448] = actions(363);
	v->a[19449] = 1;
	v->a[19450] = sym_word;
	v->a[19451] = actions(365);
	v->a[19452] = 1;
	v->a[19453] = anon_sym_for;
	v->a[19454] = actions(369);
	v->a[19455] = 1;
	v->a[19456] = anon_sym_if;
	v->a[19457] = actions(371);
	v->a[19458] = 1;
	v->a[19459] = anon_sym_case;
	small_parse_table_973(v);
}

void	small_parse_table_973(t_small_parse_table_array *v)
{
	v->a[19460] = actions(373);
	v->a[19461] = 1;
	v->a[19462] = anon_sym_LPAREN;
	v->a[19463] = actions(375);
	v->a[19464] = 1;
	v->a[19465] = anon_sym_LBRACE;
	v->a[19466] = actions(377);
	v->a[19467] = 1;
	v->a[19468] = anon_sym_BANG;
	v->a[19469] = actions(383);
	v->a[19470] = 1;
	v->a[19471] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19472] = actions(385);
	v->a[19473] = 1;
	v->a[19474] = anon_sym_DOLLAR;
	v->a[19475] = actions(387);
	v->a[19476] = 1;
	v->a[19477] = anon_sym_DQUOTE;
	v->a[19478] = actions(389);
	v->a[19479] = 1;
	small_parse_table_974(v);
}

void	small_parse_table_974(t_small_parse_table_array *v)
{
	v->a[19480] = sym_raw_string;
	v->a[19481] = actions(391);
	v->a[19482] = 1;
	v->a[19483] = aux_sym_number_token1;
	v->a[19484] = actions(393);
	v->a[19485] = 1;
	v->a[19486] = aux_sym_number_token2;
	v->a[19487] = actions(395);
	v->a[19488] = 1;
	v->a[19489] = anon_sym_DOLLAR_LBRACE;
	v->a[19490] = actions(397);
	v->a[19491] = 1;
	v->a[19492] = anon_sym_DOLLAR_LPAREN;
	v->a[19493] = actions(399);
	v->a[19494] = 1;
	v->a[19495] = anon_sym_BQUOTE;
	v->a[19496] = actions(401);
	v->a[19497] = 1;
	v->a[19498] = sym_file_descriptor;
	v->a[19499] = actions(403);
	small_parse_table_975(v);
}

/* EOF small_parse_table_194.c */
