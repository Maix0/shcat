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
	v->a[13501] = sym_file_redirect;
	v->a[13502] = state(710);
	v->a[13503] = 1;
	v->a[13504] = aux_sym_command_repeat1;
	v->a[13505] = state(1095);
	v->a[13506] = 1;
	v->a[13507] = sym_pipeline;
	v->a[13508] = state(1282);
	v->a[13509] = 1;
	v->a[13510] = aux_sym_redirected_statement_repeat2;
	v->a[13511] = state(2127);
	v->a[13512] = 1;
	v->a[13513] = sym__statement_not_pipeline;
	v->a[13514] = state(2283);
	v->a[13515] = 1;
	v->a[13516] = sym__statements;
	v->a[13517] = actions(11);
	v->a[13518] = 2;
	v->a[13519] = anon_sym_while;
	small_parse_table_676(v);
}

void	small_parse_table_676(t_small_parse_table_array *v)
{
	v->a[13520] = anon_sym_until;
	v->a[13521] = actions(226);
	v->a[13522] = 2;
	v->a[13523] = anon_sym_LT_AMP_DASH;
	v->a[13524] = anon_sym_GT_AMP_DASH;
	v->a[13525] = actions(228);
	v->a[13526] = 2;
	v->a[13527] = sym_raw_string;
	v->a[13528] = sym_number;
	v->a[13529] = state(382);
	v->a[13530] = 5;
	v->a[13531] = sym_arithmetic_expansion;
	v->a[13532] = sym_string;
	v->a[13533] = sym_simple_expansion;
	v->a[13534] = sym_expansion;
	v->a[13535] = sym_command_substitution;
	v->a[13536] = actions(224);
	v->a[13537] = 6;
	v->a[13538] = anon_sym_LT;
	v->a[13539] = anon_sym_GT;
	small_parse_table_677(v);
}

void	small_parse_table_677(t_small_parse_table_array *v)
{
	v->a[13540] = anon_sym_GT_GT;
	v->a[13541] = anon_sym_LT_AMP;
	v->a[13542] = anon_sym_GT_AMP;
	v->a[13543] = anon_sym_GT_PIPE;
	v->a[13544] = state(1087);
	v->a[13545] = 12;
	v->a[13546] = sym_redirected_statement;
	v->a[13547] = sym_for_statement;
	v->a[13548] = sym_while_statement;
	v->a[13549] = sym_if_statement;
	v->a[13550] = sym_case_statement;
	v->a[13551] = sym_function_definition;
	v->a[13552] = sym_compound_statement;
	v->a[13553] = sym_subshell;
	v->a[13554] = sym_list;
	v->a[13555] = sym_negated_command;
	v->a[13556] = sym_command;
	v->a[13557] = sym__variable_assignments;
	v->a[13558] = 32;
	v->a[13559] = actions(3);
	small_parse_table_678(v);
}

void	small_parse_table_678(t_small_parse_table_array *v)
{
	v->a[13560] = 1;
	v->a[13561] = sym_comment;
	v->a[13562] = actions(9);
	v->a[13563] = 1;
	v->a[13564] = anon_sym_for;
	v->a[13565] = actions(13);
	v->a[13566] = 1;
	v->a[13567] = anon_sym_if;
	v->a[13568] = actions(15);
	v->a[13569] = 1;
	v->a[13570] = anon_sym_case;
	v->a[13571] = actions(17);
	v->a[13572] = 1;
	v->a[13573] = anon_sym_LPAREN;
	v->a[13574] = actions(19);
	v->a[13575] = 1;
	v->a[13576] = anon_sym_LBRACE;
	v->a[13577] = actions(59);
	v->a[13578] = 1;
	v->a[13579] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_679(v);
}

void	small_parse_table_679(t_small_parse_table_array *v)
{
	v->a[13580] = actions(61);
	v->a[13581] = 1;
	v->a[13582] = anon_sym_DOLLAR;
	v->a[13583] = actions(63);
	v->a[13584] = 1;
	v->a[13585] = anon_sym_DQUOTE;
	v->a[13586] = actions(67);
	v->a[13587] = 1;
	v->a[13588] = anon_sym_DOLLAR_LBRACE;
	v->a[13589] = actions(69);
	v->a[13590] = 1;
	v->a[13591] = anon_sym_DOLLAR_LPAREN;
	v->a[13592] = actions(71);
	v->a[13593] = 1;
	v->a[13594] = anon_sym_BQUOTE;
	v->a[13595] = actions(73);
	v->a[13596] = 1;
	v->a[13597] = sym_file_descriptor;
	v->a[13598] = actions(75);
	v->a[13599] = 1;
	small_parse_table_680(v);
}

/* EOF small_parse_table_135.c */
