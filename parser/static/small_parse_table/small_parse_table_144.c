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
	v->a[14400] = anon_sym_GT_PIPE;
	v->a[14401] = anon_sym_LT_GT;
	v->a[14402] = 30;
	v->a[14403] = actions(3);
	v->a[14404] = 1;
	v->a[14405] = sym_comment;
	v->a[14406] = actions(9);
	v->a[14407] = 1;
	v->a[14408] = anon_sym_for;
	v->a[14409] = actions(13);
	v->a[14410] = 1;
	v->a[14411] = anon_sym_if;
	v->a[14412] = actions(15);
	v->a[14413] = 1;
	v->a[14414] = anon_sym_case;
	v->a[14415] = actions(17);
	v->a[14416] = 1;
	v->a[14417] = anon_sym_LPAREN;
	v->a[14418] = actions(19);
	v->a[14419] = 1;
	small_parse_table_721(v);
}

void	small_parse_table_721(t_small_parse_table_array *v)
{
	v->a[14420] = anon_sym_LBRACE;
	v->a[14421] = actions(43);
	v->a[14422] = 1;
	v->a[14423] = sym_word;
	v->a[14424] = actions(51);
	v->a[14425] = 1;
	v->a[14426] = anon_sym_BANG;
	v->a[14427] = actions(55);
	v->a[14428] = 1;
	v->a[14429] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14430] = actions(57);
	v->a[14431] = 1;
	v->a[14432] = anon_sym_DOLLAR;
	v->a[14433] = actions(59);
	v->a[14434] = 1;
	v->a[14435] = anon_sym_DQUOTE;
	v->a[14436] = actions(63);
	v->a[14437] = 1;
	v->a[14438] = anon_sym_DOLLAR_LBRACE;
	v->a[14439] = actions(65);
	small_parse_table_722(v);
}

void	small_parse_table_722(t_small_parse_table_array *v)
{
	v->a[14440] = 1;
	v->a[14441] = anon_sym_DOLLAR_LPAREN;
	v->a[14442] = actions(67);
	v->a[14443] = 1;
	v->a[14444] = anon_sym_BQUOTE;
	v->a[14445] = actions(69);
	v->a[14446] = 1;
	v->a[14447] = sym_file_descriptor;
	v->a[14448] = actions(71);
	v->a[14449] = 1;
	v->a[14450] = sym_variable_name;
	v->a[14451] = state(107);
	v->a[14452] = 1;
	v->a[14453] = aux_sym__terminated_statement;
	v->a[14454] = state(183);
	v->a[14455] = 1;
	v->a[14456] = sym_command_name;
	v->a[14457] = state(341);
	v->a[14458] = 1;
	v->a[14459] = sym_variable_assignment;
	small_parse_table_723(v);
}

void	small_parse_table_723(t_small_parse_table_array *v)
{
	v->a[14460] = state(603);
	v->a[14461] = 1;
	v->a[14462] = sym_concatenation;
	v->a[14463] = state(639);
	v->a[14464] = 1;
	v->a[14465] = aux_sym_command_repeat1;
	v->a[14466] = state(644);
	v->a[14467] = 1;
	v->a[14468] = sym_file_redirect;
	v->a[14469] = state(1122);
	v->a[14470] = 1;
	v->a[14471] = sym_pipeline;
	v->a[14472] = state(1196);
	v->a[14473] = 1;
	v->a[14474] = aux_sym_redirected_statement_repeat2;
	v->a[14475] = state(1910);
	v->a[14476] = 1;
	v->a[14477] = sym__statement_not_pipeline;
	v->a[14478] = actions(11);
	v->a[14479] = 2;
	small_parse_table_724(v);
}

void	small_parse_table_724(t_small_parse_table_array *v)
{
	v->a[14480] = anon_sym_while;
	v->a[14481] = anon_sym_until;
	v->a[14482] = actions(61);
	v->a[14483] = 2;
	v->a[14484] = sym_raw_string;
	v->a[14485] = sym_number;
	v->a[14486] = state(436);
	v->a[14487] = 5;
	v->a[14488] = sym_arithmetic_expansion;
	v->a[14489] = sym_string;
	v->a[14490] = sym_simple_expansion;
	v->a[14491] = sym_expansion;
	v->a[14492] = sym_command_substitution;
	v->a[14493] = actions(53);
	v->a[14494] = 7;
	v->a[14495] = anon_sym_LT;
	v->a[14496] = anon_sym_GT;
	v->a[14497] = anon_sym_GT_GT;
	v->a[14498] = anon_sym_LT_AMP;
	v->a[14499] = anon_sym_GT_AMP;
	small_parse_table_725(v);
}

/* EOF small_parse_table_144.c */
