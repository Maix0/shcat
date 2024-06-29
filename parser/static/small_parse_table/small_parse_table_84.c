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
	v->a[8400] = sym_redirected_statement;
	v->a[8401] = sym_for_statement;
	v->a[8402] = sym_while_statement;
	v->a[8403] = sym_if_statement;
	v->a[8404] = sym_case_statement;
	v->a[8405] = sym_function_definition;
	v->a[8406] = sym_compound_statement;
	v->a[8407] = sym_subshell;
	v->a[8408] = sym_list;
	v->a[8409] = sym_negated_command;
	v->a[8410] = sym_command;
	v->a[8411] = sym__variable_assignments;
	v->a[8412] = 32;
	v->a[8413] = actions(3);
	v->a[8414] = 1;
	v->a[8415] = sym_comment;
	v->a[8416] = actions(9);
	v->a[8417] = 1;
	v->a[8418] = anon_sym_for;
	v->a[8419] = actions(13);
	small_parse_table_421(v);
}

void	small_parse_table_421(t_small_parse_table_array *v)
{
	v->a[8420] = 1;
	v->a[8421] = anon_sym_if;
	v->a[8422] = actions(15);
	v->a[8423] = 1;
	v->a[8424] = anon_sym_case;
	v->a[8425] = actions(17);
	v->a[8426] = 1;
	v->a[8427] = anon_sym_LPAREN;
	v->a[8428] = actions(19);
	v->a[8429] = 1;
	v->a[8430] = anon_sym_LBRACE;
	v->a[8431] = actions(59);
	v->a[8432] = 1;
	v->a[8433] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8434] = actions(61);
	v->a[8435] = 1;
	v->a[8436] = anon_sym_DOLLAR;
	v->a[8437] = actions(63);
	v->a[8438] = 1;
	v->a[8439] = anon_sym_DQUOTE;
	small_parse_table_422(v);
}

void	small_parse_table_422(t_small_parse_table_array *v)
{
	v->a[8440] = actions(67);
	v->a[8441] = 1;
	v->a[8442] = anon_sym_DOLLAR_LBRACE;
	v->a[8443] = actions(69);
	v->a[8444] = 1;
	v->a[8445] = anon_sym_DOLLAR_LPAREN;
	v->a[8446] = actions(71);
	v->a[8447] = 1;
	v->a[8448] = anon_sym_BQUOTE;
	v->a[8449] = actions(73);
	v->a[8450] = 1;
	v->a[8451] = sym_file_descriptor;
	v->a[8452] = actions(75);
	v->a[8453] = 1;
	v->a[8454] = sym_variable_name;
	v->a[8455] = actions(234);
	v->a[8456] = 1;
	v->a[8457] = sym_word;
	v->a[8458] = actions(236);
	v->a[8459] = 1;
	small_parse_table_423(v);
}

void	small_parse_table_423(t_small_parse_table_array *v)
{
	v->a[8460] = anon_sym_BANG;
	v->a[8461] = state(129);
	v->a[8462] = 1;
	v->a[8463] = aux_sym__statements_repeat1;
	v->a[8464] = state(189);
	v->a[8465] = 1;
	v->a[8466] = sym_command_name;
	v->a[8467] = state(244);
	v->a[8468] = 1;
	v->a[8469] = sym_variable_assignment;
	v->a[8470] = state(624);
	v->a[8471] = 1;
	v->a[8472] = sym_concatenation;
	v->a[8473] = state(672);
	v->a[8474] = 1;
	v->a[8475] = aux_sym_command_repeat1;
	v->a[8476] = state(787);
	v->a[8477] = 1;
	v->a[8478] = sym_file_redirect;
	v->a[8479] = state(1176);
	small_parse_table_424(v);
}

void	small_parse_table_424(t_small_parse_table_array *v)
{
	v->a[8480] = 1;
	v->a[8481] = sym_pipeline;
	v->a[8482] = state(1207);
	v->a[8483] = 1;
	v->a[8484] = aux_sym_redirected_statement_repeat2;
	v->a[8485] = state(2116);
	v->a[8486] = 1;
	v->a[8487] = sym__statement_not_pipeline;
	v->a[8488] = state(2191);
	v->a[8489] = 1;
	v->a[8490] = sym__statements;
	v->a[8491] = actions(11);
	v->a[8492] = 2;
	v->a[8493] = anon_sym_while;
	v->a[8494] = anon_sym_until;
	v->a[8495] = actions(57);
	v->a[8496] = 2;
	v->a[8497] = anon_sym_LT_AMP_DASH;
	v->a[8498] = anon_sym_GT_AMP_DASH;
	v->a[8499] = actions(65);
	small_parse_table_425(v);
}

/* EOF small_parse_table_84.c */
