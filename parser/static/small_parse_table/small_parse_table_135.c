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
	v->a[13500] = anon_sym_GT_AMP_DASH;
	v->a[13501] = actions(228);
	v->a[13502] = 2;
	v->a[13503] = sym_raw_string;
	v->a[13504] = sym_number;
	v->a[13505] = state(294);
	v->a[13506] = 5;
	v->a[13507] = sym_arithmetic_expansion;
	v->a[13508] = sym_string;
	v->a[13509] = sym_simple_expansion;
	v->a[13510] = sym_expansion;
	v->a[13511] = sym_command_substitution;
	v->a[13512] = actions(224);
	v->a[13513] = 8;
	v->a[13514] = anon_sym_LT;
	v->a[13515] = anon_sym_GT;
	v->a[13516] = anon_sym_GT_GT;
	v->a[13517] = anon_sym_AMP_GT;
	v->a[13518] = anon_sym_AMP_GT_GT;
	v->a[13519] = anon_sym_LT_AMP;
	small_parse_table_676(v);
}

void	small_parse_table_676(t_small_parse_table_array *v)
{
	v->a[13520] = anon_sym_GT_AMP;
	v->a[13521] = anon_sym_GT_PIPE;
	v->a[13522] = state(1188);
	v->a[13523] = 12;
	v->a[13524] = sym_redirected_statement;
	v->a[13525] = sym_for_statement;
	v->a[13526] = sym_while_statement;
	v->a[13527] = sym_if_statement;
	v->a[13528] = sym_case_statement;
	v->a[13529] = sym_function_definition;
	v->a[13530] = sym_compound_statement;
	v->a[13531] = sym_subshell;
	v->a[13532] = sym_list;
	v->a[13533] = sym_negated_command;
	v->a[13534] = sym_command;
	v->a[13535] = sym_variable_assignments;
	v->a[13536] = 32;
	v->a[13537] = actions(3);
	v->a[13538] = 1;
	v->a[13539] = sym_comment;
	small_parse_table_677(v);
}

void	small_parse_table_677(t_small_parse_table_array *v)
{
	v->a[13540] = actions(9);
	v->a[13541] = 1;
	v->a[13542] = anon_sym_for;
	v->a[13543] = actions(13);
	v->a[13544] = 1;
	v->a[13545] = anon_sym_if;
	v->a[13546] = actions(15);
	v->a[13547] = 1;
	v->a[13548] = anon_sym_case;
	v->a[13549] = actions(17);
	v->a[13550] = 1;
	v->a[13551] = anon_sym_LPAREN;
	v->a[13552] = actions(19);
	v->a[13553] = 1;
	v->a[13554] = anon_sym_LBRACE;
	v->a[13555] = actions(59);
	v->a[13556] = 1;
	v->a[13557] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13558] = actions(61);
	v->a[13559] = 1;
	small_parse_table_678(v);
}

void	small_parse_table_678(t_small_parse_table_array *v)
{
	v->a[13560] = anon_sym_DOLLAR;
	v->a[13561] = actions(63);
	v->a[13562] = 1;
	v->a[13563] = anon_sym_DQUOTE;
	v->a[13564] = actions(67);
	v->a[13565] = 1;
	v->a[13566] = anon_sym_DOLLAR_LBRACE;
	v->a[13567] = actions(69);
	v->a[13568] = 1;
	v->a[13569] = anon_sym_DOLLAR_LPAREN;
	v->a[13570] = actions(71);
	v->a[13571] = 1;
	v->a[13572] = anon_sym_BQUOTE;
	v->a[13573] = actions(73);
	v->a[13574] = 1;
	v->a[13575] = sym_file_descriptor;
	v->a[13576] = actions(75);
	v->a[13577] = 1;
	v->a[13578] = sym_variable_name;
	v->a[13579] = actions(236);
	small_parse_table_679(v);
}

void	small_parse_table_679(t_small_parse_table_array *v)
{
	v->a[13580] = 1;
	v->a[13581] = sym_word;
	v->a[13582] = actions(238);
	v->a[13583] = 1;
	v->a[13584] = anon_sym_BANG;
	v->a[13585] = state(140);
	v->a[13586] = 1;
	v->a[13587] = aux_sym__statements_repeat1;
	v->a[13588] = state(189);
	v->a[13589] = 1;
	v->a[13590] = sym_command_name;
	v->a[13591] = state(286);
	v->a[13592] = 1;
	v->a[13593] = sym_variable_assignment;
	v->a[13594] = state(647);
	v->a[13595] = 1;
	v->a[13596] = sym_concatenation;
	v->a[13597] = state(746);
	v->a[13598] = 1;
	v->a[13599] = aux_sym_command_repeat1;
	small_parse_table_680(v);
}

/* EOF small_parse_table_135.c */
