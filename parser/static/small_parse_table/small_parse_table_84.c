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
	v->a[8400] = actions(55);
	v->a[8401] = 1;
	v->a[8402] = anon_sym_DOLLAR;
	v->a[8403] = actions(57);
	v->a[8404] = 1;
	v->a[8405] = anon_sym_DQUOTE;
	v->a[8406] = actions(61);
	v->a[8407] = 1;
	v->a[8408] = anon_sym_DOLLAR_LBRACE;
	v->a[8409] = actions(63);
	v->a[8410] = 1;
	v->a[8411] = anon_sym_DOLLAR_LPAREN;
	v->a[8412] = actions(65);
	v->a[8413] = 1;
	v->a[8414] = anon_sym_BQUOTE;
	v->a[8415] = actions(208);
	v->a[8416] = 1;
	v->a[8417] = sym_word;
	v->a[8418] = actions(210);
	v->a[8419] = 1;
	small_parse_table_421(v);
}

void	small_parse_table_421(t_small_parse_table_array *v)
{
	v->a[8420] = anon_sym_BANG;
	v->a[8421] = actions(216);
	v->a[8422] = 1;
	v->a[8423] = sym_variable_name;
	v->a[8424] = state(112);
	v->a[8425] = 1;
	v->a[8426] = aux_sym__statements_repeat1;
	v->a[8427] = state(158);
	v->a[8428] = 1;
	v->a[8429] = sym_command_name;
	v->a[8430] = state(186);
	v->a[8431] = 1;
	v->a[8432] = sym_variable_assignment;
	v->a[8433] = state(298);
	v->a[8434] = 1;
	v->a[8435] = aux_sym_command_repeat1;
	v->a[8436] = state(555);
	v->a[8437] = 1;
	v->a[8438] = sym_concatenation;
	v->a[8439] = state(562);
	small_parse_table_422(v);
}

void	small_parse_table_422(t_small_parse_table_array *v)
{
	v->a[8440] = 1;
	v->a[8441] = sym_file_redirect;
	v->a[8442] = state(937);
	v->a[8443] = 1;
	v->a[8444] = sym_pipeline;
	v->a[8445] = state(1019);
	v->a[8446] = 1;
	v->a[8447] = aux_sym_redirected_statement_repeat2;
	v->a[8448] = state(1557);
	v->a[8449] = 1;
	v->a[8450] = sym__statement_not_pipeline;
	v->a[8451] = state(1750);
	v->a[8452] = 1;
	v->a[8453] = sym__statements;
	v->a[8454] = actions(11);
	v->a[8455] = 2;
	v->a[8456] = anon_sym_while;
	v->a[8457] = anon_sym_until;
	v->a[8458] = actions(214);
	v->a[8459] = 2;
	small_parse_table_423(v);
}

void	small_parse_table_423(t_small_parse_table_array *v)
{
	v->a[8460] = sym_raw_string;
	v->a[8461] = sym_number;
	v->a[8462] = actions(212);
	v->a[8463] = 3;
	v->a[8464] = anon_sym_LT;
	v->a[8465] = anon_sym_GT;
	v->a[8466] = anon_sym_GT_GT;
	v->a[8467] = state(277);
	v->a[8468] = 5;
	v->a[8469] = sym_arithmetic_expansion;
	v->a[8470] = sym_string;
	v->a[8471] = sym_simple_expansion;
	v->a[8472] = sym_expansion;
	v->a[8473] = sym_command_substitution;
	v->a[8474] = state(877);
	v->a[8475] = 12;
	v->a[8476] = sym_redirected_statement;
	v->a[8477] = sym_for_statement;
	v->a[8478] = sym_while_statement;
	v->a[8479] = sym_if_statement;
	small_parse_table_424(v);
}

void	small_parse_table_424(t_small_parse_table_array *v)
{
	v->a[8480] = sym_case_statement;
	v->a[8481] = sym_function_definition;
	v->a[8482] = sym_compound_statement;
	v->a[8483] = sym_subshell;
	v->a[8484] = sym_list;
	v->a[8485] = sym_negated_command;
	v->a[8486] = sym_command;
	v->a[8487] = sym__variable_assignments;
	v->a[8488] = 30;
	v->a[8489] = actions(3);
	v->a[8490] = 1;
	v->a[8491] = sym_comment;
	v->a[8492] = actions(9);
	v->a[8493] = 1;
	v->a[8494] = anon_sym_for;
	v->a[8495] = actions(13);
	v->a[8496] = 1;
	v->a[8497] = anon_sym_if;
	v->a[8498] = actions(15);
	v->a[8499] = 1;
	small_parse_table_425(v);
}

/* EOF small_parse_table_84.c */
