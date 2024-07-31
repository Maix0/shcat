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
	v->a[12500] = aux_sym_command_repeat1;
	v->a[12501] = state(566);
	v->a[12502] = 1;
	v->a[12503] = sym_file_redirect;
	v->a[12504] = state(569);
	v->a[12505] = 1;
	v->a[12506] = sym_concatenation;
	v->a[12507] = state(830);
	v->a[12508] = 1;
	v->a[12509] = sym__variable_assignments;
	v->a[12510] = state(837);
	v->a[12511] = 1;
	v->a[12512] = sym_command;
	v->a[12513] = state(856);
	v->a[12514] = 1;
	v->a[12515] = sym_negated_command;
	v->a[12516] = state(858);
	v->a[12517] = 1;
	v->a[12518] = sym_list;
	v->a[12519] = state(862);
	small_parse_table_626(v);
}

void	small_parse_table_626(t_small_parse_table_array *v)
{
	v->a[12520] = 1;
	v->a[12521] = sym_redirected_statement;
	v->a[12522] = state(863);
	v->a[12523] = 1;
	v->a[12524] = sym_subshell;
	v->a[12525] = state(866);
	v->a[12526] = 1;
	v->a[12527] = sym_for_statement;
	v->a[12528] = state(867);
	v->a[12529] = 1;
	v->a[12530] = sym_while_statement;
	v->a[12531] = state(870);
	v->a[12532] = 1;
	v->a[12533] = sym_compound_statement;
	v->a[12534] = state(871);
	v->a[12535] = 1;
	v->a[12536] = sym_function_definition;
	v->a[12537] = state(872);
	v->a[12538] = 1;
	v->a[12539] = sym_case_statement;
	small_parse_table_627(v);
}

void	small_parse_table_627(t_small_parse_table_array *v)
{
	v->a[12540] = state(875);
	v->a[12541] = 1;
	v->a[12542] = sym_if_statement;
	v->a[12543] = state(916);
	v->a[12544] = 1;
	v->a[12545] = sym_pipeline;
	v->a[12546] = state(1004);
	v->a[12547] = 1;
	v->a[12548] = aux_sym_redirected_statement_repeat2;
	v->a[12549] = state(1601);
	v->a[12550] = 1;
	v->a[12551] = sym__statement_not_pipeline;
	v->a[12552] = actions(11);
	v->a[12553] = 2;
	v->a[12554] = anon_sym_while;
	v->a[12555] = anon_sym_until;
	v->a[12556] = actions(31);
	v->a[12557] = 2;
	v->a[12558] = sym_raw_string;
	v->a[12559] = sym_number;
	small_parse_table_628(v);
}

void	small_parse_table_628(t_small_parse_table_array *v)
{
	v->a[12560] = state(329);
	v->a[12561] = 5;
	v->a[12562] = sym_arithmetic_expansion;
	v->a[12563] = sym_string;
	v->a[12564] = sym_simple_expansion;
	v->a[12565] = sym_expansion;
	v->a[12566] = sym_command_substitution;
	v->a[12567] = actions(23);
	v->a[12568] = 7;
	v->a[12569] = anon_sym_LT;
	v->a[12570] = anon_sym_GT;
	v->a[12571] = anon_sym_GT_GT;
	v->a[12572] = anon_sym_LT_AMP;
	v->a[12573] = anon_sym_GT_AMP;
	v->a[12574] = anon_sym_GT_PIPE;
	v->a[12575] = anon_sym_LT_GT;
	v->a[12576] = 29;
	v->a[12577] = actions(3);
	v->a[12578] = 1;
	v->a[12579] = sym_comment;
	small_parse_table_629(v);
}

void	small_parse_table_629(t_small_parse_table_array *v)
{
	v->a[12580] = actions(9);
	v->a[12581] = 1;
	v->a[12582] = anon_sym_for;
	v->a[12583] = actions(13);
	v->a[12584] = 1;
	v->a[12585] = anon_sym_if;
	v->a[12586] = actions(15);
	v->a[12587] = 1;
	v->a[12588] = anon_sym_case;
	v->a[12589] = actions(17);
	v->a[12590] = 1;
	v->a[12591] = anon_sym_LPAREN;
	v->a[12592] = actions(19);
	v->a[12593] = 1;
	v->a[12594] = anon_sym_LBRACE;
	v->a[12595] = actions(41);
	v->a[12596] = 1;
	v->a[12597] = sym_word;
	v->a[12598] = actions(49);
	v->a[12599] = 1;
	small_parse_table_630(v);
}

/* EOF small_parse_table_125.c */
