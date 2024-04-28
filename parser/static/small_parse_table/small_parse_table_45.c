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
	v->a[4501] = aux_sym_command_repeat2;
	v->a[4502] = state(1321);
	v->a[4503] = 1;
	v->a[4504] = aux_sym__literal_repeat1;
	v->a[4505] = state(1712);
	v->a[4506] = 1;
	v->a[4507] = sym_herestring_redirect;
	v->a[4508] = state(1716);
	v->a[4509] = 1;
	v->a[4510] = sym_concatenation;
	v->a[4511] = actions(1543);
	v->a[4512] = 2;
	v->a[4513] = anon_sym_LPAREN_LPAREN;
	v->a[4514] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4515] = actions(1569);
	v->a[4516] = 2;
	v->a[4517] = anon_sym_LT_LPAREN;
	v->a[4518] = anon_sym_GT_LPAREN;
	v->a[4519] = actions(1615);
	small_parse_table_226(v);
}

void	small_parse_table_226(t_small_parse_table_array *v)
{
	v->a[4520] = 2;
	v->a[4521] = sym_file_descriptor;
	v->a[4522] = aux_sym_heredoc_redirect_token1;
	v->a[4523] = actions(1688);
	v->a[4524] = 2;
	v->a[4525] = anon_sym_EQ_EQ;
	v->a[4526] = anon_sym_EQ_TILDE;
	v->a[4527] = actions(1686);
	v->a[4528] = 3;
	v->a[4529] = sym_raw_string;
	v->a[4530] = sym_ansi_c_string;
	v->a[4531] = sym_word;
	v->a[4532] = state(1219);
	v->a[4533] = 9;
	v->a[4534] = sym_arithmetic_expansion;
	v->a[4535] = sym_brace_expression;
	v->a[4536] = sym_string;
	v->a[4537] = sym_translated_string;
	v->a[4538] = sym_number;
	v->a[4539] = sym_simple_expansion;
	small_parse_table_227(v);
}

void	small_parse_table_227(t_small_parse_table_array *v)
{
	v->a[4540] = sym_expansion;
	v->a[4541] = sym_command_substitution;
	v->a[4542] = sym_process_substitution;
	v->a[4543] = actions(1613);
	v->a[4544] = 19;
	v->a[4545] = anon_sym_SEMI;
	v->a[4546] = anon_sym_PIPE_PIPE;
	v->a[4547] = anon_sym_AMP_AMP;
	v->a[4548] = anon_sym_PIPE;
	v->a[4549] = anon_sym_AMP;
	v->a[4550] = anon_sym_LT;
	v->a[4551] = anon_sym_GT;
	v->a[4552] = anon_sym_LT_LT;
	v->a[4553] = anon_sym_GT_GT;
	v->a[4554] = anon_sym_SEMI_SEMI;
	v->a[4555] = anon_sym_PIPE_AMP;
	v->a[4556] = anon_sym_AMP_GT;
	v->a[4557] = anon_sym_AMP_GT_GT;
	v->a[4558] = anon_sym_LT_AMP;
	v->a[4559] = anon_sym_GT_AMP;
	small_parse_table_228(v);
}

void	small_parse_table_228(t_small_parse_table_array *v)
{
	v->a[4560] = anon_sym_GT_PIPE;
	v->a[4561] = anon_sym_LT_AMP_DASH;
	v->a[4562] = anon_sym_GT_AMP_DASH;
	v->a[4563] = anon_sym_LT_LT_DASH;
	v->a[4564] = 8;
	v->a[4565] = actions(3);
	v->a[4566] = 1;
	v->a[4567] = sym_comment;
	v->a[4568] = actions(1555);
	v->a[4569] = 1;
	v->a[4570] = anon_sym_DQUOTE;
	v->a[4571] = actions(2070);
	v->a[4572] = 1;
	v->a[4573] = sym_variable_name;
	v->a[4574] = state(1176);
	v->a[4575] = 1;
	v->a[4576] = sym_string;
	v->a[4577] = actions(2068);
	v->a[4578] = 2;
	v->a[4579] = aux_sym__simple_variable_name_token1;
	small_parse_table_229(v);
}

void	small_parse_table_229(t_small_parse_table_array *v)
{
	v->a[4580] = aux_sym__multiline_variable_name_token1;
	v->a[4581] = actions(1235);
	v->a[4582] = 4;
	v->a[4583] = sym_file_descriptor;
	v->a[4584] = sym_test_operator;
	v->a[4585] = sym__bare_dollar;
	v->a[4586] = sym__brace_start;
	v->a[4587] = actions(2066);
	v->a[4588] = 9;
	v->a[4589] = anon_sym_DASH;
	v->a[4590] = anon_sym_STAR;
	v->a[4591] = anon_sym_BANG;
	v->a[4592] = anon_sym_QMARK;
	v->a[4593] = anon_sym_DOLLAR;
	v->a[4594] = anon_sym_POUND;
	v->a[4595] = anon_sym_AT2;
	v->a[4596] = anon_sym_0;
	v->a[4597] = anon_sym__;
	v->a[4598] = actions(1227);
	v->a[4599] = 39;
	small_parse_table_230(v);
}

/* EOF small_parse_table_45.c */
