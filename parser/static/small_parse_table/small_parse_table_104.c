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
	v->a[10400] = anon_sym_BQUOTE;
	v->a[10401] = actions(73);
	v->a[10402] = 1;
	v->a[10403] = sym_file_descriptor;
	v->a[10404] = actions(75);
	v->a[10405] = 1;
	v->a[10406] = sym_variable_name;
	v->a[10407] = actions(234);
	v->a[10408] = 1;
	v->a[10409] = sym_word;
	v->a[10410] = actions(236);
	v->a[10411] = 1;
	v->a[10412] = anon_sym_BANG;
	v->a[10413] = state(129);
	v->a[10414] = 1;
	v->a[10415] = aux_sym__statements_repeat1;
	v->a[10416] = state(189);
	v->a[10417] = 1;
	v->a[10418] = sym_command_name;
	v->a[10419] = state(244);
	small_parse_table_521(v);
}

void	small_parse_table_521(t_small_parse_table_array *v)
{
	v->a[10420] = 1;
	v->a[10421] = sym_variable_assignment;
	v->a[10422] = state(624);
	v->a[10423] = 1;
	v->a[10424] = sym_concatenation;
	v->a[10425] = state(672);
	v->a[10426] = 1;
	v->a[10427] = aux_sym_command_repeat1;
	v->a[10428] = state(787);
	v->a[10429] = 1;
	v->a[10430] = sym_file_redirect;
	v->a[10431] = state(1176);
	v->a[10432] = 1;
	v->a[10433] = sym_pipeline;
	v->a[10434] = state(1207);
	v->a[10435] = 1;
	v->a[10436] = aux_sym_redirected_statement_repeat2;
	v->a[10437] = state(2116);
	v->a[10438] = 1;
	v->a[10439] = sym__statement_not_pipeline;
	small_parse_table_522(v);
}

void	small_parse_table_522(t_small_parse_table_array *v)
{
	v->a[10440] = state(2216);
	v->a[10441] = 1;
	v->a[10442] = sym__statements;
	v->a[10443] = actions(11);
	v->a[10444] = 2;
	v->a[10445] = anon_sym_while;
	v->a[10446] = anon_sym_until;
	v->a[10447] = actions(57);
	v->a[10448] = 2;
	v->a[10449] = anon_sym_LT_AMP_DASH;
	v->a[10450] = anon_sym_GT_AMP_DASH;
	v->a[10451] = actions(65);
	v->a[10452] = 2;
	v->a[10453] = sym_raw_string;
	v->a[10454] = sym_number;
	v->a[10455] = state(420);
	v->a[10456] = 5;
	v->a[10457] = sym_arithmetic_expansion;
	v->a[10458] = sym_string;
	v->a[10459] = sym_simple_expansion;
	small_parse_table_523(v);
}

void	small_parse_table_523(t_small_parse_table_array *v)
{
	v->a[10460] = sym_expansion;
	v->a[10461] = sym_command_substitution;
	v->a[10462] = actions(55);
	v->a[10463] = 8;
	v->a[10464] = anon_sym_LT;
	v->a[10465] = anon_sym_GT;
	v->a[10466] = anon_sym_GT_GT;
	v->a[10467] = anon_sym_AMP_GT;
	v->a[10468] = anon_sym_AMP_GT_GT;
	v->a[10469] = anon_sym_LT_AMP;
	v->a[10470] = anon_sym_GT_AMP;
	v->a[10471] = anon_sym_GT_PIPE;
	v->a[10472] = state(1057);
	v->a[10473] = 12;
	v->a[10474] = sym_redirected_statement;
	v->a[10475] = sym_for_statement;
	v->a[10476] = sym_while_statement;
	v->a[10477] = sym_if_statement;
	v->a[10478] = sym_case_statement;
	v->a[10479] = sym_function_definition;
	small_parse_table_524(v);
}

void	small_parse_table_524(t_small_parse_table_array *v)
{
	v->a[10480] = sym_compound_statement;
	v->a[10481] = sym_subshell;
	v->a[10482] = sym_list;
	v->a[10483] = sym_negated_command;
	v->a[10484] = sym_command;
	v->a[10485] = sym__variable_assignments;
	v->a[10486] = 32;
	v->a[10487] = actions(3);
	v->a[10488] = 1;
	v->a[10489] = sym_comment;
	v->a[10490] = actions(9);
	v->a[10491] = 1;
	v->a[10492] = anon_sym_for;
	v->a[10493] = actions(13);
	v->a[10494] = 1;
	v->a[10495] = anon_sym_if;
	v->a[10496] = actions(15);
	v->a[10497] = 1;
	v->a[10498] = anon_sym_case;
	v->a[10499] = actions(17);
	small_parse_table_525(v);
}

/* EOF small_parse_table_104.c */
