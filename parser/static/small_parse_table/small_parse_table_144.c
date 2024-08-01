/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_144.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_720(t_small_parse_table_array *v)
{
	v->a[14400] = state(1221);
	v->a[14401] = 12;
	v->a[14402] = sym_redirected_statement;
	v->a[14403] = sym_for_statement;
	v->a[14404] = sym_while_statement;
	v->a[14405] = sym_if_statement;
	v->a[14406] = sym_case_statement;
	v->a[14407] = sym_function_definition;
	v->a[14408] = sym_compound_statement;
	v->a[14409] = sym_subshell;
	v->a[14410] = sym_list;
	v->a[14411] = sym_negated_command;
	v->a[14412] = sym_command;
	v->a[14413] = sym__variable_assignments;
	v->a[14414] = 28;
	v->a[14415] = actions(3);
	v->a[14416] = 1;
	v->a[14417] = sym_comment;
	v->a[14418] = actions(79);
	v->a[14419] = 1;
	small_parse_table_721(v);
}

void	small_parse_table_721(t_small_parse_table_array *v)
{
	v->a[14420] = sym_word;
	v->a[14421] = actions(81);
	v->a[14422] = 1;
	v->a[14423] = anon_sym_for;
	v->a[14424] = actions(85);
	v->a[14425] = 1;
	v->a[14426] = anon_sym_if;
	v->a[14427] = actions(87);
	v->a[14428] = 1;
	v->a[14429] = anon_sym_case;
	v->a[14430] = actions(89);
	v->a[14431] = 1;
	v->a[14432] = anon_sym_LPAREN;
	v->a[14433] = actions(93);
	v->a[14434] = 1;
	v->a[14435] = anon_sym_LBRACE;
	v->a[14436] = actions(95);
	v->a[14437] = 1;
	v->a[14438] = anon_sym_BANG;
	v->a[14439] = actions(99);
	small_parse_table_722(v);
}

void	small_parse_table_722(t_small_parse_table_array *v)
{
	v->a[14440] = 1;
	v->a[14441] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14442] = actions(101);
	v->a[14443] = 1;
	v->a[14444] = anon_sym_DOLLAR;
	v->a[14445] = actions(103);
	v->a[14446] = 1;
	v->a[14447] = anon_sym_DQUOTE;
	v->a[14448] = actions(107);
	v->a[14449] = 1;
	v->a[14450] = anon_sym_DOLLAR_LBRACE;
	v->a[14451] = actions(109);
	v->a[14452] = 1;
	v->a[14453] = anon_sym_DOLLAR_LPAREN;
	v->a[14454] = actions(111);
	v->a[14455] = 1;
	v->a[14456] = anon_sym_BQUOTE;
	v->a[14457] = actions(113);
	v->a[14458] = 1;
	v->a[14459] = sym_variable_name;
	small_parse_table_723(v);
}

void	small_parse_table_723(t_small_parse_table_array *v)
{
	v->a[14460] = state(170);
	v->a[14461] = 1;
	v->a[14462] = sym_command_name;
	v->a[14463] = state(222);
	v->a[14464] = 1;
	v->a[14465] = sym_variable_assignment;
	v->a[14466] = state(408);
	v->a[14467] = 1;
	v->a[14468] = aux_sym_command_repeat1;
	v->a[14469] = state(541);
	v->a[14470] = 1;
	v->a[14471] = sym_file_redirect;
	v->a[14472] = state(546);
	v->a[14473] = 1;
	v->a[14474] = sym_concatenation;
	v->a[14475] = state(936);
	v->a[14476] = 1;
	v->a[14477] = sym_pipeline;
	v->a[14478] = state(990);
	v->a[14479] = 1;
	small_parse_table_724(v);
}

void	small_parse_table_724(t_small_parse_table_array *v)
{
	v->a[14480] = aux_sym_redirected_statement_repeat2;
	v->a[14481] = state(1564);
	v->a[14482] = 1;
	v->a[14483] = sym__statement_not_pipeline;
	v->a[14484] = actions(83);
	v->a[14485] = 2;
	v->a[14486] = anon_sym_while;
	v->a[14487] = anon_sym_until;
	v->a[14488] = actions(105);
	v->a[14489] = 2;
	v->a[14490] = sym_raw_string;
	v->a[14491] = sym_number;
	v->a[14492] = actions(97);
	v->a[14493] = 3;
	v->a[14494] = anon_sym_LT;
	v->a[14495] = anon_sym_GT;
	v->a[14496] = anon_sym_GT_GT;
	v->a[14497] = state(276);
	v->a[14498] = 5;
	v->a[14499] = sym_arithmetic_expansion;
	small_parse_table_725(v);
}

/* EOF small_parse_table_144.c */
