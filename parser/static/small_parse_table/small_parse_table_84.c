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
	v->a[8401] = sym_comment;
	v->a[8402] = actions(89);
	v->a[8403] = 1;
	v->a[8404] = sym_word;
	v->a[8405] = actions(92);
	v->a[8406] = 1;
	v->a[8407] = anon_sym_for;
	v->a[8408] = actions(98);
	v->a[8409] = 1;
	v->a[8410] = anon_sym_if;
	v->a[8411] = actions(101);
	v->a[8412] = 1;
	v->a[8413] = anon_sym_fi;
	v->a[8414] = actions(103);
	v->a[8415] = 1;
	v->a[8416] = anon_sym_case;
	v->a[8417] = actions(106);
	v->a[8418] = 1;
	v->a[8419] = anon_sym_LPAREN;
	small_parse_table_421(v);
}

void	small_parse_table_421(t_small_parse_table_array *v)
{
	v->a[8420] = actions(109);
	v->a[8421] = 1;
	v->a[8422] = anon_sym_LBRACE;
	v->a[8423] = actions(112);
	v->a[8424] = 1;
	v->a[8425] = anon_sym_BANG;
	v->a[8426] = actions(121);
	v->a[8427] = 1;
	v->a[8428] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8429] = actions(124);
	v->a[8430] = 1;
	v->a[8431] = anon_sym_DOLLAR;
	v->a[8432] = actions(127);
	v->a[8433] = 1;
	v->a[8434] = anon_sym_DQUOTE;
	v->a[8435] = actions(133);
	v->a[8436] = 1;
	v->a[8437] = anon_sym_DOLLAR_LBRACE;
	v->a[8438] = actions(136);
	v->a[8439] = 1;
	small_parse_table_422(v);
}

void	small_parse_table_422(t_small_parse_table_array *v)
{
	v->a[8440] = anon_sym_DOLLAR_LPAREN;
	v->a[8441] = actions(139);
	v->a[8442] = 1;
	v->a[8443] = anon_sym_BQUOTE;
	v->a[8444] = actions(142);
	v->a[8445] = 1;
	v->a[8446] = sym_file_descriptor;
	v->a[8447] = actions(145);
	v->a[8448] = 1;
	v->a[8449] = sym_variable_name;
	v->a[8450] = state(70);
	v->a[8451] = 1;
	v->a[8452] = aux_sym__terminated_statement;
	v->a[8453] = state(189);
	v->a[8454] = 1;
	v->a[8455] = sym_command_name;
	v->a[8456] = state(307);
	v->a[8457] = 1;
	v->a[8458] = sym_variable_assignment;
	v->a[8459] = state(650);
	small_parse_table_423(v);
}

void	small_parse_table_423(t_small_parse_table_array *v)
{
	v->a[8460] = 1;
	v->a[8461] = sym_concatenation;
	v->a[8462] = state(712);
	v->a[8463] = 1;
	v->a[8464] = sym_file_redirect;
	v->a[8465] = state(713);
	v->a[8466] = 1;
	v->a[8467] = aux_sym_command_repeat1;
	v->a[8468] = state(1205);
	v->a[8469] = 1;
	v->a[8470] = sym_pipeline;
	v->a[8471] = state(1333);
	v->a[8472] = 1;
	v->a[8473] = aux_sym_redirected_statement_repeat2;
	v->a[8474] = state(2103);
	v->a[8475] = 1;
	v->a[8476] = sym__statement_not_pipeline;
	v->a[8477] = actions(95);
	v->a[8478] = 2;
	v->a[8479] = anon_sym_while;
	small_parse_table_424(v);
}

void	small_parse_table_424(t_small_parse_table_array *v)
{
	v->a[8480] = anon_sym_until;
	v->a[8481] = actions(118);
	v->a[8482] = 2;
	v->a[8483] = anon_sym_LT_AMP_DASH;
	v->a[8484] = anon_sym_GT_AMP_DASH;
	v->a[8485] = actions(130);
	v->a[8486] = 2;
	v->a[8487] = sym_raw_string;
	v->a[8488] = sym_number;
	v->a[8489] = state(443);
	v->a[8490] = 5;
	v->a[8491] = sym_arithmetic_expansion;
	v->a[8492] = sym_string;
	v->a[8493] = sym_simple_expansion;
	v->a[8494] = sym_expansion;
	v->a[8495] = sym_command_substitution;
	v->a[8496] = actions(115);
	v->a[8497] = 6;
	v->a[8498] = anon_sym_LT;
	v->a[8499] = anon_sym_GT;
	small_parse_table_425(v);
}

/* EOF small_parse_table_84.c */
