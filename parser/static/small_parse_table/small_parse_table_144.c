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
	v->a[14400] = sym_word;
	v->a[14401] = actions(9);
	v->a[14402] = 1;
	v->a[14403] = anon_sym_for;
	v->a[14404] = actions(13);
	v->a[14405] = 1;
	v->a[14406] = anon_sym_if;
	v->a[14407] = actions(15);
	v->a[14408] = 1;
	v->a[14409] = anon_sym_case;
	v->a[14410] = actions(17);
	v->a[14411] = 1;
	v->a[14412] = anon_sym_LPAREN;
	v->a[14413] = actions(19);
	v->a[14414] = 1;
	v->a[14415] = anon_sym_LBRACE;
	v->a[14416] = actions(21);
	v->a[14417] = 1;
	v->a[14418] = anon_sym_BANG;
	v->a[14419] = actions(25);
	small_parse_table_721(v);
}

void	small_parse_table_721(t_small_parse_table_array *v)
{
	v->a[14420] = 1;
	v->a[14421] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14422] = actions(27);
	v->a[14423] = 1;
	v->a[14424] = anon_sym_DOLLAR;
	v->a[14425] = actions(29);
	v->a[14426] = 1;
	v->a[14427] = anon_sym_DQUOTE;
	v->a[14428] = actions(33);
	v->a[14429] = 1;
	v->a[14430] = anon_sym_DOLLAR_LBRACE;
	v->a[14431] = actions(35);
	v->a[14432] = 1;
	v->a[14433] = anon_sym_DOLLAR_LPAREN;
	v->a[14434] = actions(37);
	v->a[14435] = 1;
	v->a[14436] = anon_sym_BQUOTE;
	v->a[14437] = actions(39);
	v->a[14438] = 1;
	v->a[14439] = sym_variable_name;
	small_parse_table_722(v);
}

void	small_parse_table_722(t_small_parse_table_array *v)
{
	v->a[14440] = state(213);
	v->a[14441] = 1;
	v->a[14442] = sym_command_name;
	v->a[14443] = state(289);
	v->a[14444] = 1;
	v->a[14445] = sym_variable_assignment;
	v->a[14446] = state(542);
	v->a[14447] = 1;
	v->a[14448] = aux_sym_command_repeat1;
	v->a[14449] = state(566);
	v->a[14450] = 1;
	v->a[14451] = sym_file_redirect;
	v->a[14452] = state(569);
	v->a[14453] = 1;
	v->a[14454] = sym_concatenation;
	v->a[14455] = state(926);
	v->a[14456] = 1;
	v->a[14457] = sym_pipeline;
	v->a[14458] = state(1004);
	v->a[14459] = 1;
	small_parse_table_723(v);
}

void	small_parse_table_723(t_small_parse_table_array *v)
{
	v->a[14460] = aux_sym_redirected_statement_repeat2;
	v->a[14461] = state(1601);
	v->a[14462] = 1;
	v->a[14463] = sym__statement_not_pipeline;
	v->a[14464] = actions(11);
	v->a[14465] = 2;
	v->a[14466] = anon_sym_while;
	v->a[14467] = anon_sym_until;
	v->a[14468] = actions(31);
	v->a[14469] = 2;
	v->a[14470] = sym_raw_string;
	v->a[14471] = sym_number;
	v->a[14472] = state(329);
	v->a[14473] = 5;
	v->a[14474] = sym_arithmetic_expansion;
	v->a[14475] = sym_string;
	v->a[14476] = sym_simple_expansion;
	v->a[14477] = sym_expansion;
	v->a[14478] = sym_command_substitution;
	v->a[14479] = actions(23);
	small_parse_table_724(v);
}

void	small_parse_table_724(t_small_parse_table_array *v)
{
	v->a[14480] = 7;
	v->a[14481] = anon_sym_LT;
	v->a[14482] = anon_sym_GT;
	v->a[14483] = anon_sym_GT_GT;
	v->a[14484] = anon_sym_LT_AMP;
	v->a[14485] = anon_sym_GT_AMP;
	v->a[14486] = anon_sym_GT_PIPE;
	v->a[14487] = anon_sym_LT_GT;
	v->a[14488] = state(927);
	v->a[14489] = 12;
	v->a[14490] = sym_redirected_statement;
	v->a[14491] = sym_for_statement;
	v->a[14492] = sym_while_statement;
	v->a[14493] = sym_if_statement;
	v->a[14494] = sym_case_statement;
	v->a[14495] = sym_function_definition;
	v->a[14496] = sym_compound_statement;
	v->a[14497] = sym_subshell;
	v->a[14498] = sym_list;
	v->a[14499] = sym_negated_command;
	small_parse_table_725(v);
}

/* EOF small_parse_table_144.c */
