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
	v->a[13500] = sym_pipeline;
	v->a[13501] = state(1196);
	v->a[13502] = 1;
	v->a[13503] = aux_sym_redirected_statement_repeat2;
	v->a[13504] = state(2037);
	v->a[13505] = 1;
	v->a[13506] = sym__statement_not_pipeline;
	v->a[13507] = state(2231);
	v->a[13508] = 1;
	v->a[13509] = sym__statements;
	v->a[13510] = actions(11);
	v->a[13511] = 2;
	v->a[13512] = anon_sym_while;
	v->a[13513] = anon_sym_until;
	v->a[13514] = actions(254);
	v->a[13515] = 2;
	v->a[13516] = anon_sym_LT_AMP_DASH;
	v->a[13517] = anon_sym_GT_AMP_DASH;
	v->a[13518] = state(295);
	v->a[13519] = 6;
	small_parse_table_676(v);
}

void	small_parse_table_676(t_small_parse_table_array *v)
{
	v->a[13520] = sym_arithmetic_expansion;
	v->a[13521] = sym_string;
	v->a[13522] = sym_number;
	v->a[13523] = sym_simple_expansion;
	v->a[13524] = sym_expansion;
	v->a[13525] = sym_command_substitution;
	v->a[13526] = actions(252);
	v->a[13527] = 8;
	v->a[13528] = anon_sym_LT;
	v->a[13529] = anon_sym_GT;
	v->a[13530] = anon_sym_GT_GT;
	v->a[13531] = anon_sym_AMP_GT;
	v->a[13532] = anon_sym_AMP_GT_GT;
	v->a[13533] = anon_sym_LT_AMP;
	v->a[13534] = anon_sym_GT_AMP;
	v->a[13535] = anon_sym_GT_PIPE;
	v->a[13536] = state(1031);
	v->a[13537] = 12;
	v->a[13538] = sym_redirected_statement;
	v->a[13539] = sym_for_statement;
	small_parse_table_677(v);
}

void	small_parse_table_677(t_small_parse_table_array *v)
{
	v->a[13540] = sym_while_statement;
	v->a[13541] = sym_if_statement;
	v->a[13542] = sym_case_statement;
	v->a[13543] = sym_function_definition;
	v->a[13544] = sym_compound_statement;
	v->a[13545] = sym_subshell;
	v->a[13546] = sym_list;
	v->a[13547] = sym_negated_command;
	v->a[13548] = sym_command;
	v->a[13549] = sym_variable_assignments;
	v->a[13550] = 34;
	v->a[13551] = actions(3);
	v->a[13552] = 1;
	v->a[13553] = sym_comment;
	v->a[13554] = actions(9);
	v->a[13555] = 1;
	v->a[13556] = anon_sym_for;
	v->a[13557] = actions(13);
	v->a[13558] = 1;
	v->a[13559] = anon_sym_if;
	small_parse_table_678(v);
}

void	small_parse_table_678(t_small_parse_table_array *v)
{
	v->a[13560] = actions(15);
	v->a[13561] = 1;
	v->a[13562] = anon_sym_case;
	v->a[13563] = actions(17);
	v->a[13564] = 1;
	v->a[13565] = anon_sym_LPAREN;
	v->a[13566] = actions(19);
	v->a[13567] = 1;
	v->a[13568] = anon_sym_LBRACE;
	v->a[13569] = actions(49);
	v->a[13570] = 1;
	v->a[13571] = sym_word;
	v->a[13572] = actions(57);
	v->a[13573] = 1;
	v->a[13574] = anon_sym_BANG;
	v->a[13575] = actions(63);
	v->a[13576] = 1;
	v->a[13577] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13578] = actions(65);
	v->a[13579] = 1;
	small_parse_table_679(v);
}

void	small_parse_table_679(t_small_parse_table_array *v)
{
	v->a[13580] = anon_sym_DOLLAR;
	v->a[13581] = actions(67);
	v->a[13582] = 1;
	v->a[13583] = anon_sym_DQUOTE;
	v->a[13584] = actions(69);
	v->a[13585] = 1;
	v->a[13586] = sym_raw_string;
	v->a[13587] = actions(71);
	v->a[13588] = 1;
	v->a[13589] = aux_sym_number_token1;
	v->a[13590] = actions(73);
	v->a[13591] = 1;
	v->a[13592] = aux_sym_number_token2;
	v->a[13593] = actions(75);
	v->a[13594] = 1;
	v->a[13595] = anon_sym_DOLLAR_LBRACE;
	v->a[13596] = actions(77);
	v->a[13597] = 1;
	v->a[13598] = anon_sym_DOLLAR_LPAREN;
	v->a[13599] = actions(79);
	small_parse_table_680(v);
}

/* EOF small_parse_table_135.c */
