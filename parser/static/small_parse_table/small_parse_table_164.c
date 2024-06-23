/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_164.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_820(t_small_parse_table_array *v)
{
	v->a[16400] = 1;
	v->a[16401] = anon_sym_DOLLAR_LPAREN;
	v->a[16402] = actions(71);
	v->a[16403] = 1;
	v->a[16404] = anon_sym_BQUOTE;
	v->a[16405] = actions(73);
	v->a[16406] = 1;
	v->a[16407] = sym_file_descriptor;
	v->a[16408] = actions(75);
	v->a[16409] = 1;
	v->a[16410] = sym_variable_name;
	v->a[16411] = state(45);
	v->a[16412] = 1;
	v->a[16413] = aux_sym__terminated_statement;
	v->a[16414] = state(187);
	v->a[16415] = 1;
	v->a[16416] = sym_command_name;
	v->a[16417] = state(274);
	v->a[16418] = 1;
	v->a[16419] = sym_variable_assignment;
	small_parse_table_821(v);
}

void	small_parse_table_821(t_small_parse_table_array *v)
{
	v->a[16420] = state(647);
	v->a[16421] = 1;
	v->a[16422] = sym_concatenation;
	v->a[16423] = state(736);
	v->a[16424] = 1;
	v->a[16425] = aux_sym_command_repeat1;
	v->a[16426] = state(738);
	v->a[16427] = 1;
	v->a[16428] = sym_file_redirect;
	v->a[16429] = state(1439);
	v->a[16430] = 1;
	v->a[16431] = sym_pipeline;
	v->a[16432] = state(1460);
	v->a[16433] = 1;
	v->a[16434] = aux_sym_redirected_statement_repeat2;
	v->a[16435] = state(2269);
	v->a[16436] = 1;
	v->a[16437] = sym__statement_not_pipeline;
	v->a[16438] = actions(11);
	v->a[16439] = 2;
	small_parse_table_822(v);
}

void	small_parse_table_822(t_small_parse_table_array *v)
{
	v->a[16440] = anon_sym_while;
	v->a[16441] = anon_sym_until;
	v->a[16442] = actions(57);
	v->a[16443] = 2;
	v->a[16444] = anon_sym_LT_AMP_DASH;
	v->a[16445] = anon_sym_GT_AMP_DASH;
	v->a[16446] = actions(65);
	v->a[16447] = 2;
	v->a[16448] = sym_raw_string;
	v->a[16449] = sym_number;
	v->a[16450] = state(394);
	v->a[16451] = 5;
	v->a[16452] = sym_arithmetic_expansion;
	v->a[16453] = sym_string;
	v->a[16454] = sym_simple_expansion;
	v->a[16455] = sym_expansion;
	v->a[16456] = sym_command_substitution;
	v->a[16457] = actions(55);
	v->a[16458] = 8;
	v->a[16459] = anon_sym_LT;
	small_parse_table_823(v);
}

void	small_parse_table_823(t_small_parse_table_array *v)
{
	v->a[16460] = anon_sym_GT;
	v->a[16461] = anon_sym_GT_GT;
	v->a[16462] = anon_sym_AMP_GT;
	v->a[16463] = anon_sym_AMP_GT_GT;
	v->a[16464] = anon_sym_LT_AMP;
	v->a[16465] = anon_sym_GT_AMP;
	v->a[16466] = anon_sym_GT_PIPE;
	v->a[16467] = state(1312);
	v->a[16468] = 12;
	v->a[16469] = sym_redirected_statement;
	v->a[16470] = sym_for_statement;
	v->a[16471] = sym_while_statement;
	v->a[16472] = sym_if_statement;
	v->a[16473] = sym_case_statement;
	v->a[16474] = sym_function_definition;
	v->a[16475] = sym_compound_statement;
	v->a[16476] = sym_subshell;
	v->a[16477] = sym_list;
	v->a[16478] = sym_negated_command;
	v->a[16479] = sym_command;
	small_parse_table_824(v);
}

void	small_parse_table_824(t_small_parse_table_array *v)
{
	v->a[16480] = sym__variable_assignments;
	v->a[16481] = 31;
	v->a[16482] = actions(3);
	v->a[16483] = 1;
	v->a[16484] = sym_comment;
	v->a[16485] = actions(9);
	v->a[16486] = 1;
	v->a[16487] = anon_sym_for;
	v->a[16488] = actions(13);
	v->a[16489] = 1;
	v->a[16490] = anon_sym_if;
	v->a[16491] = actions(15);
	v->a[16492] = 1;
	v->a[16493] = anon_sym_case;
	v->a[16494] = actions(17);
	v->a[16495] = 1;
	v->a[16496] = anon_sym_LPAREN;
	v->a[16497] = actions(19);
	v->a[16498] = 1;
	v->a[16499] = anon_sym_LBRACE;
	small_parse_table_825(v);
}

/* EOF small_parse_table_164.c */
