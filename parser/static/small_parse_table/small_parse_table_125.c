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
	v->a[12500] = actions(167);
	v->a[12501] = 7;
	v->a[12502] = anon_sym_LT;
	v->a[12503] = anon_sym_GT;
	v->a[12504] = anon_sym_GT_GT;
	v->a[12505] = anon_sym_LT_AMP;
	v->a[12506] = anon_sym_GT_AMP;
	v->a[12507] = anon_sym_GT_PIPE;
	v->a[12508] = anon_sym_LT_GT;
	v->a[12509] = state(1032);
	v->a[12510] = 12;
	v->a[12511] = sym_redirected_statement;
	v->a[12512] = sym_for_statement;
	v->a[12513] = sym_while_statement;
	v->a[12514] = sym_if_statement;
	v->a[12515] = sym_case_statement;
	v->a[12516] = sym_function_definition;
	v->a[12517] = sym_compound_statement;
	v->a[12518] = sym_subshell;
	v->a[12519] = sym_list;
	small_parse_table_626(v);
}

void	small_parse_table_626(t_small_parse_table_array *v)
{
	v->a[12520] = sym_negated_command;
	v->a[12521] = sym_command;
	v->a[12522] = sym__variable_assignments;
	v->a[12523] = 31;
	v->a[12524] = actions(3);
	v->a[12525] = 1;
	v->a[12526] = sym_comment;
	v->a[12527] = actions(9);
	v->a[12528] = 1;
	v->a[12529] = anon_sym_for;
	v->a[12530] = actions(13);
	v->a[12531] = 1;
	v->a[12532] = anon_sym_if;
	v->a[12533] = actions(15);
	v->a[12534] = 1;
	v->a[12535] = anon_sym_case;
	v->a[12536] = actions(17);
	v->a[12537] = 1;
	v->a[12538] = anon_sym_LPAREN;
	v->a[12539] = actions(19);
	small_parse_table_627(v);
}

void	small_parse_table_627(t_small_parse_table_array *v)
{
	v->a[12540] = 1;
	v->a[12541] = anon_sym_LBRACE;
	v->a[12542] = actions(43);
	v->a[12543] = 1;
	v->a[12544] = sym_word;
	v->a[12545] = actions(51);
	v->a[12546] = 1;
	v->a[12547] = anon_sym_BANG;
	v->a[12548] = actions(55);
	v->a[12549] = 1;
	v->a[12550] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12551] = actions(57);
	v->a[12552] = 1;
	v->a[12553] = anon_sym_DOLLAR;
	v->a[12554] = actions(59);
	v->a[12555] = 1;
	v->a[12556] = anon_sym_DQUOTE;
	v->a[12557] = actions(63);
	v->a[12558] = 1;
	v->a[12559] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_628(v);
}

void	small_parse_table_628(t_small_parse_table_array *v)
{
	v->a[12560] = actions(65);
	v->a[12561] = 1;
	v->a[12562] = anon_sym_DOLLAR_LPAREN;
	v->a[12563] = actions(67);
	v->a[12564] = 1;
	v->a[12565] = anon_sym_BQUOTE;
	v->a[12566] = actions(69);
	v->a[12567] = 1;
	v->a[12568] = sym_file_descriptor;
	v->a[12569] = actions(71);
	v->a[12570] = 1;
	v->a[12571] = sym_variable_name;
	v->a[12572] = actions(253);
	v->a[12573] = 1;
	v->a[12574] = anon_sym_then;
	v->a[12575] = state(36);
	v->a[12576] = 1;
	v->a[12577] = aux_sym__terminated_statement;
	v->a[12578] = state(183);
	v->a[12579] = 1;
	small_parse_table_629(v);
}

void	small_parse_table_629(t_small_parse_table_array *v)
{
	v->a[12580] = sym_command_name;
	v->a[12581] = state(341);
	v->a[12582] = 1;
	v->a[12583] = sym_variable_assignment;
	v->a[12584] = state(603);
	v->a[12585] = 1;
	v->a[12586] = sym_concatenation;
	v->a[12587] = state(639);
	v->a[12588] = 1;
	v->a[12589] = aux_sym_command_repeat1;
	v->a[12590] = state(644);
	v->a[12591] = 1;
	v->a[12592] = sym_file_redirect;
	v->a[12593] = state(1122);
	v->a[12594] = 1;
	v->a[12595] = sym_pipeline;
	v->a[12596] = state(1196);
	v->a[12597] = 1;
	v->a[12598] = aux_sym_redirected_statement_repeat2;
	v->a[12599] = state(1910);
	small_parse_table_630(v);
}

/* EOF small_parse_table_125.c */
