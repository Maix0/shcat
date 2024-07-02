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
	v->a[16400] = sym_compound_statement;
	v->a[16401] = sym_subshell;
	v->a[16402] = sym_list;
	v->a[16403] = sym_negated_command;
	v->a[16404] = sym_command;
	v->a[16405] = sym__variable_assignments;
	v->a[16406] = 29;
	v->a[16407] = actions(3);
	v->a[16408] = 1;
	v->a[16409] = sym_comment;
	v->a[16410] = actions(9);
	v->a[16411] = 1;
	v->a[16412] = anon_sym_for;
	v->a[16413] = actions(13);
	v->a[16414] = 1;
	v->a[16415] = anon_sym_if;
	v->a[16416] = actions(15);
	v->a[16417] = 1;
	v->a[16418] = anon_sym_case;
	v->a[16419] = actions(17);
	small_parse_table_821(v);
}

void	small_parse_table_821(t_small_parse_table_array *v)
{
	v->a[16420] = 1;
	v->a[16421] = anon_sym_LPAREN;
	v->a[16422] = actions(19);
	v->a[16423] = 1;
	v->a[16424] = anon_sym_LBRACE;
	v->a[16425] = actions(55);
	v->a[16426] = 1;
	v->a[16427] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16428] = actions(57);
	v->a[16429] = 1;
	v->a[16430] = anon_sym_DOLLAR;
	v->a[16431] = actions(59);
	v->a[16432] = 1;
	v->a[16433] = anon_sym_DQUOTE;
	v->a[16434] = actions(63);
	v->a[16435] = 1;
	v->a[16436] = anon_sym_DOLLAR_LBRACE;
	v->a[16437] = actions(65);
	v->a[16438] = 1;
	v->a[16439] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_822(v);
}

void	small_parse_table_822(t_small_parse_table_array *v)
{
	v->a[16440] = actions(67);
	v->a[16441] = 1;
	v->a[16442] = anon_sym_BQUOTE;
	v->a[16443] = actions(69);
	v->a[16444] = 1;
	v->a[16445] = sym_file_descriptor;
	v->a[16446] = actions(71);
	v->a[16447] = 1;
	v->a[16448] = sym_variable_name;
	v->a[16449] = actions(223);
	v->a[16450] = 1;
	v->a[16451] = sym_word;
	v->a[16452] = actions(225);
	v->a[16453] = 1;
	v->a[16454] = anon_sym_BANG;
	v->a[16455] = state(183);
	v->a[16456] = 1;
	v->a[16457] = sym_command_name;
	v->a[16458] = state(353);
	v->a[16459] = 1;
	small_parse_table_823(v);
}

void	small_parse_table_823(t_small_parse_table_array *v)
{
	v->a[16460] = sym_variable_assignment;
	v->a[16461] = state(584);
	v->a[16462] = 1;
	v->a[16463] = sym_concatenation;
	v->a[16464] = state(674);
	v->a[16465] = 1;
	v->a[16466] = aux_sym_command_repeat1;
	v->a[16467] = state(723);
	v->a[16468] = 1;
	v->a[16469] = sym_file_redirect;
	v->a[16470] = state(1010);
	v->a[16471] = 1;
	v->a[16472] = sym_pipeline;
	v->a[16473] = state(1099);
	v->a[16474] = 1;
	v->a[16475] = aux_sym_redirected_statement_repeat2;
	v->a[16476] = state(1914);
	v->a[16477] = 1;
	v->a[16478] = sym__statement_not_pipeline;
	v->a[16479] = actions(11);
	small_parse_table_824(v);
}

void	small_parse_table_824(t_small_parse_table_array *v)
{
	v->a[16480] = 2;
	v->a[16481] = anon_sym_while;
	v->a[16482] = anon_sym_until;
	v->a[16483] = actions(61);
	v->a[16484] = 2;
	v->a[16485] = sym_raw_string;
	v->a[16486] = sym_number;
	v->a[16487] = state(433);
	v->a[16488] = 5;
	v->a[16489] = sym_arithmetic_expansion;
	v->a[16490] = sym_string;
	v->a[16491] = sym_simple_expansion;
	v->a[16492] = sym_expansion;
	v->a[16493] = sym_command_substitution;
	v->a[16494] = actions(53);
	v->a[16495] = 7;
	v->a[16496] = anon_sym_LT;
	v->a[16497] = anon_sym_GT;
	v->a[16498] = anon_sym_GT_GT;
	v->a[16499] = anon_sym_LT_AMP;
	small_parse_table_825(v);
}

/* EOF small_parse_table_164.c */
