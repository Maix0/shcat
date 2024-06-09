/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_84.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_420(t_small_parse_table_array *v)
{
	v->a[8400] = sym_arithmetic_expansion;
	v->a[8401] = sym_string;
	v->a[8402] = sym_number;
	v->a[8403] = sym_simple_expansion;
	v->a[8404] = sym_expansion;
	v->a[8405] = sym_command_substitution;
	v->a[8406] = actions(59);
	v->a[8407] = 8;
	v->a[8408] = anon_sym_LT;
	v->a[8409] = anon_sym_GT;
	v->a[8410] = anon_sym_GT_GT;
	v->a[8411] = anon_sym_AMP_GT;
	v->a[8412] = anon_sym_AMP_GT_GT;
	v->a[8413] = anon_sym_LT_AMP;
	v->a[8414] = anon_sym_GT_AMP;
	v->a[8415] = anon_sym_GT_PIPE;
	v->a[8416] = state(1071);
	v->a[8417] = 12;
	v->a[8418] = sym_redirected_statement;
	v->a[8419] = sym_for_statement;
	small_parse_table_421(v);
}

void	small_parse_table_421(t_small_parse_table_array *v)
{
	v->a[8420] = sym_while_statement;
	v->a[8421] = sym_if_statement;
	v->a[8422] = sym_case_statement;
	v->a[8423] = sym_function_definition;
	v->a[8424] = sym_compound_statement;
	v->a[8425] = sym_subshell;
	v->a[8426] = sym_list;
	v->a[8427] = sym_negated_command;
	v->a[8428] = sym_command;
	v->a[8429] = sym_variable_assignments;
	v->a[8430] = 34;
	v->a[8431] = actions(3);
	v->a[8432] = 1;
	v->a[8433] = sym_comment;
	v->a[8434] = actions(9);
	v->a[8435] = 1;
	v->a[8436] = anon_sym_for;
	v->a[8437] = actions(13);
	v->a[8438] = 1;
	v->a[8439] = anon_sym_if;
	small_parse_table_422(v);
}

void	small_parse_table_422(t_small_parse_table_array *v)
{
	v->a[8440] = actions(15);
	v->a[8441] = 1;
	v->a[8442] = anon_sym_case;
	v->a[8443] = actions(17);
	v->a[8444] = 1;
	v->a[8445] = anon_sym_LPAREN;
	v->a[8446] = actions(19);
	v->a[8447] = 1;
	v->a[8448] = anon_sym_LBRACE;
	v->a[8449] = actions(63);
	v->a[8450] = 1;
	v->a[8451] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8452] = actions(65);
	v->a[8453] = 1;
	v->a[8454] = anon_sym_DOLLAR;
	v->a[8455] = actions(67);
	v->a[8456] = 1;
	v->a[8457] = anon_sym_DQUOTE;
	v->a[8458] = actions(69);
	v->a[8459] = 1;
	small_parse_table_423(v);
}

void	small_parse_table_423(t_small_parse_table_array *v)
{
	v->a[8460] = sym_raw_string;
	v->a[8461] = actions(71);
	v->a[8462] = 1;
	v->a[8463] = aux_sym_number_token1;
	v->a[8464] = actions(73);
	v->a[8465] = 1;
	v->a[8466] = aux_sym_number_token2;
	v->a[8467] = actions(75);
	v->a[8468] = 1;
	v->a[8469] = anon_sym_DOLLAR_LBRACE;
	v->a[8470] = actions(77);
	v->a[8471] = 1;
	v->a[8472] = anon_sym_DOLLAR_LPAREN;
	v->a[8473] = actions(79);
	v->a[8474] = 1;
	v->a[8475] = anon_sym_BQUOTE;
	v->a[8476] = actions(81);
	v->a[8477] = 1;
	v->a[8478] = sym_file_descriptor;
	v->a[8479] = actions(83);
	small_parse_table_424(v);
}

void	small_parse_table_424(t_small_parse_table_array *v)
{
	v->a[8480] = 1;
	v->a[8481] = sym_variable_name;
	v->a[8482] = actions(238);
	v->a[8483] = 1;
	v->a[8484] = sym_word;
	v->a[8485] = actions(240);
	v->a[8486] = 1;
	v->a[8487] = anon_sym_BANG;
	v->a[8488] = state(132);
	v->a[8489] = 1;
	v->a[8490] = aux_sym__statements_repeat1;
	v->a[8491] = state(185);
	v->a[8492] = 1;
	v->a[8493] = sym_command_name;
	v->a[8494] = state(297);
	v->a[8495] = 1;
	v->a[8496] = sym_variable_assignment;
	v->a[8497] = state(582);
	v->a[8498] = 1;
	v->a[8499] = sym_concatenation;
	small_parse_table_425(v);
}

/* EOF small_parse_table_84.c */
