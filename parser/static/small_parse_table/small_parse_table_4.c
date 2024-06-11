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
	v->a[400] = sym_subshell;
	v->a[401] = sym_list;
	v->a[402] = sym_negated_command;
	v->a[403] = sym_command;
	v->a[404] = sym_variable_assignments;
	v->a[405] = 36;
	v->a[406] = actions(3);
	v->a[407] = 1;
	v->a[408] = sym_comment;
	v->a[409] = actions(9);
	v->a[410] = 1;
	v->a[411] = anon_sym_for;
	v->a[412] = actions(13);
	v->a[413] = 1;
	v->a[414] = anon_sym_if;
	v->a[415] = actions(15);
	v->a[416] = 1;
	v->a[417] = anon_sym_case;
	v->a[418] = actions(17);
	v->a[419] = 1;
	small_parse_table_21(v);
}

void	small_parse_table_21(t_small_parse_table_array *v)
{
	v->a[420] = anon_sym_LPAREN;
	v->a[421] = actions(19);
	v->a[422] = 1;
	v->a[423] = anon_sym_LBRACE;
	v->a[424] = actions(45);
	v->a[425] = 1;
	v->a[426] = sym_word;
	v->a[427] = actions(49);
	v->a[428] = 1;
	v->a[429] = anon_sym_elif;
	v->a[430] = actions(51);
	v->a[431] = 1;
	v->a[432] = anon_sym_else;
	v->a[433] = actions(53);
	v->a[434] = 1;
	v->a[435] = anon_sym_BANG;
	v->a[436] = actions(59);
	v->a[437] = 1;
	v->a[438] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[439] = actions(61);
	small_parse_table_22(v);
}

void	small_parse_table_22(t_small_parse_table_array *v)
{
	v->a[440] = 1;
	v->a[441] = anon_sym_DOLLAR;
	v->a[442] = actions(63);
	v->a[443] = 1;
	v->a[444] = anon_sym_DQUOTE;
	v->a[445] = actions(67);
	v->a[446] = 1;
	v->a[447] = anon_sym_DOLLAR_LBRACE;
	v->a[448] = actions(69);
	v->a[449] = 1;
	v->a[450] = anon_sym_DOLLAR_LPAREN;
	v->a[451] = actions(71);
	v->a[452] = 1;
	v->a[453] = anon_sym_BQUOTE;
	v->a[454] = actions(73);
	v->a[455] = 1;
	v->a[456] = sym_file_descriptor;
	v->a[457] = actions(75);
	v->a[458] = 1;
	v->a[459] = sym_variable_name;
	small_parse_table_23(v);
}

void	small_parse_table_23(t_small_parse_table_array *v)
{
	v->a[460] = actions(81);
	v->a[461] = 1;
	v->a[462] = anon_sym_fi;
	v->a[463] = state(6);
	v->a[464] = 1;
	v->a[465] = aux_sym__terminated_statement;
	v->a[466] = state(187);
	v->a[467] = 1;
	v->a[468] = sym_command_name;
	v->a[469] = state(288);
	v->a[470] = 1;
	v->a[471] = sym_variable_assignment;
	v->a[472] = state(647);
	v->a[473] = 1;
	v->a[474] = sym_concatenation;
	v->a[475] = state(736);
	v->a[476] = 1;
	v->a[477] = aux_sym_command_repeat1;
	v->a[478] = state(738);
	v->a[479] = 1;
	small_parse_table_24(v);
}

void	small_parse_table_24(t_small_parse_table_array *v)
{
	v->a[480] = sym_file_redirect;
	v->a[481] = state(1443);
	v->a[482] = 1;
	v->a[483] = sym_pipeline;
	v->a[484] = state(1460);
	v->a[485] = 1;
	v->a[486] = aux_sym_redirected_statement_repeat2;
	v->a[487] = state(2269);
	v->a[488] = 1;
	v->a[489] = sym__statement_not_pipeline;
	v->a[490] = state(2472);
	v->a[491] = 1;
	v->a[492] = sym_else_clause;
	v->a[493] = actions(11);
	v->a[494] = 2;
	v->a[495] = anon_sym_while;
	v->a[496] = anon_sym_until;
	v->a[497] = actions(57);
	v->a[498] = 2;
	v->a[499] = anon_sym_LT_AMP_DASH;
	small_parse_table_25(v);
}

/* EOF small_parse_table_4.c */
