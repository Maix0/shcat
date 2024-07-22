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
	v->a[13500] = 1;
	v->a[13501] = anon_sym_BANG;
	v->a[13502] = actions(219);
	v->a[13503] = 1;
	v->a[13504] = sym_file_descriptor;
	v->a[13505] = actions(221);
	v->a[13506] = 1;
	v->a[13507] = sym_variable_name;
	v->a[13508] = state(127);
	v->a[13509] = 1;
	v->a[13510] = aux_sym__statements_repeat1;
	v->a[13511] = state(170);
	v->a[13512] = 1;
	v->a[13513] = sym_command_name;
	v->a[13514] = state(241);
	v->a[13515] = 1;
	v->a[13516] = sym_variable_assignment;
	v->a[13517] = state(617);
	v->a[13518] = 1;
	v->a[13519] = aux_sym_command_repeat1;
	small_parse_table_676(v);
}

void	small_parse_table_676(t_small_parse_table_array *v)
{
	v->a[13520] = state(661);
	v->a[13521] = 1;
	v->a[13522] = sym_concatenation;
	v->a[13523] = state(733);
	v->a[13524] = 1;
	v->a[13525] = sym_file_redirect;
	v->a[13526] = state(1070);
	v->a[13527] = 1;
	v->a[13528] = sym_pipeline;
	v->a[13529] = state(1177);
	v->a[13530] = 1;
	v->a[13531] = aux_sym_redirected_statement_repeat2;
	v->a[13532] = state(1919);
	v->a[13533] = 1;
	v->a[13534] = sym__statement_not_pipeline;
	v->a[13535] = state(2099);
	v->a[13536] = 1;
	v->a[13537] = sym__statements;
	v->a[13538] = actions(11);
	v->a[13539] = 2;
	small_parse_table_677(v);
}

void	small_parse_table_677(t_small_parse_table_array *v)
{
	v->a[13540] = anon_sym_while;
	v->a[13541] = anon_sym_until;
	v->a[13542] = actions(217);
	v->a[13543] = 2;
	v->a[13544] = sym_raw_string;
	v->a[13545] = sym_number;
	v->a[13546] = state(374);
	v->a[13547] = 5;
	v->a[13548] = sym_arithmetic_expansion;
	v->a[13549] = sym_string;
	v->a[13550] = sym_simple_expansion;
	v->a[13551] = sym_expansion;
	v->a[13552] = sym_command_substitution;
	v->a[13553] = actions(215);
	v->a[13554] = 7;
	v->a[13555] = anon_sym_LT;
	v->a[13556] = anon_sym_GT;
	v->a[13557] = anon_sym_GT_GT;
	v->a[13558] = anon_sym_LT_AMP;
	v->a[13559] = anon_sym_GT_AMP;
	small_parse_table_678(v);
}

void	small_parse_table_678(t_small_parse_table_array *v)
{
	v->a[13560] = anon_sym_GT_PIPE;
	v->a[13561] = anon_sym_LT_GT;
	v->a[13562] = state(989);
	v->a[13563] = 12;
	v->a[13564] = sym_redirected_statement;
	v->a[13565] = sym_for_statement;
	v->a[13566] = sym_while_statement;
	v->a[13567] = sym_if_statement;
	v->a[13568] = sym_case_statement;
	v->a[13569] = sym_function_definition;
	v->a[13570] = sym_compound_statement;
	v->a[13571] = sym_subshell;
	v->a[13572] = sym_list;
	v->a[13573] = sym_negated_command;
	v->a[13574] = sym_command;
	v->a[13575] = sym__variable_assignments;
	v->a[13576] = 31;
	v->a[13577] = actions(3);
	v->a[13578] = 1;
	v->a[13579] = sym_comment;
	small_parse_table_679(v);
}

void	small_parse_table_679(t_small_parse_table_array *v)
{
	v->a[13580] = actions(9);
	v->a[13581] = 1;
	v->a[13582] = anon_sym_for;
	v->a[13583] = actions(13);
	v->a[13584] = 1;
	v->a[13585] = anon_sym_if;
	v->a[13586] = actions(15);
	v->a[13587] = 1;
	v->a[13588] = anon_sym_case;
	v->a[13589] = actions(17);
	v->a[13590] = 1;
	v->a[13591] = anon_sym_LPAREN;
	v->a[13592] = actions(19);
	v->a[13593] = 1;
	v->a[13594] = anon_sym_LBRACE;
	v->a[13595] = actions(55);
	v->a[13596] = 1;
	v->a[13597] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13598] = actions(57);
	v->a[13599] = 1;
	small_parse_table_680(v);
}

/* EOF small_parse_table_135.c */
