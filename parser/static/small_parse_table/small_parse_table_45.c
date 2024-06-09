/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_45.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_225(t_small_parse_table_array *v)
{
	v->a[4500] = anon_sym_DOLLAR_LPAREN;
	v->a[4501] = actions(79);
	v->a[4502] = 1;
	v->a[4503] = anon_sym_BQUOTE;
	v->a[4504] = actions(81);
	v->a[4505] = 1;
	v->a[4506] = sym_file_descriptor;
	v->a[4507] = actions(83);
	v->a[4508] = 1;
	v->a[4509] = sym_variable_name;
	v->a[4510] = actions(232);
	v->a[4511] = 1;
	v->a[4512] = anon_sym_do;
	v->a[4513] = state(107);
	v->a[4514] = 1;
	v->a[4515] = aux_sym__terminated_statement;
	v->a[4516] = state(190);
	v->a[4517] = 1;
	v->a[4518] = sym_command_name;
	v->a[4519] = state(280);
	small_parse_table_226(v);
}

void	small_parse_table_226(t_small_parse_table_array *v)
{
	v->a[4520] = 1;
	v->a[4521] = sym_variable_assignment;
	v->a[4522] = state(582);
	v->a[4523] = 1;
	v->a[4524] = sym_concatenation;
	v->a[4525] = state(587);
	v->a[4526] = 1;
	v->a[4527] = aux_sym_command_repeat1;
	v->a[4528] = state(718);
	v->a[4529] = 1;
	v->a[4530] = sym_file_redirect;
	v->a[4531] = state(1213);
	v->a[4532] = 1;
	v->a[4533] = aux_sym_redirected_statement_repeat2;
	v->a[4534] = state(1233);
	v->a[4535] = 1;
	v->a[4536] = sym_pipeline;
	v->a[4537] = state(1524);
	v->a[4538] = 1;
	v->a[4539] = sym_do_group;
	small_parse_table_227(v);
}

void	small_parse_table_227(t_small_parse_table_array *v)
{
	v->a[4540] = state(2035);
	v->a[4541] = 1;
	v->a[4542] = sym__statement_not_pipeline;
	v->a[4543] = actions(11);
	v->a[4544] = 2;
	v->a[4545] = anon_sym_while;
	v->a[4546] = anon_sym_until;
	v->a[4547] = actions(61);
	v->a[4548] = 2;
	v->a[4549] = anon_sym_LT_AMP_DASH;
	v->a[4550] = anon_sym_GT_AMP_DASH;
	v->a[4551] = state(397);
	v->a[4552] = 6;
	v->a[4553] = sym_arithmetic_expansion;
	v->a[4554] = sym_string;
	v->a[4555] = sym_number;
	v->a[4556] = sym_simple_expansion;
	v->a[4557] = sym_expansion;
	v->a[4558] = sym_command_substitution;
	v->a[4559] = actions(59);
	small_parse_table_228(v);
}

void	small_parse_table_228(t_small_parse_table_array *v)
{
	v->a[4560] = 8;
	v->a[4561] = anon_sym_LT;
	v->a[4562] = anon_sym_GT;
	v->a[4563] = anon_sym_GT_GT;
	v->a[4564] = anon_sym_AMP_GT;
	v->a[4565] = anon_sym_AMP_GT_GT;
	v->a[4566] = anon_sym_LT_AMP;
	v->a[4567] = anon_sym_GT_AMP;
	v->a[4568] = anon_sym_GT_PIPE;
	v->a[4569] = state(1172);
	v->a[4570] = 12;
	v->a[4571] = sym_redirected_statement;
	v->a[4572] = sym_for_statement;
	v->a[4573] = sym_while_statement;
	v->a[4574] = sym_if_statement;
	v->a[4575] = sym_case_statement;
	v->a[4576] = sym_function_definition;
	v->a[4577] = sym_compound_statement;
	v->a[4578] = sym_subshell;
	v->a[4579] = sym_list;
	small_parse_table_229(v);
}

void	small_parse_table_229(t_small_parse_table_array *v)
{
	v->a[4580] = sym_negated_command;
	v->a[4581] = sym_command;
	v->a[4582] = sym_variable_assignments;
	v->a[4583] = 35;
	v->a[4584] = actions(3);
	v->a[4585] = 1;
	v->a[4586] = sym_comment;
	v->a[4587] = actions(9);
	v->a[4588] = 1;
	v->a[4589] = anon_sym_for;
	v->a[4590] = actions(13);
	v->a[4591] = 1;
	v->a[4592] = anon_sym_if;
	v->a[4593] = actions(15);
	v->a[4594] = 1;
	v->a[4595] = anon_sym_case;
	v->a[4596] = actions(17);
	v->a[4597] = 1;
	v->a[4598] = anon_sym_LPAREN;
	v->a[4599] = actions(19);
	small_parse_table_230(v);
}

/* EOF small_parse_table_45.c */
