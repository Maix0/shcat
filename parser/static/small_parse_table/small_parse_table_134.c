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
	v->a[13400] = anon_sym_until;
	v->a[13401] = actions(57);
	v->a[13402] = 2;
	v->a[13403] = anon_sym_LT_AMP_DASH;
	v->a[13404] = anon_sym_GT_AMP_DASH;
	v->a[13405] = actions(65);
	v->a[13406] = 2;
	v->a[13407] = sym_raw_string;
	v->a[13408] = sym_number;
	v->a[13409] = state(443);
	v->a[13410] = 5;
	v->a[13411] = sym_arithmetic_expansion;
	v->a[13412] = sym_string;
	v->a[13413] = sym_simple_expansion;
	v->a[13414] = sym_expansion;
	v->a[13415] = sym_command_substitution;
	v->a[13416] = actions(55);
	v->a[13417] = 6;
	v->a[13418] = anon_sym_LT;
	v->a[13419] = anon_sym_GT;
	small_parse_table_671(v);
}

void	small_parse_table_671(t_small_parse_table_array *v)
{
	v->a[13420] = anon_sym_GT_GT;
	v->a[13421] = anon_sym_LT_AMP;
	v->a[13422] = anon_sym_GT_AMP;
	v->a[13423] = anon_sym_GT_PIPE;
	v->a[13424] = state(1030);
	v->a[13425] = 12;
	v->a[13426] = sym_redirected_statement;
	v->a[13427] = sym_for_statement;
	v->a[13428] = sym_while_statement;
	v->a[13429] = sym_if_statement;
	v->a[13430] = sym_case_statement;
	v->a[13431] = sym_function_definition;
	v->a[13432] = sym_compound_statement;
	v->a[13433] = sym_subshell;
	v->a[13434] = sym_list;
	v->a[13435] = sym_negated_command;
	v->a[13436] = sym_command;
	v->a[13437] = sym__variable_assignments;
	v->a[13438] = 32;
	v->a[13439] = actions(3);
	small_parse_table_672(v);
}

void	small_parse_table_672(t_small_parse_table_array *v)
{
	v->a[13440] = 1;
	v->a[13441] = sym_comment;
	v->a[13442] = actions(9);
	v->a[13443] = 1;
	v->a[13444] = anon_sym_for;
	v->a[13445] = actions(13);
	v->a[13446] = 1;
	v->a[13447] = anon_sym_if;
	v->a[13448] = actions(15);
	v->a[13449] = 1;
	v->a[13450] = anon_sym_case;
	v->a[13451] = actions(17);
	v->a[13452] = 1;
	v->a[13453] = anon_sym_LPAREN;
	v->a[13454] = actions(19);
	v->a[13455] = 1;
	v->a[13456] = anon_sym_LBRACE;
	v->a[13457] = actions(59);
	v->a[13458] = 1;
	v->a[13459] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_673(v);
}

void	small_parse_table_673(t_small_parse_table_array *v)
{
	v->a[13460] = actions(61);
	v->a[13461] = 1;
	v->a[13462] = anon_sym_DOLLAR;
	v->a[13463] = actions(63);
	v->a[13464] = 1;
	v->a[13465] = anon_sym_DQUOTE;
	v->a[13466] = actions(67);
	v->a[13467] = 1;
	v->a[13468] = anon_sym_DOLLAR_LBRACE;
	v->a[13469] = actions(69);
	v->a[13470] = 1;
	v->a[13471] = anon_sym_DOLLAR_LPAREN;
	v->a[13472] = actions(71);
	v->a[13473] = 1;
	v->a[13474] = anon_sym_BQUOTE;
	v->a[13475] = actions(220);
	v->a[13476] = 1;
	v->a[13477] = sym_word;
	v->a[13478] = actions(222);
	v->a[13479] = 1;
	small_parse_table_674(v);
}

void	small_parse_table_674(t_small_parse_table_array *v)
{
	v->a[13480] = anon_sym_BANG;
	v->a[13481] = actions(230);
	v->a[13482] = 1;
	v->a[13483] = sym_file_descriptor;
	v->a[13484] = actions(232);
	v->a[13485] = 1;
	v->a[13486] = sym_variable_name;
	v->a[13487] = state(133);
	v->a[13488] = 1;
	v->a[13489] = aux_sym__statements_repeat1;
	v->a[13490] = state(180);
	v->a[13491] = 1;
	v->a[13492] = sym_command_name;
	v->a[13493] = state(231);
	v->a[13494] = 1;
	v->a[13495] = sym_variable_assignment;
	v->a[13496] = state(650);
	v->a[13497] = 1;
	v->a[13498] = sym_concatenation;
	v->a[13499] = state(674);
	small_parse_table_675(v);
}

/* EOF small_parse_table_134.c */
