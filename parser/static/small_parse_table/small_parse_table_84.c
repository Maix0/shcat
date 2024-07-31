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
	v->a[8400] = 1;
	v->a[8401] = aux_sym_redirected_statement_repeat2;
	v->a[8402] = state(1605);
	v->a[8403] = 1;
	v->a[8404] = sym__statement_not_pipeline;
	v->a[8405] = state(1637);
	v->a[8406] = 1;
	v->a[8407] = sym__statements;
	v->a[8408] = actions(11);
	v->a[8409] = 2;
	v->a[8410] = anon_sym_while;
	v->a[8411] = anon_sym_until;
	v->a[8412] = actions(59);
	v->a[8413] = 2;
	v->a[8414] = sym_raw_string;
	v->a[8415] = sym_number;
	v->a[8416] = state(425);
	v->a[8417] = 5;
	v->a[8418] = sym_arithmetic_expansion;
	v->a[8419] = sym_string;
	small_parse_table_421(v);
}

void	small_parse_table_421(t_small_parse_table_array *v)
{
	v->a[8420] = sym_simple_expansion;
	v->a[8421] = sym_expansion;
	v->a[8422] = sym_command_substitution;
	v->a[8423] = actions(51);
	v->a[8424] = 7;
	v->a[8425] = anon_sym_LT;
	v->a[8426] = anon_sym_GT;
	v->a[8427] = anon_sym_GT_GT;
	v->a[8428] = anon_sym_LT_AMP;
	v->a[8429] = anon_sym_GT_AMP;
	v->a[8430] = anon_sym_GT_PIPE;
	v->a[8431] = anon_sym_LT_GT;
	v->a[8432] = state(849);
	v->a[8433] = 12;
	v->a[8434] = sym_redirected_statement;
	v->a[8435] = sym_for_statement;
	v->a[8436] = sym_while_statement;
	v->a[8437] = sym_if_statement;
	v->a[8438] = sym_case_statement;
	v->a[8439] = sym_function_definition;
	small_parse_table_422(v);
}

void	small_parse_table_422(t_small_parse_table_array *v)
{
	v->a[8440] = sym_compound_statement;
	v->a[8441] = sym_subshell;
	v->a[8442] = sym_list;
	v->a[8443] = sym_negated_command;
	v->a[8444] = sym_command;
	v->a[8445] = sym__variable_assignments;
	v->a[8446] = 30;
	v->a[8447] = actions(3);
	v->a[8448] = 1;
	v->a[8449] = sym_comment;
	v->a[8450] = actions(9);
	v->a[8451] = 1;
	v->a[8452] = anon_sym_for;
	v->a[8453] = actions(13);
	v->a[8454] = 1;
	v->a[8455] = anon_sym_if;
	v->a[8456] = actions(15);
	v->a[8457] = 1;
	v->a[8458] = anon_sym_case;
	v->a[8459] = actions(17);
	small_parse_table_423(v);
}

void	small_parse_table_423(t_small_parse_table_array *v)
{
	v->a[8460] = 1;
	v->a[8461] = anon_sym_LPAREN;
	v->a[8462] = actions(19);
	v->a[8463] = 1;
	v->a[8464] = anon_sym_LBRACE;
	v->a[8465] = actions(53);
	v->a[8466] = 1;
	v->a[8467] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8468] = actions(55);
	v->a[8469] = 1;
	v->a[8470] = anon_sym_DOLLAR;
	v->a[8471] = actions(57);
	v->a[8472] = 1;
	v->a[8473] = anon_sym_DQUOTE;
	v->a[8474] = actions(61);
	v->a[8475] = 1;
	v->a[8476] = anon_sym_DOLLAR_LBRACE;
	v->a[8477] = actions(63);
	v->a[8478] = 1;
	v->a[8479] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_424(v);
}

void	small_parse_table_424(t_small_parse_table_array *v)
{
	v->a[8480] = actions(65);
	v->a[8481] = 1;
	v->a[8482] = anon_sym_BQUOTE;
	v->a[8483] = actions(206);
	v->a[8484] = 1;
	v->a[8485] = sym_word;
	v->a[8486] = actions(208);
	v->a[8487] = 1;
	v->a[8488] = anon_sym_BANG;
	v->a[8489] = actions(214);
	v->a[8490] = 1;
	v->a[8491] = sym_variable_name;
	v->a[8492] = state(106);
	v->a[8493] = 1;
	v->a[8494] = aux_sym__statements_repeat1;
	v->a[8495] = state(227);
	v->a[8496] = 1;
	v->a[8497] = sym_command_name;
	v->a[8498] = state(277);
	v->a[8499] = 1;
	small_parse_table_425(v);
}

/* EOF small_parse_table_84.c */
