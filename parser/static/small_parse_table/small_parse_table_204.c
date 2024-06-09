/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_204.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1020(t_small_parse_table_array *v)
{
	v->a[20400] = actions(405);
	v->a[20401] = 1;
	v->a[20402] = sym_variable_name;
	v->a[20403] = state(173);
	v->a[20404] = 1;
	v->a[20405] = sym_command_name;
	v->a[20406] = state(663);
	v->a[20407] = 1;
	v->a[20408] = aux_sym_command_repeat1;
	v->a[20409] = state(665);
	v->a[20410] = 1;
	v->a[20411] = sym_concatenation;
	v->a[20412] = state(749);
	v->a[20413] = 1;
	v->a[20414] = sym_file_redirect;
	v->a[20415] = state(1062);
	v->a[20416] = 1;
	v->a[20417] = sym_variable_assignment;
	v->a[20418] = state(1161);
	v->a[20419] = 1;
	small_parse_table_1021(v);
}

void	small_parse_table_1021(t_small_parse_table_array *v)
{
	v->a[20420] = aux_sym_redirected_statement_repeat2;
	v->a[20421] = actions(99);
	v->a[20422] = 2;
	v->a[20423] = anon_sym_while;
	v->a[20424] = anon_sym_until;
	v->a[20425] = actions(115);
	v->a[20426] = 2;
	v->a[20427] = anon_sym_LT_AMP_DASH;
	v->a[20428] = anon_sym_GT_AMP_DASH;
	v->a[20429] = actions(123);
	v->a[20430] = 2;
	v->a[20431] = sym_raw_string;
	v->a[20432] = sym_word;
	v->a[20433] = state(282);
	v->a[20434] = 6;
	v->a[20435] = sym_arithmetic_expansion;
	v->a[20436] = sym_string;
	v->a[20437] = sym_number;
	v->a[20438] = sym_simple_expansion;
	v->a[20439] = sym_expansion;
	small_parse_table_1022(v);
}

void	small_parse_table_1022(t_small_parse_table_array *v)
{
	v->a[20440] = sym_command_substitution;
	v->a[20441] = state(1260);
	v->a[20442] = 7;
	v->a[20443] = sym_for_statement;
	v->a[20444] = sym_while_statement;
	v->a[20445] = sym_if_statement;
	v->a[20446] = sym_compound_statement;
	v->a[20447] = sym_subshell;
	v->a[20448] = sym_command;
	v->a[20449] = sym_variable_assignments;
	v->a[20450] = actions(113);
	v->a[20451] = 8;
	v->a[20452] = anon_sym_LT;
	v->a[20453] = anon_sym_GT;
	v->a[20454] = anon_sym_GT_GT;
	v->a[20455] = anon_sym_AMP_GT;
	v->a[20456] = anon_sym_AMP_GT_GT;
	v->a[20457] = anon_sym_LT_AMP;
	v->a[20458] = anon_sym_GT_AMP;
	v->a[20459] = anon_sym_GT_PIPE;
	small_parse_table_1023(v);
}

void	small_parse_table_1023(t_small_parse_table_array *v)
{
	v->a[20460] = 27;
	v->a[20461] = actions(3);
	v->a[20462] = 1;
	v->a[20463] = sym_comment;
	v->a[20464] = actions(9);
	v->a[20465] = 1;
	v->a[20466] = anon_sym_for;
	v->a[20467] = actions(13);
	v->a[20468] = 1;
	v->a[20469] = anon_sym_if;
	v->a[20470] = actions(17);
	v->a[20471] = 1;
	v->a[20472] = anon_sym_LPAREN;
	v->a[20473] = actions(19);
	v->a[20474] = 1;
	v->a[20475] = anon_sym_LBRACE;
	v->a[20476] = actions(63);
	v->a[20477] = 1;
	v->a[20478] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20479] = actions(65);
	small_parse_table_1024(v);
}

void	small_parse_table_1024(t_small_parse_table_array *v)
{
	v->a[20480] = 1;
	v->a[20481] = anon_sym_DOLLAR;
	v->a[20482] = actions(67);
	v->a[20483] = 1;
	v->a[20484] = anon_sym_DQUOTE;
	v->a[20485] = actions(71);
	v->a[20486] = 1;
	v->a[20487] = aux_sym_number_token1;
	v->a[20488] = actions(73);
	v->a[20489] = 1;
	v->a[20490] = aux_sym_number_token2;
	v->a[20491] = actions(75);
	v->a[20492] = 1;
	v->a[20493] = anon_sym_DOLLAR_LBRACE;
	v->a[20494] = actions(77);
	v->a[20495] = 1;
	v->a[20496] = anon_sym_DOLLAR_LPAREN;
	v->a[20497] = actions(79);
	v->a[20498] = 1;
	v->a[20499] = anon_sym_BQUOTE;
	small_parse_table_1025(v);
}

/* EOF small_parse_table_204.c */
