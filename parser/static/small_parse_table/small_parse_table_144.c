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
	v->a[14400] = 1;
	v->a[14401] = sym_comment;
	v->a[14402] = actions(9);
	v->a[14403] = 1;
	v->a[14404] = anon_sym_for;
	v->a[14405] = actions(13);
	v->a[14406] = 1;
	v->a[14407] = anon_sym_if;
	v->a[14408] = actions(15);
	v->a[14409] = 1;
	v->a[14410] = anon_sym_case;
	v->a[14411] = actions(17);
	v->a[14412] = 1;
	v->a[14413] = anon_sym_LPAREN;
	v->a[14414] = actions(19);
	v->a[14415] = 1;
	v->a[14416] = anon_sym_LBRACE;
	v->a[14417] = actions(59);
	v->a[14418] = 1;
	v->a[14419] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_721(v);
}

void	small_parse_table_721(t_small_parse_table_array *v)
{
	v->a[14420] = actions(61);
	v->a[14421] = 1;
	v->a[14422] = anon_sym_DOLLAR;
	v->a[14423] = actions(63);
	v->a[14424] = 1;
	v->a[14425] = anon_sym_DQUOTE;
	v->a[14426] = actions(67);
	v->a[14427] = 1;
	v->a[14428] = anon_sym_DOLLAR_LBRACE;
	v->a[14429] = actions(69);
	v->a[14430] = 1;
	v->a[14431] = anon_sym_DOLLAR_LPAREN;
	v->a[14432] = actions(71);
	v->a[14433] = 1;
	v->a[14434] = anon_sym_BQUOTE;
	v->a[14435] = actions(220);
	v->a[14436] = 1;
	v->a[14437] = sym_word;
	v->a[14438] = actions(222);
	v->a[14439] = 1;
	small_parse_table_722(v);
}

void	small_parse_table_722(t_small_parse_table_array *v)
{
	v->a[14440] = anon_sym_BANG;
	v->a[14441] = actions(230);
	v->a[14442] = 1;
	v->a[14443] = sym_file_descriptor;
	v->a[14444] = actions(232);
	v->a[14445] = 1;
	v->a[14446] = sym_variable_name;
	v->a[14447] = state(133);
	v->a[14448] = 1;
	v->a[14449] = aux_sym__statements_repeat1;
	v->a[14450] = state(180);
	v->a[14451] = 1;
	v->a[14452] = sym_command_name;
	v->a[14453] = state(231);
	v->a[14454] = 1;
	v->a[14455] = sym_variable_assignment;
	v->a[14456] = state(650);
	v->a[14457] = 1;
	v->a[14458] = sym_concatenation;
	v->a[14459] = state(710);
	small_parse_table_723(v);
}

void	small_parse_table_723(t_small_parse_table_array *v)
{
	v->a[14460] = 1;
	v->a[14461] = aux_sym_command_repeat1;
	v->a[14462] = state(712);
	v->a[14463] = 1;
	v->a[14464] = sym_file_redirect;
	v->a[14465] = state(1095);
	v->a[14466] = 1;
	v->a[14467] = sym_pipeline;
	v->a[14468] = state(1282);
	v->a[14469] = 1;
	v->a[14470] = aux_sym_redirected_statement_repeat2;
	v->a[14471] = state(2127);
	v->a[14472] = 1;
	v->a[14473] = sym__statement_not_pipeline;
	v->a[14474] = state(2140);
	v->a[14475] = 1;
	v->a[14476] = sym__statements;
	v->a[14477] = actions(11);
	v->a[14478] = 2;
	v->a[14479] = anon_sym_while;
	small_parse_table_724(v);
}

void	small_parse_table_724(t_small_parse_table_array *v)
{
	v->a[14480] = anon_sym_until;
	v->a[14481] = actions(226);
	v->a[14482] = 2;
	v->a[14483] = anon_sym_LT_AMP_DASH;
	v->a[14484] = anon_sym_GT_AMP_DASH;
	v->a[14485] = actions(228);
	v->a[14486] = 2;
	v->a[14487] = sym_raw_string;
	v->a[14488] = sym_number;
	v->a[14489] = state(382);
	v->a[14490] = 5;
	v->a[14491] = sym_arithmetic_expansion;
	v->a[14492] = sym_string;
	v->a[14493] = sym_simple_expansion;
	v->a[14494] = sym_expansion;
	v->a[14495] = sym_command_substitution;
	v->a[14496] = actions(224);
	v->a[14497] = 6;
	v->a[14498] = anon_sym_LT;
	v->a[14499] = anon_sym_GT;
	small_parse_table_725(v);
}

/* EOF small_parse_table_144.c */
