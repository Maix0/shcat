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
	v->a[4500] = 1;
	v->a[4501] = aux_sym_command_repeat1;
	v->a[4502] = state(1215);
	v->a[4503] = 1;
	v->a[4504] = sym_pipeline;
	v->a[4505] = state(1280);
	v->a[4506] = 1;
	v->a[4507] = sym_do_group;
	v->a[4508] = state(1333);
	v->a[4509] = 1;
	v->a[4510] = aux_sym_redirected_statement_repeat2;
	v->a[4511] = state(2103);
	v->a[4512] = 1;
	v->a[4513] = sym__statement_not_pipeline;
	v->a[4514] = actions(11);
	v->a[4515] = 2;
	v->a[4516] = anon_sym_while;
	v->a[4517] = anon_sym_until;
	v->a[4518] = actions(57);
	v->a[4519] = 2;
	small_parse_table_226(v);
}

void	small_parse_table_226(t_small_parse_table_array *v)
{
	v->a[4520] = anon_sym_LT_AMP_DASH;
	v->a[4521] = anon_sym_GT_AMP_DASH;
	v->a[4522] = actions(65);
	v->a[4523] = 2;
	v->a[4524] = sym_raw_string;
	v->a[4525] = sym_number;
	v->a[4526] = state(443);
	v->a[4527] = 5;
	v->a[4528] = sym_arithmetic_expansion;
	v->a[4529] = sym_string;
	v->a[4530] = sym_simple_expansion;
	v->a[4531] = sym_expansion;
	v->a[4532] = sym_command_substitution;
	v->a[4533] = actions(55);
	v->a[4534] = 6;
	v->a[4535] = anon_sym_LT;
	v->a[4536] = anon_sym_GT;
	v->a[4537] = anon_sym_GT_GT;
	v->a[4538] = anon_sym_LT_AMP;
	v->a[4539] = anon_sym_GT_AMP;
	small_parse_table_227(v);
}

void	small_parse_table_227(t_small_parse_table_array *v)
{
	v->a[4540] = anon_sym_GT_PIPE;
	v->a[4541] = state(1170);
	v->a[4542] = 12;
	v->a[4543] = sym_redirected_statement;
	v->a[4544] = sym_for_statement;
	v->a[4545] = sym_while_statement;
	v->a[4546] = sym_if_statement;
	v->a[4547] = sym_case_statement;
	v->a[4548] = sym_function_definition;
	v->a[4549] = sym_compound_statement;
	v->a[4550] = sym_subshell;
	v->a[4551] = sym_list;
	v->a[4552] = sym_negated_command;
	v->a[4553] = sym_command;
	v->a[4554] = sym__variable_assignments;
	v->a[4555] = 33;
	v->a[4556] = actions(3);
	v->a[4557] = 1;
	v->a[4558] = sym_comment;
	v->a[4559] = actions(9);
	small_parse_table_228(v);
}

void	small_parse_table_228(t_small_parse_table_array *v)
{
	v->a[4560] = 1;
	v->a[4561] = anon_sym_for;
	v->a[4562] = actions(13);
	v->a[4563] = 1;
	v->a[4564] = anon_sym_if;
	v->a[4565] = actions(15);
	v->a[4566] = 1;
	v->a[4567] = anon_sym_case;
	v->a[4568] = actions(17);
	v->a[4569] = 1;
	v->a[4570] = anon_sym_LPAREN;
	v->a[4571] = actions(19);
	v->a[4572] = 1;
	v->a[4573] = anon_sym_LBRACE;
	v->a[4574] = actions(45);
	v->a[4575] = 1;
	v->a[4576] = sym_word;
	v->a[4577] = actions(53);
	v->a[4578] = 1;
	v->a[4579] = anon_sym_BANG;
	small_parse_table_229(v);
}

void	small_parse_table_229(t_small_parse_table_array *v)
{
	v->a[4580] = actions(59);
	v->a[4581] = 1;
	v->a[4582] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4583] = actions(61);
	v->a[4584] = 1;
	v->a[4585] = anon_sym_DOLLAR;
	v->a[4586] = actions(63);
	v->a[4587] = 1;
	v->a[4588] = anon_sym_DQUOTE;
	v->a[4589] = actions(67);
	v->a[4590] = 1;
	v->a[4591] = anon_sym_DOLLAR_LBRACE;
	v->a[4592] = actions(69);
	v->a[4593] = 1;
	v->a[4594] = anon_sym_DOLLAR_LPAREN;
	v->a[4595] = actions(71);
	v->a[4596] = 1;
	v->a[4597] = anon_sym_BQUOTE;
	v->a[4598] = actions(73);
	v->a[4599] = 1;
	small_parse_table_230(v);
}

/* EOF small_parse_table_45.c */
