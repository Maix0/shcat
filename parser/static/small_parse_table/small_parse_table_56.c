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
	v->a[5600] = sym_command_substitution;
	v->a[5601] = actions(1278);
	v->a[5602] = 21;
	v->a[5603] = anon_sym_PIPE;
	v->a[5604] = anon_sym_SEMI_SEMI;
	v->a[5605] = anon_sym_SEMI_AMP;
	v->a[5606] = anon_sym_SEMI_SEMI_AMP;
	v->a[5607] = anon_sym_PIPE_AMP;
	v->a[5608] = anon_sym_AMP_AMP;
	v->a[5609] = anon_sym_PIPE_PIPE;
	v->a[5610] = anon_sym_LT;
	v->a[5611] = anon_sym_GT;
	v->a[5612] = anon_sym_GT_GT;
	v->a[5613] = anon_sym_AMP_GT;
	v->a[5614] = anon_sym_AMP_GT_GT;
	v->a[5615] = anon_sym_LT_AMP;
	v->a[5616] = anon_sym_GT_AMP;
	v->a[5617] = anon_sym_GT_PIPE;
	v->a[5618] = anon_sym_LT_AMP_DASH;
	v->a[5619] = anon_sym_GT_AMP_DASH;
	small_parse_table_281(v);
}

void	small_parse_table_281(t_small_parse_table_array *v)
{
	v->a[5620] = anon_sym_LT_LT;
	v->a[5621] = anon_sym_LT_LT_DASH;
	v->a[5622] = anon_sym_AMP;
	v->a[5623] = anon_sym_SEMI;
	v->a[5624] = 21;
	v->a[5625] = actions(3);
	v->a[5626] = 1;
	v->a[5627] = sym_comment;
	v->a[5628] = actions(1346);
	v->a[5629] = 1;
	v->a[5630] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5631] = actions(1349);
	v->a[5632] = 1;
	v->a[5633] = anon_sym_DOLLAR;
	v->a[5634] = actions(1355);
	v->a[5635] = 1;
	v->a[5636] = anon_sym_DQUOTE;
	v->a[5637] = actions(1358);
	v->a[5638] = 1;
	v->a[5639] = aux_sym_number_token1;
	small_parse_table_282(v);
}

void	small_parse_table_282(t_small_parse_table_array *v)
{
	v->a[5640] = actions(1361);
	v->a[5641] = 1;
	v->a[5642] = aux_sym_number_token2;
	v->a[5643] = actions(1364);
	v->a[5644] = 1;
	v->a[5645] = anon_sym_DOLLAR_LBRACE;
	v->a[5646] = actions(1367);
	v->a[5647] = 1;
	v->a[5648] = anon_sym_DOLLAR_LPAREN;
	v->a[5649] = actions(1370);
	v->a[5650] = 1;
	v->a[5651] = anon_sym_BQUOTE;
	v->a[5652] = actions(1373);
	v->a[5653] = 1;
	v->a[5654] = anon_sym_DOLLAR_BQUOTE;
	v->a[5655] = actions(1385);
	v->a[5656] = 1;
	v->a[5657] = sym__brace_start;
	v->a[5658] = actions(1577);
	v->a[5659] = 1;
	small_parse_table_283(v);
}

void	small_parse_table_283(t_small_parse_table_array *v)
{
	v->a[5660] = sym__special_character;
	v->a[5661] = actions(1580);
	v->a[5662] = 1;
	v->a[5663] = aux_sym__simple_variable_name_token1;
	v->a[5664] = actions(1583);
	v->a[5665] = 1;
	v->a[5666] = sym_variable_name;
	v->a[5667] = actions(1586);
	v->a[5668] = 1;
	v->a[5669] = sym_test_operator;
	v->a[5670] = state(1024);
	v->a[5671] = 1;
	v->a[5672] = aux_sym__literal_repeat1;
	v->a[5673] = actions(766);
	v->a[5674] = 2;
	v->a[5675] = sym_file_descriptor;
	v->a[5676] = aux_sym_heredoc_redirect_token1;
	v->a[5677] = actions(1574);
	v->a[5678] = 2;
	v->a[5679] = sym_raw_string;
	small_parse_table_284(v);
}

void	small_parse_table_284(t_small_parse_table_array *v)
{
	v->a[5680] = sym_word;
	v->a[5681] = state(328);
	v->a[5682] = 3;
	v->a[5683] = sym_variable_assignment;
	v->a[5684] = sym_concatenation;
	v->a[5685] = aux_sym_declaration_command_repeat1;
	v->a[5686] = state(906);
	v->a[5687] = 7;
	v->a[5688] = sym_arithmetic_expansion;
	v->a[5689] = sym_brace_expression;
	v->a[5690] = sym_string;
	v->a[5691] = sym_number;
	v->a[5692] = sym_simple_expansion;
	v->a[5693] = sym_expansion;
	v->a[5694] = sym_command_substitution;
	v->a[5695] = actions(764);
	v->a[5696] = 19;
	v->a[5697] = anon_sym_PIPE;
	v->a[5698] = anon_sym_SEMI_SEMI;
	v->a[5699] = anon_sym_PIPE_AMP;
	small_parse_table_285(v);
}

/* EOF small_parse_table_56.c */
