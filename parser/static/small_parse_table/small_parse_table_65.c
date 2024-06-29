/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_65.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_325(t_small_parse_table_array *v)
{
	v->a[6500] = actions(222);
	v->a[6501] = 1;
	v->a[6502] = anon_sym_BANG;
	v->a[6503] = actions(230);
	v->a[6504] = 1;
	v->a[6505] = sym_file_descriptor;
	v->a[6506] = actions(232);
	v->a[6507] = 1;
	v->a[6508] = sym_variable_name;
	v->a[6509] = state(138);
	v->a[6510] = 1;
	v->a[6511] = aux_sym__statements_repeat1;
	v->a[6512] = state(185);
	v->a[6513] = 1;
	v->a[6514] = sym_command_name;
	v->a[6515] = state(235);
	v->a[6516] = 1;
	v->a[6517] = sym_variable_assignment;
	v->a[6518] = state(624);
	v->a[6519] = 1;
	small_parse_table_326(v);
}

void	small_parse_table_326(t_small_parse_table_array *v)
{
	v->a[6520] = sym_concatenation;
	v->a[6521] = state(726);
	v->a[6522] = 1;
	v->a[6523] = sym_file_redirect;
	v->a[6524] = state(765);
	v->a[6525] = 1;
	v->a[6526] = aux_sym_command_repeat1;
	v->a[6527] = state(1110);
	v->a[6528] = 1;
	v->a[6529] = sym_pipeline;
	v->a[6530] = state(1188);
	v->a[6531] = 1;
	v->a[6532] = aux_sym_redirected_statement_repeat2;
	v->a[6533] = state(2115);
	v->a[6534] = 1;
	v->a[6535] = sym__statement_not_pipeline;
	v->a[6536] = state(2324);
	v->a[6537] = 1;
	v->a[6538] = sym__statements;
	v->a[6539] = actions(11);
	small_parse_table_327(v);
}

void	small_parse_table_327(t_small_parse_table_array *v)
{
	v->a[6540] = 2;
	v->a[6541] = anon_sym_while;
	v->a[6542] = anon_sym_until;
	v->a[6543] = actions(226);
	v->a[6544] = 2;
	v->a[6545] = anon_sym_LT_AMP_DASH;
	v->a[6546] = anon_sym_GT_AMP_DASH;
	v->a[6547] = actions(228);
	v->a[6548] = 2;
	v->a[6549] = sym_raw_string;
	v->a[6550] = sym_number;
	v->a[6551] = state(299);
	v->a[6552] = 5;
	v->a[6553] = sym_arithmetic_expansion;
	v->a[6554] = sym_string;
	v->a[6555] = sym_simple_expansion;
	v->a[6556] = sym_expansion;
	v->a[6557] = sym_command_substitution;
	v->a[6558] = actions(224);
	v->a[6559] = 8;
	small_parse_table_328(v);
}

void	small_parse_table_328(t_small_parse_table_array *v)
{
	v->a[6560] = anon_sym_LT;
	v->a[6561] = anon_sym_GT;
	v->a[6562] = anon_sym_GT_GT;
	v->a[6563] = anon_sym_AMP_GT;
	v->a[6564] = anon_sym_AMP_GT_GT;
	v->a[6565] = anon_sym_LT_AMP;
	v->a[6566] = anon_sym_GT_AMP;
	v->a[6567] = anon_sym_GT_PIPE;
	v->a[6568] = state(1072);
	v->a[6569] = 12;
	v->a[6570] = sym_redirected_statement;
	v->a[6571] = sym_for_statement;
	v->a[6572] = sym_while_statement;
	v->a[6573] = sym_if_statement;
	v->a[6574] = sym_case_statement;
	v->a[6575] = sym_function_definition;
	v->a[6576] = sym_compound_statement;
	v->a[6577] = sym_subshell;
	v->a[6578] = sym_list;
	v->a[6579] = sym_negated_command;
	small_parse_table_329(v);
}

void	small_parse_table_329(t_small_parse_table_array *v)
{
	v->a[6580] = sym_command;
	v->a[6581] = sym__variable_assignments;
	v->a[6582] = 32;
	v->a[6583] = actions(3);
	v->a[6584] = 1;
	v->a[6585] = sym_comment;
	v->a[6586] = actions(9);
	v->a[6587] = 1;
	v->a[6588] = anon_sym_for;
	v->a[6589] = actions(13);
	v->a[6590] = 1;
	v->a[6591] = anon_sym_if;
	v->a[6592] = actions(15);
	v->a[6593] = 1;
	v->a[6594] = anon_sym_case;
	v->a[6595] = actions(17);
	v->a[6596] = 1;
	v->a[6597] = anon_sym_LPAREN;
	v->a[6598] = actions(19);
	v->a[6599] = 1;
	small_parse_table_330(v);
}

/* EOF small_parse_table_65.c */
