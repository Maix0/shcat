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
	v->a[16400] = actions(97);
	v->a[16401] = 1;
	v->a[16402] = anon_sym_LPAREN;
	v->a[16403] = actions(101);
	v->a[16404] = 1;
	v->a[16405] = anon_sym_LBRACE;
	v->a[16406] = actions(103);
	v->a[16407] = 1;
	v->a[16408] = anon_sym_BANG;
	v->a[16409] = actions(109);
	v->a[16410] = 1;
	v->a[16411] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16412] = actions(111);
	v->a[16413] = 1;
	v->a[16414] = anon_sym_DOLLAR;
	v->a[16415] = actions(113);
	v->a[16416] = 1;
	v->a[16417] = anon_sym_DQUOTE;
	v->a[16418] = actions(117);
	v->a[16419] = 1;
	small_parse_table_821(v);
}

void	small_parse_table_821(t_small_parse_table_array *v)
{
	v->a[16420] = anon_sym_DOLLAR_LBRACE;
	v->a[16421] = actions(119);
	v->a[16422] = 1;
	v->a[16423] = anon_sym_DOLLAR_LPAREN;
	v->a[16424] = actions(121);
	v->a[16425] = 1;
	v->a[16426] = anon_sym_BQUOTE;
	v->a[16427] = actions(123);
	v->a[16428] = 1;
	v->a[16429] = sym_file_descriptor;
	v->a[16430] = actions(125);
	v->a[16431] = 1;
	v->a[16432] = sym_variable_name;
	v->a[16433] = state(137);
	v->a[16434] = 1;
	v->a[16435] = aux_sym__statements_repeat1;
	v->a[16436] = state(184);
	v->a[16437] = 1;
	v->a[16438] = sym_command_name;
	v->a[16439] = state(226);
	small_parse_table_822(v);
}

void	small_parse_table_822(t_small_parse_table_array *v)
{
	v->a[16440] = 1;
	v->a[16441] = sym_variable_assignment;
	v->a[16442] = state(622);
	v->a[16443] = 1;
	v->a[16444] = sym_concatenation;
	v->a[16445] = state(727);
	v->a[16446] = 1;
	v->a[16447] = aux_sym_command_repeat1;
	v->a[16448] = state(744);
	v->a[16449] = 1;
	v->a[16450] = sym_file_redirect;
	v->a[16451] = state(1003);
	v->a[16452] = 1;
	v->a[16453] = sym__variable_assignments;
	v->a[16454] = state(1008);
	v->a[16455] = 1;
	v->a[16456] = sym_negated_command;
	v->a[16457] = state(1026);
	v->a[16458] = 1;
	v->a[16459] = sym_compound_statement;
	small_parse_table_823(v);
}

void	small_parse_table_823(t_small_parse_table_array *v)
{
	v->a[16460] = state(1044);
	v->a[16461] = 1;
	v->a[16462] = sym_redirected_statement;
	v->a[16463] = state(1045);
	v->a[16464] = 1;
	v->a[16465] = sym_for_statement;
	v->a[16466] = state(1046);
	v->a[16467] = 1;
	v->a[16468] = sym_while_statement;
	v->a[16469] = state(1047);
	v->a[16470] = 1;
	v->a[16471] = sym_if_statement;
	v->a[16472] = state(1048);
	v->a[16473] = 1;
	v->a[16474] = sym_case_statement;
	v->a[16475] = state(1049);
	v->a[16476] = 1;
	v->a[16477] = sym_function_definition;
	v->a[16478] = state(1064);
	v->a[16479] = 1;
	small_parse_table_824(v);
}

void	small_parse_table_824(t_small_parse_table_array *v)
{
	v->a[16480] = sym_subshell;
	v->a[16481] = state(1071);
	v->a[16482] = 1;
	v->a[16483] = sym_list;
	v->a[16484] = state(1073);
	v->a[16485] = 1;
	v->a[16486] = sym_command;
	v->a[16487] = state(1113);
	v->a[16488] = 1;
	v->a[16489] = sym_pipeline;
	v->a[16490] = state(1215);
	v->a[16491] = 1;
	v->a[16492] = aux_sym_redirected_statement_repeat2;
	v->a[16493] = state(2122);
	v->a[16494] = 1;
	v->a[16495] = sym__statement_not_pipeline;
	v->a[16496] = actions(91);
	v->a[16497] = 2;
	v->a[16498] = anon_sym_while;
	v->a[16499] = anon_sym_until;
	small_parse_table_825(v);
}

/* EOF small_parse_table_164.c */
