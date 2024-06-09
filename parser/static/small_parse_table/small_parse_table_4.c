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
	v->a[400] = 8;
	v->a[401] = anon_sym_LT;
	v->a[402] = anon_sym_GT;
	v->a[403] = anon_sym_GT_GT;
	v->a[404] = anon_sym_AMP_GT;
	v->a[405] = anon_sym_AMP_GT_GT;
	v->a[406] = anon_sym_LT_AMP;
	v->a[407] = anon_sym_GT_AMP;
	v->a[408] = anon_sym_GT_PIPE;
	v->a[409] = state(1183);
	v->a[410] = 12;
	v->a[411] = sym_redirected_statement;
	v->a[412] = sym_for_statement;
	v->a[413] = sym_while_statement;
	v->a[414] = sym_if_statement;
	v->a[415] = sym_case_statement;
	v->a[416] = sym_function_definition;
	v->a[417] = sym_compound_statement;
	v->a[418] = sym_subshell;
	v->a[419] = sym_list;
	small_parse_table_21(v);
}

void	small_parse_table_21(t_small_parse_table_array *v)
{
	v->a[420] = sym_negated_command;
	v->a[421] = sym_command;
	v->a[422] = sym_variable_assignments;
	v->a[423] = 38;
	v->a[424] = actions(3);
	v->a[425] = 1;
	v->a[426] = sym_comment;
	v->a[427] = actions(9);
	v->a[428] = 1;
	v->a[429] = anon_sym_for;
	v->a[430] = actions(13);
	v->a[431] = 1;
	v->a[432] = anon_sym_if;
	v->a[433] = actions(15);
	v->a[434] = 1;
	v->a[435] = anon_sym_case;
	v->a[436] = actions(17);
	v->a[437] = 1;
	v->a[438] = anon_sym_LPAREN;
	v->a[439] = actions(19);
	small_parse_table_22(v);
}

void	small_parse_table_22(t_small_parse_table_array *v)
{
	v->a[440] = 1;
	v->a[441] = anon_sym_LBRACE;
	v->a[442] = actions(49);
	v->a[443] = 1;
	v->a[444] = sym_word;
	v->a[445] = actions(53);
	v->a[446] = 1;
	v->a[447] = anon_sym_elif;
	v->a[448] = actions(55);
	v->a[449] = 1;
	v->a[450] = anon_sym_else;
	v->a[451] = actions(57);
	v->a[452] = 1;
	v->a[453] = anon_sym_BANG;
	v->a[454] = actions(63);
	v->a[455] = 1;
	v->a[456] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[457] = actions(65);
	v->a[458] = 1;
	v->a[459] = anon_sym_DOLLAR;
	small_parse_table_23(v);
}

void	small_parse_table_23(t_small_parse_table_array *v)
{
	v->a[460] = actions(67);
	v->a[461] = 1;
	v->a[462] = anon_sym_DQUOTE;
	v->a[463] = actions(69);
	v->a[464] = 1;
	v->a[465] = sym_raw_string;
	v->a[466] = actions(71);
	v->a[467] = 1;
	v->a[468] = aux_sym_number_token1;
	v->a[469] = actions(73);
	v->a[470] = 1;
	v->a[471] = aux_sym_number_token2;
	v->a[472] = actions(75);
	v->a[473] = 1;
	v->a[474] = anon_sym_DOLLAR_LBRACE;
	v->a[475] = actions(77);
	v->a[476] = 1;
	v->a[477] = anon_sym_DOLLAR_LPAREN;
	v->a[478] = actions(79);
	v->a[479] = 1;
	small_parse_table_24(v);
}

void	small_parse_table_24(t_small_parse_table_array *v)
{
	v->a[480] = anon_sym_BQUOTE;
	v->a[481] = actions(81);
	v->a[482] = 1;
	v->a[483] = sym_file_descriptor;
	v->a[484] = actions(83);
	v->a[485] = 1;
	v->a[486] = sym_variable_name;
	v->a[487] = actions(89);
	v->a[488] = 1;
	v->a[489] = anon_sym_fi;
	v->a[490] = state(21);
	v->a[491] = 1;
	v->a[492] = aux_sym__terminated_statement;
	v->a[493] = state(190);
	v->a[494] = 1;
	v->a[495] = sym_command_name;
	v->a[496] = state(299);
	v->a[497] = 1;
	v->a[498] = sym_variable_assignment;
	v->a[499] = state(582);
	small_parse_table_25(v);
}

/* EOF small_parse_table_4.c */
