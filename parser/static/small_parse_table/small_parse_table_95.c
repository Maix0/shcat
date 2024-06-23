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
	v->a[9500] = sym_while_statement;
	v->a[9501] = sym_if_statement;
	v->a[9502] = sym_case_statement;
	v->a[9503] = sym_function_definition;
	v->a[9504] = sym_compound_statement;
	v->a[9505] = sym_subshell;
	v->a[9506] = sym_list;
	v->a[9507] = sym_negated_command;
	v->a[9508] = sym_command;
	v->a[9509] = sym__variable_assignments;
	v->a[9510] = 32;
	v->a[9511] = actions(3);
	v->a[9512] = 1;
	v->a[9513] = sym_comment;
	v->a[9514] = actions(9);
	v->a[9515] = 1;
	v->a[9516] = anon_sym_for;
	v->a[9517] = actions(13);
	v->a[9518] = 1;
	v->a[9519] = anon_sym_if;
	small_parse_table_476(v);
}

void	small_parse_table_476(t_small_parse_table_array *v)
{
	v->a[9520] = actions(15);
	v->a[9521] = 1;
	v->a[9522] = anon_sym_case;
	v->a[9523] = actions(17);
	v->a[9524] = 1;
	v->a[9525] = anon_sym_LPAREN;
	v->a[9526] = actions(19);
	v->a[9527] = 1;
	v->a[9528] = anon_sym_LBRACE;
	v->a[9529] = actions(59);
	v->a[9530] = 1;
	v->a[9531] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9532] = actions(61);
	v->a[9533] = 1;
	v->a[9534] = anon_sym_DOLLAR;
	v->a[9535] = actions(63);
	v->a[9536] = 1;
	v->a[9537] = anon_sym_DQUOTE;
	v->a[9538] = actions(67);
	v->a[9539] = 1;
	small_parse_table_477(v);
}

void	small_parse_table_477(t_small_parse_table_array *v)
{
	v->a[9540] = anon_sym_DOLLAR_LBRACE;
	v->a[9541] = actions(69);
	v->a[9542] = 1;
	v->a[9543] = anon_sym_DOLLAR_LPAREN;
	v->a[9544] = actions(71);
	v->a[9545] = 1;
	v->a[9546] = anon_sym_BQUOTE;
	v->a[9547] = actions(220);
	v->a[9548] = 1;
	v->a[9549] = sym_word;
	v->a[9550] = actions(222);
	v->a[9551] = 1;
	v->a[9552] = anon_sym_BANG;
	v->a[9553] = actions(230);
	v->a[9554] = 1;
	v->a[9555] = sym_file_descriptor;
	v->a[9556] = actions(232);
	v->a[9557] = 1;
	v->a[9558] = sym_variable_name;
	v->a[9559] = state(126);
	small_parse_table_478(v);
}

void	small_parse_table_478(t_small_parse_table_array *v)
{
	v->a[9560] = 1;
	v->a[9561] = aux_sym__statements_repeat1;
	v->a[9562] = state(184);
	v->a[9563] = 1;
	v->a[9564] = sym_command_name;
	v->a[9565] = state(268);
	v->a[9566] = 1;
	v->a[9567] = sym_variable_assignment;
	v->a[9568] = state(647);
	v->a[9569] = 1;
	v->a[9570] = sym_concatenation;
	v->a[9571] = state(780);
	v->a[9572] = 1;
	v->a[9573] = sym_file_redirect;
	v->a[9574] = state(828);
	v->a[9575] = 1;
	v->a[9576] = aux_sym_command_repeat1;
	v->a[9577] = state(1314);
	v->a[9578] = 1;
	v->a[9579] = sym_pipeline;
	small_parse_table_479(v);
}

void	small_parse_table_479(t_small_parse_table_array *v)
{
	v->a[9580] = state(1331);
	v->a[9581] = 1;
	v->a[9582] = aux_sym_redirected_statement_repeat2;
	v->a[9583] = state(2252);
	v->a[9584] = 1;
	v->a[9585] = sym__statement_not_pipeline;
	v->a[9586] = state(2399);
	v->a[9587] = 1;
	v->a[9588] = sym__statements;
	v->a[9589] = actions(11);
	v->a[9590] = 2;
	v->a[9591] = anon_sym_while;
	v->a[9592] = anon_sym_until;
	v->a[9593] = actions(226);
	v->a[9594] = 2;
	v->a[9595] = anon_sym_LT_AMP_DASH;
	v->a[9596] = anon_sym_GT_AMP_DASH;
	v->a[9597] = actions(228);
	v->a[9598] = 2;
	v->a[9599] = sym_raw_string;
	small_parse_table_480(v);
}

/* EOF small_parse_table_95.c */
