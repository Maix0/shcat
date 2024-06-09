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
	v->a[14400] = state(2037);
	v->a[14401] = 1;
	v->a[14402] = sym__statement_not_pipeline;
	v->a[14403] = state(2194);
	v->a[14404] = 1;
	v->a[14405] = sym__statements;
	v->a[14406] = actions(11);
	v->a[14407] = 2;
	v->a[14408] = anon_sym_while;
	v->a[14409] = anon_sym_until;
	v->a[14410] = actions(254);
	v->a[14411] = 2;
	v->a[14412] = anon_sym_LT_AMP_DASH;
	v->a[14413] = anon_sym_GT_AMP_DASH;
	v->a[14414] = state(295);
	v->a[14415] = 6;
	v->a[14416] = sym_arithmetic_expansion;
	v->a[14417] = sym_string;
	v->a[14418] = sym_number;
	v->a[14419] = sym_simple_expansion;
	small_parse_table_721(v);
}

void	small_parse_table_721(t_small_parse_table_array *v)
{
	v->a[14420] = sym_expansion;
	v->a[14421] = sym_command_substitution;
	v->a[14422] = actions(252);
	v->a[14423] = 8;
	v->a[14424] = anon_sym_LT;
	v->a[14425] = anon_sym_GT;
	v->a[14426] = anon_sym_GT_GT;
	v->a[14427] = anon_sym_AMP_GT;
	v->a[14428] = anon_sym_AMP_GT_GT;
	v->a[14429] = anon_sym_LT_AMP;
	v->a[14430] = anon_sym_GT_AMP;
	v->a[14431] = anon_sym_GT_PIPE;
	v->a[14432] = state(1031);
	v->a[14433] = 12;
	v->a[14434] = sym_redirected_statement;
	v->a[14435] = sym_for_statement;
	v->a[14436] = sym_while_statement;
	v->a[14437] = sym_if_statement;
	v->a[14438] = sym_case_statement;
	v->a[14439] = sym_function_definition;
	small_parse_table_722(v);
}

void	small_parse_table_722(t_small_parse_table_array *v)
{
	v->a[14440] = sym_compound_statement;
	v->a[14441] = sym_subshell;
	v->a[14442] = sym_list;
	v->a[14443] = sym_negated_command;
	v->a[14444] = sym_command;
	v->a[14445] = sym_variable_assignments;
	v->a[14446] = 34;
	v->a[14447] = actions(3);
	v->a[14448] = 1;
	v->a[14449] = sym_comment;
	v->a[14450] = actions(9);
	v->a[14451] = 1;
	v->a[14452] = anon_sym_for;
	v->a[14453] = actions(13);
	v->a[14454] = 1;
	v->a[14455] = anon_sym_if;
	v->a[14456] = actions(15);
	v->a[14457] = 1;
	v->a[14458] = anon_sym_case;
	v->a[14459] = actions(17);
	small_parse_table_723(v);
}

void	small_parse_table_723(t_small_parse_table_array *v)
{
	v->a[14460] = 1;
	v->a[14461] = anon_sym_LPAREN;
	v->a[14462] = actions(19);
	v->a[14463] = 1;
	v->a[14464] = anon_sym_LBRACE;
	v->a[14465] = actions(63);
	v->a[14466] = 1;
	v->a[14467] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14468] = actions(65);
	v->a[14469] = 1;
	v->a[14470] = anon_sym_DOLLAR;
	v->a[14471] = actions(67);
	v->a[14472] = 1;
	v->a[14473] = anon_sym_DQUOTE;
	v->a[14474] = actions(69);
	v->a[14475] = 1;
	v->a[14476] = sym_raw_string;
	v->a[14477] = actions(71);
	v->a[14478] = 1;
	v->a[14479] = aux_sym_number_token1;
	small_parse_table_724(v);
}

void	small_parse_table_724(t_small_parse_table_array *v)
{
	v->a[14480] = actions(73);
	v->a[14481] = 1;
	v->a[14482] = aux_sym_number_token2;
	v->a[14483] = actions(75);
	v->a[14484] = 1;
	v->a[14485] = anon_sym_DOLLAR_LBRACE;
	v->a[14486] = actions(77);
	v->a[14487] = 1;
	v->a[14488] = anon_sym_DOLLAR_LPAREN;
	v->a[14489] = actions(79);
	v->a[14490] = 1;
	v->a[14491] = anon_sym_BQUOTE;
	v->a[14492] = actions(81);
	v->a[14493] = 1;
	v->a[14494] = sym_file_descriptor;
	v->a[14495] = actions(83);
	v->a[14496] = 1;
	v->a[14497] = sym_variable_name;
	v->a[14498] = actions(238);
	v->a[14499] = 1;
	small_parse_table_725(v);
}

/* EOF small_parse_table_144.c */
