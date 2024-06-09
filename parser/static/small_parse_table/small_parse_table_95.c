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
	v->a[9500] = actions(81);
	v->a[9501] = 1;
	v->a[9502] = sym_file_descriptor;
	v->a[9503] = actions(83);
	v->a[9504] = 1;
	v->a[9505] = sym_variable_name;
	v->a[9506] = actions(238);
	v->a[9507] = 1;
	v->a[9508] = sym_word;
	v->a[9509] = actions(240);
	v->a[9510] = 1;
	v->a[9511] = anon_sym_BANG;
	v->a[9512] = state(132);
	v->a[9513] = 1;
	v->a[9514] = aux_sym__statements_repeat1;
	v->a[9515] = state(185);
	v->a[9516] = 1;
	v->a[9517] = sym_command_name;
	v->a[9518] = state(297);
	v->a[9519] = 1;
	small_parse_table_476(v);
}

void	small_parse_table_476(t_small_parse_table_array *v)
{
	v->a[9520] = sym_variable_assignment;
	v->a[9521] = state(582);
	v->a[9522] = 1;
	v->a[9523] = sym_concatenation;
	v->a[9524] = state(614);
	v->a[9525] = 1;
	v->a[9526] = aux_sym_command_repeat1;
	v->a[9527] = state(769);
	v->a[9528] = 1;
	v->a[9529] = sym_file_redirect;
	v->a[9530] = state(1133);
	v->a[9531] = 1;
	v->a[9532] = aux_sym_redirected_statement_repeat2;
	v->a[9533] = state(1142);
	v->a[9534] = 1;
	v->a[9535] = sym_pipeline;
	v->a[9536] = state(2041);
	v->a[9537] = 1;
	v->a[9538] = sym__statement_not_pipeline;
	v->a[9539] = state(2106);
	small_parse_table_477(v);
}

void	small_parse_table_477(t_small_parse_table_array *v)
{
	v->a[9540] = 1;
	v->a[9541] = sym__statements;
	v->a[9542] = actions(11);
	v->a[9543] = 2;
	v->a[9544] = anon_sym_while;
	v->a[9545] = anon_sym_until;
	v->a[9546] = actions(61);
	v->a[9547] = 2;
	v->a[9548] = anon_sym_LT_AMP_DASH;
	v->a[9549] = anon_sym_GT_AMP_DASH;
	v->a[9550] = state(397);
	v->a[9551] = 6;
	v->a[9552] = sym_arithmetic_expansion;
	v->a[9553] = sym_string;
	v->a[9554] = sym_number;
	v->a[9555] = sym_simple_expansion;
	v->a[9556] = sym_expansion;
	v->a[9557] = sym_command_substitution;
	v->a[9558] = actions(59);
	v->a[9559] = 8;
	small_parse_table_478(v);
}

void	small_parse_table_478(t_small_parse_table_array *v)
{
	v->a[9560] = anon_sym_LT;
	v->a[9561] = anon_sym_GT;
	v->a[9562] = anon_sym_GT_GT;
	v->a[9563] = anon_sym_AMP_GT;
	v->a[9564] = anon_sym_AMP_GT_GT;
	v->a[9565] = anon_sym_LT_AMP;
	v->a[9566] = anon_sym_GT_AMP;
	v->a[9567] = anon_sym_GT_PIPE;
	v->a[9568] = state(1071);
	v->a[9569] = 12;
	v->a[9570] = sym_redirected_statement;
	v->a[9571] = sym_for_statement;
	v->a[9572] = sym_while_statement;
	v->a[9573] = sym_if_statement;
	v->a[9574] = sym_case_statement;
	v->a[9575] = sym_function_definition;
	v->a[9576] = sym_compound_statement;
	v->a[9577] = sym_subshell;
	v->a[9578] = sym_list;
	v->a[9579] = sym_negated_command;
	small_parse_table_479(v);
}

void	small_parse_table_479(t_small_parse_table_array *v)
{
	v->a[9580] = sym_command;
	v->a[9581] = sym_variable_assignments;
	v->a[9582] = 34;
	v->a[9583] = actions(3);
	v->a[9584] = 1;
	v->a[9585] = sym_comment;
	v->a[9586] = actions(9);
	v->a[9587] = 1;
	v->a[9588] = anon_sym_for;
	v->a[9589] = actions(13);
	v->a[9590] = 1;
	v->a[9591] = anon_sym_if;
	v->a[9592] = actions(15);
	v->a[9593] = 1;
	v->a[9594] = anon_sym_case;
	v->a[9595] = actions(17);
	v->a[9596] = 1;
	v->a[9597] = anon_sym_LPAREN;
	v->a[9598] = actions(19);
	v->a[9599] = 1;
	small_parse_table_480(v);
}

/* EOF small_parse_table_95.c */
