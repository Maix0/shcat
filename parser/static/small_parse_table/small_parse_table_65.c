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
	v->a[6500] = sym_case_statement;
	v->a[6501] = sym_function_definition;
	v->a[6502] = sym_compound_statement;
	v->a[6503] = sym_subshell;
	v->a[6504] = sym_list;
	v->a[6505] = sym_negated_command;
	v->a[6506] = sym_command;
	v->a[6507] = sym__variable_assignments;
	v->a[6508] = 30;
	v->a[6509] = actions(3);
	v->a[6510] = 1;
	v->a[6511] = sym_comment;
	v->a[6512] = actions(9);
	v->a[6513] = 1;
	v->a[6514] = anon_sym_for;
	v->a[6515] = actions(13);
	v->a[6516] = 1;
	v->a[6517] = anon_sym_if;
	v->a[6518] = actions(15);
	v->a[6519] = 1;
	small_parse_table_326(v);
}

void	small_parse_table_326(t_small_parse_table_array *v)
{
	v->a[6520] = anon_sym_case;
	v->a[6521] = actions(17);
	v->a[6522] = 1;
	v->a[6523] = anon_sym_LPAREN;
	v->a[6524] = actions(19);
	v->a[6525] = 1;
	v->a[6526] = anon_sym_LBRACE;
	v->a[6527] = actions(41);
	v->a[6528] = 1;
	v->a[6529] = sym_word;
	v->a[6530] = actions(49);
	v->a[6531] = 1;
	v->a[6532] = anon_sym_BANG;
	v->a[6533] = actions(53);
	v->a[6534] = 1;
	v->a[6535] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6536] = actions(55);
	v->a[6537] = 1;
	v->a[6538] = anon_sym_DOLLAR;
	v->a[6539] = actions(57);
	small_parse_table_327(v);
}

void	small_parse_table_327(t_small_parse_table_array *v)
{
	v->a[6540] = 1;
	v->a[6541] = anon_sym_DQUOTE;
	v->a[6542] = actions(61);
	v->a[6543] = 1;
	v->a[6544] = anon_sym_DOLLAR_LBRACE;
	v->a[6545] = actions(63);
	v->a[6546] = 1;
	v->a[6547] = anon_sym_DOLLAR_LPAREN;
	v->a[6548] = actions(65);
	v->a[6549] = 1;
	v->a[6550] = anon_sym_BQUOTE;
	v->a[6551] = actions(67);
	v->a[6552] = 1;
	v->a[6553] = sym_variable_name;
	v->a[6554] = actions(222);
	v->a[6555] = 1;
	v->a[6556] = anon_sym_fi;
	v->a[6557] = state(93);
	v->a[6558] = 1;
	v->a[6559] = aux_sym__terminated_statement;
	small_parse_table_328(v);
}

void	small_parse_table_328(t_small_parse_table_array *v)
{
	v->a[6560] = state(271);
	v->a[6561] = 1;
	v->a[6562] = sym_command_name;
	v->a[6563] = state(296);
	v->a[6564] = 1;
	v->a[6565] = sym_variable_assignment;
	v->a[6566] = state(482);
	v->a[6567] = 1;
	v->a[6568] = aux_sym_command_repeat1;
	v->a[6569] = state(600);
	v->a[6570] = 1;
	v->a[6571] = sym_file_redirect;
	v->a[6572] = state(602);
	v->a[6573] = 1;
	v->a[6574] = sym_concatenation;
	v->a[6575] = state(1013);
	v->a[6576] = 1;
	v->a[6577] = sym_pipeline;
	v->a[6578] = state(1068);
	v->a[6579] = 1;
	small_parse_table_329(v);
}

void	small_parse_table_329(t_small_parse_table_array *v)
{
	v->a[6580] = aux_sym_redirected_statement_repeat2;
	v->a[6581] = state(1609);
	v->a[6582] = 1;
	v->a[6583] = sym__statement_not_pipeline;
	v->a[6584] = actions(11);
	v->a[6585] = 2;
	v->a[6586] = anon_sym_while;
	v->a[6587] = anon_sym_until;
	v->a[6588] = actions(59);
	v->a[6589] = 2;
	v->a[6590] = sym_raw_string;
	v->a[6591] = sym_number;
	v->a[6592] = state(425);
	v->a[6593] = 5;
	v->a[6594] = sym_arithmetic_expansion;
	v->a[6595] = sym_string;
	v->a[6596] = sym_simple_expansion;
	v->a[6597] = sym_expansion;
	v->a[6598] = sym_command_substitution;
	v->a[6599] = actions(51);
	small_parse_table_330(v);
}

/* EOF small_parse_table_65.c */
