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
	v->a[10400] = 1;
	v->a[10401] = sym_raw_string;
	v->a[10402] = actions(258);
	v->a[10403] = 1;
	v->a[10404] = sym_file_descriptor;
	v->a[10405] = actions(260);
	v->a[10406] = 1;
	v->a[10407] = sym_variable_name;
	v->a[10408] = state(141);
	v->a[10409] = 1;
	v->a[10410] = aux_sym__statements_repeat1;
	v->a[10411] = state(175);
	v->a[10412] = 1;
	v->a[10413] = sym_command_name;
	v->a[10414] = state(278);
	v->a[10415] = 1;
	v->a[10416] = sym_variable_assignment;
	v->a[10417] = state(567);
	v->a[10418] = 1;
	v->a[10419] = aux_sym_command_repeat1;
	small_parse_table_521(v);
}

void	small_parse_table_521(t_small_parse_table_array *v)
{
	v->a[10420] = state(582);
	v->a[10421] = 1;
	v->a[10422] = sym_concatenation;
	v->a[10423] = state(709);
	v->a[10424] = 1;
	v->a[10425] = sym_file_redirect;
	v->a[10426] = state(1100);
	v->a[10427] = 1;
	v->a[10428] = sym_pipeline;
	v->a[10429] = state(1196);
	v->a[10430] = 1;
	v->a[10431] = aux_sym_redirected_statement_repeat2;
	v->a[10432] = state(2037);
	v->a[10433] = 1;
	v->a[10434] = sym__statement_not_pipeline;
	v->a[10435] = state(2101);
	v->a[10436] = 1;
	v->a[10437] = sym__statements;
	v->a[10438] = actions(11);
	v->a[10439] = 2;
	small_parse_table_522(v);
}

void	small_parse_table_522(t_small_parse_table_array *v)
{
	v->a[10440] = anon_sym_while;
	v->a[10441] = anon_sym_until;
	v->a[10442] = actions(254);
	v->a[10443] = 2;
	v->a[10444] = anon_sym_LT_AMP_DASH;
	v->a[10445] = anon_sym_GT_AMP_DASH;
	v->a[10446] = state(295);
	v->a[10447] = 6;
	v->a[10448] = sym_arithmetic_expansion;
	v->a[10449] = sym_string;
	v->a[10450] = sym_number;
	v->a[10451] = sym_simple_expansion;
	v->a[10452] = sym_expansion;
	v->a[10453] = sym_command_substitution;
	v->a[10454] = actions(252);
	v->a[10455] = 8;
	v->a[10456] = anon_sym_LT;
	v->a[10457] = anon_sym_GT;
	v->a[10458] = anon_sym_GT_GT;
	v->a[10459] = anon_sym_AMP_GT;
	small_parse_table_523(v);
}

void	small_parse_table_523(t_small_parse_table_array *v)
{
	v->a[10460] = anon_sym_AMP_GT_GT;
	v->a[10461] = anon_sym_LT_AMP;
	v->a[10462] = anon_sym_GT_AMP;
	v->a[10463] = anon_sym_GT_PIPE;
	v->a[10464] = state(1031);
	v->a[10465] = 12;
	v->a[10466] = sym_redirected_statement;
	v->a[10467] = sym_for_statement;
	v->a[10468] = sym_while_statement;
	v->a[10469] = sym_if_statement;
	v->a[10470] = sym_case_statement;
	v->a[10471] = sym_function_definition;
	v->a[10472] = sym_compound_statement;
	v->a[10473] = sym_subshell;
	v->a[10474] = sym_list;
	v->a[10475] = sym_negated_command;
	v->a[10476] = sym_command;
	v->a[10477] = sym_variable_assignments;
	v->a[10478] = 34;
	v->a[10479] = actions(3);
	small_parse_table_524(v);
}

void	small_parse_table_524(t_small_parse_table_array *v)
{
	v->a[10480] = 1;
	v->a[10481] = sym_comment;
	v->a[10482] = actions(9);
	v->a[10483] = 1;
	v->a[10484] = anon_sym_for;
	v->a[10485] = actions(13);
	v->a[10486] = 1;
	v->a[10487] = anon_sym_if;
	v->a[10488] = actions(15);
	v->a[10489] = 1;
	v->a[10490] = anon_sym_case;
	v->a[10491] = actions(17);
	v->a[10492] = 1;
	v->a[10493] = anon_sym_LPAREN;
	v->a[10494] = actions(19);
	v->a[10495] = 1;
	v->a[10496] = anon_sym_LBRACE;
	v->a[10497] = actions(63);
	v->a[10498] = 1;
	v->a[10499] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_525(v);
}

/* EOF small_parse_table_104.c */
