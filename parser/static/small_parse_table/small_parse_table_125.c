/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_125.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_625(t_small_parse_table_array *v)
{
	v->a[12500] = actions(61);
	v->a[12501] = 1;
	v->a[12502] = anon_sym_DOLLAR;
	v->a[12503] = actions(63);
	v->a[12504] = 1;
	v->a[12505] = anon_sym_DQUOTE;
	v->a[12506] = actions(67);
	v->a[12507] = 1;
	v->a[12508] = anon_sym_DOLLAR_LBRACE;
	v->a[12509] = actions(69);
	v->a[12510] = 1;
	v->a[12511] = anon_sym_DOLLAR_LPAREN;
	v->a[12512] = actions(71);
	v->a[12513] = 1;
	v->a[12514] = anon_sym_BQUOTE;
	v->a[12515] = actions(73);
	v->a[12516] = 1;
	v->a[12517] = sym_file_descriptor;
	v->a[12518] = actions(75);
	v->a[12519] = 1;
	small_parse_table_626(v);
}

void	small_parse_table_626(t_small_parse_table_array *v)
{
	v->a[12520] = sym_variable_name;
	v->a[12521] = actions(240);
	v->a[12522] = 1;
	v->a[12523] = sym_word;
	v->a[12524] = actions(242);
	v->a[12525] = 1;
	v->a[12526] = anon_sym_BANG;
	v->a[12527] = state(136);
	v->a[12528] = 1;
	v->a[12529] = aux_sym__statements_repeat1;
	v->a[12530] = state(188);
	v->a[12531] = 1;
	v->a[12532] = sym_command_name;
	v->a[12533] = state(297);
	v->a[12534] = 1;
	v->a[12535] = sym_variable_assignment;
	v->a[12536] = state(650);
	v->a[12537] = 1;
	v->a[12538] = sym_concatenation;
	v->a[12539] = state(749);
	small_parse_table_627(v);
}

void	small_parse_table_627(t_small_parse_table_array *v)
{
	v->a[12540] = 1;
	v->a[12541] = aux_sym_command_repeat1;
	v->a[12542] = state(795);
	v->a[12543] = 1;
	v->a[12544] = sym_file_redirect;
	v->a[12545] = state(1154);
	v->a[12546] = 1;
	v->a[12547] = sym_pipeline;
	v->a[12548] = state(1240);
	v->a[12549] = 1;
	v->a[12550] = aux_sym_redirected_statement_repeat2;
	v->a[12551] = state(2119);
	v->a[12552] = 1;
	v->a[12553] = sym__statement_not_pipeline;
	v->a[12554] = state(2320);
	v->a[12555] = 1;
	v->a[12556] = sym__statements;
	v->a[12557] = actions(11);
	v->a[12558] = 2;
	v->a[12559] = anon_sym_while;
	small_parse_table_628(v);
}

void	small_parse_table_628(t_small_parse_table_array *v)
{
	v->a[12560] = anon_sym_until;
	v->a[12561] = actions(57);
	v->a[12562] = 2;
	v->a[12563] = anon_sym_LT_AMP_DASH;
	v->a[12564] = anon_sym_GT_AMP_DASH;
	v->a[12565] = actions(65);
	v->a[12566] = 2;
	v->a[12567] = sym_raw_string;
	v->a[12568] = sym_number;
	v->a[12569] = state(443);
	v->a[12570] = 5;
	v->a[12571] = sym_arithmetic_expansion;
	v->a[12572] = sym_string;
	v->a[12573] = sym_simple_expansion;
	v->a[12574] = sym_expansion;
	v->a[12575] = sym_command_substitution;
	v->a[12576] = actions(55);
	v->a[12577] = 6;
	v->a[12578] = anon_sym_LT;
	v->a[12579] = anon_sym_GT;
	small_parse_table_629(v);
}

void	small_parse_table_629(t_small_parse_table_array *v)
{
	v->a[12580] = anon_sym_GT_GT;
	v->a[12581] = anon_sym_LT_AMP;
	v->a[12582] = anon_sym_GT_AMP;
	v->a[12583] = anon_sym_GT_PIPE;
	v->a[12584] = state(1030);
	v->a[12585] = 12;
	v->a[12586] = sym_redirected_statement;
	v->a[12587] = sym_for_statement;
	v->a[12588] = sym_while_statement;
	v->a[12589] = sym_if_statement;
	v->a[12590] = sym_case_statement;
	v->a[12591] = sym_function_definition;
	v->a[12592] = sym_compound_statement;
	v->a[12593] = sym_subshell;
	v->a[12594] = sym_list;
	v->a[12595] = sym_negated_command;
	v->a[12596] = sym_command;
	v->a[12597] = sym__variable_assignments;
	v->a[12598] = 32;
	v->a[12599] = actions(3);
	small_parse_table_630(v);
}

/* EOF small_parse_table_125.c */
