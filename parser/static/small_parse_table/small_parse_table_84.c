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
	v->a[8402] = sym_simple_expansion;
	v->a[8403] = sym_expansion;
	v->a[8404] = sym_command_substitution;
	v->a[8405] = actions(53);
	v->a[8406] = 7;
	v->a[8407] = anon_sym_LT;
	v->a[8408] = anon_sym_GT;
	v->a[8409] = anon_sym_GT_GT;
	v->a[8410] = anon_sym_LT_AMP;
	v->a[8411] = anon_sym_GT_AMP;
	v->a[8412] = anon_sym_GT_PIPE;
	v->a[8413] = anon_sym_LT_GT;
	v->a[8414] = state(965);
	v->a[8415] = 12;
	v->a[8416] = sym_redirected_statement;
	v->a[8417] = sym_for_statement;
	v->a[8418] = sym_while_statement;
	v->a[8419] = sym_if_statement;
	small_parse_table_421(v);
}

void	small_parse_table_421(t_small_parse_table_array *v)
{
	v->a[8420] = sym_case_statement;
	v->a[8421] = sym_function_definition;
	v->a[8422] = sym_compound_statement;
	v->a[8423] = sym_subshell;
	v->a[8424] = sym_list;
	v->a[8425] = sym_negated_command;
	v->a[8426] = sym_command;
	v->a[8427] = sym__variable_assignments;
	v->a[8428] = 31;
	v->a[8429] = actions(3);
	v->a[8430] = 1;
	v->a[8431] = sym_comment;
	v->a[8432] = actions(9);
	v->a[8433] = 1;
	v->a[8434] = anon_sym_for;
	v->a[8435] = actions(13);
	v->a[8436] = 1;
	v->a[8437] = anon_sym_if;
	v->a[8438] = actions(15);
	v->a[8439] = 1;
	small_parse_table_422(v);
}

void	small_parse_table_422(t_small_parse_table_array *v)
{
	v->a[8440] = anon_sym_case;
	v->a[8441] = actions(17);
	v->a[8442] = 1;
	v->a[8443] = anon_sym_LPAREN;
	v->a[8444] = actions(19);
	v->a[8445] = 1;
	v->a[8446] = anon_sym_LBRACE;
	v->a[8447] = actions(55);
	v->a[8448] = 1;
	v->a[8449] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8450] = actions(57);
	v->a[8451] = 1;
	v->a[8452] = anon_sym_DOLLAR;
	v->a[8453] = actions(59);
	v->a[8454] = 1;
	v->a[8455] = anon_sym_DQUOTE;
	v->a[8456] = actions(63);
	v->a[8457] = 1;
	v->a[8458] = anon_sym_DOLLAR_LBRACE;
	v->a[8459] = actions(65);
	small_parse_table_423(v);
}

void	small_parse_table_423(t_small_parse_table_array *v)
{
	v->a[8460] = 1;
	v->a[8461] = anon_sym_DOLLAR_LPAREN;
	v->a[8462] = actions(67);
	v->a[8463] = 1;
	v->a[8464] = anon_sym_BQUOTE;
	v->a[8465] = actions(69);
	v->a[8466] = 1;
	v->a[8467] = sym_file_descriptor;
	v->a[8468] = actions(71);
	v->a[8469] = 1;
	v->a[8470] = sym_variable_name;
	v->a[8471] = actions(223);
	v->a[8472] = 1;
	v->a[8473] = sym_word;
	v->a[8474] = actions(225);
	v->a[8475] = 1;
	v->a[8476] = anon_sym_BANG;
	v->a[8477] = state(129);
	v->a[8478] = 1;
	v->a[8479] = aux_sym__statements_repeat1;
	small_parse_table_424(v);
}

void	small_parse_table_424(t_small_parse_table_array *v)
{
	v->a[8480] = state(178);
	v->a[8481] = 1;
	v->a[8482] = sym_command_name;
	v->a[8483] = state(339);
	v->a[8484] = 1;
	v->a[8485] = sym_variable_assignment;
	v->a[8486] = state(585);
	v->a[8487] = 1;
	v->a[8488] = aux_sym_command_repeat1;
	v->a[8489] = state(661);
	v->a[8490] = 1;
	v->a[8491] = sym_concatenation;
	v->a[8492] = state(774);
	v->a[8493] = 1;
	v->a[8494] = sym_file_redirect;
	v->a[8495] = state(1089);
	v->a[8496] = 1;
	v->a[8497] = sym_pipeline;
	v->a[8498] = state(1149);
	v->a[8499] = 1;
	small_parse_table_425(v);
}

/* EOF small_parse_table_84.c */
