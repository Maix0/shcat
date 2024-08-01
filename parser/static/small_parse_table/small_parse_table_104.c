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
	v->a[10400] = anon_sym_BANG;
	v->a[10401] = actions(216);
	v->a[10402] = 1;
	v->a[10403] = sym_variable_name;
	v->a[10404] = state(112);
	v->a[10405] = 1;
	v->a[10406] = aux_sym__statements_repeat1;
	v->a[10407] = state(158);
	v->a[10408] = 1;
	v->a[10409] = sym_command_name;
	v->a[10410] = state(186);
	v->a[10411] = 1;
	v->a[10412] = sym_variable_assignment;
	v->a[10413] = state(298);
	v->a[10414] = 1;
	v->a[10415] = aux_sym_command_repeat1;
	v->a[10416] = state(526);
	v->a[10417] = 1;
	v->a[10418] = sym_file_redirect;
	v->a[10419] = state(555);
	small_parse_table_521(v);
}

void	small_parse_table_521(t_small_parse_table_array *v)
{
	v->a[10420] = 1;
	v->a[10421] = sym_concatenation;
	v->a[10422] = state(937);
	v->a[10423] = 1;
	v->a[10424] = sym_pipeline;
	v->a[10425] = state(1019);
	v->a[10426] = 1;
	v->a[10427] = aux_sym_redirected_statement_repeat2;
	v->a[10428] = state(1557);
	v->a[10429] = 1;
	v->a[10430] = sym__statement_not_pipeline;
	v->a[10431] = state(1688);
	v->a[10432] = 1;
	v->a[10433] = sym__statements;
	v->a[10434] = actions(11);
	v->a[10435] = 2;
	v->a[10436] = anon_sym_while;
	v->a[10437] = anon_sym_until;
	v->a[10438] = actions(214);
	v->a[10439] = 2;
	small_parse_table_522(v);
}

void	small_parse_table_522(t_small_parse_table_array *v)
{
	v->a[10440] = sym_raw_string;
	v->a[10441] = sym_number;
	v->a[10442] = actions(212);
	v->a[10443] = 3;
	v->a[10444] = anon_sym_LT;
	v->a[10445] = anon_sym_GT;
	v->a[10446] = anon_sym_GT_GT;
	v->a[10447] = state(277);
	v->a[10448] = 5;
	v->a[10449] = sym_arithmetic_expansion;
	v->a[10450] = sym_string;
	v->a[10451] = sym_simple_expansion;
	v->a[10452] = sym_expansion;
	v->a[10453] = sym_command_substitution;
	v->a[10454] = state(877);
	v->a[10455] = 12;
	v->a[10456] = sym_redirected_statement;
	v->a[10457] = sym_for_statement;
	v->a[10458] = sym_while_statement;
	v->a[10459] = sym_if_statement;
	small_parse_table_523(v);
}

void	small_parse_table_523(t_small_parse_table_array *v)
{
	v->a[10460] = sym_case_statement;
	v->a[10461] = sym_function_definition;
	v->a[10462] = sym_compound_statement;
	v->a[10463] = sym_subshell;
	v->a[10464] = sym_list;
	v->a[10465] = sym_negated_command;
	v->a[10466] = sym_command;
	v->a[10467] = sym__variable_assignments;
	v->a[10468] = 30;
	v->a[10469] = actions(3);
	v->a[10470] = 1;
	v->a[10471] = sym_comment;
	v->a[10472] = actions(9);
	v->a[10473] = 1;
	v->a[10474] = anon_sym_for;
	v->a[10475] = actions(13);
	v->a[10476] = 1;
	v->a[10477] = anon_sym_if;
	v->a[10478] = actions(15);
	v->a[10479] = 1;
	small_parse_table_524(v);
}

void	small_parse_table_524(t_small_parse_table_array *v)
{
	v->a[10480] = anon_sym_case;
	v->a[10481] = actions(17);
	v->a[10482] = 1;
	v->a[10483] = anon_sym_LPAREN;
	v->a[10484] = actions(19);
	v->a[10485] = 1;
	v->a[10486] = anon_sym_LBRACE;
	v->a[10487] = actions(53);
	v->a[10488] = 1;
	v->a[10489] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10490] = actions(55);
	v->a[10491] = 1;
	v->a[10492] = anon_sym_DOLLAR;
	v->a[10493] = actions(57);
	v->a[10494] = 1;
	v->a[10495] = anon_sym_DQUOTE;
	v->a[10496] = actions(61);
	v->a[10497] = 1;
	v->a[10498] = anon_sym_DOLLAR_LBRACE;
	v->a[10499] = actions(63);
	small_parse_table_525(v);
}

/* EOF small_parse_table_104.c */
