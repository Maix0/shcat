/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_46.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_230(t_small_parse_table_array *v)
{
	v->a[4600] = anon_sym_LPAREN_LPAREN;
	v->a[4601] = anon_sym_SEMI;
	v->a[4602] = anon_sym_PIPE_PIPE;
	v->a[4603] = anon_sym_AMP_AMP;
	v->a[4604] = anon_sym_PIPE;
	v->a[4605] = anon_sym_AMP;
	v->a[4606] = anon_sym_EQ_EQ;
	v->a[4607] = anon_sym_LT;
	v->a[4608] = anon_sym_GT;
	v->a[4609] = anon_sym_LT_LT;
	v->a[4610] = anon_sym_GT_GT;
	v->a[4611] = anon_sym_RPAREN;
	v->a[4612] = anon_sym_SEMI_SEMI;
	v->a[4613] = anon_sym_PIPE_AMP;
	v->a[4614] = anon_sym_EQ_TILDE;
	v->a[4615] = anon_sym_AMP_GT;
	v->a[4616] = anon_sym_AMP_GT_GT;
	v->a[4617] = anon_sym_LT_AMP;
	v->a[4618] = anon_sym_GT_AMP;
	v->a[4619] = anon_sym_GT_PIPE;
	small_parse_table_231(v);
}

void	small_parse_table_231(t_small_parse_table_array *v)
{
	v->a[4620] = anon_sym_LT_AMP_DASH;
	v->a[4621] = anon_sym_GT_AMP_DASH;
	v->a[4622] = anon_sym_LT_LT_DASH;
	v->a[4623] = aux_sym_heredoc_redirect_token1;
	v->a[4624] = anon_sym_LT_LT_LT;
	v->a[4625] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4626] = anon_sym_DOLLAR_LBRACK;
	v->a[4627] = sym__special_character;
	v->a[4628] = sym_raw_string;
	v->a[4629] = sym_ansi_c_string;
	v->a[4630] = aux_sym_number_token1;
	v->a[4631] = aux_sym_number_token2;
	v->a[4632] = anon_sym_DOLLAR_LBRACE;
	v->a[4633] = anon_sym_DOLLAR_LPAREN;
	v->a[4634] = anon_sym_BQUOTE;
	v->a[4635] = anon_sym_DOLLAR_BQUOTE;
	v->a[4636] = anon_sym_LT_LPAREN;
	v->a[4637] = anon_sym_GT_LPAREN;
	v->a[4638] = sym_word;
	v->a[4639] = 6;
	small_parse_table_232(v);
}

void	small_parse_table_232(t_small_parse_table_array *v)
{
	v->a[4640] = actions(3);
	v->a[4641] = 1;
	v->a[4642] = sym_comment;
	v->a[4643] = state(1474);
	v->a[4644] = 1;
	v->a[4645] = aux_sym__literal_repeat1;
	v->a[4646] = state(583);
	v->a[4647] = 2;
	v->a[4648] = sym_concatenation;
	v->a[4649] = aux_sym_for_statement_repeat1;
	v->a[4650] = actions(2074);
	v->a[4651] = 5;
	v->a[4652] = sym_file_descriptor;
	v->a[4653] = sym_variable_name;
	v->a[4654] = sym_test_operator;
	v->a[4655] = sym__brace_start;
	v->a[4656] = aux_sym_heredoc_redirect_token1;
	v->a[4657] = state(1158);
	v->a[4658] = 9;
	v->a[4659] = sym_arithmetic_expansion;
	small_parse_table_233(v);
}

void	small_parse_table_233(t_small_parse_table_array *v)
{
	v->a[4660] = sym_brace_expression;
	v->a[4661] = sym_string;
	v->a[4662] = sym_translated_string;
	v->a[4663] = sym_number;
	v->a[4664] = sym_simple_expansion;
	v->a[4665] = sym_expansion;
	v->a[4666] = sym_command_substitution;
	v->a[4667] = sym_process_substitution;
	v->a[4668] = actions(2072);
	v->a[4669] = 40;
	v->a[4670] = anon_sym_LPAREN_LPAREN;
	v->a[4671] = anon_sym_SEMI;
	v->a[4672] = anon_sym_PIPE_PIPE;
	v->a[4673] = anon_sym_AMP_AMP;
	v->a[4674] = anon_sym_PIPE;
	v->a[4675] = anon_sym_AMP;
	v->a[4676] = anon_sym_LT;
	v->a[4677] = anon_sym_GT;
	v->a[4678] = anon_sym_LT_LT;
	v->a[4679] = anon_sym_GT_GT;
	small_parse_table_234(v);
}

void	small_parse_table_234(t_small_parse_table_array *v)
{
	v->a[4680] = anon_sym_esac;
	v->a[4681] = anon_sym_SEMI_SEMI;
	v->a[4682] = anon_sym_SEMI_AMP;
	v->a[4683] = anon_sym_SEMI_SEMI_AMP;
	v->a[4684] = anon_sym_PIPE_AMP;
	v->a[4685] = anon_sym_AMP_GT;
	v->a[4686] = anon_sym_AMP_GT_GT;
	v->a[4687] = anon_sym_LT_AMP;
	v->a[4688] = anon_sym_GT_AMP;
	v->a[4689] = anon_sym_GT_PIPE;
	v->a[4690] = anon_sym_LT_AMP_DASH;
	v->a[4691] = anon_sym_GT_AMP_DASH;
	v->a[4692] = anon_sym_LT_LT_DASH;
	v->a[4693] = anon_sym_LT_LT_LT;
	v->a[4694] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4695] = anon_sym_DOLLAR_LBRACK;
	v->a[4696] = anon_sym_DOLLAR;
	v->a[4697] = sym__special_character;
	v->a[4698] = anon_sym_DQUOTE;
	v->a[4699] = sym_raw_string;
	small_parse_table_235(v);
}

/* EOF small_parse_table_46.c */
