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
	v->a[13400] = anon_sym_LT;
	v->a[13401] = anon_sym_GT;
	v->a[13402] = anon_sym_GT_GT;
	v->a[13403] = anon_sym_AMP_GT;
	v->a[13404] = anon_sym_AMP_GT_GT;
	v->a[13405] = anon_sym_LT_AMP;
	v->a[13406] = anon_sym_GT_AMP;
	v->a[13407] = anon_sym_GT_PIPE;
	v->a[13408] = state(1071);
	v->a[13409] = 12;
	v->a[13410] = sym_redirected_statement;
	v->a[13411] = sym_for_statement;
	v->a[13412] = sym_while_statement;
	v->a[13413] = sym_if_statement;
	v->a[13414] = sym_case_statement;
	v->a[13415] = sym_function_definition;
	v->a[13416] = sym_compound_statement;
	v->a[13417] = sym_subshell;
	v->a[13418] = sym_list;
	v->a[13419] = sym_negated_command;
	small_parse_table_671(v);
}

void	small_parse_table_671(t_small_parse_table_array *v)
{
	v->a[13420] = sym_command;
	v->a[13421] = sym_variable_assignments;
	v->a[13422] = 34;
	v->a[13423] = actions(3);
	v->a[13424] = 1;
	v->a[13425] = sym_comment;
	v->a[13426] = actions(9);
	v->a[13427] = 1;
	v->a[13428] = anon_sym_for;
	v->a[13429] = actions(13);
	v->a[13430] = 1;
	v->a[13431] = anon_sym_if;
	v->a[13432] = actions(15);
	v->a[13433] = 1;
	v->a[13434] = anon_sym_case;
	v->a[13435] = actions(17);
	v->a[13436] = 1;
	v->a[13437] = anon_sym_LPAREN;
	v->a[13438] = actions(19);
	v->a[13439] = 1;
	small_parse_table_672(v);
}

void	small_parse_table_672(t_small_parse_table_array *v)
{
	v->a[13440] = anon_sym_LBRACE;
	v->a[13441] = actions(63);
	v->a[13442] = 1;
	v->a[13443] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13444] = actions(65);
	v->a[13445] = 1;
	v->a[13446] = anon_sym_DOLLAR;
	v->a[13447] = actions(67);
	v->a[13448] = 1;
	v->a[13449] = anon_sym_DQUOTE;
	v->a[13450] = actions(71);
	v->a[13451] = 1;
	v->a[13452] = aux_sym_number_token1;
	v->a[13453] = actions(73);
	v->a[13454] = 1;
	v->a[13455] = aux_sym_number_token2;
	v->a[13456] = actions(75);
	v->a[13457] = 1;
	v->a[13458] = anon_sym_DOLLAR_LBRACE;
	v->a[13459] = actions(77);
	small_parse_table_673(v);
}

void	small_parse_table_673(t_small_parse_table_array *v)
{
	v->a[13460] = 1;
	v->a[13461] = anon_sym_DOLLAR_LPAREN;
	v->a[13462] = actions(79);
	v->a[13463] = 1;
	v->a[13464] = anon_sym_BQUOTE;
	v->a[13465] = actions(248);
	v->a[13466] = 1;
	v->a[13467] = sym_word;
	v->a[13468] = actions(250);
	v->a[13469] = 1;
	v->a[13470] = anon_sym_BANG;
	v->a[13471] = actions(256);
	v->a[13472] = 1;
	v->a[13473] = sym_raw_string;
	v->a[13474] = actions(258);
	v->a[13475] = 1;
	v->a[13476] = sym_file_descriptor;
	v->a[13477] = actions(260);
	v->a[13478] = 1;
	v->a[13479] = sym_variable_name;
	small_parse_table_674(v);
}

void	small_parse_table_674(t_small_parse_table_array *v)
{
	v->a[13480] = state(141);
	v->a[13481] = 1;
	v->a[13482] = aux_sym__statements_repeat1;
	v->a[13483] = state(175);
	v->a[13484] = 1;
	v->a[13485] = sym_command_name;
	v->a[13486] = state(278);
	v->a[13487] = 1;
	v->a[13488] = sym_variable_assignment;
	v->a[13489] = state(567);
	v->a[13490] = 1;
	v->a[13491] = aux_sym_command_repeat1;
	v->a[13492] = state(582);
	v->a[13493] = 1;
	v->a[13494] = sym_concatenation;
	v->a[13495] = state(718);
	v->a[13496] = 1;
	v->a[13497] = sym_file_redirect;
	v->a[13498] = state(1100);
	v->a[13499] = 1;
	small_parse_table_675(v);
}

/* EOF small_parse_table_134.c */
