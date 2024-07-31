/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_134.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_670(t_small_parse_table_array *v)
{
	v->a[13400] = actions(53);
	v->a[13401] = 1;
	v->a[13402] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13403] = actions(55);
	v->a[13404] = 1;
	v->a[13405] = anon_sym_DOLLAR;
	v->a[13406] = actions(57);
	v->a[13407] = 1;
	v->a[13408] = anon_sym_DQUOTE;
	v->a[13409] = actions(61);
	v->a[13410] = 1;
	v->a[13411] = anon_sym_DOLLAR_LBRACE;
	v->a[13412] = actions(63);
	v->a[13413] = 1;
	v->a[13414] = anon_sym_DOLLAR_LPAREN;
	v->a[13415] = actions(65);
	v->a[13416] = 1;
	v->a[13417] = anon_sym_BQUOTE;
	v->a[13418] = actions(67);
	v->a[13419] = 1;
	small_parse_table_671(v);
}

void	small_parse_table_671(t_small_parse_table_array *v)
{
	v->a[13420] = sym_variable_name;
	v->a[13421] = state(105);
	v->a[13422] = 1;
	v->a[13423] = aux_sym__statements_repeat1;
	v->a[13424] = state(271);
	v->a[13425] = 1;
	v->a[13426] = sym_command_name;
	v->a[13427] = state(303);
	v->a[13428] = 1;
	v->a[13429] = sym_variable_assignment;
	v->a[13430] = state(482);
	v->a[13431] = 1;
	v->a[13432] = aux_sym_command_repeat1;
	v->a[13433] = state(600);
	v->a[13434] = 1;
	v->a[13435] = sym_file_redirect;
	v->a[13436] = state(602);
	v->a[13437] = 1;
	v->a[13438] = sym_concatenation;
	v->a[13439] = state(886);
	small_parse_table_672(v);
}

void	small_parse_table_672(t_small_parse_table_array *v)
{
	v->a[13440] = 1;
	v->a[13441] = sym__variable_assignments;
	v->a[13442] = state(889);
	v->a[13443] = 1;
	v->a[13444] = sym_command;
	v->a[13445] = state(891);
	v->a[13446] = 1;
	v->a[13447] = sym_negated_command;
	v->a[13448] = state(897);
	v->a[13449] = 1;
	v->a[13450] = sym_list;
	v->a[13451] = state(903);
	v->a[13452] = 1;
	v->a[13453] = sym_subshell;
	v->a[13454] = state(904);
	v->a[13455] = 1;
	v->a[13456] = sym_compound_statement;
	v->a[13457] = state(905);
	v->a[13458] = 1;
	v->a[13459] = sym_function_definition;
	small_parse_table_673(v);
}

void	small_parse_table_673(t_small_parse_table_array *v)
{
	v->a[13460] = state(906);
	v->a[13461] = 1;
	v->a[13462] = sym_case_statement;
	v->a[13463] = state(907);
	v->a[13464] = 1;
	v->a[13465] = sym_if_statement;
	v->a[13466] = state(908);
	v->a[13467] = 1;
	v->a[13468] = sym_while_statement;
	v->a[13469] = state(909);
	v->a[13470] = 1;
	v->a[13471] = sym_for_statement;
	v->a[13472] = state(910);
	v->a[13473] = 1;
	v->a[13474] = sym_redirected_statement;
	v->a[13475] = state(1027);
	v->a[13476] = 1;
	v->a[13477] = sym_pipeline;
	v->a[13478] = state(1068);
	v->a[13479] = 1;
	small_parse_table_674(v);
}

void	small_parse_table_674(t_small_parse_table_array *v)
{
	v->a[13480] = aux_sym_redirected_statement_repeat2;
	v->a[13481] = state(1609);
	v->a[13482] = 1;
	v->a[13483] = sym__statement_not_pipeline;
	v->a[13484] = actions(11);
	v->a[13485] = 2;
	v->a[13486] = anon_sym_while;
	v->a[13487] = anon_sym_until;
	v->a[13488] = actions(59);
	v->a[13489] = 2;
	v->a[13490] = sym_raw_string;
	v->a[13491] = sym_number;
	v->a[13492] = state(425);
	v->a[13493] = 5;
	v->a[13494] = sym_arithmetic_expansion;
	v->a[13495] = sym_string;
	v->a[13496] = sym_simple_expansion;
	v->a[13497] = sym_expansion;
	v->a[13498] = sym_command_substitution;
	v->a[13499] = actions(51);
	small_parse_table_675(v);
}

/* EOF small_parse_table_134.c */
