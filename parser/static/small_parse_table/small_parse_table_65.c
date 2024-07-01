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
	v->a[6500] = actions(61);
	v->a[6501] = 1;
	v->a[6502] = anon_sym_DOLLAR;
	v->a[6503] = actions(63);
	v->a[6504] = 1;
	v->a[6505] = anon_sym_DQUOTE;
	v->a[6506] = actions(67);
	v->a[6507] = 1;
	v->a[6508] = anon_sym_DOLLAR_LBRACE;
	v->a[6509] = actions(69);
	v->a[6510] = 1;
	v->a[6511] = anon_sym_DOLLAR_LPAREN;
	v->a[6512] = actions(71);
	v->a[6513] = 1;
	v->a[6514] = anon_sym_BQUOTE;
	v->a[6515] = actions(220);
	v->a[6516] = 1;
	v->a[6517] = sym_word;
	v->a[6518] = actions(222);
	v->a[6519] = 1;
	small_parse_table_326(v);
}

void	small_parse_table_326(t_small_parse_table_array *v)
{
	v->a[6520] = anon_sym_BANG;
	v->a[6521] = actions(230);
	v->a[6522] = 1;
	v->a[6523] = sym_file_descriptor;
	v->a[6524] = actions(232);
	v->a[6525] = 1;
	v->a[6526] = sym_variable_name;
	v->a[6527] = state(133);
	v->a[6528] = 1;
	v->a[6529] = aux_sym__statements_repeat1;
	v->a[6530] = state(180);
	v->a[6531] = 1;
	v->a[6532] = sym_command_name;
	v->a[6533] = state(231);
	v->a[6534] = 1;
	v->a[6535] = sym_variable_assignment;
	v->a[6536] = state(650);
	v->a[6537] = 1;
	v->a[6538] = sym_concatenation;
	v->a[6539] = state(686);
	small_parse_table_327(v);
}

void	small_parse_table_327(t_small_parse_table_array *v)
{
	v->a[6540] = 1;
	v->a[6541] = sym_file_redirect;
	v->a[6542] = state(710);
	v->a[6543] = 1;
	v->a[6544] = aux_sym_command_repeat1;
	v->a[6545] = state(1095);
	v->a[6546] = 1;
	v->a[6547] = sym_pipeline;
	v->a[6548] = state(1282);
	v->a[6549] = 1;
	v->a[6550] = aux_sym_redirected_statement_repeat2;
	v->a[6551] = state(2127);
	v->a[6552] = 1;
	v->a[6553] = sym__statement_not_pipeline;
	v->a[6554] = state(2150);
	v->a[6555] = 1;
	v->a[6556] = sym__statements;
	v->a[6557] = actions(11);
	v->a[6558] = 2;
	v->a[6559] = anon_sym_while;
	small_parse_table_328(v);
}

void	small_parse_table_328(t_small_parse_table_array *v)
{
	v->a[6560] = anon_sym_until;
	v->a[6561] = actions(226);
	v->a[6562] = 2;
	v->a[6563] = anon_sym_LT_AMP_DASH;
	v->a[6564] = anon_sym_GT_AMP_DASH;
	v->a[6565] = actions(228);
	v->a[6566] = 2;
	v->a[6567] = sym_raw_string;
	v->a[6568] = sym_number;
	v->a[6569] = state(382);
	v->a[6570] = 5;
	v->a[6571] = sym_arithmetic_expansion;
	v->a[6572] = sym_string;
	v->a[6573] = sym_simple_expansion;
	v->a[6574] = sym_expansion;
	v->a[6575] = sym_command_substitution;
	v->a[6576] = actions(224);
	v->a[6577] = 6;
	v->a[6578] = anon_sym_LT;
	v->a[6579] = anon_sym_GT;
	small_parse_table_329(v);
}

void	small_parse_table_329(t_small_parse_table_array *v)
{
	v->a[6580] = anon_sym_GT_GT;
	v->a[6581] = anon_sym_LT_AMP;
	v->a[6582] = anon_sym_GT_AMP;
	v->a[6583] = anon_sym_GT_PIPE;
	v->a[6584] = state(1087);
	v->a[6585] = 12;
	v->a[6586] = sym_redirected_statement;
	v->a[6587] = sym_for_statement;
	v->a[6588] = sym_while_statement;
	v->a[6589] = sym_if_statement;
	v->a[6590] = sym_case_statement;
	v->a[6591] = sym_function_definition;
	v->a[6592] = sym_compound_statement;
	v->a[6593] = sym_subshell;
	v->a[6594] = sym_list;
	v->a[6595] = sym_negated_command;
	v->a[6596] = sym_command;
	v->a[6597] = sym__variable_assignments;
	v->a[6598] = 32;
	v->a[6599] = actions(3);
	small_parse_table_330(v);
}

/* EOF small_parse_table_65.c */
