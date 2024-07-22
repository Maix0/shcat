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
	v->a[10400] = anon_sym_GT_AMP;
	v->a[10401] = anon_sym_GT_PIPE;
	v->a[10402] = anon_sym_LT_GT;
	v->a[10403] = state(989);
	v->a[10404] = 12;
	v->a[10405] = sym_redirected_statement;
	v->a[10406] = sym_for_statement;
	v->a[10407] = sym_while_statement;
	v->a[10408] = sym_if_statement;
	v->a[10409] = sym_case_statement;
	v->a[10410] = sym_function_definition;
	v->a[10411] = sym_compound_statement;
	v->a[10412] = sym_subshell;
	v->a[10413] = sym_list;
	v->a[10414] = sym_negated_command;
	v->a[10415] = sym_command;
	v->a[10416] = sym__variable_assignments;
	v->a[10417] = 31;
	v->a[10418] = actions(3);
	v->a[10419] = 1;
	small_parse_table_521(v);
}

void	small_parse_table_521(t_small_parse_table_array *v)
{
	v->a[10420] = sym_comment;
	v->a[10421] = actions(9);
	v->a[10422] = 1;
	v->a[10423] = anon_sym_for;
	v->a[10424] = actions(13);
	v->a[10425] = 1;
	v->a[10426] = anon_sym_if;
	v->a[10427] = actions(15);
	v->a[10428] = 1;
	v->a[10429] = anon_sym_case;
	v->a[10430] = actions(17);
	v->a[10431] = 1;
	v->a[10432] = anon_sym_LPAREN;
	v->a[10433] = actions(19);
	v->a[10434] = 1;
	v->a[10435] = anon_sym_LBRACE;
	v->a[10436] = actions(55);
	v->a[10437] = 1;
	v->a[10438] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10439] = actions(57);
	small_parse_table_522(v);
}

void	small_parse_table_522(t_small_parse_table_array *v)
{
	v->a[10440] = 1;
	v->a[10441] = anon_sym_DOLLAR;
	v->a[10442] = actions(59);
	v->a[10443] = 1;
	v->a[10444] = anon_sym_DQUOTE;
	v->a[10445] = actions(63);
	v->a[10446] = 1;
	v->a[10447] = anon_sym_DOLLAR_LBRACE;
	v->a[10448] = actions(65);
	v->a[10449] = 1;
	v->a[10450] = anon_sym_DOLLAR_LPAREN;
	v->a[10451] = actions(67);
	v->a[10452] = 1;
	v->a[10453] = anon_sym_BQUOTE;
	v->a[10454] = actions(69);
	v->a[10455] = 1;
	v->a[10456] = sym_file_descriptor;
	v->a[10457] = actions(71);
	v->a[10458] = 1;
	v->a[10459] = sym_variable_name;
	small_parse_table_523(v);
}

void	small_parse_table_523(t_small_parse_table_array *v)
{
	v->a[10460] = actions(223);
	v->a[10461] = 1;
	v->a[10462] = sym_word;
	v->a[10463] = actions(225);
	v->a[10464] = 1;
	v->a[10465] = anon_sym_BANG;
	v->a[10466] = state(129);
	v->a[10467] = 1;
	v->a[10468] = aux_sym__statements_repeat1;
	v->a[10469] = state(178);
	v->a[10470] = 1;
	v->a[10471] = sym_command_name;
	v->a[10472] = state(339);
	v->a[10473] = 1;
	v->a[10474] = sym_variable_assignment;
	v->a[10475] = state(585);
	v->a[10476] = 1;
	v->a[10477] = aux_sym_command_repeat1;
	v->a[10478] = state(661);
	v->a[10479] = 1;
	small_parse_table_524(v);
}

void	small_parse_table_524(t_small_parse_table_array *v)
{
	v->a[10480] = sym_concatenation;
	v->a[10481] = state(774);
	v->a[10482] = 1;
	v->a[10483] = sym_file_redirect;
	v->a[10484] = state(1089);
	v->a[10485] = 1;
	v->a[10486] = sym_pipeline;
	v->a[10487] = state(1149);
	v->a[10488] = 1;
	v->a[10489] = aux_sym_redirected_statement_repeat2;
	v->a[10490] = state(1922);
	v->a[10491] = 1;
	v->a[10492] = sym__statement_not_pipeline;
	v->a[10493] = state(2095);
	v->a[10494] = 1;
	v->a[10495] = sym__statements;
	v->a[10496] = actions(11);
	v->a[10497] = 2;
	v->a[10498] = anon_sym_while;
	v->a[10499] = anon_sym_until;
	small_parse_table_525(v);
}

/* EOF small_parse_table_104.c */
