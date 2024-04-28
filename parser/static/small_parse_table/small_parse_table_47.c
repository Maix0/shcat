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
	v->a[4700] = sym_ansi_c_string;
	v->a[4701] = aux_sym_number_token1;
	v->a[4702] = aux_sym_number_token2;
	v->a[4703] = anon_sym_DOLLAR_LBRACE;
	v->a[4704] = anon_sym_DOLLAR_LPAREN;
	v->a[4705] = anon_sym_BQUOTE;
	v->a[4706] = anon_sym_DOLLAR_BQUOTE;
	v->a[4707] = anon_sym_LT_LPAREN;
	v->a[4708] = anon_sym_GT_LPAREN;
	v->a[4709] = sym_word;
	v->a[4710] = 27;
	v->a[4711] = actions(3);
	v->a[4712] = 1;
	v->a[4713] = sym_comment;
	v->a[4714] = actions(1491);
	v->a[4715] = 1;
	v->a[4716] = aux_sym_heredoc_redirect_token1;
	v->a[4717] = actions(1871);
	v->a[4718] = 1;
	v->a[4719] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_236(v);
}

void	small_parse_table_236(t_small_parse_table_array *v)
{
	v->a[4720] = actions(1874);
	v->a[4721] = 1;
	v->a[4722] = anon_sym_DOLLAR;
	v->a[4723] = actions(1880);
	v->a[4724] = 1;
	v->a[4725] = anon_sym_DQUOTE;
	v->a[4726] = actions(1883);
	v->a[4727] = 1;
	v->a[4728] = aux_sym_number_token1;
	v->a[4729] = actions(1886);
	v->a[4730] = 1;
	v->a[4731] = aux_sym_number_token2;
	v->a[4732] = actions(1889);
	v->a[4733] = 1;
	v->a[4734] = anon_sym_DOLLAR_LBRACE;
	v->a[4735] = actions(1892);
	v->a[4736] = 1;
	v->a[4737] = anon_sym_DOLLAR_LPAREN;
	v->a[4738] = actions(1895);
	v->a[4739] = 1;
	small_parse_table_237(v);
}

void	small_parse_table_237(t_small_parse_table_array *v)
{
	v->a[4740] = anon_sym_BQUOTE;
	v->a[4741] = actions(1898);
	v->a[4742] = 1;
	v->a[4743] = anon_sym_DOLLAR_BQUOTE;
	v->a[4744] = actions(1910);
	v->a[4745] = 1;
	v->a[4746] = sym__bare_dollar;
	v->a[4747] = actions(1913);
	v->a[4748] = 1;
	v->a[4749] = sym__brace_start;
	v->a[4750] = actions(2082);
	v->a[4751] = 1;
	v->a[4752] = anon_sym_LT_LT_LT;
	v->a[4753] = actions(2085);
	v->a[4754] = 1;
	v->a[4755] = sym__special_character;
	v->a[4756] = actions(2088);
	v->a[4757] = 1;
	v->a[4758] = sym_file_descriptor;
	v->a[4759] = actions(2091);
	small_parse_table_238(v);
}

void	small_parse_table_238(t_small_parse_table_array *v)
{
	v->a[4760] = 1;
	v->a[4761] = sym_test_operator;
	v->a[4762] = state(574);
	v->a[4763] = 1;
	v->a[4764] = aux_sym_command_repeat2;
	v->a[4765] = state(1321);
	v->a[4766] = 1;
	v->a[4767] = aux_sym__literal_repeat1;
	v->a[4768] = state(1712);
	v->a[4769] = 1;
	v->a[4770] = sym_herestring_redirect;
	v->a[4771] = state(1716);
	v->a[4772] = 1;
	v->a[4773] = sym_concatenation;
	v->a[4774] = actions(1862);
	v->a[4775] = 2;
	v->a[4776] = anon_sym_LPAREN_LPAREN;
	v->a[4777] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4778] = actions(1901);
	v->a[4779] = 2;
	small_parse_table_239(v);
}

void	small_parse_table_239(t_small_parse_table_array *v)
{
	v->a[4780] = anon_sym_LT_LPAREN;
	v->a[4781] = anon_sym_GT_LPAREN;
	v->a[4782] = actions(2079);
	v->a[4783] = 2;
	v->a[4784] = anon_sym_EQ_EQ;
	v->a[4785] = anon_sym_EQ_TILDE;
	v->a[4786] = actions(2076);
	v->a[4787] = 3;
	v->a[4788] = sym_raw_string;
	v->a[4789] = sym_ansi_c_string;
	v->a[4790] = sym_word;
	v->a[4791] = state(1219);
	v->a[4792] = 9;
	v->a[4793] = sym_arithmetic_expansion;
	v->a[4794] = sym_brace_expression;
	v->a[4795] = sym_string;
	v->a[4796] = sym_translated_string;
	v->a[4797] = sym_number;
	v->a[4798] = sym_simple_expansion;
	v->a[4799] = sym_expansion;
	small_parse_table_240(v);
}

/* EOF small_parse_table_47.c */
