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
	v->a[16400] = sym_list;
	v->a[16401] = sym_negated_command;
	v->a[16402] = sym_command;
	v->a[16403] = sym__variable_assignments;
	v->a[16404] = 28;
	v->a[16405] = actions(3);
	v->a[16406] = 1;
	v->a[16407] = sym_comment;
	v->a[16408] = actions(9);
	v->a[16409] = 1;
	v->a[16410] = anon_sym_for;
	v->a[16411] = actions(13);
	v->a[16412] = 1;
	v->a[16413] = anon_sym_if;
	v->a[16414] = actions(15);
	v->a[16415] = 1;
	v->a[16416] = anon_sym_case;
	v->a[16417] = actions(17);
	v->a[16418] = 1;
	v->a[16419] = anon_sym_LPAREN;
	small_parse_table_821(v);
}

void	small_parse_table_821(t_small_parse_table_array *v)
{
	v->a[16420] = actions(19);
	v->a[16421] = 1;
	v->a[16422] = anon_sym_LBRACE;
	v->a[16423] = actions(55);
	v->a[16424] = 1;
	v->a[16425] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16426] = actions(57);
	v->a[16427] = 1;
	v->a[16428] = anon_sym_DOLLAR;
	v->a[16429] = actions(59);
	v->a[16430] = 1;
	v->a[16431] = anon_sym_DQUOTE;
	v->a[16432] = actions(63);
	v->a[16433] = 1;
	v->a[16434] = anon_sym_DOLLAR_LBRACE;
	v->a[16435] = actions(65);
	v->a[16436] = 1;
	v->a[16437] = anon_sym_DOLLAR_LPAREN;
	v->a[16438] = actions(67);
	v->a[16439] = 1;
	small_parse_table_822(v);
}

void	small_parse_table_822(t_small_parse_table_array *v)
{
	v->a[16440] = anon_sym_BQUOTE;
	v->a[16441] = actions(211);
	v->a[16442] = 1;
	v->a[16443] = sym_word;
	v->a[16444] = actions(213);
	v->a[16445] = 1;
	v->a[16446] = anon_sym_BANG;
	v->a[16447] = actions(219);
	v->a[16448] = 1;
	v->a[16449] = sym_file_descriptor;
	v->a[16450] = actions(221);
	v->a[16451] = 1;
	v->a[16452] = sym_variable_name;
	v->a[16453] = state(173);
	v->a[16454] = 1;
	v->a[16455] = sym_command_name;
	v->a[16456] = state(333);
	v->a[16457] = 1;
	v->a[16458] = sym_variable_assignment;
	v->a[16459] = state(603);
	small_parse_table_823(v);
}

void	small_parse_table_823(t_small_parse_table_array *v)
{
	v->a[16460] = 1;
	v->a[16461] = sym_concatenation;
	v->a[16462] = state(644);
	v->a[16463] = 1;
	v->a[16464] = sym_file_redirect;
	v->a[16465] = state(673);
	v->a[16466] = 1;
	v->a[16467] = aux_sym_command_repeat1;
	v->a[16468] = state(1136);
	v->a[16469] = 1;
	v->a[16470] = aux_sym_redirected_statement_repeat2;
	v->a[16471] = state(1429);
	v->a[16472] = 1;
	v->a[16473] = sym_pipeline;
	v->a[16474] = actions(11);
	v->a[16475] = 2;
	v->a[16476] = anon_sym_while;
	v->a[16477] = anon_sym_until;
	v->a[16478] = actions(217);
	v->a[16479] = 2;
	small_parse_table_824(v);
}

void	small_parse_table_824(t_small_parse_table_array *v)
{
	v->a[16480] = sym_raw_string;
	v->a[16481] = sym_number;
	v->a[16482] = state(362);
	v->a[16483] = 5;
	v->a[16484] = sym_arithmetic_expansion;
	v->a[16485] = sym_string;
	v->a[16486] = sym_simple_expansion;
	v->a[16487] = sym_expansion;
	v->a[16488] = sym_command_substitution;
	v->a[16489] = actions(215);
	v->a[16490] = 7;
	v->a[16491] = anon_sym_LT;
	v->a[16492] = anon_sym_GT;
	v->a[16493] = anon_sym_GT_GT;
	v->a[16494] = anon_sym_LT_AMP;
	v->a[16495] = anon_sym_GT_AMP;
	v->a[16496] = anon_sym_GT_PIPE;
	v->a[16497] = anon_sym_LT_GT;
	v->a[16498] = state(1074);
	v->a[16499] = 13;
	small_parse_table_825(v);
}

/* EOF small_parse_table_164.c */
