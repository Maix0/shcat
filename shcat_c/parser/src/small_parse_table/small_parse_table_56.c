/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_56.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_280(t_small_parse_table_array *v)
{
	v->a[5600] = anon_sym_LT_LPAREN;
	v->a[5601] = anon_sym_GT_LPAREN;
	v->a[5602] = state(583);
	v->a[5603] = 2;
	v->a[5604] = sym_concatenation;
	v->a[5605] = aux_sym_for_statement_repeat1;
	v->a[5606] = actions(2208);
	v->a[5607] = 3;
	v->a[5608] = sym_raw_string;
	v->a[5609] = sym_ansi_c_string;
	v->a[5610] = sym_word;
	v->a[5611] = actions(2216);
	v->a[5612] = 3;
	v->a[5613] = sym_file_descriptor;
	v->a[5614] = sym_variable_name;
	v->a[5615] = aux_sym_heredoc_redirect_token1;
	v->a[5616] = state(1158);
	v->a[5617] = 9;
	v->a[5618] = sym_arithmetic_expansion;
	v->a[5619] = sym_brace_expression;
	small_parse_table_281(v);
}

void	small_parse_table_281(t_small_parse_table_array *v)
{
	v->a[5620] = sym_string;
	v->a[5621] = sym_translated_string;
	v->a[5622] = sym_number;
	v->a[5623] = sym_simple_expansion;
	v->a[5624] = sym_expansion;
	v->a[5625] = sym_command_substitution;
	v->a[5626] = sym_process_substitution;
	v->a[5627] = actions(2214);
	v->a[5628] = 23;
	v->a[5629] = anon_sym_SEMI;
	v->a[5630] = anon_sym_PIPE_PIPE;
	v->a[5631] = anon_sym_AMP_AMP;
	v->a[5632] = anon_sym_PIPE;
	v->a[5633] = anon_sym_AMP;
	v->a[5634] = anon_sym_LT;
	v->a[5635] = anon_sym_GT;
	v->a[5636] = anon_sym_LT_LT;
	v->a[5637] = anon_sym_GT_GT;
	v->a[5638] = anon_sym_esac;
	v->a[5639] = anon_sym_SEMI_SEMI;
	small_parse_table_282(v);
}

void	small_parse_table_282(t_small_parse_table_array *v)
{
	v->a[5640] = anon_sym_SEMI_AMP;
	v->a[5641] = anon_sym_SEMI_SEMI_AMP;
	v->a[5642] = anon_sym_PIPE_AMP;
	v->a[5643] = anon_sym_AMP_GT;
	v->a[5644] = anon_sym_AMP_GT_GT;
	v->a[5645] = anon_sym_LT_AMP;
	v->a[5646] = anon_sym_GT_AMP;
	v->a[5647] = anon_sym_GT_PIPE;
	v->a[5648] = anon_sym_LT_AMP_DASH;
	v->a[5649] = anon_sym_GT_AMP_DASH;
	v->a[5650] = anon_sym_LT_LT_DASH;
	v->a[5651] = anon_sym_LT_LT_LT;
	v->a[5652] = 25;
	v->a[5653] = actions(3);
	v->a[5654] = 1;
	v->a[5655] = sym_comment;
	v->a[5656] = actions(1549);
	v->a[5657] = 1;
	v->a[5658] = anon_sym_DOLLAR_LBRACK;
	v->a[5659] = actions(1551);
	small_parse_table_283(v);
}

void	small_parse_table_283(t_small_parse_table_array *v)
{
	v->a[5660] = 1;
	v->a[5661] = anon_sym_DOLLAR;
	v->a[5662] = actions(1555);
	v->a[5663] = 1;
	v->a[5664] = anon_sym_DQUOTE;
	v->a[5665] = actions(1557);
	v->a[5666] = 1;
	v->a[5667] = aux_sym_number_token1;
	v->a[5668] = actions(1559);
	v->a[5669] = 1;
	v->a[5670] = aux_sym_number_token2;
	v->a[5671] = actions(1561);
	v->a[5672] = 1;
	v->a[5673] = anon_sym_DOLLAR_LBRACE;
	v->a[5674] = actions(1563);
	v->a[5675] = 1;
	v->a[5676] = anon_sym_DOLLAR_LPAREN;
	v->a[5677] = actions(1567);
	v->a[5678] = 1;
	v->a[5679] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_284(v);
}

void	small_parse_table_284(t_small_parse_table_array *v)
{
	v->a[5680] = actions(1573);
	v->a[5681] = 1;
	v->a[5682] = sym__bare_dollar;
	v->a[5683] = actions(1575);
	v->a[5684] = 1;
	v->a[5685] = sym__brace_start;
	v->a[5686] = actions(1690);
	v->a[5687] = 1;
	v->a[5688] = anon_sym_LT_LT_LT;
	v->a[5689] = actions(1692);
	v->a[5690] = 1;
	v->a[5691] = sym__special_character;
	v->a[5692] = actions(1694);
	v->a[5693] = 1;
	v->a[5694] = sym_test_operator;
	v->a[5695] = state(574);
	v->a[5696] = 1;
	v->a[5697] = aux_sym_command_repeat2;
	v->a[5698] = state(1321);
	v->a[5699] = 1;
	small_parse_table_285(v);
}

/* EOF small_parse_table_56.c */
