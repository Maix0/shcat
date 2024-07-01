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
	v->a[6500] = state(620);
	v->a[6501] = 1;
	v->a[6502] = sym_file_redirect;
	v->a[6503] = state(673);
	v->a[6504] = 1;
	v->a[6505] = aux_sym_command_repeat1;
	v->a[6506] = state(1020);
	v->a[6507] = 1;
	v->a[6508] = sym_pipeline;
	v->a[6509] = state(1136);
	v->a[6510] = 1;
	v->a[6511] = aux_sym_redirected_statement_repeat2;
	v->a[6512] = state(1898);
	v->a[6513] = 1;
	v->a[6514] = sym__statement_not_pipeline;
	v->a[6515] = state(1985);
	v->a[6516] = 1;
	v->a[6517] = sym__statements;
	v->a[6518] = actions(11);
	v->a[6519] = 2;
	small_parse_table_326(v);
}

void	small_parse_table_326(t_small_parse_table_array *v)
{
	v->a[6520] = anon_sym_while;
	v->a[6521] = anon_sym_until;
	v->a[6522] = actions(217);
	v->a[6523] = 2;
	v->a[6524] = sym_raw_string;
	v->a[6525] = sym_number;
	v->a[6526] = state(362);
	v->a[6527] = 5;
	v->a[6528] = sym_arithmetic_expansion;
	v->a[6529] = sym_string;
	v->a[6530] = sym_simple_expansion;
	v->a[6531] = sym_expansion;
	v->a[6532] = sym_command_substitution;
	v->a[6533] = actions(215);
	v->a[6534] = 7;
	v->a[6535] = anon_sym_LT;
	v->a[6536] = anon_sym_GT;
	v->a[6537] = anon_sym_GT_GT;
	v->a[6538] = anon_sym_LT_AMP;
	v->a[6539] = anon_sym_GT_AMP;
	small_parse_table_327(v);
}

void	small_parse_table_327(t_small_parse_table_array *v)
{
	v->a[6540] = anon_sym_GT_PIPE;
	v->a[6541] = anon_sym_LT_GT;
	v->a[6542] = state(1003);
	v->a[6543] = 12;
	v->a[6544] = sym_redirected_statement;
	v->a[6545] = sym_for_statement;
	v->a[6546] = sym_while_statement;
	v->a[6547] = sym_if_statement;
	v->a[6548] = sym_case_statement;
	v->a[6549] = sym_function_definition;
	v->a[6550] = sym_compound_statement;
	v->a[6551] = sym_subshell;
	v->a[6552] = sym_list;
	v->a[6553] = sym_negated_command;
	v->a[6554] = sym_command;
	v->a[6555] = sym__variable_assignments;
	v->a[6556] = 31;
	v->a[6557] = actions(3);
	v->a[6558] = 1;
	v->a[6559] = sym_comment;
	small_parse_table_328(v);
}

void	small_parse_table_328(t_small_parse_table_array *v)
{
	v->a[6560] = actions(9);
	v->a[6561] = 1;
	v->a[6562] = anon_sym_for;
	v->a[6563] = actions(13);
	v->a[6564] = 1;
	v->a[6565] = anon_sym_if;
	v->a[6566] = actions(15);
	v->a[6567] = 1;
	v->a[6568] = anon_sym_case;
	v->a[6569] = actions(17);
	v->a[6570] = 1;
	v->a[6571] = anon_sym_LPAREN;
	v->a[6572] = actions(19);
	v->a[6573] = 1;
	v->a[6574] = anon_sym_LBRACE;
	v->a[6575] = actions(55);
	v->a[6576] = 1;
	v->a[6577] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6578] = actions(57);
	v->a[6579] = 1;
	small_parse_table_329(v);
}

void	small_parse_table_329(t_small_parse_table_array *v)
{
	v->a[6580] = anon_sym_DOLLAR;
	v->a[6581] = actions(59);
	v->a[6582] = 1;
	v->a[6583] = anon_sym_DQUOTE;
	v->a[6584] = actions(63);
	v->a[6585] = 1;
	v->a[6586] = anon_sym_DOLLAR_LBRACE;
	v->a[6587] = actions(65);
	v->a[6588] = 1;
	v->a[6589] = anon_sym_DOLLAR_LPAREN;
	v->a[6590] = actions(67);
	v->a[6591] = 1;
	v->a[6592] = anon_sym_BQUOTE;
	v->a[6593] = actions(69);
	v->a[6594] = 1;
	v->a[6595] = sym_file_descriptor;
	v->a[6596] = actions(71);
	v->a[6597] = 1;
	v->a[6598] = sym_variable_name;
	v->a[6599] = actions(229);
	small_parse_table_330(v);
}

/* EOF small_parse_table_65.c */
