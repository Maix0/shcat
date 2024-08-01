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
	v->a[12500] = 1;
	v->a[12501] = anon_sym_DOLLAR_LBRACE;
	v->a[12502] = actions(63);
	v->a[12503] = 1;
	v->a[12504] = anon_sym_DOLLAR_LPAREN;
	v->a[12505] = actions(65);
	v->a[12506] = 1;
	v->a[12507] = anon_sym_BQUOTE;
	v->a[12508] = actions(67);
	v->a[12509] = 1;
	v->a[12510] = sym_variable_name;
	v->a[12511] = state(36);
	v->a[12512] = 1;
	v->a[12513] = aux_sym__terminated_statement;
	v->a[12514] = state(185);
	v->a[12515] = 1;
	v->a[12516] = sym_command_name;
	v->a[12517] = state(238);
	v->a[12518] = 1;
	v->a[12519] = sym_variable_assignment;
	small_parse_table_626(v);
}

void	small_parse_table_626(t_small_parse_table_array *v)
{
	v->a[12520] = state(411);
	v->a[12521] = 1;
	v->a[12522] = aux_sym_command_repeat1;
	v->a[12523] = state(551);
	v->a[12524] = 1;
	v->a[12525] = sym_file_redirect;
	v->a[12526] = state(555);
	v->a[12527] = 1;
	v->a[12528] = sym_concatenation;
	v->a[12529] = state(1001);
	v->a[12530] = 1;
	v->a[12531] = sym_pipeline;
	v->a[12532] = state(1126);
	v->a[12533] = 1;
	v->a[12534] = aux_sym_redirected_statement_repeat2;
	v->a[12535] = state(1561);
	v->a[12536] = 1;
	v->a[12537] = sym__statement_not_pipeline;
	v->a[12538] = actions(11);
	v->a[12539] = 2;
	small_parse_table_627(v);
}

void	small_parse_table_627(t_small_parse_table_array *v)
{
	v->a[12540] = anon_sym_while;
	v->a[12541] = anon_sym_until;
	v->a[12542] = actions(59);
	v->a[12543] = 2;
	v->a[12544] = sym_raw_string;
	v->a[12545] = sym_number;
	v->a[12546] = actions(51);
	v->a[12547] = 3;
	v->a[12548] = anon_sym_LT;
	v->a[12549] = anon_sym_GT;
	v->a[12550] = anon_sym_GT_GT;
	v->a[12551] = state(401);
	v->a[12552] = 5;
	v->a[12553] = sym_arithmetic_expansion;
	v->a[12554] = sym_string;
	v->a[12555] = sym_simple_expansion;
	v->a[12556] = sym_expansion;
	v->a[12557] = sym_command_substitution;
	v->a[12558] = state(958);
	v->a[12559] = 12;
	small_parse_table_628(v);
}

void	small_parse_table_628(t_small_parse_table_array *v)
{
	v->a[12560] = sym_redirected_statement;
	v->a[12561] = sym_for_statement;
	v->a[12562] = sym_while_statement;
	v->a[12563] = sym_if_statement;
	v->a[12564] = sym_case_statement;
	v->a[12565] = sym_function_definition;
	v->a[12566] = sym_compound_statement;
	v->a[12567] = sym_subshell;
	v->a[12568] = sym_list;
	v->a[12569] = sym_negated_command;
	v->a[12570] = sym_command;
	v->a[12571] = sym__variable_assignments;
	v->a[12572] = 40;
	v->a[12573] = actions(3);
	v->a[12574] = 1;
	v->a[12575] = sym_comment;
	v->a[12576] = actions(7);
	v->a[12577] = 1;
	v->a[12578] = sym_word;
	v->a[12579] = actions(9);
	small_parse_table_629(v);
}

void	small_parse_table_629(t_small_parse_table_array *v)
{
	v->a[12580] = 1;
	v->a[12581] = anon_sym_for;
	v->a[12582] = actions(13);
	v->a[12583] = 1;
	v->a[12584] = anon_sym_if;
	v->a[12585] = actions(15);
	v->a[12586] = 1;
	v->a[12587] = anon_sym_case;
	v->a[12588] = actions(17);
	v->a[12589] = 1;
	v->a[12590] = anon_sym_LPAREN;
	v->a[12591] = actions(19);
	v->a[12592] = 1;
	v->a[12593] = anon_sym_LBRACE;
	v->a[12594] = actions(21);
	v->a[12595] = 1;
	v->a[12596] = anon_sym_BANG;
	v->a[12597] = actions(25);
	v->a[12598] = 1;
	v->a[12599] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_630(v);
}

/* EOF small_parse_table_125.c */
