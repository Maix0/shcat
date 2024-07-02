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
	v->a[14400] = actions(87);
	v->a[14401] = 2;
	v->a[14402] = anon_sym_while;
	v->a[14403] = anon_sym_until;
	v->a[14404] = actions(109);
	v->a[14405] = 2;
	v->a[14406] = sym_raw_string;
	v->a[14407] = sym_number;
	v->a[14408] = state(348);
	v->a[14409] = 5;
	v->a[14410] = sym_arithmetic_expansion;
	v->a[14411] = sym_string;
	v->a[14412] = sym_simple_expansion;
	v->a[14413] = sym_expansion;
	v->a[14414] = sym_command_substitution;
	v->a[14415] = actions(101);
	v->a[14416] = 7;
	v->a[14417] = anon_sym_LT;
	v->a[14418] = anon_sym_GT;
	v->a[14419] = anon_sym_GT_GT;
	small_parse_table_721(v);
}

void	small_parse_table_721(t_small_parse_table_array *v)
{
	v->a[14420] = anon_sym_LT_AMP;
	v->a[14421] = anon_sym_GT_AMP;
	v->a[14422] = anon_sym_GT_PIPE;
	v->a[14423] = anon_sym_LT_GT;
	v->a[14424] = 30;
	v->a[14425] = actions(3);
	v->a[14426] = 1;
	v->a[14427] = sym_comment;
	v->a[14428] = actions(9);
	v->a[14429] = 1;
	v->a[14430] = anon_sym_for;
	v->a[14431] = actions(13);
	v->a[14432] = 1;
	v->a[14433] = anon_sym_if;
	v->a[14434] = actions(15);
	v->a[14435] = 1;
	v->a[14436] = anon_sym_case;
	v->a[14437] = actions(17);
	v->a[14438] = 1;
	v->a[14439] = anon_sym_LPAREN;
	small_parse_table_722(v);
}

void	small_parse_table_722(t_small_parse_table_array *v)
{
	v->a[14440] = actions(19);
	v->a[14441] = 1;
	v->a[14442] = anon_sym_LBRACE;
	v->a[14443] = actions(43);
	v->a[14444] = 1;
	v->a[14445] = sym_word;
	v->a[14446] = actions(51);
	v->a[14447] = 1;
	v->a[14448] = anon_sym_BANG;
	v->a[14449] = actions(55);
	v->a[14450] = 1;
	v->a[14451] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14452] = actions(57);
	v->a[14453] = 1;
	v->a[14454] = anon_sym_DOLLAR;
	v->a[14455] = actions(59);
	v->a[14456] = 1;
	v->a[14457] = anon_sym_DQUOTE;
	v->a[14458] = actions(63);
	v->a[14459] = 1;
	small_parse_table_723(v);
}

void	small_parse_table_723(t_small_parse_table_array *v)
{
	v->a[14460] = anon_sym_DOLLAR_LBRACE;
	v->a[14461] = actions(65);
	v->a[14462] = 1;
	v->a[14463] = anon_sym_DOLLAR_LPAREN;
	v->a[14464] = actions(67);
	v->a[14465] = 1;
	v->a[14466] = anon_sym_BQUOTE;
	v->a[14467] = actions(69);
	v->a[14468] = 1;
	v->a[14469] = sym_file_descriptor;
	v->a[14470] = actions(71);
	v->a[14471] = 1;
	v->a[14472] = sym_variable_name;
	v->a[14473] = state(55);
	v->a[14474] = 1;
	v->a[14475] = aux_sym__terminated_statement;
	v->a[14476] = state(182);
	v->a[14477] = 1;
	v->a[14478] = sym_command_name;
	v->a[14479] = state(305);
	small_parse_table_724(v);
}

void	small_parse_table_724(t_small_parse_table_array *v)
{
	v->a[14480] = 1;
	v->a[14481] = sym_variable_assignment;
	v->a[14482] = state(584);
	v->a[14483] = 1;
	v->a[14484] = sym_concatenation;
	v->a[14485] = state(620);
	v->a[14486] = 1;
	v->a[14487] = sym_file_redirect;
	v->a[14488] = state(623);
	v->a[14489] = 1;
	v->a[14490] = aux_sym_command_repeat1;
	v->a[14491] = state(1118);
	v->a[14492] = 1;
	v->a[14493] = sym_pipeline;
	v->a[14494] = state(1201);
	v->a[14495] = 1;
	v->a[14496] = aux_sym_redirected_statement_repeat2;
	v->a[14497] = state(1911);
	v->a[14498] = 1;
	v->a[14499] = sym__statement_not_pipeline;
	small_parse_table_725(v);
}

/* EOF small_parse_table_144.c */
