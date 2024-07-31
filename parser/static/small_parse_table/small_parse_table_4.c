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
	v->a[400] = actions(41);
	v->a[401] = 1;
	v->a[402] = sym_word;
	v->a[403] = actions(45);
	v->a[404] = 1;
	v->a[405] = anon_sym_elif;
	v->a[406] = actions(47);
	v->a[407] = 1;
	v->a[408] = anon_sym_else;
	v->a[409] = actions(49);
	v->a[410] = 1;
	v->a[411] = anon_sym_BANG;
	v->a[412] = actions(53);
	v->a[413] = 1;
	v->a[414] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[415] = actions(55);
	v->a[416] = 1;
	v->a[417] = anon_sym_DOLLAR;
	v->a[418] = actions(57);
	v->a[419] = 1;
	small_parse_table_21(v);
}

void	small_parse_table_21(t_small_parse_table_array *v)
{
	v->a[420] = anon_sym_DQUOTE;
	v->a[421] = actions(61);
	v->a[422] = 1;
	v->a[423] = anon_sym_DOLLAR_LBRACE;
	v->a[424] = actions(63);
	v->a[425] = 1;
	v->a[426] = anon_sym_DOLLAR_LPAREN;
	v->a[427] = actions(65);
	v->a[428] = 1;
	v->a[429] = anon_sym_BQUOTE;
	v->a[430] = actions(67);
	v->a[431] = 1;
	v->a[432] = sym_variable_name;
	v->a[433] = actions(73);
	v->a[434] = 1;
	v->a[435] = anon_sym_fi;
	v->a[436] = state(24);
	v->a[437] = 1;
	v->a[438] = aux_sym__terminated_statement;
	v->a[439] = state(271);
	small_parse_table_22(v);
}

void	small_parse_table_22(t_small_parse_table_array *v)
{
	v->a[440] = 1;
	v->a[441] = sym_command_name;
	v->a[442] = state(291);
	v->a[443] = 1;
	v->a[444] = sym_variable_assignment;
	v->a[445] = state(482);
	v->a[446] = 1;
	v->a[447] = aux_sym_command_repeat1;
	v->a[448] = state(600);
	v->a[449] = 1;
	v->a[450] = sym_file_redirect;
	v->a[451] = state(602);
	v->a[452] = 1;
	v->a[453] = sym_concatenation;
	v->a[454] = state(992);
	v->a[455] = 1;
	v->a[456] = sym_pipeline;
	v->a[457] = state(1068);
	v->a[458] = 1;
	v->a[459] = aux_sym_redirected_statement_repeat2;
	small_parse_table_23(v);
}

void	small_parse_table_23(t_small_parse_table_array *v)
{
	v->a[460] = state(1609);
	v->a[461] = 1;
	v->a[462] = sym__statement_not_pipeline;
	v->a[463] = state(1741);
	v->a[464] = 1;
	v->a[465] = sym_else_clause;
	v->a[466] = actions(11);
	v->a[467] = 2;
	v->a[468] = anon_sym_while;
	v->a[469] = anon_sym_until;
	v->a[470] = actions(59);
	v->a[471] = 2;
	v->a[472] = sym_raw_string;
	v->a[473] = sym_number;
	v->a[474] = state(1519);
	v->a[475] = 2;
	v->a[476] = sym_elif_clause;
	v->a[477] = aux_sym_if_statement_repeat1;
	v->a[478] = state(425);
	v->a[479] = 5;
	small_parse_table_24(v);
}

void	small_parse_table_24(t_small_parse_table_array *v)
{
	v->a[480] = sym_arithmetic_expansion;
	v->a[481] = sym_string;
	v->a[482] = sym_simple_expansion;
	v->a[483] = sym_expansion;
	v->a[484] = sym_command_substitution;
	v->a[485] = actions(51);
	v->a[486] = 7;
	v->a[487] = anon_sym_LT;
	v->a[488] = anon_sym_GT;
	v->a[489] = anon_sym_GT_GT;
	v->a[490] = anon_sym_LT_AMP;
	v->a[491] = anon_sym_GT_AMP;
	v->a[492] = anon_sym_GT_PIPE;
	v->a[493] = anon_sym_LT_GT;
	v->a[494] = state(949);
	v->a[495] = 12;
	v->a[496] = sym_redirected_statement;
	v->a[497] = sym_for_statement;
	v->a[498] = sym_while_statement;
	v->a[499] = sym_if_statement;
	small_parse_table_25(v);
}

/* EOF small_parse_table_4.c */
