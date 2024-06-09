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
	v->a[6500] = sym_while_statement;
	v->a[6501] = sym_if_statement;
	v->a[6502] = sym_case_statement;
	v->a[6503] = sym_function_definition;
	v->a[6504] = sym_compound_statement;
	v->a[6505] = sym_subshell;
	v->a[6506] = sym_list;
	v->a[6507] = sym_negated_command;
	v->a[6508] = sym_command;
	v->a[6509] = sym_variable_assignments;
	v->a[6510] = 34;
	v->a[6511] = actions(3);
	v->a[6512] = 1;
	v->a[6513] = sym_comment;
	v->a[6514] = actions(9);
	v->a[6515] = 1;
	v->a[6516] = anon_sym_for;
	v->a[6517] = actions(13);
	v->a[6518] = 1;
	v->a[6519] = anon_sym_if;
	small_parse_table_326(v);
}

void	small_parse_table_326(t_small_parse_table_array *v)
{
	v->a[6520] = actions(15);
	v->a[6521] = 1;
	v->a[6522] = anon_sym_case;
	v->a[6523] = actions(17);
	v->a[6524] = 1;
	v->a[6525] = anon_sym_LPAREN;
	v->a[6526] = actions(19);
	v->a[6527] = 1;
	v->a[6528] = anon_sym_LBRACE;
	v->a[6529] = actions(49);
	v->a[6530] = 1;
	v->a[6531] = sym_word;
	v->a[6532] = actions(57);
	v->a[6533] = 1;
	v->a[6534] = anon_sym_BANG;
	v->a[6535] = actions(63);
	v->a[6536] = 1;
	v->a[6537] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6538] = actions(65);
	v->a[6539] = 1;
	small_parse_table_327(v);
}

void	small_parse_table_327(t_small_parse_table_array *v)
{
	v->a[6540] = anon_sym_DOLLAR;
	v->a[6541] = actions(67);
	v->a[6542] = 1;
	v->a[6543] = anon_sym_DQUOTE;
	v->a[6544] = actions(69);
	v->a[6545] = 1;
	v->a[6546] = sym_raw_string;
	v->a[6547] = actions(71);
	v->a[6548] = 1;
	v->a[6549] = aux_sym_number_token1;
	v->a[6550] = actions(73);
	v->a[6551] = 1;
	v->a[6552] = aux_sym_number_token2;
	v->a[6553] = actions(75);
	v->a[6554] = 1;
	v->a[6555] = anon_sym_DOLLAR_LBRACE;
	v->a[6556] = actions(77);
	v->a[6557] = 1;
	v->a[6558] = anon_sym_DOLLAR_LPAREN;
	v->a[6559] = actions(79);
	small_parse_table_328(v);
}

void	small_parse_table_328(t_small_parse_table_array *v)
{
	v->a[6560] = 1;
	v->a[6561] = anon_sym_BQUOTE;
	v->a[6562] = actions(81);
	v->a[6563] = 1;
	v->a[6564] = sym_file_descriptor;
	v->a[6565] = actions(83);
	v->a[6566] = 1;
	v->a[6567] = sym_variable_name;
	v->a[6568] = actions(264);
	v->a[6569] = 1;
	v->a[6570] = anon_sym_RBRACE;
	v->a[6571] = state(64);
	v->a[6572] = 1;
	v->a[6573] = aux_sym__terminated_statement;
	v->a[6574] = state(190);
	v->a[6575] = 1;
	v->a[6576] = sym_command_name;
	v->a[6577] = state(285);
	v->a[6578] = 1;
	v->a[6579] = sym_variable_assignment;
	small_parse_table_329(v);
}

void	small_parse_table_329(t_small_parse_table_array *v)
{
	v->a[6580] = state(582);
	v->a[6581] = 1;
	v->a[6582] = sym_concatenation;
	v->a[6583] = state(587);
	v->a[6584] = 1;
	v->a[6585] = aux_sym_command_repeat1;
	v->a[6586] = state(718);
	v->a[6587] = 1;
	v->a[6588] = sym_file_redirect;
	v->a[6589] = state(1213);
	v->a[6590] = 1;
	v->a[6591] = aux_sym_redirected_statement_repeat2;
	v->a[6592] = state(1217);
	v->a[6593] = 1;
	v->a[6594] = sym_pipeline;
	v->a[6595] = state(2035);
	v->a[6596] = 1;
	v->a[6597] = sym__statement_not_pipeline;
	v->a[6598] = actions(11);
	v->a[6599] = 2;
	small_parse_table_330(v);
}

/* EOF small_parse_table_65.c */
