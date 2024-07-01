/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_95.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_475(t_small_parse_table_array *v)
{
	v->a[9500] = actions(61);
	v->a[9501] = 1;
	v->a[9502] = anon_sym_DOLLAR;
	v->a[9503] = actions(63);
	v->a[9504] = 1;
	v->a[9505] = anon_sym_DQUOTE;
	v->a[9506] = actions(67);
	v->a[9507] = 1;
	v->a[9508] = anon_sym_DOLLAR_LBRACE;
	v->a[9509] = actions(69);
	v->a[9510] = 1;
	v->a[9511] = anon_sym_DOLLAR_LPAREN;
	v->a[9512] = actions(71);
	v->a[9513] = 1;
	v->a[9514] = anon_sym_BQUOTE;
	v->a[9515] = actions(220);
	v->a[9516] = 1;
	v->a[9517] = sym_word;
	v->a[9518] = actions(222);
	v->a[9519] = 1;
	small_parse_table_476(v);
}

void	small_parse_table_476(t_small_parse_table_array *v)
{
	v->a[9520] = anon_sym_BANG;
	v->a[9521] = actions(230);
	v->a[9522] = 1;
	v->a[9523] = sym_file_descriptor;
	v->a[9524] = actions(232);
	v->a[9525] = 1;
	v->a[9526] = sym_variable_name;
	v->a[9527] = state(133);
	v->a[9528] = 1;
	v->a[9529] = aux_sym__statements_repeat1;
	v->a[9530] = state(180);
	v->a[9531] = 1;
	v->a[9532] = sym_command_name;
	v->a[9533] = state(231);
	v->a[9534] = 1;
	v->a[9535] = sym_variable_assignment;
	v->a[9536] = state(650);
	v->a[9537] = 1;
	v->a[9538] = sym_concatenation;
	v->a[9539] = state(710);
	small_parse_table_477(v);
}

void	small_parse_table_477(t_small_parse_table_array *v)
{
	v->a[9540] = 1;
	v->a[9541] = aux_sym_command_repeat1;
	v->a[9542] = state(727);
	v->a[9543] = 1;
	v->a[9544] = sym_file_redirect;
	v->a[9545] = state(1095);
	v->a[9546] = 1;
	v->a[9547] = sym_pipeline;
	v->a[9548] = state(1282);
	v->a[9549] = 1;
	v->a[9550] = aux_sym_redirected_statement_repeat2;
	v->a[9551] = state(2127);
	v->a[9552] = 1;
	v->a[9553] = sym__statement_not_pipeline;
	v->a[9554] = state(2230);
	v->a[9555] = 1;
	v->a[9556] = sym__statements;
	v->a[9557] = actions(11);
	v->a[9558] = 2;
	v->a[9559] = anon_sym_while;
	small_parse_table_478(v);
}

void	small_parse_table_478(t_small_parse_table_array *v)
{
	v->a[9560] = anon_sym_until;
	v->a[9561] = actions(226);
	v->a[9562] = 2;
	v->a[9563] = anon_sym_LT_AMP_DASH;
	v->a[9564] = anon_sym_GT_AMP_DASH;
	v->a[9565] = actions(228);
	v->a[9566] = 2;
	v->a[9567] = sym_raw_string;
	v->a[9568] = sym_number;
	v->a[9569] = state(382);
	v->a[9570] = 5;
	v->a[9571] = sym_arithmetic_expansion;
	v->a[9572] = sym_string;
	v->a[9573] = sym_simple_expansion;
	v->a[9574] = sym_expansion;
	v->a[9575] = sym_command_substitution;
	v->a[9576] = actions(224);
	v->a[9577] = 6;
	v->a[9578] = anon_sym_LT;
	v->a[9579] = anon_sym_GT;
	small_parse_table_479(v);
}

void	small_parse_table_479(t_small_parse_table_array *v)
{
	v->a[9580] = anon_sym_GT_GT;
	v->a[9581] = anon_sym_LT_AMP;
	v->a[9582] = anon_sym_GT_AMP;
	v->a[9583] = anon_sym_GT_PIPE;
	v->a[9584] = state(1087);
	v->a[9585] = 12;
	v->a[9586] = sym_redirected_statement;
	v->a[9587] = sym_for_statement;
	v->a[9588] = sym_while_statement;
	v->a[9589] = sym_if_statement;
	v->a[9590] = sym_case_statement;
	v->a[9591] = sym_function_definition;
	v->a[9592] = sym_compound_statement;
	v->a[9593] = sym_subshell;
	v->a[9594] = sym_list;
	v->a[9595] = sym_negated_command;
	v->a[9596] = sym_command;
	v->a[9597] = sym__variable_assignments;
	v->a[9598] = 32;
	v->a[9599] = actions(3);
	small_parse_table_480(v);
}

/* EOF small_parse_table_95.c */
