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
	v->a[4500] = sym_command;
	v->a[4501] = sym__variable_assignments;
	v->a[4502] = 33;
	v->a[4503] = actions(3);
	v->a[4504] = 1;
	v->a[4505] = sym_comment;
	v->a[4506] = actions(9);
	v->a[4507] = 1;
	v->a[4508] = anon_sym_for;
	v->a[4509] = actions(13);
	v->a[4510] = 1;
	v->a[4511] = anon_sym_if;
	v->a[4512] = actions(15);
	v->a[4513] = 1;
	v->a[4514] = anon_sym_case;
	v->a[4515] = actions(17);
	v->a[4516] = 1;
	v->a[4517] = anon_sym_LPAREN;
	v->a[4518] = actions(19);
	v->a[4519] = 1;
	small_parse_table_226(v);
}

void	small_parse_table_226(t_small_parse_table_array *v)
{
	v->a[4520] = anon_sym_LBRACE;
	v->a[4521] = actions(45);
	v->a[4522] = 1;
	v->a[4523] = sym_word;
	v->a[4524] = actions(53);
	v->a[4525] = 1;
	v->a[4526] = anon_sym_BANG;
	v->a[4527] = actions(59);
	v->a[4528] = 1;
	v->a[4529] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4530] = actions(61);
	v->a[4531] = 1;
	v->a[4532] = anon_sym_DOLLAR;
	v->a[4533] = actions(63);
	v->a[4534] = 1;
	v->a[4535] = anon_sym_DQUOTE;
	v->a[4536] = actions(67);
	v->a[4537] = 1;
	v->a[4538] = anon_sym_DOLLAR_LBRACE;
	v->a[4539] = actions(69);
	small_parse_table_227(v);
}

void	small_parse_table_227(t_small_parse_table_array *v)
{
	v->a[4540] = 1;
	v->a[4541] = anon_sym_DOLLAR_LPAREN;
	v->a[4542] = actions(71);
	v->a[4543] = 1;
	v->a[4544] = anon_sym_BQUOTE;
	v->a[4545] = actions(73);
	v->a[4546] = 1;
	v->a[4547] = sym_file_descriptor;
	v->a[4548] = actions(75);
	v->a[4549] = 1;
	v->a[4550] = sym_variable_name;
	v->a[4551] = actions(216);
	v->a[4552] = 1;
	v->a[4553] = anon_sym_do;
	v->a[4554] = state(117);
	v->a[4555] = 1;
	v->a[4556] = aux_sym__terminated_statement;
	v->a[4557] = state(187);
	v->a[4558] = 1;
	v->a[4559] = sym_command_name;
	small_parse_table_228(v);
}

void	small_parse_table_228(t_small_parse_table_array *v)
{
	v->a[4560] = state(300);
	v->a[4561] = 1;
	v->a[4562] = sym_variable_assignment;
	v->a[4563] = state(647);
	v->a[4564] = 1;
	v->a[4565] = sym_concatenation;
	v->a[4566] = state(736);
	v->a[4567] = 1;
	v->a[4568] = aux_sym_command_repeat1;
	v->a[4569] = state(738);
	v->a[4570] = 1;
	v->a[4571] = sym_file_redirect;
	v->a[4572] = state(1388);
	v->a[4573] = 1;
	v->a[4574] = sym_do_group;
	v->a[4575] = state(1455);
	v->a[4576] = 1;
	v->a[4577] = sym_pipeline;
	v->a[4578] = state(1460);
	v->a[4579] = 1;
	small_parse_table_229(v);
}

void	small_parse_table_229(t_small_parse_table_array *v)
{
	v->a[4580] = aux_sym_redirected_statement_repeat2;
	v->a[4581] = state(2269);
	v->a[4582] = 1;
	v->a[4583] = sym__statement_not_pipeline;
	v->a[4584] = actions(11);
	v->a[4585] = 2;
	v->a[4586] = anon_sym_while;
	v->a[4587] = anon_sym_until;
	v->a[4588] = actions(57);
	v->a[4589] = 2;
	v->a[4590] = anon_sym_LT_AMP_DASH;
	v->a[4591] = anon_sym_GT_AMP_DASH;
	v->a[4592] = actions(65);
	v->a[4593] = 2;
	v->a[4594] = sym_raw_string;
	v->a[4595] = sym_number;
	v->a[4596] = state(394);
	v->a[4597] = 5;
	v->a[4598] = sym_arithmetic_expansion;
	v->a[4599] = sym_string;
	small_parse_table_230(v);
}

/* EOF small_parse_table_45.c */
