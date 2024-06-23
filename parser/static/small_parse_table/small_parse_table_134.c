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
	v->a[13400] = state(1211);
	v->a[13401] = 12;
	v->a[13402] = sym_redirected_statement;
	v->a[13403] = sym_for_statement;
	v->a[13404] = sym_while_statement;
	v->a[13405] = sym_if_statement;
	v->a[13406] = sym_case_statement;
	v->a[13407] = sym_function_definition;
	v->a[13408] = sym_compound_statement;
	v->a[13409] = sym_subshell;
	v->a[13410] = sym_list;
	v->a[13411] = sym_negated_command;
	v->a[13412] = sym_command;
	v->a[13413] = sym__variable_assignments;
	v->a[13414] = 32;
	v->a[13415] = actions(3);
	v->a[13416] = 1;
	v->a[13417] = sym_comment;
	v->a[13418] = actions(9);
	v->a[13419] = 1;
	small_parse_table_671(v);
}

void	small_parse_table_671(t_small_parse_table_array *v)
{
	v->a[13420] = anon_sym_for;
	v->a[13421] = actions(13);
	v->a[13422] = 1;
	v->a[13423] = anon_sym_if;
	v->a[13424] = actions(15);
	v->a[13425] = 1;
	v->a[13426] = anon_sym_case;
	v->a[13427] = actions(17);
	v->a[13428] = 1;
	v->a[13429] = anon_sym_LPAREN;
	v->a[13430] = actions(19);
	v->a[13431] = 1;
	v->a[13432] = anon_sym_LBRACE;
	v->a[13433] = actions(59);
	v->a[13434] = 1;
	v->a[13435] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13436] = actions(61);
	v->a[13437] = 1;
	v->a[13438] = anon_sym_DOLLAR;
	v->a[13439] = actions(63);
	small_parse_table_672(v);
}

void	small_parse_table_672(t_small_parse_table_array *v)
{
	v->a[13440] = 1;
	v->a[13441] = anon_sym_DQUOTE;
	v->a[13442] = actions(67);
	v->a[13443] = 1;
	v->a[13444] = anon_sym_DOLLAR_LBRACE;
	v->a[13445] = actions(69);
	v->a[13446] = 1;
	v->a[13447] = anon_sym_DOLLAR_LPAREN;
	v->a[13448] = actions(71);
	v->a[13449] = 1;
	v->a[13450] = anon_sym_BQUOTE;
	v->a[13451] = actions(220);
	v->a[13452] = 1;
	v->a[13453] = sym_word;
	v->a[13454] = actions(222);
	v->a[13455] = 1;
	v->a[13456] = anon_sym_BANG;
	v->a[13457] = actions(230);
	v->a[13458] = 1;
	v->a[13459] = sym_file_descriptor;
	small_parse_table_673(v);
}

void	small_parse_table_673(t_small_parse_table_array *v)
{
	v->a[13460] = actions(232);
	v->a[13461] = 1;
	v->a[13462] = sym_variable_name;
	v->a[13463] = state(126);
	v->a[13464] = 1;
	v->a[13465] = aux_sym__statements_repeat1;
	v->a[13466] = state(184);
	v->a[13467] = 1;
	v->a[13468] = sym_command_name;
	v->a[13469] = state(268);
	v->a[13470] = 1;
	v->a[13471] = sym_variable_assignment;
	v->a[13472] = state(647);
	v->a[13473] = 1;
	v->a[13474] = sym_concatenation;
	v->a[13475] = state(804);
	v->a[13476] = 1;
	v->a[13477] = sym_file_redirect;
	v->a[13478] = state(828);
	v->a[13479] = 1;
	small_parse_table_674(v);
}

void	small_parse_table_674(t_small_parse_table_array *v)
{
	v->a[13480] = aux_sym_command_repeat1;
	v->a[13481] = state(1314);
	v->a[13482] = 1;
	v->a[13483] = sym_pipeline;
	v->a[13484] = state(1331);
	v->a[13485] = 1;
	v->a[13486] = aux_sym_redirected_statement_repeat2;
	v->a[13487] = state(2252);
	v->a[13488] = 1;
	v->a[13489] = sym__statement_not_pipeline;
	v->a[13490] = state(2420);
	v->a[13491] = 1;
	v->a[13492] = sym__statements;
	v->a[13493] = actions(11);
	v->a[13494] = 2;
	v->a[13495] = anon_sym_while;
	v->a[13496] = anon_sym_until;
	v->a[13497] = actions(226);
	v->a[13498] = 2;
	v->a[13499] = anon_sym_LT_AMP_DASH;
	small_parse_table_675(v);
}

/* EOF small_parse_table_134.c */
