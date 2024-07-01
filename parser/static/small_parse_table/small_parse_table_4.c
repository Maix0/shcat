/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_4.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_20(t_small_parse_table_array *v)
{
	v->a[400] = actions(15);
	v->a[401] = 1;
	v->a[402] = anon_sym_case;
	v->a[403] = actions(17);
	v->a[404] = 1;
	v->a[405] = anon_sym_LPAREN;
	v->a[406] = actions(19);
	v->a[407] = 1;
	v->a[408] = anon_sym_LBRACE;
	v->a[409] = actions(43);
	v->a[410] = 1;
	v->a[411] = sym_word;
	v->a[412] = actions(47);
	v->a[413] = 1;
	v->a[414] = anon_sym_elif;
	v->a[415] = actions(49);
	v->a[416] = 1;
	v->a[417] = anon_sym_else;
	v->a[418] = actions(51);
	v->a[419] = 1;
	small_parse_table_21(v);
}

void	small_parse_table_21(t_small_parse_table_array *v)
{
	v->a[420] = anon_sym_BANG;
	v->a[421] = actions(55);
	v->a[422] = 1;
	v->a[423] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[424] = actions(57);
	v->a[425] = 1;
	v->a[426] = anon_sym_DOLLAR;
	v->a[427] = actions(59);
	v->a[428] = 1;
	v->a[429] = anon_sym_DQUOTE;
	v->a[430] = actions(63);
	v->a[431] = 1;
	v->a[432] = anon_sym_DOLLAR_LBRACE;
	v->a[433] = actions(65);
	v->a[434] = 1;
	v->a[435] = anon_sym_DOLLAR_LPAREN;
	v->a[436] = actions(67);
	v->a[437] = 1;
	v->a[438] = anon_sym_BQUOTE;
	v->a[439] = actions(69);
	small_parse_table_22(v);
}

void	small_parse_table_22(t_small_parse_table_array *v)
{
	v->a[440] = 1;
	v->a[441] = sym_file_descriptor;
	v->a[442] = actions(71);
	v->a[443] = 1;
	v->a[444] = sym_variable_name;
	v->a[445] = actions(77);
	v->a[446] = 1;
	v->a[447] = anon_sym_fi;
	v->a[448] = state(6);
	v->a[449] = 1;
	v->a[450] = aux_sym__terminated_statement;
	v->a[451] = state(183);
	v->a[452] = 1;
	v->a[453] = sym_command_name;
	v->a[454] = state(274);
	v->a[455] = 1;
	v->a[456] = sym_variable_assignment;
	v->a[457] = state(603);
	v->a[458] = 1;
	v->a[459] = sym_concatenation;
	small_parse_table_23(v);
}

void	small_parse_table_23(t_small_parse_table_array *v)
{
	v->a[460] = state(639);
	v->a[461] = 1;
	v->a[462] = aux_sym_command_repeat1;
	v->a[463] = state(644);
	v->a[464] = 1;
	v->a[465] = sym_file_redirect;
	v->a[466] = state(1170);
	v->a[467] = 1;
	v->a[468] = sym_pipeline;
	v->a[469] = state(1196);
	v->a[470] = 1;
	v->a[471] = aux_sym_redirected_statement_repeat2;
	v->a[472] = state(1910);
	v->a[473] = 1;
	v->a[474] = sym__statement_not_pipeline;
	v->a[475] = state(1936);
	v->a[476] = 1;
	v->a[477] = sym_else_clause;
	v->a[478] = actions(11);
	v->a[479] = 2;
	small_parse_table_24(v);
}

void	small_parse_table_24(t_small_parse_table_array *v)
{
	v->a[480] = anon_sym_while;
	v->a[481] = anon_sym_until;
	v->a[482] = actions(61);
	v->a[483] = 2;
	v->a[484] = sym_raw_string;
	v->a[485] = sym_number;
	v->a[486] = state(1797);
	v->a[487] = 2;
	v->a[488] = sym_elif_clause;
	v->a[489] = aux_sym_if_statement_repeat1;
	v->a[490] = state(436);
	v->a[491] = 5;
	v->a[492] = sym_arithmetic_expansion;
	v->a[493] = sym_string;
	v->a[494] = sym_simple_expansion;
	v->a[495] = sym_expansion;
	v->a[496] = sym_command_substitution;
	v->a[497] = actions(53);
	v->a[498] = 7;
	v->a[499] = anon_sym_LT;
	small_parse_table_25(v);
}

/* EOF small_parse_table_4.c */
