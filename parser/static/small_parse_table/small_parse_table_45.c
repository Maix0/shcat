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
	v->a[4500] = anon_sym_GT_GT;
	v->a[4501] = anon_sym_AMP_GT;
	v->a[4502] = anon_sym_AMP_GT_GT;
	v->a[4503] = anon_sym_LT_AMP;
	v->a[4504] = anon_sym_GT_AMP;
	v->a[4505] = anon_sym_GT_PIPE;
	v->a[4506] = anon_sym_LT_AMP_DASH;
	v->a[4507] = anon_sym_GT_AMP_DASH;
	v->a[4508] = anon_sym_LT_LT;
	v->a[4509] = anon_sym_LT_LT_DASH;
	v->a[4510] = aux_sym_heredoc_redirect_token1;
	v->a[4511] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4512] = anon_sym_AMP;
	v->a[4513] = sym__special_character;
	v->a[4514] = anon_sym_DQUOTE;
	v->a[4515] = sym_raw_string;
	v->a[4516] = aux_sym_number_token1;
	v->a[4517] = aux_sym_number_token2;
	v->a[4518] = anon_sym_DOLLAR_LBRACE;
	v->a[4519] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_226(v);
}

void	small_parse_table_226(t_small_parse_table_array *v)
{
	v->a[4520] = anon_sym_BQUOTE;
	v->a[4521] = anon_sym_DOLLAR_BQUOTE;
	v->a[4522] = sym_word;
	v->a[4523] = anon_sym_SEMI;
	v->a[4524] = 6;
	v->a[4525] = actions(3);
	v->a[4526] = 1;
	v->a[4527] = sym_comment;
	v->a[4528] = actions(1478);
	v->a[4529] = 1;
	v->a[4530] = sym_variable_name;
	v->a[4531] = actions(1476);
	v->a[4532] = 2;
	v->a[4533] = aux_sym__simple_variable_name_token1;
	v->a[4534] = aux_sym__multiline_variable_name_token1;
	v->a[4535] = actions(828);
	v->a[4536] = 5;
	v->a[4537] = sym_file_descriptor;
	v->a[4538] = sym_test_operator;
	v->a[4539] = sym__bare_dollar;
	small_parse_table_227(v);
}

void	small_parse_table_227(t_small_parse_table_array *v)
{
	v->a[4540] = sym__brace_start;
	v->a[4541] = ts_builtin_sym_end;
	v->a[4542] = actions(1474);
	v->a[4543] = 9;
	v->a[4544] = anon_sym_BANG;
	v->a[4545] = anon_sym_DASH;
	v->a[4546] = anon_sym_STAR;
	v->a[4547] = anon_sym_QMARK;
	v->a[4548] = anon_sym_DOLLAR;
	v->a[4549] = anon_sym_POUND;
	v->a[4550] = anon_sym_AT;
	v->a[4551] = anon_sym_0;
	v->a[4552] = anon_sym__;
	v->a[4553] = actions(826);
	v->a[4554] = 31;
	v->a[4555] = anon_sym_PIPE;
	v->a[4556] = anon_sym_SEMI_SEMI;
	v->a[4557] = anon_sym_PIPE_AMP;
	v->a[4558] = anon_sym_AMP_AMP;
	v->a[4559] = anon_sym_PIPE_PIPE;
	small_parse_table_228(v);
}

void	small_parse_table_228(t_small_parse_table_array *v)
{
	v->a[4560] = anon_sym_LT;
	v->a[4561] = anon_sym_GT;
	v->a[4562] = anon_sym_GT_GT;
	v->a[4563] = anon_sym_AMP_GT;
	v->a[4564] = anon_sym_AMP_GT_GT;
	v->a[4565] = anon_sym_LT_AMP;
	v->a[4566] = anon_sym_GT_AMP;
	v->a[4567] = anon_sym_GT_PIPE;
	v->a[4568] = anon_sym_LT_AMP_DASH;
	v->a[4569] = anon_sym_GT_AMP_DASH;
	v->a[4570] = anon_sym_LT_LT;
	v->a[4571] = anon_sym_LT_LT_DASH;
	v->a[4572] = aux_sym_heredoc_redirect_token1;
	v->a[4573] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4574] = anon_sym_AMP;
	v->a[4575] = sym__special_character;
	v->a[4576] = anon_sym_DQUOTE;
	v->a[4577] = sym_raw_string;
	v->a[4578] = aux_sym_number_token1;
	v->a[4579] = aux_sym_number_token2;
	small_parse_table_229(v);
}

void	small_parse_table_229(t_small_parse_table_array *v)
{
	v->a[4580] = anon_sym_DOLLAR_LBRACE;
	v->a[4581] = anon_sym_DOLLAR_LPAREN;
	v->a[4582] = anon_sym_BQUOTE;
	v->a[4583] = anon_sym_DOLLAR_BQUOTE;
	v->a[4584] = sym_word;
	v->a[4585] = anon_sym_SEMI;
	v->a[4586] = 20;
	v->a[4587] = actions(3);
	v->a[4588] = 1;
	v->a[4589] = sym_comment;
	v->a[4590] = actions(1483);
	v->a[4591] = 1;
	v->a[4592] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4593] = actions(1486);
	v->a[4594] = 1;
	v->a[4595] = anon_sym_DOLLAR;
	v->a[4596] = actions(1489);
	v->a[4597] = 1;
	v->a[4598] = sym__special_character;
	v->a[4599] = actions(1492);
	small_parse_table_230(v);
}

/* EOF small_parse_table_45.c */
