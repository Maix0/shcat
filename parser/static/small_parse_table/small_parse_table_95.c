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
	v->a[9502] = anon_sym_DOLLAR_LBRACE;
	v->a[9503] = actions(63);
	v->a[9504] = 1;
	v->a[9505] = anon_sym_DOLLAR_LPAREN;
	v->a[9506] = actions(65);
	v->a[9507] = 1;
	v->a[9508] = anon_sym_BQUOTE;
	v->a[9509] = actions(206);
	v->a[9510] = 1;
	v->a[9511] = sym_word;
	v->a[9512] = actions(208);
	v->a[9513] = 1;
	v->a[9514] = anon_sym_BANG;
	v->a[9515] = actions(214);
	v->a[9516] = 1;
	v->a[9517] = sym_variable_name;
	v->a[9518] = state(106);
	v->a[9519] = 1;
	small_parse_table_476(v);
}

void	small_parse_table_476(t_small_parse_table_array *v)
{
	v->a[9520] = aux_sym__statements_repeat1;
	v->a[9521] = state(227);
	v->a[9522] = 1;
	v->a[9523] = sym_command_name;
	v->a[9524] = state(277);
	v->a[9525] = 1;
	v->a[9526] = sym_variable_assignment;
	v->a[9527] = state(506);
	v->a[9528] = 1;
	v->a[9529] = aux_sym_command_repeat1;
	v->a[9530] = state(581);
	v->a[9531] = 1;
	v->a[9532] = sym_file_redirect;
	v->a[9533] = state(602);
	v->a[9534] = 1;
	v->a[9535] = sym_concatenation;
	v->a[9536] = state(911);
	v->a[9537] = 1;
	v->a[9538] = sym_pipeline;
	v->a[9539] = state(1001);
	small_parse_table_477(v);
}

void	small_parse_table_477(t_small_parse_table_array *v)
{
	v->a[9540] = 1;
	v->a[9541] = aux_sym_redirected_statement_repeat2;
	v->a[9542] = state(1606);
	v->a[9543] = 1;
	v->a[9544] = sym__statement_not_pipeline;
	v->a[9545] = state(1688);
	v->a[9546] = 1;
	v->a[9547] = sym__statements;
	v->a[9548] = actions(11);
	v->a[9549] = 2;
	v->a[9550] = anon_sym_while;
	v->a[9551] = anon_sym_until;
	v->a[9552] = actions(212);
	v->a[9553] = 2;
	v->a[9554] = sym_raw_string;
	v->a[9555] = sym_number;
	v->a[9556] = state(327);
	v->a[9557] = 5;
	v->a[9558] = sym_arithmetic_expansion;
	v->a[9559] = sym_string;
	small_parse_table_478(v);
}

void	small_parse_table_478(t_small_parse_table_array *v)
{
	v->a[9560] = sym_simple_expansion;
	v->a[9561] = sym_expansion;
	v->a[9562] = sym_command_substitution;
	v->a[9563] = actions(210);
	v->a[9564] = 7;
	v->a[9565] = anon_sym_LT;
	v->a[9566] = anon_sym_GT;
	v->a[9567] = anon_sym_GT_GT;
	v->a[9568] = anon_sym_LT_AMP;
	v->a[9569] = anon_sym_GT_AMP;
	v->a[9570] = anon_sym_GT_PIPE;
	v->a[9571] = anon_sym_LT_GT;
	v->a[9572] = state(884);
	v->a[9573] = 12;
	v->a[9574] = sym_redirected_statement;
	v->a[9575] = sym_for_statement;
	v->a[9576] = sym_while_statement;
	v->a[9577] = sym_if_statement;
	v->a[9578] = sym_case_statement;
	v->a[9579] = sym_function_definition;
	small_parse_table_479(v);
}

void	small_parse_table_479(t_small_parse_table_array *v)
{
	v->a[9580] = sym_compound_statement;
	v->a[9581] = sym_subshell;
	v->a[9582] = sym_list;
	v->a[9583] = sym_negated_command;
	v->a[9584] = sym_command;
	v->a[9585] = sym__variable_assignments;
	v->a[9586] = 30;
	v->a[9587] = actions(3);
	v->a[9588] = 1;
	v->a[9589] = sym_comment;
	v->a[9590] = actions(9);
	v->a[9591] = 1;
	v->a[9592] = anon_sym_for;
	v->a[9593] = actions(13);
	v->a[9594] = 1;
	v->a[9595] = anon_sym_if;
	v->a[9596] = actions(15);
	v->a[9597] = 1;
	v->a[9598] = anon_sym_case;
	v->a[9599] = actions(17);
	small_parse_table_480(v);
}

/* EOF small_parse_table_95.c */
