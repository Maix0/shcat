/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_135.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_675(t_small_parse_table_array *v)
{
	v->a[13500] = actions(19);
	v->a[13501] = 1;
	v->a[13502] = anon_sym_LBRACE;
	v->a[13503] = actions(53);
	v->a[13504] = 1;
	v->a[13505] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13506] = actions(55);
	v->a[13507] = 1;
	v->a[13508] = anon_sym_DOLLAR;
	v->a[13509] = actions(57);
	v->a[13510] = 1;
	v->a[13511] = anon_sym_DQUOTE;
	v->a[13512] = actions(61);
	v->a[13513] = 1;
	v->a[13514] = anon_sym_DOLLAR_LBRACE;
	v->a[13515] = actions(63);
	v->a[13516] = 1;
	v->a[13517] = anon_sym_DOLLAR_LPAREN;
	v->a[13518] = actions(65);
	v->a[13519] = 1;
	small_parse_table_676(v);
}

void	small_parse_table_676(t_small_parse_table_array *v)
{
	v->a[13520] = anon_sym_BQUOTE;
	v->a[13521] = actions(208);
	v->a[13522] = 1;
	v->a[13523] = sym_word;
	v->a[13524] = actions(210);
	v->a[13525] = 1;
	v->a[13526] = anon_sym_BANG;
	v->a[13527] = actions(216);
	v->a[13528] = 1;
	v->a[13529] = sym_variable_name;
	v->a[13530] = state(158);
	v->a[13531] = 1;
	v->a[13532] = sym_command_name;
	v->a[13533] = state(233);
	v->a[13534] = 1;
	v->a[13535] = sym_variable_assignment;
	v->a[13536] = state(298);
	v->a[13537] = 1;
	v->a[13538] = aux_sym_command_repeat1;
	v->a[13539] = state(551);
	small_parse_table_677(v);
}

void	small_parse_table_677(t_small_parse_table_array *v)
{
	v->a[13540] = 1;
	v->a[13541] = sym_file_redirect;
	v->a[13542] = state(555);
	v->a[13543] = 1;
	v->a[13544] = sym_concatenation;
	v->a[13545] = state(1019);
	v->a[13546] = 1;
	v->a[13547] = aux_sym_redirected_statement_repeat2;
	v->a[13548] = state(1324);
	v->a[13549] = 1;
	v->a[13550] = sym_pipeline;
	v->a[13551] = actions(11);
	v->a[13552] = 2;
	v->a[13553] = anon_sym_while;
	v->a[13554] = anon_sym_until;
	v->a[13555] = actions(214);
	v->a[13556] = 2;
	v->a[13557] = sym_raw_string;
	v->a[13558] = sym_number;
	v->a[13559] = actions(212);
	small_parse_table_678(v);
}

void	small_parse_table_678(t_small_parse_table_array *v)
{
	v->a[13560] = 3;
	v->a[13561] = anon_sym_LT;
	v->a[13562] = anon_sym_GT;
	v->a[13563] = anon_sym_GT_GT;
	v->a[13564] = state(277);
	v->a[13565] = 5;
	v->a[13566] = sym_arithmetic_expansion;
	v->a[13567] = sym_string;
	v->a[13568] = sym_simple_expansion;
	v->a[13569] = sym_expansion;
	v->a[13570] = sym_command_substitution;
	v->a[13571] = state(953);
	v->a[13572] = 13;
	v->a[13573] = sym__statement_not_pipeline;
	v->a[13574] = sym_redirected_statement;
	v->a[13575] = sym_for_statement;
	v->a[13576] = sym_while_statement;
	v->a[13577] = sym_if_statement;
	v->a[13578] = sym_case_statement;
	v->a[13579] = sym_function_definition;
	small_parse_table_679(v);
}

void	small_parse_table_679(t_small_parse_table_array *v)
{
	v->a[13580] = sym_compound_statement;
	v->a[13581] = sym_subshell;
	v->a[13582] = sym_list;
	v->a[13583] = sym_negated_command;
	v->a[13584] = sym_command;
	v->a[13585] = sym__variable_assignments;
	v->a[13586] = 28;
	v->a[13587] = actions(3);
	v->a[13588] = 1;
	v->a[13589] = sym_comment;
	v->a[13590] = actions(9);
	v->a[13591] = 1;
	v->a[13592] = anon_sym_for;
	v->a[13593] = actions(13);
	v->a[13594] = 1;
	v->a[13595] = anon_sym_if;
	v->a[13596] = actions(15);
	v->a[13597] = 1;
	v->a[13598] = anon_sym_case;
	v->a[13599] = actions(17);
	small_parse_table_680(v);
}

/* EOF small_parse_table_135.c */
