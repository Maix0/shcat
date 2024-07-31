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
	v->a[5600] = actions(9);
	v->a[5601] = 1;
	v->a[5602] = anon_sym_for;
	v->a[5603] = actions(13);
	v->a[5604] = 1;
	v->a[5605] = anon_sym_if;
	v->a[5606] = actions(15);
	v->a[5607] = 1;
	v->a[5608] = anon_sym_case;
	v->a[5609] = actions(17);
	v->a[5610] = 1;
	v->a[5611] = anon_sym_LPAREN;
	v->a[5612] = actions(19);
	v->a[5613] = 1;
	v->a[5614] = anon_sym_LBRACE;
	v->a[5615] = actions(53);
	v->a[5616] = 1;
	v->a[5617] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5618] = actions(55);
	v->a[5619] = 1;
	small_parse_table_281(v);
}

void	small_parse_table_281(t_small_parse_table_array *v)
{
	v->a[5620] = anon_sym_DOLLAR;
	v->a[5621] = actions(57);
	v->a[5622] = 1;
	v->a[5623] = anon_sym_DQUOTE;
	v->a[5624] = actions(61);
	v->a[5625] = 1;
	v->a[5626] = anon_sym_DOLLAR_LBRACE;
	v->a[5627] = actions(63);
	v->a[5628] = 1;
	v->a[5629] = anon_sym_DOLLAR_LPAREN;
	v->a[5630] = actions(65);
	v->a[5631] = 1;
	v->a[5632] = anon_sym_BQUOTE;
	v->a[5633] = actions(67);
	v->a[5634] = 1;
	v->a[5635] = sym_variable_name;
	v->a[5636] = actions(202);
	v->a[5637] = 1;
	v->a[5638] = sym_word;
	v->a[5639] = actions(204);
	small_parse_table_282(v);
}

void	small_parse_table_282(t_small_parse_table_array *v)
{
	v->a[5640] = 1;
	v->a[5641] = anon_sym_BANG;
	v->a[5642] = state(119);
	v->a[5643] = 1;
	v->a[5644] = aux_sym__statements_repeat1;
	v->a[5645] = state(272);
	v->a[5646] = 1;
	v->a[5647] = sym_command_name;
	v->a[5648] = state(283);
	v->a[5649] = 1;
	v->a[5650] = sym_variable_assignment;
	v->a[5651] = state(486);
	v->a[5652] = 1;
	v->a[5653] = aux_sym_command_repeat1;
	v->a[5654] = state(602);
	v->a[5655] = 1;
	v->a[5656] = sym_concatenation;
	v->a[5657] = state(636);
	v->a[5658] = 1;
	v->a[5659] = sym_file_redirect;
	small_parse_table_283(v);
}

void	small_parse_table_283(t_small_parse_table_array *v)
{
	v->a[5660] = state(951);
	v->a[5661] = 1;
	v->a[5662] = sym_pipeline;
	v->a[5663] = state(1006);
	v->a[5664] = 1;
	v->a[5665] = aux_sym_redirected_statement_repeat2;
	v->a[5666] = state(1605);
	v->a[5667] = 1;
	v->a[5668] = sym__statement_not_pipeline;
	v->a[5669] = state(1668);
	v->a[5670] = 1;
	v->a[5671] = sym__statements;
	v->a[5672] = actions(11);
	v->a[5673] = 2;
	v->a[5674] = anon_sym_while;
	v->a[5675] = anon_sym_until;
	v->a[5676] = actions(59);
	v->a[5677] = 2;
	v->a[5678] = sym_raw_string;
	v->a[5679] = sym_number;
	small_parse_table_284(v);
}

void	small_parse_table_284(t_small_parse_table_array *v)
{
	v->a[5680] = state(425);
	v->a[5681] = 5;
	v->a[5682] = sym_arithmetic_expansion;
	v->a[5683] = sym_string;
	v->a[5684] = sym_simple_expansion;
	v->a[5685] = sym_expansion;
	v->a[5686] = sym_command_substitution;
	v->a[5687] = actions(51);
	v->a[5688] = 7;
	v->a[5689] = anon_sym_LT;
	v->a[5690] = anon_sym_GT;
	v->a[5691] = anon_sym_GT_GT;
	v->a[5692] = anon_sym_LT_AMP;
	v->a[5693] = anon_sym_GT_AMP;
	v->a[5694] = anon_sym_GT_PIPE;
	v->a[5695] = anon_sym_LT_GT;
	v->a[5696] = state(849);
	v->a[5697] = 12;
	v->a[5698] = sym_redirected_statement;
	v->a[5699] = sym_for_statement;
	small_parse_table_285(v);
}

/* EOF small_parse_table_56.c */
