/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_104.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_520(t_small_parse_table_array *v)
{
	v->a[10400] = actions(19);
	v->a[10401] = 1;
	v->a[10402] = anon_sym_LBRACE;
	v->a[10403] = actions(41);
	v->a[10404] = 1;
	v->a[10405] = sym_word;
	v->a[10406] = actions(49);
	v->a[10407] = 1;
	v->a[10408] = anon_sym_BANG;
	v->a[10409] = actions(53);
	v->a[10410] = 1;
	v->a[10411] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10412] = actions(55);
	v->a[10413] = 1;
	v->a[10414] = anon_sym_DOLLAR;
	v->a[10415] = actions(57);
	v->a[10416] = 1;
	v->a[10417] = anon_sym_DQUOTE;
	v->a[10418] = actions(61);
	v->a[10419] = 1;
	small_parse_table_521(v);
}

void	small_parse_table_521(t_small_parse_table_array *v)
{
	v->a[10420] = anon_sym_DOLLAR_LBRACE;
	v->a[10421] = actions(63);
	v->a[10422] = 1;
	v->a[10423] = anon_sym_DOLLAR_LPAREN;
	v->a[10424] = actions(65);
	v->a[10425] = 1;
	v->a[10426] = anon_sym_BQUOTE;
	v->a[10427] = actions(67);
	v->a[10428] = 1;
	v->a[10429] = sym_variable_name;
	v->a[10430] = actions(238);
	v->a[10431] = 1;
	v->a[10432] = anon_sym_done;
	v->a[10433] = state(36);
	v->a[10434] = 1;
	v->a[10435] = aux_sym__terminated_statement;
	v->a[10436] = state(271);
	v->a[10437] = 1;
	v->a[10438] = sym_command_name;
	v->a[10439] = state(298);
	small_parse_table_522(v);
}

void	small_parse_table_522(t_small_parse_table_array *v)
{
	v->a[10440] = 1;
	v->a[10441] = sym_variable_assignment;
	v->a[10442] = state(482);
	v->a[10443] = 1;
	v->a[10444] = aux_sym_command_repeat1;
	v->a[10445] = state(600);
	v->a[10446] = 1;
	v->a[10447] = sym_file_redirect;
	v->a[10448] = state(602);
	v->a[10449] = 1;
	v->a[10450] = sym_concatenation;
	v->a[10451] = state(1012);
	v->a[10452] = 1;
	v->a[10453] = sym_pipeline;
	v->a[10454] = state(1068);
	v->a[10455] = 1;
	v->a[10456] = aux_sym_redirected_statement_repeat2;
	v->a[10457] = state(1609);
	v->a[10458] = 1;
	v->a[10459] = sym__statement_not_pipeline;
	small_parse_table_523(v);
}

void	small_parse_table_523(t_small_parse_table_array *v)
{
	v->a[10460] = actions(11);
	v->a[10461] = 2;
	v->a[10462] = anon_sym_while;
	v->a[10463] = anon_sym_until;
	v->a[10464] = actions(59);
	v->a[10465] = 2;
	v->a[10466] = sym_raw_string;
	v->a[10467] = sym_number;
	v->a[10468] = state(425);
	v->a[10469] = 5;
	v->a[10470] = sym_arithmetic_expansion;
	v->a[10471] = sym_string;
	v->a[10472] = sym_simple_expansion;
	v->a[10473] = sym_expansion;
	v->a[10474] = sym_command_substitution;
	v->a[10475] = actions(51);
	v->a[10476] = 7;
	v->a[10477] = anon_sym_LT;
	v->a[10478] = anon_sym_GT;
	v->a[10479] = anon_sym_GT_GT;
	small_parse_table_524(v);
}

void	small_parse_table_524(t_small_parse_table_array *v)
{
	v->a[10480] = anon_sym_LT_AMP;
	v->a[10481] = anon_sym_GT_AMP;
	v->a[10482] = anon_sym_GT_PIPE;
	v->a[10483] = anon_sym_LT_GT;
	v->a[10484] = state(933);
	v->a[10485] = 12;
	v->a[10486] = sym_redirected_statement;
	v->a[10487] = sym_for_statement;
	v->a[10488] = sym_while_statement;
	v->a[10489] = sym_if_statement;
	v->a[10490] = sym_case_statement;
	v->a[10491] = sym_function_definition;
	v->a[10492] = sym_compound_statement;
	v->a[10493] = sym_subshell;
	v->a[10494] = sym_list;
	v->a[10495] = sym_negated_command;
	v->a[10496] = sym_command;
	v->a[10497] = sym__variable_assignments;
	v->a[10498] = 30;
	v->a[10499] = actions(3);
	small_parse_table_525(v);
}

/* EOF small_parse_table_104.c */
