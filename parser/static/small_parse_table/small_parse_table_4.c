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
	v->a[400] = actions(53);
	v->a[401] = 1;
	v->a[402] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[403] = actions(55);
	v->a[404] = 1;
	v->a[405] = anon_sym_DOLLAR;
	v->a[406] = actions(57);
	v->a[407] = 1;
	v->a[408] = anon_sym_DQUOTE;
	v->a[409] = actions(61);
	v->a[410] = 1;
	v->a[411] = anon_sym_DOLLAR_LBRACE;
	v->a[412] = actions(63);
	v->a[413] = 1;
	v->a[414] = anon_sym_DOLLAR_LPAREN;
	v->a[415] = actions(65);
	v->a[416] = 1;
	v->a[417] = anon_sym_BQUOTE;
	v->a[418] = actions(67);
	v->a[419] = 1;
	small_parse_table_21(v);
}

void	small_parse_table_21(t_small_parse_table_array *v)
{
	v->a[420] = sym_variable_name;
	v->a[421] = actions(73);
	v->a[422] = 1;
	v->a[423] = anon_sym_fi;
	v->a[424] = state(19);
	v->a[425] = 1;
	v->a[426] = aux_sym__terminated_statement;
	v->a[427] = state(185);
	v->a[428] = 1;
	v->a[429] = sym_command_name;
	v->a[430] = state(231);
	v->a[431] = 1;
	v->a[432] = sym_variable_assignment;
	v->a[433] = state(411);
	v->a[434] = 1;
	v->a[435] = aux_sym_command_repeat1;
	v->a[436] = state(551);
	v->a[437] = 1;
	v->a[438] = sym_file_redirect;
	v->a[439] = state(555);
	small_parse_table_22(v);
}

void	small_parse_table_22(t_small_parse_table_array *v)
{
	v->a[440] = 1;
	v->a[441] = sym_concatenation;
	v->a[442] = state(1070);
	v->a[443] = 1;
	v->a[444] = sym_pipeline;
	v->a[445] = state(1126);
	v->a[446] = 1;
	v->a[447] = aux_sym_redirected_statement_repeat2;
	v->a[448] = state(1561);
	v->a[449] = 1;
	v->a[450] = sym__statement_not_pipeline;
	v->a[451] = state(1624);
	v->a[452] = 1;
	v->a[453] = sym_else_clause;
	v->a[454] = actions(11);
	v->a[455] = 2;
	v->a[456] = anon_sym_while;
	v->a[457] = anon_sym_until;
	v->a[458] = actions(59);
	v->a[459] = 2;
	small_parse_table_23(v);
}

void	small_parse_table_23(t_small_parse_table_array *v)
{
	v->a[460] = sym_raw_string;
	v->a[461] = sym_number;
	v->a[462] = state(1475);
	v->a[463] = 2;
	v->a[464] = sym_elif_clause;
	v->a[465] = aux_sym_if_statement_repeat1;
	v->a[466] = actions(51);
	v->a[467] = 3;
	v->a[468] = anon_sym_LT;
	v->a[469] = anon_sym_GT;
	v->a[470] = anon_sym_GT_GT;
	v->a[471] = state(401);
	v->a[472] = 5;
	v->a[473] = sym_arithmetic_expansion;
	v->a[474] = sym_string;
	v->a[475] = sym_simple_expansion;
	v->a[476] = sym_expansion;
	v->a[477] = sym_command_substitution;
	v->a[478] = state(905);
	v->a[479] = 12;
	small_parse_table_24(v);
}

void	small_parse_table_24(t_small_parse_table_array *v)
{
	v->a[480] = sym_redirected_statement;
	v->a[481] = sym_for_statement;
	v->a[482] = sym_while_statement;
	v->a[483] = sym_if_statement;
	v->a[484] = sym_case_statement;
	v->a[485] = sym_function_definition;
	v->a[486] = sym_compound_statement;
	v->a[487] = sym_subshell;
	v->a[488] = sym_list;
	v->a[489] = sym_negated_command;
	v->a[490] = sym_command;
	v->a[491] = sym__variable_assignments;
	v->a[492] = 34;
	v->a[493] = actions(3);
	v->a[494] = 1;
	v->a[495] = sym_comment;
	v->a[496] = actions(9);
	v->a[497] = 1;
	v->a[498] = anon_sym_for;
	v->a[499] = actions(13);
	small_parse_table_25(v);
}

/* EOF small_parse_table_4.c */
