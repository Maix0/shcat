/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_47.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_235(t_small_parse_table_array *v)
{
	v->a[4700] = anon_sym_AT;
	v->a[4701] = anon_sym_0;
	v->a[4702] = anon_sym__;
	v->a[4703] = actions(826);
	v->a[4704] = 33;
	v->a[4705] = anon_sym_PIPE;
	v->a[4706] = anon_sym_SEMI_SEMI;
	v->a[4707] = anon_sym_SEMI_AMP;
	v->a[4708] = anon_sym_SEMI_SEMI_AMP;
	v->a[4709] = anon_sym_PIPE_AMP;
	v->a[4710] = anon_sym_AMP_AMP;
	v->a[4711] = anon_sym_PIPE_PIPE;
	v->a[4712] = anon_sym_LT;
	v->a[4713] = anon_sym_GT;
	v->a[4714] = anon_sym_GT_GT;
	v->a[4715] = anon_sym_AMP_GT;
	v->a[4716] = anon_sym_AMP_GT_GT;
	v->a[4717] = anon_sym_LT_AMP;
	v->a[4718] = anon_sym_GT_AMP;
	v->a[4719] = anon_sym_GT_PIPE;
	small_parse_table_236(v);
}

void	small_parse_table_236(t_small_parse_table_array *v)
{
	v->a[4720] = anon_sym_LT_AMP_DASH;
	v->a[4721] = anon_sym_GT_AMP_DASH;
	v->a[4722] = anon_sym_LT_LT;
	v->a[4723] = anon_sym_LT_LT_DASH;
	v->a[4724] = aux_sym_heredoc_redirect_token1;
	v->a[4725] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4726] = anon_sym_AMP;
	v->a[4727] = sym__special_character;
	v->a[4728] = anon_sym_DQUOTE;
	v->a[4729] = sym_raw_string;
	v->a[4730] = aux_sym_number_token1;
	v->a[4731] = aux_sym_number_token2;
	v->a[4732] = anon_sym_DOLLAR_LBRACE;
	v->a[4733] = anon_sym_DOLLAR_LPAREN;
	v->a[4734] = anon_sym_BQUOTE;
	v->a[4735] = anon_sym_DOLLAR_BQUOTE;
	v->a[4736] = sym_word;
	v->a[4737] = anon_sym_SEMI;
	v->a[4738] = 6;
	v->a[4739] = actions(3);
	small_parse_table_237(v);
}

void	small_parse_table_237(t_small_parse_table_array *v)
{
	v->a[4740] = 1;
	v->a[4741] = sym_comment;
	v->a[4742] = state(893);
	v->a[4743] = 1;
	v->a[4744] = aux_sym__literal_repeat1;
	v->a[4745] = state(1149);
	v->a[4746] = 1;
	v->a[4747] = sym_concatenation;
	v->a[4748] = actions(1530);
	v->a[4749] = 5;
	v->a[4750] = sym_file_descriptor;
	v->a[4751] = sym_variable_name;
	v->a[4752] = sym_test_operator;
	v->a[4753] = sym__brace_start;
	v->a[4754] = aux_sym_heredoc_redirect_token1;
	v->a[4755] = state(520);
	v->a[4756] = 7;
	v->a[4757] = sym_arithmetic_expansion;
	v->a[4758] = sym_brace_expression;
	v->a[4759] = sym_string;
	small_parse_table_238(v);
}

void	small_parse_table_238(t_small_parse_table_array *v)
{
	v->a[4760] = sym_number;
	v->a[4761] = sym_simple_expansion;
	v->a[4762] = sym_expansion;
	v->a[4763] = sym_command_substitution;
	v->a[4764] = actions(1528);
	v->a[4765] = 34;
	v->a[4766] = anon_sym_esac;
	v->a[4767] = anon_sym_PIPE;
	v->a[4768] = anon_sym_SEMI_SEMI;
	v->a[4769] = anon_sym_SEMI_AMP;
	v->a[4770] = anon_sym_SEMI_SEMI_AMP;
	v->a[4771] = anon_sym_PIPE_AMP;
	v->a[4772] = anon_sym_AMP_AMP;
	v->a[4773] = anon_sym_PIPE_PIPE;
	v->a[4774] = anon_sym_LT;
	v->a[4775] = anon_sym_GT;
	v->a[4776] = anon_sym_GT_GT;
	v->a[4777] = anon_sym_AMP_GT;
	v->a[4778] = anon_sym_AMP_GT_GT;
	v->a[4779] = anon_sym_LT_AMP;
	small_parse_table_239(v);
}

void	small_parse_table_239(t_small_parse_table_array *v)
{
	v->a[4780] = anon_sym_GT_AMP;
	v->a[4781] = anon_sym_GT_PIPE;
	v->a[4782] = anon_sym_LT_AMP_DASH;
	v->a[4783] = anon_sym_GT_AMP_DASH;
	v->a[4784] = anon_sym_LT_LT;
	v->a[4785] = anon_sym_LT_LT_DASH;
	v->a[4786] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4787] = anon_sym_AMP;
	v->a[4788] = anon_sym_DOLLAR;
	v->a[4789] = sym__special_character;
	v->a[4790] = anon_sym_DQUOTE;
	v->a[4791] = sym_raw_string;
	v->a[4792] = aux_sym_number_token1;
	v->a[4793] = aux_sym_number_token2;
	v->a[4794] = anon_sym_DOLLAR_LBRACE;
	v->a[4795] = anon_sym_DOLLAR_LPAREN;
	v->a[4796] = anon_sym_BQUOTE;
	v->a[4797] = anon_sym_DOLLAR_BQUOTE;
	v->a[4798] = sym_word;
	v->a[4799] = anon_sym_SEMI;
	small_parse_table_240(v);
}

/* EOF small_parse_table_47.c */
