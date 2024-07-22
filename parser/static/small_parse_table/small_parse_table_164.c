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
	v->a[16400] = sym_command;
	v->a[16401] = sym__variable_assignments;
	v->a[16402] = 29;
	v->a[16403] = actions(3);
	v->a[16404] = 1;
	v->a[16405] = sym_comment;
	v->a[16406] = actions(9);
	v->a[16407] = 1;
	v->a[16408] = anon_sym_for;
	v->a[16409] = actions(13);
	v->a[16410] = 1;
	v->a[16411] = anon_sym_if;
	v->a[16412] = actions(15);
	v->a[16413] = 1;
	v->a[16414] = anon_sym_case;
	v->a[16415] = actions(17);
	v->a[16416] = 1;
	v->a[16417] = anon_sym_LPAREN;
	v->a[16418] = actions(19);
	v->a[16419] = 1;
	small_parse_table_821(v);
}

void	small_parse_table_821(t_small_parse_table_array *v)
{
	v->a[16420] = anon_sym_LBRACE;
	v->a[16421] = actions(55);
	v->a[16422] = 1;
	v->a[16423] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16424] = actions(57);
	v->a[16425] = 1;
	v->a[16426] = anon_sym_DOLLAR;
	v->a[16427] = actions(59);
	v->a[16428] = 1;
	v->a[16429] = anon_sym_DQUOTE;
	v->a[16430] = actions(63);
	v->a[16431] = 1;
	v->a[16432] = anon_sym_DOLLAR_LBRACE;
	v->a[16433] = actions(65);
	v->a[16434] = 1;
	v->a[16435] = anon_sym_DOLLAR_LPAREN;
	v->a[16436] = actions(67);
	v->a[16437] = 1;
	v->a[16438] = anon_sym_BQUOTE;
	v->a[16439] = actions(211);
	small_parse_table_822(v);
}

void	small_parse_table_822(t_small_parse_table_array *v)
{
	v->a[16440] = 1;
	v->a[16441] = sym_word;
	v->a[16442] = actions(213);
	v->a[16443] = 1;
	v->a[16444] = anon_sym_BANG;
	v->a[16445] = actions(219);
	v->a[16446] = 1;
	v->a[16447] = sym_file_descriptor;
	v->a[16448] = actions(221);
	v->a[16449] = 1;
	v->a[16450] = sym_variable_name;
	v->a[16451] = state(170);
	v->a[16452] = 1;
	v->a[16453] = sym_command_name;
	v->a[16454] = state(350);
	v->a[16455] = 1;
	v->a[16456] = sym_variable_assignment;
	v->a[16457] = state(617);
	v->a[16458] = 1;
	v->a[16459] = aux_sym_command_repeat1;
	small_parse_table_823(v);
}

void	small_parse_table_823(t_small_parse_table_array *v)
{
	v->a[16460] = state(661);
	v->a[16461] = 1;
	v->a[16462] = sym_concatenation;
	v->a[16463] = state(665);
	v->a[16464] = 1;
	v->a[16465] = sym_file_redirect;
	v->a[16466] = state(1039);
	v->a[16467] = 1;
	v->a[16468] = sym_pipeline;
	v->a[16469] = state(1177);
	v->a[16470] = 1;
	v->a[16471] = aux_sym_redirected_statement_repeat2;
	v->a[16472] = state(1919);
	v->a[16473] = 1;
	v->a[16474] = sym__statement_not_pipeline;
	v->a[16475] = actions(11);
	v->a[16476] = 2;
	v->a[16477] = anon_sym_while;
	v->a[16478] = anon_sym_until;
	v->a[16479] = actions(217);
	small_parse_table_824(v);
}

void	small_parse_table_824(t_small_parse_table_array *v)
{
	v->a[16480] = 2;
	v->a[16481] = sym_raw_string;
	v->a[16482] = sym_number;
	v->a[16483] = state(374);
	v->a[16484] = 5;
	v->a[16485] = sym_arithmetic_expansion;
	v->a[16486] = sym_string;
	v->a[16487] = sym_simple_expansion;
	v->a[16488] = sym_expansion;
	v->a[16489] = sym_command_substitution;
	v->a[16490] = actions(215);
	v->a[16491] = 7;
	v->a[16492] = anon_sym_LT;
	v->a[16493] = anon_sym_GT;
	v->a[16494] = anon_sym_GT_GT;
	v->a[16495] = anon_sym_LT_AMP;
	v->a[16496] = anon_sym_GT_AMP;
	v->a[16497] = anon_sym_GT_PIPE;
	v->a[16498] = anon_sym_LT_GT;
	v->a[16499] = state(1037);
	small_parse_table_825(v);
}

/* EOF small_parse_table_164.c */
