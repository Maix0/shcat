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
	v->a[4500] = sym_raw_string;
	v->a[4501] = sym_number;
	v->a[4502] = actions(51);
	v->a[4503] = 3;
	v->a[4504] = anon_sym_LT;
	v->a[4505] = anon_sym_GT;
	v->a[4506] = anon_sym_GT_GT;
	v->a[4507] = state(401);
	v->a[4508] = 5;
	v->a[4509] = sym_arithmetic_expansion;
	v->a[4510] = sym_string;
	v->a[4511] = sym_simple_expansion;
	v->a[4512] = sym_expansion;
	v->a[4513] = sym_command_substitution;
	v->a[4514] = state(820);
	v->a[4515] = 12;
	v->a[4516] = sym_redirected_statement;
	v->a[4517] = sym_for_statement;
	v->a[4518] = sym_while_statement;
	v->a[4519] = sym_if_statement;
	small_parse_table_226(v);
}

void	small_parse_table_226(t_small_parse_table_array *v)
{
	v->a[4520] = sym_case_statement;
	v->a[4521] = sym_function_definition;
	v->a[4522] = sym_compound_statement;
	v->a[4523] = sym_subshell;
	v->a[4524] = sym_list;
	v->a[4525] = sym_negated_command;
	v->a[4526] = sym_command;
	v->a[4527] = sym__variable_assignments;
	v->a[4528] = 30;
	v->a[4529] = actions(3);
	v->a[4530] = 1;
	v->a[4531] = sym_comment;
	v->a[4532] = actions(9);
	v->a[4533] = 1;
	v->a[4534] = anon_sym_for;
	v->a[4535] = actions(13);
	v->a[4536] = 1;
	v->a[4537] = anon_sym_if;
	v->a[4538] = actions(15);
	v->a[4539] = 1;
	small_parse_table_227(v);
}

void	small_parse_table_227(t_small_parse_table_array *v)
{
	v->a[4540] = anon_sym_case;
	v->a[4541] = actions(17);
	v->a[4542] = 1;
	v->a[4543] = anon_sym_LPAREN;
	v->a[4544] = actions(19);
	v->a[4545] = 1;
	v->a[4546] = anon_sym_LBRACE;
	v->a[4547] = actions(53);
	v->a[4548] = 1;
	v->a[4549] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4550] = actions(55);
	v->a[4551] = 1;
	v->a[4552] = anon_sym_DOLLAR;
	v->a[4553] = actions(57);
	v->a[4554] = 1;
	v->a[4555] = anon_sym_DQUOTE;
	v->a[4556] = actions(61);
	v->a[4557] = 1;
	v->a[4558] = anon_sym_DOLLAR_LBRACE;
	v->a[4559] = actions(63);
	small_parse_table_228(v);
}

void	small_parse_table_228(t_small_parse_table_array *v)
{
	v->a[4560] = 1;
	v->a[4561] = anon_sym_DOLLAR_LPAREN;
	v->a[4562] = actions(65);
	v->a[4563] = 1;
	v->a[4564] = anon_sym_BQUOTE;
	v->a[4565] = actions(208);
	v->a[4566] = 1;
	v->a[4567] = sym_word;
	v->a[4568] = actions(210);
	v->a[4569] = 1;
	v->a[4570] = anon_sym_BANG;
	v->a[4571] = actions(216);
	v->a[4572] = 1;
	v->a[4573] = sym_variable_name;
	v->a[4574] = state(112);
	v->a[4575] = 1;
	v->a[4576] = aux_sym__statements_repeat1;
	v->a[4577] = state(158);
	v->a[4578] = 1;
	v->a[4579] = sym_command_name;
	small_parse_table_229(v);
}

void	small_parse_table_229(t_small_parse_table_array *v)
{
	v->a[4580] = state(186);
	v->a[4581] = 1;
	v->a[4582] = sym_variable_assignment;
	v->a[4583] = state(298);
	v->a[4584] = 1;
	v->a[4585] = aux_sym_command_repeat1;
	v->a[4586] = state(555);
	v->a[4587] = 1;
	v->a[4588] = sym_concatenation;
	v->a[4589] = state(578);
	v->a[4590] = 1;
	v->a[4591] = sym_file_redirect;
	v->a[4592] = state(937);
	v->a[4593] = 1;
	v->a[4594] = sym_pipeline;
	v->a[4595] = state(1019);
	v->a[4596] = 1;
	v->a[4597] = aux_sym_redirected_statement_repeat2;
	v->a[4598] = state(1557);
	v->a[4599] = 1;
	small_parse_table_230(v);
}

/* EOF small_parse_table_45.c */
