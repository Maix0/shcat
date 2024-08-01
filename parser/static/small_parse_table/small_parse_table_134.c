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
	v->a[13400] = anon_sym_LBRACE;
	v->a[13401] = actions(41);
	v->a[13402] = 1;
	v->a[13403] = sym_word;
	v->a[13404] = actions(49);
	v->a[13405] = 1;
	v->a[13406] = anon_sym_BANG;
	v->a[13407] = actions(53);
	v->a[13408] = 1;
	v->a[13409] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13410] = actions(55);
	v->a[13411] = 1;
	v->a[13412] = anon_sym_DOLLAR;
	v->a[13413] = actions(57);
	v->a[13414] = 1;
	v->a[13415] = anon_sym_DQUOTE;
	v->a[13416] = actions(61);
	v->a[13417] = 1;
	v->a[13418] = anon_sym_DOLLAR_LBRACE;
	v->a[13419] = actions(63);
	small_parse_table_671(v);
}

void	small_parse_table_671(t_small_parse_table_array *v)
{
	v->a[13420] = 1;
	v->a[13421] = anon_sym_DOLLAR_LPAREN;
	v->a[13422] = actions(65);
	v->a[13423] = 1;
	v->a[13424] = anon_sym_BQUOTE;
	v->a[13425] = actions(67);
	v->a[13426] = 1;
	v->a[13427] = sym_variable_name;
	v->a[13428] = state(185);
	v->a[13429] = 1;
	v->a[13430] = sym_command_name;
	v->a[13431] = state(247);
	v->a[13432] = 1;
	v->a[13433] = sym_variable_assignment;
	v->a[13434] = state(411);
	v->a[13435] = 1;
	v->a[13436] = aux_sym_command_repeat1;
	v->a[13437] = state(551);
	v->a[13438] = 1;
	v->a[13439] = sym_file_redirect;
	small_parse_table_672(v);
}

void	small_parse_table_672(t_small_parse_table_array *v)
{
	v->a[13440] = state(555);
	v->a[13441] = 1;
	v->a[13442] = sym_concatenation;
	v->a[13443] = state(1126);
	v->a[13444] = 1;
	v->a[13445] = aux_sym_redirected_statement_repeat2;
	v->a[13446] = state(1364);
	v->a[13447] = 1;
	v->a[13448] = sym_pipeline;
	v->a[13449] = actions(11);
	v->a[13450] = 2;
	v->a[13451] = anon_sym_while;
	v->a[13452] = anon_sym_until;
	v->a[13453] = actions(59);
	v->a[13454] = 2;
	v->a[13455] = sym_raw_string;
	v->a[13456] = sym_number;
	v->a[13457] = actions(51);
	v->a[13458] = 3;
	v->a[13459] = anon_sym_LT;
	small_parse_table_673(v);
}

void	small_parse_table_673(t_small_parse_table_array *v)
{
	v->a[13460] = anon_sym_GT;
	v->a[13461] = anon_sym_GT_GT;
	v->a[13462] = state(401);
	v->a[13463] = 5;
	v->a[13464] = sym_arithmetic_expansion;
	v->a[13465] = sym_string;
	v->a[13466] = sym_simple_expansion;
	v->a[13467] = sym_expansion;
	v->a[13468] = sym_command_substitution;
	v->a[13469] = state(953);
	v->a[13470] = 13;
	v->a[13471] = sym__statement_not_pipeline;
	v->a[13472] = sym_redirected_statement;
	v->a[13473] = sym_for_statement;
	v->a[13474] = sym_while_statement;
	v->a[13475] = sym_if_statement;
	v->a[13476] = sym_case_statement;
	v->a[13477] = sym_function_definition;
	v->a[13478] = sym_compound_statement;
	v->a[13479] = sym_subshell;
	small_parse_table_674(v);
}

void	small_parse_table_674(t_small_parse_table_array *v)
{
	v->a[13480] = sym_list;
	v->a[13481] = sym_negated_command;
	v->a[13482] = sym_command;
	v->a[13483] = sym__variable_assignments;
	v->a[13484] = 27;
	v->a[13485] = actions(3);
	v->a[13486] = 1;
	v->a[13487] = sym_comment;
	v->a[13488] = actions(9);
	v->a[13489] = 1;
	v->a[13490] = anon_sym_for;
	v->a[13491] = actions(13);
	v->a[13492] = 1;
	v->a[13493] = anon_sym_if;
	v->a[13494] = actions(15);
	v->a[13495] = 1;
	v->a[13496] = anon_sym_case;
	v->a[13497] = actions(17);
	v->a[13498] = 1;
	v->a[13499] = anon_sym_LPAREN;
	small_parse_table_675(v);
}

/* EOF small_parse_table_134.c */
