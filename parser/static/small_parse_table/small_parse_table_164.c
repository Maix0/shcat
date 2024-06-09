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
	v->a[16400] = actions(73);
	v->a[16401] = 1;
	v->a[16402] = aux_sym_number_token2;
	v->a[16403] = actions(75);
	v->a[16404] = 1;
	v->a[16405] = anon_sym_DOLLAR_LBRACE;
	v->a[16406] = actions(77);
	v->a[16407] = 1;
	v->a[16408] = anon_sym_DOLLAR_LPAREN;
	v->a[16409] = actions(79);
	v->a[16410] = 1;
	v->a[16411] = anon_sym_BQUOTE;
	v->a[16412] = actions(81);
	v->a[16413] = 1;
	v->a[16414] = sym_file_descriptor;
	v->a[16415] = actions(83);
	v->a[16416] = 1;
	v->a[16417] = sym_variable_name;
	v->a[16418] = state(36);
	v->a[16419] = 1;
	small_parse_table_821(v);
}

void	small_parse_table_821(t_small_parse_table_array *v)
{
	v->a[16420] = aux_sym__terminated_statement;
	v->a[16421] = state(190);
	v->a[16422] = 1;
	v->a[16423] = sym_command_name;
	v->a[16424] = state(280);
	v->a[16425] = 1;
	v->a[16426] = sym_variable_assignment;
	v->a[16427] = state(582);
	v->a[16428] = 1;
	v->a[16429] = sym_concatenation;
	v->a[16430] = state(587);
	v->a[16431] = 1;
	v->a[16432] = aux_sym_command_repeat1;
	v->a[16433] = state(718);
	v->a[16434] = 1;
	v->a[16435] = sym_file_redirect;
	v->a[16436] = state(1213);
	v->a[16437] = 1;
	v->a[16438] = aux_sym_redirected_statement_repeat2;
	v->a[16439] = state(1233);
	small_parse_table_822(v);
}

void	small_parse_table_822(t_small_parse_table_array *v)
{
	v->a[16440] = 1;
	v->a[16441] = sym_pipeline;
	v->a[16442] = state(2035);
	v->a[16443] = 1;
	v->a[16444] = sym__statement_not_pipeline;
	v->a[16445] = actions(11);
	v->a[16446] = 2;
	v->a[16447] = anon_sym_while;
	v->a[16448] = anon_sym_until;
	v->a[16449] = actions(61);
	v->a[16450] = 2;
	v->a[16451] = anon_sym_LT_AMP_DASH;
	v->a[16452] = anon_sym_GT_AMP_DASH;
	v->a[16453] = state(397);
	v->a[16454] = 6;
	v->a[16455] = sym_arithmetic_expansion;
	v->a[16456] = sym_string;
	v->a[16457] = sym_number;
	v->a[16458] = sym_simple_expansion;
	v->a[16459] = sym_expansion;
	small_parse_table_823(v);
}

void	small_parse_table_823(t_small_parse_table_array *v)
{
	v->a[16460] = sym_command_substitution;
	v->a[16461] = actions(59);
	v->a[16462] = 8;
	v->a[16463] = anon_sym_LT;
	v->a[16464] = anon_sym_GT;
	v->a[16465] = anon_sym_GT_GT;
	v->a[16466] = anon_sym_AMP_GT;
	v->a[16467] = anon_sym_AMP_GT_GT;
	v->a[16468] = anon_sym_LT_AMP;
	v->a[16469] = anon_sym_GT_AMP;
	v->a[16470] = anon_sym_GT_PIPE;
	v->a[16471] = state(1172);
	v->a[16472] = 12;
	v->a[16473] = sym_redirected_statement;
	v->a[16474] = sym_for_statement;
	v->a[16475] = sym_while_statement;
	v->a[16476] = sym_if_statement;
	v->a[16477] = sym_case_statement;
	v->a[16478] = sym_function_definition;
	v->a[16479] = sym_compound_statement;
	small_parse_table_824(v);
}

void	small_parse_table_824(t_small_parse_table_array *v)
{
	v->a[16480] = sym_subshell;
	v->a[16481] = sym_list;
	v->a[16482] = sym_negated_command;
	v->a[16483] = sym_command;
	v->a[16484] = sym_variable_assignments;
	v->a[16485] = 33;
	v->a[16486] = actions(3);
	v->a[16487] = 1;
	v->a[16488] = sym_comment;
	v->a[16489] = actions(9);
	v->a[16490] = 1;
	v->a[16491] = anon_sym_for;
	v->a[16492] = actions(13);
	v->a[16493] = 1;
	v->a[16494] = anon_sym_if;
	v->a[16495] = actions(15);
	v->a[16496] = 1;
	v->a[16497] = anon_sym_case;
	v->a[16498] = actions(17);
	v->a[16499] = 1;
	small_parse_table_825(v);
}

/* EOF small_parse_table_164.c */
